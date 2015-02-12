<?php
/**
 * @file
 * soar_landingpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soar_landingpage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function soar_landingpage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function soar_landingpage_node_info() {
  $items = array(
    'landingpage' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t('A landing page lists all submenu items.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
