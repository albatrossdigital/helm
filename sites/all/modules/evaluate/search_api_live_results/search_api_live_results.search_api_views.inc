<?php

/**
 * @file
 * Contains code for integrating with the "Search views" module.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Adds live results to input fields for keywords on views with
 * exposed filters.
 */
function search_api_live_results_form_views_exposed_form_alter(array &$form, array &$form_state) {
  $view = $form_state['view'];
  if (substr($view->base_table, 0, 17) != 'search_api_index_') {
    return;
  }
  $search_id = 'search_api_views_' . $view->name;
  $search = search_api_live_results_search_load($search_id);
  if (empty($search->enabled)) {
    return;
  }
  $index_id = substr($view->base_table, 17);
  $index = search_api_index_load($index_id);
  if (empty($index->options['fields'])) {
    return;
  }
  $fields = $index->getFulltextFields(FALSE);
  // Add the "Search: Fulltext search" filter as another text field.
  $fields[] = 'search_api_views_fulltext';
  // We need the _entity_views_field_identifier() function to translate Search
  // API field names into Views identifiers.
  module_load_include('views.inc', 'entity', 'views/entity');
  foreach ($fields as $field) {
    $field = _entity_views_field_identifier($field, array());
    if (!empty($view->filter[$field]->options['expose']['identifier'])) {
      $key = $view->filter[$field]->options['expose']['identifier'];
      if (isset($form[$key]) && $form[$key]['#type'] == 'textfield') {
        $search->alterElement($form[$key]);
      }
    }
  }
}

/**
 * Returns a list of search views for the given index.
 *
 * @param SearchApiIndex $index
 *   The index whose searches should be returned.
 *
 * @return array
 *   An array of searches, keyed by their machine name. The values are arrays
 *   with the following keys:
 *   - name: A human-readable name for this search.
 *   - options: (optional) An array of options to use for this search.
 *     Type-specific options should go into the "custom" nested key in these
 *     options.
 */
function search_api_live_results_views_searches(SearchApiIndex $index) {
  $ret = array();
  foreach (views_get_all_views() as $name => $view) {
    if (substr($view->base_table, 0, 17) == 'search_api_index_') {
      // @todo Check whether there is an exposed fulltext filter
      $ret['search_api_views_' . $name] = array(
        'name' => $view->human_name,
      );
    }
  }
  return $ret;
}

/**
 * Create the query that would be issued for the given search for the complete keys.
 *
 * @param SearchApiLiveResultsSearch $search
 *   The search for which to create the query.
 * @param $complete
 *   A string containing the complete search keys.
 * @param $incomplete
 *   A string containing the incomplete last search key.
 *
 * @return SearchApiQueryInterface
 *   The query that would normally be executed when only $complete was entered
 *   as the search keys for the given search.
 */
function search_api_live_results_views_query(SearchApiLiveResultsSearch $search, $complete, $incomplete) {
  $views_id = substr($search->machine_name, 17);
  $view = views_get_view($views_id);
  // @todo Let users select display
  $view->set_display();
  // @todo Determine arguments
  $view->pre_execute();
  $view->build();
  $query = $view->query->getSearchApiQuery();
  $query->keys($complete);
  return $query;
}
