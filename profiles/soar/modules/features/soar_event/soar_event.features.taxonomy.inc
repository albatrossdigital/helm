<?php
/**
 * @file
 * soar_event.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function soar_event_taxonomy_default_vocabularies() {
  return array(
    'event_category' => array(
      'name' => 'Event Category',
      'machine_name' => 'event_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
