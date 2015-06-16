<?php
/**
 * @file
 * helm_social.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function helm_social_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-social_networks-field_social_networks'
  $field_instances['fieldable_panels_pane-social_networks-field_social_networks'] = array(
    'bundle' => 'social_networks',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'socialfield',
        'settings' => array(
          'link_text' => FALSE,
        ),
        'type' => 'socialfield_formatter',
        'weight' => 0,
      ),
      'triptych' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'fences_wrapper' => 'div',
    'field_name' => 'field_social_networks',
    'label' => 'Social Networks',
    'required' => 0,
    'settings' => array(
      'services' => array(
        'facebook' => 'facebook',
        'googleplus' => 'googleplus',
        'twitter' => 'twitter',
      ),
      'used_services' => array(
        'delicious' => 'delicious',
        'digg' => 'digg',
        'facebook' => 'facebook',
        'flickr' => 'flickr',
        'googleplus' => 'googleplus',
        'linkedin' => 'linkedin',
        'myspace' => 'myspace',
        'pinterest' => 'pinterest',
        'reddit' => 'reddit',
        'slideshare' => 'slideshare',
        'stumbleupon' => 'stumbleupon',
        'twitter' => 'twitter',
        'vimeo' => 'vimeo',
        'yahoo' => 'yahoo',
        'youtube' => 'youtube',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'socialfield',
      'settings' => array(),
      'type' => 'socialfield_widget',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Social Networks');

  return $field_instances;
}
