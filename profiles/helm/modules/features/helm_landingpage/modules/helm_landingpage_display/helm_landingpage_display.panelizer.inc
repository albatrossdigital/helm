<?php
/**
 * @file
 * helm_landingpage_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function helm_landingpage_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:landingpage:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'landingpage';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
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
  $display->title = '%node:title';
  $display->uuid = '596ce1b6-3669-438b-95bd-de932de048f1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ab2885fb-e2a9-4a6d-854a-2dbf4222245f';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ab2885fb-e2a9-4a6d-854a-2dbf4222245f';
    $display->content['new-ab2885fb-e2a9-4a6d-854a-2dbf4222245f'] = $pane;
    $display->panels['contentmain'][0] = 'new-ab2885fb-e2a9-4a6d-854a-2dbf4222245f';
    $pane = new stdClass();
    $pane->pid = 'new-b2662eea-72dd-4c05-8cd5-80f3232ef834';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'landingpage_children-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b2662eea-72dd-4c05-8cd5-80f3232ef834';
    $display->content['new-b2662eea-72dd-4c05-8cd5-80f3232ef834'] = $pane;
    $display->panels['contentmain'][1] = 'new-b2662eea-72dd-4c05-8cd5-80f3232ef834';
    $pane = new stdClass();
    $pane->pid = 'new-30fb9742-e376-462c-bcf7-06de98cde82f';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'plain_text',
        ),
      ),
      'context' => 'panelizer',
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
          'element' => 'h3',
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
    $pane->uuid = '30fb9742-e376-462c-bcf7-06de98cde82f';
    $display->content['new-30fb9742-e376-462c-bcf7-06de98cde82f'] = $pane;
    $display->panels['sidebar'][0] = 'new-30fb9742-e376-462c-bcf7-06de98cde82f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-30fb9742-e376-462c-bcf7-06de98cde82f';
  $panelizer->display = $display;
  $export['node:landingpage:default'] = $panelizer;

  return $export;
}
