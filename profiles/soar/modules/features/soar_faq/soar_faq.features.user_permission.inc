<?php
/**
 * @file
 * soar_faq.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function soar_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create faq content'.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq content'.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq content'.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in faq_category'.
  $permissions['delete terms in faq_category'] = array(
    'name' => 'delete terms in faq_category',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in faq_tags'.
  $permissions['delete terms in faq_tags'] = array(
    'name' => 'delete terms in faq_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any faq content'.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq content'.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in faq_category'.
  $permissions['edit terms in faq_category'] = array(
    'name' => 'edit terms in faq_category',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in faq_tags'.
  $permissions['edit terms in faq_tags'] = array(
    'name' => 'edit terms in faq_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
