<?php
/**
 * @file
 * flight_input_formats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function flight_input_formats_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
