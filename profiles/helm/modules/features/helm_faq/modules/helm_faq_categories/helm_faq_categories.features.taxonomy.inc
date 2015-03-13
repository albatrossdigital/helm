<?php
/**
 * @file
 * helm_faq_categories.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function helm_faq_categories_taxonomy_default_vocabularies() {
  return array(
    'faq_category' => array(
      'name' => 'How Do I Category',
      'machine_name' => 'faq_category',
      'description' => 'Used to organize How Do Is',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
