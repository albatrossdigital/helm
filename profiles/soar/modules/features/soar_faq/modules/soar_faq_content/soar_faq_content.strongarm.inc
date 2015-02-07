<?php
/**
 * @file
 * soar_faq_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function soar_faq_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_faq';
  $strongarm->value = '0';
  $export['language_content_type_faq'] = $strongarm;

  return $export;
}
