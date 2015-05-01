<?php
/**
 * @file
 * helm_document_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function helm_document_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:document:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'document';
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
  $display->layout = 'helm_sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a77abc02-444c-4ee9-918d-279a39a772c9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-605c9e5a-a514-4822-9c82-cf3b7d465bd5';
  $pane->panel = 'contentmain';
  $pane->type = 'token';
  $pane->subtype = 'node:created';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Posted ',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '605c9e5a-a514-4822-9c82-cf3b7d465bd5';
  $display->content['new-605c9e5a-a514-4822-9c82-cf3b7d465bd5'] = $pane;
  $display->panels['contentmain'][0] = 'new-605c9e5a-a514-4822-9c82-cf3b7d465bd5';
  $pane = new stdClass();
  $pane->pid = 'new-e346fff0-a801-48cd-baf8-1bcdbe2a2485';
  $pane->panel = 'contentmain';
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
    'formatter_settings' => array(),
    'context' => 'panelizer',
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
  $pane->uuid = 'e346fff0-a801-48cd-baf8-1bcdbe2a2485';
  $display->content['new-e346fff0-a801-48cd-baf8-1bcdbe2a2485'] = $pane;
  $display->panels['contentmain'][1] = 'new-e346fff0-a801-48cd-baf8-1bcdbe2a2485';
  $pane = new stdClass();
  $pane->pid = 'new-65d562e8-30ec-4a68-8d10-5f5b08deb1dd';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_attachment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'pdf_reader_file',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'pdf_width' => '100%',
      'pdf_height' => '780',
      'renderer' => 'google',
      'download' => 0,
      'colorbox' => FALSE,
      'colorbox_link_text' => '',
    ),
    'context' => 'panelizer',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '65d562e8-30ec-4a68-8d10-5f5b08deb1dd';
  $display->content['new-65d562e8-30ec-4a68-8d10-5f5b08deb1dd'] = $pane;
  $display->panels['contentmain'][2] = 'new-65d562e8-30ec-4a68-8d10-5f5b08deb1dd';
  $pane = new stdClass();
  $pane->pid = 'new-79ee26f1-0428-47af-8c71-a1bd41ded7a6';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
    ),
    'context' => 'panelizer',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '79ee26f1-0428-47af-8c71-a1bd41ded7a6';
  $display->content['new-79ee26f1-0428-47af-8c71-a1bd41ded7a6'] = $pane;
  $display->panels['contentmain'][3] = 'new-79ee26f1-0428-47af-8c71-a1bd41ded7a6';
  $pane = new stdClass();
  $pane->pid = 'new-368b423a-4607-4338-b60a-4fb1d658e686';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '368b423a-4607-4338-b60a-4fb1d658e686';
  $display->content['new-368b423a-4607-4338-b60a-4fb1d658e686'] = $pane;
  $display->panels['contentmain'][4] = 'new-368b423a-4607-4338-b60a-4fb1d658e686';
  $pane = new stdClass();
  $pane->pid = 'new-ed78ac9b-6d07-46fd-9e40-aa1fa591d053';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_attachment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => '',
      'thumbnail_size' => 'sm',
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Download',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ed78ac9b-6d07-46fd-9e40-aa1fa591d053';
  $display->content['new-ed78ac9b-6d07-46fd-9e40-aa1fa591d053'] = $pane;
  $display->panels['sidebar'][0] = 'new-ed78ac9b-6d07-46fd-9e40-aa1fa591d053';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:document:default'] = $panelizer;

  return $export;
}
