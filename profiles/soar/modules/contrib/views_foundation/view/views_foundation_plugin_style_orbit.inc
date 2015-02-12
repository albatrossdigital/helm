<?php
/**
 * @file
 * Views Foundation Orbit plugin.
 *
 * @see http://foundation.zurb.com/docs/components/orbit.html
 */

/**
 * Style plugin to render rows in a Foundation Orbit slider.
 *
 * @ingroup views_style_plugins
 */
class views_foundation_plugin_style_orbit extends views_plugin_style {

  /**
   * Set default options.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['animation_speed'] = array('default' => 500);
    $options['timer_speed']   = array('default' => 10000);
    $options['resume_on_mouseout'] = array('default' => TRUE);
    $options['pause_on_hover'] = array('default' => FALSE);
    $options['bullets'] = array('default' => TRUE);

    return $options;
  }

  /**
   * Provide a form for setting options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Pre-build option list for the caption field.
    $fields = array('' => t('- None -'));
    foreach ($this->display->handler->get_handlers('field') as $field => $handler) {
      $fields[$field] = $handler->ui_name();
    }

    $form['animation_speed'] = array(
      '#type' => 'textfield',
      '#title' => t('Animation speed'),
      '#required' => TRUE,
      '#size' => 10,
      '#maxlength' => 10,
      '#description' => t('Specify the Animation Speed'),
      '#default_value' => $this->options['animation_speed'],
      '#element_validate' => array('element_validate_integer_positive'),
    );

    $form['timer_speed'] = array(
      '#type' => 'textfield',
      '#title' => t('Timer speed'),
      '#description' => t('Time between transitions'),
      '#required' => TRUE,
      '#size' => 10,
      '#maxlength' => 10,
      '#default_value' => $this->options['timer_speed'],
      '#element_validate' => array('element_validate_integer_positive'),
    );

    $form['pause_on_hover'] = array(
      '#type' => 'checkbox',
      '#title' => t('Pause on hover'),
      '#default_value' => $this->options['pause_on_hover'],
    );

    $form['resume_on_mouseout'] = array(
      '#type' => 'checkbox',
      '#title' => t('Resume on mouseout'),
      '#default_value' => $this->options['resume_on_mouseout'],
    );

    $form['bullets'] = array(
      '#type' => 'checkbox',
      '#title' => t('Bullets'),
      '#description' => t('Do you want bullet navigation?'),
      '#default_value' => $this->options['bullets'],
    );

    $form['caption_field'] = array(
      '#type' => 'select',
      '#title' => t('Caption field'),
      '#options' => $fields,
      '#default_value' => $this->options['caption_field'],
      '#description' => t('Select the field that will be used as the image caption.'),
    );

  }

}
