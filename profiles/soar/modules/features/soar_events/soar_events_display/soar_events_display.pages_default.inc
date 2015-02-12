<?php
/**
 * @file
 * soar_events_display.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function soar_events_display_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events';
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
  $display->uuid = 'fd2f9801-1b23-4048-86ec-c1d223063042';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-030767f8-a2c8-4f1b-bf06-d5e40970146a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'rendered_entity',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'element' => 'h1',
          'attributes' => array(
            'id' => '',
            'class' => 'page-title',
          ),
        ),
        'content' => array(
          'element' => '0',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'style' => 'wrapper_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '030767f8-a2c8-4f1b-bf06-d5e40970146a';
    $display->content['new-030767f8-a2c8-4f1b-bf06-d5e40970146a'] = $pane;
    $display->panels['contentmain'][0] = 'new-030767f8-a2c8-4f1b-bf06-d5e40970146a';
    $pane = new stdClass();
    $pane->pid = 'new-a2114b30-98a4-4cfe-b21d-a75db52f1052';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'page_sidebar_right';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a2114b30-98a4-4cfe-b21d-a75db52f1052';
    $display->content['new-a2114b30-98a4-4cfe-b21d-a75db52f1052'] = $pane;
    $display->panels['sidebar'][0] = 'new-a2114b30-98a4-4cfe-b21d-a75db52f1052';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-030767f8-a2c8-4f1b-bf06-d5e40970146a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
