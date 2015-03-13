<?php

/**
 * Implements template_preprocess_html().
 *
 */
//function helm_base_preprocess_html(&$variables) {
//  // Add conditional CSS for IE. To use uncomment below and add IE css file
//  drupal_add_css(path_to_theme() . '/css/ie.css', array('weight' => CSS_THEME, 'browsers' => array('!IE' => FALSE), 'preprocess' => FALSE));
//
//  // Need legacy support for IE downgrade to Foundation 2 or use JS file below
//  // drupal_add_js('http://ie7-js.googlecode.com/svn/version/2.1(beta4)/IE7.js', 'external');
//}


/**
 *
 * Implements template_prerocess_page().
 */
function helm_base_preprocess_page(&$vars) {

  // If panels arent being used at all.
  $vars['no_panels'] = !(module_exists('page_manager') && page_manager_get_current_page());
}


/**
 * Implements hook_css_alter().
 */
function helm_base_css_alter(&$css) {
 // Always remove base theme CSS.

  $theme_path = 'bootstrapcdn';

  foreach($css as $path => $values) {
   if(strpos($path, $theme_path) > 0) {
     unset($css[$path]);
   }
  }
}

/**
 * Implements hook_js_alter().
 */
function helm_base_js_alter(&$js) {
 // Always remove base theme JS.
 $theme_path = 'bootstrapcdn';

 foreach($js as $path => $values) {
   if(strpos($path, $theme_path) > 0) {
     unset($js[$path]);
   }
 }
}
