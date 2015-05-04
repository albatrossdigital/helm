<?php
/**
 * @file
 * helm_faq_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function helm_faq_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I dispute a ticket?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8e737932-695d-4133-85a6-2b5594dfe752',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770121,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0000f16e-9087-4cc6-b4b0-0d072cdea959',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Et harum quidem rerum facilis est et expedita distinctio. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. </p><ul><li>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia.</li><li>Lorem ipsum dolor sit amet, consectetur adipisicing elit.</li><li>Sed ut perspiciatis unde omnis iste natus error sit voluptatem.</li><li>Et harum quidem rerum facilis est et expedita distinctio.</li><li>Excepteur sint occaecat cupidatat non proident, sunt in culpa.</li><li>Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo.</li></ul><p>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Et harum quidem rerum facilis est et expedita distinctio. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 55,
        'uuid' => '99e48406-ac35-405e-8ed7-bceaafd8b250',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:08:41 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I get a copy of a birth certificate? ',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3390add2-953c-4f2d-ba80-7983134d3da5',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771048,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '04858eb9-8cdb-4255-983e-0b3b56876991',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Fugiat quo voluptas nulla pariatur? Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Et harum quidem rerum facilis est et expedita distinctio. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. </p><ul><li>Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit.</li><li>Fugiat quo voluptas nulla pariatur?</li><li>Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit.</li><li>Et harum quidem rerum facilis est et expedita distinctio.</li><li>Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt.</li><li>Sed ut perspiciatis unde omnis iste natus error sit voluptatem.</li></ul><p>Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Fugiat quo voluptas nulla pariatur? Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Et harum quidem rerum facilis est et expedita distinctio. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 59,
        'uuid' => 'd30f4c80-e397-43a6-81da-e55862c1cbe4',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:24:08 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I pay my property tax?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cd93925d-01dd-4bb1-a36b-3834c61a8f91',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771294,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0cac8f75-fb6a-4944-b0fe-6914e22b939c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Itaque earum rerum hic tenetur a sapiente delectus. </p><ul><li>Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae.</li><li>Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit.</li><li>Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat.</li><li>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia.</li><li>Excepteur sint occaecat cupidatat non proident, sunt in culpa.</li><li>Itaque earum rerum hic tenetur a sapiente delectus.</li></ul><p>Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Itaque earum rerum hic tenetur a sapiente delectus. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 31,
        'uuid' => 'e1b04f1c-0696-4c5d-bad9-b69b89140397',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:28:14 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I renew my vehicle registration?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0b943abc-eb19-4a73-8140-810587cdea37',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771848,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0f6528d5-946d-4f67-accf-890a7617283b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Animi, id est laborum et dolorum fuga. </p><p>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Animi, id est laborum et dolorum fuga. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
        'uuid' => '464b9f1b-4186-42ab-b4f0-9ace19080623',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:37:28 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How can I obtain a copy of the municipal code?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cf84c7be-2cc6-467f-93d2-15a4a06600d9',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770239,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '11b349de-b127-4ed0-90dc-2ea9799ce14d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Et harum quidem rerum facilis est et expedita distinctio. Totam rem aperiam. Fugiat quo voluptas nulla pariatur? Duis aute irure dolor in reprehenderit in voluptate velit. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Itaque earum rerum hic tenetur a sapiente delectus. </p><ul><li>Et harum quidem rerum facilis est et expedita distinctio.</li><li>Totam rem aperiam.</li><li>Fugiat quo voluptas nulla pariatur?</li><li>Duis aute irure dolor in reprehenderit in voluptate velit.</li><li>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo.</li><li>Itaque earum rerum hic tenetur a sapiente delectus.</li></ul><p>Et harum quidem rerum facilis est et expedita distinctio. Totam rem aperiam. Fugiat quo voluptas nulla pariatur? Duis aute irure dolor in reprehenderit in voluptate velit. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Itaque earum rerum hic tenetur a sapiente delectus. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
        'uuid' => '3675c02c-998f-4453-b59f-035f08a3041e',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:10:39 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I pay my property taxes?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8e9c7b25-5430-499f-a162-6e7377efe2b8',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430767870,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1726d1c5-2e86-4c0c-8db4-3ca3f3646520',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Eaque ipsa quae ab illo inventore veritatis et quasi. Duis aute irure dolor in reprehenderit in voluptate velit. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Itaque earum rerum hic tenetur a sapiente delectus. </p><ul><li>Eaque ipsa quae ab illo inventore veritatis et quasi.</li><li>Duis aute irure dolor in reprehenderit in voluptate velit.</li><li>Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus.</li><li>Do eiusmod tempor incididunt ut labore et dolore magna aliqua.</li><li>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo.</li><li>Itaque earum rerum hic tenetur a sapiente delectus.</li></ul><p>Eaque ipsa quae ab illo inventore veritatis et quasi. Duis aute irure dolor in reprehenderit in voluptate velit. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Itaque earum rerum hic tenetur a sapiente delectus. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 23,
        'uuid' => '9acb9f8f-9e66-4bd4-b151-6b420d5efdd2',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 19:31:10 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I pay my business taxes?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fdf19ace-eef4-485d-b3b0-27adf39ca51d',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430767983,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '19eeaa5f-c1e5-4e1e-8566-103ce9e6d443',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Qui officia deserunt mollit anim id est laborum. Laboris nisi ut aliquip ex ea commodo consequat. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Nihil molestiae consequatur, vel illum qui dolorem eum. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. </p><ul><li>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam.</li><li>Qui officia deserunt mollit anim id est laborum.</li><li>Laboris nisi ut aliquip ex ea commodo consequat.</li><li>Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit.</li><li>Nihil molestiae consequatur, vel illum qui dolorem eum.</li><li>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam.</li></ul><p>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Qui officia deserunt mollit anim id est laborum. Laboris nisi ut aliquip ex ea commodo consequat. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Nihil molestiae consequatur, vel illum qui dolorem eum. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 36,
        'uuid' => 'f2d01c13-6276-43ef-b64f-0cbddf5f2fb2',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 19:33:03 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I file for a liquor license?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '330af681-4121-4160-93f2-32c4d1b29831',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771023,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1b955fe5-cae6-4fad-b4de-77cb9e9a9269',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Architecto beatae vitae dicta sunt explicabo. Qui officia deserunt mollit anim id est laborum. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Ut enim ad minim veniam, quis nostrud exercitation ullamco. Et harum quidem rerum facilis est et expedita distinctio. Architecto beatae vitae dicta sunt explicabo. </p><p>Architecto beatae vitae dicta sunt explicabo. Qui officia deserunt mollit anim id est laborum. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Ut enim ad minim veniam, quis nostrud exercitation ullamco. Et harum quidem rerum facilis est et expedita distinctio. Architecto beatae vitae dicta sunt explicabo. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 24,
        'uuid' => 'a991e6f6-1ed3-4ffa-833e-1c25f37afb8a',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:23:43 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I get a carbon monoxide test?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4990437b-99e6-49a5-b49c-c8c540857672',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771356,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1c2bd0be-1b74-4353-b27a-f988c5d762f0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Eaque ipsa quae ab illo inventore veritatis et quasi. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Eaque ipsa quae ab illo inventore veritatis et quasi. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. </p><ul><li>Eaque ipsa quae ab illo inventore veritatis et quasi.</li><li>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia.</li><li>Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat.</li><li>Eaque ipsa quae ab illo inventore veritatis et quasi.</li><li>Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae.</li><li>Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit.</li></ul><p>Eaque ipsa quae ab illo inventore veritatis et quasi. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Eaque ipsa quae ab illo inventore veritatis et quasi. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 28,
        'uuid' => 'cf0ea6b1-5095-4e36-ad3b-ab28ee98268e',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:29:16 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I get a license?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c0d2acdb-9c60-4303-bc31-e8416b1b492e',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771815,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1efbf75b-1db2-4b67-bf0f-1545f7cf7711',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Qui officia deserunt mollit anim id est laborum. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Eaque ipsa quae ab illo inventore veritatis et quasi. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. </p><p>Qui officia deserunt mollit anim id est laborum. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Eaque ipsa quae ab illo inventore veritatis et quasi. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
        'uuid' => '464b9f1b-4186-42ab-b4f0-9ace19080623',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:36:55 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'What are my tenant rights?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6435a1c8-2307-4db8-b59c-b6121aecc184',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771318,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1fd378d5-1f09-44dc-984c-8c034135b908',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Esse cillum dolore eu fugiat nulla pariatur. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. At vero eos et accusamus. </p><ul><li>Do eiusmod tempor incididunt ut labore et dolore magna aliqua.</li><li>Esse cillum dolore eu fugiat nulla pariatur.</li><li>Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae.</li><li>Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit.</li><li>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo.</li><li>At vero eos et accusamus.</li></ul><p>Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Esse cillum dolore eu fugiat nulla pariatur. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. At vero eos et accusamus. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 9,
        'uuid' => '18fded4c-5a25-4a8e-ab68-44adc1964288',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:28:38 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I apply for a City job?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b4bc444b-96cc-44e5-95f1-692d98daba39',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430765930,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '20dc940c-6e00-436b-a569-a0b65a9670c0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Totam rem aperiam. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Animi, id est laborum et dolorum fuga. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Nihil molestiae consequatur, vel illum qui dolorem eum. Nihil molestiae consequatur, vel illum qui dolorem eum. </p><p>Totam rem aperiam. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Animi, id est laborum et dolorum fuga. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Nihil molestiae consequatur, vel illum qui dolorem eum. Nihil molestiae consequatur, vel illum qui dolorem eum. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 52,
        'uuid' => 'acee9889-147b-4455-a784-1b24502fc6f8',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 18:58:50 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I get my pet licensed?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b78ac79c-5429-415d-994a-50385e9a876a',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770994,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '21fae09b-2683-414e-8422-4bff237a47c5',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Eaque ipsa quae ab illo inventore veritatis et quasi. Totam rem aperiam. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Totam rem aperiam. Excepteur sint occaecat cupidatat non proident, sunt in culpa. </p><ul><li>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam.</li><li>Eaque ipsa quae ab illo inventore veritatis et quasi.</li><li>Totam rem aperiam.</li><li>Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo.</li><li>Totam rem aperiam.</li><li>Excepteur sint occaecat cupidatat non proident, sunt in culpa.</li></ul><p>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Eaque ipsa quae ab illo inventore veritatis et quasi. Totam rem aperiam. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Totam rem aperiam. Excepteur sint occaecat cupidatat non proident, sunt in culpa. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 24,
        'uuid' => 'a991e6f6-1ed3-4ffa-833e-1c25f37afb8a',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:23:14 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'What are the City dog ordanances?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c6057def-3981-4515-9fc6-aa9ccc599954',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770444,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '258f5a99-afb7-445b-aa56-79f9e45f6ebb',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Laboris nisi ut aliquip ex ea commodo consequat. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Laboris nisi ut aliquip ex ea commodo consequat. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Totam rem aperiam. Itaque earum rerum hic tenetur a sapiente delectus. </p><p>Laboris nisi ut aliquip ex ea commodo consequat. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Laboris nisi ut aliquip ex ea commodo consequat. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Totam rem aperiam. Itaque earum rerum hic tenetur a sapiente delectus. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
        'uuid' => '3675c02c-998f-4453-b59f-035f08a3041e',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:14:04 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I report Housing Code violations?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0db1fe07-9fe7-4021-acb5-502c551d6e57',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771264,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '28cb6de3-ba8d-4477-a973-2749f077c75d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Qui officia deserunt mollit anim id est laborum. </p><p>Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Qui officia deserunt mollit anim id est laborum. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 39,
        'uuid' => 'fa8ab3c1-1374-44b4-914f-88c7f9f8a161',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:27:44 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Where can I find a list of upcoming concerts and cultural events?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f43a8864-aafa-4980-99b2-1b2d7ff6def7',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770301,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '35458940-201a-4853-8e26-50910d5f01c0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Esse cillum dolore eu fugiat nulla pariatur. Nihil molestiae consequatur, vel illum qui dolorem eum. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Nihil molestiae consequatur, vel illum qui dolorem eum. Esse cillum dolore eu fugiat nulla pariatur. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. </p><ul><li>Esse cillum dolore eu fugiat nulla pariatur.</li><li>Nihil molestiae consequatur, vel illum qui dolorem eum.</li><li>Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat.</li><li>Nihil molestiae consequatur, vel illum qui dolorem eum.</li><li>Esse cillum dolore eu fugiat nulla pariatur.</li><li>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam.</li></ul><p>Esse cillum dolore eu fugiat nulla pariatur. Nihil molestiae consequatur, vel illum qui dolorem eum. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Nihil molestiae consequatur, vel illum qui dolorem eum. Esse cillum dolore eu fugiat nulla pariatur. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 33,
        'uuid' => 'f1871c14-c7a1-45ab-a216-c5acaba4fff2',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:11:41 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I pay a sewage bill?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e58ee7b0-37ee-4d9f-bb14-90628376e5dc',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430769771,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '45164c12-2c26-4949-97bb-5a3da3b78a75',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Architecto beatae vitae dicta sunt explicabo. Qui officia deserunt mollit anim id est laborum. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Itaque earum rerum hic tenetur a sapiente delectus. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Corrupti quos dolores et quas molestias excepturi sint occaecati. </p><p>Architecto beatae vitae dicta sunt explicabo. Qui officia deserunt mollit anim id est laborum. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Itaque earum rerum hic tenetur a sapiente delectus. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Corrupti quos dolores et quas molestias excepturi sint occaecati. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 22,
        'uuid' => '769aca12-ea52-4fe1-95f2-fe5d64316a03',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:02:51 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I find out about a delinquent property tax?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6ec93557-db1e-4c41-bfa3-7361f7243a6e',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430769986,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4a4dca59-f44f-444d-ba73-911b10c6521f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Esse cillum dolore eu fugiat nulla pariatur. Fugiat quo voluptas nulla pariatur? Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Ut enim ad minim veniam, quis nostrud exercitation ullamco. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Itaque earum rerum hic tenetur a sapiente delectus. </p><ul><li>Esse cillum dolore eu fugiat nulla pariatur.</li><li>Fugiat quo voluptas nulla pariatur?</li><li>Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque.</li><li>Ut enim ad minim veniam, quis nostrud exercitation ullamco.</li><li>Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit.</li><li>Itaque earum rerum hic tenetur a sapiente delectus.</li></ul><p>Esse cillum dolore eu fugiat nulla pariatur. Fugiat quo voluptas nulla pariatur? Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Ut enim ad minim veniam, quis nostrud exercitation ullamco. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Itaque earum rerum hic tenetur a sapiente delectus. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:06:26 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I report a food safety concern?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '39023f03-c7ff-4fd7-b885-46dccdc689e9',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771374,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4f86a4d6-075a-4463-9722-f5488dca3e19',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Et harum quidem rerum facilis est et expedita distinctio. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Eaque ipsa quae ab illo inventore veritatis et quasi. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Ut enim ad minim veniam, quis nostrud exercitation ullamco. </p><p>Et harum quidem rerum facilis est et expedita distinctio. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Eaque ipsa quae ab illo inventore veritatis et quasi. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Ut enim ad minim veniam, quis nostrud exercitation ullamco. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 40,
        'uuid' => 'fb3ea87c-49c2-4717-b436-13fb8b80f156',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:29:34 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I find a hospital?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'eadc3065-1d88-4c9d-9d80-b8aef25146c2',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771433,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '51a7a5b9-4c4a-41a2-b646-2f563f3aa2ae',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Qui officia deserunt mollit anim id est laborum. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Corrupti quos dolores et quas molestias excepturi sint occaecati. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Totam rem aperiam. </p><ul><li>Do eiusmod tempor incididunt ut labore et dolore magna aliqua.</li><li>Qui officia deserunt mollit anim id est laborum.</li><li>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia.</li><li>Corrupti quos dolores et quas molestias excepturi sint occaecati.</li><li>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam.</li><li>Totam rem aperiam.</li></ul><p>Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Qui officia deserunt mollit anim id est laborum. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Corrupti quos dolores et quas molestias excepturi sint occaecati. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Totam rem aperiam. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 57,
        'uuid' => '31f46534-e107-46e9-a79b-dd7f0e7fc02f',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:30:33 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'When is street sweeping on my block?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3a5c8c89-05d1-4649-9b2c-c0edbc440083',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771885,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '541a8639-7162-4bf2-b9d3-7f38af3f1c72',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Architecto beatae vitae dicta sunt explicabo. Itaque earum rerum hic tenetur a sapiente delectus. Fugiat quo voluptas nulla pariatur? Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. </p><p>Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Architecto beatae vitae dicta sunt explicabo. Itaque earum rerum hic tenetur a sapiente delectus. Fugiat quo voluptas nulla pariatur? Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 38,
        'uuid' => 'f6dc2868-2389-4650-b2cb-afd315eba93e',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:38:05 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Where do I report for jury duty?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5b2b6309-ee1a-40de-9a6c-8f0f686972a8',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770761,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '56712b63-d76d-4756-bff0-977ca77ac160',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Totam rem aperiam. Et harum quidem rerum facilis est et expedita distinctio. Esse cillum dolore eu fugiat nulla pariatur. Et harum quidem rerum facilis est et expedita distinctio. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. </p><ul><li>Totam rem aperiam.</li><li>Et harum quidem rerum facilis est et expedita distinctio.</li><li>Esse cillum dolore eu fugiat nulla pariatur.</li><li>Et harum quidem rerum facilis est et expedita distinctio.</li><li>Sed ut perspiciatis unde omnis iste natus error sit voluptatem.</li><li>Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit.</li></ul><p>Totam rem aperiam. Et harum quidem rerum facilis est et expedita distinctio. Esse cillum dolore eu fugiat nulla pariatur. Et harum quidem rerum facilis est et expedita distinctio. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 64,
        'uuid' => 'e8b896f6-c1a8-4d5c-82da-438b00b97ff7',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:19:21 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Who do I call about police-related non-emergencies?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fac3198f-d5c6-4d35-9d06-8c4b5a4f7089',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770736,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5c242eff-985d-41d8-a780-c20641fbf796',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Architecto beatae vitae dicta sunt explicabo. Itaque earum rerum hic tenetur a sapiente delectus. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. </p><ul><li>Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque.</li><li>Do eiusmod tempor incididunt ut labore et dolore magna aliqua.</li><li>Architecto beatae vitae dicta sunt explicabo.</li><li>Itaque earum rerum hic tenetur a sapiente delectus.</li><li>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia.</li><li>Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam.</li></ul><p>Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Architecto beatae vitae dicta sunt explicabo. Itaque earum rerum hic tenetur a sapiente delectus. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 66,
        'uuid' => '372b95b3-dbd8-4ef3-9dbf-7f8431e31d79',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:18:56 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I enroll my child in school?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b6413a77-f76f-43cb-90a2-3e3b4449ee65',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770578,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6122d81b-3c66-4bf8-90bc-e8ac64f80ac6',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Laboris nisi ut aliquip ex ea commodo consequat. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Nihil molestiae consequatur, vel illum qui dolorem eum. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Duis aute irure dolor in reprehenderit in voluptate velit. Laboris nisi ut aliquip ex ea commodo consequat. </p><p>Laboris nisi ut aliquip ex ea commodo consequat. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Nihil molestiae consequatur, vel illum qui dolorem eum. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Duis aute irure dolor in reprehenderit in voluptate velit. Laboris nisi ut aliquip ex ea commodo consequat. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 65,
        'uuid' => '3b0a13a6-2e27-41d5-85d2-c7e55fdb2498',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:16:18 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I pay my income taxes?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1669aa5e-0d94-4d73-ae23-d13113afb060',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430766892,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '619098a0-a637-4dce-82f7-3c66f3835ab7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Fugiat quo voluptas nulla pariatur? At vero eos et accusamus. Nihil molestiae consequatur, vel illum qui dolorem eum. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. </p><p>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Fugiat quo voluptas nulla pariatur? At vero eos et accusamus. Nihil molestiae consequatur, vel illum qui dolorem eum. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 23,
        'uuid' => '9acb9f8f-9e66-4bd4-b151-6b420d5efdd2',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 19:14:52 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I find my bus route/schedule?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4820ac48-c2af-4d98-81ff-950dc9202e03',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771685,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '721e56c8-ac9f-4acd-aef9-f9cad6c6fce5',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Fugiat quo voluptas nulla pariatur? Architecto beatae vitae dicta sunt explicabo. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Itaque earum rerum hic tenetur a sapiente delectus. Qui officia deserunt mollit anim id est laborum. Eaque ipsa quae ab illo inventore veritatis et quasi. </p><ul><li>Fugiat quo voluptas nulla pariatur?</li><li>Architecto beatae vitae dicta sunt explicabo.</li><li>Excepteur sint occaecat cupidatat non proident, sunt in culpa.</li><li>Itaque earum rerum hic tenetur a sapiente delectus.</li><li>Qui officia deserunt mollit anim id est laborum.</li><li>Eaque ipsa quae ab illo inventore veritatis et quasi.</li></ul><p>Fugiat quo voluptas nulla pariatur? Architecto beatae vitae dicta sunt explicabo. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Itaque earum rerum hic tenetur a sapiente delectus. Qui officia deserunt mollit anim id est laborum. Eaque ipsa quae ab illo inventore veritatis et quasi. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 56,
        'uuid' => '121642b2-4f1b-4b14-884d-37935c12f53f',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:34:45 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I find out about a delinquent property tax?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '861b1c8d-abcd-4f45-b2c9-0ea6792ad26b',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770043,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '728b31fb-625c-4968-990d-4d077656001b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Fugiat quo voluptas nulla pariatur? Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. </p><ul><li>Fugiat quo voluptas nulla pariatur?</li><li>Do eiusmod tempor incididunt ut labore et dolore magna aliqua.</li><li>Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem.</li><li>Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt.</li><li>Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque.</li><li>Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus.</li></ul><p>Fugiat quo voluptas nulla pariatur? Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 54,
        'uuid' => '451475d4-c3a9-49fd-8139-18519c5d4590',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:07:23 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Who do I call to reserve a park facility?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '71da349f-7cff-4fa7-b568-e2d8a96db3dd',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770266,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '74bc6d63-7d6b-48c8-b7c2-f61c0b786f2f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Duis aute irure dolor in reprehenderit in voluptate velit. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. </p><ul><li>Duis aute irure dolor in reprehenderit in voluptate velit.</li><li>Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat.</li><li>Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt.</li><li>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia.</li><li>Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque.</li><li>Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque.</li></ul><p>Duis aute irure dolor in reprehenderit in voluptate velit. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 34,
        'uuid' => 'f1b48d65-9731-4146-b881-4d60e256a84b',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:11:06 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Where is my nearest DMV?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '631220bf-1848-4278-b42b-0fe68958aa7e',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771833,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '783141b6-6520-4ac4-b555-efd2d0cd0a3f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Totam rem aperiam. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Duis aute irure dolor in reprehenderit in voluptate velit. Totam rem aperiam. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Totam rem aperiam. </p><ul><li>Totam rem aperiam.</li><li>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia.</li><li>Duis aute irure dolor in reprehenderit in voluptate velit.</li><li>Totam rem aperiam.</li><li>Do eiusmod tempor incididunt ut labore et dolore magna aliqua.</li><li>Totam rem aperiam.</li></ul><p>Totam rem aperiam. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Duis aute irure dolor in reprehenderit in voluptate velit. Totam rem aperiam. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Totam rem aperiam. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
        'uuid' => '464b9f1b-4186-42ab-b4f0-9ace19080623',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:37:13 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Who do I call when my garbage has not been picked up?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '57d98ccc-0cd9-499a-ae5d-78ce6885d979',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770826,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '81bd88f3-b150-4034-85ea-8b7b61cc05c4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Corrupti quos dolores et quas molestias excepturi sint occaecati. Et harum quidem rerum facilis est et expedita distinctio. Ut enim ad minim veniam, quis nostrud exercitation ullamco. Qui officia deserunt mollit anim id est laborum. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. </p><p>Corrupti quos dolores et quas molestias excepturi sint occaecati. Et harum quidem rerum facilis est et expedita distinctio. Ut enim ad minim veniam, quis nostrud exercitation ullamco. Qui officia deserunt mollit anim id est laborum. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 63,
        'uuid' => '2bf66ce3-3715-441f-9561-aaa034926f95',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:20:26 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I start a business in the City?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9e9b1c6d-b09c-4a64-8f02-bb6cebc488ec',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430773733,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '898a31f8-0561-448c-8a79-b5f7230f48ab',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Et harum quidem rerum facilis est et expedita distinctio. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Corrupti quos dolores et quas molestias excepturi sint occaecati. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. </p><p>Et harum quidem rerum facilis est et expedita distinctio. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Corrupti quos dolores et quas molestias excepturi sint occaecati. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. </p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Et harum quidem rerum facilis est et expedita distinctio. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Corrupti quos dolores et quas molestias excepturi sint occaecati. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. </p><p>Et harum quidem rerum facilis est et expedita distinctio. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Corrupti quos dolores et quas molestias excepturi sint occaecati. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. </p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 32,
        'uuid' => 'eb664713-2564-4083-8ef6-981ae2cfbb3b',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 21:08:53 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I get a marriage license?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '19f23831-ffd6-4405-8a26-b7961fbe686f',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771067,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8ace04c8-0948-4c88-b752-d776b651c2d4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Totam rem aperiam. Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. At vero eos et accusamus. Laboris nisi ut aliquip ex ea commodo consequat. Et harum quidem rerum facilis est et expedita distinctio. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. </p><p>Totam rem aperiam. Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. At vero eos et accusamus. Laboris nisi ut aliquip ex ea commodo consequat. Et harum quidem rerum facilis est et expedita distinctio. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
        'uuid' => '5b9a23ab-d3cd-40a2-a28e-06cafc92834e',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:24:27 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I get around the City?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '233ed1bf-a190-47d4-a17c-533b2d8692c7',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771660,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8dc80e0a-5b47-4e3f-b0f0-2cd985eea91f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Excepteur sint occaecat cupidatat non proident, sunt in culpa. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Fugiat quo voluptas nulla pariatur? Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Laboris nisi ut aliquip ex ea commodo consequat. Fugiat quo voluptas nulla pariatur? </p><ul><li>Excepteur sint occaecat cupidatat non proident, sunt in culpa.</li><li>Sed ut perspiciatis unde omnis iste natus error sit voluptatem.</li><li>Fugiat quo voluptas nulla pariatur?</li><li>Sed ut perspiciatis unde omnis iste natus error sit voluptatem.</li><li>Laboris nisi ut aliquip ex ea commodo consequat.</li><li>Fugiat quo voluptas nulla pariatur?</li></ul><p>Excepteur sint occaecat cupidatat non proident, sunt in culpa. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Fugiat quo voluptas nulla pariatur? Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Laboris nisi ut aliquip ex ea commodo consequat. Fugiat quo voluptas nulla pariatur? </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 56,
        'uuid' => '121642b2-4f1b-4b14-884d-37935c12f53f',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:34:20 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'How do I pay my water bill?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '08f023d1-a502-411b-a1a3-af60908fd382',
  'type' => 'faq',
  'language' => 'en',
  'created' => 1422979714,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '906c00bb-4f69-4aa4-91fc-97e9829af6d3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Eaque ipsa quae ab illo inventore veritatis et quasi. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Laboris nisi ut aliquip ex ea commodo consequat. Animi, id est laborum et dolorum fuga. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. </p><p>Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Eaque ipsa quae ab illo inventore veritatis et quasi. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Laboris nisi ut aliquip ex ea commodo consequat. Animi, id est laborum et dolorum fuga. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 36,
        'uuid' => 'f2d01c13-6276-43ef-b64f-0cbddf5f2fb2',
      ),
      1 => array(
        'tid' => 22,
        'uuid' => '769aca12-ea52-4fe1-95f2-fe5d64316a03',
      ),
      2 => array(
        'tid' => 23,
        'uuid' => '9acb9f8f-9e66-4bd4-b151-6b420d5efdd2',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:12:"admin_select";s:10:"admin_menu";s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-02-03 16:08:34 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'What are the municipal RideShare regulations?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '82a61501-82ad-4014-9aab-125ef98d30de',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430373398,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9c59b24e-2544-458f-b0e0-338c0d63a69a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nihil molestiae consequatur, vel illum qui dolorem eum. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Qui officia deserunt mollit anim id est laborum. Nihil molestiae consequatur, vel illum qui dolorem eum. Lorem ipsum dolor sit amet, consectetur adipisicing elit. </p><p>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nihil molestiae consequatur, vel illum qui dolorem eum. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Qui officia deserunt mollit anim id est laborum. Nihil molestiae consequatur, vel illum qui dolorem eum. Lorem ipsum dolor sit amet, consectetur adipisicing elit. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
        'uuid' => '464b9f1b-4186-42ab-b4f0-9ace19080623',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 44,
        'uuid' => 'c7c2cba2-aa6f-4140-91ac-ab8b406e77dd',
      ),
      1 => array(
        'tid' => 45,
        'uuid' => '63318340-7d66-4d19-866a-09004a47beb0',
      ),
    ),
  ),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:12:"admin_select";s:10:"admin_menu";s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-04-30 05:56:38 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I file a police report?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a887ad72-ff9b-449a-bf45-95d18d9fb525',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770704,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9c89dbf8-57cb-476b-80d7-4ca20709a464',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Architecto beatae vitae dicta sunt explicabo. Fugiat quo voluptas nulla pariatur? Nihil molestiae consequatur, vel illum qui dolorem eum. At vero eos et accusamus. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. </p><ul><li>Do eiusmod tempor incididunt ut labore et dolore magna aliqua.</li><li>Architecto beatae vitae dicta sunt explicabo.</li><li>Fugiat quo voluptas nulla pariatur?</li><li>Nihil molestiae consequatur, vel illum qui dolorem eum.</li><li>At vero eos et accusamus.</li><li>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo.</li></ul><p>Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Architecto beatae vitae dicta sunt explicabo. Fugiat quo voluptas nulla pariatur? Nihil molestiae consequatur, vel illum qui dolorem eum. At vero eos et accusamus. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 66,
        'uuid' => '372b95b3-dbd8-4ef3-9dbf-7f8431e31d79',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:18:24 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I apply for public housing?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1dca9b27-323c-49fb-b267-5c4293bce1e3',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771242,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9e7aeb59-6bff-414e-a1d8-f8b36158779d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Nihil molestiae consequatur, vel illum qui dolorem eum. Laboris nisi ut aliquip ex ea commodo consequat. Qui officia deserunt mollit anim id est laborum. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Animi, id est laborum et dolorum fuga. </p><p>Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Nihil molestiae consequatur, vel illum qui dolorem eum. Laboris nisi ut aliquip ex ea commodo consequat. Qui officia deserunt mollit anim id est laborum. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Animi, id est laborum et dolorum fuga. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 58,
        'uuid' => 'b1e56fac-fa89-49ae-97dc-c91e3140fa96',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:27:22 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'What benefits does the City offer?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd8e3fbd5-2a09-42df-922b-678d4d655ef7',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430766062,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a21e77bc-ec01-4b03-ac5e-694784b5514f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Nihil molestiae consequatur, vel illum qui dolorem eum. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Corrupti quos dolores et quas molestias excepturi sint occaecati. Animi, id est laborum et dolorum fuga. </p><p>Nihil molestiae consequatur, vel illum qui dolorem eum. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Corrupti quos dolores et quas molestias excepturi sint occaecati. Animi, id est laborum et dolorum fuga. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 52,
        'uuid' => 'acee9889-147b-4455-a784-1b24502fc6f8',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 19:01:02 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'What is the Wage Tax?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0a742162-27c4-4e6b-ad31-af460343d3ed',
  'type' => 'faq',
  'language' => 'en',
  'created' => 1422979674,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a40fec09-78ef-4bef-ac9a-87d232355487',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Esse cillum dolore eu fugiat nulla pariatur. Laboris nisi ut aliquip ex ea commodo consequat. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Totam rem aperiam. </p><ul><li>Esse cillum dolore eu fugiat nulla pariatur.</li><li>Laboris nisi ut aliquip ex ea commodo consequat.</li><li>Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam.</li><li>Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia.</li><li>Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo.</li><li>Totam rem aperiam.</li></ul><p>Esse cillum dolore eu fugiat nulla pariatur. Laboris nisi ut aliquip ex ea commodo consequat. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Totam rem aperiam. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 23,
        'uuid' => '9acb9f8f-9e66-4bd4-b151-6b420d5efdd2',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:12:"admin_select";s:10:"admin_menu";s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-02-03 16:07:54 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I reserve a park facility?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '06441d96-972c-4891-8e7a-055c892b83d0',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770940,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a9cf8f76-a453-424a-ba89-f7a964905212',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Qui officia deserunt mollit anim id est laborum. Architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Corrupti quos dolores et quas molestias excepturi sint occaecati. </p><p>Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Qui officia deserunt mollit anim id est laborum. Architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Corrupti quos dolores et quas molestias excepturi sint occaecati. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 60,
        'uuid' => 'd7a18a65-ea2c-4b53-93ed-2b3124e7ed0a',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:22:20 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I dispose of paints and chemicals?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6ad1e09c-7f6c-4030-9e2c-a1bea052ab36',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770806,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ae5a747f-2e2f-4980-b2b1-92550b8cc76c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Esse cillum dolore eu fugiat nulla pariatur. Architecto beatae vitae dicta sunt explicabo. Itaque earum rerum hic tenetur a sapiente delectus. Ut enim ad minim veniam, quis nostrud exercitation ullamco. </p><p>Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Esse cillum dolore eu fugiat nulla pariatur. Architecto beatae vitae dicta sunt explicabo. Itaque earum rerum hic tenetur a sapiente delectus. Ut enim ad minim veniam, quis nostrud exercitation ullamco. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 63,
        'uuid' => '2bf66ce3-3715-441f-9561-aaa034926f95',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:20:06 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'What are zoning restrictions in the city?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c34d44ea-c518-4cf2-a338-5d5953d55890',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770387,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b63beef3-ce22-420f-bba0-0cc7ab57968d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Qui officia deserunt mollit anim id est laborum. Itaque earum rerum hic tenetur a sapiente delectus. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Qui officia deserunt mollit anim id est laborum. Laboris nisi ut aliquip ex ea commodo consequat. Et harum quidem rerum facilis est et expedita distinctio. </p><ul><li>Qui officia deserunt mollit anim id est laborum.</li><li>Itaque earum rerum hic tenetur a sapiente delectus.</li><li>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo.</li><li>Qui officia deserunt mollit anim id est laborum.</li><li>Laboris nisi ut aliquip ex ea commodo consequat.</li><li>Et harum quidem rerum facilis est et expedita distinctio.</li></ul><p>Qui officia deserunt mollit anim id est laborum. Itaque earum rerum hic tenetur a sapiente delectus. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Qui officia deserunt mollit anim id est laborum. Laboris nisi ut aliquip ex ea commodo consequat. Et harum quidem rerum facilis est et expedita distinctio. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
        'uuid' => '3675c02c-998f-4453-b59f-035f08a3041e',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:13:07 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I pay a parking ticket?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '610ae047-1026-49ea-b0ea-b7a24b0aeb22',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770085,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b744dc75-e543-4229-b06b-d52fb3e2d135',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Corrupti quos dolores et quas molestias excepturi sint occaecati. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Eaque ipsa quae ab illo inventore veritatis et quasi. Laboris nisi ut aliquip ex ea commodo consequat. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. </p><ul><li>Corrupti quos dolores et quas molestias excepturi sint occaecati.</li><li>Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat.</li><li>Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo.</li><li>Eaque ipsa quae ab illo inventore veritatis et quasi.</li><li>Laboris nisi ut aliquip ex ea commodo consequat.</li><li>Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat.</li></ul><p>Corrupti quos dolores et quas molestias excepturi sint occaecati. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Eaque ipsa quae ab illo inventore veritatis et quasi. Laboris nisi ut aliquip ex ea commodo consequat. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 55,
        'uuid' => '99e48406-ac35-405e-8ed7-bceaafd8b250',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:08:05 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Is there a public swimming pool?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ed24ab03-e3f3-4793-89be-2ae18b4ad57e',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770190,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bf118b1d-b2ea-4b43-8148-3dfae6b0c186',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Corrupti quos dolores et quas molestias excepturi sint occaecati. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Et harum quidem rerum facilis est et expedita distinctio. Lorem ipsum dolor sit amet, consectetur adipisicing elit. </p><p>Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Corrupti quos dolores et quas molestias excepturi sint occaecati. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Et harum quidem rerum facilis est et expedita distinctio. Lorem ipsum dolor sit amet, consectetur adipisicing elit. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 34,
        'uuid' => 'f1b48d65-9731-4146-b881-4d60e256a84b',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 67,
        'uuid' => '7fe0dd50-0bed-49fe-9da3-03d2c3ea117d',
      ),
    ),
  ),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:09:50 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I apply to Community College?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '26a8ab06-f1cb-4772-a078-3eb9cfcbe2b9',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770556,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c4fdd360-549a-40ff-be5d-9df113106618',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Corrupti quos dolores et quas molestias excepturi sint occaecati. Esse cillum dolore eu fugiat nulla pariatur. Et harum quidem rerum facilis est et expedita distinctio. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. </p><p>Corrupti quos dolores et quas molestias excepturi sint occaecati. Esse cillum dolore eu fugiat nulla pariatur. Et harum quidem rerum facilis est et expedita distinctio. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 65,
        'uuid' => '3b0a13a6-2e27-41d5-85d2-c7e55fdb2498',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:15:56 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Does the City require a business license?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e2dd36a6-3c25-4cec-be55-5c2b39409b6e',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430773681,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c53a8c6b-0551-431e-be7a-fd6f9ad242a2',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Excepteur sint occaecat cupidatat non proident, sunt in culpa. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Qui officia deserunt mollit anim id est laborum. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Animi, id est laborum et dolorum fuga. </p><ul><li>Excepteur sint occaecat cupidatat non proident, sunt in culpa.</li><li>Excepteur sint occaecat cupidatat non proident, sunt in culpa.</li><li>Qui officia deserunt mollit anim id est laborum.</li><li>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo.</li><li>Do eiusmod tempor incididunt ut labore et dolore magna aliqua.</li><li>Animi, id est laborum et dolorum fuga.</li></ul><p>Excepteur sint occaecat cupidatat non proident, sunt in culpa. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Qui officia deserunt mollit anim id est laborum. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Animi, id est laborum et dolorum fuga. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 32,
        'uuid' => 'eb664713-2564-4083-8ef6-981ae2cfbb3b',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 21:08:01 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I pay a parking ticket?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5f365eb4-ae55-4f54-a376-2ad4266154e3',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770878,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd543aad8-68ee-4d6a-ba81-bae027e57889',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. </p><p>Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Excepteur sint occaecat cupidatat non proident, sunt in culpa. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 62,
        'uuid' => 'a269949d-2b6a-45a1-bbeb-e3fd07850edc',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:21:18 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I pay my business taxes?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '726abf72-fb7f-4fcc-bd5e-5fbd1c14389e',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770180,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dd1b8948-a9fe-4484-8d94-e6eb50a56919',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Animi, id est laborum et dolorum fuga. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Esse cillum dolore eu fugiat nulla pariatur. Eaque ipsa quae ab illo inventore veritatis et quasi. </p><ul><li>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo.</li><li>Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam.</li><li>Animi, id est laborum et dolorum fuga.</li><li>Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat.</li><li>Esse cillum dolore eu fugiat nulla pariatur.</li><li>Eaque ipsa quae ab illo inventore veritatis et quasi.</li></ul><p>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Animi, id est laborum et dolorum fuga. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Esse cillum dolore eu fugiat nulla pariatur. Eaque ipsa quae ab illo inventore veritatis et quasi. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 36,
        'uuid' => 'f2d01c13-6276-43ef-b64f-0cbddf5f2fb2',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:09:40 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I test my drinking water?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '46e611c2-b83e-4e2b-8076-d25f26f93d5c',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771408,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dfefe9d5-cfe0-42cb-8bee-71257d8382a3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Itaque earum rerum hic tenetur a sapiente delectus. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Animi, id est laborum et dolorum fuga. </p><ul><li>Itaque earum rerum hic tenetur a sapiente delectus.</li><li>Lorem ipsum dolor sit amet, consectetur adipisicing elit.</li><li>Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam.</li><li>Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit.</li><li>Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat.</li><li>Animi, id est laborum et dolorum fuga.</li></ul><p>Itaque earum rerum hic tenetur a sapiente delectus. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Animi, id est laborum et dolorum fuga. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 25,
        'uuid' => 'a99fb3ed-8e22-4adf-81c8-e1a2a2f9dae5',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:30:08 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I find my trash and recycling pickup day?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5bc0372c-a871-40f5-a8e7-e003f5ee285e',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770850,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e0f49bb5-fc8b-48f7-9d75-0bef4b91f3a2',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Laboris nisi ut aliquip ex ea commodo consequat. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Esse cillum dolore eu fugiat nulla pariatur. Animi, id est laborum et dolorum fuga. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. </p><ul><li>Laboris nisi ut aliquip ex ea commodo consequat.</li><li>Lorem ipsum dolor sit amet, consectetur adipisicing elit.</li><li>Esse cillum dolore eu fugiat nulla pariatur.</li><li>Animi, id est laborum et dolorum fuga.</li><li>Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam.</li><li>Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus.</li></ul><p>Laboris nisi ut aliquip ex ea commodo consequat. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Esse cillum dolore eu fugiat nulla pariatur. Animi, id est laborum et dolorum fuga. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 63,
        'uuid' => '2bf66ce3-3715-441f-9561-aaa034926f95',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:20:50 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I find out about a delinquent payment?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '997139b9-59d6-47cf-a002-a26bee84112b',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430769887,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e2a7a322-4b34-4562-98c3-286f57438a29',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Laboris nisi ut aliquip ex ea commodo consequat. Ut enim ad minim veniam, quis nostrud exercitation ullamco. Architecto beatae vitae dicta sunt explicabo. Animi, id est laborum et dolorum fuga. Eaque ipsa quae ab illo inventore veritatis et quasi. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. </p><ul><li>Laboris nisi ut aliquip ex ea commodo consequat.</li><li>Ut enim ad minim veniam, quis nostrud exercitation ullamco.</li><li>Architecto beatae vitae dicta sunt explicabo.</li><li>Animi, id est laborum et dolorum fuga.</li><li>Eaque ipsa quae ab illo inventore veritatis et quasi.</li><li>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo.</li></ul><p>Laboris nisi ut aliquip ex ea commodo consequat. Ut enim ad minim veniam, quis nostrud exercitation ullamco. Architecto beatae vitae dicta sunt explicabo. Animi, id est laborum et dolorum fuga. Eaque ipsa quae ab illo inventore veritatis et quasi. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:04:47 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I enroll my child in little league?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'aefa673d-5764-461a-af69-f259d702be38',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770236,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e613c9b7-0cd5-4617-952b-d23a3ec0e7e4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Corrupti quos dolores et quas molestias excepturi sint occaecati. Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Lorem ipsum dolor sit amet, consectetur adipisicing elit. </p><p>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Corrupti quos dolores et quas molestias excepturi sint occaecati. Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Lorem ipsum dolor sit amet, consectetur adipisicing elit. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
        'uuid' => '4f9f568c-16f1-4fe8-be9e-1edf2f2ce59f',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:10:36 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How can I get bid information or subscribe to your vendor database?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '182eb9b3-f5d3-4882-a5af-54b3de1687d1',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430766593,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e6c31580-2844-496a-b8cf-4f6d80ed2945',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>At vero eos et accusamus. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Et harum quidem rerum facilis est et expedita distinctio. </p><p>At vero eos et accusamus. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo. Sed ut perspiciatis unde omnis iste natus error sit voluptatem. Lorem ipsum dolor sit amet, consectetur adipisicing elit. Et harum quidem rerum facilis est et expedita distinctio. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 47,
        'uuid' => 'ed152996-471f-47ae-9133-dfffd6ae8ca9',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 19:09:53 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I obtain a building permit?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e4c3ac44-9707-4af4-8bf4-0da44575307f',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770913,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e7e7c977-2041-4320-b5de-30c5533e5480',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Duis aute irure dolor in reprehenderit in voluptate velit. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Duis aute irure dolor in reprehenderit in voluptate velit. Eaque ipsa quae ab illo inventore veritatis et quasi. </p><ul><li>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo.</li><li>Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat.</li><li>Duis aute irure dolor in reprehenderit in voluptate velit.</li><li>Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque.</li><li>Duis aute irure dolor in reprehenderit in voluptate velit.</li><li>Eaque ipsa quae ab illo inventore veritatis et quasi.</li></ul><p>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Duis aute irure dolor in reprehenderit in voluptate velit. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Duis aute irure dolor in reprehenderit in voluptate velit. Eaque ipsa quae ab illo inventore veritatis et quasi. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 61,
        'uuid' => 'd7e6b49e-ba62-4253-adad-a5dc65293d06',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:21:53 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'What are the current contract opportunities with the City?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '870d780c-18bc-4e01-90c6-e6619a432a13',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430458082,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'edeb4944-9dc4-482c-acd6-ceaf43e539e9',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Animi, id est laborum et dolorum fuga. Qui officia deserunt mollit anim id est laborum. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. </p><p>Animi, id est laborum et dolorum fuga. Qui officia deserunt mollit anim id est laborum. Nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 47,
        'uuid' => 'ed152996-471f-47ae-9133-dfffd6ae8ca9',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-01 05:28:02 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I report a housing code violation?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9f22464e-1ee6-4a86-81ed-b481d72bbc29',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770309,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ee67dda1-64eb-4498-9af8-24fa2e0dcdca',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Et harum quidem rerum facilis est et expedita distinctio. Excepteur sint occaecat cupidatat non proident, sunt in culpa. </p><ul><li>Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit.</li><li>Do eiusmod tempor incididunt ut labore et dolore magna aliqua.</li><li>Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat.</li><li>Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae.</li><li>Et harum quidem rerum facilis est et expedita distinctio.</li><li>Excepteur sint occaecat cupidatat non proident, sunt in culpa.</li></ul><p>Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut aut reiciendis voluptatibus maiores alias consequatur aut perferendis doloribus asperiores repellat. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Et harum quidem rerum facilis est et expedita distinctio. Excepteur sint occaecat cupidatat non proident, sunt in culpa. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
        'uuid' => '3675c02c-998f-4453-b59f-035f08a3041e',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:11:49 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'What is the sales tax in the City?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c37c995d-43fc-4540-b376-e85b631f4285',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430767913,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fa5e0ad5-cb4f-49dc-b6c3-942b2d8b977b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Et harum quidem rerum facilis est et expedita distinctio. Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Esse cillum dolore eu fugiat nulla pariatur. </p><ul><li>Et harum quidem rerum facilis est et expedita distinctio.</li><li>Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem.</li><li>Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo.</li><li>Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae.</li><li>Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat.</li><li>Esse cillum dolore eu fugiat nulla pariatur.</li></ul><p>Et harum quidem rerum facilis est et expedita distinctio. Non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Temporibus autem quibusdam et aut officiis debitis aut rerum necessitatibus saepe eveniet ut et voluptates repudiandae sint et molestiae non recusandae. Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat. Esse cillum dolore eu fugiat nulla pariatur. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 36,
        'uuid' => 'f2d01c13-6276-43ef-b64f-0cbddf5f2fb2',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 19:31:53 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I get a parking permit?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b761cdca-87cc-4567-a8c1-703b1a230805',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430771906,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fa97b5f5-a45a-43c4-8205-0b6f6b6e9335',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Duis aute irure dolor in reprehenderit in voluptate velit. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Laboris nisi ut aliquip ex ea commodo consequat. Et harum quidem rerum facilis est et expedita distinctio. Totam rem aperiam. </p><p>Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit. Duis aute irure dolor in reprehenderit in voluptate velit. Inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Laboris nisi ut aliquip ex ea commodo consequat. Et harum quidem rerum facilis est et expedita distinctio. Totam rem aperiam. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 38,
        'uuid' => 'f6dc2868-2389-4650-b2cb-afd315eba93e',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:38:26 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'How do I register my vehicle?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ed04f5ec-8f5f-493d-8ef2-28e913a1be63',
  'type' => 'faq',
  'language' => 'und',
  'created' => 1430770965,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fc0f60b9-fc5f-45e7-a0fc-a7353329db81',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Architecto beatae vitae dicta sunt explicabo. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. </p><p>Architecto beatae vitae dicta sunt explicabo. Facere possimus, omnis voluptas assumenda est, omnis dolor repellendus. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. Et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque. Cupiditate non provident, similique sunt in culpa qui officia deserunt mollitia. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam. </p>',
        'summary' => NULL,
        'format' => NULL,
      ),
    ),
  ),
  'field_faq_category' => array(
    'und' => array(
      0 => array(
        'tid' => 24,
        'uuid' => 'a991e6f6-1ed3-4ffa-833e-1c25f37afb8a',
      ),
    ),
  ),
  'field_tags' => array(),
  'field_faq_link' => array(
    'und' => array(
      0 => array(
        'url' => 'faq/more-info',
        'title' => 'Read more',
        'attributes' => array(),
      ),
    ),
  ),
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
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-04 20:22:45 +0000',
);
  return $nodes;
}
