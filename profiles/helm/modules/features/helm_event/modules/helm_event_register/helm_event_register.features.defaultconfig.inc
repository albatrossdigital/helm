<?php
/**
 * @file
 * helm_event_register.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_event_register_defaultconfig_features() {
  return array(
    'helm_event_register' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function helm_event_register_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer default registration'.
  $permissions['administer default registration'] = array(
    'name' => 'administer default registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'administer own default registration'.
  $permissions['administer own default registration'] = array(
    'name' => 'administer own default registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration states'.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration types'.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'create default registration'.
  $permissions['create default registration'] = array(
    'name' => 'create default registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'create default registration other anonymous'.
  $permissions['create default registration other anonymous'] = array(
    'name' => 'create default registration other anonymous',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'create default registration other users'.
  $permissions['create default registration other users'] = array(
    'name' => 'create default registration other users',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'delete any default registration'.
  $permissions['delete any default registration'] = array(
    'name' => 'delete any default registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'delete own default registration'.
  $permissions['delete own default registration'] = array(
    'name' => 'delete own default registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'edit default registration state'.
  $permissions['edit default registration state'] = array(
    'name' => 'edit default registration state',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'update any default registration'.
  $permissions['update any default registration'] = array(
    'name' => 'update any default registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'update own default registration'.
  $permissions['update own default registration'] = array(
    'name' => 'update own default registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'view default registration'.
  $permissions['view default registration'] = array(
    'name' => 'view default registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'view own default registration'.
  $permissions['view own default registration'] = array(
    'name' => 'view own default registration',
    'roles' => array(),
    'module' => 'registration',
  );

  return $permissions;
}
