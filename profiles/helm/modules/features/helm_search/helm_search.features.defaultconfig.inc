<?php
/**
 * @file
 * helm_search.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_search_defaultconfig_features() {
  return array(
    'helm_search' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function helm_search_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(),
    'module' => 'search_api',
  );

  // Exported permission: 'use search_api_autocomplete for search_api_views_search'.
  $permissions['use search_api_autocomplete for search_api_views_search'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_search',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  return $permissions;
}
