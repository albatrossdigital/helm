<?php
/**
 * @file
 * helm_deploy_client.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function helm_deploy_client_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
