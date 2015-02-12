<?php
/**
 * @file
 * soar_page_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function soar_page_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
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
    'style' => 'wrapper_raw',
    'style_settings' => array(
      'default' => array(),
      'sidebar' => array(
        'content' => array(
          'element' => 'no_wrapper',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'contentmain' => array(),
    ),
    'sidebar' => array(
      'style' => 'wrapper_element',
    ),
    'contentmain' => array(
      'style' => 'wrapper_raw',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '865c8c0e-681d-4c10-b83f-33bb41866e5d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-12c7572f-6f4f-4f98-ad96-9459fa31be87';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '12c7572f-6f4f-4f98-ad96-9459fa31be87';
    $display->content['new-12c7572f-6f4f-4f98-ad96-9459fa31be87'] = $pane;
    $display->panels['contentmain'][0] = 'new-12c7572f-6f4f-4f98-ad96-9459fa31be87';
    $pane = new stdClass();
    $pane->pid = 'new-bb057ec9-34f6-499b-8b78-860d43c0fdd6';
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
        'quickedit' => array(
          'editor' => 'plain_text',
        ),
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bb057ec9-34f6-499b-8b78-860d43c0fdd6';
    $display->content['new-bb057ec9-34f6-499b-8b78-860d43c0fdd6'] = $pane;
    $display->panels['contentmain'][1] = 'new-bb057ec9-34f6-499b-8b78-860d43c0fdd6';
    $pane = new stdClass();
    $pane->pid = 'new-4b69a2b5-2ff0-4b4f-96d7-35efd3a1e367';
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
        'hide_if_field' => 'field_media',
        'image_style' => 'large',
        'image_style_large' => '',
        'image_style_medium' => '',
        'image_style_retina' => '',
        'image_style_small' => '',
        'link_field' => '',
        'placeholder_dimensions' => '',
        'placeholder_text' => '',
        'quickedit' => array(
          'editor' => 'form',
        ),
        'image_link' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'wrapper_raw',
      'settings' => array(),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4b69a2b5-2ff0-4b4f-96d7-35efd3a1e367';
    $display->content['new-4b69a2b5-2ff0-4b4f-96d7-35efd3a1e367'] = $pane;
    $display->panels['contentmain'][2] = 'new-4b69a2b5-2ff0-4b4f-96d7-35efd3a1e367';
    $pane = new stdClass();
    $pane->pid = 'new-271ba8a3-a37d-470f-95d8-76fb92814e5c';
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
        'autoplay' => 1,
        'class' => '',
        'edit' => array(
          'editor' => 'form',
        ),
        'format' => 'inline',
        'image_field' => 'field_picture',
        'image_style' => 'large',
        'play_class' => 'button icon-play',
        'quickedit' => array(
          'editor' => 'form',
        ),
        'file_view_mode' => 'full',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'wrapper_raw',
      'settings' => array(),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '271ba8a3-a37d-470f-95d8-76fb92814e5c';
    $display->content['new-271ba8a3-a37d-470f-95d8-76fb92814e5c'] = $pane;
    $display->panels['contentmain'][3] = 'new-271ba8a3-a37d-470f-95d8-76fb92814e5c';
    $pane = new stdClass();
    $pane->pid = 'new-d21b9cde-520d-4d8b-9ed7-7fb5b1b5f6c2';
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
        'quickedit' => array(
          'editor' => 'plain_text',
        ),
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'wrapper_raw',
      'settings' => array(),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd21b9cde-520d-4d8b-9ed7-7fb5b1b5f6c2';
    $display->content['new-d21b9cde-520d-4d8b-9ed7-7fb5b1b5f6c2'] = $pane;
    $display->panels['contentmain'][4] = 'new-d21b9cde-520d-4d8b-9ed7-7fb5b1b5f6c2';
    $pane = new stdClass();
    $pane->pid = 'new-543beff3-a05d-4b8e-9ada-7f33f6e854a7';
    $pane->panel = 'contentmain';
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
        'edit' => array(
          'editor' => 'form',
        ),
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'wrapper_raw',
      'settings' => array(),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '543beff3-a05d-4b8e-9ada-7f33f6e854a7';
    $display->content['new-543beff3-a05d-4b8e-9ada-7f33f6e854a7'] = $pane;
    $display->panels['contentmain'][5] = 'new-543beff3-a05d-4b8e-9ada-7f33f6e854a7';
    $pane = new stdClass();
    $pane->pid = 'new-923fa656-3601-4cec-bf73-ba89e0d89832';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'page_sidebar_right';
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
    $pane->uuid = '923fa656-3601-4cec-bf73-ba89e0d89832';
    $display->content['new-923fa656-3601-4cec-bf73-ba89e0d89832'] = $pane;
    $display->panels['sidebar'][0] = 'new-923fa656-3601-4cec-bf73-ba89e0d89832';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bb057ec9-34f6-499b-8b78-860d43c0fdd6';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}
