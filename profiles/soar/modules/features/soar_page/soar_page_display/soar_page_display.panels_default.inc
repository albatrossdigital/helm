<?php
/**
 * @file
 * soar_page_display.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function soar_page_display_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'page_sidebar_right';
  $mini->category = 'Soar Page';
  $mini->admin_title = 'Page Sidebar Right';
  $mini->admin_description = 'Common sidebar content';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'content' => array(
          'element' => '0',
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
    'style' => 'wrapper_element',
    'contentmain' => array(
      'style' => 'wrapper_element',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5bb419b2-6865-4043-9cc5-a2879ab3ff16';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ec23db89-89b6-4baf-b0c9-6615c20e4a95';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
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
    $pane->uuid = 'ec23db89-89b6-4baf-b0c9-6615c20e4a95';
    $display->content['new-ec23db89-89b6-4baf-b0c9-6615c20e4a95'] = $pane;
    $display->panels['middle'][0] = 'new-ec23db89-89b6-4baf-b0c9-6615c20e4a95';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['page_sidebar_right'] = $mini;

  return $export;
}
