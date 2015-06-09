<?php
/**
 * @file
 * helm_dashboard.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function helm_dashboard_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'user:user:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'panelizer',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->uuid = '0046eb35-64ce-42b0-a5f1-0771ff9edb65';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a4bf7606-e191-4d84-ae9b-87f21377acad';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'google_analytics_reports-dashboard';
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
    $pane->uuid = 'a4bf7606-e191-4d84-ae9b-87f21377acad';
    $display->content['new-a4bf7606-e191-4d84-ae9b-87f21377acad'] = $pane;
    $display->panels['contentmain'][0] = 'new-a4bf7606-e191-4d84-ae9b-87f21377acad';
    $pane = new stdClass();
    $pane->pid = 'new-969fcd2d-c03d-42a5-9426-69c9e2f7711e';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'google_analytics_reports-path_mini';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '969fcd2d-c03d-42a5-9426-69c9e2f7711e';
    $display->content['new-969fcd2d-c03d-42a5-9426-69c9e2f7711e'] = $pane;
    $display->panels['contentmain'][1] = 'new-969fcd2d-c03d-42a5-9426-69c9e2f7711e';
    $pane = new stdClass();
    $pane->pid = 'new-d384916f-c38c-4fce-bc26-30ca2dccbcbe';
    $pane->panel = 'sidebar';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'override_title' => 1,
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
    $pane->uuid = 'd384916f-c38c-4fce-bc26-30ca2dccbcbe';
    $display->content['new-d384916f-c38c-4fce-bc26-30ca2dccbcbe'] = $pane;
    $display->panels['sidebar'][0] = 'new-d384916f-c38c-4fce-bc26-30ca2dccbcbe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'user:user:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->uuid = '874407ac-e8d4-4cee-8b3f-c3327affe176';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f0cad291-4688-4952-a00f-5afccdf10d80';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'google_analytics_reports-dashboard';
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
    $pane->uuid = 'f0cad291-4688-4952-a00f-5afccdf10d80';
    $display->content['new-f0cad291-4688-4952-a00f-5afccdf10d80'] = $pane;
    $display->panels['contentmain'][0] = 'new-f0cad291-4688-4952-a00f-5afccdf10d80';
    $pane = new stdClass();
    $pane->pid = 'new-f9dfd015-27dc-4083-9682-bc81f6fa284c';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'google_analytics_reports-path_mini';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f9dfd015-27dc-4083-9682-bc81f6fa284c';
    $display->content['new-f9dfd015-27dc-4083-9682-bc81f6fa284c'] = $pane;
    $display->panels['contentmain'][1] = 'new-f9dfd015-27dc-4083-9682-bc81f6fa284c';
    $pane = new stdClass();
    $pane->pid = 'new-90222fa7-3747-4d5c-80cb-64fa2e061597';
    $pane->panel = 'sidebar';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'override_title' => 1,
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
    $pane->uuid = '90222fa7-3747-4d5c-80cb-64fa2e061597';
    $display->content['new-90222fa7-3747-4d5c-80cb-64fa2e061597'] = $pane;
    $display->panels['sidebar'][0] = 'new-90222fa7-3747-4d5c-80cb-64fa2e061597';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default:default'] = $panelizer;

  return $export;
}
