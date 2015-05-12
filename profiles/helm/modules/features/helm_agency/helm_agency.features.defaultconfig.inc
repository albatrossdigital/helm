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
      'user_default_permissions' => 'user_default_permissions',
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

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function helm_agency_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create agency content'.
  $permissions['create agency content'] = array(
    'name' => 'create agency content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any agency content'.
  $permissions['delete any agency content'] = array(
    'name' => 'delete any agency content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own agency content'.
  $permissions['delete own agency content'] = array(
    'name' => 'delete own agency content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in agency_category'.
  $permissions['delete terms in agency_category'] = array(
    'name' => 'delete terms in agency_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any agency content'.
  $permissions['edit any agency content'] = array(
    'name' => 'edit any agency content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own agency content'.
  $permissions['edit own agency content'] = array(
    'name' => 'edit own agency content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in agency_category'.
  $permissions['edit terms in agency_category'] = array(
    'name' => 'edit terms in agency_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
