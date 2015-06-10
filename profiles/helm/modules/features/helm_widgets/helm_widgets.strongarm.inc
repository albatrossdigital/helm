<?php
/**
 * @file
 * helm_widgets.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function helm_widgets_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_fieldable_panels_pane_image';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'triptych' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_fieldable_panels_pane_image'] = $strongarm;

  return $export;
}
