<?php
/**
 * @file
 * helm_landingpage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function helm_landingpage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'landingpage_children';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Landing Page Children';
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Menu: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'menu_links';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Contextual filter: Menu: Parent menu link id */
  $handler->display->display_options['arguments']['plid']['id'] = 'plid';
  $handler->display->display_options['arguments']['plid']['table'] = 'menu_links';
  $handler->display->display_options['arguments']['plid']['field'] = 'plid';
  $handler->display->display_options['arguments']['plid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['plid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['plid']['default_argument_options']['code'] = 'return helm_landingpage_get_mlid_for_node($view, $argument);';
  $handler->display->display_options['arguments']['plid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['plid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['plid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['landingpage_children'] = $view;

  return $export;
}
