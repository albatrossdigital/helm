<?php
/**
 * @file
 * soar_event_calendar.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function soar_event_calendar_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Event Calendar';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['left'] = 'month agendaWeek agendaDay';
  $handler->display->display_options['style_options']['right'] = 'today prev,next';
  $handler->display->display_options['style_options']['timeformat'] = 'h:mm';
  $handler->display->display_options['style_options']['advanced'] = TRUE;
  $handler->display->display_options['style_options']['timeformatMonth'] = 'h(:mm)t';
  $handler->display->display_options['style_options']['timeformatWeek'] = 'h:mm';
  $handler->display->display_options['style_options']['timeformatDay'] = 'h:mm';
  $handler->display->display_options['style_options']['theme'] = FALSE;
  $handler->display->display_options['style_options']['sameWindow'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<br><em>[title]</em>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: Category (field_event_category) */
  $handler->display->display_options['filters']['field_event_category_target_id']['id'] = 'field_event_category_target_id';
  $handler->display->display_options['filters']['field_event_category_target_id']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['filters']['field_event_category_target_id']['field'] = 'field_event_category_target_id';
  $handler->display->display_options['filters']['field_event_category_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_category_target_id']['expose']['operator_id'] = 'field_event_category_target_id_op';
  $handler->display->display_options['filters']['field_event_category_target_id']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_event_category_target_id']['expose']['operator'] = 'field_event_category_target_id_op';
  $handler->display->display_options['filters']['field_event_category_target_id']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_event_category_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'q';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
  );

  /* Display: Calendar */
  $handler = $view->new_display('panel_pane', 'Calendar', 'oa_calendar_month');
  $handler->display->display_options['exposed_block'] = TRUE;

  /* Display: Daily Calendar */
  $handler = $view->new_display('panel_pane', 'Daily Calendar', 'oa_calendar_day');

  /* Display: Weekly Calendar */
  $handler = $view->new_display('panel_pane', 'Weekly Calendar', 'oa_calendar_week');

  /* Display: iCal */
  $handler = $view->new_display('feed', 'iCal', 'oa_calendar_ical');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_oa_date.field_oa_date_value';
  $handler->display->display_options['row_options']['summary_field'] = 'field_data_body.body';
  $handler->display->display_options['row_options']['location_field'] = 'field_data_field_oa_address.field_oa_address';
  $handler->display->display_options['path'] = 'calendar/%/export.ics';
  $handler->display->display_options['displays'] = array(
    'oa_calendar_month' => 'oa_calendar_month',
    'default' => 0,
    'oa_calendar_day' => 0,
    'oa_calendar_week' => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'calendar';
  $export['calendar'] = $view;

  return $export;
}
