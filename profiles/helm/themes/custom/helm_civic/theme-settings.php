<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function helm_civic_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['fonts'] = array(
    '#type' => 'fieldset',
    '#title' => t('Fonts'),
  );
  $form['fonts']['google_font'] = array(
    '#type' => 'textfield',
    '#title' => t('Google Font'),
    '#description' => t('Include this css file from Google Fonts.  Leave blank to not poull any css file from Google Fonts.'),
    '#default_value' => theme_get_setting('google_font', 'helm_civic'),
  );
  /*$form['fonts']['fontawesome'] = array(
    '#type' => 'checkbox',
    '#title' => t('FontAwesome'),
    '#description' => t('Include this css file for FontAwesome.'),
    '#default_value' => theme_get_setting('fontawesome', 'helm_civic'),
  );*/
}


