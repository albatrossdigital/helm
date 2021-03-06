<?php

function angular_media_admin_form($form, &$form_state) {
  $form['defaults'] = array(
    '#title' => 'Defaults',
    '#type' => 'fieldset',
  );

  $options = angular_media_tabs();
  $form['defaults']['angular_media_tabs'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Enabled browser tabs'),
    '#options' => $options,
    '#default_value' => variable_get('angular_media_tabs', array()),
    '#description' => t('Media browser tabs which are allowed for this field. If no tabs are selected, they will all be available.'),
  );

  $options = file_entity_type_get_names();
  $form['defaults']['angular_media_allowedTypes'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Allowed file types'),
    '#options' => $options,
    '#default_value' => variable_get('angular_media_allowedTypes', array()),
    '#description' => t('File types which are allowed for this field. If no file types are selected, they will all be available.'),
  );

  $visible_steam_wrappers = file_get_stream_wrappers(STREAM_WRAPPERS_VISIBLE);
  $options = array();
  foreach ($visible_steam_wrappers as $scheme => $information) {
    $options[$scheme] = check_plain($information['name']);
  }

  $form['defaults']['angular_media_allowedSchemes'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Allowed URI schemes'),
    '#options' => $options,
    '#default_value' => variable_get('angular_media_allowedSchemes', array()),
    '#description' => t('URI schemes which are allowed for this field. If no schemes are selected, they will all be available.'),
  );

  $options = angular_media_cropRatios();
  $form['defaults']['angular_media_cropRatios'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Default crop ratio'),
    '#options' => $options,
    '#default_value' => variable_get('angular_media_cropRatios', array('free')),
    '#description' => t('Default crop ratio for images.'),
  );



  $form['flickr'] = array(
    '#title' => 'Flickr',
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
  );
  $form['flickr']['angular_media_flickrKey'] = array(
    '#type' => 'textfield',
    '#title' => t('API Key'),
    '#default_value' => variable_get('angular_media_flickrKey', ''),
    '#description' => t('Obtain your !link.', array('!link' => l('api key from Flickr', 'https://www.flickr.com/services/apps/create/apply', array('target' => '_blank')))),
  );
  $form['flickr']['angular_media_flickrSearch'] = array(
    '#type' => 'textfield',
    '#title' => t('Default search term'),
    '#default_value' => variable_get('angular_media_flickrSearch', ''),
  );
  



  $form['ckeditor'] = array(
    '#title' => 'CKEditor Settings',
    '#type' => 'fieldset',
    '#description' => t('To enable the Angular Media Dialog as the Choose Files plugin when adding Pictures or Links, enable both the Angular Media Dialog plugin on your !profile'),
  );

  $options = angular_media_tabs();
  $form['ckeditor']['angular_media_ckeditor_tabs_image'] = array(
    '#type' => 'checkboxes',
    '#title' => t('CKEditor Image browser tabs'),
    '#options' => $options,
    '#default_value' => variable_get('angular_media_ckeditor_tabs', array('upload', 'file', 'flickr')),
    '#description' => t('Media browser tabs which are allowed when browsing images.'),
  );

  $options['link'] = t('Link browser');
  $form['ckeditor']['angular_media_ckeditor_tabs_link'] = array(
    '#type' => 'checkboxes',
    '#title' => t('CKEditor Link browser tabs'),
    '#options' => $options,
    '#default_value' => variable_get('angular_media_ckeditor_tabs', array('upload', 'link', 'file')),
    '#description' => t('Media browser tabs which are allowed when browsing for links.'),
  );

  $options = array('' => t('None'));
  $types = array('file', 'image');
  foreach (field_info_fields() as $index => $field) {
    if (in_array($field['type'], $types)) {
      $options[$index] = $index;
    }
  }
  
  $form['ckeditor']['angular_media_ckeditor_field_image'] = array(
    '#title' => t('Images: Add to field'),
    '#type' => 'select',
    '#default_value' => variable_get('angular_media_ckeditor_field_image', ''),
    '#options' => $options,
    '#description' => t('Select a field to append to when selecting images in the CKEditor image source browser.'),
  );

  $form['ckeditor']['angular_media_ckeditor_field_link'] = array(
    '#title' => t('Files: Add to field'),
    '#type' => 'select',
    '#default_value' => variable_get('angular_media_ckeditor_field_link', ''),
    '#options' => $options,
    '#description' => t('Select a field to append to when selecting files in the CKEditor link browser.'),
  );

  $options = angular_media_cropRatios();
  $form['ckeditor']['angular_media_ckeditor_cropRatio'] = array(
    '#type' => 'checkboxes',
    '#title' => t('CKEditor crop ratio'),
    '#options' => $options,
    '#default_value' => variable_get('angular_media_cropRatios', array_keys($options)),
    '#description' => t('Allowed crop ratios for images uploaded in the CKEditor dialog. If none are selected, cropping will be disabled. If one is selected, it is forced. If multiple are selected the user will be able to toggle their crop choice.'),
  );
  
  return system_settings_form($form);
}

