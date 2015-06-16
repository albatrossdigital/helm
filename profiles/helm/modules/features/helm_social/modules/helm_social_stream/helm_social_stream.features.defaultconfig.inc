<?php
/**
 * @file
 * helm_social_stream.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_social_stream_defaultconfig_features() {
  return array(
    'helm_social_stream' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function helm_social_stream_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create social_wall content'.
  $permissions['create social_wall content'] = array(
    'name' => 'create social_wall content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any social_wall content'.
  $permissions['delete any social_wall content'] = array(
    'name' => 'delete any social_wall content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own social_wall content'.
  $permissions['delete own social_wall content'] = array(
    'name' => 'delete own social_wall content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any social_wall content'.
  $permissions['edit any social_wall content'] = array(
    'name' => 'edit any social_wall content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own social_wall content'.
  $permissions['edit own social_wall content'] = array(
    'name' => 'edit own social_wall content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
