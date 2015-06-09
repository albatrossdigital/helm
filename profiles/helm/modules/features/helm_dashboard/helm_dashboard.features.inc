<?php
/**
 * @file
 * helm_dashboard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function helm_dashboard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}
