<?php
/**
 * @file
 * flight_bean.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function flight_bean_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
