<?php
/**
 * @file
 * helm_civic_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function helm_civic_map_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'helm_civic_map_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Helm Civic Map Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'date';
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = TRUE;
  /* Field: Content: Location and Address */
  $handler->display->display_options['fields']['field_event_address']['id'] = 'field_event_address';
  $handler->display->display_options['fields']['field_event_address']['table'] = 'field_data_field_event_address';
  $handler->display->display_options['fields']['field_event_address']['field'] = 'field_event_address';
  $handler->display->display_options['fields']['field_event_address']['label'] = 'address';
  $handler->display->display_options['fields']['field_event_address']['element_type'] = '0';
  $handler->display->display_options['fields']['field_event_address']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_event_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_address']['field_api_classes'] = TRUE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'lat';
  $handler->display->display_options['fields']['field_event_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_event_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_event_location']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_event_location']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  $handler->display->display_options['fields']['field_event_location']['field_api_classes'] = TRUE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location_1']['id'] = 'field_event_location_1';
  $handler->display->display_options['fields']['field_event_location_1']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location_1']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location_1']['label'] = 'lng';
  $handler->display->display_options['fields']['field_event_location_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_event_location_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_event_location_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_json';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'api/events.json';
  $export['helm_civic_map_events'] = $view;

  return $export;
}
