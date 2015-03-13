<?php
/**
 * @file
 * Provides an Administrative UI for the addressfield_tokens module.
*/

/**
 * Provides a form for configuring regional options for addresses.
 * 
 * @param array $form
 * @param array $form_state
 * @return array The form.
 */
function addressfield_tokens_admin_form($form, &$form_state) {
  $options = array('' => t('- None -')) + _addressfield_tokens_countries();
  
  $form['addressfield_tokens_default_country'] = array(
    '#type' => 'select',
    '#title' => t('Default country'),
    '#description' => t('In the city/state views, addresses in this country will not display the country.'),
    '#options' => $options,
    '#default_value' => addressfield_tokens_default_country(),
  );
  
  $form['addressfield_tokens_property_names'] = array(
    '#type' => 'fieldset',
    '#title' => t('Custom address property names'),
    '#description' => t('Change the names of address fields when selecting tokens.'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#tree' => TRUE,
  );
  
  $names = addressfield_tokens_property_names();
  $props = addressfield_data_property_info();
  foreach ($props as $name => $prop) {
    $form['addressfield_tokens_property_names'][$name] = array(
      '#type' => 'textfield',
      '#title' => check_plain($prop['label']),
      '#description' => filter_xss($name),
      '#default_value' => !empty($names[$name]) ? $names[$name] : $prop['label'],
    );
  }
  return system_settings_form($form);
}