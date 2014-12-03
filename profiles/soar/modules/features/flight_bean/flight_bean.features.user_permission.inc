<?php
/**
 * @file
 * flight_bean.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function flight_bean_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any block bean'.
  $permissions['create any block bean'] = array(
    'name' => 'create any block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create any button bean'.
  $permissions['create any button bean'] = array(
    'name' => 'create any button bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create any image_text_link bean'.
  $permissions['create any image_text_link bean'] = array(
    'name' => 'create any image_text_link bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create any links bean'.
  $permissions['create any links bean'] = array(
    'name' => 'create any links bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any block bean'.
  $permissions['delete any block bean'] = array(
    'name' => 'delete any block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any button bean'.
  $permissions['delete any button bean'] = array(
    'name' => 'delete any button bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any image_text_link bean'.
  $permissions['delete any image_text_link bean'] = array(
    'name' => 'delete any image_text_link bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any links bean'.
  $permissions['delete any links bean'] = array(
    'name' => 'delete any links bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any block bean'.
  $permissions['edit any block bean'] = array(
    'name' => 'edit any block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any button bean'.
  $permissions['edit any button bean'] = array(
    'name' => 'edit any button bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any image_text_link bean'.
  $permissions['edit any image_text_link bean'] = array(
    'name' => 'edit any image_text_link bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any links bean'.
  $permissions['edit any links bean'] = array(
    'name' => 'edit any links bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any block bean'.
  $permissions['view any block bean'] = array(
    'name' => 'view any block bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any button bean'.
  $permissions['view any button bean'] = array(
    'name' => 'view any button bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any image_text_link bean'.
  $permissions['view any image_text_link bean'] = array(
    'name' => 'view any image_text_link bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any links bean'.
  $permissions['view any links bean'] = array(
    'name' => 'view any links bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(),
    'module' => 'bean',
  );

  return $permissions;
}
