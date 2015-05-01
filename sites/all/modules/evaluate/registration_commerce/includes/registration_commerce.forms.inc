<?php

/**
 * @file
 * Form definitions and callbacks for Registration Commerce.
 */

/**
 * Form callback: edit Registration Commerce settings on a registration type.
 *
 * @entity $registration_type
 *   The registration_type entity to apply the settings to.
 */
function registration_commerce_registration_type_form($form, &$form_state, $registration_type) {
  $form_state['registration_type'] = $registration_type;
  // Grab the existing settings and establish defaults:
  $comreg_settings = $registration_type->registration_commerce_settings;

  $form['enable'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Registration Commerce for this Registration Type.'),
    '#default_value' => isset($comreg_settings['enable']) ? $comreg_settings['enable'] : FALSE,
  );

  $form['price_defaults'] = array(
    '#type' => 'fieldset',
    '#title' => t('Default Price Settings'),
    '#collapsible' => FALSE,
    '#tree' => TRUE,
    '#states' => array(
      // Hide the settings when commerce is disabled.
      'invisible' => array(
        ':input[name="enable"]' => array('checked' => FALSE),
      ),
    ),
  );
  $form['price_defaults']['amount'] = array(
    '#type' => 'textfield',
    '#title' => t('Amount'),
    '#size' => 10,
    '#default_value' => isset($comreg_settings['price_defaults']['amount']) ? $comreg_settings['price_defaults']['amount'] / 100 : 0,
    '#element_validate' => array('element_validate_number'),
  );
  $form['price_defaults']['currency_code'] = array(
    '#type' => 'select',
    '#title' => t('Currency'),
    '#options' => commerce_currency_code_options_list(),
    '#default_value' => isset($comreg_settings['price_defaults']['currency_code']) ? $comreg_settings['price_defaults']['currency_code'] : commerce_default_currency(),
  );
  // Load the current registration states to update the form options:
  $states = registration_get_states();
  $options = array();
  foreach ($states as $name => $state) {
    $options[$name] = $state->label;
  }
  $form['purchasable_states'] = array(
    '#title' => t('Which states should allow for a purchase on @label registrations?',
      array('@label' => $registration_type->label)),
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => isset($comreg_settings['purchasable_states']) ? $comreg_settings['purchasable_states'] : array(),
    '#states' => array(
      // Hide the settings when commerce is disabled.
      'invisible' => array(
        ':input[name="enable"]' => array('checked' => FALSE),
      ),
    ),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Validation callback for registration_form().
 */
function registration_commerce_registration_type_form_validate($form, &$form_state) {
  // Unused.
}

/**
 * Submit callback for registration_form().
 */
function registration_commerce_registration_type_form_submit($form, &$form_state) {
  $form_state['values']['price_defaults']['amount'] *= 100;
  $settings = array(
    'enable' => $form_state['values']['enable'],
    'price_defaults' => $form_state['values']['price_defaults'],
    'purchasable_states' => $form_state['values']['purchasable_states'],
  );
  $form_state['registration_type']->registration_commerce_settings = $settings;
  // @todo should we use ->save()?
  entity_save('registration_type', $form_state['registration_type']);
  drupal_set_message(t('Registration Commerce settings have been saved.'));
}
