<?php
/**
 * @file
 * media_formatters_test.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function media_formatters_test_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-media_formatters_test-body'
  $field_instances['node-media_formatters_test-body'] = array(
    'bundle' => 'media_formatters_test',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-media_formatters_test-field_bootstrap_lightbox'
  $field_instances['node-media_formatters_test-field_bootstrap_lightbox'] = array(
    'bundle' => 'media_formatters_test',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'media_formatters',
        'settings' => array(
          'class' => 'col-sm-4',
          'image_style' => 'thumb',
          'image_style_first' => '',
          'image_style_lightbox' => 'large',
          'thumbnail_num' => '',
        ),
        'type' => 'bootstrap_lightbox',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_bootstrap_lightbox',
    'label' => 'Lightbox images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'angular_media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'public' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 0,
        ),
        'crop_ratio' => array(
          0 => 'free',
        ),
        'tabs' => array(
          'flickr' => 0,
          'me' => 0,
          'site' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'file_angular_media',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-media_formatters_test-field_flexible_media'
  $field_instances['node-media_formatters_test-field_flexible_media'] = array(
    'bundle' => 'media_formatters_test',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'media_formatters',
        'settings' => array(
          'autoplay' => TRUE,
          'class' => '',
          'click_format' => 'lightbox',
          'file_view_mode' => 'default',
          'image_style' => '',
          'image_style_lg' => 'default',
          'image_style_lightbox' => '',
          'image_style_md' => 'default',
          'image_style_sm' => 'default',
          'image_style_xs' => 'default',
          'link_field' => '',
          'play_class' => 'button icon-play',
          'show_attribution' => TRUE,
        ),
        'type' => 'flexible_media',
        'weight' => 7,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_flexible_media',
    'label' => 'Flexible media',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'angular_media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'public' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 0,
        ),
        'crop_ratio' => array(
          0 => 'free',
        ),
        'tabs' => array(
          'flickr' => 0,
          'me' => 0,
          'site' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'file_angular_media',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-media_formatters_test-field_icon_list'
  $field_instances['node-media_formatters_test-field_icon_list'] = array(
    'bundle' => 'media_formatters_test',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'media_formatters',
        'settings' => array(
          'image_style' => 'thumbnail',
          'thumbnail_size' => 'md',
        ),
        'type' => 'media_formatter_icons',
        'weight' => 6,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_icon_list',
    'label' => 'Icon list',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt doc pdf jpg png gif xls xlsx docx',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'angular_media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'public' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 0,
        ),
        'crop_ratio' => array(
          0 => 'free',
        ),
        'tabs' => array(
          'flickr' => 0,
          'me' => 0,
          'site' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'file_angular_media',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-media_formatters_test-field_image_link'
  $field_instances['node-media_formatters_test-field_image_link'] = array(
    'bundle' => 'media_formatters_test',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'media_formatters',
        'settings' => array(
          'image_style' => 'medium',
          'link_field' => 'field_image_link_linkfield',
        ),
        'type' => 'image_link',
        'weight' => 2,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_image_link',
    'label' => 'Image linking to another field',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'angular_media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'public' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 0,
        ),
        'crop_ratio' => array(
          0 => 'free',
        ),
        'tabs' => array(
          'flickr' => 0,
          'me' => 0,
          'site' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'file_angular_media',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-media_formatters_test-field_image_link_linkfield'
  $field_instances['node-media_formatters_test-field_image_link_linkfield'] = array(
    'bundle' => 'media_formatters_test',
    'default_value' => array(
      0 => array(
        'title' => '',
        'url' => 'http://en.wikipedia.org/wiki/Albatross',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_image_link_linkfield',
    'label' => 'Other field',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-media_formatters_test-field_lazyload'
  $field_instances['node-media_formatters_test-field_lazyload'] = array(
    'bundle' => 'media_formatters_test',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'media_formatters',
        'settings' => array(
          'image_style' => 'small',
          'image_style_lg' => 'large',
          'image_style_md' => 'medium',
          'image_style_sm' => 'default',
          'image_style_xs' => 'small',
          'link_field' => '',
          'show_attribution' => 1,
          'show_src' => 0,
        ),
        'type' => 'lazysizes',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_lazyload',
    'label' => 'Responsive Lazy-loaded image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg png gif',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'angular_media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'public' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 0,
        ),
        'crop_ratio' => array(
          0 => 'free',
        ),
        'tabs' => array(
          'flickr' => 0,
          'me' => 0,
          'site' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'file_angular_media',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-media_formatters_test-field_video_clicktoplay'
  $field_instances['node-media_formatters_test-field_video_clicktoplay'] = array(
    'bundle' => 'media_formatters_test',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'foundation_formatters',
        'settings' => array(
          'autoplay' => TRUE,
          'class' => 'col-sm-4',
          'format' => 'inline',
          'image_field' => 'thumb',
          'image_style' => 'thumb',
          'play_class' => 'button icon-play',
        ),
        'type' => 'file_click_to_play',
        'weight' => 4,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_video_clicktoplay',
    'label' => 'Video click-to-play',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'angular_media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'public' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 0,
        ),
        'crop_ratio' => array(
          0 => 'free',
        ),
        'tabs' => array(
          'flickr' => 0,
          'me' => 0,
          'site' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'file_angular_media',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-media_formatters_test-field_video_modal'
  $field_instances['node-media_formatters_test-field_video_modal'] = array(
    'bundle' => 'media_formatters_test',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_video_modal',
    'label' => 'Video modal',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'angular_media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 0,
          'public' => 0,
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 0,
        ),
        'crop_ratio' => array(
          0 => 'free',
        ),
        'tabs' => array(
          'flickr' => 0,
          'me' => 0,
          'site' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'file_angular_media',
      'weight' => 47,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Flexible media');
  t('Icon list');
  t('Image linking to another field');
  t('Lightbox images');
  t('Other field');
  t('Responsive Lazy-loaded image');
  t('Video click-to-play');
  t('Video modal');

  return $field_instances;
}
