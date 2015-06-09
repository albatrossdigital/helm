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

  // Theme information
  $form['theme_info'] = array(
    '#type' => 'fieldset',
    '#title' => t('Theme Info'),
    '#weight' => -10
  );
  $form['theme_info']['pretty_sitename'] = array(
    '#type' => 'textarea',
    '#title' => t('Pretty Site Name'),
    '#description' => t('If set, use a html based site title, otherwise grabs the normal site title.'),
    '#default_value' => theme_get_setting('pretty_sitename', 'helm_civic'),
    '#attributes' => array(
      'rows' => 3
    )
  );

  // Fonts
  $form['fonts'] = array(
    '#type' => 'fieldset',
    '#title' => t('Fonts'),
  );
  $form['fonts']['google_font'] = array(
    '#type' => 'textfield',
    '#title' => t('Google Font'),
    '#description' => t('Include font families from google fonts. Seperate all fonts with a "|", using the sytax described !link.  For example: <strong>Tangerine:bold,bolditalic|Inconsolata:italic|Droid Sans</strong>', array(
      '!link' => l('here', 'https://developers.google.com/fonts/docs/getting_started#Syntax" target="_blank', array('attributes' => array('target' => '_blank' )))
    )),
    '#default_value' => theme_get_setting('google_font', 'helm_civic'),
  );
  /*$form['fonts']['fontawesome'] = array(
    '#type' => 'checkbox',
    '#title' => t('FontAwesome'),
    '#description' => t('Include this css file for FontAwesome.'),
    '#default_value' => theme_get_setting('fontawesome', 'helm_civic'),
  );*/
}


