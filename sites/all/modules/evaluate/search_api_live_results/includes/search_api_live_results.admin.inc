<?php

/**
 * @file
 * Contains page callbacks and related functions for the admin UI.
 */

/**
 * Form displaying an overview over all searches available for autocompletion.
 *
 * @param SearchApiIndex $index
 *   The index for which autocompletion searches should be configured.
 *
 * @see search_api_live_results_admin_overview_submit()
 * @see search_api_live_results_admin_overview_submit_delete()
 * @ingroup forms
 */
function search_api_live_results_admin_overview(array $form, array &$form_state, SearchApiIndex $index) {
  $form = array();
  $form_state['index'] = $index;
  $index_id = $index->machine_name;

  $server = $index->server();
  
  if (!$server) {    
    if (search_api_live_results_search_load_multiple(FALSE, array('index_id' => $index_id))) {
      $form['description'] = array(
        '#type' => 'item',
        '#title' => t('Delete live results settings'),
        '#description' => t("If you won't use live results with this index anymore, you can delete all live results settings associated with it. " .
            "This will delete all live results settings on this index. Settings on other indexes won't be influenced."),
      );
      $form['button'] = array(
        '#type' => 'submit',
        '#value' => t('Delete live results settings'),
        '#submit' => array('search_api_live_results_admin_overview_submit_delete'),
      );
    }
    return $form;
  }

  $form['#tree'] = TRUE;
  $types = search_api_live_results_get_types();
  $searches = search_api_live_results_search_load_multiple(FALSE, array('index_id' => $index_id));
  $show_status = FALSE;
  foreach ($types as $type => $info) {
    if (empty($info['list searches'])) {
      continue;
    }
    $t_searches = $info['list searches']($index);
    if (empty($t_searches)) {
      $t_searches = array();
    }
    foreach ($t_searches as $id => $search) {
      if (isset($searches[$id])) {
        $types[$type]['searches'][$id] = $searches[$id];
        $show_status |= $searches[$id]->hasStatus(ENTITY_IN_CODE);
        unset($searches[$id]);
      }
      else {
        $search += array(
          'machine_name' => $id,
          'index_id' => $index_id,
          'type' => $type,
          'enabled' => 0,
          'options' => array(),
        );
        $search['options'] += array(
          'result count' => TRUE,
        );
        $types[$type]['searches'][$id] = entity_create('search_api_live_results_search', $search);
      }
    }
  }
  foreach ($searches as $id => $search) {
    $search->unavailable = TRUE;
    $type = isset($types[$search->type]) ? $search->type : '';
    $types[$type]['searches'][$id] = $search;
    $show_status |= $search->hasStatus(ENTITY_IN_CODE);
  }
  $base_path = 'admin/config/search/search_api/index/' . $index_id . '/live-results/';
  foreach ($types as $type => $info) {
    if (empty($info['searches'])) {
      continue;
    }
    if (!$type) {
      $info += array(
        'name' => t('Unavailable search types'),
        'description' => t('The modules providing these searches were disabled or uninstalled. ' .
            "If you won't use them anymore, you can delete their settings."),
      );
    }
    $form[$type] = array(
      '#type' => 'fieldset',
      '#title' => $info['name'],
    );
    if (!empty($info['description'])) {
      $form[$type]['#description'] = '<p>' . $info['description'] . '</p>';
    }
    $form[$type]['searches']['#theme'] = 'tableselect';
    $form[$type]['searches']['#header'] = array();
    if ($show_status) {
      $form[$type]['searches']['#header']['status'] = t('Status');
    }
    $form[$type]['searches']['#header'] += array(
      'name' => t('Name'),
      'operations' => t('Operations'),
    );
    $form[$type]['searches']['#empty'] = '';
    $form[$type]['searches']['#js_select'] = TRUE;
    foreach ($info['searches'] as $id => $search) {
      $form[$type]['searches'][$id] = array(
        '#type' => 'checkbox',
        '#default_value' => $search->enabled,
        '#parents' => array('searches', $id),
      );
      if (!empty($search->unavailabe)) {
        $form[$type]['searches'][$id]['#default_value'] = FALSE;
        $form[$type]['searches'][$id]['#disabled'] = TRUE;
      }
      $form_state['searches'][$id] = $search;
      $options = &$form[$type]['searches']['#options'][$id];
      if ($show_status) {
        $options['status'] = isset($search->status) ? theme('entity_status', array('status' => $search->status)) : '';;
      }
      $options['name'] = $search->name;
      $items = array();
      if (empty($search->unavailabe) && !empty($search->id)) {
        $items[] = l(t('edit'), $base_path . $id . '/edit');
      }
      if (!empty($search->status) && ($search->hasStatus(ENTITY_CUSTOM))) {
        $title = $search->hasStatus(ENTITY_IN_CODE) ? t('revert') : t('delete');
        $items[] = l($title, $base_path . $id . '/delete');
      }
      if ($items) {
        $variables = array(
          'items' => $items,
          'attributes' => array('class' => array('inline')),
        );
        $options['operations'] = theme('item_list', $variables);
      }
      else {
        $options['operations'] = '';
      }
      unset($options);
    }
  }

  if (empty($form)) {
    $form['message']['#markup'] = '<p>' . t('There are currently no searches known for this index.') . '</p>';
  }
  else {
    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Save'),
    );
  }

  return $form;
}

/**
 * Submit callback for search_api_live_results_admin_overview().
 *
 * @see search_api_live_results_admin_overview()
 */
function search_api_live_results_admin_overview_submit(array $form, array &$form_state) {
  foreach ($form_state['values']['searches'] as $id => $enabled) {
    $search = $form_state['searches'][$id];
    if ($search->enabled != $enabled) {
      $search->enabled = $enabled;
      $search->save();
    }
  }
  drupal_set_message(t('The settings have been saved.'));
}

/**
 * Submit callback for search_api_live_results_admin_overview(), when all
 * settings for the index should be deleted.
 *
 * @see search_api_live_results_admin_overview()
 */
function search_api_live_results_admin_overview_submit_delete(array $form, array &$form_state) {
  $index = $form_state['index'];
  $ids = array_keys(search_api_live_results_search_load_multiple(FALSE, array('index_id' => $index->machine_name)));
  if ($ids) {
    entity_delete_multiple('search_api_live_results_search', $ids);
    drupal_set_message(t('All autocompletion settings stored for this index were deleted.'));
  }
  else {
    drupal_set_message(t('There were no settings to delete.'), 'warning');
  }
  $form_state['redirect'] = 'admin/config/search/search_api/index/' . $index->machine_name;
}

/**
 * Form for editing the autocompletion settings for a search.
 *
 * @param SearchApiLiveResultsSearch $search
 *   The search whose settings should be edited.
 *
 * @see search_api_live_results_admin_search_edit_validate()
 * @see search_api_live_results_admin_search_edit_submit()
 * @ingroup forms
 */
function search_api_live_results_admin_search_edit(array $form, array &$form_state, SearchApiLiveResultsSearch $search) {
  drupal_set_title(t('Edit %search', array('%search' => $search->name)), PASS_THROUGH);

  $form_state['search'] = $search;
  $form_state['type'] = $type = search_api_live_results_get_types($search->type);
  if (!$type) {
    drupal_set_message(t('No information about the type of this search was found.'), 'error');
    return array();
  }
  $form['#tree'] = TRUE;
  $form['enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enabled'),
    '#default_value' => $search->enabled,
  );
  $form['options']['num_results'] = array(
       '#type' => 'select',
       '#title' => t('Number of results'),
       '#options' => drupal_map_assoc(range(1, 20)),
       '#default_value' => (!empty($search->options['num_results'])) ? $search->options['num_results'] : 5,
       '#description' => t('How many suggestions should be given.'),
   );
  $form['options']['display'] = array(
    '#type' => 'radios',
    '#title' => t('Display method'),
    '#description' => t('The way the results should be displayed.'),
    '#default_value' => !empty($search->options['display']),
    '#options' => array(
      'view_mode' => t("Use view mode: 'Live result search' to display results"),
      'title' => t("Only show title (linked to node)"),
    ),
    '#default_value' => (!empty($search->options['display'])) ? $search->options['display'] : 'title',
  );
  $form['options']['caching'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use memcached caching (Experimental)'),
    '#default_value' => !empty($search->options['caching']),
  );
  $custom_form = empty($form['options']['custom']) ? array() : $form['options']['custom'];
  if (!empty($type['config form']) && function_exists($type['config form']) && is_array($custom_form = $type['config form']($custom_form, $form_state, $search))) {
    $form['options']['custom'] = $custom_form;
  }
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Validate callback for search_api_live_results_admin_search_edit().
 *
 * @see search_api_live_results_admin_search_edit()
 * @see search_api_live_results_admin_search_edit_submit()
 */
function search_api_live_results_admin_search_edit_validate(array $form, array &$form_state) {
  if (empty($form_state['type']['config form'])) {
    return;
  }
  $f = $form_state['type']['config form'] . '_validate';
  if (function_exists($f)) {
    $custom_form = empty($form['options']['custom']) ? array() : $form['options']['custom'];
    $f($form['options']['custom'], $form_state, $form_state['values']['options']['custom']);
  }
}

/**
 * Submit callback for search_api_live_results_admin_search_edit().
 *
 * @see search_api_live_results_admin_search_edit()
 * @see search_api_live_results_admin_search_edit_validate()
 */
function search_api_live_results_admin_search_edit_submit(array $form, array &$form_state) {
  $values = &$form_state['values'];
  if (!empty($form_state['type']['config form'])) {
    $f = $form_state['type']['config form'] . '_submit';
    if (function_exists($f)) {
      $custom_form = empty($form['options']['custom']) ? array() : $form['options']['custom'];
      $f($form['options']['custom'], $form_state, $values['options']['custom']);
    }
  }

  $search = $form_state['search'];
  $search->enabled = $values['enabled'];
  $search->options['num_results'] = $values['options']['num_results'];
  $search->options['display'] = $values['options']['display'];
  $search->options['caching'] = $values['options']['caching'];
  if (isset($values['options']['custom'])) {
    // Take care of custom options that aren't changed in the config form.
    $old = empty($search->options['custom']) ? array() : $search->options['custom'];
    $search->options['custom'] = $values['options']['custom'] + $old;
  }

  $search->save();
  drupal_set_message(t('The autocompletion settings for the search have been saved.'));
  $form_state['redirect'] = 'admin/config/search/search_api/index/' . $search->index_id . '/live-results';
}

/**
 * Form for deleting the autocompletion settings of a search.
 *
 * @param SearchApiLiveResultsSearch $search
 *   The search whose settings should be deleted.
 *
 * @see search_api_live_results_admin_search_delete_submit()
 * @ingroup forms
 */
function search_api_live_results_admin_search_delete(array $form, array &$form_state, SearchApiLiveResultsSearch $search) {
  $form_state['search'] = $search;
  return confirm_form(
    $form,
    t('Do you really want to delete the autocompletion settings for search %search?', array('%search' => $search->name)),
    'admin/config/search/search_api/index/' . $search->index_id . '/live-results'
  );
}

/**
 * Submit callback for search_api_live_results_admin_search_delete().
 *
 * @see search_api_live_results_admin_search_delete()
 */
function search_api_live_results_admin_search_delete_submit(array $form, array &$form_state) {
  $form_state['search']->delete();
  drupal_set_message(t('The autocompletion settings for the search have been deleted.'));
  $form_state['redirect'] = 'admin/config/search/search_api/index/' . $form_state['search']->index_id . '/live-results';
}
