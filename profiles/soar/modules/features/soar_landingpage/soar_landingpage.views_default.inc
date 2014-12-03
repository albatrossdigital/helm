<?php
/**
 * @file
 * soar_landingpage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function soar_landingpage_views_default_views() {
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
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'medium-block-grid-2';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['plid']['id'] = 'plid';
  $handler->display->display_options['arguments']['plid']['table'] = 'menu_links';
  $handler->display->display_options['arguments']['plid']['field'] = 'plid';
  $handler->display->display_options['arguments']['plid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['plid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['plid']['default_argument_options']['code'] = '$node = node_load(intval(arg(1)));

  if (isset($node->menu_node_links)){
    $keys = array_keys($node->menu_node_links);
  
  $menu_item = menu_link_load($keys[0]);
dpm($menu_item);

  if ($menu_item[\'link_title\'] === t(\'Overview\')) {
    $parent_menu_item = _menu_link_find_parent($menu_item);
      return $parent_menu_item->mlid;
  }

  return $keys[0];
  }

';
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
  $export['landingpage_children'] = $view;

  return $export;
}
