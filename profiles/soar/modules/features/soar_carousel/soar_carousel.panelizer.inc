<?php
/**
 * @file
 * soar_carousel.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function soar_carousel_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:soar_carousel:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'soar_carousel';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Slide field collection (field_soar_carousel_slide) from fieldable_panels_pane (soar_carousel)',
      'keyword' => 'Field collection',
      'name' => 'field_collection_from_field:fieldable_panels_pane:soar_carousel:field_soar_carousel_slide',
      'delta' => '0',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
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
      'default' => array(
        'content' => array(
          'element' => 'no_wrapper',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'center' => NULL,
      'contentmain' => array(
        'content' => array(
          'element' => 'no_wrapper',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'middle' => NULL,
    ),
    'contentmain' => array(
      'style' => 'wrapper_element',
    ),
    'style' => 'wrapper_element',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e7fe5fd6-68a1-45e5-8ba1-f47c5702c79a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-364a6f0f-e15d-4718-93fe-eb9f612aff2c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'soar_carousel-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'full',
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
    $pane->uuid = '364a6f0f-e15d-4718-93fe-eb9f612aff2c';
    $display->content['new-364a6f0f-e15d-4718-93fe-eb9f612aff2c'] = $pane;
    $display->panels['middle'][0] = 'new-364a6f0f-e15d-4718-93fe-eb9f612aff2c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-364a6f0f-e15d-4718-93fe-eb9f612aff2c';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:soar_carousel:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:soar_carousel:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'soar_carousel';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Slide field collection (field_soar_carousel_slide) from fieldable_panels_pane (soar_carousel)',
      'keyword' => 'Field collection',
      'name' => 'field_collection_from_field:fieldable_panels_pane:soar_carousel:field_soar_carousel_slide',
      'delta' => '0',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
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
  $display->uuid = '5aefede0-c22b-4b2b-ae7c-6e788f9585c1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9ce1a8d5-cfcf-40f0-bee9-c3864dc698e1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'soar_carousel-panel_pane_1';
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
    $pane->uuid = '9ce1a8d5-cfcf-40f0-bee9-c3864dc698e1';
    $display->content['new-9ce1a8d5-cfcf-40f0-bee9-c3864dc698e1'] = $pane;
    $display->panels['middle'][0] = 'new-9ce1a8d5-cfcf-40f0-bee9-c3864dc698e1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:soar_carousel:default:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:soar_carousel:default:promo';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'soar_carousel';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Slide field collection (field_soar_carousel_slide) from fieldable_panels_pane (soar_carousel)',
      'keyword' => 'Field collection',
      'name' => 'field_collection_from_field:fieldable_panels_pane:soar_carousel:field_soar_carousel_slide',
      'delta' => '0',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'promo';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6437ca21-abdf-4fc7-ae80-371b50fd9965';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-24c3b704-0ab7-43d6-89c5-e332d15a54a5';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'soar_carousel-soar_carousel_promo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '24c3b704-0ab7-43d6-89c5-e332d15a54a5';
    $display->content['new-24c3b704-0ab7-43d6-89c5-e332d15a54a5'] = $pane;
    $display->panels['center'][0] = 'new-24c3b704-0ab7-43d6-89c5-e332d15a54a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:soar_carousel:default:promo'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:soar_carousel:default:triptych';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'soar_carousel';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Slide field collection (field_soar_carousel_slide) from fieldable_panels_pane (soar_carousel)',
      'keyword' => 'Field collection',
      'name' => 'field_collection_from_field:fieldable_panels_pane:soar_carousel:field_soar_carousel_slide',
      'delta' => '0',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
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
  $display->uuid = '8218c396-b07e-4a14-be61-672bedfb3e3b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-695ca19d-acb6-4945-b398-546d42ee1dc3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_triptych-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'full',
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
    $pane->uuid = '695ca19d-acb6-4945-b398-546d42ee1dc3';
    $display->content['new-695ca19d-acb6-4945-b398-546d42ee1dc3'] = $pane;
    $display->panels['middle'][0] = 'new-695ca19d-acb6-4945-b398-546d42ee1dc3';
    $pane = new stdClass();
    $pane->pid = 'new-a86c4dee-3a57-4089-bcc2-6f129e38ba1e';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'system-powered-by';
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
    $pane->uuid = 'a86c4dee-3a57-4089-bcc2-6f129e38ba1e';
    $display->content['new-a86c4dee-3a57-4089-bcc2-6f129e38ba1e'] = $pane;
    $display->panels['middle'][1] = 'new-a86c4dee-3a57-4089-bcc2-6f129e38ba1e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:soar_carousel:default:triptych'] = $panelizer;

  return $export;
}
