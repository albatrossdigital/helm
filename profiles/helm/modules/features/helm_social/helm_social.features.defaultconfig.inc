<?php
/**
 * @file
 * helm_social.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function helm_social_defaultconfig_features() {
  return array(
    'helm_social' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function helm_social_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialfield_services';
  $strongarm->value = array(
    'facebook' => array(
      'name' => 'Facebook',
      'icon' => 'icon-facebook fa fa-facebook',
      'validation_pattern' => '*facebook.com/*',
    ),
    'twitter' => array(
      'name' => 'Twitter',
      'icon' => 'icon-twitter fa fa-twitter',
      'validation_pattern' => '*twitter.com/*',
    ),
    'googleplus' => array(
      'name' => 'Google+',
      'icon' => 'icon-gplus fa fa-googleplus',
      'validation_pattern' => '*plus.google.com/*',
    ),
    'linkedin' => array(
      'name' => 'LinkedIn',
      'icon' => 'icon-linkedin fa fa-linkedin',
      'validation_pattern' => '*linkedin.com/*',
    ),
    'youtube' => array(
      'name' => 'YouTube',
      'icon' => 'icon-youtube fa fa-youtube',
      'validation_pattern' => '*youtube.com/*',
    ),
    'vimeo' => array(
      'name' => 'Vimeo',
      'icon' => 'icon-vimeo fa fa-vimeo',
      'validation_pattern' => '*vimeo.com/*',
    ),
    'delicious' => array(
      'name' => 'Delicious',
      'icon' => 'icon-delicious fa fa-delicious',
      'validation_pattern' => '*delicious.com/*',
    ),
    'digg' => array(
      'name' => 'Digg',
      'icon' => 'icon-digg fa fa-digg',
      'validation_pattern' => '*digg.com/*',
    ),
    'flickr' => array(
      'name' => 'Flickr',
      'icon' => 'icon-flickr fa fa-flickr',
      'validation_pattern' => '*flickr.com/*',
    ),
    'yahoo' => array(
      'name' => 'Yahoo!',
      'icon' => 'icon-yahoo fa fa-yahoo',
      'validation_pattern' => '*yahoo.com/*',
    ),
    'myspace' => array(
      'name' => 'Myspace',
      'icon' => 'icon-myspace fa fa-myspace',
      'validation_pattern' => '*myspace.com/*',
    ),
    'pinterest' => array(
      'name' => 'Pinterest',
      'icon' => 'icon-pinterest fa fa-pinterest',
      'validation_pattern' => '*pinterest.com/*',
    ),
    'reddit' => array(
      'name' => 'Reddit',
      'icon' => 'icon-reddit fa fa-reddit',
      'validation_pattern' => '*reddit.com/*',
    ),
    'slideshare' => array(
      'name' => 'Slideshare',
      'icon' => 'icon-slideshare fa fa-slideshare',
      'validation_pattern' => '*slideshare.net/*',
    ),
    'stumbleupon' => array(
      'name' => 'Stumbleupon',
      'icon' => 'icon-stumbleupon fa fa-stumbleupon',
      'validation_pattern' => '*stumbleupon.com/*',
    ),
  );
  $export['socialfield_services'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function helm_social_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable social_networks'.
  $permissions['create fieldable social_networks'] = array(
    'name' => 'create fieldable social_networks',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable social_networks'.
  $permissions['delete fieldable social_networks'] = array(
    'name' => 'delete fieldable social_networks',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable social_networks'.
  $permissions['edit fieldable social_networks'] = array(
    'name' => 'edit fieldable social_networks',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
