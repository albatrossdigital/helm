<?php
/**
 * @file
 * soar_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function soar_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = 'Front page of the site';
  $page->path = 'index';
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
  $handler->name = 'page_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
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
  $display->layout = 'radix_selby_flipped';
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
      'style' => 'wrapper_raw',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a8b41fa2-e9fe-4a52-9b4e-c0a49ab3c70a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-510e3ef0-fbc2-4f63-b88c-3088f47a6f1d';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'element' => '0',
          'attributes' => array(
            'id' => '',
            'class' => '',
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
    $pane->uuid = '510e3ef0-fbc2-4f63-b88c-3088f47a6f1d';
    $display->content['new-510e3ef0-fbc2-4f63-b88c-3088f47a6f1d'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-510e3ef0-fbc2-4f63-b88c-3088f47a6f1d';
    $pane = new stdClass();
    $pane->pid = 'new-436b01bb-aa97-4d36-9a82-7fe04ed31c50';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'prefix' => '<h4><i class="fa fa-exclamation-triangle"></i>',
          'suffix' => '</h4>',
        ),
        'content' => array(
          'prefix' => '',
          'suffix' => '',
        ),
        'theme' => 0,
      ),
      'style' => 'wrapper_raw',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '436b01bb-aa97-4d36-9a82-7fe04ed31c50';
    $display->content['new-436b01bb-aa97-4d36-9a82-7fe04ed31c50'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-436b01bb-aa97-4d36-9a82-7fe04ed31c50';
    $pane = new stdClass();
    $pane->pid = 'new-14c052f4-4a93-4207-b7e3-ac7c7944baf8';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'prefix' => '<h4><i class="fa fa-calendar"></i>',
          'suffix' => '</h4>',
        ),
        'content' => array(
          'prefix' => '',
          'suffix' => '',
        ),
        'theme' => 0,
      ),
      'style' => 'wrapper_raw',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '14c052f4-4a93-4207-b7e3-ac7c7944baf8';
    $display->content['new-14c052f4-4a93-4207-b7e3-ac7c7944baf8'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-14c052f4-4a93-4207-b7e3-ac7c7944baf8';
    $pane = new stdClass();
    $pane->pid = 'new-b4612167-283b-4322-ab40-89ade4172849';
    $pane->panel = 'contentfooter';
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
    $display->panels['contentfooter'][0] = 'new-b4612167-283b-4322-ab40-89ade4172849';
    $pane = new stdClass();
    $pane->pid = 'new-a69675fe-714f-432a-b8e1-ef343c55108c';
    $pane->panel = 'sidebar';
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a69675fe-714f-432a-b8e1-ef343c55108c';
    $display->content['new-a69675fe-714f-432a-b8e1-ef343c55108c'] = $pane;
    $display->panels['sidebar'][0] = 'new-a69675fe-714f-432a-b8e1-ef343c55108c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
