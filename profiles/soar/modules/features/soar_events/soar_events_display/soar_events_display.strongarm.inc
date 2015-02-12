<?php
/**
 * @file
 * soar_events_display.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function soar_events_display_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_event';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:event_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:22:"panelizer_node:event";s:23:"allowed_layout_settings";a:71:{s:8:"flexible";b:0;s:13:"twocol_bricks";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:6:"onecol";b:0;s:14:"twocol_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:17:"threecol_33_34_33";b:0;s:6:"twocol";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:12:"sutro_double";b:1;s:13:"selby_flipped";b:1;s:8:"mccoppin";b:1;s:12:"webb_flipped";b:1;s:9:"sanderson";b:1;s:6:"boxton";b:1;s:6:"taylor";b:1;s:6:"bryant";b:1;s:16:"bartlett_flipped";b:1;s:5:"sutro";b:1;s:5:"selby";b:1;s:4:"pond";b:1;s:22:"bryant_flipped_flipped";b:1;s:4:"burr";b:1;s:7:"moscone";b:1;s:15:"brenham_flipped";b:1;s:12:"burr_flipped";b:1;s:14:"taylor_flipped";b:1;s:6:"phelan";b:1;s:7:"hewston";b:1;s:6:"whelan";b:1;s:5:"brown";b:1;s:5:"geary";b:1;s:15:"hewston_flipped";b:1;s:8:"bartlett";b:1;s:15:"moscone_flipped";b:1;s:17:"sanderson_flipped";b:1;s:4:"webb";b:1;s:6:"harris";b:1;s:5:"rolph";b:1;s:7:"brenham";b:1;s:21:"radix_brenham_flipped";b:1;s:12:"radix_boxton";b:1;s:13:"radix_moscone";b:1;s:14:"radix_bartlett";b:1;s:20:"soar_teaser";b:1;s:23:"radix_sanderson_flipped";b:1;s:11:"radix_brown";b:1;s:18:"soar_full_page";b:1;s:20:"radix_taylor_flipped";b:1;s:11:"radix_sutro";b:1;s:12:"radix_harris";b:1;s:11:"radix_geary";b:1;s:12:"radix_bryant";b:1;s:21:"radix_moscone_flipped";b:1;s:18:"radix_webb_flipped";b:1;s:19:"radix_selby_flipped";b:1;s:13:"radix_hewston";b:1;s:12:"radix_phelan";b:1;s:12:"radix_whelan";b:1;s:10:"radix_webb";b:1;s:22:"radix_bartlett_flipped";b:1;s:14:"radix_mccoppin";b:1;s:10:"radix_pond";b:1;s:18:"radix_sutro_double";b:1;s:15:"radix_sanderson";b:1;s:11:"radix_selby";b:1;s:12:"radix_taylor";b:1;s:21:"radix_hewston_flipped";b:1;s:13:"radix_brenham";b:1;s:10:"radix_burr";b:1;s:11:"radix_rolph";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:event_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:event_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_node:event_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:event_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_node:event_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:event_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_field_extra' => 'entity_field_extra',
    'entity_field' => 'entity_field',
    'entity_form_field' => 'entity_form_field',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:event_default'] = $strongarm;

  return $export;
}
