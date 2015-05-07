<?php

/**
 * @file
 * Administration page callbacks for Login Redirect module.
 */

/**
 * Generates a configuration form.
 */
function login_redirect_admin_settings() {
  $options = array(0 => t('Disabled'), 1 => t('Enabled'));
  $form['status'] = array(
    '#type' => 'radios',
    '#title' => t('Module Status'),
    '#default_value' => variable_get('login_redirect_status', 0),
    '#options' => $options,
    '#description' => t('Should the module be enabled?'),
  );
  $form['parameter_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Parameter Name'),
    '#default_value' => variable_get('login_redirect_parameter_name', 'destination'),
    '#description' => t('Enter user defined query parameter name same as we have q in drupal core. For example if the parameter name is set to "destination", then you would visit user/login&destination=(redirect destination).'),
  );
  $form['#submit'][] = 'login_redirect_admin_settings_submit';
  return system_settings_form($form);

}
/**
 * Process settings submission.
 */
function login_redirect_admin_settings_submit($form, $form_state) {
  if (!(is_numeric($form_state['values']['parameter_name']) || empty($form_state['values']['parameter_name']))) {
    variable_set('login_redirect_parameter_name', $form_state['values']['parameter_name']);
    variable_set('login_redirect_status', $form_state['values']['status']);
  }
  else {
    drupal_set_message(t('The parameter name must consists of only alphabetical letters and cannot be left empty. The module was disabled.'), 'error');
    variable_set('login_redirect_status', 0);
    variable_set('login_redirect_parameter_name', $form_state['values']['parameter_name']);
  }
}
