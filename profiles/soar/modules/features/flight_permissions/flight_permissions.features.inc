<?php
/**
 * @file
 * flight_permissions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function flight_permissions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
