<?php
/**
 * @file
 * Define the a single-column style plugin.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Clean Markup Single column'),
  'category' => t('Clean Markup'),
  'icon' => 'onecol_clean.png',
  'theme' => 'panels_onecol_clean',
  'regions' => array('middle' => t('Middle column')),
);

/**
 * Prepares variables for panels_onecol_clean templates.
 *
 * Default template: panels-onecol-clean.tpl.php.
 *
 * @param array $variables
 *   An associative array containing:
 *   - $content: An array of content, each item in the array is keyed to one
 *     panel of the layout.
 */
function template_preprocess_panels_onecol_clean(&$variables) {
  // Construct an ID/Class attributes.
  $variables['panel_classes'] = 'panel-display panel-1col-clean clearfix';
  if ($variables['css_id']) {
    $variables['panel_id'] = ' id="' . $variables['css_id'] . '"';
    $variables['panel_classes'] .= ' ' . $variables['css_id'];
  }
  else {
    $variables['panel_id'] = '';
  }
}
