<?php

/**
 * @file
 * Default image preset.
 */


/**
 * Implementation of hook_image_effect_info().
 */
function focal_point_image_effect_info() {
  $effects = array(
    'focal_point_scale_and_crop' => array(
      'label' => t('Focal Point Scale And Crop'),
      'help' => t('Scale and crop based on data provided by <em>Focal Point</em>.'),
      'effect callback' => 'focal_point_scale_and_crop_effect',
      'dimensions callback' => 'image_resize_dimensions',
      'form callback' => 'image_resize_form',
      'summary theme' => 'image_resize_summary',
    ),
    'focal_point_crop' => array(
      'label' => t('Focal Point Crop'),
      'help' => t('Crop based on data provided by <em>Focal Point</em>.'),
      'effect callback' => 'focal_point_crop_effect',
      'dimensions callback' => 'image_resize_dimensions',
      'form callback' => 'focal_point_crop_form',
      'summary theme' => 'image_crop_summary',
    ),
  );

  return $effects;
}

/**
 * Image effect callback.
 */
function focal_point_scale_and_crop_effect(&$image, $data) {
  $resize_data = focal_point_effect_resize_data($image->info['width'], $image->info['height'], $data['width'], $data['height']);
  if (!image_resize_effect($image, $resize_data)) {
    return FALSE;
  }

  if ($crop_data = focal_point_effect_crop_data($image, $data)) {
    // Next we crop.
    return image_crop_effect($image, $crop_data);
  }

  // At worst use the default effect and let Drupal handle the errors that
  // likely exist at this point.
  return image_scale_and_crop_effect($image, $data);
}

/**
 * Form builder for the crop form.
 */
function focal_point_crop_form($data = array()) {
  $form = image_crop_form($data);
  unset($form['anchor']);

  return $form;
}

/**
 * Image effect callback.
 */
function focal_point_crop_effect(&$image, $data) {
  if ($crop_data = focal_point_effect_crop_data($image, $data)) {
    return image_crop_effect($image, $crop_data);
  }

  // At worst use the default effect and let Drupal handle the errors that
  // likely exist at this point.
  return image_crop_effect($image, $data);
}

/**
 * Compile the necessary data for the image crop effect.
 *
 * @param object $image
 *   The image object provided to an effect callback.
 * @param array $data
 *   The data array provided to an effect callback.
 *
 * @return array|bool
 *   An array containing the following keys:
 *    - width
 *    - height
 *    - anchor (in the form xoffset-yoffset)
 *   If no image file can be located, FALSE is returned.
 */
function focal_point_effect_crop_data($image, $data) {
  $files = file_load_multiple(array(), array('uri' => $image->source));
  if (count($files)) {
    $file = reset($files);
    $focal_point = $file->focal_point;

    // Special handling for preview images.
    $parameters = drupal_get_query_parameters();
    if (!empty($parameters['focal_point'])) {
      $focal_point = focal_point_validate($parameters['focal_point']) ? $parameters['focal_point'] : $focal_point;
    }

    $focal_point = focal_point_parse($focal_point);
    $crop_data = array(
      'width' => (int) $data['width'],
      'height' => (int) $data['height'],
    );

    // Get the pixel location of the focal point for the current image taking
    // the image boundaries into account.
    $anchor_x = focal_point_effect_calculate_anchor($image->info['width'], $crop_data['width'], $focal_point['x-offset']);
    $anchor_y = focal_point_effect_calculate_anchor($image->info['height'], $crop_data['height'], $focal_point['y-offset']);

    $crop_data['anchor'] = $anchor_x .'-'. $anchor_y;

    return $crop_data;
  }

  return FALSE;
}

/**
 * Calculate the resize dimensions of an image based on the longest crop
 * dimension so that the aspect ratio is preserved and that there is always
 * enough image available to the crop.
 *
 * @param $image_width
 * @param $image_height
 * @param $crop_width
 * @param $crop_height
 * @return array
 */
function focal_point_effect_resize_data($image_width, $image_height, $crop_width, $crop_height) {
  $resize_data = array();

  if ($crop_width > $crop_height) {
    $resize_data['width'] = (int) $crop_width;
    $resize_data['height'] = (int) ($crop_width * $image_height / $image_width);

    // Ensure there is enough area to crop.
    if ($resize_data['height'] < $crop_height) {
      $resize_data['width'] = (int) ($crop_height * $resize_data['width'] / $resize_data['height']);
      $resize_data['height'] = (int) $crop_height;
    }
  }
  else {
    $resize_data['width'] = (int) ($crop_height * $image_width / $image_height);
    $resize_data['height'] = (int) $crop_height;

    // Ensure there is enough area to crop.
    if ($resize_data['width'] < $crop_width) {
      $resize_data['height'] = (int) ($crop_width * $resize_data['height'] / $resize_data['width']);
      $resize_data['width'] = (int) $crop_width;
    }
  }

  return $resize_data;
}

/**
 * Calculate the anchor offset for the given dimension.
 *
 * @param int $image_size
 *   The dimension of the full-sized image.
 * @param int $crop_size
 *   The dimension of the crop.
 * @param int $focal_point_offset
 *   The corresponding focal point percentage value for the given dimension.
 *
 * @return int
 */
function focal_point_effect_calculate_anchor($image_size, $crop_size, $focal_point_offset) {
  $focal_point_pixel = (int) $focal_point_offset * $image_size / 100;

  // If the crop size is larger than the image size, use the image size to avoid
  // stretching. This will cause the excess space to be filled with black.
  $crop_size = min($image_size, $crop_size);

  // Define the anchor as half the crop width to the left.
  $offset = (int) ($focal_point_pixel - (.5 * $crop_size));
  // Ensure the anchor doesn't fall off the left edge of the image.
  $offset = max($offset, 0);
  // Ensure the anchor doesn't fall off the right side of the image.
  if ($offset + $crop_size > $image_size) {
    $offset = $image_size - $crop_size;
  }

  return $offset;
}
