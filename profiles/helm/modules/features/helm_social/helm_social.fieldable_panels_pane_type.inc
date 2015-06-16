<?php
/**
 * @file
 * helm_social.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function helm_social_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'social_networks';
  $fieldable_panels_pane_type->title = 'Social Networks';
  $fieldable_panels_pane_type->description = 'Display social networks as buttons, a stream or a feed';
  $export['social_networks'] = $fieldable_panels_pane_type;

  return $export;
}
