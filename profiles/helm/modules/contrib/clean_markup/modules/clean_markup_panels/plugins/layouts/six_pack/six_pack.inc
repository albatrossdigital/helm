<?php
/**
 * @file
 * Define the Six Pack style plugin.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Six Pack: 6 regions'),
  'category' => t('Clean Markup'),
  'icon' => 'six_pack.png',
  'theme' => 'panels_six_pack',
  'regions' => array(
    'first' => t('First'),
    'second' => t('Second'),
    'third' => t('Third'),
    'fourth' => t('Fourth'),
    'fifth' => t('Fifth'),
    'sixth' => t('Sixth'),
  ),
);

/**
 * Prepares variables for panels_six_pack templates.
 *
 * Default template: panels-six-pack.tpl.php.
 *
 * @param array $variables
 *   An associative array containing:
 *   - $content: An array of content, each item in the array is keyed to one
 *     panel of the layout.
 */
function template_preprocess_panels_six_pack(&$variables) {
  // Construct an ID/Class attributes.
  $variables['panel_classes'] = 'panel-display panel-six-pack-layout clearfix';
  if ($variables['css_id']) {
    $variables['panel_id'] = ' id="' . $variables['css_id'] . '"';
    $variables['panel_classes'] .= ' ' . $variables['css_id'];
  }
  else {
    $variables['panel_id'] = '';
  }
}
