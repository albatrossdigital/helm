<?php
/**
 * @file
 * helm_widgets.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function helm_widgets_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'basic_file';
  $fieldable_panels_pane_type->title = 'Add file';
  $fieldable_panels_pane_type->description = '';
  $export['basic_file'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'image';
  $fieldable_panels_pane_type->title = 'Add image';
  $fieldable_panels_pane_type->description = '';
  $export['image'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'quick_links';
  $fieldable_panels_pane_type->title = 'Add links';
  $fieldable_panels_pane_type->description = '';
  $export['quick_links'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'text';
  $fieldable_panels_pane_type->title = 'Add text';
  $fieldable_panels_pane_type->description = '';
  $export['text'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'video';
  $fieldable_panels_pane_type->title = 'Add video';
  $fieldable_panels_pane_type->description = '';
  $export['video'] = $fieldable_panels_pane_type;

  return $export;
}