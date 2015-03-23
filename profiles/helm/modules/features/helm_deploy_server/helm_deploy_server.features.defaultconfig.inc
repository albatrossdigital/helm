<?php
/**
 * @file
 * helm_deploy_server.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_deploy_server_defaultconfig_features() {
  return array(
    'helm_deploy_server' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function helm_deploy_server_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'deploy_auto_plan_name';
  $strongarm->value = 'helm_deploy';
  $export['deploy_auto_plan_name'] = $strongarm;

  return $export;
}
