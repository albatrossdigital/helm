<?php
/**
 * @file
 * liftoff_lorem_ipsum.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function liftoff_lorem_ipsum_defaultconfig_features() {
  return array(
    'liftoff_lorem_ipsum' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function liftoff_lorem_ipsum_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_lorem_ipsum_pattern';
  $strongarm->value = '';
  $export['pathauto_node_lorem_ipsum_pattern'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function liftoff_lorem_ipsum_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create lorem_ipsum content'.
  $permissions['create lorem_ipsum content'] = array(
    'name' => 'create lorem_ipsum content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lorem_ipsum content'.
  $permissions['delete any lorem_ipsum content'] = array(
    'name' => 'delete any lorem_ipsum content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lorem_ipsum content'.
  $permissions['delete own lorem_ipsum content'] = array(
    'name' => 'delete own lorem_ipsum content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any lorem_ipsum content'.
  $permissions['edit any lorem_ipsum content'] = array(
    'name' => 'edit any lorem_ipsum content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lorem_ipsum content'.
  $permissions['edit own lorem_ipsum content'] = array(
    'name' => 'edit own lorem_ipsum content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
