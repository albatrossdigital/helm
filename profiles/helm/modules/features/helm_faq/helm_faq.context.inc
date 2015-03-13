<?php
/**
 * @file
 * helm_faq.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function helm_faq_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faq_category';
  $context->description = '';
  $context->tag = 'section';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'faq_category' => 'faq_category',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-faq_home-block_1' => array(
          'module' => 'views',
          'delta' => 'faq_home-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
          'title' => '',
        ),
      ),
    ),
    'theme' => array(
      'title' => 'How Do I?',
      'subtitle' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('section');
  $export['faq_category'] = $context;

  return $export;
}
