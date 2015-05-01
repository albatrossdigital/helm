<?php
/**
 * @file
 * helm_payment.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function helm_payment_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:payment:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'payment';
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
  $display->layout = 'helm_sidebar_left';
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
  $display->uuid = '4433113e-bef1-4595-8c23-9cbcef8c039a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4b538c65-13c4-4696-84ed-e67d20766364';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4b538c65-13c4-4696-84ed-e67d20766364';
  $display->content['new-4b538c65-13c4-4696-84ed-e67d20766364'] = $pane;
  $display->panels['contentmain'][0] = 'new-4b538c65-13c4-4696-84ed-e67d20766364';
  $pane = new stdClass();
  $pane->pid = 'new-d005eec2-dc27-4a02-afa9-c76dc22ecd04';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_icon';
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
  $pane->uuid = 'd005eec2-dc27-4a02-afa9-c76dc22ecd04';
  $display->content['new-d005eec2-dc27-4a02-afa9-c76dc22ecd04'] = $pane;
  $display->panels['sidebar'][0] = 'new-d005eec2-dc27-4a02-afa9-c76dc22ecd04';
  $pane = new stdClass();
  $pane->pid = 'new-0b2b2f96-2dfe-4e4c-899c-3251b9bc6581';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_product';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'commerce_cart_add_to_cart_form',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'full',
      'page' => 1,
      'show_quantity' => 0,
      'default_quantity' => '1',
      'combine' => 1,
      'show_single_product_attributes' => 0,
      'line_item_type' => 'commerce_invoice',
    ),
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Pay now online',
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
  $pane->uuid = '0b2b2f96-2dfe-4e4c-899c-3251b9bc6581';
  $display->content['new-0b2b2f96-2dfe-4e4c-899c-3251b9bc6581'] = $pane;
  $display->panels['sidebar'][1] = 'new-0b2b2f96-2dfe-4e4c-899c-3251b9bc6581';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4b538c65-13c4-4696-84ed-e67d20766364';
  $panelizer->display = $display;
  $export['node:payment:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:payment:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'payment';
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
  $display->uuid = 'e88725d4-0040-4926-9fd5-3dccbd2b9ecc';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dd5755a3-e6e3-4a4b-8982-ba8489728c50';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_color';
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
  $pane->uuid = 'dd5755a3-e6e3-4a4b-8982-ba8489728c50';
  $display->content['new-dd5755a3-e6e3-4a4b-8982-ba8489728c50'] = $pane;
  $display->panels['center'][0] = 'new-dd5755a3-e6e3-4a4b-8982-ba8489728c50';
  $pane = new stdClass();
  $pane->pid = 'new-739a31b9-1165-42f0-8131-0f2e955a6808';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_icon';
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
  $pane->uuid = '739a31b9-1165-42f0-8131-0f2e955a6808';
  $display->content['new-739a31b9-1165-42f0-8131-0f2e955a6808'] = $pane;
  $display->panels['center'][1] = 'new-739a31b9-1165-42f0-8131-0f2e955a6808';
  $pane = new stdClass();
  $pane->pid = 'new-4251ad6c-e71b-4921-950b-c85e1f4aa98a';
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
  $pane->uuid = '4251ad6c-e71b-4921-950b-c85e1f4aa98a';
  $display->content['new-4251ad6c-e71b-4921-950b-c85e1f4aa98a'] = $pane;
  $display->panels['center'][2] = 'new-4251ad6c-e71b-4921-950b-c85e1f4aa98a';
  $pane = new stdClass();
  $pane->pid = 'new-988533f4-83f3-4557-8197-cd25474c5b60';
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
  $pane->uuid = '988533f4-83f3-4557-8197-cd25474c5b60';
  $display->content['new-988533f4-83f3-4557-8197-cd25474c5b60'] = $pane;
  $display->panels['center'][3] = 'new-988533f4-83f3-4557-8197-cd25474c5b60';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-988533f4-83f3-4557-8197-cd25474c5b60';
  $panelizer->display = $display;
  $export['node:payment:default:teaser'] = $panelizer;

  return $export;
}
