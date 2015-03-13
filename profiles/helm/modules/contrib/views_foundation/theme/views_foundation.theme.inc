<?php

/**
 * @file
 * The theme system, which controls the output of views foundation plugins.
 */

/**
 * Theme the Foundation Orbit Slider.
 */
function template_preprocess_views_foundation_orbit(&$variables) {
  if (variable_get('views_foundation_orbit', 1)) {
    // Add JavaScript file.
    drupal_add_js(check_url(variable_get('views_foundation_js')) . '/foundation/foundation.orbit.js', array('type' => 'file', 'group' => -999, 'scope' => 'footer'));
  }
  $variables['captions'] = array();
  // Add caption field to $variables array if it is selected.
  if (!empty($variables['options']['caption_field'])) {
    foreach ($variables['view']->style_plugin->rendered_fields as $index => $row) {
      foreach ($row as $key => $value) {
        if ($key == $variables['options']['caption_field']) {
          $variables['captions'][$index] = $value;
        }
      }
    }
  }
  unset($variables['options']['uses_fields'], $variables['options']['caption_field'], $variables['options']['grouping']);
  // Prepare orbit slider settings.
  foreach ($variables['options'] as $key => $value) {
    $options[] = $key . ':' . $value;
  }
  $variables['options'] = implode('; ', $options);

}

/**
 * Theme the Foundation Orbit Clearing.
 */
function template_preprocess_views_foundation_clearing(&$variables) {
  // Preprare fields for the output.
  foreach ($variables['view']->style_plugin->rendered_fields as $index => $row) {
    foreach ($row as $key => $value) {
      if ($variables['options']['image'] == $key) {
        // Get image url from img tag.
        if ($value) {
          $url = simplexml_import_dom(DOMDocument::loadHTML($value))->xpath("//img/@src");
          $variables['fields'][$index]['image'] = check_url(reset($url));
        }
      }
      elseif ($variables['options']['thumbnail'] == $key) {
        // Get thumbnail url from img tag.
        if ($value) {
          $url = simplexml_import_dom(DOMDocument::loadHTML($value))->xpath("//img/@src");
          $variables['fields'][$index]['thumbnail'] = check_url(reset($url));
        }
      }
      elseif ($variables['options']['caption'] == $key) {
        $value ? $variables['fields'][$index]['caption'] = check_plain(strip_tags($value)) : '';
      }
    }
    if (!isset($variables['fields'][$index]['image'])) {
      // Unset row if main image not found.
      unset($variables['fields'][$index]);
    }
    elseif (!isset($variables['fields'][$index]['thumbnail'])) {
      // Use main image for thumbnail if thumbnail not set.
      $variables['fields'][$index]['thumbnail'] = $variables['fields'][$index]['image'];
    }
  }
  // Add class for thumbnail border.
  $variables['class']['link'] = $variables['options']['thumb_border'] ? 'th' : '';

  if (variable_get('views_foundation_clearing', 1)) {
    // Add Foundation Clearing JavaScript.
    drupal_add_js(check_url(variable_get('views_foundation_js')) . '/foundation/foundation.clearing.js', array('type' => 'file', 'group' => -999, 'scope' => 'footer'));
  }
}

/**
 * Theme the Foundation Pricing Tables row.
 */
function template_preprocess_views_foundation_pricing_tables(&$variables) {
  $view = $variables['view'];
  $options = $variables['options'];
  $variables['fields'] = array(
    'title_field' => '',
    'description_field' => '',
    'price_field' => '',
    'bullet_fields' => array(),
    'button_field' => '',
  );
  foreach ($view->field as $id => $field) {
    $item = $view->field[$id]->theme($variables['row']);
    if ($options['title_field'] == $id) {
      $variables['fields']['title_field'] = $item;
    }
    elseif ($options['price_field'] == $id) {
      $variables['fields']['price_field'] = $item;
    }
    elseif ($options['description_field'] == $id) {
      $variables['fields']['description_field'] = $item;
    }
    elseif ($options['button_field'] == $id) {
      $variables['fields']['button_field'] = $item;
    }
    elseif ($field) {
      $variables['fields']['bullet_fields'][] = $item;
    }
  }
}
