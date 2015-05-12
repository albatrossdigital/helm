<?php
/**
 * @file
 * helm_event_display.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function helm_event_display_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'helm_events';
  $page->task = 'page';
  $page->admin_title = 'Helm Events';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array();
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
  $handler->name = 'page_helm_events__panel_context_b722176a-bc6d-453c-abe3-027d4e0a5e60';
  $handler->task = 'page';
  $handler->subtask = 'helm_events';
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
  $pane->pid = 'new-d8d212dc-f66e-48c5-8506-542e87a2cd2a';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-events_upcoming';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd8d212dc-f66e-48c5-8506-542e87a2cd2a';
  $display->content['new-d8d212dc-f66e-48c5-8506-542e87a2cd2a'] = $pane;
  $display->panels['contentmain'][0] = 'new-d8d212dc-f66e-48c5-8506-542e87a2cd2a';
  $pane = new stdClass();
  $pane->pid = 'new-6eb928fb-40a4-4bd7-baab-b775e80c32ca';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-events-events_upcoming';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => 'Filter',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'title' => array(
        'element' => 'h5',
        'attributes' => array(
          'id' => '',
          'class' => 'margin-top-none margin-bottom-double',
        ),
      ),
      'content' => array(
        'element' => '',
        'attributes' => array(
          'id' => '',
          'class' => '',
        ),
      ),
      'theme' => 1,
    ),
    'style' => 'wrapper_element',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6eb928fb-40a4-4bd7-baab-b775e80c32ca';
  $display->content['new-6eb928fb-40a4-4bd7-baab-b775e80c32ca'] = $pane;
  $display->panels['sidebar'][0] = 'new-6eb928fb-40a4-4bd7-baab-b775e80c32ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['helm_events'] = $page;

  return $pages;

}
