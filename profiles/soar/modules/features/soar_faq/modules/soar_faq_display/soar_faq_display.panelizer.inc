<?php
/**
 * @file
 * soar_faq_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function soar_faq_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:faq_category:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'faq_category';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->title = '%taxonomy_term:name';
  $display->uuid = '558f30ea-b3e8-434e-a264-248a60f69dcf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-61f419d7-0289-41e4-b752-615567d9fe2c';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'faq_category-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'term_node_tid_depth' => '',
      ),
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'context' => array(
        0 => 'panelizer',
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
    $pane->uuid = '61f419d7-0289-41e4-b752-615567d9fe2c';
    $display->content['new-61f419d7-0289-41e4-b752-615567d9fe2c'] = $pane;
    $display->panels['contentmain'][0] = 'new-61f419d7-0289-41e4-b752-615567d9fe2c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-61f419d7-0289-41e4-b752-615567d9fe2c';
  $panelizer->display = $display;
  $export['taxonomy_term:faq_category:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:faq_category:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'faq_category';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_burr';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%taxonomy_term:name';
  $display->uuid = '90e04448-78b1-4e3f-9d74-07a2a9069fd4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-203c7839-720d-4827-8806-bc2d8b7610a0';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'faq_home-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '203c7839-720d-4827-8806-bc2d8b7610a0';
    $display->content['new-203c7839-720d-4827-8806-bc2d8b7610a0'] = $pane;
    $display->panels['contentmain'][0] = 'new-203c7839-720d-4827-8806-bc2d8b7610a0';
    $pane = new stdClass();
    $pane->pid = 'new-238d54e8-6aa5-41d9-806a-e1a99a498fe5';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'FAQ Category Icon',
      'title' => '',
      'body' => '<a href="%taxonomy_term:url" class="circle-icon">
%taxonomy_term:field_icon
<div class="color-link" style="background-color:%taxonomy_term:field_color"></div>
</a>',
      'format' => 'html_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '238d54e8-6aa5-41d9-806a-e1a99a498fe5';
    $display->content['new-238d54e8-6aa5-41d9-806a-e1a99a498fe5'] = $pane;
    $display->panels['sidebar'][0] = 'new-238d54e8-6aa5-41d9-806a-e1a99a498fe5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:faq_category:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:faq_category:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'faq_category';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_bryant';
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
  $display->uuid = '660e6bc6-67cc-4ef9-ad50-d4b9b6102199';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-879076c2-d3d7-48b4-89fd-a300cf112d4b';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_icon';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'fontawesome_field_formatter',
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
    $pane->uuid = '879076c2-d3d7-48b4-89fd-a300cf112d4b';
    $display->content['new-879076c2-d3d7-48b4-89fd-a300cf112d4b'] = $pane;
    $display->panels['contentmain'][0] = 'new-879076c2-d3d7-48b4-89fd-a300cf112d4b';
    $pane = new stdClass();
    $pane->pid = 'new-750d83a4-2d0d-4b47-bfb5-da140bbd664f';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_color';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'color_field_default_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
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
    $pane->uuid = '750d83a4-2d0d-4b47-bfb5-da140bbd664f';
    $display->content['new-750d83a4-2d0d-4b47-bfb5-da140bbd664f'] = $pane;
    $display->panels['sidebar'][0] = 'new-750d83a4-2d0d-4b47-bfb5-da140bbd664f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-879076c2-d3d7-48b4-89fd-a300cf112d4b';
  $panelizer->display = $display;
  $export['taxonomy_term:faq_category:default:full'] = $panelizer;

  return $export;
}
