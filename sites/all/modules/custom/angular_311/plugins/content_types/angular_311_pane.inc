<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Angular 311 Pane'),
  'description' => t('An interactive 311 interface by Albatross Digital'),
  'category' => t('Custom panes'),
  'edit form' => 'angular_311_pane_edit_form',
  'render callback' => 'angular_311_render_pane',
  'defaults' => array(),
  'all contexts' => TRUE,
);


function angular_311_pane_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['page_display'] = array(
    '#type' => 'radios',
    '#title' => t('311 page display'),
    '#description' => t('If "Show all" is chosen, the 311 app is displayed with tabbed navigation options.  Otherwise only the page specified is displayed.'),
    '#default_value' => !empty($conf['page_display']) ? $conf['page_display'] : 'all',
    '#options' => array(
      'all' => t('Show all (tabbed display)'),
      'answers' => t('Answers'),
      'payments' => t('Payments'),
      'report' => t('Report an Issue'),
      'payments' => t('Payments'),
    )
  );

  return $form;
}

/**
 * Edit form submit function.
 */
function angular_311_pane_edit_form_submit($form, &$form_state) {
  $form_state['conf']['page_display'] = $form_state['values']['page_display'];
}