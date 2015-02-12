<?php
/**
 * @file
 * soar_news_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function soar_news_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
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
    $pane->pid = 'new-04854c1b-0a48-4048-b31c-370fb27a1815';
    $pane->panel = 'contentmain';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'soar_date_formats_date_short',
      'context' => 'panelizer',
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
    $pane->uuid = '04854c1b-0a48-4048-b31c-370fb27a1815';
    $display->content['new-04854c1b-0a48-4048-b31c-370fb27a1815'] = $pane;
    $display->panels['contentmain'][1] = 'new-04854c1b-0a48-4048-b31c-370fb27a1815';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '620c9c74-fc1b-4b88-91b5-f5010b93e22e';
    $display->content['new-620c9c74-fc1b-4b88-91b5-f5010b93e22e'] = $pane;
    $display->panels['contentmain'][2] = 'new-620c9c74-fc1b-4b88-91b5-f5010b93e22e';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6015b2d7-3da3-4825-afef-efbfcf61839d';
    $display->content['new-6015b2d7-3da3-4825-afef-efbfcf61839d'] = $pane;
    $display->panels['contentmain'][3] = 'new-6015b2d7-3da3-4825-afef-efbfcf61839d';
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
  $export['node:article:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '17d36e42-3bd7-44bf-b0fc-5de0e7460cf0';
    $display->content['new-17d36e42-3bd7-44bf-b0fc-5de0e7460cf0'] = $pane;
    $display->panels['contentmain'][1] = 'new-17d36e42-3bd7-44bf-b0fc-5de0e7460cf0';
    $pane = new stdClass();
    $pane->pid = 'new-7d02c90d-6b27-419a-86fc-c589357b4003';
    $pane->panel = 'sidebar';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'soar_date_formats_date_short',
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
    $pane->uuid = '7d02c90d-6b27-419a-86fc-c589357b4003';
    $display->content['new-7d02c90d-6b27-419a-86fc-c589357b4003'] = $pane;
    $display->panels['sidebar'][0] = 'new-7d02c90d-6b27-419a-86fc-c589357b4003';
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
  $export['node:article:default:teaser'] = $panelizer;

  return $export;
}
