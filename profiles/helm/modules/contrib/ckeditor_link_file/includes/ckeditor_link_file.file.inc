<?php

/**
 * @file
 * Implementation of CKEditor's hooks for file entities.
 */

/**
 * Implements hook_ckeditor_link_TYPE_autocomplete().
 */
function ckeditor_link_file_ckeditor_link_file_autocomplete($string, $limit) {
  $matches = array();

  $file_types = array_keys(array_filter(variable_get('ckeditor_link_file_autocomplete_file_types', array('- any -' => '- any -'))));
  if (count($file_types)) {
    $query = db_select('file_managed', 'fm')
      ->fields('fm', array('fid', 'filename'))
      ->condition('fm.filename', '%'. db_like($string) .'%', 'LIKE')
      ->orderBy('fm.filename')
      ->orderBy('fm.type')
      ->range(0, $limit)
      ->addTag('file_access');
    if (!in_array('- any -', $file_types)) {
      $query->condition('fm.type', $file_types, 'IN');
    }
    $result = $query->execute();
    foreach ($result as $file) {
      $matches['file/'. $file->fid] = $file->filename;
    }
  }

  return $matches;
}

/**
 * Implements hook_ckeditor_link_TYPE_revert().
 */
function ckeditor_link_file_ckeditor_link_file_revert($path, &$langcode) {
  if (!preg_match('`^file/(\d+)$`', $path, $matches)) {
    return;
  }

  $fid = $matches[1];
  $query = db_select('file_managed', 'fm')
    ->fields('fm', array('filename'))
    ->condition('fm.fid', $fid)
    ->addTag('file_access');
  if ($file = $query->execute()->fetchObject()) {
    return $file->filename;
  }

  return FALSE;
}

/**
 * Implements hook_ckeditor_link_TYPE_url().
 */
function ckeditor_link_file_ckeditor_link_file_url($path, $langcode) {
  if (!preg_match('`^file/(\d+)$`', $path, $matches)) {
    return;
  }

  $fid = $matches[1];

  $link_method = variable_get('ckeditor_link_file_link_method', 'file');

  switch ($link_method) {
    case 'file':
      $url = "file/$fid";
      break;
    case 'url':
      $file = file_load($fid);
      $url = file_create_url($file->uri);
      break;
    case 'download':
      $url = "file/$fid/download";
      break;
  }

  return ckeditor_link_url($url, $langcode);
}

/**
 * Implements hook_ckeditor_link_TYPE_settings().
 */
function ckeditor_link_file_ckeditor_link_file_settings() {
  $form['file'] = array(
    '#type' => 'fieldset',
    '#title' => t('Files'),
  );

  $form['file']['ckeditor_link_file_link_method'] = array(
    '#type' => 'radios',
    '#title' => t('Link method'),
    '#options' => array(
      'file' => t('File'),
      'url' => t('URL'),
      'download' => t('Download'),
    ),
    '#default_value' => variable_get('ckeditor_link_file_link_method', 'file'),
    '#description' => t('Choose whether the link points to the file, the URL of the file or a download of the file.'),
  );

  $options = array();

  foreach (file_type_get_enabled_types() as $type) {
    $options[$type->type] = $type->label;
  }

  $form['file']['ckeditor_link_file_autocomplete_file_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('File types'),
    '#options' => array('- any -' => t('<em>Any file type</em>')) + array_map('check_plain', $options),
    '#default_value' => variable_get('ckeditor_link_file_autocomplete_file_types', array('- any -' => '- any -')),
    '#description' => t('Select the file types to be available as autocomplete suggestions.'),
  );

  return $form;
}
