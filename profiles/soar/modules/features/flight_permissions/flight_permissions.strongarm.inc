<?php
/**
 * @file
 * flight_permissions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function flight_permissions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_select_defaults';
  $strongarm->value = array(
    2 => array(
      'admin_select_default' => '',
      'weight' => '0',
    ),
    3 => array(
      'admin_select_default' => 'navbar',
      'weight' => '1',
    ),
  );
  $export['admin_select_defaults'] = $strongarm;

  return $export;
}
