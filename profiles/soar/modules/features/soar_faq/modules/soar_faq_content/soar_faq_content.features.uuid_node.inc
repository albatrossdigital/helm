<?php
/**
 * @file
 * soar_faq_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function soar_faq_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'How do I pay my water bill?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'faq',
  'language' => 'en',
  'created' => 1422979714,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '906c00bb-4f69-4aa4-91fc-97e9829af6d3',
  'body' => array(),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 'f2d01c13-6276-43ef-b64f-0cbddf5f2fb2',
        'uuid' => 'f2d01c13-6276-43ef-b64f-0cbddf5f2fb2',
      ),
      1 => array(
        'tid' => '769aca12-ea52-4fe1-95f2-fe5d64316a03',
        'uuid' => '769aca12-ea52-4fe1-95f2-fe5d64316a03',
      ),
      2 => array(
        'tid' => '9acb9f8f-9e66-4bd4-b151-6b420d5efdd2',
        'uuid' => '9acb9f8f-9e66-4bd4-b151-6b420d5efdd2',
      ),
    ),
  ),
  'field_faq_tags' => array(),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-02-03 16:08:34 +0000',
  'user_uuid' => '3eb08d7a-4fcf-4210-bd61-0d24c0868f45',
);
  $nodes[] = array(
  'title' => 'What is the Wage Tax?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'faq',
  'language' => 'en',
  'created' => 1422979674,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a40fec09-78ef-4bef-ac9a-87d232355487',
  'body' => array(),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => '9acb9f8f-9e66-4bd4-b151-6b420d5efdd2',
        'uuid' => '9acb9f8f-9e66-4bd4-b151-6b420d5efdd2',
      ),
    ),
  ),
  'field_faq_tags' => array(),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-02-03 16:07:54 +0000',
  'user_uuid' => '3eb08d7a-4fcf-4210-bd61-0d24c0868f45',
);
  return $nodes;
}
