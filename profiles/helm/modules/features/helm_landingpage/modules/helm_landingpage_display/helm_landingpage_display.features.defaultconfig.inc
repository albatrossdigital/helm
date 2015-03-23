<?php
/**
 * @file
 * helm_landingpage_display.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_landingpage_display_defaultconfig_features() {
  return array(
    'helm_landingpage_display' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function helm_landingpage_display_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node landingpage breadcrumbs'.
  $permissions['administer panelizer node landingpage breadcrumbs'] = array(
    'name' => 'administer panelizer node landingpage breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landingpage content'.
  $permissions['administer panelizer node landingpage content'] = array(
    'name' => 'administer panelizer node landingpage content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landingpage context'.
  $permissions['administer panelizer node landingpage context'] = array(
    'name' => 'administer panelizer node landingpage context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landingpage defaults'.
  $permissions['administer panelizer node landingpage defaults'] = array(
    'name' => 'administer panelizer node landingpage defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landingpage layout'.
  $permissions['administer panelizer node landingpage layout'] = array(
    'name' => 'administer panelizer node landingpage layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landingpage overview'.
  $permissions['administer panelizer node landingpage overview'] = array(
    'name' => 'administer panelizer node landingpage overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landingpage settings'.
  $permissions['administer panelizer node landingpage settings'] = array(
    'name' => 'administer panelizer node landingpage settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  return $permissions;
}
