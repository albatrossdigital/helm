<?php
/**
 * @file
 * helm_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function helm_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function helm_faq_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function helm_faq_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('FAQs are question / answer combos housed in the "Quick Answer" sections of the site.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => t('<a href="http://www.baltimore.ifsight.com/help/content/faq#page-title" class="contextual-help">Help creating a How do I?</a>'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
