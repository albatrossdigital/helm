<?php
/**
 * @file
 * helm_document_display.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_document_display_defaultconfig_features() {
  return array(
    'helm_document_display' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function helm_document_display_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node document breadcrumbs'.
  $permissions['administer panelizer node document breadcrumbs'] = array(
    'name' => 'administer panelizer node document breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document content'.
  $permissions['administer panelizer node document content'] = array(
    'name' => 'administer panelizer node document content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document context'.
  $permissions['administer panelizer node document context'] = array(
    'name' => 'administer panelizer node document context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document defaults'.
  $permissions['administer panelizer node document defaults'] = array(
    'name' => 'administer panelizer node document defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document layout'.
  $permissions['administer panelizer node document layout'] = array(
    'name' => 'administer panelizer node document layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document overview'.
  $permissions['administer panelizer node document overview'] = array(
    'name' => 'administer panelizer node document overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node document settings'.
  $permissions['administer panelizer node document settings'] = array(
    'name' => 'administer panelizer node document settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term document_category defaults'.
  $permissions['administer panelizer taxonomy_term document_category defaults'] = array(
    'name' => 'administer panelizer taxonomy_term document_category defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  return $permissions;
}
