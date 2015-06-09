<?php

function media_formatters_admin_form($form, &$form_state) {
  $form['lazysizes'] = array(
    '#title' => 'Lazysizes',
    '#type' => 'fieldset',
  );
  $form['lazysizes']['breakpoints'] = array(
    '#title' => 'Breakpoints',
    '#type' => 'fieldset',
    '#description' => t('Enter the width for each breakpoint.'),
  );
  $form['lazysizes']['styles'] = array(
    '#title' => 'Default image styles',
    '#type' => 'fieldset',
  );
  $image_styles = _media_formatters_image_style_options(array('' => t('None')));
  $form['lazysizes']['styles']['media_formatters_style_default'] = array(
    '#title' => t('Default image style'),
    '#type' => 'select',
    '#options' => $image_styles,
    '#default_value' => variable_get('media_formatters_style_default', ''),
  );
  foreach (_media_formatters_breakpoints() as $key=>$item) {
    $form['lazysizes']['breakpoints']['media_formatters_breakpoint_' . $key] = array(
      '#title' => t($item['title']),
      '#type' => 'textfield',
      '#size' => 5,
      '#field_suffix' => 'px',
      '#default_value' => $item['width'],
    );
    $form['lazysizes']['styles']['media_formatters_style_' . $key] = array(
      '#title' => t($item['title']),
      '#type' => 'select',
      '#options' => $image_styles,
      '#default_value' => $item['style'],
    );
  }
  
  return system_settings_form($form);
}

