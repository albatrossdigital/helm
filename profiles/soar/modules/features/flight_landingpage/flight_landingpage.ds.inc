<?php
/**
 * @file
 * flight_landingpage.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function flight_landingpage_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|landingpage|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'landingpage';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'foundation_formatters_views_field' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'views_display' => 'landingpage_children:default',
        'use_entity' => 0,
        'views_argument' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|landingpage|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function flight_landingpage_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|landingpage|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'landingpage';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'foundation_formatters_views_field',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'foundation_formatters_views_field' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|landingpage|default'] = $ds_layout;

  return $export;
}
