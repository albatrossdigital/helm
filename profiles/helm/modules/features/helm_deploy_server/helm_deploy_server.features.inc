<?php
/**
 * @file
 * helm_deploy_server.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function helm_deploy_server_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "deploy" && $api == "deploy_endpoints") {
    return array("version" => "1");
  }
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
