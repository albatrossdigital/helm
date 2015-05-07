<?php
/**
 * @file
 * Interface between domain_views.module and views.module.
 *
 * @ingroup domain_views
 */

/**
 * Field handler to provide simple renderer that allows linking to a domain.
 *
 * @ingroup domain_views
 */
class domain_views_handler_field_domain_id extends views_handler_field {
  /**
   * Constructor to provide additional field to add.
   */
  function construct() {
    parent::construct();
    $this->additional_fields['domain_id'] = 'domain_id';
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['link_to_default_domain'] = array('default' => FALSE);
    $options['link_to_original_domain'] = array('default' => FALSE);
    $options['list_all_domains'] = array('default' => FALSE);

    $options['display_method'] = array('default' => 'domain_id');
    $options['link_option'] = array('default' => 'none');
    return $options;
  }

  /**
   * Provide link to default domain option
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Added for backward compatibility with older versions
    if ($this->options['link_to_domain_id'] || $this->options['link_to_sitename']) {
      $this->options['link_option'] = 'link_to_domain';

      // Unset old options
      $form['link_to_domain_id'] = array('#type' => 'value', '#value' => FALSE);
      $form['link_to_sitename'] = array('#type' => 'value', '#value' => FALSE);
    }

    $form['display_method'] = array(
        '#title' => t('Display as'),
        '#type' => 'select',
        '#options' => array(
            'domain_id' => t('Domain ID'),
            'sitename' => t('Site Name'),
            'subdomain' => t('Subdomain'),
        ),
        '#default_value' => ($this->options['display_method']) ? $this->options['display_method'] : 'domain_id',
    );

    $form['link_option'] = array(
        '#title' => t('Link options'),
        '#type' => 'select',
        '#options' => array(
            'none' => t('No link'),
            'link_to_domain' => t('Link this field to its domain'),
        ),
        '#default_value' => ($this->options['link_option']) ? $this->options['link_option'] : 'none',
    );
  }


  function query() {
    parent::query();
    // The {domain_access} table uses GID instead of DOMAIN_ID.
    if (isset($this->query->fields['domain_access_gid'])) {
      $this->query->fields['domain_access_domain_id']['field'] = 'gid';
    }
  }

  function render($values) {
    $domain_id = $values->{$this->field_alias};
    $domain = domain_lookup($domain_id);
    if (empty($domain)) {
      return;
    }

    switch ($this->options['display_method']) {
      case 'sitename':
        $text = $domain['sitename'];
        break;
      case 'subdomain':
        $text = $domain['subdomain'];
        break;
      default:
        $text = $domain_id;
        break;
    }

    switch ($this->options['link_option']) {
      case 'link_to_domain':
        $path = $domain['path'];
        break;
      default:
        $path = NULL;
        break;
    }

    if ($path) {
      return l($text, $path);
    }
    else {
      return check_plain($text);
    }
  }
}
