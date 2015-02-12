<?php


/**
 * @file
 * Adds functionality to leverage the smartcrop module in order to calculate the
 * focal point of an image. This file will only be included if the smartcrop
 * module is currently enabled.
 */

include_once drupal_get_path('module', 'smartcrop') . '/image.gd.inc';

/**
 * Given an image, use smartcrop to estimate a good focal point. Much of this
 * code was taken from image_gd_smartcrop_crop().
 *
 * @see image_gd_smartcrop_crop()
 */
function focal_point_smartcrop_estimation(stdClass $image_data) {
  $image = $image_data->resource;
  $left = $top = 0;
  $left_entropy = $right_entropy = $top_entropy = $bottom_entropy = 0;
  $original_width = imagesx($image);
  $original_height = imagesy($image);

  $right = $original_width;
  $bottom = $original_height;

  $dx = $original_width;
  $dy = $original_height;

  // Slice from left and right edges until the correct width is reached.
  while ($dx) {
    $slice = min($dx, 10);

    // Calculate the entropy of the new slice.
    if (!$left_entropy) {
      $left_entropy = _smartcrop_gd_entropy_slice($image_data, $left, $top, $slice, imagesy($image));
    }
    if (!$right_entropy) {
      $right_entropy = _smartcrop_gd_entropy_slice($image_data, $right - $slice, $top, $slice, imagesy($image));
    }

    // Remove the lowest entropy slice.
    if ($left_entropy >= $right_entropy) {
      $right -= $slice;
      $right_entropy = 0;
    }
    else {
      $left += $slice;
      $left_entropy = 0;
    }
    $dx -= $slice;
  }

  // Slice from the top and bottom edges until the correct width is reached.
  while ($dy) {
    $slice = min($dy, 10);

    // Calculate the entropy of the new slice.
    if (!$top_entropy) {
      $top_entropy = _smartcrop_gd_entropy_slice($image_data, $left, $top, imagesx($image), $slice);
    }
    if (!$bottom_entropy) {
      $bottom_entropy = _smartcrop_gd_entropy_slice($image_data, $left, $bottom - $slice, imagesx($image), $slice);
    }

    // Remove the lowest entropy slice.
    if ($top_entropy < $bottom_entropy) {
      $bottom -= $slice;
      $bottom_entropy = 0;
    }
    else {
      $top += $slice;
      $top_entropy = 0;
    }
    $dy -= $slice;
  }

  return array($left, $top);
}
