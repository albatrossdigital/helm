<?php

/**
 * @file
 * Administration page.
 */

/**
 * Configuration form.
 */
function vertical_tabs_responsive_admin_settings($form, &$form_state) {

  $form['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General settings'),
    '#weight' => 5,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['general']['vertical_tabs_responsive_button'] = array(
    '#type' => 'checkbox',
    '#title' => t('Append show/hide button to vertical tabs top.'),
    '#default_value' => variable_get('vertical_tabs_responsive_button', 0),
  );

  $form['general']['vertical_tabs_responsive_left'] = array(
    '#type' => 'select',
    '#title' => t('Vertical tabs side.'),
    '#options' => array(
      0 => t('Right'),
      1 => t('Left'),
    ),
    '#default_value' => variable_get('vertical_tabs_responsive_left', 0),
  );

  $form['general']['vertical_tabs_responsive_vt_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Vertical tabs width.'),
    '#description' => t('Enter percentage from 20% to 50%.'),
    '#default_value' => variable_get('vertical_tabs_responsive_vt_width', '30'),
    '#size' => 2,
    '#maxlength' => 2,
    '#required' => TRUE,
    '#field_suffix' => t('%'),
  );

  $form['general']['vertical_tabs_responsive_break'] = array(
    '#type' => 'select',
    '#title' => t('Reponsive breakpoint.'),
    '#options' => array('768' => '768', '992' => '992', '1200' => '1200'),
    '#description' => t('Select browser width which sets the breakpoint between mobile and desktop versions of vertical tabs.'),
    '#default_value' => variable_get('vertical_tabs_responsive_break', '960'),
    '#required' => TRUE,
    '#field_suffix' => t('px'),
  );

  $form['restrict'] = array(
    '#type' => 'fieldset',
    '#title' => t('Restrictions'),
    '#weight' => 5,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['restrict']['vertical_tabs_responsive_path_blacklist'] = array(
    '#type' => 'textarea',
    '#title' => t('Blacklist: disable this module on the following paths'),
    '#description' => t('One per line. Wildcard-enabled. Examples: admin/structure/features, admin*'),
    '#rows' => 3,
    '#cols' => 40,
    '#default_value' => variable_get('vertical_tabs_responsive_path_blacklist', ''),
  );

  // Anonymous user won't see vt.
  $roles = user_roles();
  unset($roles[1]);
  $form['restrict']['vertical_tabs_responsive_per_role'] = array(
    '#type' => 'select',
    '#title' => t('Select roles that will see responsified vertical tabs'),
    '#options' => $roles,
    '#multiple' => TRUE,
    '#default_value' => variable_get('vertical_tabs_responsive_per_role', array()),
    '#description' => t('Selecting no role will responsify vertical tabs for everyone.'),
  );

  $form['#validate'][] = 'vertical_tabs_responsive_admin_settings_validate';
  return system_settings_form($form);
}

/**
 * Configuration form validation.
 */
function vertical_tabs_responsive_admin_settings_validate($form, &$form_state) {

  if ($form_state['values']['vertical_tabs_responsive_vt_width'] > 50) {
    form_set_error('vertical_tabs_responsive_vt_width', t('Vertical tabs width must be under 51%'));
  }

  if ($form_state['values']['vertical_tabs_responsive_vt_width'] < 20) {
    form_set_error('vertical_tabs_responsive_vt_width', t('Vertical tabs width must be at least 20%'));
  }
}
