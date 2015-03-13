<?php

/**
 * @file
 * Views integration for the angular_media module.
 */

/**
 * Implements hook_views_data_alter().
 */
function angular_media_views_data_alter(&$data) {
   // Rendered file.
  $data['file_managed']['image_style_url'] = array(
    'title' => t('Image Style URL'),
    'help' => t('Display the image style url'),
    'field' => array(
      'handler' => 'views_handler_field_file_image_style_url',
      'click sortable' => FALSE,
      'real field' => 'fid',
      'additional fields' => array(
        'fid',
      ),
    ),
  );
}

