<?php
/**
 * @file
 * helm_home.features.uuid_fpp.inc
 */

/**
 * Implements hook_uuid_features_default_fpps().
 */
function helm_home_uuid_features_default_fpps() {
  $fpps = array();

  $fpps[] = array(
    'timestamp' => 1425600054,
    'title' => '',
    'log' => '',
    'bundle' => 'helm_carousel',
    'link' => 0,
    'path' => '',
    'reusable' => 1,
    'admin_title' => 'Home page carousel',
    'admin_description' => '',
    'category' => 'Reusable Content',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1418259041,
    'uuid' => '505af91d-8d63-42da-bf46-14d3eaac7473',
    'language' => 'und',
    'field_helm_carousel_slide' => array(
      'und' => array(),
    ),
    'rdf_mapping' => array(),
  );
  $fpps[] = array(
    'timestamp' => 1422485404,
    'title' => '',
    'log' => '',
    'bundle' => 'text',
    'link' => 0,
    'path' => '',
    'reusable' => 1,
    'admin_title' => 'Default Image and Link',
    'admin_description' => '',
    'category' => 'Reusable Content',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1418679180,
    'uuid' => '6d49f829-c1ce-4734-ae6b-b2d6bd6ec9f2',
    'language' => '',
    'field_basic_text_text' => array(
      'und' => array(
        0 => array(
          'value' => '<p><img alt="" height="363" src="http://placehold.it/600x363" width="600" /></p>

<h3 class="image-caption"><a href="http://albatrossdigital.com/">Albatross Digital</a></h3>
',
          'format' => 'filtered_html',
          'safe_value' => '<p><img alt="" height="363" src="http://placehold.it/600x363" width="600" /></p>

<a href="http://albatrossdigital.com/">Albatross Digital</a>',
        ),
      ),
    ),
    'rdf_mapping' => array(),
  );
  return $fpps;
}
