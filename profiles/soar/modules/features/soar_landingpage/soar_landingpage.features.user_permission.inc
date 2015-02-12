<?php
/**
 * @file
 * soar_landingpage.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function soar_landingpage_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create landingpage content'.
  $permissions['create landingpage content'] = array(
    'name' => 'create landingpage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any landingpage content'.
  $permissions['delete any landingpage content'] = array(
    'name' => 'delete any landingpage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own landingpage content'.
  $permissions['delete own landingpage content'] = array(
    'name' => 'delete own landingpage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any landingpage content'.
  $permissions['edit any landingpage content'] = array(
    'name' => 'edit any landingpage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own landingpage content'.
  $permissions['edit own landingpage content'] = array(
    'name' => 'edit own landingpage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
