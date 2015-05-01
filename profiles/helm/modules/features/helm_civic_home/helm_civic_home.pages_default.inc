<?php
/**
 * @file
 * helm_civic_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function helm_civic_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = 'Front page of the site';
  $page->path = 'index';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
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
  $handler->name = 'page_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Carousel Home',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Fieldable panel pane',
        'keyword' => 'fieldable_panels_pane',
        'name' => 'entity:fieldable_panels_pane',
        'entity_id' => '1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'helm_civic_home_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'contentcolumn1' => array(
        'content' => array(
          'prefix' => '',
          'suffix' => '',
        ),
        'theme' => 1,
      ),
      'contentheader' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
    ),
    'contentcolumn1' => array(
      'style' => 'wrapper_element',
    ),
  );
  $display->cache = array();
  $display->title = 'Home';
  $display->uuid = 'a8b41fa2-e9fe-4a52-9b4e-c0a49ab3c70a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b4612167-283b-4322-ab40-89ade4172849';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_2';
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
          'element' => 'h4',
          'attributes' => array(
            'id' => '',
            'class' => 'fa fa-bullhorn',
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
    $pane->uuid = 'b4612167-283b-4322-ab40-89ade4172849';
    $display->content['new-b4612167-283b-4322-ab40-89ade4172849'] = $pane;
    $display->panels['bottom'][0] = 'new-b4612167-283b-4322-ab40-89ade4172849';
    $pane = new stdClass();
    $pane->pid = 'new-a69675fe-714f-432a-b8e1-ef343c55108c';
    $pane->panel = 'topleft';
    $pane->type = 'panels_mini';
    $pane->subtype = 'page_sidebar_right_complex_';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a69675fe-714f-432a-b8e1-ef343c55108c';
    $display->content['new-a69675fe-714f-432a-b8e1-ef343c55108c'] = $pane;
    $display->panels['topleft'][0] = 'new-a69675fe-714f-432a-b8e1-ef343c55108c';
    $pane = new stdClass();
    $pane->pid = 'new-caf83360-fe4b-431b-a344-b5adaa25fd0e';
    $pane->panel = 'topright';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:505af91d-8d63-42da-bf46-14d3eaac7473';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'caf83360-fe4b-431b-a344-b5adaa25fd0e';
    $display->content['new-caf83360-fe4b-431b-a344-b5adaa25fd0e'] = $pane;
    $display->panels['topright'][0] = 'new-caf83360-fe4b-431b-a344-b5adaa25fd0e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__simple_home';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Simple Home',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'simple_home',
  );
  $display = new panels_display();
  $display->layout = 'helm_full_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd71951d5-eec1-4445-874a-51eaba6489af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e70e6c08-1a8b-49f4-8f6e-41e28c1b5dd8';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_triptych-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'full',
      'arguments' => array(
        'uuid' => '505af91d-8d63-42da-bf46-14d3eaac7473',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e70e6c08-1a8b-49f4-8f6e-41e28c1b5dd8';
    $display->content['new-e70e6c08-1a8b-49f4-8f6e-41e28c1b5dd8'] = $pane;
    $display->panels['contentmain'][0] = 'new-e70e6c08-1a8b-49f4-8f6e-41e28c1b5dd8';
    $pane = new stdClass();
    $pane->pid = 'new-de5d9c06-394f-4a51-88bb-30ab0a31c868';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_2';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'de5d9c06-394f-4a51-88bb-30ab0a31c868';
    $display->content['new-de5d9c06-394f-4a51-88bb-30ab0a31c868'] = $pane;
    $display->panels['contentmain'][1] = 'new-de5d9c06-394f-4a51-88bb-30ab0a31c868';
    $pane = new stdClass();
    $pane->pid = 'new-2d9a5c6c-dd2b-428d-a72a-0d59006590ec';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'page_sidebar_right_complex_';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '2d9a5c6c-dd2b-428d-a72a-0d59006590ec';
    $display->content['new-2d9a5c6c-dd2b-428d-a72a-0d59006590ec'] = $pane;
    $display->panels['sidebar'][0] = 'new-2d9a5c6c-dd2b-428d-a72a-0d59006590ec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
