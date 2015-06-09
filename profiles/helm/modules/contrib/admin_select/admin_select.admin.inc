<?php

/**
 * @file
 * Administration page callbacks for the Administration Menu Select module.
 */

/**
 * Administration Menu select deafults form.
 */
function admin_select_defaults($form, &$form_state) {
  $settings = variable_get('admin_select_defaults', array());

  $info = admin_select_get_admin_select_info();
  foreach ($info as &$item) {
    $item = $item['title'];
  }

  // Use an incrementing weight variable for weight so that we don't end up
  // with everything being zero by default, which would result in unexpected
  // ordering of roles.
  $default_weight = 0;
  $form['roles']['#tree'] = TRUE;
  foreach (user_roles(TRUE) as $rid => $role) {
    $form['roles'][$rid]['#weight'] = isset($settings[$rid]) ? $settings[$rid]['weight'] : $default_weight;
    $form['roles'][$rid]["admin_select_default"] = array(
      '#type' => 'select',
      '#title' => ucwords($role),
      '#options' => array('' => t('None')) + $info,
      '#default_value' => isset($settings[$rid]) ? $settings[$rid]['admin_select_default'] : '',
    );
    $form['roles'][$rid]['weight'] = array(
      '#type' => 'weight',
      '#delta' => count(user_roles(TRUE)),
      '#default_value' => isset($settings[$rid]) ? $settings[$rid]['weight'] : $default_weight,
      '#attributes' => array(
        'class' => array('admin-select-weight'),
      ),
    );

    if (!isset($settings[$rid])) {
      $default_weight++;
    }
  }
  uasort($form['roles'], "element_sort");

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  return $form;
}

/**
 * Submit callback; Administration Menu select defaults form.
 */
function admin_select_defaults_submit($form, $form_state) {
  drupal_set_message('The defaults have been saved.');
  variable_set('admin_select_defaults', $form_state['values']['roles']);
}

/**
 * Theme callback; Administration Menu select deafults form.
 */
function theme_admin_select_defaults($variables) {
  $form = $variables['form'];
  $header = array(t('Role'), t('Administration menu'), t('Weight'));

  $rows = array();
  foreach (element_children($form['roles']) as $rid) {
    $title = $form['roles'][$rid]['admin_select_default']['#title'];
    unset($form['roles'][$rid]['admin_select_default']['#title']);
    $rows[] = array(
      'data' => array(
        $title,
        drupal_render($form['roles'][$rid]['admin_select_default']),
        drupal_render($form['roles'][$rid]['weight']),
      ),
      'class' => array('draggable'),
    );
  }

  drupal_add_tabledrag('admin-select', 'order', 'sibling', 'admin-select-weight');
  $output = theme('table', array(
    'header' => $header,
    'rows' => $rows,
    'attributes' => array('id' => 'admin-select')
  ));

  $output .= drupal_render_children($form);
  return $output;
}
