<?php
/**
 * @file
 * liftoff_lorem_ipsum.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function liftoff_lorem_ipsum_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function liftoff_lorem_ipsum_node_info() {
  $items = array(
    'lorem_ipsum' => array(
      'name' => t('Lorem Ipsum'),
      'base' => 'node_content',
      'description' => t('Add placeholder content and images automatically generated from your favorite TV show, or from a Wikipedia page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
