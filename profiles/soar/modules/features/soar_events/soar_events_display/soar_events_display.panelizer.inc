<?php
/**
 * @file
 * soar_events_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function soar_events_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
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
      'sidebar' => array(
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
    'sidebar' => array(
      'style' => 'wrapper_element',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e268aed3-0cd7-4cf6-870c-5faa75f8cf64';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-34021530-86ed-4b01-80ff-adfe902018b6';
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
    $pane->uuid = '34021530-86ed-4b01-80ff-adfe902018b6';
    $display->content['new-34021530-86ed-4b01-80ff-adfe902018b6'] = $pane;
    $display->panels['contentmain'][0] = 'new-34021530-86ed-4b01-80ff-adfe902018b6';
    $pane = new stdClass();
    $pane->pid = 'new-2f7dc771-c6a0-4b59-9fae-c5b9f6096498';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'panopoly_day',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => array(),
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
          'element' => 'h4',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2f7dc771-c6a0-4b59-9fae-c5b9f6096498';
    $display->content['new-2f7dc771-c6a0-4b59-9fae-c5b9f6096498'] = $pane;
    $display->panels['contentmain'][1] = 'new-2f7dc771-c6a0-4b59-9fae-c5b9f6096498';
    $pane = new stdClass();
    $pane->pid = 'new-daf33406-45c3-4051-99ea-32e494936588';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'panopoly_time',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => array(),
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
          'element' => 'h4',
          'attributes' => array(
            'id' => '',
            'class' => 'inline-header',
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
    $pane->uuid = 'daf33406-45c3-4051-99ea-32e494936588';
    $display->content['new-daf33406-45c3-4051-99ea-32e494936588'] = $pane;
    $display->panels['contentmain'][2] = 'new-daf33406-45c3-4051-99ea-32e494936588';
    $pane = new stdClass();
    $pane->pid = 'new-d276841e-4885-423e-b84c-036f1a05d383';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'addressfield_components',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'components' => array(
          'name_line' => 'name_line',
          'thoroughfare' => 'thoroughfare',
          'premise' => 'premise',
        ),
        'separator' => ', ',
      ),
      'context' => array(),
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
          'element' => 'h4',
          'attributes' => array(
            'id' => '',
            'class' => 'inline-header',
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
    $pane->uuid = 'd276841e-4885-423e-b84c-036f1a05d383';
    $display->content['new-d276841e-4885-423e-b84c-036f1a05d383'] = $pane;
    $display->panels['contentmain'][3] = 'new-d276841e-4885-423e-b84c-036f1a05d383';
    $pane = new stdClass();
    $pane->pid = 'new-620c9c74-fc1b-4b88-91b5-f5010b93e22e';
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
        'image_link' => '',
        'image_style' => 'large',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '620c9c74-fc1b-4b88-91b5-f5010b93e22e';
    $display->content['new-620c9c74-fc1b-4b88-91b5-f5010b93e22e'] = $pane;
    $display->panels['contentmain'][4] = 'new-620c9c74-fc1b-4b88-91b5-f5010b93e22e';
    $pane = new stdClass();
    $pane->pid = 'new-6015b2d7-3da3-4825-afef-efbfcf61839d';
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
          'element' => '0',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'content' => array(
          'element' => '0',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6015b2d7-3da3-4825-afef-efbfcf61839d';
    $display->content['new-6015b2d7-3da3-4825-afef-efbfcf61839d'] = $pane;
    $display->panels['contentmain'][5] = 'new-6015b2d7-3da3-4825-afef-efbfcf61839d';
    $pane = new stdClass();
    $pane->pid = 'new-aa9af1ac-0b8a-4005-9003-e6881d9a2870';
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
          'element' => '0',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'content' => array(
          'element' => '0',
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
    $pane->uuid = 'aa9af1ac-0b8a-4005-9003-e6881d9a2870';
    $display->content['new-aa9af1ac-0b8a-4005-9003-e6881d9a2870'] = $pane;
    $display->panels['sidebar'][0] = 'new-aa9af1ac-0b8a-4005-9003-e6881d9a2870';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-620c9c74-fc1b-4b88-91b5-f5010b93e22e';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H3';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'soar_teaser';
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
      'sidebar' => NULL,
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
    'contentmain' => array(
      'style' => 'wrapper_element',
    ),
    'style' => 'wrapper_element',
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '85da5139-1fd2-43b0-a91d-b6dc80117370';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d2bca18-dfc4-48b1-9918-336531e323cd';
    $pane->panel = 'contentmain';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h3',
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
    $pane->uuid = '9d2bca18-dfc4-48b1-9918-336531e323cd';
    $display->content['new-9d2bca18-dfc4-48b1-9918-336531e323cd'] = $pane;
    $display->panels['contentmain'][0] = 'new-9d2bca18-dfc4-48b1-9918-336531e323cd';
    $pane = new stdClass();
    $pane->pid = 'new-f5e1dc33-e33d-4a3d-af85-afd3f35da217';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'panopoly_time',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => array(),
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
          'element' => 'h4',
          'attributes' => array(
            'id' => '',
            'class' => 'inline-header',
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
    $pane->uuid = 'f5e1dc33-e33d-4a3d-af85-afd3f35da217';
    $display->content['new-f5e1dc33-e33d-4a3d-af85-afd3f35da217'] = $pane;
    $display->panels['contentmain'][1] = 'new-f5e1dc33-e33d-4a3d-af85-afd3f35da217';
    $pane = new stdClass();
    $pane->pid = 'new-639c91e3-c9c7-40d2-a5b1-e72957d5ebb4';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'addressfield_components',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'components' => array(
          'name_line' => 'name_line',
          'thoroughfare' => 'thoroughfare',
          'premise' => 'premise',
        ),
        'separator' => ', ',
      ),
      'context' => array(),
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
          'element' => 'h4',
          'attributes' => array(
            'id' => '',
            'class' => 'inline-header',
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
    $pane->uuid = '639c91e3-c9c7-40d2-a5b1-e72957d5ebb4';
    $display->content['new-639c91e3-c9c7-40d2-a5b1-e72957d5ebb4'] = $pane;
    $display->panels['contentmain'][2] = 'new-639c91e3-c9c7-40d2-a5b1-e72957d5ebb4';
    $pane = new stdClass();
    $pane->pid = 'new-17d36e42-3bd7-44bf-b0fc-5de0e7460cf0';
    $pane->panel = 'contentmain';
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
        'quickedit' => array(
          'editor' => 'form',
        ),
        'trim_length' => 600,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'element' => '',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'content' => array(
          'element' => '0',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '17d36e42-3bd7-44bf-b0fc-5de0e7460cf0';
    $display->content['new-17d36e42-3bd7-44bf-b0fc-5de0e7460cf0'] = $pane;
    $display->panels['contentmain'][3] = 'new-17d36e42-3bd7-44bf-b0fc-5de0e7460cf0';
    $pane = new stdClass();
    $pane->pid = 'new-0cf746ba-8f5e-4d67-ba11-9d731abcaae7';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'panopoly_day',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'element' => '0',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'content' => array(
          'element' => 'h4',
          'attributes' => array(
            'id' => '',
            'class' => 'margin-top-none',
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
    $pane->uuid = '0cf746ba-8f5e-4d67-ba11-9d731abcaae7';
    $display->content['new-0cf746ba-8f5e-4d67-ba11-9d731abcaae7'] = $pane;
    $display->panels['sidebar'][0] = 'new-0cf746ba-8f5e-4d67-ba11-9d731abcaae7';
    $pane = new stdClass();
    $pane->pid = 'new-e34b8ac5-e704-4394-9450-b72b7d105d67';
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
        'image_link' => 'content',
        'image_style' => 'medium',
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'element' => '',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'content' => array(
          'element' => '0',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e34b8ac5-e704-4394-9450-b72b7d105d67';
    $display->content['new-e34b8ac5-e704-4394-9450-b72b7d105d67'] = $pane;
    $display->panels['sidebar'][1] = 'new-e34b8ac5-e704-4394-9450-b72b7d105d67';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default:teaser'] = $panelizer;

  return $export;
}
