<?php
/**
 * @file
 * soar_webform_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function soar_webform_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:webform:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'webform';
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
  $display->title = '%node:title';
  $display->uuid = '91daa56e-f257-4dc2-9cc0-e4531d1f59b0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d6b0c9b2-d0c0-4cf8-9cd3-cb04326d5b15';
    $pane->panel = 'contentmain';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd6b0c9b2-d0c0-4cf8-9cd3-cb04326d5b15';
    $display->content['new-d6b0c9b2-d0c0-4cf8-9cd3-cb04326d5b15'] = $pane;
    $display->panels['contentmain'][0] = 'new-d6b0c9b2-d0c0-4cf8-9cd3-cb04326d5b15';
    $pane = new stdClass();
    $pane->pid = 'new-c6097918-df6b-4c34-909e-5603b57a476d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'edit' => array(
          'editor' => 'form',
        ),
        'file_view_mode' => 'default',
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
    $pane->uuid = 'c6097918-df6b-4c34-909e-5603b57a476d';
    $display->content['new-c6097918-df6b-4c34-909e-5603b57a476d'] = $pane;
    $display->panels['contentmain'][1] = 'new-c6097918-df6b-4c34-909e-5603b57a476d';
    $pane = new stdClass();
    $pane->pid = 'new-c716bb93-03d1-4c76-bc18-05801fb6c5ca';
    $pane->panel = 'contentmain';
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
        'edit' => array(
          'editor' => 'form',
        ),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c716bb93-03d1-4c76-bc18-05801fb6c5ca';
    $display->content['new-c716bb93-03d1-4c76-bc18-05801fb6c5ca'] = $pane;
    $display->panels['contentmain'][2] = 'new-c716bb93-03d1-4c76-bc18-05801fb6c5ca';
    $pane = new stdClass();
    $pane->pid = 'new-a684e9c6-ba2c-4f0f-a8d2-18c9fae71515';
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
      'formatter_settings' => array(
        'edit' => array(
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
          'element' => 'h2',
          'attributes' => array(
            'id' => '',
            'class' => 'field-name-subtitle',
          ),
        ),
        'theme' => 0,
      ),
      'style' => 'wrapper_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a684e9c6-ba2c-4f0f-a8d2-18c9fae71515';
    $display->content['new-a684e9c6-ba2c-4f0f-a8d2-18c9fae71515'] = $pane;
    $display->panels['contentmain'][3] = 'new-a684e9c6-ba2c-4f0f-a8d2-18c9fae71515';
    $pane = new stdClass();
    $pane->pid = 'new-4cdccc77-721c-41a8-812b-0cef3a2af65d';
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
      'formatter_settings' => array(
        'edit' => array(
          'editor' => 'plain_text',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4cdccc77-721c-41a8-812b-0cef3a2af65d';
    $display->content['new-4cdccc77-721c-41a8-812b-0cef3a2af65d'] = $pane;
    $display->panels['contentmain'][4] = 'new-4cdccc77-721c-41a8-812b-0cef3a2af65d';
    $pane = new stdClass();
    $pane->pid = 'new-408ec5c2-34a6-46e5-93c8-9385c62350ab';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '408ec5c2-34a6-46e5-93c8-9385c62350ab';
    $display->content['new-408ec5c2-34a6-46e5-93c8-9385c62350ab'] = $pane;
    $display->panels['contentmain'][5] = 'new-408ec5c2-34a6-46e5-93c8-9385c62350ab';
    $pane = new stdClass();
    $pane->pid = 'new-3d2059fe-c057-4d63-9886-5e762a4251a4';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '3d2059fe-c057-4d63-9886-5e762a4251a4';
    $display->content['new-3d2059fe-c057-4d63-9886-5e762a4251a4'] = $pane;
    $display->panels['contentmain'][6] = 'new-3d2059fe-c057-4d63-9886-5e762a4251a4';
    $pane = new stdClass();
    $pane->pid = 'new-16c670bb-d74c-4d29-8a45-f0a6a9d6434d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_attachment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_table',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'edit' => array(
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '16c670bb-d74c-4d29-8a45-f0a6a9d6434d';
    $display->content['new-16c670bb-d74c-4d29-8a45-f0a6a9d6434d'] = $pane;
    $display->panels['contentmain'][7] = 'new-16c670bb-d74c-4d29-8a45-f0a6a9d6434d';
    $pane = new stdClass();
    $pane->pid = 'new-2eb327d8-7303-49fe-b352-777270236060';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'page_sidebar_right';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2eb327d8-7303-49fe-b352-777270236060';
    $display->content['new-2eb327d8-7303-49fe-b352-777270236060'] = $pane;
    $display->panels['sidebar'][0] = 'new-2eb327d8-7303-49fe-b352-777270236060';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a684e9c6-ba2c-4f0f-a8d2-18c9fae71515';
  $panelizer->display = $display;
  $export['node:webform:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:webform:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'webform';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '736b1a6a-ebb6-4a48-8ee9-9c01dd5ee8ac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-beac7ffa-8e1d-407e-9387-b06f0509d946';
    $pane->panel = 'center';
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
      'formatter_settings' => array(
        'edit' => array(
          'editor' => 'plain_text',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'beac7ffa-8e1d-407e-9387-b06f0509d946';
    $display->content['new-beac7ffa-8e1d-407e-9387-b06f0509d946'] = $pane;
    $display->panels['center'][0] = 'new-beac7ffa-8e1d-407e-9387-b06f0509d946';
    $pane = new stdClass();
    $pane->pid = 'new-d61313ea-725d-4e31-b3df-9e7f92971cbe';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd61313ea-725d-4e31-b3df-9e7f92971cbe';
    $display->content['new-d61313ea-725d-4e31-b3df-9e7f92971cbe'] = $pane;
    $display->panels['center'][1] = 'new-d61313ea-725d-4e31-b3df-9e7f92971cbe';
    $pane = new stdClass();
    $pane->pid = 'new-cba729ed-58f3-4daa-877e-a92e1da8f428';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cba729ed-58f3-4daa-877e-a92e1da8f428';
    $display->content['new-cba729ed-58f3-4daa-877e-a92e1da8f428'] = $pane;
    $display->panels['center'][2] = 'new-cba729ed-58f3-4daa-877e-a92e1da8f428';
    $pane = new stdClass();
    $pane->pid = 'new-b379c335-38b8-44c5-b76a-a38a163d684f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_attachment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b379c335-38b8-44c5-b76a-a38a163d684f';
    $display->content['new-b379c335-38b8-44c5-b76a-a38a163d684f'] = $pane;
    $display->panels['center'][3] = 'new-b379c335-38b8-44c5-b76a-a38a163d684f';
    $pane = new stdClass();
    $pane->pid = 'new-d5d1be0d-abb1-4189-b59d-3d35dcfb5be1';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'edit' => array(
          'editor' => 'form',
        ),
        'trim_length' => 600,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd5d1be0d-abb1-4189-b59d-3d35dcfb5be1';
    $display->content['new-d5d1be0d-abb1-4189-b59d-3d35dcfb5be1'] = $pane;
    $display->panels['center'][4] = 'new-d5d1be0d-abb1-4189-b59d-3d35dcfb5be1';
    $pane = new stdClass();
    $pane->pid = 'new-e6d3662a-299e-40de-9fa5-e6969c690b33';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'teaser',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e6d3662a-299e-40de-9fa5-e6969c690b33';
    $display->content['new-e6d3662a-299e-40de-9fa5-e6969c690b33'] = $pane;
    $display->panels['center'][5] = 'new-e6d3662a-299e-40de-9fa5-e6969c690b33';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e6d3662a-299e-40de-9fa5-e6969c690b33';
  $panelizer->display = $display;
  $export['node:webform:default:teaser'] = $panelizer;

  return $export;
}
