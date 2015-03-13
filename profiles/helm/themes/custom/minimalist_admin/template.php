<?php

/**
 * Implements template_preprocess_html().
 *
 */
//function minimalist_admin_preprocess_html(&$variables) {
//  // Add conditional CSS for IE. To use uncomment below and add IE css file
//  drupal_add_css(path_to_theme() . '/css/ie.css', array('weight' => CSS_THEME, 'browsers' => array('!IE' => FALSE), 'preprocess' => FALSE));
//
//  // Need legacy support for IE downgrade to Foundation 2 or use JS file below
//  // drupal_add_js('http://ie7-js.googlecode.com/svn/version/2.1(beta4)/IE7.js', 'external');
//}



/**
 * Implements hook_css_alter().
 */
function minimalist_admin_css_alter(&$css) {

  // unset cdn styles
  $theme_path = 'bootstrapcdn';
  foreach($css as $path => $values) {
   if(strpos($path, $theme_path) > 0) {
     unset($css[$path]);
   }
  }

  // $pan_core = drupal_get_path('module', 'panopoly_core');
  // if(isset($css[$pan_core . '/css/panopoly-jquery-ui-theme.css'])) {
  //   unset($css[$pan_core . '/css/panopoly-jquery-ui-theme.css']);
  // }

  $seven = drupal_get_path('theme', 'seven');
  if(isset($css[$seven . '/style.css'])) {
    unset($css[$seven . '/style.css']);
  }
  // // Give override css greater weight.
  // $theme_path = drupal_get_path('theme', 'bootstrap');
  //$css[$theme_path . '/css/overrides.css']['weight'] = 1;

  //dpm($css);
  // Give override css greater weight.
  //$theme_path = drupal_get_path('module', 'panopoly_magic') . '/css/panopoly-modal.css';
  //dpm($theme_path);
  //if(isset($css[$theme_path])) {
    //unset($css[$theme_path]);
  //}
  //dpm($css);
}

/**
 * Implements hook_js_alter().
 */
function minimalist_admin_js_alter(&$js) {
 // Always remove base theme JS.
 $theme_path = 'bootstrapcdn';

 foreach($js as $path => $values) {
   if(strpos($path, $theme_path) > 0) {
     unset($js[$path]);
   }
 }
}

/**
 * Implements hook_form_alter().
 * Sets up minimalist node edit form.
 */
function minimalist_admin_form_alter(&$form, &$form_state, $form_id) {
  if (strpos($form_id, '_node_form')) {
    $form['title']['#attributes']['placeholder'] = t('Enter title');
    $form['field_subtitle'][LANGUAGE_NONE][0]['value']['#attributes']['placeholder'] = t('Enter subtitle');
  }

  if (function_exists('libraries_get_path')) {
    $path = libraries_get_path('bootstrap-multiselect');
    if ($path) {
      $form['#attached']['js'][$path . '/dist/js/bootstrap-multiselect.js'] = array();
      $form['#attached']['js'][path_to_theme() . '/js/bootstrap-multiselect.js'] = array();
      $form['#attached']['css'][$path . '/dist/css/bootstrap-multiselect.css'] = array();
    }
  }
  dpm($form['#attached']);
}