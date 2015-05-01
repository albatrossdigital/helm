<?php
/**
 * @file
 * helm_document.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function helm_document_taxonomy_default_vocabularies() {
  return array(
    'document_category' => array(
      'name' => 'Document Category',
      'machine_name' => 'document_category',
      'description' => 'Organizes documents',
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
