<?php
/**
 * @file
 * Written by Henri MEDOT <henri.medot[AT]absyx[DOT]fr>
 * http://www.absyx.fr
 */

function ckeditor_widgets_settings_form() {
  $plugins = ckeditor_widgets_ckeditor_plugin();
  $buttons = array();
  foreach ($plugins as $plugin) {
    foreach ($plugin['buttons'] as $key => $button) {
      if ($key != 'WidgetTemplateMenu') {
        $buttons[$key] = $button['label'];
      }
    }
  }
  $form['ckeditor_widgets_buttons'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Enabled dropdown buttons'),
    '#description' => t('Select which buttons should be enabled in the Insert Template dropdown'),
    '#options' => $buttons,
    '#default_value' => variable_get('ckeditor_widgets_buttons', array_keys($buttons)),
  );

  $form['ckeditor_widgets_height'] = array(
    '#type' => 'textfield',
    '#title' => t('Height'),
    '#description' => t('Enter the height of the editor (the editor.height variable).'),
    '#default_value' => variable_get('ckeditor_widgets_height', '400px'),
  );
  return system_settings_form($form);
}
