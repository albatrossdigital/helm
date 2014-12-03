<?php

/**
 * @file
 * drush integration for underscore module.
 */

/**
 * Implements hook_drush_command().
 */
function underscore_drush_command() {
  $items = array();

  // The key in the $items array is the name of the command.
  $items['underscore-download'] = array(
    'callback' => 'underscore_drush_download',
    'description' => dt("Downloads the Underscore.js library."),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'arguments' => array(
      'path' => dt('Optional. The path to your shared libraries. If omitted Drush will use the default location.'),
    ),
    'aliases' => array('ujsdl'),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function underscore_drush_help($section) {
  switch ($section) {
    case 'drush:underscore-download':
      $path = 'sites/all/librarires';
      $msg  = dt("Downloads Underscore.js. Default location is @path.",
                array('@path' => $path));
      return $msg;
  }
}

/**
 * Downloads Underscore.js.
 */
function underscore_drush_download() {

  if (!drush_shell_exec('type unzip')) {
    return drush_set_error(dt('Missing dependency: unzip. Install it before using this command.'));
  }

  $args = func_get_args();
  if ($args[0]) {
    $path = $args[0];
  }
  else {
    $path = 'sites/all/libraries';
  }

  // Create path directory if needed.
  if (!is_dir($path)) {
    drush_op('mkdir', $path);
    drush_log(dt('Directory @path was created', array('@path' => $path)), 'notice');
  }

  // Add the directory for storing underscore.
  $path .= "/" . UNDERSCORE_DEFAULT_LIBRARY_FOLDER_NAME;

  // Create the underscore path if it does not exist.
  if (!is_dir($path)) {
    drush_op('mkdir', $path);
    drush_log(dt('Directory @path was created', array('@path' => $path)), 'notice');
  }
  else {
    drush_log(dt('Directory @path exists and will be used', array('@path' => $path)), 'notice');
  }

  // Set the directory to the download location.
  $olddir = getcwd();
  chdir($path);

  // Remove existing js if present.
  if (is_file(UNDERSCORE_DEFAULT_LIBRARY_FILE_NAME)) {
    drush_op('unlink', UNDERSCORE_DEFAULT_LIBRARY_FILE_NAME);
  }

  // Download the JS.
  if (!drush_shell_exec('wget ' . UNDERSCORE_CURRENT_VERSION_MASTER_URI)) {
    drush_shell_exec('curl -O ' . UNDERSCORE_CURRENT_VERSION_MASTER_URI);
  }

  // Set working directory back to the previous working directory.
  chdir($olddir);

  if (is_dir($path)) {
    drush_log(dt('Underscore.js has been downloaded to @path', array('@path' => $path)), 'success');
  }
  else {
    drush_log(dt('Drush was unable to download Underscore.js to @path', array('@path' => $path)), 'error');
  }
}
