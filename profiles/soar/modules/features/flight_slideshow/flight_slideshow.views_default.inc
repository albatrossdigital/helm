<?php
/**
 * @file
 * flight_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function flight_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'flight_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Flight Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Flight Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_foundation_orbit';
  $handler->display->display_options['style_options']['animation_speed'] = '500';
  $handler->display->display_options['style_options']['timer_speed'] = '10000';
  $handler->display->display_options['style_options']['resume_on_mouseout'] = 1;
  $handler->display->display_options['style_options']['pause_on_hover'] = 0;
  $handler->display->display_options['style_options']['bullets'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No slides created yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Field collection item: Entity with the Slide Content (field_slide_content) */
  $handler->display->display_options['relationships']['field_slide_content_bean']['id'] = 'field_slide_content_bean';
  $handler->display->display_options['relationships']['field_slide_content_bean']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_slide_content_bean']['field'] = 'field_slide_content_bean';
  $handler->display->display_options['relationships']['field_slide_content_bean']['label'] = 'Slideshow';
  /* Field: Field collection item: Rendered Field collection item */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'flight_slide';
  /* Contextual filter: Block: Internal, numeric block ID */
  $handler->display->display_options['arguments']['bid']['id'] = 'bid';
  $handler->display->display_options['arguments']['bid']['table'] = 'bean';
  $handler->display->display_options['arguments']['bid']['field'] = 'bid';
  $handler->display->display_options['arguments']['bid']['relationship'] = 'field_slide_content_bean';
  $handler->display->display_options['arguments']['bid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['bid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['bid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['bid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bid']['summary_options']['items_per_page'] = '25';
  $export['flight_slideshow'] = $view;

  return $export;
}
