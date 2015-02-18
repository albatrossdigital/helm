<?php
/**
 * @file
 * soar_event_display.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function soar_event_display_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'soar_events';
  $page->task = 'page';
  $page->admin_title = 'Soar Events';
  $page->admin_description = '';
  $page->path = 'events';
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
  $handler->name = 'page_soar_events__panel_context_b722176a-bc6d-453c-abe3-027d4e0a5e60';
  $handler->task = 'page';
  $handler->subtask = 'soar_events';
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
  $display->layout = 'soar_full_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = '6ceb670e-666f-49be-b231-9633e547603c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-be1d031c-31ef-4ebc-87db-65fdd05d0d92';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'be1d031c-31ef-4ebc-87db-65fdd05d0d92';
    $display->content['new-be1d031c-31ef-4ebc-87db-65fdd05d0d92'] = $pane;
    $display->panels['contentmain'][0] = 'new-be1d031c-31ef-4ebc-87db-65fdd05d0d92';
    $pane = new stdClass();
    $pane->pid = 'new-7ef2cff5-8ca4-4525-9c23-fac2a186f023';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-events-list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
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
    $pane->uuid = '7ef2cff5-8ca4-4525-9c23-fac2a186f023';
    $display->content['new-7ef2cff5-8ca4-4525-9c23-fac2a186f023'] = $pane;
    $display->panels['sidebar'][0] = 'new-7ef2cff5-8ca4-4525-9c23-fac2a186f023';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7ef2cff5-8ca4-4525-9c23-fac2a186f023';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['soar_events'] = $page;

  return $pages;

}
