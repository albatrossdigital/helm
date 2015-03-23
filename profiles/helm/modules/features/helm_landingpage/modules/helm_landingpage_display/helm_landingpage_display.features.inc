<?php
/**
 * @file
 * helm_landingpage_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function helm_landingpage_display_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}
