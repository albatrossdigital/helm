<?php
/**
 * @file
 * flight_input_formats.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function flight_input_formats_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_widgets_buttons';
  $strongarm->value = array(
    'widgetcommonBox' => 'widgetcommonBox',
    'widgetcommonQuotebox' => 'widgetcommonQuotebox',
    'widgetfoundationLeftCol' => 'widgetfoundationLeftCol',
    'widgetfoundationRightCol' => 'widgetfoundationRightCol',
    'widgetfoundationTwoCol' => 'widgetfoundationTwoCol',
    'widgetfoundationThreeCol' => 'widgetfoundationThreeCol',
    'widgetfoundationAccordion' => 'widgetfoundationAccordion',
    'oembed' => 'oembed',
    'codeSnippet' => 0,
    'leaflet' => 0,
    'FontAwesome' => 0,
  );
  $export['ckeditor_widgets_buttons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_widgets_height';
  $strongarm->value = '400px';
  $export['ckeditor_widgets_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  return $export;
}
