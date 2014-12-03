Recommended customizations to settings.php
------------------------------------------
These are common changes made to settings.php for Pantheon-hosted sites:

```
// It's easier to store some api configs in settings.php if deploying multiple sites
$conf['media_inkfilepicker_key'] = '';

// Force caching on prod site
if (isset($_SERVER['PANTHEON_ENVIRONMENT']) && $_SERVER['PANTHEON_ENVIRONMENT'] === 'live') {
  $conf['cache'] = 1;
  $conf['block_cache'] = 1;
  $conf['preprocess_css'] = 1;
  $conf['preprocess_js'] = 1;
  $conf['page_cache_maximum_age'] = 900;  // 15 mins
  $conf['advagg_enabled'] = 1; 
}

// Setup redis
if (defined('PANTHEON_ENVIRONMENT')) {
  // Use Redis for caching.
  $conf['redis_client_interface'] = 'PhpRedis';
  $conf['cache_backends'][] = 'profiles/flight/modules/contrib/redis/redis.autoload.inc';
  $conf['cache_default_class'] = 'Redis_Cache';
  $conf['cache_prefix'] = array('default' => 'pantheon-redis');
  // Do not use Redis for cache_form (no performance difference).
  $conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
  // Use Redis for Drupal locks (semaphore).
  $conf['lock_inc'] = 'sites/all/modules/contrib/redis/redis.lock.inc';
}
// Optional Pantheon redis settings.
if (defined('PANTHEON_ENVIRONMENT')) {
  // High performance - no hook_boot(), no hook_exit(), ignores Drupal IP blacklists.
  $conf['page_cache_without_database'] = TRUE;
  $conf['page_cache_invoke_hooks'] = FALSE;
  // Explicitly set page_cache_maximum_age as database won't be available.
  $conf['page_cache_maximum_age'] = 300;
}

// Redirect all domains to TLD
if (isset($_SERVER['PANTHEON_ENVIRONMENT']) && $_SERVER['PANTHEON_ENVIRONMENT'] === 'live') {
  if ($_SERVER['HTTP_HOST'] != 'example.com') {
    header('HTTP/1.0 301 Moved Permanently'); 
    header('Location: http://example.com'. $_SERVER['REQUEST_URI']); 
    exit();
  }
}

// Allow feeds to import more records per run
//$conf['feeds_process_limit'] = 1000;
```


Recommended settings for a local settings.php
---------------------------------------------
Disable caches, reset the files directory
```
$conf['cache'] = 0;
$conf['block_cache'] = 0;
$conf['preprocess_css'] = 0;
$conf['preprocess_js'] = 0;
$conf['preprocess_js'] = 0;
$conf['file_temporary_path'] = '/tmp';
$conf['file_public_path'] = 'sites/example.local/files';
$conf['file_private_path'] = 'sites/example.local/files/private';
```
