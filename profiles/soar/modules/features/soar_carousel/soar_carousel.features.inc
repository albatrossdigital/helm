<?php
/**
 * @file
 * soar_carousel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soar_carousel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function soar_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function soar_carousel_image_default_styles() {
  $styles = array();

  // Exported image style: soar_carousel_image.
  $styles['soar_carousel_image'] = array(
    'name' => 'soar_carousel_image',
    'label' => 'Soar Slide Image',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 760,
          'height' => 460,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: soar_carousel_image_promo.
  $styles['soar_carousel_image_promo'] = array(
    'name' => 'soar_carousel_image_promo',
    'label' => 'Soar Carousel Image - Promo (1200x666)',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 666,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
