<?php
/**
 * @file
 * helm_faq.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_faq_defaultconfig_features() {
  return array(
    'helm_faq' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function helm_faq_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_faq_pattern';
  $strongarm->value = 'answers/[node:title]';
  $export['pathauto_node_faq_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_faq_category_pattern';
  $strongarm->value = 'answers/[term:name]';
  $export['pathauto_taxonomy_term_faq_category_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_faq_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_faq_tags_pattern'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function helm_faq_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create faq content'.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq content'.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq content'.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in faq_category'.
  $permissions['delete terms in faq_category'] = array(
    'name' => 'delete terms in faq_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in faq_tags'.
  $permissions['delete terms in faq_tags'] = array(
    'name' => 'delete terms in faq_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any faq content'.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq content'.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in faq_category'.
  $permissions['edit terms in faq_category'] = array(
    'name' => 'edit terms in faq_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in faq_tags'.
  $permissions['edit terms in faq_tags'] = array(
    'name' => 'edit terms in faq_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
