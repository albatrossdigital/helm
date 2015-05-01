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
 * Implements hook_preprocess_page().
 */
function minimalist_admin_preprocess_page(&$variables) {
  $variables['copyright'] = '';
}


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

// /**
//  * Implements hook_form_alter().
//  *
//  * Adds module's css and js files when needed.
//  */
// function minimalist_admin_form_alter(&$form, $form_state, $form_id) {
//   global $base_url;

//   // Prepare arrays if necessary.
//   if (!isset($form['#attached'])) {
//     $form['#attached'] = array();
//   }
//   if (!isset($form['#groups'])) {
//     $form['#groups'] = array();
//   }

//   $all_groups_tab = vertical_tabs_responsive_all_form_groups_are_tabs($form['#groups']);
//   $all_elem_sp = vertical_tabs_responsive_all_form_root_elements_are_special($form);
//   $should_resp_vt = vertical_tabs_responsive_should_responsify_vt();

//   if ((!$all_groups_tab && !$all_elem_sp && $should_resp_vt)) {
//     // Only responsify when needed.
//     vertical_tabs_responsive_set_attached($form['#attached']);
//   }
//   else {
//     // We reset standart vertical tabs behaviour.
//     $theme_path = drupal_get_path('theme', variable_get('admin_theme', 'seven'));
//     $parent_theme = vertical_tabs_responsive_get_first_parent_theme(variable_get('admin_theme', 'seven'));

//     $form['#attached']['js']['misc/vertical-tabs.js'] = $base_url . '/misc/vertical-tabs.js';

//     if (file_exists($theme_path . '/vertical-tabs.css')) {
//       $form['#attached']['css']['css/vertical-tabs.css'] = $theme_path . '/vertical-tabs.css';
//     }
//     elseif (file_exists($theme_path . '/css/vertical-tabs.css')) {
//       $form['#attached']['css']['css/vertical-tabs.css'] = $theme_path . '/css/vertical-tabs.css';
//     }
//     elseif ($parent_theme != '') {
//       $theme_path = drupal_get_path('theme', $parent_theme);
//       $form['#attached']['css']['css/vertical-tabs.css'] = $theme_path . '/css/vertical-tabs.css';
//     }
//     else {
//       $form['#attached']['css']['css/vertical-tabs.css'] = $base_url . '/misc/vertical-tabs.css';
//     }
//   }
// }

/**
 * Adds a flag to vertical tabs to be rendered as bootstrap tabs
 */

function minimalist_admin_vertical_tabs_modify(&$form) {
  // Modify vertical tabs
  $children = element_children($form);
  foreach ($children as $key) {
    if(!empty($form[$key]['#type']) && $form[$key]['#type'] == 'vertical_tabs') {
      $form[$key]['#modify_tabs'] = TRUE;
    }
  }
}

/**
 * Implements hook_form_alter().
 * Sets up minimalist node edit form.
 */
function minimalist_admin_form_alter(&$form, &$form_state, $form_id) {
  $path = path_to_theme();  

  if (!empty($form['#node_edit_form'])) {

    // Placeholder text
    $form['title']['#attributes']['placeholder'] = t('Enter title');
    $form['field_subtitle'][LANGUAGE_NONE][0]['value']['#attributes']['placeholder'] = t('Enter subtitle');

    // modify vertical tabs 
    minimalist_admin_vertical_tabs_modify($form);
  }
}

//
function minimalist_admin_vertical_tabs($variables) {

  $element = $variables['element'];
  $output = '<h2 class="element-invisible">' . t('Vertical Tabs') . '</h2>';

  // We're turning these into bootstrap tabs
  if(!empty($element['#modify_tabs'])) {
    $output .= '<div class="bootstrap-vertical-tabs panel-group" id="accordion-' . $element['#id'] . '">' . $element ['#children'] . '</div>';
  }
  else {
    // Add required JavaScript and Stylesheet.
    drupal_add_library('system', 'drupal.vertical-tabs');

    $output .= '<div class="vertical-tabs-panes">' . $element['#children'] . '</div>';
  }
  return $output;
}