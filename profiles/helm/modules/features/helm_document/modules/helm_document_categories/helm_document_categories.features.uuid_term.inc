<?php
/**
 * @file
 * helm_document_categories.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function helm_document_categories_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Meeting Minutes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '6f7e02b6-7e6e-4445-b9cf-055517ccd9ae',
    'vocabulary_machine_name' => 'document_category',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Regulations',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '820f6028-f850-4adf-8c4d-6edd95be07eb',
    'vocabulary_machine_name' => 'document_category',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Forms',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a65bb90a-5b89-4b03-b4ff-cdc06a869c1b',
    'vocabulary_machine_name' => 'document_category',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
