<?php
/**
 * @file
 * soar_event_register.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function soar_event_register_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-event-field_call_to_register'
  $field_instances['node-event-field_call_to_register'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_label_token' => 0,
    'deleted' => 0,
    'description' => 'Select if patrons must call in.  The registration list can be managed by staff members.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_call_to_register',
    'label' => 'Call to register',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 21,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'registration-default-field_reg_first_name'
  $field_instances['registration-default-field_reg_first_name'] = array(
    'bundle' => 'default',
    'default_value' => NULL,
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'registration',
    'field_name' => 'field_reg_first_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'registration-default-field_reg_last_name'
  $field_instances['registration-default-field_reg_last_name'] = array(
    'bundle' => 'default',
    'default_value' => NULL,
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'registration',
    'field_name' => 'field_reg_last_name',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'registration-default-field_reg_library'
  $field_instances['registration-default-field_reg_library'] = array(
    'bundle' => 'default',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'registration',
    'field_name' => 'field_reg_library',
    'label' => 'Library',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'Allens Hill Free Library|Allens Hill Free Library
Arcade Free Library|Arcade Free Library
Avon Free Library|Avon Free Library
Bell Memorial Library (Nunda)|Bell Memorial Library (Nunda)
Bloomfield Public Library|Bloomfield Public Library
Bristol Library|Bristol Library
Caledonia Library Association|Caledonia Library Association
Clifton Springs Library|Clifton Springs Library
Clyde-Savannah Public Library|Clyde-Savannah Public Library
Cordelia A. Greene Library (Castile)|Cordelia A. Greene Library (Castile)
Dansville Public Library|Dansville Public Library
Eagle Free Library (Bliss)|Eagle Free Library (Bliss)
Gainesville Public Library (Silver Springs)|Gainesville Public Library (Silver Springs)
Geneva Public Library|Geneva Public Library
Gorham Free Library|Gorham Free Library
Honeoye Public Library|Honeoye Public Library
Lima Public Library|Lima Public Library
Livonia Public Library|Livonia Public Library
Lyons Public Library|Lyons Public Library
Macedon Public Library|Macedon Public Library
Marion Public Library|Marion Public Library
Mount Morris Library|Mount Morris Library
Naples Library|Naples Library
Newark Public Library|Newark Public Library
Ontario Public Library|Ontario Public Library
Palmyra Community Library|Palmyra Community Library
Perry Public Library|Perry Public Library
Phelps Community Memorial Library|Phelps Community Memorial Library
Pike Library|Pike Library
Red Creek Free Library |Red Creek Free Library
Red Jacket Community Library (Shortsville)|Red Jacket Community Library (Shortsville)
Rose Free Library|Rose Free Library
Sodus Community Library|Sodus Community Library
Stevens Memorial Community Library (Attica)|Stevens Memorial Community Library (Attica)
Victor Farmington Library|Victor Farmington Library
Wadsworth Library|Wadsworth Library
Walworth-Seely Public Library|Walworth-Seely Public Library
Warsaw Public Library|Warsaw Public Library
Williamson Free Public Library|Williamson Free Public Library
Wolcott Civic Free Library|Wolcott Civic Free Library
Wood Library Association (Canandaigua)|Wood Library Association (Canandaigua)
Wyoming Free Circulating Library Association|Wyoming Free Circulating Library Association',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'registration-default-field_reg_notes'
  $field_instances['registration-default-field_reg_notes'] = array(
    'bundle' => 'default',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'registration',
    'field_name' => 'field_reg_notes',
    'label' => 'Notes and special needs, dietary restrictions',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'registration-default-field_reg_phone'
  $field_instances['registration-default-field_reg_phone'] = array(
    'bundle' => 'default',
    'default_value' => NULL,
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'registration',
    'field_name' => 'field_reg_phone',
    'label' => 'Phone number',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 10,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'registration-default-field_reg_position'
  $field_instances['registration-default-field_reg_position'] = array(
    'bundle' => 'default',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'registration',
    'field_name' => 'field_reg_position',
    'label' => 'Position',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'Member Library Staff|Member Library Staff
Trustee|Trustee
PLS Staff|PLS Staff',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Call to register');
  t('First name');
  t('Last name');
  t('Library');
  t('Notes and special needs, dietary restrictions');
  t('Phone number');
  t('Position');
  t('Select if patrons must call in.  The registration list can be managed by staff members.');

  return $field_instances;
}
