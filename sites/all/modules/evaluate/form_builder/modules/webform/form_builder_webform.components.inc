<?php

/**
 * @file
 *   Default webform component callbacks for functionality related to the Form Builder.
 */

/**
 * Configuration form for the "unique" property.
 */
function form_builder_webform_property_unique_form(&$form_state, $form_type, $element, $property) {
  $form = array();

  $form['unique'] = array(
    '#form_builder' => array('property_group' => 'validation'),
    '#title' => t('Unique'),
    '#description' => t('Check that all entered values for this field are unique. The same value is not allowed to be used twice.'),
    '#type' => 'checkbox',
    '#default_value' => $element['#unique'],
  );

  return $form;
}

/**
 * @defgroup form-builder-webform-date-callbacks Callbacks for the Date component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_date() {
  $fields = array();

  $fields['date'] = array(
    'title' => t('Date'),
    'weight' => -2,
  );
  $fields['date']['default'] = _form_builder_webform_default('date');
  $fields['date']['default']['#title'] = t('New date');

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_map_component().
 */
function _form_builder_webform_form_builder_map_date() {
  return array(
    'form_builder_type' => 'date',
    'properties' => array(
      'timezone' => array(
        'form_parents' => array('default', 'timezone'),
        'storage_parents' => array('extra', 'timezone'),
      ),
      'start_date' => array(
        'form_parents' => array('validation', 'start_date'),
        'storage_parents' => array('extra', 'start_date'),
      ),
      'end_date' => array(
        'form_parents' => array('validation', 'end_date'),
        'storage_parents' => array('extra', 'end_date'),
      ),
      'year_textfield' => array(
        'form_parents' => array('display', 'year_textfield'),
        'storage_parents' => array('extra', 'year_textfield'),
      ),
      'datepicker' => array(
        'form_parents' => array('display', 'datepicker'),
        'storage_parents' => array('extra', 'datepicker'),
      ),
    ),
  );
}

/**
 * @} End of "defgroup form-builder-webform-date-callbacks"
 */

/**
 * @defgroup form-builder-webform-email-callbacks Callbacks for the Email component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_email() {
  $fields = array();

  $fields['email'] = array(
    'title' => t('E-mail'),
    'weight' => -18,
  );
  $fields['email']['default'] = _form_builder_webform_default('email');
  $fields['email']['default']['#title'] = t('New e-mail');

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_map_component().
 */
function _form_builder_webform_form_builder_map_email() {
  return array(
    'form_builder_type' => 'email',
    'properties' => array(
      'size' => array(
        'storage_parents' => array('extra', 'width'),
      ),
      'disabled' => array(
        'storage_parents' => array('extra', 'disabled'),
      ),
      'unique' => array(
        'storage_parents' => array('extra', 'unique'),
      ),
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_properties_component().
 */
function _form_builder_webform_form_builder_properties_email() {
  return array(
    'unique' => array(
      'form' => 'form_builder_webform_property_unique_form',
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_load_component().
 */
function _form_builder_webform_form_builder_load_email($element) {
  $element['#unique'] = !empty($element['#webform_component']['extra']['unique']);

  return $element;
}

/**
 * @} End of "defgroup form-builder-webform-email-callbacks"
 */

/**
 * @defgroup form-builder-webform-fieldset-callbacks Callbacks for the Fieldset component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_fieldset() {
  $fields = array();

  $fields['fieldset'] = array(
    'title' => t('Fieldset'),
    'weight' => 19,
  );
  $fields['fieldset']['default'] = _form_builder_webform_default('fieldset');
  $fields['fieldset']['default']['#title'] = t('New fieldset');

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_map_component().
 */
function _form_builder_webform_form_builder_map_fieldset() {
  return array(
    'form_builder_type' => 'fieldset',
    'properties' => array(
      'collapsible' => array(
        'storage_parents' => array('extra', 'collapsible'),
      ),
      'collapsed' => array(
        'storage_parents' => array('extra', 'collapsed'),
      ),
    ),
  );
}

/**
 * @} End of "defgroup form-builder-webform-fieldset-callbacks"
 */

/**
 * @defgroup form-builder-webform-file-callbacks Callbacks for the File component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_file() {
  $fields = array();

  $fields['file'] = array(
    'title' => t('File'),
    'weight' => 6,
  );

  $fields['file']['default'] = _form_builder_webform_default('file');
  $fields['file']['default']['#title'] = t('New file');

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_map_component().
 */
function _form_builder_webform_form_builder_map_file() {
  return array(
    'form_builder_type' => 'file',
    'properties' => array(
      // Webform 3.16 and earlier file filtering.
      'webform_file_filtering' => array(
        'form_parents' => array('validation', 'filtering'),
        'storage_parents' => array('extra', 'filtering'),
      ),
      // Webform 3.17 and later file filtering.
      'webform_file_extensions' => array(
        'form_parents' => array('validation', 'extensions'),
        'storage_parents' => array('extra', 'filtering'),
      ),
      'webform_file_size' => array(
        'form_parents' => array('validation', 'size'),
        'storage_parents' => array('extra', 'filtering', 'size'),
      ),
      'webform_file_directory' => array(
        'form_parents' => array('extra', 'directory'),
        'storage_parents' => array('extra', 'directory'),
      ),
      'webform_file_scheme' => array(
        'form_parents' => array('extra', 'scheme'),
        'storage_parents' => array('extra', 'scheme'),
      ),
      'webform_file_progress_indicator' => array(
        'form_parents' => array('display', 'progress_indicator'),
        'storage_parents' => array('extra', 'progress_indicator'),
      ),
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_load_component().
 */
function _form_builder_webform_form_builder_load_file($form_element) {
  if (isset($form_element['#upload_validators'])) {
    // Extension list and size comes from #upload_validators on load.
    $form_element['#webform_file_extensions']['types'] = empty($form_element['#upload_validators']['file_validate_extensions'][0]) ? array() : explode(' ', $form_element['#upload_validators']['file_validate_extensions'][0]);
    $form_element['#webform_file_size'] = empty($form_element['#upload_validators']['file_validate_size'][0]) ? '' : format_size($form_element['#upload_validators']['file_validate_size'][0]);
    // File directory and scheme come from #upload_location on load.
    $form_element['#webform_file_directory'] = preg_replace('/^webform[\/]?/', '', file_uri_target($form_element['#upload_location']));
    $form_element['#webform_file_scheme'] = file_uri_scheme($form_element['#upload_location']);
  }

  return $form_element;
}

/**
 * Implements _form_builder_webform_form_builder_preview_alter_component().
 */
function _form_builder_webform_form_builder_preview_alter_file($form_element) {

  // Remove AJAX wrappers.
  $form_element['#prefix'] = '';
  $form_element['#suffix'] = '';
  $form_element['upload_button']['#disabled'] = TRUE;

  return $form_element;
}

/**
 * @} End of "defgroup form-builder-webform-file-callbacks"
 */

/**
 * @defgroup form-builder-webform-grid-callbacks Callbacks for the Grid component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_grid() {
  $fields = array();

  $fields['grid'] = array(
    'title' => t('Grid'),
    'properties' => array(
      // Grid-specific properties.
      'grid_options',
      'grid_questions',
      'custom_grid_option_keys',
      'custom_grid_question_keys',
    ),
    'weight' => -4,
  );
  $fields['grid']['default'] = _form_builder_webform_default('grid');
  $fields['grid']['default']['#title'] = t('New grid');
  $fields['grid']['default']['#grid_options'] = array(t('poor'), t('average'), t('good'), t('excellent'));
  $fields['grid']['default']['#grid_questions'] = array(t('question one'), t('question two'), t('question three'));

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_map_component().
 */
function _form_builder_webform_form_builder_map_grid() {
  return array(
    'form_builder_type' => 'grid',
    'properties' => array(
      'optrand' => array(
        'form_parents' => array('display', 'optrand'),
        'storage_parents' => array('extra', 'optrand'),
      ),
      'qrand' => array(
        'form_parents' => array('display', 'qrand'),
        'storage_parents' => array('extra', 'qrand'),
      ),
      'unique' => array(
        'storage_parents' => array('extra', 'unique'),
      ),
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_properties_component().
 */
function _form_builder_webform_form_builder_properties_grid() {
  return array(
    'grid_options' => array(
      'form' => 'form_builder_webform_property_grid_options_form',
      'submit' => array('form_builder_webform_property_grid_form_submit'),
    ),
    'grid_questions' => array(
      'form' => 'form_builder_webform_property_grid_questions_form',
      'submit' => array('form_builder_webform_property_grid_form_submit'),
    ),
    'unique' => array(
      'form' => 'form_builder_webform_property_unique_form',
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_load_component().
 */
function _form_builder_webform_form_builder_load_grid($element) {
  // Convert properties used only in Form Builder.
  $element['#custom_grid_option_keys'] = !empty($element['#webform_component']['extra']['custom_option_keys']);
  $element['#custom_grid_question_keys'] = !empty($element['#webform_component']['extra']['custom_question_keys']);
  $element['#unique'] = !empty($element['#webform_component']['extra']['unique']);

  return $element;
}

/**
 * Implements _form_builder_webform_form_builder_save_component().
 */
function _form_builder_webform_form_builder_save_grid($component, $form_element) {
  $options = '';

  foreach ($form_element['#grid_options'] as $key => $option_value) {
    $options .= $key . '|' . $option_value . "\n";
  }

  $questions = '';
  foreach ($form_element['#grid_questions'] as $key => $question_value) {
    $questions .= $key . '|' . $question_value . "\n";
  }

  $component['extra']['options'] = $options;
  $component['extra']['questions'] = $questions;
  $component['extra']['custom_option_keys'] = isset($form_element['#custom_grid_option_keys']) ? $form_element['#custom_grid_option_keys'] : FALSE;
  $component['extra']['custom_question_keys'] =  isset($form_element['#custom_grid_question_keys']) ? $form_element['#custom_grid_question_keys'] : FALSE;

  return $component;
}

/**
 * Configuration form for the "grid_options" property.
 */
function form_builder_webform_property_grid_options_form(&$form_state, $form_type, $element) {
  $element['#grid_options'] = _webform_select_options_to_text($element['#grid_options']);
  $form = _form_builder_webform_build_edit_form('grid', $element, 'grid_options', 'options', array('options'), array('extra', 'options'));
  // The _form_builder_webform_build_edit_form() function can only pull in one
  // property at a time, so we have to set the key toggle manually.
  $form['grid_options']['options']['#key_type_toggled'] = !empty($element['#custom_grid_option_keys']);
  return $form;
}

/**
 * Configuration form for the "grid_questions" property.
 */
function form_builder_webform_property_grid_questions_form(&$form_state, $form_type, $element) {
  $element['#grid_questions'] = _webform_select_options_to_text($element['#grid_questions']);
  $form = _form_builder_webform_build_edit_form('grid', $element, 'grid_questions', 'options', array('questions'), array('extra', 'questions'));
  // The _form_builder_webform_build_edit_form() function can only pull in one
  // property at a time, so we have to set the key toggle manually.
  $form['grid_questions']['options']['#key_type_toggled'] = !empty($element['#custom_grid_question_keys']);
  return $form;
}

/**
 * Submit handler for the "grid_options" and "grid_questions" properties.
 */
function form_builder_webform_property_grid_form_submit(&$form, &$form_state) {
  if (empty($form_state['values']['grid_options'])) {
    $form_state['values']['grid_options'] = _webform_select_options_from_text($form_state['values']['extra']['grid_options']);
    $form_state['values']['custom_grid_option_keys'] = $form_state['values']['extra']['custom_grid_option_keys'];
  }

  if (empty($form_state['values']['grid_questions'])) {
    $form_state['values']['grid_questions'] = _webform_select_options_from_text($form_state['values']['extra']['grid_questions']);
    $form_state['values']['custom_grid_question_keys'] = $form_state['values']['extra']['custom_grid_question_keys'];
  }
}

/**
 * @} End of "defgroup form-builder-webform-time-callbacks"
 */

/**
 * @defgroup form-builder-webform-hidden-callbacks Callbacks for the Hidden component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_hidden() {
  $fields = array();

  $fields['hidden'] = array(
    'title' => t('Hidden'),
    'weight' => 8,
  );
  $fields['hidden']['default'] = _form_builder_webform_default('hidden');
  $fields['hidden']['default']['#title'] = t('New hidden');

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_load_component().
 */
function _form_builder_webform_form_builder_load_hidden($form_element) {
  // Hidden elements may be #type "value" or "hidden". Set the internal property
  // to keep track of hidden fields.
  $form_element['#form_builder']['element_type'] = 'hidden';
  if (!isset($form_element['#default_value'])) {
    $form_element['#default_value'] = $form_element['#value'];
  }

  return $form_element;
}

/**
 * Implements _form_builder_webform_form_builder_preview_alter_component().
 */
function _form_builder_webform_form_builder_preview_alter_hidden($form_element) {
  // Convert the hidden element to a markup element before displaying it.
  $form_element['#type'] = 'markup';
  $form_element['#form_builder']['element_type'] = 'markup';
  unset($form_element['#theme']);

  // Add the 'webform_element' theme wrapper at the beginning, where it would
  // normally be.
  array_unshift($form_element['#theme_wrappers'], 'webform_element');

  // Display the title of the hidden field as regular markup.
  $form_element['#children'] = t('@title - <em>hidden field</em>', array('@title' => $form_element['#title']));
  $form_element['#title'] = NULL;

  return $form_element;
}

/**
 * @} End of "defgroup form-builder-webform-hidden-callbacks"
 */

/**
 * @defgroup form-builder-webform-markup-callbacks Callbacks for the Markup component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_markup() {
  $fields = array();

  $default = '';
  $default .= '<p><strong>' . t('New HTML Markup') . '</strong></p>' . "\n\n";
  $default .= '<p>' . t('Enter any text supported by available text formats.') . '</p>';

  $fields['markup'] = array(
    'title' => t('Markup'),
    'properties' => array(
      'markup',
      'format',
    ),
    'weight' => 17,
  );
  $fields['markup']['default'] = _form_builder_webform_default('markup');
  $fields['markup']['default']['#markup'] = $default;
  $fields['markup']['default']['#title'] = t('New markup');

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_map_component().
 */
function _form_builder_webform_form_builder_map_markup() {
  return array(
    'form_builder_type' => 'markup',
    'properties' => array(
      'markup' => array(
        'storage_parents' => array('value'),
      ),
      'format' => array(
        'storage_parents' => array('extra', 'format'),
      ),
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_preview_alter_component().
 */
function _form_builder_webform_form_builder_preview_alter_markup($form_element) {
  // Filter the markup with the appropriate text format before displaying it.
  $form_element['#markup'] = isset($form_element['#markup']) ? $form_element['#markup'] : '';
  $format = isset($form_element['#format']) ? $form_element['#format'] : filter_default_format();
  $form_element['#markup'] = check_markup(_webform_filter_values($form_element['#markup'], NULL, NULL, NULL, FALSE), $format, '', TRUE);
  if (strlen(trim($form_element['#markup'])) == 0) {
    $form_element['#markup'] = t('Empty markup field');
  }

  // This runs after drupal_pre_render_markup so the changed markup
  // needs to be copied to #children.
  $form_element['#children'] = $form_element['#markup'];

  // Do not show the title, since it will not display in the final webform
  // either.
  $form_element['#title_display'] = 'none';

  return $form_element;
}

/**
 * @} End of "defgroup form-builder-webform-markup-callbacks"
 */


/**
 * @defgroup form-builder-webform-number-callbacks Callbacks for the Number component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_number() {
  $fields = array();

  $fields['number'] = array(
    'title' => t('Number'),
    'weight' => -17,
  );

  $fields['number']['default'] = _form_builder_webform_default('number');
  $fields['number']['default']['#title'] = t('New number');

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_map_component().
 */
function _form_builder_webform_form_builder_map_number() {
  return array(
    'form_builder_type' => 'number',
    'properties' => array(
      'field_prefix' => array(
        'storage_parents' => array('extra', 'field_prefix'),
      ),
      'field_suffix' => array(
        'storage_parents' => array('extra', 'field_suffix'),
      ),
      // TODO: Add this option when the live preview can support it.
      //'number_type' => array(
      //  'form_parents' => array('display', 'type'),
      //  'storage_parents' => array('extra', 'type'),
      //),
      'min' => array(
        'form_parents' => array('validation', 'min'),
        'storage_parents' => array('extra', 'min'),
      ),
      'max' => array(
        'form_parents' => array('validation', 'max'),
        'storage_parents' => array('extra', 'max'),
      ),
      'step' => array(
        'form_parents' => array('validation', 'step'),
        'storage_parents' => array('extra', 'step'),
      ),
      'decimals' => array(
        'form_parents' => array('display', 'decimals'),
        'storage_parents' => array('extra', 'decimals'),
      ),
      'point' => array(
        'form_parents' => array('display', 'point'),
        'storage_parents' => array('extra', 'point'),
      ),
      'separator' => array(
        'form_parents' => array('display', 'separator'),
        'storage_parents' => array('extra', 'separator'),
      ),
      'integer' => array(
        'form_parents' => array('validation', 'integer'),
        'storage_parents' => array('extra', 'integer'),
      ),
      'excludezero' => array(
        'form_parents' => array('analysis', 'excludezero'),
        'storage_parents' => array('extra', 'excludezero'),
      ),
      'unique' => array(
        'storage_parents' => array('extra', 'unique'),
      ),
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_properties_component().
 */
function _form_builder_webform_form_builder_properties_number() {
  return array(
    'unique' => array(
      'form' => 'form_builder_webform_property_unique_form',
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_load_component().
 */
function _form_builder_webform_form_builder_load_number($element) {
  $element['#unique'] = !empty($element['#webform_component']['extra']['unique']);

  return $element;
}

/**
 * @} End of "defgroup form-builder-webform-number-callbacks"
 */

/**
 * @defgroup form-builder-webform-pagebreak-callbacks Callbacks for the Pagebreak component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_pagebreak() {
  $fields = array();

  $fields['pagebreak'] = array(
    'title' => t('Page break'),
    'default' => array(
      '#title' => t('Page break'),
      '#type' => 'pagebreak',
    ),
    'weight' => 20,
  );

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_load_component().
 */
function _form_builder_webform_form_builder_load_pagebreak($form_element) {
  // Pagebreak components are rendered as hidden elements by webform, but
  // hidden elements do not have a #title property. So we have to convert the
  // rendered value to be used as the #title instead.
  $form_element['#title'] = $form_element['#value'];
  $form_element['#form_builder']['element_type'] = 'pagebreak';

  return $form_element;
}

/**
 * Implements _form_builder_webform_form_builder_save_component().
 */
function _form_builder_webform_form_builder_save_pagebreak($component, $form_element) {
  // Ensure pagebreaks are saved at the root level.
  if ($component['pid'] !== 0) {
    drupal_set_message(t('Page breaks may not be nested inside fieldsets. Each pagebreak has been moved outside of fieldsets.'), 'status', FALSE);

    $form_cache = form_builder_cache_load('webform', $form_element['#form_builder']['form_id']);
    $parent = form_builder_get_element($form_cache, $form_element['#form_builder']['parent_id']);

    $component['weight'] = $parent['#weight'] + 1;
    $component['pid'] = 0;
  }

  return $component;
}

/**
 * Implements _form_builder_webform_form_builder_preview_alter_component().
 */
function _form_builder_webform_form_builder_preview_alter_pagebreak($form_element) {
  // Convert the pagebreak element to a markup element before displaying it.
  $form_element['#type'] = 'markup';
  $form_element['#form_builder']['element_type'] = 'markup';
  unset($form_element['#theme']);

  // Add the 'webform_element' theme wrapper at the beginning, where it would
  // normally be.
  array_unshift($form_element['#theme_wrappers'], 'webform_element');

  // Display the title of the pagebreak field as regular markup.
  $form_element['#children'] = '--- ' . check_plain($form_element['#title']) . ' ---';
  $form_element['#children'] .= '<div class="description">' . t('(Fields below will be displayed on a new page)') . '</div>';
  $form_element['#title_display'] = 'none';

  // Give the element a wrapper class so that themers can recognize it
  // represents a pagebreak element.
  $form_element['#attributes']['class'][] = 'form-builder-preview-pagebreak-webform-element';
  array_unshift($form_element['#theme_wrappers'], 'container');

  return $form_element;
}

/**
 * @} End of "defgroup form-builder-webform-pagebreak-callbacks"
 */

/**
 * @defgroup form-builder-webform-select-callbacks Callbacks for the Select component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_select() {
  $fields = array();

  $fields['select'] = array(
    'title' => t('Select list'),
    'properties' => array(
      'default_value',
      'options',
      'multiple',
    ),
    'weight' => -5,
  );
  $items['items'] = "1|" . t('one') . "\n2|" . t('two') . "\n3|" . t('three');
  $fields['select']['default'] = _form_builder_webform_default('select', array(
    'name' => t('New select'),
    'aslist' => TRUE,
    'multiple' => FALSE,
    'value' => '1',
  ) + $items);

  $fields['checkboxes'] = array(
    'title' => t('Checkboxes'),
    'properties' => array(
      'default_value',
      'options',
      'multiple',
    ),
    'weight' => -6,
  );
  $fields['checkboxes']['default'] = _form_builder_webform_default('select', array(
    'name' => t('New checkboxes'),
    'aslist' => FALSE,
    'multiple' => TRUE,
    'value' => '1,2',
  ) + $items);

  $fields['radios'] = array(
    'title' => t('Radios'),
    'properties' => array(
      'default_value',
      'options',
    ),
    'weight' => -7,
  );
  $fields['radios']['default'] = _form_builder_webform_default('select', array(
    'name' => t('New radios'),
    'aslist' => FALSE,
    'multiple' => FALSE,
    'value' => '1',
  ) + $items);

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_map_component().
 */
function _form_builder_webform_form_builder_map_select() {
  return array(
    'properties' => array(
      'key_type_toggled' => array(
        'storage_parents' => array('extra', 'custom_keys'),
      ),
      'other_option' => array(
        'form_parents' => array('items', 'options', 'option_settings', 'other_option'),
        'storage_parents' => array('extra', 'other_option'),
      ),
      'other_text' => array(
        'form_parents' => array('items', 'options', 'option_settings', 'other_text'),
        'storage_parents' => array('extra', 'other_text'),
      ),
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_properties_component().
 */
function _form_builder_webform_form_builder_properties_select() {
  return array(
    'options' => array(
      'form' => 'form_builder_webform_property_select_options_form',
      'submit' => array('form_builder_property_options_form_submit'),
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_load_component().
 */
function _form_builder_webform_form_builder_load_select($form_element) {
  // Properties that are only used by Form Builder and not in the normal form.
  $form_element['#key_type_toggled'] = !empty($form_element['#webform_component']['extra']['custom_keys']);
  $form_element['#other_option'] = !empty($form_element['#webform_component']['extra']['other_option']);
  $form_element['#other_text'] = !empty($form_element['#webform_component']['extra']['other_text']) ? $form_element['#webform_component']['extra']['other_text'] : '';
  return $form_element;
}

/**
 * Serializes the value of a select component.
 *
 * @param array $options
 *   Select component options.
 *
 * @return string
 */
function _form_builder_serialize_select(array $options) {
  $serialized = '';
  foreach ($options as $key => $option_value) {
    if (is_array($option_value)) {
      $serialized .= "<{$key}>\n" . _form_builder_serialize_select($option_value) . "<>\n";
    }
    else {
      $serialized .= "{$key}|{$option_value}\n";
    }
  }

  return $serialized;
}

/**
 * Implements _form_builder_webform_form_builder_save_component().
 */
function _form_builder_webform_form_builder_save_select($component, $form_element) {
  $component['extra']['items'] = _form_builder_serialize_select($form_element['#options']);
  $component['extra']['multiple'] = $form_element['#form_builder']['element_type'] == 'checkboxes';
  $component['extra']['aslist'] = $form_element['#form_builder']['element_type'] == 'select';
  $component['extra']['other_option'] = !empty($form_element['#other_option']);
  $component['extra']['other_text'] = !empty($form_element['#other_text']) ? $form_element['#other_text'] : '';
  return $component;
}

/**
 * Configuration form for the "options" property.
 */
function form_builder_webform_property_select_options_form(&$form_state, $form_type, $element) {
  // Use the default options form, but enhance to allow Webform tokens.
  $form = form_builder_property_options_form($form_state, $form_type, $element, 'options');
  $form['options']['#default_value_pattern'] = '^%.+\[.+\]$';
  return $form;
}

/**
 * @} End of "defgroup form-builder-webform-select-callbacks"
 */

/**
 * @defgroup form-builder-webform-textarea-callbacks Callbacks for the Textarea component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_textarea() {
  $fields = array();

  $fields['textarea'] = array(
    'title' => t('Textarea'),
    'weight' => -19,
  );
  $fields['textarea']['default'] = _form_builder_webform_default('textarea');
  $fields['textarea']['default']['#title'] = t('New textarea');

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_map_component().
 */
function _form_builder_webform_form_builder_map_textarea() {
  return array(
    'form_builder_type' => 'textarea',
    'properties' => array(
      'cols' => array(
        'storage_parents' => array('extra', 'cols'),
      ),
      'rows' => array(
        'storage_parents' => array('extra', 'rows'),
      ),
      'disabled' => array(
        'storage_parents' => array('extra', 'disabled'),
      ),
    ),
  );
}

/**
 * @} End of "defgroup form-builder-webform-textarea-callbacks"
 */

/**
 * @defgroup form-builder-webform-textfield-callbacks Callbacks for the Textfield component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_textfield() {
  $fields = array();

  $fields['textfield'] = array(
    'title' => t('Textfield'),
    'weight' => -20,
  );
  $fields['textfield']['default'] = _form_builder_webform_default('textfield');
  $fields['textfield']['default']['#title'] = t('New textfield');

  return $fields;
}

/**
 * Implements _form_builder_webform_form_builder_map_component().
 */
function _form_builder_webform_form_builder_map_textfield() {
  return array(
    'form_builder_type' => 'textfield',
    'properties' => array(
      'size' => array(
        'storage_parents' => array('extra', 'width'),
      ),
      'maxlength' => array(
        'storage_parents' => array('extra', 'maxlength'),
      ),
      'field_prefix' => array(
        'storage_parents' => array('extra', 'field_prefix'),
      ),
      'field_suffix' => array(
        'storage_parents' => array('extra', 'field_suffix'),
      ),
      'disabled' => array(
        'storage_parents' => array('extra', 'disabled'),
      ),
      'unique' => array(
        'storage_parents' => array('extra', 'unique'),
      ),
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_properties_component().
 */
function _form_builder_webform_form_builder_properties_textfield() {
  return array(
    'unique' => array(
      'form' => 'form_builder_webform_property_unique_form',
    ),
  );
}

/**
 * Implements _form_builder_webform_form_builder_load_component().
 */
function _form_builder_webform_form_builder_load_textfield($element) {
  $element['#unique'] = !empty($element['#webform_component']['extra']['unique']);

  return $element;
}

/**
 * @} End of "defgroup form-builder-webform-textfield-callbacks"
 */

/**
 * @defgroup form-builder-webform-time-callbacks Callbacks for the Time component
 * @{
 */

/**
 * Implements _form_builder_webform_form_builder_types_component().
 */
function _form_builder_webform_form_builder_types_time() {
  $fields = array();

  $fields['time'] = array(
    'title' => t('Time'),
    'weight' => -1,
  );
  $fields['time']['default'] = _form_builder_webform_default('time');
  $fields['time']['default']['#title'] = t('New time');

  return $fields;
}


/**
 * Implements _form_builder_webform_form_builder_map_component().
 */
function _form_builder_webform_form_builder_map_time() {
  return array(
    'form_builder_type' => 'time',
    'properties' => array(
      'timezone' => array(
        'form_parents' => array('extra', 'timezone'),
        'storage_parents' => array('extra', 'timezone'),
      ),
      'hourformat' => array(
        'form_parents' => array('display', 'hourformat'),
        'storage_parents' => array('extra', 'hourformat'),
      ),
    ),
  );
}

/**
 * @} End of "defgroup form-builder-webform-time-callbacks"
 */

/**
 * Helper function; Generate a configuration form based on a map.
 */
function _form_builder_webform_mapped_form(&$form_state, $form_type, $element, $property) {
  $form = array();
  if ($component_type = $element['#webform_component']['type']) {
    if ($map = _form_builder_webform_property_map($component_type)) {
      $property_group = isset($map['properties'][$property]['property_group']) ? $map['properties'][$property]['property_group'] : reset($map['properties'][$property]['form_parents']);
      $form = _form_builder_webform_build_edit_form($component_type, $element, $property, $property_group, $map['properties'][$property]['form_parents'], $map['properties'][$property]['storage_parents']);
    }
  }
  return $form;
}

/**
 * Helper function; Save an element to a Webform component based on a map.
 */
function _form_builder_webform_save_mapped_component($component, $element) {
  if ($map = _form_builder_webform_property_map($component['type'])) {
    foreach ($map['properties'] as $property => $property_map) {
      if (isset($property_map['storage_parents'])) {
        $property_value = isset($element['#' . $property]) ? $element['#' . $property] : NULL;
        _form_builder_webform_save_mapped_component_value($component, $property_value, $property_map['storage_parents']);
      }
    }
  }
  return $component;
}

/**
 * Recursive function to set the value of a $component property.
 */
function _form_builder_webform_save_mapped_component_value(&$component, $value, $parents) {
  $parent = array_shift($parents);
  if (empty($parents)) {
    $component[$parent] = $value;
  }
  else {
    _form_builder_webform_save_mapped_component_value($component[$parent], $value, $parents);
  }
}

/**
 * Helper function; Alter a form element upon load based on a map.
 */
function _form_builder_webform_set_mapped_type($element) {
  if ($map = _form_builder_webform_property_map($element['#webform_component']['type'])) {
    // Keep the internal type of this element as the component type. For example
    // this may match an $element['#type'] of 'webform_date' and set the
    // $element['#form_builder']['element_type'] to simply 'date'.
    if (isset($map['form_builder_type'])) {
      $element['#form_builder']['element_type'] = $map['form_builder_type'];
    }
  }
  return $element;
}

/**
 * Helper function; Generate a default FAPI element for any component type.
 */
function _form_builder_webform_default($component_type, $merge_extras = array()) {
  $default_component = webform_component_invoke($component_type, 'defaults');
  $default_component['extra'] = isset($default_component['extra']) ? array_merge($default_component['extra'], $merge_extras) : $merge_extras;
  $default_element = webform_component_invoke($component_type, 'render', $default_component, NULL, FALSE);

  // Set a bare-minimum component for identification of the component type.
  $default_element['#webform_component'] = $default_component;
  $default_element['#webform_component']['type'] = $component_type;

  // Call the loading function to make sure that the default element gets the
  // same treatment as an existing one.
  $default_element = _form_builder_webform_set_mapped_type($default_element);
  if ($element = form_builder_webform_component_invoke($component_type, 'form_builder_load', $default_element)) {
    $default_element = $element;
  }

  return $default_element;
}

/**
 * Helper function; builds a form for editing part of a webform component.
 *
 * The returned form is derived from a subcomponent of the component form
 * provided by the Webform module.
 *
 * @param $component_type
 *   The webform component type to be edited.
 * @param $element
 *   A form array representing the element whose configuration form we are
 *   building.
 * @param $property
 *   The property of $element which stores the state of portions of the webform
 *   component that this form is responsible for configuring. The property
 *   should be passed in without the leading "#".
 * @param $form_builder_property_group
 *   The Form Builder property group in which this configuration form should be
 *   displayed.
 * @param $form_nested_keys
 *   An array of nested keys representing the location of the subcomponent of
 *   the _webform_edit_[component]() form that this configuration form will be
 *   taken from. For example, if the part of the configuration form we are
 *   interested in is located in $form['display']['width'], where $form is the
 *   output of _webform_edit_[component](), we would pass
 *   array('display', 'width') in for this parameter.
 * @param $component_nested_keys
 *   An array of nested keys representing the location of the portions of the
 *   webform component that this form is responsible for configuring. For
 *   example, if this form configures the data that is stored in
 *   $component['extra']['filtering'], where $component has the structure of
 *   the array returned by _webform_defaults_[component](), we would pass
 *   array('extra', 'filtering') in for this parameter.
 *
 * @return
 *   A form array that can be used to edit the specified part of the webform
 *   component represented by $element.
 */
function _form_builder_webform_build_edit_form($component_type, $element, $property, $form_builder_property_group, $form_nested_keys, $component_nested_keys) {
  module_load_include('inc', 'webform', 'includes/webform.components');

  // The Webform module stores existing component data as part of the passed-in
  // element. If the component doesn't exist yet, initialize a default
  // component.
  $defaults_function = '_webform_defaults_' . $component_type;
  $component = isset($element['#webform_component']) ? $element['#webform_component'] : $defaults_function();
  $nid = isset($component['nid']) ? $component['nid'] : NULL;

  // The most up-to-date configuration data stored by Form Builder for the
  // part of the component we are editing is also stored in the passed-in
  // element, and should always take precedence.
  if (array_key_exists("#$property", $element)) {
    drupal_array_set_nested_value($component, $component_nested_keys, $element["#$property"]);
  }

  // Build the entire _webform_edit_file() form based on the current state of
  // the component, and obtain the slice of it that we want.
  $empty_form = array();
  $empty_form_state = form_state_defaults();

  // The full node is needed here so that the "private" option can be access
  // checked.
  $node = !isset($nid) ? (object) array('nid' => NULL, 'webform' => webform_node_defaults()) : node_load($nid);
  $form = webform_component_edit_form($empty_form, $empty_form_state, $node, $component);
  $form = drupal_array_get_nested_value($form, $form_nested_keys);

  // Force the form to have a consistent #tree structure so it will appear in
  // $form_state['values'] the way we want.
  _form_builder_webform_force_tree($form);

  // Indicate the Form Builder property group that this form will be displayed
  // in.
  if ($form_builder_property_group) {
    $form['#form_builder']['property_group'] = $form_builder_property_group;
  }

  // Return the form, keyed by the name of the property that is being
  // configured.
  return array($property => $form);
}

/**
 * Helper function; replaces custom form #parents with a #tree structure.
 *
 * This is a helper function to force #tree = TRUE on all parts of a form,
 * regardless of any custom #parents that were originally defined as part of
 * the form. It is used to ensure a consistent structure within
 * $form_state['values'] when the form is submitted.
 *
 * @param $form
 *   The form array to modify.
 */
function _form_builder_webform_force_tree(&$form) {
  unset($form['#parents']);
  $form['#tree'] = TRUE;
  foreach (element_children($form) as $key) {
    _form_builder_webform_force_tree($form[$key]);
  }
}
