<?php
/**
 * @file
 * media_formatters_test.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function media_formatters_test_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function media_formatters_test_node_info() {
  $items = array(
    'media_formatters_test' => array(
      'name' => t('Media Formatters Test'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
