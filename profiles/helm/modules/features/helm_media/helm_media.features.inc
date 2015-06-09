<?php
/**
 * @file
 * helm_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function helm_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function helm_media_image_default_styles() {
  $styles = array();

  // Exported image style: formatter_extra_small__450_x_450.
  $styles['formatter_extra_small__450_x_450'] = array(
    'label' => 'Full-width Extra Small (450 x 450)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 450,
          'height' => 450,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: formatter_large__1140_x_1140_.
  $styles['formatter_large__1140_x_1140_'] = array(
    'label' => 'Full-width Large (1140 x 1140)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1140,
          'height' => 1140,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: formatter_medium__940_x_940_.
  $styles['formatter_medium__940_x_940_'] = array(
    'label' => 'Full-width Medium (940 x 940)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => 940,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: formatter_small__720_x_720_.
  $styles['formatter_small__720_x_720_'] = array(
    'label' => 'Full-width Small (720 x 720)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 720,
          'height' => 720,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
