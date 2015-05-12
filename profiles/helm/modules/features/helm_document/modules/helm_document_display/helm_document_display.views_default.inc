<?php
/**
 * @file
 * helm_document_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function helm_document_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documents';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_document_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_document_category' => 'field_document_category',
    'title' => 'title',
    'created' => 'created',
    'field_attachment' => 'field_attachment',
    'rendered_entity' => 'rendered_entity',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_document_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_attachment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rendered_entity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'responsive' => 'responsive',
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_document_category']['id'] = 'field_document_category';
  $handler->display->display_options['fields']['field_document_category']['table'] = 'field_data_field_document_category';
  $handler->display->display_options['fields']['field_document_category']['field'] = 'field_document_category';
  $handler->display->display_options['fields']['field_document_category']['label'] = '';
  $handler->display->display_options['fields']['field_document_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_document_category']['alter']['text'] = '<h2 class="margin-top-none">[field_document_category]</h2>';
  $handler->display->display_options['fields']['field_document_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_document_category']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'helm_date_formats_date_short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'helm_date_formats_date_short';
  /* Field: Content: Attachments */
  $handler->display->display_options['fields']['field_attachment']['id'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['table'] = 'field_data_field_attachment';
  $handler->display->display_options['fields']['field_attachment']['field'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_attachment']['element_type'] = '0';
  $handler->display->display_options['fields']['field_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attachment']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_attachment']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachment']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_attachment']['settings'] = array(
    'text' => 'Download',
  );
  $handler->display->display_options['fields']['field_attachment']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_attachment']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attachment']['field_api_classes'] = TRUE;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
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
    'document' => 'document',
  );
  /* Filter criterion: Content: Category (field_document_category) */
  $handler->display->display_options['filters']['field_document_category_target_id']['id'] = 'field_document_category_target_id';
  $handler->display->display_options['filters']['field_document_category_target_id']['table'] = 'field_data_field_document_category';
  $handler->display->display_options['filters']['field_document_category_target_id']['field'] = 'field_document_category_target_id';
  $handler->display->display_options['filters']['field_document_category_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_category_target_id']['expose']['operator_id'] = 'field_document_category_target_id_op';
  $handler->display->display_options['filters']['field_document_category_target_id']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_document_category_target_id']['expose']['operator'] = 'field_document_category_target_id_op';
  $handler->display->display_options['filters']['field_document_category_target_id']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_document_category_target_id']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'term';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_document_category' => 'field_document_category',
    'title' => 'title',
    'created' => 'created',
    'field_attachment' => 'field_attachment',
    'rendered_entity' => 'rendered_entity',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['documents'] = $view;

  return $export;
}
