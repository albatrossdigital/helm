<?php
/**
 * @file
 * soar_sitemap.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soar_sitemap_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
