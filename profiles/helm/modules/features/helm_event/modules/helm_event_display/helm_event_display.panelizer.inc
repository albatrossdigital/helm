<?php
/**
 * @file
 * helm_event_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function helm_event_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = '';
  $panelizer->link_to_entity = FALSE;
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
  $display->uuid = '426595b3-301c-4cba-a821-81d9bfedfc14';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0171d4b1-a4be-45e4-9dcd-3c6819f70402';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subtitle';
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
          'element' => 'h2',
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
    $pane->uuid = '0171d4b1-a4be-45e4-9dcd-3c6819f70402';
    $display->content['new-0171d4b1-a4be-45e4-9dcd-3c6819f70402'] = $pane;
    $display->panels['contentmain'][0] = 'new-0171d4b1-a4be-45e4-9dcd-3c6819f70402';
    $pane = new stdClass();
    $pane->pid = 'new-3c296e6b-fe09-466c-8dda-9bf294cc8c1a';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3c296e6b-fe09-466c-8dda-9bf294cc8c1a';
    $display->content['new-3c296e6b-fe09-466c-8dda-9bf294cc8c1a'] = $pane;
    $display->panels['contentmain'][1] = 'new-3c296e6b-fe09-466c-8dda-9bf294cc8c1a';
    $pane = new stdClass();
    $pane->pid = 'new-d19f1dd4-6db6-4a91-8ba6-972614e36a51';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_attachment';
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
      'settings' => array(
        'title' => array(
          'element' => 'no_wrapper',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'content' => array(
          'element' => 'div',
          'attributes' => array(
            'id' => '',
            'class' => 'btn btn-xs btn-secondary',
          ),
        ),
        'theme' => 0,
      ),
      'style' => 'wrapper_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd19f1dd4-6db6-4a91-8ba6-972614e36a51';
    $display->content['new-d19f1dd4-6db6-4a91-8ba6-972614e36a51'] = $pane;
    $display->panels['contentmain'][2] = 'new-d19f1dd4-6db6-4a91-8ba6-972614e36a51';
    $pane = new stdClass();
    $pane->pid = 'new-05216ccf-5c0c-43fb-b29c-97832f76e5a2';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'path' => 'events',
        'query' => 'type=[tid]',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'kalacustomize',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '05216ccf-5c0c-43fb-b29c-97832f76e5a2';
    $display->content['new-05216ccf-5c0c-43fb-b29c-97832f76e5a2'] = $pane;
    $display->panels['contentmain'][3] = 'new-05216ccf-5c0c-43fb-b29c-97832f76e5a2';
    $pane = new stdClass();
    $pane->pid = 'new-6ca1060f-db04-4eef-a8de-671da9c28ea9';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_registration';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'full_registration_form',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'label' => ' ',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6ca1060f-db04-4eef-a8de-671da9c28ea9';
    $display->content['new-6ca1060f-db04-4eef-a8de-671da9c28ea9'] = $pane;
    $display->panels['contentmain'][4] = 'new-6ca1060f-db04-4eef-a8de-671da9c28ea9';
    $pane = new stdClass();
    $pane->pid = 'new-0236afd6-aff4-43ef-8e42-c432f88db59d';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'date',
        'fromto' => 'both',
        'multiple_from' => 'now',
        'multiple_number' => 1,
        'multiple_to' => '',
        'show_repeat_rule' => 'hide',
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
    $pane->uuid = '0236afd6-aff4-43ef-8e42-c432f88db59d';
    $display->content['new-0236afd6-aff4-43ef-8e42-c432f88db59d'] = $pane;
    $display->panels['sidebar'][0] = 'new-0236afd6-aff4-43ef-8e42-c432f88db59d';
    $pane = new stdClass();
    $pane->pid = 'new-747a232b-c7d2-45c2-98d1-8b830b7bcbe7';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'large',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '747a232b-c7d2-45c2-98d1-8b830b7bcbe7';
    $display->content['new-747a232b-c7d2-45c2-98d1-8b830b7bcbe7'] = $pane;
    $display->panels['sidebar'][1] = 'new-747a232b-c7d2-45c2-98d1-8b830b7bcbe7';
    $pane = new stdClass();
    $pane->pid = 'new-57009514-7a26-40e7-8133-477f14cdc773';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_description';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '57009514-7a26-40e7-8133-477f14cdc773';
    $display->content['new-57009514-7a26-40e7-8133-477f14cdc773'] = $pane;
    $display->panels['sidebar'][2] = 'new-57009514-7a26-40e7-8133-477f14cdc773';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-0171d4b1-a4be-45e4-9dcd-3c6819f70402';
  $panelizer->display = $display;
  $export['node:event:default:default'] = $panelizer;

  return $export;
}
