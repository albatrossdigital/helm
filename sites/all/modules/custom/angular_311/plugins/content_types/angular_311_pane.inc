<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Angular 311 Pane'),
  'description' => t('An interactive 311 interface by Albatross Digital'),
  'category' => t('Custom panes'),
  //'edit form' => 'color_styles_message_pane_edit_form',
  'render callback' => 'angular_311_render_pane',
  'all contexts' => TRUE,
);