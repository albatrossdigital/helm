<?php

/**
 * Preprocess json output template.
 */
function template_preprocess_views_data_export_json_body(&$vars) {
  _views_data_export_header_shared_preprocess($vars);
  // We support not outputting fields when they are empty, so indicate so.
  $vars['hide_empty_support'] = TRUE;
  _views_data_export_body_shared_preprocess($vars);

  $view = $vars['view'];

  foreach ($vars['header'] as $field => $header) {
    // If there is no field label, use 'no name'.
    if (empty($header)) {
      $header = 'no name';
    }
    $vars['field_tag'][$field] = $header;
  }

  foreach ($vars['themed_rows'] as $num => $row) {
    foreach ($row as $field => $content) {

      unset($vars['themed_rows'][$num][$field]);
      $vars['themed_rows'][$num][$vars['field_tag'][$field]] = (string)$content;
    }
  }

  // There should probably be a generic way for renderers to store data as the
  // export completes.
  $display = $view->display_handler;
  if (!$display->is_batched()) {
    $vars['first_in_file'] = TRUE;
  }
  else {
    // We need to know if we're the very first iteration of the export.
    if (isset($display->batched_execution_state->sandbox['finished']) && ($display->batched_execution_state->sandbox['finished'] === 0)) {
      $vars['first_in_file'] = TRUE;
    }
  }

}
