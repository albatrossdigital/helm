<?php
/**
 * @file
 * flight_bean.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function flight_bean_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|links|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'links';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_links',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_links' => 'ds_content',
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
  $export['bean|links|default'] = $ds_layout;

  return $export;
}
