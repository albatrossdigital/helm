<?php
/**
 * @file
 * helm_widgets.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function helm_widgets_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:image:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'image';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c7c1a6b4-3cc5-44df-94c2-dd36081d6bdb';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c4667dbe-fec2-4720-a9b2-775b4affd90e';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'fieldable_panels_pane:field_basic_image_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'lazysizes',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'default',
      'link_field' => '',
      'show_src' => 1,
      'show_attribution' => 1,
      'image_style_xs' => 'default',
      'image_style_sm' => 'default',
      'image_style_md' => 'default',
      'image_style_lg' => 'default',
    ),
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
  $pane->uuid = 'c4667dbe-fec2-4720-a9b2-775b4affd90e';
  $display->content['new-c4667dbe-fec2-4720-a9b2-775b4affd90e'] = $pane;
  $display->panels['middle'][0] = 'new-c4667dbe-fec2-4720-a9b2-775b4affd90e';
  $pane = new stdClass();
  $pane->pid = 'new-aaf8bd35-0df9-422f-888c-fada4565e0e6';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'fieldable_panels_pane:field_basic_image_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'aaf8bd35-0df9-422f-888c-fada4565e0e6';
  $display->content['new-aaf8bd35-0df9-422f-888c-fada4565e0e6'] = $pane;
  $display->panels['middle'][1] = 'new-aaf8bd35-0df9-422f-888c-fada4565e0e6';
  $pane = new stdClass();
  $pane->pid = 'new-71dc4ada-56e8-400e-9a2c-7fe799096617';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'fieldable_panels_pane:field_basic_image_caption';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '71dc4ada-56e8-400e-9a2c-7fe799096617';
  $display->content['new-71dc4ada-56e8-400e-9a2c-7fe799096617'] = $pane;
  $display->panels['middle'][2] = 'new-71dc4ada-56e8-400e-9a2c-7fe799096617';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:image:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:image:default:triptych';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'image';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'triptych';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fd1f9d1d-e6c4-4a00-af5e-2fdb083515e9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e7fd4bed-f808-45f7-8465-c5281337cbf3';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'fieldable_panels_pane:field_basic_image_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'lazysizes',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'helm_square_extra_small',
      'link_field' => 'field_basic_image_link',
      'show_src' => 1,
      'show_attribution' => 1,
      'image_style_xs' => 'helm_square_extra_small',
      'image_style_sm' => 'helm_square_small',
      'image_style_md' => '',
      'image_style_lg' => '',
    ),
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
  $pane->uuid = 'e7fd4bed-f808-45f7-8465-c5281337cbf3';
  $display->content['new-e7fd4bed-f808-45f7-8465-c5281337cbf3'] = $pane;
  $display->panels['middle'][0] = 'new-e7fd4bed-f808-45f7-8465-c5281337cbf3';
  $pane = new stdClass();
  $pane->pid = 'new-1c93c7bf-b011-43fe-8ddf-6bf9a90a0d43';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'fieldable_panels_pane:field_basic_image_caption';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1c93c7bf-b011-43fe-8ddf-6bf9a90a0d43';
  $display->content['new-1c93c7bf-b011-43fe-8ddf-6bf9a90a0d43'] = $pane;
  $display->panels['middle'][1] = 'new-1c93c7bf-b011-43fe-8ddf-6bf9a90a0d43';
  $pane = new stdClass();
  $pane->pid = 'new-e3de84b8-c3bd-48a7-8bdc-7e05ca2ffe3e';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'fieldable_panels_pane:field_basic_image_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e3de84b8-c3bd-48a7-8bdc-7e05ca2ffe3e';
  $display->content['new-e3de84b8-c3bd-48a7-8bdc-7e05ca2ffe3e'] = $pane;
  $display->panels['middle'][2] = 'new-e3de84b8-c3bd-48a7-8bdc-7e05ca2ffe3e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:image:default:triptych'] = $panelizer;

  return $export;
}
