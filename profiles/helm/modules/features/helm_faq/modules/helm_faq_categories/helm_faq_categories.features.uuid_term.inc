<?php
/**
 * @file
 * helm_faq_categories.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function helm_faq_categories_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Rentals',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '18fded4c-5a25-4a8e-ab68-44adc1964288',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'c5292807-d48e-41ea-9b32-ea5a57c94d7e',
    ),
  );
  $terms[] = array(
    'name' => 'Business',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => '22ac5faa-31ef-4cdd-a4a6-907dee3211ac',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(
      'und' => array(
        0 => array(
          'rgb' => '#00746b',
        ),
      ),
    ),
    'field_icon' => array(
      'und' => array(
        0 => array(
          'icon' => 'fa-briefcase',
        ),
      ),
    ),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Parking/Traffic Tickets',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2b8e6463-1b35-447a-bd5d-2987869fd879',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'f2799002-af47-466a-bf4f-bce21fb89113',
    ),
  );
  $terms[] = array(
    'name' => 'Street Sweeping',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2f1f0317-c3b8-437b-b67e-ec58bdf445bd',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'f656d8c2-6d2b-4b16-9f91-36d68c077597',
    ),
  );
  $terms[] = array(
    'name' => 'Code',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3675c02c-998f-4453-b59f-035f08a3041e',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '22ac5faa-31ef-4cdd-a4a6-907dee3211ac',
    ),
  );
  $terms[] = array(
    'name' => 'Social & Civic Services',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => '3dfba347-97aa-4437-8951-a6e7d125e364',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(
      'und' => array(
        0 => array(
          'rgb' => '#67a2c0',
        ),
      ),
    ),
    'field_icon' => array(
      'und' => array(
        0 => array(
          'icon' => 'fa-users',
        ),
      ),
    ),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Public Housing',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '409db7f1-3f30-42f2-9581-b7d04c6ba11a',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '3dfba347-97aa-4437-8951-a6e7d125e364',
    ),
  );
  $terms[] = array(
    'name' => 'Car Share',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '464b9f1b-4186-42ab-b4f0-9ace19080623',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'f656d8c2-6d2b-4b16-9f91-36d68c077597',
    ),
  );
  $terms[] = array(
    'name' => 'Protective Orders',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4ca73390-7f5e-4613-9f99-6f9037c516c5',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'f2799002-af47-466a-bf4f-bce21fb89113',
    ),
  );
  $terms[] = array(
    'name' => 'Recreation & Parks Programs',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4f9f568c-16f1-4fe8-be9e-1edf2f2ce59f',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '5c5a9d7f-b1fe-4933-b2ae-9b87f2c2d252',
    ),
  );
  $terms[] = array(
    'name' => 'Marriage',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5b9a23ab-d3cd-40a2-a28e-06cafc92834e',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '3dfba347-97aa-4437-8951-a6e7d125e364',
    ),
  );
  $terms[] = array(
    'name' => 'Culture & Recreation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 13,
    'uuid' => '5c5a9d7f-b1fe-4933-b2ae-9b87f2c2d252',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(
      'und' => array(
        0 => array(
          'rgb' => '#605ca8',
        ),
      ),
    ),
    'field_icon' => array(
      'und' => array(
        0 => array(
          'icon' => 'fa-music',
        ),
      ),
    ),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Health',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '6a22758e-764c-4b3a-bdc0-a90de6ab4bfa',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Pay a Bill',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '769aca12-ea52-4fe1-95f2-fe5d64316a03',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'd33a4502-8f57-40d5-99af-92d46f9f250e',
    ),
  );
  $terms[] = array(
    'name' => 'Personal Taxes',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9acb9f8f-9e66-4bd4-b151-6b420d5efdd2',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'd33a4502-8f57-40d5-99af-92d46f9f250e',
    ),
  );
  $terms[] = array(
    'name' => 'Licenses & Ceremonies',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a991e6f6-1ed3-4ffa-833e-1c25f37afb8a',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '3dfba347-97aa-4437-8951-a6e7d125e364',
    ),
  );
  $terms[] = array(
    'name' => 'Water Quality',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a99fb3ed-8e22-4adf-81c8-e1a2a2f9dae5',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '6a22758e-764c-4b3a-bdc0-a90de6ab4bfa',
    ),
  );
  $terms[] = array(
    'name' => 'Property & Housing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => 'c5292807-d48e-41ea-9b32-ea5a57c94d7e',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(
      'und' => array(
        0 => array(
          'rgb' => '#fa973f',
        ),
      ),
    ),
    'field_icon' => array(
      'und' => array(
        0 => array(
          'icon' => 'fa-building-o',
        ),
      ),
    ),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Business Taxes',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c8bc9efa-8478-44de-939a-79004fa06ef1',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '22ac5faa-31ef-4cdd-a4a6-907dee3211ac',
    ),
  );
  $terms[] = array(
    'name' => 'Air Quality',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cf0ea6b1-5095-4e36-ad3b-ab28ee98268e',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '6a22758e-764c-4b3a-bdc0-a90de6ab4bfa',
    ),
  );
  $terms[] = array(
    'name' => 'Police',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd12072a1-3397-4a1c-961f-d7abd874a3c0',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'f2799002-af47-466a-bf4f-bce21fb89113',
    ),
  );
  $terms[] = array(
    'name' => 'Payments & Taxes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd33a4502-8f57-40d5-99af-92d46f9f250e',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(
      'und' => array(
        0 => array(
          'rgb' => '#00746b',
        ),
      ),
    ),
    'field_icon' => array(
      'und' => array(
        0 => array(
          'icon' => 'fa-money',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Property Tax',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e1b04f1c-0696-4c5d-bad9-b69b89140397',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'c5292807-d48e-41ea-9b32-ea5a57c94d7e',
    ),
  );
  $terms[] = array(
    'name' => 'Business Licenses',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'eb664713-2564-4083-8ef6-981ae2cfbb3b',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '22ac5faa-31ef-4cdd-a4a6-907dee3211ac',
    ),
  );
  $terms[] = array(
    'name' => 'Park Locations',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f1871c14-c7a1-45ab-a216-c5acaba4fff2',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '5c5a9d7f-b1fe-4933-b2ae-9b87f2c2d252',
    ),
  );
  $terms[] = array(
    'name' => 'Park Permits & Reservations',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f1b48d65-9731-4146-b881-4d60e256a84b',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '5c5a9d7f-b1fe-4933-b2ae-9b87f2c2d252',
    ),
  );
  $terms[] = array(
    'name' => 'Legal',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 12,
    'uuid' => 'f2799002-af47-466a-bf4f-bce21fb89113',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(
      'und' => array(
        0 => array(
          'rgb' => '#df4d54',
        ),
      ),
    ),
    'field_icon' => array(
      'und' => array(
        0 => array(
          'icon' => 'fa-gavel',
        ),
      ),
    ),
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Business Taxes',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f2d01c13-6276-43ef-b64f-0cbddf5f2fb2',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'd33a4502-8f57-40d5-99af-92d46f9f250e',
    ),
  );
  $terms[] = array(
    'name' => 'Transportation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f656d8c2-6d2b-4b16-9f91-36d68c077597',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Parking Permits',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f6dc2868-2389-4650-b2cb-afd315eba93e',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'f656d8c2-6d2b-4b16-9f91-36d68c077597',
    ),
  );
  $terms[] = array(
    'name' => 'Violations',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fa8ab3c1-1374-44b4-914f-88c7f9f8a161',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => 'c5292807-d48e-41ea-9b32-ea5a57c94d7e',
    ),
  );
  $terms[] = array(
    'name' => 'Food Protection',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fb3ea87c-49c2-4717-b436-13fb8b80f156',
    'vocabulary_machine_name' => 'faq_category',
    'field_color' => array(),
    'field_icon' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '6a22758e-764c-4b3a-bdc0-a90de6ab4bfa',
    ),
  );
  return $terms;
}
