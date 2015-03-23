<?php
/**
 * @file
 * helm_social.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function helm_social_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_social_networks'
  $field_bases['field_social_networks'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_networks',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'socialfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'social_links_field',
  );

  return $field_bases;
}
