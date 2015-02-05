<?php
/**
 * @file
 * soar_carousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function soar_carousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'soar_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'soar-carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = 'false';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
  $handler->display->display_options['row_options']['image'] = 'field_soar_carousel_s_img';
  $handler->display->display_options['row_options']['title'] = 'field_soar_carousel_s_title';
  $handler->display->display_options['row_options']['description'] = 'field_soar_carousel_slide_capt';
  /* Relationship: Field collection item: Entity with the Slide (field_soar_carousel_slide) */
  $handler->display->display_options['relationships']['field_soar_carousel_slide_fieldable_panels_pane']['id'] = 'field_soar_carousel_slide_fieldable_panels_pane';
  $handler->display->display_options['relationships']['field_soar_carousel_slide_fieldable_panels_pane']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_soar_carousel_slide_fieldable_panels_pane']['field'] = 'field_soar_carousel_slide_fieldable_panels_pane';
  $handler->display->display_options['relationships']['field_soar_carousel_slide_fieldable_panels_pane']['required'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* Field: Field collection item: Slide Caption */
  $handler->display->display_options['fields']['field_soar_carousel_slide_capt']['id'] = 'field_soar_carousel_slide_capt';
  $handler->display->display_options['fields']['field_soar_carousel_slide_capt']['table'] = 'field_data_field_soar_carousel_slide_capt';
  $handler->display->display_options['fields']['field_soar_carousel_slide_capt']['field'] = 'field_soar_carousel_slide_capt';
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_soar_carousel_s_title']['id'] = 'field_soar_carousel_s_title';
  $handler->display->display_options['fields']['field_soar_carousel_s_title']['table'] = 'field_data_field_soar_carousel_s_title';
  $handler->display->display_options['fields']['field_soar_carousel_s_title']['field'] = 'field_soar_carousel_s_title';
  $handler->display->display_options['fields']['field_soar_carousel_s_title']['click_sort_column'] = 'url';
  /* Field: Field collection item: Slide Image */
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['id'] = 'field_soar_carousel_s_img';
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['table'] = 'field_data_field_soar_carousel_s_img';
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['field'] = 'field_soar_carousel_s_img';
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['label'] = '';
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['settings'] = array(
    'image_style' => 'soar_carousel_image',
    'image_link' => '',
  );
  /* Contextual filter: Fieldable pane: Fieldable pane ID */
  $handler->display->display_options['arguments']['fpid']['id'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['arguments']['fpid']['field'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['relationship'] = 'field_soar_carousel_slide_fieldable_panels_pane';
  $handler->display->display_options['arguments']['fpid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['fpid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['fpid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['fpid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['fpid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Filter invalid images */
  $handler->display->display_options['filters']['field_soar_carousel_s_img_width']['id'] = 'field_soar_carousel_s_img_width';
  $handler->display->display_options['filters']['field_soar_carousel_s_img_width']['table'] = 'field_data_field_soar_carousel_s_img';
  $handler->display->display_options['filters']['field_soar_carousel_s_img_width']['field'] = 'field_soar_carousel_s_img_width';
  $handler->display->display_options['filters']['field_soar_carousel_s_img_width']['ui_name'] = 'Filter invalid images';
  $handler->display->display_options['filters']['field_soar_carousel_s_img_width']['operator'] = '>';
  $handler->display->display_options['filters']['field_soar_carousel_s_img_width']['value']['value'] = '0';

  /* Display: Content Area (9 Column Width) */
  $handler = $view->new_display('panel_pane', 'Content Area (9 Column Width)', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'fpid' => array(
      'type' => 'context',
      'context' => 'entity:fieldable_panels_pane.fpid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Fieldable pane: Fieldable pane ID',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';

  /* Display: Promo - Full width bootstrap slideshows */
  $handler = $view->new_display('panel_pane', 'Promo - Full width bootstrap slideshows', 'soar_carousel_promo');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* Field: Field collection item: Slide Caption */
  $handler->display->display_options['fields']['field_soar_carousel_slide_capt']['id'] = 'field_soar_carousel_slide_capt';
  $handler->display->display_options['fields']['field_soar_carousel_slide_capt']['table'] = 'field_data_field_soar_carousel_slide_capt';
  $handler->display->display_options['fields']['field_soar_carousel_slide_capt']['field'] = 'field_soar_carousel_slide_capt';
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_soar_carousel_s_title']['id'] = 'field_soar_carousel_s_title';
  $handler->display->display_options['fields']['field_soar_carousel_s_title']['table'] = 'field_data_field_soar_carousel_s_title';
  $handler->display->display_options['fields']['field_soar_carousel_s_title']['field'] = 'field_soar_carousel_s_title';
  $handler->display->display_options['fields']['field_soar_carousel_s_title']['click_sort_column'] = 'url';
  /* Field: Field collection item: Slide Image */
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['id'] = 'field_soar_carousel_s_img';
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['table'] = 'field_data_field_soar_carousel_s_img';
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['field'] = 'field_soar_carousel_s_img';
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['label'] = '';
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_soar_carousel_s_img']['settings'] = array(
    'image_style' => 'soar_carousel_image_promo',
    'image_link' => '',
  );
  $export['soar_carousel'] = $view;

  return $export;
}
