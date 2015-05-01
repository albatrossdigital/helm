<?php
/**
 * @file
 * helm_document.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_document_defaultconfig_features() {
  return array(
    'helm_document' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function helm_document_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create document content'.
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any document content'.
  $permissions['delete any document content'] = array(
    'name' => 'delete any document content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own document content'.
  $permissions['delete own document content'] = array(
    'name' => 'delete own document content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in document_category'.
  $permissions['delete terms in document_category'] = array(
    'name' => 'delete terms in document_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any document content'.
  $permissions['edit any document content'] = array(
    'name' => 'edit any document content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own document content'.
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in document_category'.
  $permissions['edit terms in document_category'] = array(
    'name' => 'edit terms in document_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
