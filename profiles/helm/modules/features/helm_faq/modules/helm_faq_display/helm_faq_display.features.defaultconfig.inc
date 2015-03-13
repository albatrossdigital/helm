<?php
/**
 * @file
 * helm_faq_display.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_faq_display_defaultconfig_features() {
  return array(
    'helm_faq_display' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function helm_faq_display_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node faq defaults'.
  $permissions['administer panelizer node faq defaults'] = array(
    'name' => 'administer panelizer node faq defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term faq_category breadcrumbs'.
  $permissions['administer panelizer taxonomy_term faq_category breadcrumbs'] = array(
    'name' => 'administer panelizer taxonomy_term faq_category breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term faq_category content'.
  $permissions['administer panelizer taxonomy_term faq_category content'] = array(
    'name' => 'administer panelizer taxonomy_term faq_category content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term faq_category context'.
  $permissions['administer panelizer taxonomy_term faq_category context'] = array(
    'name' => 'administer panelizer taxonomy_term faq_category context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term faq_category defaults'.
  $permissions['administer panelizer taxonomy_term faq_category defaults'] = array(
    'name' => 'administer panelizer taxonomy_term faq_category defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term faq_category layout'.
  $permissions['administer panelizer taxonomy_term faq_category layout'] = array(
    'name' => 'administer panelizer taxonomy_term faq_category layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term faq_category overview'.
  $permissions['administer panelizer taxonomy_term faq_category overview'] = array(
    'name' => 'administer panelizer taxonomy_term faq_category overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term faq_category settings'.
  $permissions['administer panelizer taxonomy_term faq_category settings'] = array(
    'name' => 'administer panelizer taxonomy_term faq_category settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term faq_tags defaults'.
  $permissions['administer panelizer taxonomy_term faq_tags defaults'] = array(
    'name' => 'administer panelizer taxonomy_term faq_tags defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  return $permissions;
}
