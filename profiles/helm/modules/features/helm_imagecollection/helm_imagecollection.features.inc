<?php
/**
 * @file
 * helm_imagecollection.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function helm_imagecollection_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function helm_imagecollection_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function helm_imagecollection_image_default_styles() {
  $styles = array();

  // Exported image style: helm_slide_large.
  $styles['helm_slide_large'] = array(
    'label' => 'Helm Slide Large',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1140,
          'height' => 641,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: helm_slide_med.
  $styles['helm_slide_med'] = array(
    'label' => 'Helm Slide Medium',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 529,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: helm_slide_small.
  $styles['helm_slide_small'] = array(
    'label' => 'Helm Slide Small',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 405,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: helm_slide_xs.
  $styles['helm_slide_xs'] = array(
    'label' => 'Helm Slide Extra Small',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 253,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
