<?php

/**
 * Implements hook_field_widget_info().
 */
function angular_media_field_widget_info() {
  return array(
    'file_angular_media' => array(
      'label' => t('Angular Media Dialog'),
      'field types' => array('file', 'image', 'media'),
      //'settings' => array('size' => 60),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_CUSTOM, //Value for field API indicating a widget can receive several field values.
        'default value' => FIELD_BEHAVIOR_NONE,
      ),
    ),
  );
}

/**
 * Implements hook_field_widget_form().
 */
function angular_media_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {
  $options = array(
    'cardinality' => $field['cardinality'],
    'field_name' => $instance['field_name'],
    'files' => array(),
  );
  foreach ($items as $item) {
    $options['files'][] = angular_media_simplify_file($item);
  }

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
    '#suffix' => theme('angular_media_app', $options),
    '#attributes' => array('style' => 'display:none'),
  );

  //@todo: this is hacky
  $form['#validate'][] = 'angular_media_field_widget_form_validate';
  $form['#submit'][] = 'angular_media_field_widget_form_validate';
  $form['angular_media_fields'] = isset($form['angular_media_fields']) ? $form['angular_media_fields'] : array('#type' => 'value', '#value' => array());
  $form['angular_media_fields']['#value'][] = $instance['field_name'];

  return array($element);
}


/**
 * An element #process callback.
 *
 * Parses and savesthe angular-media-app json.
 */
function angular_media_field_widget_form_validate($form, &$form_state) {
  if (!empty($form_state['values']['angular_media_fields'])) {
    foreach ($form_state['values']['angular_media_fields'] as $field_name) {
      $json = json_decode($_POST[$field_name.'_media']);
      $form_state['values'][$field_name][LANGUAGE_NONE] = array();
      //$form_state['values']['field_media2'] = $form_state['values']['field_media'];
      foreach ($json as $key => $item) {
        $item->display = 1;
        $item->uplodate = '';
        $form_state['values'][$field_name][LANGUAGE_NONE][] = (array)$item;
      }
      dpm($form_state['values'][$field_name]);
    }
  }
}
