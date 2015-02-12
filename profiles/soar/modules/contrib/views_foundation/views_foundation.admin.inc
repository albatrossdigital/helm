<?php

/**
 * @file
 * Administration page for Views Foundation settings.
 */

/**
 * Function to build Views Foundation admin settings form.
 */
function views_foundation_config_form($form, &$form_state) {
  $js_path = variable_get('views_foundation_js', '');

  // Array of known themes and path to JavaScripts.
  $themes = array(
    'zurb_foundation' => '/js',
    'zoundation' => '/javascripts',
  );

  if (module_exists('libraries') && $libraries_path = libraries_get_path('foundation')) {
    $foundation_paths['libraries'] = $libraries_path . '/js';
  }

  // We need JQuery 1.7 or higher for Foundation features to working properly.
  $jquery = drupal_get_library('system', 'jquery');
  if (version_compare($jquery['version'], '1.7', '<')) {
    drupal_set_message(t('Views Foundation requires jQuery 1.7 or higher. !configure to use a higher jQuery version.', array('!configure' => l(t('Configure jQuery Update'), 'admin/config/media/views_foundation'))), 'error', FALSE);
  }

  // Find directories in the known places.
  foreach ($themes as $key => $value) {
    $theme_path = drupal_get_path('theme', $key) . $value;
    if (is_dir($theme_path)) {
      $foundation_paths[$key] = $theme_path;
    }
  }

  $foundation_paths['custom path'] = '';
  if (is_dir($js_path)) {
    // Add information about the current path.
    $form['views_foundation_heading'] = array(
      '#markup' => '<h4>' . t('Current Zurb Foundation JavaScripts path: "@path".', array('@path' => $js_path)) . '</h4>',
    );
  }

  $form['views_foundation_js'] = array(
    '#type' => 'radios',
    '#title' => t('Foundation library path'),
    '#options' => array_flip($foundation_paths),
    '#description' => t('Select your preferred location of the Zurb Foundation library.'),
    '#default_value' => in_array($js_path, $foundation_paths) ? $js_path : '',
  );

  $form['views_foundation_custom'] = array(
    '#type' => 'textfield',
    '#title' => t('Custom path.'),
    '#default_value' => in_array($js_path, $foundation_paths) ? '' : $js_path,
    '#description' => t('Specify a path to the Zurb Foundation JavaScripts directory.'),
    '#states' => array(
      'visible' => array(
        ':input[name="views_foundation_js"]' => array('value' => false),
      ),
    ),
  );
  $form['views_foundation_include'] = array(
    '#type' => 'fieldset',
    '#title' => t('Select which script You want to include'),
    '#description' => t('If You included scripts in theme, You can uncheck it here.'),
  );
  $form['views_foundation_include']['views_foundation_orbit'] = array(
    '#type' => 'checkbox',
    '#title' => t('Orbit'),
    '#default_value' => variable_get('views_foundation_orbit', 1),
  );
  $form['views_foundation_include']['views_foundation_clearing'] = array(
    '#type' => 'checkbox',
    '#title' => t('Clearing'),
    '#default_value' => variable_get('views_foundation_clearing', 1),
  );

  return system_settings_form($form);
}

/**
 * Function to validate admin settings form.
 */
function views_foundation_config_form_validate($form, &$form_state) {

  $options = $form_state['values'];
  if (isset($options['views_foundation_custom']) && empty($options['views_foundation_js'])) {
    if (is_dir($options['views_foundation_custom'])) {
      form_set_value($form['views_foundation_js'], $options['views_foundation_custom'], $form_state);
    }
    else {
      form_set_error('views_foundation_custom', t('Specify correct path to the Fundation Javascripts directory'));
    }
  }
}
