<?php
/**
 * @file
 * flight_webform.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function flight_webform_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_subtitle',
        1 => 'field_picture',
        2 => 'field_media',
        3 => 'body',
        4 => 'field_attachment',
        5 => 'webform',
      ),
    ),
    'fields' => array(
      'field_subtitle' => 'ds_content',
      'field_picture' => 'ds_content',
      'field_media' => 'ds_content',
      'body' => 'ds_content',
      'field_attachment' => 'ds_content',
      'webform' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|webform|default'] = $ds_layout;

  return $export;
}
