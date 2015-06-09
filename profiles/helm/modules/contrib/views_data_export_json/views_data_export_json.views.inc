<?php
/**
 * @file
 * Views include file with views hooks.
 */

/**
 * Implementation of hook_views_plugins().
 */
function views_data_export_json_views_plugins() {
  $path = drupal_get_path('module', 'views_data_export_json');

  $style_defaults = array(
    'path' => $path . '/plugins',
    'parent' => 'views_data_export',
    'theme' => 'views_data_export',
    'theme path' => $path . '/theme',
    'theme file' => 'views_data_export_json.theme.inc',
    'uses row plugin' => FALSE,
    'uses fields' => TRUE,
    'uses options' => TRUE,
    'type' => 'data_export',
  );

  return array(
    'style' => array(
      'views_data_export_json' => array(
        'title' => t('JSON file'),
        'help' => t('Display the view as a json file.'),
        'handler' => 'views_data_export_plugin_style_export',
        'export headers' => array('Content-Type' => 'application/json'),
        'export feed type' => 'json',
        'export feed text' => 'JSON',
        'export feed file' => '%view.json',
        'export feed icon' => drupal_get_path('module', 'views_data_export_json') . '/images/json.png',
        'additional themes' => array(
          'views_data_export_json_header' => 'style',
          'views_data_export_json_body' => 'style',
          'views_data_export_json_footer' => 'style',
        ),
        'additional themes base' => 'views_data_export_json',
      ) + $style_defaults,
    ),
  );
}
