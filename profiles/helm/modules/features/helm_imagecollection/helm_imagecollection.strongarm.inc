<?php
/**
 * @file
 * helm_imagecollection.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function helm_imagecollection_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_fieldable_panels_pane_helm_imagecollection';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'triptych' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_fieldable_panels_pane_helm_imagecollection'] = $strongarm;

  return $export;
}
