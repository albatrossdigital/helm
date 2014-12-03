<?php
/**
 * @file
 * flight_slideshow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function flight_slideshow_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any slideshow bean'.
  $permissions['create any slideshow bean'] = array(
    'name' => 'create any slideshow bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any slideshow bean'.
  $permissions['delete any slideshow bean'] = array(
    'name' => 'delete any slideshow bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any slideshow bean'.
  $permissions['edit any slideshow bean'] = array(
    'name' => 'edit any slideshow bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any slideshow bean'.
  $permissions['view any slideshow bean'] = array(
    'name' => 'view any slideshow bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
