<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Civic Map'),
  'description' => t('Add the interactive map by Albatross Digital'),
  'category' => t('Custom panes'),
  //'edit form' => 'color_styles_message_pane_edit_form',
  'render callback' => 'helm_civic_map_render_pane',
  'all contexts' => TRUE,
);