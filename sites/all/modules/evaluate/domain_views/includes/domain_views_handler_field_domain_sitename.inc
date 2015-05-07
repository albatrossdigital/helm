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
class domain_views_handler_field_domain_sitename extends views_handler_field {
  /**
   * Constructor to provide additional field to add.
   */
  function construct() {
    parent::construct();
    $this->additional_fields['domain_id'] = 'domain_id';
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['link_to_site'] = array('default' => TRUE);
    return $options;
  }

  /**
   * Provide link to default domain option
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['link_to_site'] = array(
      '#title' => t('Link this field to its domain'),
      '#description' => t('This will override any other link you have set.'),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['link_to_site']),
    );
  }

  function render($values) {
    if (empty($this->options['link_to_site'])) {
      return check_plain($values->{$this->field_alias});
    }
    $domain_id = $values->{$this->aliases['domain_id']};
    $domain = domain_lookup($domain_id);
    if (empty($domain)) {
      return;
    }
    $path = $domain['path'];
    $text = $domain['sitename'];
    return l($text, $path);
  }
}
