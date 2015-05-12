<?php
/**
 * @file
 * helm_news_display.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function helm_news_display_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = 'News listing';
  $page->path = 'news/!category';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'category' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          1 => 0,
          3 => 0,
          2 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news';
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
      'default' => array(
        'content' => array(
          'element' => '',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'sidebar' => array(
        'content' => array(
          'element' => '',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'contentmain' => array(
        'content' => array(
          'element' => '0',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
    ),
    'contentmain' => array(
      'style' => 'wrapper_element',
    ),
    'sidebar' => array(
      'style' => 'wrapper_element',
    ),
    'style' => 'wrapper_element',
  );
  $display->cache = array();
  $display->title = '%category:name';
  $display->uuid = '8709f9bb-fa7a-471a-a7fe-fa42c66f0502';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-63c7b281-998f-456d-89e5-b3ca5f98d2ec';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'rendered_entity',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'arguments' => array(
      'field_category_tid' => 'press release',
    ),
    'path' => '',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
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
  $pane->uuid = '63c7b281-998f-456d-89e5-b3ca5f98d2ec';
  $display->content['new-63c7b281-998f-456d-89e5-b3ca5f98d2ec'] = $pane;
  $display->panels['contentmain'][0] = 'new-63c7b281-998f-456d-89e5-b3ca5f98d2ec';
  $pane = new stdClass();
  $pane->pid = 'new-984a4671-fd4c-40be-b526-4c09f7f93e3a';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-news-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '984a4671-fd4c-40be-b526-4c09f7f93e3a';
  $display->content['new-984a4671-fd4c-40be-b526-4c09f7f93e3a'] = $pane;
  $display->panels['sidebar'][0] = 'new-984a4671-fd4c-40be-b526-4c09f7f93e3a';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-63c7b281-998f-456d-89e5-b3ca5f98d2ec';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
