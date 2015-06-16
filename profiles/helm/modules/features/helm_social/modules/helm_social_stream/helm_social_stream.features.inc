<?php
/**
 * @file
 * helm_social_stream.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function helm_social_stream_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function helm_social_stream_node_info() {
  $items = array(
    'social_wall' => array(
      'name' => t('Social Wall'),
      'base' => 'node_content',
      'description' => t('Create an interactive wall of activity over a variety of social networks.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
