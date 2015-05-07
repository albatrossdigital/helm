<?php
/**
 * @file
 * Interface between domain_views.module and views.module.
 *
 * @ingroup domain_views
 */

/**
 * Filter by grant realm.
 */
class domain_views_handler_filter_domain_access_realm extends views_handler_filter_in_operator {
  function get_value_options() {
    if (!isset($this->value_options)) {
      $this->value_options = array(
        'domain_site' => t('All affilates (domain_site)'),
        'domain_id' => t('Per domain (domain_id)')
      );
    }
  }
}
