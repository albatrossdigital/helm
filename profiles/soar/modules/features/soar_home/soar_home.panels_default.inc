<?php
/**
 * @file
 * soar_home.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function soar_home_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'page_sidebar_right_complex_';
  $mini->category = 'Soar Page';
  $mini->admin_title = 'Page Sidebar Right (complex)';
  $mini->admin_description = 'Complex sidebar for home, ect';
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
          'element' => 'no_wrapper',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'contentmain' => array(
        'content' => array(
          'element' => 'no_wrapper',
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
  $display->uuid = '2674793b-f28d-4514-8f76-fa8bc669e719';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-329a682a-7667-4b5a-b636-1de1085c37e3';
    $pane->panel = 'middle';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:6d49f829-c1ce-4734-ae6b-b2d6bd6ec9f2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'element' => 'no_wrapper',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'content' => array(
          'element' => 'no_wrapper',
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
    $pane->uuid = '329a682a-7667-4b5a-b636-1de1085c37e3';
    $display->content['new-329a682a-7667-4b5a-b636-1de1085c37e3'] = $pane;
    $display->panels['middle'][0] = 'new-329a682a-7667-4b5a-b636-1de1085c37e3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['page_sidebar_right_complex_'] = $mini;

  return $export;
}