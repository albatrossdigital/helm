<?php
/**
 * @file
 * soar_event.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function soar_event_defaultconfig_features() {
  return array(
    'soar_event' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function soar_event_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_pattern';
  $strongarm->value = 'event/[node:title]';
  $export['pathauto_node_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_event_category_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_event_category_pattern'] = $strongarm;

  return $export;
}
