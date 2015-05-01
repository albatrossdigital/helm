<?php

// Memcache settings
define('MEMCACHE_IP', '127.0.0.1');
define('MEMCACHE_PORT', '11211');
define('MEMCACHE_COMPRESSING', MEMCACHE_COMPRESSED);
define('MEMCACHE_EXPIRE', 60 * 60 * 24);

header("Cache-Control: max-age=460");

error_reporting(E_ALL ^ E_NOTICE);

$keys = $_REQUEST['keys'];
$search = $_REQUEST['search'];

$cache_key = str_replace('/', '', $keys);
$cache_key = str_replace(' ', '-', $cache_key);

if ($data = nas_memcache_get(MEMCACHE_IP, MEMCACHE_PORT, $cache_key)) {
  print $data;
}
else {  
  // @TODO url construction is not complete.
  $url = "http://". $_SERVER['SERVER_NAME'].  '/search_api_live_results/' . urlencode($search) . '/' . urlencode($keys);
  $data = file_get_contents($url);
  
  nas_memcache_add(MEMCACHE_IP, MEMCACHE_PORT, $cache_key, $data, MEMCACHE_COMPRESSING, time() + MEMCACHE_EXPIRE);

  print $data;
}

function nas_memcache_add($bin, $port, $key, $value, $compress = MEMCACHE_COMPRESSED, $expire) {
  try {
    if (class_exists('Memcache')) {
      $mc = new Memcache;
      $mc->connect($bin, $port);
      $mc->add($key, $value, $compress, $expire);
    }
  } catch (Exception $e) {

  }
}

function nas_memcache_get($bin, $port, $key) {
  try {
    if (class_exists('Memcache')) {
      $mc = new Memcache;
      $mc->connect($bin, $port);
      return $mc->get($key);
    }
  } catch (Exception $e) {

  }
}
