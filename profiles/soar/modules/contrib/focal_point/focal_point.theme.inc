<?php

/**
 * Replacement for the standard theme_image_style function. This function
 * appends an fid and focal_point to the image URL.
 *
 * @param array $variables
 *   This expects the same attributes as theme_image_style with the following
 *   one addition:
 *    - focal_point
 *
 * @return string
 *
 * @see theme_image_style()
 */
function theme_focal_point_image_style($variables) {
  // Determine the dimensions of the styled image.
  $dimensions = array(
    'width' => $variables['width'],
    'height' => $variables['height'],
  );

  image_style_transform_dimensions($variables['style_name'], $dimensions);

  $variables['width'] = $dimensions['width'];
  $variables['height'] = $dimensions['height'];

  // Determine the URL for the styled image.
  $url = image_style_url($variables['style_name'], $variables['path']);
  $delimiter = strpos($url, '?') !== FALSE ? '&' : '?';

  $variables['path'] = $url . $delimiter . 'focal_point=' . $variables['focal_point'];

  return theme('image', $variables);
}
