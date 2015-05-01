<?php
/**
 * @file
 * helm_agency.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function helm_agency_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function helm_agency_node_info() {
  $items = array(
    'agency' => array(
      'name' => t('Agency'),
      'base' => 'node_content',
      'description' => t('Agencies appear on the agency list and may be extended into subsites.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
