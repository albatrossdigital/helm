<?php

/**
 * @file
 * Interface between domain_views.module and views.module.
 *
 * @ingroup domain_views
 */

/**
 * Filter for group ids stored in the database, currently active domain and any domain
 */
class domain_views_handler_filter_domain_access_gid extends views_handler_filter_in_operator {
  function get_value_options() {
    if (!isset($this->value_options)) {
      $this->value_title = t('Domain');
      $domain_options = array('***CURRENT_DOMAIN***' => t('Current Domain'));
      $domains = domain_domains();
      foreach ($domains as $domain) {
        // Since we cannot use 0 in a checkbox, use a token.
        ($domain['domain_id'] == 0) ? $key = '***PRIMARY_DOMAIN***' : $key = $domain['domain_id'];
        $domain_options[$key] = $domain['sitename'];
      }
      $this->value_options = $domain_options;
    }
  }

  /**
   * Filter the query properly.
   */
  function query($group_by = FALSE) {
    parent::query($group_by);
    $table = $this->ensure_my_table();
    if ($table == 'domain_access') {
      $this->query->add_where(0, "$table.realm", 'domain_id');
    }
  }
}
