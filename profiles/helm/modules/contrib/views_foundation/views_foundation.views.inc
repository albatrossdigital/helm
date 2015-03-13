<?php

/**
 * @file
 * Provide the Foundation plugins definition.
 */

/**
 * Implements hook_views_plugins().
 */
function views_foundation_views_plugins() {
  $path = drupal_get_path('module', 'views_foundation');

  return array(
    'style' => array(
      'views_foundation_orbit' => array(
        'title' => t('Foundation Orbit Slider'),
        'help' => t('Displays Content in Foundation Orbit slider.'),
        'handler' => 'views_foundation_plugin_style_orbit',
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'uses grouping' => FALSE,
        'type' => 'normal',
        'theme' => 'views_foundation_orbit',
        'theme path' => $path . '/theme',
        'theme file' => 'views_foundation.theme.inc',
      ),
      'views_foundation_clearing' => array(
        'title' => t('Foundation Clearing'),
        'help' => t('Displays Content in Foundation Clearing plugin.'),
        'handler' => 'views_foundation_plugin_style_clearing',
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'uses grouping' => FALSE,
        'type' => 'normal',
        'theme' => 'views_foundation_clearing',
        'theme path' => $path . '/theme',
        'theme file' => 'views_foundation.theme.inc',
      ),
    ),
    'row' => array(
      'views_foundation_pricing_tables' => array(
        'title' => t('Foundation Pricing Tables'),
        'help' => t('Choose the fields to display in the Pricing Tables.'),
        'handler' => 'views_foundation_plugin_row_pricing_tables',
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'theme' => 'views_foundation_pricing_tables',
        'theme path' => $path . '/theme',
        'theme file' => 'views_foundation.theme.inc',
      ),
    ),
  );
}
