<?php
/**
 * @file
 * flight_slideshow.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function flight_slideshow_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide_caption_wrap|field_collection_item|field_slide_content|flight_slide';
  $field_group->group_name = 'group_slide_caption_wrap';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_slide_content';
  $field_group->mode = 'flight_slide';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caption Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_slideshow_link',
      1 => 'field_slideshow_subtext',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caption Wrapper',
      'instance_settings' => array(
        'classes' => 'carousel-caption',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_slide_caption_wrap|field_collection_item|field_slide_content|flight_slide'] = $field_group;

  return $export;
}
