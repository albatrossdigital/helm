<?php
/**
 * @file
 * angular_311.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function angular_311_defaultconfig_features() {
  return array(
    'angular_311' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function angular_311_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cors_domains';
  $strongarm->value = array(
    'api/311/*' => '*|*|Origin, X-Requested-With, Content-Type, Accept',
  );
  $export['cors_domains'] = $strongarm;

  return $export;
}
