<?php
/**
 * @file
 * helm_agency.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_agency_defaultconfig_features() {
  return array(
    'helm_agency' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function helm_agency_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_agency_pattern';
  $strongarm->value = 'agencies/[node:title]';
  $export['pathauto_node_agency_pattern'] = $strongarm;

  return $export;
}
