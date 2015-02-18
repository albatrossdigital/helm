<?php
/**
 * @file
 * soar_event_calendar.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function soar_event_calendar_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'soar_event_calendar';
  $page->task = 'page';
  $page->admin_title = 'Soar Event Calendar';
  $page->admin_description = '';
  $page->path = 'calendar';
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
  $handler->name = 'page_soar_event_calendar__panel_context_94e79203-a5ac-4fab-97c0-3d4e18ea17b2';
  $handler->task = 'page';
  $handler->subtask = 'soar_event_calendar';
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
  $display->uuid = '08c156e8-1448-4ab8-9030-ab33881f2ebb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0ab7861a-2054-4594-9d52-00fc35caa771';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'calendar-oa_calendar_month';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0ab7861a-2054-4594-9d52-00fc35caa771';
    $display->content['new-0ab7861a-2054-4594-9d52-00fc35caa771'] = $pane;
    $display->panels['contentmain'][0] = 'new-0ab7861a-2054-4594-9d52-00fc35caa771';
    $pane = new stdClass();
    $pane->pid = 'new-ce22e060-e601-4ccb-92db-219829f6cd51';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-calendar-oa_calendar_month';
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
    $pane->uuid = 'ce22e060-e601-4ccb-92db-219829f6cd51';
    $display->content['new-ce22e060-e601-4ccb-92db-219829f6cd51'] = $pane;
    $display->panels['sidebar'][0] = 'new-ce22e060-e601-4ccb-92db-219829f6cd51';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0ab7861a-2054-4594-9d52-00fc35caa771';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['soar_event_calendar'] = $page;

  return $pages;

}
