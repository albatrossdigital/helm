<?php

/**
 * @file
 * Definition of views_handler_field_file_image_style.
 */

/**
 * Field handler to render a file with a view mode using file_view_file().
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_file_image_style_url extends views_handler_field_entity {
  function option_definition() {
    $options = parent::option_definition();
    $options['image_style'] = array('default' => 'default');
    return $options;
  }

  /**
   * Provide file_view_mode option for to file display.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $image_styles = image_style_options(FALSE, PASS_THROUGH);
      $element['image_style'] = array(
        '#title' => t('Thumbnail image style'),
        '#type' => 'select',
        '#default_value' => $settings['image_style'],
        '#empty_option' => t('None (do not include this)'),
        '#options' => $image_styles,
        '#description' => t('This is only relevant if a Thumbnail image field is selected above.'),
      );

    $form['image_style'] = array(
      '#title' => t('Image style'),
      '#description' => t('Select the image style of which to generate the url.'),
      '#type' => 'select',
      '#default_value' => $this->options['image_style'],
      '#options' => $image_styles,
    );
  }

  function render($values) {
    $file = $this->get_value($values);
    if ($file->type == 'image') {
      return image_style_url($this->options['image_style'], $file->uri);
    }
    return FALSE;
  }
}
