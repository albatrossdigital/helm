<?php
/**
 * @file
 * soar_event_register.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function soar_event_register_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'registrations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'Registrations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Registrations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view default registration';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'registration_id' => 'registration_id',
    'field_reg_first_name' => 'field_reg_first_name',
    'field_reg_last_name' => 'field_reg_last_name',
    'field_reg_phone' => 'field_reg_phone',
    'anon_mail' => 'anon_mail',
    'created' => 'created',
    'state' => 'state',
    'field_reg_notes' => 'field_reg_notes',
    'url' => 'url',
    'registration_id_1' => 'registration_id_1',
    'registration_id_2' => 'registration_id_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'registration_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reg_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reg_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reg_phone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'anon_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reg_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'registration_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'registration_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Registration: Author entity author_uid */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'registration';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  $handler->display->display_options['relationships']['author']['label'] = 'Author';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
  /* Field: Registration: Host entity ID */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'registration';
  $handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['separator'] = '';
  /* Field: Bulk operations: Registration */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'registration';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete selected registrations',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Print certificates for selected registrants',
      'settings' => array(
        'url' => 'node/!1/certificates/',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Email selected registrants',
    ),
  );
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'ID';
  /* Field: Registration: First name */
  $handler->display->display_options['fields']['field_reg_first_name']['id'] = 'field_reg_first_name';
  $handler->display->display_options['fields']['field_reg_first_name']['table'] = 'field_data_field_reg_first_name';
  $handler->display->display_options['fields']['field_reg_first_name']['field'] = 'field_reg_first_name';
  /* Field: Registration: Last name */
  $handler->display->display_options['fields']['field_reg_last_name']['id'] = 'field_reg_last_name';
  $handler->display->display_options['fields']['field_reg_last_name']['table'] = 'field_data_field_reg_last_name';
  $handler->display->display_options['fields']['field_reg_last_name']['field'] = 'field_reg_last_name';
  /* Field: Registration: Phone number */
  $handler->display->display_options['fields']['field_reg_phone']['id'] = 'field_reg_phone';
  $handler->display->display_options['fields']['field_reg_phone']['table'] = 'field_data_field_reg_phone';
  $handler->display->display_options['fields']['field_reg_phone']['field'] = 'field_reg_phone';
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Email';
  $handler->display->display_options['fields']['anon_mail']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['anon_mail']['alter']['path'] = 'mailto:[anon_mail]';
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'flight_date_formats_date_short';
  /* Field: Registration: State entity */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'registration';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'State';
  /* Field: Registration: Notes and special needs, dietary restrictions */
  $handler->display->display_options['fields']['field_reg_notes']['id'] = 'field_reg_notes';
  $handler->display->display_options['fields']['field_reg_notes']['table'] = 'field_data_field_reg_notes';
  $handler->display->display_options['fields']['field_reg_notes']['field'] = 'field_reg_notes';
  $handler->display->display_options['fields']['field_reg_notes']['label'] = 'Special needs';
  $handler->display->display_options['fields']['field_reg_notes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reg_notes']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reg_notes']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['field_reg_notes']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_reg_notes']['alter']['path'] = 'registration/[registration_id]';
  $handler->display->display_options['fields']['field_reg_notes']['hide_empty'] = TRUE;
  /* Field: View */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_registration';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = 'View';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]">View</a>';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Edit */
  $handler->display->display_options['fields']['registration_id_1']['id'] = 'registration_id_1';
  $handler->display->display_options['fields']['registration_id_1']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id_1']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id_1']['ui_name'] = 'Edit';
  $handler->display->display_options['fields']['registration_id_1']['label'] = '';
  $handler->display->display_options['fields']['registration_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['registration_id_1']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['registration_id_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['registration_id_1']['alter']['path'] = 'registration/[registration_id_1/edit';
  $handler->display->display_options['fields']['registration_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_id_1']['separator'] = '';
  /* Field: Certificates */
  $handler->display->display_options['fields']['registration_id_2']['id'] = 'registration_id_2';
  $handler->display->display_options['fields']['registration_id_2']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id_2']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id_2']['ui_name'] = 'Certificates';
  $handler->display->display_options['fields']['registration_id_2']['label'] = '';
  $handler->display->display_options['fields']['registration_id_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['registration_id_2']['alter']['text'] = 'Print Certificate';
  $handler->display->display_options['fields']['registration_id_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['registration_id_2']['alter']['path'] = 'printpdf/node/[entity_id]/certificates/[registration_id_2]';
  $handler->display->display_options['fields']['registration_id_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['registration_id_2']['separator'] = '';
  /* Contextual filter: Registration: Host entity ID */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'registration';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['entity_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['entity_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['entity_id']['validate_options']['types'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['arguments']['entity_id']['break_phrase'] = TRUE;
  /* Filter criterion: Registration: State entity */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'registration';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Registration state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'registration_id' => 'registration_id',
    'field_reg_first_name' => 'field_reg_first_name',
    'field_reg_last_name' => 'field_reg_last_name',
    'name_1' => 'name_1',
    'mail' => 'mail',
    'field_reg_phone' => 'field_reg_phone',
    'anon_mail' => 'anon_mail',
    'field_reg_childs_name' => 'field_reg_childs_name',
    'field_reg_childs_age' => 'field_reg_childs_age',
    'state' => 'state',
    'field_reg_notes' => 'field_reg_notes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/registrations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Registrations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'registrations-%1-value-%1-title-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'ID';
  /* Field: Registration: First name */
  $handler->display->display_options['fields']['field_reg_first_name']['id'] = 'field_reg_first_name';
  $handler->display->display_options['fields']['field_reg_first_name']['table'] = 'field_data_field_reg_first_name';
  $handler->display->display_options['fields']['field_reg_first_name']['field'] = 'field_reg_first_name';
  /* Field: Registration: Last name */
  $handler->display->display_options['fields']['field_reg_last_name']['id'] = 'field_reg_last_name';
  $handler->display->display_options['fields']['field_reg_last_name']['table'] = 'field_data_field_reg_last_name';
  $handler->display->display_options['fields']['field_reg_last_name']['field'] = 'field_reg_last_name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Patron id';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user_uid';
  /* Field: Registration: Phone number */
  $handler->display->display_options['fields']['field_reg_phone']['id'] = 'field_reg_phone';
  $handler->display->display_options['fields']['field_reg_phone']['table'] = 'field_data_field_reg_phone';
  $handler->display->display_options['fields']['field_reg_phone']['field'] = 'field_reg_phone';
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'flight_date_formats_date_short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'author';
  $handler->display->display_options['fields']['name']['label'] = 'Created by';
  /* Field: Registration: State entity */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'registration';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'State';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_profile_address']['id'] = 'field_profile_address';
  $handler->display->display_options['fields']['field_profile_address']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address']['field'] = 'field_profile_address';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_childs_age']['id'] = 'field_reg_childs_age';
  $handler->display->display_options['fields']['field_reg_childs_age']['table'] = 'field_data_field_reg_childs_age';
  $handler->display->display_options['fields']['field_reg_childs_age']['field'] = 'field_reg_childs_age';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_childs_grade']['id'] = 'field_reg_childs_grade';
  $handler->display->display_options['fields']['field_reg_childs_grade']['table'] = 'field_data_field_reg_childs_grade';
  $handler->display->display_options['fields']['field_reg_childs_grade']['field'] = 'field_reg_childs_grade';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_childs_name']['id'] = 'field_reg_childs_name';
  $handler->display->display_options['fields']['field_reg_childs_name']['table'] = 'field_data_field_reg_childs_name';
  $handler->display->display_options['fields']['field_reg_childs_name']['field'] = 'field_reg_childs_name';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_childs_school']['id'] = 'field_reg_childs_school';
  $handler->display->display_options['fields']['field_reg_childs_school']['table'] = 'field_data_field_reg_childs_school';
  $handler->display->display_options['fields']['field_reg_childs_school']['field'] = 'field_reg_childs_school';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_heard_about']['id'] = 'field_reg_heard_about';
  $handler->display->display_options['fields']['field_reg_heard_about']['table'] = 'field_data_field_reg_heard_about';
  $handler->display->display_options['fields']['field_reg_heard_about']['field'] = 'field_reg_heard_about';
  /* Field: Registration: Notes and special needs, dietary restrictions */
  $handler->display->display_options['fields']['field_reg_notes']['id'] = 'field_reg_notes';
  $handler->display->display_options['fields']['field_reg_notes']['table'] = 'field_data_field_reg_notes';
  $handler->display->display_options['fields']['field_reg_notes']['field'] = 'field_reg_notes';
  $handler->display->display_options['path'] = 'node/%/registrations/export.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Data export selected */
  $handler = $view->new_display('views_data_export', 'Data export selected', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'registrations-%1-value-%1-title-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'ID';
  /* Field: Registration: First name */
  $handler->display->display_options['fields']['field_reg_first_name']['id'] = 'field_reg_first_name';
  $handler->display->display_options['fields']['field_reg_first_name']['table'] = 'field_data_field_reg_first_name';
  $handler->display->display_options['fields']['field_reg_first_name']['field'] = 'field_reg_first_name';
  /* Field: Registration: Last name */
  $handler->display->display_options['fields']['field_reg_last_name']['id'] = 'field_reg_last_name';
  $handler->display->display_options['fields']['field_reg_last_name']['table'] = 'field_data_field_reg_last_name';
  $handler->display->display_options['fields']['field_reg_last_name']['field'] = 'field_reg_last_name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Patron id';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user_uid';
  /* Field: Registration: Phone number */
  $handler->display->display_options['fields']['field_reg_phone']['id'] = 'field_reg_phone';
  $handler->display->display_options['fields']['field_reg_phone']['table'] = 'field_data_field_reg_phone';
  $handler->display->display_options['fields']['field_reg_phone']['field'] = 'field_reg_phone';
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'flight_date_formats_date_short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'author';
  $handler->display->display_options['fields']['name']['label'] = 'Created by';
  /* Field: Registration: State entity */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'registration';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'State';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_profile_address']['id'] = 'field_profile_address';
  $handler->display->display_options['fields']['field_profile_address']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address']['field'] = 'field_profile_address';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_childs_age']['id'] = 'field_reg_childs_age';
  $handler->display->display_options['fields']['field_reg_childs_age']['table'] = 'field_data_field_reg_childs_age';
  $handler->display->display_options['fields']['field_reg_childs_age']['field'] = 'field_reg_childs_age';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_childs_grade']['id'] = 'field_reg_childs_grade';
  $handler->display->display_options['fields']['field_reg_childs_grade']['table'] = 'field_data_field_reg_childs_grade';
  $handler->display->display_options['fields']['field_reg_childs_grade']['field'] = 'field_reg_childs_grade';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_childs_name']['id'] = 'field_reg_childs_name';
  $handler->display->display_options['fields']['field_reg_childs_name']['table'] = 'field_data_field_reg_childs_name';
  $handler->display->display_options['fields']['field_reg_childs_name']['field'] = 'field_reg_childs_name';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_childs_school']['id'] = 'field_reg_childs_school';
  $handler->display->display_options['fields']['field_reg_childs_school']['table'] = 'field_data_field_reg_childs_school';
  $handler->display->display_options['fields']['field_reg_childs_school']['field'] = 'field_reg_childs_school';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_heard_about']['id'] = 'field_reg_heard_about';
  $handler->display->display_options['fields']['field_reg_heard_about']['table'] = 'field_data_field_reg_heard_about';
  $handler->display->display_options['fields']['field_reg_heard_about']['field'] = 'field_reg_heard_about';
  /* Field: Registration: Notes and special needs, dietary restrictions */
  $handler->display->display_options['fields']['field_reg_notes']['id'] = 'field_reg_notes';
  $handler->display->display_options['fields']['field_reg_notes']['table'] = 'field_data_field_reg_notes';
  $handler->display->display_options['fields']['field_reg_notes']['field'] = 'field_reg_notes';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Registration: Registration ID */
  $handler->display->display_options['arguments']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['arguments']['registration_id']['table'] = 'registration';
  $handler->display->display_options['arguments']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['arguments']['registration_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['registration_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['registration_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['registration_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['registration_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['registration_id']['break_phrase'] = TRUE;
  $handler->display->display_options['path'] = 'admin/registrations/export';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Registrations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Registration */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'registration';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete selected registrations',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Export selected registrants',
      'settings' => array(
        'url' => 'admin/registrations/export',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Email selected registrants',
    ),
    'action::registration_views_set_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'default_registration_state' => 'showed',
      ),
    ),
  );
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'ID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'registration_related_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'Event';
  /* Field: Registration: First name */
  $handler->display->display_options['fields']['field_reg_first_name']['id'] = 'field_reg_first_name';
  $handler->display->display_options['fields']['field_reg_first_name']['table'] = 'field_data_field_reg_first_name';
  $handler->display->display_options['fields']['field_reg_first_name']['field'] = 'field_reg_first_name';
  /* Field: Registration: Last name */
  $handler->display->display_options['fields']['field_reg_last_name']['id'] = 'field_reg_last_name';
  $handler->display->display_options['fields']['field_reg_last_name']['table'] = 'field_data_field_reg_last_name';
  $handler->display->display_options['fields']['field_reg_last_name']['field'] = 'field_reg_last_name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Patron id';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user_uid';
  /* Field: Registration: Phone number */
  $handler->display->display_options['fields']['field_reg_phone']['id'] = 'field_reg_phone';
  $handler->display->display_options['fields']['field_reg_phone']['table'] = 'field_data_field_reg_phone';
  $handler->display->display_options['fields']['field_reg_phone']['field'] = 'field_reg_phone';
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'flight_date_formats_date_short';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_childs_name']['id'] = 'field_reg_childs_name';
  $handler->display->display_options['fields']['field_reg_childs_name']['table'] = 'field_data_field_reg_childs_name';
  $handler->display->display_options['fields']['field_reg_childs_name']['field'] = 'field_reg_childs_name';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_reg_childs_age']['id'] = 'field_reg_childs_age';
  $handler->display->display_options['fields']['field_reg_childs_age']['table'] = 'field_data_field_reg_childs_age';
  $handler->display->display_options['fields']['field_reg_childs_age']['field'] = 'field_reg_childs_age';
  $handler->display->display_options['fields']['field_reg_childs_age']['hide_empty'] = TRUE;
  /* Field: Registration: State entity */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'registration';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'State';
  /* Field: Registration: Notes and special needs, dietary restrictions */
  $handler->display->display_options['fields']['field_reg_notes']['id'] = 'field_reg_notes';
  $handler->display->display_options['fields']['field_reg_notes']['table'] = 'field_data_field_reg_notes';
  $handler->display->display_options['fields']['field_reg_notes']['field'] = 'field_reg_notes';
  $handler->display->display_options['fields']['field_reg_notes']['label'] = 'Special needs';
  $handler->display->display_options['fields']['field_reg_notes']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reg_notes']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['field_reg_notes']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_reg_notes']['alter']['path'] = 'registration/[registration_id]';
  $handler->display->display_options['fields']['field_reg_notes']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view_registration']['id'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['view_registration']['field'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['label'] = '';
  $handler->display->display_options['fields']['view_registration']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['edit_registration']['id'] = 'edit_registration';
  $handler->display->display_options['fields']['edit_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['edit_registration']['field'] = 'edit_registration';
  $handler->display->display_options['fields']['edit_registration']['label'] = '';
  $handler->display->display_options['fields']['edit_registration']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'registration_related_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Registration: State entity */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'registration';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Registration state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'registration_id' => 'registration_id',
    'title_1' => 'title_1',
    'field_reg_first_name' => 'field_reg_first_name',
    'field_reg_last_name' => 'field_reg_last_name',
    'name_1' => 'name_1',
    'mail' => 'mail',
    'field_reg_phone' => 'field_reg_phone',
    'anon_mail' => 'anon_mail',
    'field_reg_childs_age' => 'field_reg_childs_age',
    'state' => 'state',
    'field_reg_notes' => 'field_reg_notes',
    'body' => 'body',
  );
  /* Filter criterion: Registration: Host entity ID */
  $handler->display->display_options['filters']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['filters']['entity_id']['table'] = 'registration';
  $handler->display->display_options['filters']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['filters']['entity_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['entity_id']['expose']['operator_id'] = 'entity_id_op';
  $handler->display->display_options['filters']['entity_id']['expose']['label'] = 'Event id';
  $handler->display->display_options['filters']['entity_id']['expose']['operator'] = 'entity_id_op';
  $handler->display->display_options['filters']['entity_id']['expose']['identifier'] = 'entity_id';
  $handler->display->display_options['filters']['entity_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'admin/workbench/registrations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Registrations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['registrations'] = $view;

  return $export;
}
