<?php
/**
 * @file
 * Clean markup panels clean element panels style.
 */

// Plugin definition.
$plugin = array(
  'title'              => t('Clean panel markup'),
  'description'        => t('Wrap regions and panes with clean HTML elements.'),

  'render pane'        => 'clean_markup_panels_clean_element_pane',
  'pane settings form' => 'clean_markup_panels_clean_element_pane_settings_form',

  'render region'      => 'clean_markup_panels_clean_element_region',
  'settings form'      => 'clean_markup_panels_clean_element_region_settings_form',

  'hook theme' => array(
    'clean_markup_panels_clean_element' => array(
      'variables' => array(
        'output' => array(),
        'pane' => array(),
        'display' => array(),
      ),
      'path' => drupal_get_path('module', 'clean_markup_panels') . '/plugins/styles/clean',
      'template' => 'panels-clean_element-pane',
    ),
    'clean_markup_panels_clean_region' => array(
      'variables' => array(
        'region_wrapper'      => 'div',
        'region_classes'      => '',
        'enable_inner_div'    => FALSE,
        'pane_array'          => array(),
        'pane_separator_show' => FALSE,
        'panes'               => '',
      ),
      'path' => drupal_get_path('module', 'clean_markup_panels') . '/plugins/styles/clean',
      'template' => 'panels-clean_region-region',
    ),
  ),
);

/**
 * Form constructor for the pane settings form.
 *
 * You see this when you click on the gear in the top-right of a panel pane, and
 * click "Change" under "Style", and choose "Clean panel markup".
 *
 * @ingroup forms
 */
function clean_markup_panels_clean_element_pane_settings_form($style_settings) {
  $settings = array();
  $form = array();

  // Set defaults.
  if (array_key_exists('clean_markup', $style_settings) && !empty($style_settings['clean_markup'])) {
    $settings = $style_settings['clean_markup'];
  }
  $settings += array(
    'pane_wrapper' => 'div',
    'enable_inner_div' => FALSE,
    'additional_pane_classes' => implode(' ', array('panel-pane')),
    'additional_pane_attributes' => '',
    'title_wrapper' => 'h2',
    'content_wrapper' => CLEAN_MARKUP_NO_ELEMENT,
    'title_hide' => FALSE,
  );

  $wrapper_elements = _clean_markup_get_html_wrapper_elements();
  $optional_wrapper_elements = _clean_markup_get_html_wrapper_elements(TRUE);

  // Show the config form to the user if they're allowed to modfiy it.
  if (user_access('administer clean markup panel pane settings')) {
    $form['clean_markup'] = array(
      '#type' => 'fieldset',
      '#title' => t('Clean markup options'),
    );

    $form['clean_markup']['pane_wrapper'] = array(
      '#type' => 'select',
      '#title' => t('Pane wrapper markup'),
      '#description' => t('Choose the HTML element to wrap the pane.'),
      '#default_value' => $settings['pane_wrapper'],
      '#options' => $optional_wrapper_elements,
    );

    $form['clean_markup']['additional_pane_classes'] = array(
      '#type' => 'textfield',
      '#title' => t('Additional pane classes'),
      '#description' => t('Additional classes to set on the pane wrapper.'),
      '#default_value' => $settings['additional_pane_classes'],
      '#states' => array(
        'invisible' => array(
          ':input[name="settings[clean_markup][pane_wrapper]"]' => array('value' => CLEAN_MARKUP_NO_ELEMENT),
        ),
      ),
    );
    $form['clean_markup']['additional_pane_attributes'] = array(
      '#type' => 'textfield',
      '#title' => t('Additional attributes'),
      '#description' => t('Additional attributes to set on the pane wrapper (i.e. <code>role="navigation"</code>). Text entered here will not be sanitized.') . '<br />' .
      t('While this is a powerful and flexible feature if used by a trusted user with HTML experience, it is a security risk in the hands of a malicious or inexperienced user.'),
      '#default_value' => $settings['additional_pane_attributes'],
      '#states' => array(
        'invisible' => array(
          ':input[name="settings[clean_markup][pane_wrapper]"]' => array('value' => CLEAN_MARKUP_NO_ELEMENT),
        ),
      ),
    );
    if (module_exists('token')) {
      $form['clean_markup']['token_help'] = array(
        '#title' => t('Replacement patterns'),
        '#type' => 'fieldset',
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
        '#description' => t('Prefer raw-text replacements for text to avoid problems with HTML entities!'),
        '#states' => array(
          'invisible' => array(
            ':input[name="settings[clean_markup][pane_wrapper]"]' => array('value' => CLEAN_MARKUP_NO_ELEMENT),
          ),
        ),
      );
      $form['clean_markup']['token_help']['help'] = array(
        '#value' => theme('token_tree', array('global'), TRUE, TRUE),
      );
      $form['clean_markup']['token_help']['help']['tokens'] = array(
        '#theme' => 'token_tree',
        '#token_types' => array('global'),
        '#global_types' => TRUE,
        '#click_insert' => TRUE,
      );
    }

    $form['clean_markup']['enable_inner_div'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable inner div'),
      '#description' => t('Specify if you want an inner div element inside the main pane wrapper.'),
      '#default_value' => $settings['enable_inner_div'],
      '#states' => array(
        'invisible' => array(
          ':input[name="settings[clean_markup][pane_wrapper]"]' => array('value' => CLEAN_MARKUP_NO_ELEMENT),
        ),
      ),
    );

    // Controls for title markup.
    $form['clean_markup']['title_wrapper'] = array(
      '#type' => 'select',
      '#title' => t('Title wrapper markup'),
      '#description' => t('Choose the HTML to use to wrap the block title.'),
      '#default_value' => $settings['title_wrapper'],
      '#options' => $wrapper_elements,
    );

    $form['clean_markup']['title_hide'] = array(
      '#type' => 'checkbox',
      '#title' => t('Visually-hide pane title'),
      '#description' => t('Add the <code>element-invisible</code> CSS class to the pane title. This hides it visually but leaves it visible to screenreaders.'),
      '#default_value' => $settings['title_hide'],
    );

    // Controls for content markup.
    $form['clean_markup']['content_wrapper'] = array(
      '#type' => 'select',
      '#title' => t('Content wrapper markup'),
      '#description' => t('Choose the HTML to use to wrap the block content.'),
      '#default_value' => $settings['content_wrapper'],
      '#options' => $optional_wrapper_elements,
    );
  }
  // Pass the values invisibly if the user is not allowed to modify it.
  else {
    drupal_set_message('You do not have permission to modify these clean markup settings.', 'warning');
    $form['clean_markup']['pane_wrapper'] = array(
      '#type' => 'value',
      '#value' => $settings['pane_wrapper'],
    );
    $form['clean_markup']['additional_pane_classes'] = array(
      '#type' => 'value',
      '#value' => $settings['additional_pane_classes'],
    );
    $form['clean_markup']['additional_pane_attributes'] = array(
      '#type' => 'value',
      '#value' => $settings['additional_pane_attributes'],
    );
    $form['clean_markup']['enable_inner_div'] = array(
      '#type' => 'value',
      '#value' => $settings['enable_inner_div'],
    );
    $form['clean_markup']['title_wrapper'] = array(
      '#type' => 'value',
      '#value' => $settings['title_wrapper'],
    );
    $form['clean_markup']['title_hide'] = array(
      '#type' => 'value',
      '#value' => $settings['title_hide'],
    );
    $form['clean_markup']['content_wrapper'] = array(
      '#type' => 'value',
      '#value' => $settings['content_wrapper'],
    );
  }

  return $form;
}

/**
 * Returns HTML for a clean–panel–markup-style pane.
 *
 * @ingroup themeable
 */
function theme_clean_markup_panels_clean_element_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];

  if (empty($content->content)) {
    return;
  }

  return theme('clean_markup_panels_clean_element', array(
    'content' => $content,
    'pane' => $pane,
    'display' => $display,
  ));
}

/**
 * Implements template_preprocess_HOOK() for
 * clean_markup_panels_clean_element.tpl.php.
 */
function template_preprocess_clean_markup_panels_clean_element(&$vars) {
  $clean_markup = $vars['pane']->style['settings']['clean_markup'];

  // Outer wrapper.
  if ($clean_markup['pane_wrapper'] === 'none') {
    $vars['pane_wrapper'] = FALSE;
    $vars['pane_wrapper_tag'] = 'div';
  }
  else {
    $vars['pane_wrapper'] = TRUE;
    $vars['pane_wrapper_tag'] = $clean_markup['pane_wrapper'];
  }

  // Inner div.
  $vars['inner_wrapper'] = FALSE;
  if ($clean_markup['enable_inner_div'] == TRUE) {
    $vars['inner_wrapper'] = TRUE;
  }

  // Custom CSS classes.
  $vars['classes_array'][] = $vars['pane']->style['settings']['clean_markup']['additional_pane_classes'];
  if ($clean_markup['additional_pane_classes']) {
    $vars['clean_markup_classes'] = ' ' . $clean_markup['additional_pane_classes'];
  }
  else {
    $vars['clean_markup_classes'] = '';
  }

  // Custom attributes.
  if (module_exists('token')) {
    $vars['additional_attributes'] = token_replace($clean_markup['additional_pane_attributes'], array('global'));
  }
  else {
    $vars['additional_attributes'] = $clean_markup['additional_pane_attributes'];
  }

  // Pad additional_attributes.
  if (!empty($vars['additional_attributes'])) {
    $vars['additional_attributes'] = str_pad($vars['additional_attributes'], strlen($vars['additional_attributes']) + 2 ,' ', STR_PAD_BOTH);
  }

  // Pane title element.
  $vars['title_wrapper'] = $clean_markup['title_wrapper'];

  // Hide panel pane title with element-invisible class.
  if ($clean_markup['title_hide'] == TRUE) {
    $vars['title_attributes_array']['class'][] = 'element-invisible';
  }

  // Content wrapper.
  if ($clean_markup['content_wrapper'] === 'none') {
    $vars['content_wrapper'] = FALSE;
    $vars['content_wrapper_tag'] = 'div';
  }
  else {
    $vars['content_wrapper'] = TRUE;
    $vars['content_wrapper_tag'] = $clean_markup['content_wrapper'];
  }

  // Add default pane content class.
  $vars['content_attributes_array']['class'][] = 'pane-content';

  return template_preprocess_panels_pane($vars);
}

/**
 * Form constructor for the region settings form.
 *
 * You see this when you click on the gear in the top-left of a region, click
 * "Change" under "Style" and choose "Clean panel markup"; or when you click
 * "Display settings" on the panel itself, click "Change" under "Style" and
 * choose "Clean panel markup".
 *
 * @ingroup forms
 */
function clean_markup_panels_clean_element_region_settings_form($style_settings) {
  $settings = array();
  $form = array();

  // Set defaults.
  if (array_key_exists('clean_markup', $style_settings) && !empty($style_settings['clean_markup'])) {
    $settings = $style_settings['clean_markup'];
  }
  $settings += array(
    'region_wrapper' => 'div',
    'enable_inner_div' => FALSE,
    'additional_region_classes' => implode(' ', array('')),
    'additional_region_attributes' => '',
    'pane_separators' => FALSE,
  );

  $wrapper_elements = _clean_markup_get_html_wrapper_elements();
  $optional_wrapper_elements = _clean_markup_get_html_wrapper_elements(TRUE);

  // Show the config form to the user if they're allowed to modfiy it.
  if (user_access('administer clean markup panel region settings')) {
    $form['clean_markup'] = array(
      '#type' => 'fieldset',
      '#title' => t('Clean markup options'),
    );

    $form['clean_markup']['region_wrapper'] = array(
      '#type' => 'select',
      '#title' => t('Region wrapper markup'),
      '#description' => t('Choose the HTML element to wrap the region.'),
      '#default_value' => $settings['region_wrapper'],
      '#options' => $optional_wrapper_elements,
    );
    $form['clean_markup']['additional_region_classes'] = array(
      '#type' => 'textfield',
      '#title' => t('Additional region classes'),
      '#description' => t('Additional classes to set on the region wrapper.'),
      '#default_value' => $settings['additional_region_classes'],
      '#states' => array(
        'invisible' => array(
          ':input[name="settings[clean_markup][region_wrapper]"]' => array('value' => CLEAN_MARKUP_NO_ELEMENT),
        ),
      ),
    );

    $form['clean_markup']['additional_region_attributes'] = array(
      '#type' => 'textfield',
      '#title' => t('Additional attributes'),
      '#description' => t('Additional attributes to set on the region wrapper (i.e. <code>role="navigation"</code>). Text entered here will not be sanitized.') . '<br />' .
      t('While this is a powerful and flexible feature if used by a trusted user with HTML experience, it is a security risk in the hands of a malicious or inexperienced user.'),
      '#default_value' => $settings['additional_region_attributes'],
      '#states' => array(
        'invisible' => array(
          ':input[name="settings[clean_markup][region_wrapper]"]' => array('value' => CLEAN_MARKUP_NO_ELEMENT),
        ),
      ),
    );
    if (module_exists('token')) {
      $form['clean_markup']['token_help'] = array(
        '#title' => t('Replacement patterns'),
        '#type' => 'fieldset',
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
        '#description' => t('Prefer raw-text replacements for text to avoid problems with HTML entities!'),
        '#states' => array(
          'invisible' => array(
            ':input[name="settings[clean_markup][region_wrapper]"]' => array('value' => CLEAN_MARKUP_NO_ELEMENT),
          ),
        ),
      );
      $form['clean_markup']['token_help']['help'] = array(
        '#value' => theme('token_tree', array('global'), TRUE, TRUE),
      );
      $form['clean_markup']['token_help']['help']['tokens'] = array(
        '#theme' => 'token_tree',
        '#token_types' => array('global'),
        '#global_types' => TRUE,
        '#click_insert' => TRUE,
      );
    }

    $form['clean_markup']['enable_inner_div'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable inner div'),
      '#description' => t('Specify if you want an inner div element inside the main region wrapper.'),
      '#default_value' => $settings['enable_inner_div'],
      '#states' => array(
        'invisible' => array(
          ':input[name="settings[clean_markup][region_wrapper]"]' => array('value' => CLEAN_MARKUP_NO_ELEMENT),
        ),
      ),
    );

    $form['clean_markup']['pane_separators'] = array(
      '#type' => 'checkbox',
      '#title' => t('Add separators between panes'),
      '#description' => t('Place separator divs between panes.'),
      '#default_value' => $settings['pane_separators'],
    );
  }
  // Pass the values invisibly if the user is not allowed to modify it.
  else {
    drupal_set_message('You do not have permission to modify these clean markup settings.', 'warning');
    $form['clean_markup']['region_wrapper'] = array(
      '#type' => 'value',
      '#value' => $settings['region_wrapper'],
    );
    $form['clean_markup']['additional_region_classes'] = array(
      '#type' => 'value',
      '#value' => $settings['additional_region_classes'],
    );
    $form['clean_markup']['additional_region_attributes'] = array(
      '#type' => 'value',
      '#value' => $settings['additional_region_attributes'],
    );
    $form['clean_markup']['enable_inner_div'] = array(
      '#type' => 'value',
      '#value' => $settings['enable_inner_div'],
    );
    $form['clean_markup']['pane_separators'] = array(
      '#type' => 'value',
      '#value' => $settings['pane_separators'],
    );
  }

  return $form;
}

/**
 * Returns HTML for a clean-panel-markup-style region.
 *
 * @ingroup themeable
 */
function theme_clean_markup_panels_clean_element_region($vars) {
  $separator = '';

  // Don't output anything if there is nothing in the region.
  if (empty($vars['panes'])) {
    return;
  }

  // Prepare a separator.
  if ($vars['settings']['clean_markup']['pane_separators']) {
    $separator = '<div class="panel-separator"></div>';
  }
  return theme('clean_markup_panels_clean_region', array(
    'region_wrapper'    => $vars['settings']['clean_markup']['region_wrapper'],
    'region_classes'    => $vars['settings']['clean_markup']['additional_region_classes'],
    'additional_region_attributes' => $vars['settings']['clean_markup']['additional_region_attributes'],
    'enable_inner_div'  => $vars['settings']['clean_markup']['enable_inner_div'],
    'pane_array'        => $vars['panes'],
    'pane_separator'    => $separator,
    'panes'             => '',
  ));
}

/**
 * Implements template_preprocess_HOOK() for panels-clean_region-region.tpl.php.
 */
function template_preprocess_clean_markup_panels_clean_region(&$vars) {
  // Build the content HTML.
  $vars['panes'] = implode($vars['pane_separator'], $vars['pane_array']);

  // Create some booleans to help in the template file.
  if ($vars['region_wrapper'] === 'none') {
    $vars['display_region_wrapper'] = FALSE;
  }
  else {
    $vars['display_region_wrapper'] = TRUE;
  }

  // Copy simple settings into template variables.
  if (module_exists('token')) {
    $vars['additional_attributes'] = token_replace($vars['additional_region_attributes'], array('global'));
  }
  else {
    $vars['additional_attributes'] = $vars['additional_region_attributes'];
  }

  // Pad additional_attributes.
  if (!empty($vars['additional_attributes'])) {
    $vars['additional_attributes'] = str_pad($vars['additional_attributes'], strlen($vars['additional_attributes']) + 2 ,' ', STR_PAD_BOTH);
  }

  // Regardless of the user's setting, we should never output an inner div if
  // there is no region wrapper.
  $vars['display_inner_div'] = $vars['display_region_wrapper'] && $vars['enable_inner_div'];
}
