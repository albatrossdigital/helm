<?php
/**
 * @file
 * helm_faq.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function helm_faq_taxonomy_default_vocabularies() {
  return array(
    'faq_category' => array(
      'name' => 'FAQ Category',
      'machine_name' => 'faq_category',
      'description' => 'Organize FAQ entries',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
