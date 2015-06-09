<?php
/**
 * @file
 * helm_media.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_media_defaultconfig_features() {
  return array(
    'helm_media' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function helm_media_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_formatters_style_default';
  $strongarm->value = 'formatter_extra_small__450_x_450';
  $export['media_formatters_style_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_formatters_style_lg';
  $strongarm->value = 'formatter_large__1140_x_1140_';
  $export['media_formatters_style_lg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_formatters_style_md';
  $strongarm->value = 'formatter_medium__940_x_940_';
  $export['media_formatters_style_md'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_formatters_style_sm';
  $strongarm->value = 'formatter_small__720_x_720_';
  $export['media_formatters_style_sm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_formatters_style_xs';
  $strongarm->value = 'formatter_extra_small__450_x_450';
  $export['media_formatters_style_xs'] = $strongarm;

  return $export;
}
