<?php
/**
 * @file
 * Define the Myriad style plugin.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Myriad: 5 rows with 4 regions each, absolute minimal markup'),
  'category' => t('Clean Markup'),
  'icon' => 'myriad.png',
  'admin css' => 'myriad_admin.css',
  'theme' => 'panels_myriad',
  'regions' => array(
    'one_first' => t('First'),
    'one_second' => t('Second'),
    'one_third' => t('Third'),
    'one_fourth' => t('Fourth'),
    'two_first' => t('First'),
    'two_second' => t('Second'),
    'two_third' => t('Third'),
    'two_fourth' => t('Fourth'),
    'three_first' => t('First'),
    'three_second' => t('Second'),
    'three_third' => t('Third'),
    'three_fourth' => t('Fourth'),
    'four_first' => t('First'),
    'four_second' => t('Second'),
    'four_third' => t('Third'),
    'four_fourth' => t('Fourth'),
    'five_first' => t('First'),
    'five_second' => t('Second'),
    'five_third' => t('Third'),
    'five_fourth' => t('Fourth'),
  ),
);

/**
 * Prepares variables for panels_myriad templates.
 *
 * Default template: panels-myriad.tpl.php.
 *
 * @param array $variables
 *   An associative array containing:
 *   - $content: An array of content, each item in the array is keyed to one
 *     panel of the layout.
 */
function template_preprocess_panels_myriad(&$variables) {
  $variables['row_one_regions'] = 0;
  $variables['row_two_regions'] = 0;
  $variables['row_three_regions'] = 0;
  $variables['row_four_regions'] = 0;
  $variables['row_five_regions'] = 0;
  $variables['total_rows'] = 0;

  // Calculated output for first row wrapper.
  if ($variables['content']['one_first']) {
    $variables['row_one_regions']++;
  }
  if ($variables['content']['one_second']) {
    $variables['row_one_regions']++;
  }
  if ($variables['content']['one_third']) {
    $variables['row_one_regions']++;
  }
  if ($variables['content']['one_fourth']) {
    $variables['row_one_regions']++;
  }
  if ($variables['row_one_regions'] > 0) {
    $variables['total_rows']++;
  }

  // Calculated output for first row wrapper.
  if ($variables['content']['two_first']) {
    $variables['row_two_regions']++;
  }
  if ($variables['content']['two_second']) {
    $variables['row_two_regions']++;
  }
  if ($variables['content']['two_third']) {
    $variables['row_two_regions']++;
  }
  if ($variables['content']['two_fourth']) {
    $variables['row_two_regions']++;
  }
  if ($variables['row_two_regions'] > 0) {
    $variables['total_rows']++;
  }

  // Calculated output for third row wrapper.
  if ($variables['content']['three_first']) {
    $variables['row_three_regions']++;
  }
  if ($variables['content']['three_second']) {
    $variables['row_three_regions']++;
  }
  if ($variables['content']['three_third']) {
    $variables['row_three_regions']++;
  }
  if ($variables['content']['three_fourth']) {
    $variables['row_three_regions']++;
  }
  if ($variables['row_three_regions'] > 0) {
    $variables['total_rows']++;
  }

  // Calculated output for fourth row wrapper.
  if ($variables['content']['four_first']) {
    $variables['row_four_regions']++;
  }
  if ($variables['content']['four_second']) {
    $variables['row_four_regions']++;
  }
  if ($variables['content']['four_third']) {
    $variables['row_four_regions']++;
  }
  if ($variables['content']['four_fourth']) {
    $variables['row_four_regions']++;
  }
  if ($variables['row_four_regions'] > 0) {
    $variables['total_rows']++;
  }

  // Calculated output for fifth row wrapper.
  if ($variables['content']['five_first']) {
    $variables['row_five_regions']++;
  }
  if ($variables['content']['five_second']) {
    $variables['row_five_regions']++;
  }
  if ($variables['content']['five_third']) {
    $variables['row_five_regions']++;
  }
  if ($variables['content']['five_fourth']) {
    $variables['row_five_regions']++;
  }
  if ($variables['row_five_regions'] > 0) {
    $variables['total_rows']++;
  }

  // Construct an ID/Class attributes.
  $variables['panel_classes'] = 'panel-display panel-myriad-layout clearfix';
  if ($variables['css_id']) {
    $variables['panel_id'] = ' id="' . $variables['css_id'] . '"';
    $variables['panel_classes'] .= ' ' . $variables['css_id'];
  }
  else {
    $variables['panel_id'] = '';
  }
}
