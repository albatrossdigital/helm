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
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'content' => array(
          'prefix' => '',
          'suffix' => '',
        ),
        'theme' => 0,
      ),
      'contentmain' => array(
        'content' => array(
          'prefix' => '',
          'suffix' => '',
        ),
        'theme' => 0,
      ),
    ),
    'style' => 'wrapper_raw',
    'contentmain' => array(
      'style' => 'wrapper_raw',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2674793b-f28d-4514-8f76-fa8bc669e719';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-52603a0b-6a98-473a-ae30-8cbb992665b6';
    $pane->panel = 'contentmain';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:16';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'prefix' => '',
          'suffix' => '',
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
    $pane->uuid = '52603a0b-6a98-473a-ae30-8cbb992665b6';
    $display->content['new-52603a0b-6a98-473a-ae30-8cbb992665b6'] = $pane;
    $display->panels['contentmain'][0] = 'new-52603a0b-6a98-473a-ae30-8cbb992665b6';
    $pane = new stdClass();
    $pane->pid = 'new-8aa60014-58c8-49a3-8328-9b1dc35edf96';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'prefix' => '',
          'suffix' => '',
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
    $pane->uuid = '8aa60014-58c8-49a3-8328-9b1dc35edf96';
    $display->content['new-8aa60014-58c8-49a3-8328-9b1dc35edf96'] = $pane;
    $display->panels['contentmain'][1] = 'new-8aa60014-58c8-49a3-8328-9b1dc35edf96';
    $pane = new stdClass();
    $pane->pid = 'new-11e6ebc3-f674-4abb-aa0e-5323fc875045';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'prefix' => '',
          'suffix' => '',
        ),
        'content' => array(
          'prefix' => '<div class="panels-twitter-feed">',
          'suffix' => '</div>',
        ),
        'theme' => 0,
      ),
      'style' => 'wrapper_raw',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '11e6ebc3-f674-4abb-aa0e-5323fc875045';
    $display->content['new-11e6ebc3-f674-4abb-aa0e-5323fc875045'] = $pane;
    $display->panels['contentmain'][2] = 'new-11e6ebc3-f674-4abb-aa0e-5323fc875045';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['page_sidebar_right_complex_'] = $mini;

  return $export;
}
