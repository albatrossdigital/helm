<?php

function fast_404_ext_check() {

  // Determine the request uri. We are only interested in the path component,
  // so strip out any other information. Since parse_url() is does not work well
  // with relative URLs, we temporarily prepend a dummy scheme and domain name.
  $uri = request_uri();
  $path = parse_url('http://example.com' . $uri, PHP_URL_PATH);

  // Ignore calls to the homepage, to avoid unnecessary processing.
  if ($path == '/') {
    return TRUE;
  }

  // Check to see if the URL is an imagecache URL, those are handled via
  // Drupal.
  if (strpos($path, 'styles/')) {

    // Check to see if we will allow anon users to access this page.
    if (!variable_get('fast_404_allow_anon_imagecache', TRUE)) {
      $found_session = FALSE;

      // At this stage of the game we don't know if the user is logged in via
      // regular function calls. Simply look for a session cookie. If we find
      // one we'll assume they're logged in
      foreach ($_COOKIE as $k => $v) {
        if (stristr($k, 'SESS')) {
          $found_session = TRUE;
          break;
        }
      }

      // Found a session. We're going to assume they're logged in.
      if ($found_session) {
        return TRUE;
      }
    }

    // We're allowing anyone to hit non-existing imagecache URLs (default
    // behavior).
    else {
      return TRUE;
    }
  }

  // If we are using URL whitelisting then determine if the current URL is
  // whitelisted before running the extension check.
  if (variable_get('fast_404_url_whitelisting', FALSE)) {
    $allowed = variable_get('fast_404_whitelist', array());
    if (in_array($path, $allowed)) {
      // URL is whitelisted. Assumed good.
      return TRUE;
    }
  }

  // Check for whitelisted strings in the URL
  if (is_array(variable_get('fast_404_string_whitelisting', FALSE))) {
    foreach (variable_get('fast_404_string_whitelisting', array()) as $str) {
      if (strstr($path, $str) !== FALSE) {
        return TRUE;
      }
    }
  }

  // Load up the blacklisted extensions.
  $exts = variable_get('fast_404_exts', '/^(?!robots).*\.(txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i');

  // Determine if URL is in blacklisted extensions.
  if ($exts && preg_match($exts, $path, $m)) {
    fast_404_error_return(FALSE, variable_get('fast_404_return_gone', FALSE));
  }

  define('FAST_404_EXT_CHECKED', TRUE);
}

/**
 * Check a Drupal path to see if it really exists and load a fast 404 if not
 */
function fast_404_path_check() {
  $valid = TRUE;

  if (variable_get('fast_404_path_check', FALSE) && !empty($_GET['q'])) {

    // Determine if we have the db_query function. If so, we are in boot and
    // have functions. If not we are in settings.php and do not have functions.
    if (function_exists('db_query')) {
      $valid = fast_404_validate_path_drupal();
    }
    else {
      $valid = fast_404_validate_path_mysql();
    }
  }

  if (!$valid) {
    fast_404_error_return(TRUE, variable_get('fast_404_return_gone', FALSE));
  }

  define('FAST_404_PATH_CHECKED', TRUE);
}

/**
 * Check to see if a path works using Drupal MySQL functions
 * 
 * @return boolean
 */
function fast_404_validate_path_drupal() {

  // Check if redirect module is installed.
  if (db_query("SELECT name FROM {system} WHERE type = 'module' AND status = 1 AND name = 'redirect'")->fetchField()) {
    // Check if path exits in redirect table.
    if (db_query("SELECT rid FROM {redirect} WHERE ? = source", array($_GET['q']))->fetchField()) {
      return TRUE;
    }
  }
  
  $q = $_GET['q'];
 
  // Act only when locale is enabled  
  // TODO: Need to actually check if url negotiator is enabled 
  if (db_query("SELECT status FROM {system} WHERE type = 'module' AND name = 'locale' AND status = 1")->fetchField()) {
    $prefixes = db_query("SELECT prefix FROM {languages} WHERE enabled = 1 AND prefix != ''");
    $lang_prefixes = $prefixes->fetchCol();
  
    $path_parts = explode('/', $q);
    if (in_array($path_parts[0], $lang_prefixes)) {
      if (count($path_parts) == 1) {
        return TRUE;
      }
      $q = substr($q, strlen($path_parts[0]) + 1);
    }
  }  

  $sql = "SELECT path FROM {menu_router} WHERE ? LIKE CONCAT(path, '%')";
  $res = db_query($sql, array($q))->fetchField();
  if ($res) {
    return TRUE;
  }
  else {
    $res = db_query("SELECT pid FROM {url_alias} WHERE alias = :alias", array(':alias' => $_GET['q']))->fetchField();
    return $res == 0 ? FALSE : TRUE;
  }

  return FALSE;
}

/**
 * Check to see if a path exists using plain MySQL functions
 * 
 * @global array $databases
 * @return boolean 
 */
function fast_404_validate_path_mysql() {
  global $databases;

  // Databases aren't set. They need to be set to work.
  if (!isset($databases) || !is_array($databases['default']['default']) || $databases['default']['default']['driver'] != 'mysql') {
    // We can't check this URL here. Return TRUE to let Drupal continue
    // bootstrapping.
    return TRUE;
  }

  $sql = "SELECT path FROM menu_router WHERE path = '%s' OR '%s' LIKE CONCAT(path, '/%')";
  $sql2 = "SELECT pid FROM url_alias WHERE alias = '%s'";
  $sql3 = "SELECT rid FROM redirect WHERE '%s' LIKE source";

  $db = $databases['default']['default'];

  // Query the database via either mysql or mysqli.
  if ($databases['default']['default']['driver'] == 'mysql') {
    
    // mysqli_connect() fails if port is an empty string. Force the default
    // mysql port if $db['port'] is empty.
    if (empty($db['port'])) {
      $db['port'] = 3306;
    }

   $conn = mysqli_connect($db['host'], $db['username'], $db['password'], $db['database'], $db['port']);

    $q = $_GET['q'];
    // Act only when locale is enabled
    $res = mysqli_query($conn, "SELECT status FROM system WHERE name='locale'");
    $locale = mysqli_fetch_object($res);
    // TODO: Need to actually check if url negotiator is enabled
    if ($locale && $locale->status == 1) {
      $res = mysqli_query($conn, "SELECT prefix FROM languages WHERE enabled = 1 AND prefix != ''");
      $lang_prefixes = array();
      while($item = mysqli_fetch_object($res)) {
        $lang_prefixes[] = $item->prefix;
      }
      $path_parts = explode('/', $q);
      if (in_array($path_parts[0], $lang_prefixes)) {
        if (count($path_parts) == 1) {
          return TRUE;
        }
        $q = substr($q, strlen($path_parts[0]) + 1);
      }
    }
    
    // Check if redirect module is installed.
    if (mysqli_fetch_row(mysqli_query($conn, "SELECT name FROM system WHERE type = 'module' AND status = 1 AND name = 'redirect'"))) {
      // Check if path exits in redirect table.
      $sql3 = str_replace('%s', mysqli_real_escape_string($conn, $q), $sql3);
      if (mysqli_fetch_row(mysqli_query($conn, $sql3))) {
        return TRUE;
      }
    }

    $sql = str_replace('%s', mysqli_real_escape_string($conn, $q), $sql);
    $res = mysqli_query($conn, $sql);
    $row = mysqli_fetch_row($res);
    if (!is_array($row)) {
      $sql2 = str_replace('%s', mysqli_real_escape_string($conn, $q), $sql2);
      $res = mysqli_query($conn, $sql2);
      $row = mysqli_fetch_row($res);
      return is_array($row) > 0 ? TRUE : FALSE;
    }
    else {
      return TRUE;
    }
  }
  else {
    // We can't check this URL here. Return TRUE to let Drupal continue
    // bootstrapping.
    return TRUE;
  }

  return TRUE;
}

/**
 * Output our super plain error and exit
 */
function fast_404_error_return($load_html = FALSE, $return_gone = FALSE) {

  // Gone informs good net citizens not to come back because this resource
  // will not reappear on the server.
  if ($return_gone){
    header((variable_get('fast_404_HTTP_status_method', 'mod_php') == 'FastCGI' ? 'Status:' : 'HTTP/1.0') . ' 410 Gone');
  } else {
    header((variable_get('fast_404_HTTP_status_method', 'mod_php') == 'FastCGI' ? 'Status:' : 'HTTP/1.0') . ' 404 Not Found');
  }
  
  // If a file is set to provide us with fast_404 joy, load it
  if (($load_html || variable_get('fast_404_HTML_error_all_paths', FALSE)) 
          && file_exists(variable_get('fast_404_HTML_error_page', FALSE))) {
    $fast_404_html = @file_get_contents(variable_get('fast_404_HTML_error_page', FALSE));
  }
  
  // If we don't have fast 404 html yet, use the default
  if (!isset($fast_404_html) || empty($fast_404_html)) {
    $fast_404_html = variable_get('fast_404_html', '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>');
  }
  print strtr($fast_404_html, array('@path' => check_plain(request_uri())));
  exit();
}
