<?php
/**
 * @file
 * soar_people.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function soar_people_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any person content'.
  $permissions['delete any person content'] = array(
    'name' => 'delete any person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own person content'.
  $permissions['delete own person content'] = array(
    'name' => 'delete own person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any person content'.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own person content'.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
