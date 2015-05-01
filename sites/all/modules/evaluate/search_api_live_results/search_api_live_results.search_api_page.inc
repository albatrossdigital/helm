<?php

/**
 * @file
 * Contains code for integrating with the "Search pages" module.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Adds autocompletion to the keywords field on search pages, if enabled by the
 * user.
 */
function search_api_live_results_form_search_api_page_search_form_alter(array &$form, array &$form_state) {
  if (isset($form['form'])) {
    $form = &$form['form'];
  }
  $id = 'search_api_page_' . $form['id']['#value'];
  $search = search_api_live_results_search_load($id);
  if ($search && $search->enabled) {
    $search->alterElement($form['keys_' . $form['id']['#value']]);
  }
}

/**
 * Returns a list of search pages for the given index.
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
function search_api_live_results_pages_searches(SearchApiIndex $index) {
  $ret = array();
  foreach (search_api_page_load_multiple(FALSE, array('index_id' => $index->machine_name)) as $page) {
    $id = 'search_api_page_' . $page->id;
    $ret[$id]['name'] = $page->name;
    $ret[$id]['options']['custom']['page_id'] = $page->id;
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
function search_api_live_results_pages_query(SearchApiLiveResultsSearch $search, $keys) {
  $page = search_api_page_load($search->options['custom']['page_id']);
  $query = search_api_query($page->index_id, array())
    ->keys(array('#conjunction' => 'AND') + $keys);
  if (!empty($page->options['fields'])) {
    $query->fields($page->options['fields']);
  }
  return $query;
}
