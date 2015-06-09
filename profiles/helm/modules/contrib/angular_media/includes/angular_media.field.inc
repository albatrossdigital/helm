<?php

/**
 * Implements hook_field_widget_info().
 */
function angular_media_field_widget_info() {
  return array(
    'file_angular_media' => array(
      'label' => t('Angular Media Dialog'),
      'field types' => array('file', 'image', 'media'),
      'settings' => array(
        'style' => 'thumbnails',
        'tabs' => variable_get('angular_media_tabs', array()),
        'allowedTypes' => variable_get('angular_media_allowedTypes', array()),
        'allowedSchemes' => variable_get('angular_media_allowedSchemes', array()),
        'cropRatio' => variable_get('angular_media_cropRatio', array('free')),
      ),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_CUSTOM, //Value for field API indicating a widget can receive several field values.
        'default value' => FIELD_BEHAVIOR_NONE,
      ),
    ),
  );
}



/**
 * Implements hook_field_widget_settings_form().
 */
function angular_media_field_widget_settings_form($field, $instance) {
  $widget = $instance['widget'];
  $settings = $widget['settings'];

  //$plugins = media_get_browser_plugin_info();
  //$options = array();
  //foreach ($plugins as $key => $plugin) {
  //  $options[$key] = check_plain($plugin['title']);
  //}

  $options = array(
    'thumbnails' => t('Thumbnails'),
    'placeholder' => t('Big placeholder'),
  );
  $form['style'] = array(
    '#type' => 'radios',
    '#title' => t('Style'),
    '#options' => $options,
    '#default_value' => $settings['style'],
    //'#description' => t(''),
  );

  $form['tabs'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Enabled browser tabs'),
    '#options' => angular_media_tabs(),
    '#default_value' => $settings['browser_plugins'],
    '#description' => t('Media tabs shown for this field. If no tabs are selected, they will all be available.'),
  );

  $form['allowedTypes'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Allowed file types'),
    '#options' => file_entity_type_get_names(),
    '#default_value' => $settings['allowedTypes'],
    '#description' => t('File types which are allowed for this field. If no file types are selected, they will all be available.'),
  );

  $visible_steam_wrappers = file_get_stream_wrappers(STREAM_WRAPPERS_VISIBLE);
  $options = array();
  foreach ($visible_steam_wrappers as $scheme => $information) {
    $options[$scheme] = check_plain($information['name']);
  }

  $form['allowedSchemes'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Allowed URI schemes'),
    '#options' => $options,
    '#default_value' => $settings['allowedSchemes'],
    '#description' => t('URI schemes which are allowed for this field. If no schemes are selected, they will all be available.'),
  );

  $form['cropRatio'] = array(
    '#type' => 'select',
    '#title' => t('Crop ratio'),
    '#options' => angular_media_cropRatios(),
    '#default_value' => $settings['cropRatio'],
    //'#description' => t('Allowed crop ratio for images.'),
  );

  return $form;
}



/**
 * Implements hook_field_widget_form().
 */
function angular_media_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {
  $instance['fieldName'] = $instance['field_name'];
  $settings = $instance['widget']['settings'];

  $options = array(
    'style' => $settings['style'],
    'cardinality' => $field['cardinality'],
    'fieldName' => $instance['fieldName'],
    'files' => array(),
    'cropRatio' => $settings['cropRatio'],
    'flickrKey' => variable_get('angular_media_flickrKey', FALSE),
    'flickrSearch' => variable_get('angular_media_flickrSey', FALSE),
  );

  if (!empty($_POST[$instance['fieldName'].'_media'])) {
    $options['files'] = json_decode($_POST[$instance['fieldName'].'_media']);
  }

  $options = array_merge($settings, $options);
  foreach ($items as $item) {
    $options['files'][] = angular_media_simplify_file($item);
  }  

  //dpm($options);

  $path = angular_media_app_path();
  $form['#attached'] = array(
    // @todo: make libraries_load work
    //'libraries_load' => array(
    //  array('angular_media', 'angular-media-app'),
    //)
    'js' => array(
      $path . 'js/libraries.min.js' => array(),
      $path . 'js/app.min.js' => array(),
      //$path . 'js/vendor/jcrop.min.js' => array('weight' => 10),
      drupal_get_path('module', 'angular_media') . '/js/angular-media.js' => array(),
    ),
    'css' => array(
      $path . 'css/app.min.css' => array(),
    ),
  );
  $element += array(
    '#type' => 'textfield',
    '#title' => $instance['label'],
    '#required' => $instance['required'],
    '#suffix' => theme('angular_media_app', array('settings' => $options)),
    '#attributes' => array('style' => 'display:none'),
  );
  if ($settings['style'] == 'placeholder') {
    $element['#title'] = NULL;
  }

  //@todo: this is hacky
  $form['#validate'][] = 'angular_media_field_widget_form_validate';
  $form['#submit'][] = 'angular_media_field_widget_form_validate';
  $form['angular_media_fields'] = isset($form['angular_media_fields']) ? $form['angular_media_fields'] : array('#type' => 'value', '#value' => array());
  $form['angular_media_fields']['#value'][] = $instance['fieldName'];

  return array($element);
}


/**
 * An element #process callback.
 *
 * Parses and saves the angular-media-app json.
 */
function angular_media_field_widget_form_validate($form, &$form_state) {
  if (!empty($form_state['values']['angular_media_fields'])) {
    foreach ($form_state['values']['angular_media_fields'] as $fieldName) {
      $json = json_decode($_POST[$fieldName.'_media']);
      $form_state['values'][$fieldName][LANGUAGE_NONE] = array();
      //$form_state['values']['field_media2'] = $form_state['values']['field_media'];
      foreach ($json as $key => $item) {
        $item->display = 1;
        $item->uplodate = '';
        $form_state['values'][$fieldName][LANGUAGE_NONE][] = (array)$item;
      }
    }
  }
}
