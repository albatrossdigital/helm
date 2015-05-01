<?php

/**
 * @file
 * Contains page callbacks and theme functions for the frontend UI.
 */

/**
 * Page callback for getting live results.
 */
function search_api_live_results_json(SearchApiLiveResultsSearch $search, $keys = '') {
  $ret = array();

  $keys = explode(' ', $keys);
  $query = $search->getQuery($keys);

  if ($query) {
    $max_items = (!empty($search->options['num_results']))? $search->options['num_results'] : 5;
    $query->range(0, $max_items);
    $results = $query->execute();
    foreach ((array) $results['results'] as $result) {
      if ($search->options['display'] == 'view_mode') {
        $ret[] = drupal_render(node_view(node_load($result['id']), 'live_results_search'));
      }
      else {
        $ret[] = l(node_load($result['id'])->title, 'node/' . $result['id']);
      }
    }    
  }

  drupal_json_output($ret);
}