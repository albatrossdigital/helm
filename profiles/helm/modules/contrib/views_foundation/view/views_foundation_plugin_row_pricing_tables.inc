<?php
/**
 * @file
 * Views Foundation Pricing Tables row style plugin.
 */

/**
 * Row plugin to render fields in a pricing tables.
 *
 * @ingroup views_row_plugins
 */
class views_foundation_plugin_row_pricing_tables extends views_plugin_row {

  /**
   * Set default options.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['title_field'] = array('default' => '');
    $options['price_field'] = array('default' => '');
    $options['description_field'] = array('default' => '');
    $options['bullet_field'] = array('default' => '');
    $options['bullet_two_field'] = array('default' => '');
    $options['bullet_three_field'] = array('default' => '');
    $options['button_field'] = array('default' => '');

    return $options;
  }

  /**
   * Provide a form for setting options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Pre-build all of option lists for the select fields.
    $fields = array('' => t('<none>'));
    foreach ($this->display->handler->get_handlers('field') as $field => $handler) {
      if ($label = $handler->label()) {
        $fields[$field] = $handler->label() . ': ' . $handler->options['settings']['image_style'];
      }
      else {
        $fields[$field] = $handler->ui_name();
      }

    }
    $form['title_field'] = array(
      '#type' => 'select',
      '#title' => t('Title field'),
      '#options' => $fields,
      '#default_value' => $this->options['title_field'],
      '#description' => t('Select the field that will be used as the title.'),
    );
    $form['price_field'] = array(
      '#type' => 'select',
      '#title' => t('Price field'),
      '#options' => $fields,
      '#default_value' => $this->options['price_field'],
      '#description' => t('Select the field that will be used as the price.'),
    );
    $form['description_field'] = array(
      '#type' => 'select',
      '#title' => t('Description field'),
      '#options' => $fields,
      '#default_value' => $this->options['description_field'],
      '#description' => t('Select the field that will be used as the description.'),
    );

    $form['button_field'] = array(
      '#type' => 'select',
      '#title' => t('Button field'),
      '#options' => $fields,
      '#default_value' => $this->options['button_field'],
      '#description' => t('Select the field that will be used as the button.'),
    );
  }
}
