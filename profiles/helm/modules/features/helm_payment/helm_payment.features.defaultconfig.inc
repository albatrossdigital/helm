<?php
/**
 * @file
 * helm_payment.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_payment_defaultconfig_features() {
  return array(
    'helm_payment' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function helm_payment_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access resource commerce_customer_profile'.
  $permissions['access resource commerce_customer_profile'] = array(
    'name' => 'access resource commerce_customer_profile',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource commerce_line_item'.
  $permissions['access resource commerce_line_item'] = array(
    'name' => 'access resource commerce_line_item',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource commerce_order'.
  $permissions['access resource commerce_order'] = array(
    'name' => 'access resource commerce_order',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource commerce_payment_transaction'.
  $permissions['access resource commerce_payment_transaction'] = array(
    'name' => 'access resource commerce_payment_transaction',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource commerce_product'.
  $permissions['access resource commerce_product'] = array(
    'name' => 'access resource commerce_product',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer panelizer node payment breadcrumbs'.
  $permissions['administer panelizer node payment breadcrumbs'] = array(
    'name' => 'administer panelizer node payment breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node payment content'.
  $permissions['administer panelizer node payment content'] = array(
    'name' => 'administer panelizer node payment content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node payment context'.
  $permissions['administer panelizer node payment context'] = array(
    'name' => 'administer panelizer node payment context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node payment defaults'.
  $permissions['administer panelizer node payment defaults'] = array(
    'name' => 'administer panelizer node payment defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node payment layout'.
  $permissions['administer panelizer node payment layout'] = array(
    'name' => 'administer panelizer node payment layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node payment overview'.
  $permissions['administer panelizer node payment overview'] = array(
    'name' => 'administer panelizer node payment overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node payment settings'.
  $permissions['administer panelizer node payment settings'] = array(
    'name' => 'administer panelizer node payment settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer payment methods'.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer payments'.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle invoice'.
  $permissions['create commerce_product entities of bundle invoice'] = array(
    'name' => 'create commerce_product entities of bundle invoice',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle product'.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create payment content'.
  $permissions['create payment content'] = array(
    'name' => 'create payment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create payments'.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'delete any payment content'.
  $permissions['delete any payment content'] = array(
    'name' => 'delete any payment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own payment content'.
  $permissions['delete own payment content'] = array(
    'name' => 'delete own payment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle invoice'.
  $permissions['edit any commerce_product entity of bundle invoice'] = array(
    'name' => 'edit any commerce_product entity of bundle invoice',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle product'.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any payment content'.
  $permissions['edit any payment content'] = array(
    'name' => 'edit any payment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle invoice'.
  $permissions['edit own commerce_product entities of bundle invoice'] = array(
    'name' => 'edit own commerce_product entities of bundle invoice',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle product'.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own payment content'.
  $permissions['edit own payment content'] = array(
    'name' => 'edit own payment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'update payments'.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle invoice'.
  $permissions['view any commerce_product entity of bundle invoice'] = array(
    'name' => 'view any commerce_product entity of bundle invoice',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle product'.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle invoice'.
  $permissions['view own commerce_product entities of bundle invoice'] = array(
    'name' => 'view own commerce_product entities of bundle invoice',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle product'.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(),
    'module' => 'commerce_payment',
  );

  return $permissions;
}
