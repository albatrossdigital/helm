<?php
/**
 * @file
 * helm_event_categories.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function helm_event_categories_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Health & Fitness',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '24d9a5fd-0c52-4d26-bee3-75df39b8eaed',
    'vocabulary_machine_name' => 'event_category',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Hearings & Meetings',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '2a1aaf86-ee2e-4e33-8784-7e3045ab9b1d',
    'vocabulary_machine_name' => 'event_category',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Heritage & History',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '4b002af8-4551-43b1-9439-ddd8d0dc63fd',
    'vocabulary_machine_name' => 'event_category',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Seniors',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '72cee4b8-ef4f-471c-ae86-98583e3af01c',
    'vocabulary_machine_name' => 'event_category',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Parks & Nature',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '7fb42126-be3e-4dfc-ae72-dc49b5f6ce98',
    'vocabulary_machine_name' => 'event_category',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Kids & Family',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'b91bb65c-9488-4481-a6c3-72d6d0fdc0df',
    'vocabulary_machine_name' => 'event_category',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Volunteer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => 'e7c7b8e6-5555-4c1e-982d-d10ad645cbbd',
    'vocabulary_machine_name' => 'event_category',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Arts & Cultural',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fa7e8a23-bed1-4e68-82e9-d97f16106dfe',
    'vocabulary_machine_name' => 'event_category',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
