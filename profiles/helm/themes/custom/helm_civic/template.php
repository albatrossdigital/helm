<?php

/**
 * Implements template_preprocess_html().
 */
function helm_civic_preprocess_html(&$variables) {
  // Add Google Fonts, FontAwesome
  if ($google_font = theme_get_setting('google_font', 'helm_civic')) {
    drupal_add_css($google_font, array('external' => TRUE));
  }
  // @todo?
  //if (theme_get_setting('fontawesome', 'helm_civic')) {
  //  drupal_add_css(path_to_theme() . , array('external' => TRUE));
  //}
}