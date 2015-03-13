<?php
/**
 * @file
 * helm_news_categories.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function helm_news_categories_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'News Coverage',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '3ec780ee-00e2-4de0-bc09-445d2aa67bb6',
    'vocabulary_machine_name' => 'story_type',
    'field_term_header' => array(),
    'field_term_footer' => array(),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 0,
    ),
    'parent' => array(
      0 => 'b32d7c45-7979-4244-abbd-387641f9cb08',
    ),
  );
  $terms[] = array(
    'name' => 'Video',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 16,
    'uuid' => '5cca8a00-e977-4347-a791-d5b1cc2f8615',
    'vocabulary_machine_name' => 'story_type',
    'field_term_header' => array(),
    'field_term_footer' => array(),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Mayor',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 11,
    'uuid' => '66f8ce4b-76bc-470f-8314-7c9e5bcbb418',
    'vocabulary_machine_name' => 'story_type',
    'field_term_header' => array(),
    'field_term_footer' => array(),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Press Releases',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c7d6edd7-7788-4161-ba4f-168e823f02bd',
    'vocabulary_machine_name' => 'story_type',
    'field_term_header' => array(
      'und' => array(
        0 => array(
          'value' => '<p class="rtecenter"><em><strong>FOR IMMEDIATE RELEASE</strong></em></p>

<p class="rtecenter"><strong>Media Contact:</strong> Michael Schwartzberg, PIO</p>

<p class="rtecenter">O: (443) 984-2623 C: (443) 462-7939 E:&nbsp;<a href="mailto:michael.schwartzberg@baltimorecity.gov" style="color: rgb(65, 131, 196);">michael.schwartzberg@baltimorecity.gov</a></p>
',
          'format' => 'full_html',
          'safe_value' => '<p class="rtecenter"><em><strong>FOR IMMEDIATE RELEASE</strong></em></p>

<p class="rtecenter"><strong>Media Contact:</strong> Michael Schwartzberg, PIO</p>

<p class="rtecenter">O: (443) 984-2623 C: (443) 462-7939 E: <a href="mailto:michael.schwartzberg@baltimorecity.gov" style="color: rgb(65, 131, 196);">michael.schwartzberg@baltimorecity.gov</a></p>
',
        ),
      ),
    ),
    'field_term_footer' => array(
      'und' => array(
        0 => array(
          'value' => '<p class="rtecenter"><strong>###</strong></p>
',
          'format' => 'full_html',
          'safe_value' => '<p class="rtecenter"><strong>###</strong></p>
',
        ),
      ),
    ),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 0,
    ),
    'parent' => array(
      0 => 'b32d7c45-7979-4244-abbd-387641f9cb08',
    ),
  );
  return $terms;
}
