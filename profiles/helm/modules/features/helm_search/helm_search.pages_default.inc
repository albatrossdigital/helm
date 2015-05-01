<?php
/**
 * @file
 * helm_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function helm_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search';
  $page->task = 'page';
  $page->admin_title = 'Search';
  $page->admin_description = 'Search results page';
  $page->path = 'search';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search__panel_context_24f3dcab-b1e2-4d67-882d-6c2109110441';
  $handler->task = 'page';
  $handler->subtask = 'search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'helm_sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'topleft' => NULL,
      'topright' => NULL,
      'contentmain' => NULL,
      'tripleft' => NULL,
      'tripmiddle' => NULL,
      'tripright' => NULL,
      'lowerleft' => NULL,
      'lowerright' => NULL,
      'bottom' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search';
  $display->uuid = '5851c8bd-f48a-48df-9dea-8a2f04a91ccc';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dc2c38f7-e81a-4f34-a60f-dd4291ed93c3';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-search-results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dc2c38f7-e81a-4f34-a60f-dd4291ed93c3';
  $display->content['new-dc2c38f7-e81a-4f34-a60f-dd4291ed93c3'] = $pane;
  $display->panels['contentmain'][0] = 'new-dc2c38f7-e81a-4f34-a60f-dd4291ed93c3';
  $pane = new stdClass();
  $pane->pid = 'new-30907c68-a668-467d-bc16-dc4e3d98c51a';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'search-results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '30907c68-a668-467d-bc16-dc4e3d98c51a';
  $display->content['new-30907c68-a668-467d-bc16-dc4e3d98c51a'] = $pane;
  $display->panels['contentmain'][1] = 'new-30907c68-a668-467d-bc16-dc4e3d98c51a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search'] = $page;

  return $pages;

}
