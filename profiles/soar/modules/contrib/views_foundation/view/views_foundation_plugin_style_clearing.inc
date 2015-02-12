<?php
/**
 * @file
 * Views Foundation Clearing plugin.
 *
 * @see http://foundation.zurb.com/old-docs/f3/clearing.php
 */

/**
 * Style plugin to render rows in a Foundation Clearing plugin.
 *
 * @ingroup views_style_plugins
 */
class views_foundation_plugin_style_clearing extends views_plugin_style {

  /**
   * Set default options.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['image'] = array('default' => '');
    $options['thumbnail'] = array('default' => '');
    $options['caption'] = array('default' => '');
    $options['thumb_border'] = array('default' => '');

    return $options;
  }

  /**
   * Provide a form for setting options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Pre-build all of our option lists for the dials and switches that follow.
    $fields = array('' => t('- None -'));
    foreach ($this->display->handler->get_handlers('field') as $field => $handler) {
      if ($label = $handler->label()) {
        $fields[$field] = $handler->label() . ': ' . $handler->options['settings']['image_style'];
      }
      else {
        $fields[$field] = $handler->ui_name();
      }
    }

    $form['image'] = array(
      '#type' => 'select',
      '#title' => t('Image'),
      '#required' => TRUE,
      '#options' => $fields,
      '#default_value' => $this->options['image'],
      '#description' => t('Select the field that will be used as the image.'),
    );

    $form['thumbnail'] = array(
      '#type' => 'select',
      '#title' => t('Thumbnail'),
      '#options' => $fields,
      '#default_value' => $this->options['thumbnail'],
      '#description' => t('Select the field that will be used as the thumbnail.(optional)'),
    );

    $form['caption'] = array(
      '#type' => 'select',
      '#title' => t('Caption'),
      '#options' => $fields,
      '#default_value' => $this->options['caption'],
      '#description' => t('Select the field that will be used as the image caption.(optional)'),
    );

    $form['thumb_border'] = array(
      '#type' => 'checkbox',
      '#title' => t('Thumbnail border'),
      '#description' => t('Select this checkbox if you want thumbnails border'),
      '#default_value' => $this->options['thumb_border'],
    );
  }

}
