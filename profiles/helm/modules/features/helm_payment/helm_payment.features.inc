<?php
/**
 * @file
 * helm_payment.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function helm_payment_commerce_product_default_types() {
  $items = array(
    'invoice' => array(
      'type' => 'invoice',
      'name' => 'Invoice',
      'description' => 'Invoices are used for all civic payments.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function helm_payment_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function helm_payment_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function helm_payment_node_info() {
  $items = array(
    'payment' => array(
      'name' => t('Payment'),
      'base' => 'node_content',
      'description' => t('The payment invoice types'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
