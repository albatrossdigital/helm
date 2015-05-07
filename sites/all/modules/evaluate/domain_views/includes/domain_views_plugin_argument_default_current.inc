<?php

/**
 * @file
 *  Domain Views plugin that contains a argument default with the current domain's id.
 *
 * @ingroup domain_views
 */

/**
 * Argument default with the current domain's id
 */
class domain_views_plugin_argument_default_current extends views_plugin_argument_default {
  function get_argument() {
    $_domain = domain_get_domain();
    return $_domain['domain_id'];
  }
}

