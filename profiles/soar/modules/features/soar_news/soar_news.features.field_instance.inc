<?php
/**
 * @file
 * soar_news.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function soar_news_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-body'
  $field_instances['node-article-body'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
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
          'quickedit' => array(
            'editor' => 'form',
          ),
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-article-field_picture'
  $field_instances['node-article-field_picture'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => 'Upload an image to go with this article.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'image',
        'weight' => -1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'image',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_picture',
    'label' => 'Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => TRUE,
      'default_image' => 0,
      'file_directory' => 'field/image',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
        'allowed_types' => array(
          0 => 'image',
        ),
        'browser_plugins' => array(),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Image');
  t('Upload an image to go with this article.');

  return $field_instances;
}
