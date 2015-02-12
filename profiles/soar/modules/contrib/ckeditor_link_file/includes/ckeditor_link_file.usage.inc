<?php

/**
 * @file
 * Functions for recording file usage when using CKEditor Link File links.
 */

/**
 * Implements hook_field_attach_insert().
 *
 * Track file usage for file links included in formatted text. Note that this is
 * heavy-handed, and should be replaced when Drupal's filter system is
 * context-aware.
 */
function ckeditor_link_file_field_attach_insert($entity_type, $entity) {
  _ckeditor_link_file_filter_add_file_usage_from_fields($entity_type, $entity);
}

/**
 * Implements hook_field_attach_update().
 *
 * @see ckeditor_link_file_field_attach_insert().
 */
function ckeditor_link_file_field_attach_update($entity_type, $entity) {
  _ckeditor_link_file_filter_add_file_usage_from_fields($entity_type, $entity);
}

/**
 * Add file usage from file references in an entity's text fields.
 */
function _ckeditor_link_file_filter_add_file_usage_from_fields($entity_type, $entity) {
  // Track the total usage for files from all fields combined.
  $entity_files = ckeditor_link_file_entity_field_count_files($entity_type, $entity);

  list($entity_id, $entity_vid, $entity_bundle) = entity_extract_ids($entity_type, $entity);

  // When an entity has revisions and then is saved again NOT as new version the
  // previous revision of the entity has be loaded to get the last known good
  // count of files. The saved data is compared against the last version
  // so that a correct file count can be created for that (the current) version
  // id. This code may assume some things about entities that are only true for
  // node objects. This should be reviewed.
  // @TODO this conditional can probably be condensed
  if (empty($entity->revision) && empty($entity->old_vid) && empty($entity->is_new) && ! empty($entity->original)) {
    $old_files = ckeditor_link_file_entity_field_count_files($entity_type, $entity->original);

    foreach ($old_files as $fid => $old_file_count) {
      // Were there more files on the node just prior to saving?
      if (empty($entity_files[$fid])) {
        $entity_files[$fid] = 0;
      }
      if ($old_file_count > $entity_files[$fid]) {
        $deprecate = $old_file_count - $entity_files[$fid];

        // Now deprecate this usage
        $file = file_load($fid);

        if ($file) {
          file_usage_delete($file, 'ckeditor_link_file', $entity_type, $entity_id, $deprecate);
        }
        // Usage is deleted, nothing more to do with this file
        unset($entity_files[$fid]);
      }
      // There are the same number of files, nothing to do
      elseif ($entity_files[$fid] ==  $old_file_count) {
        unset($entity_files[$fid]);
      }
      // There are more files now, adjust the difference for the greater number.
      // file_usage incrementing will happen below.
      else {
        // We just need to adjust what the file count will account for the new
        // images that have been added since the increment process below will
        // just add these additional ones in
        $entity_files[$fid] = $entity_files[$fid] - $old_file_count;
      }
    }
  }

  // Each entity revision counts for file usage. If versions are not enabled
  // the file_usage table will have no entries for this because of the delete
  // query above.
  foreach ($entity_files as $fid => $entity_count) {
    if ($file = file_load($fid)) {
      file_usage_add($file, 'ckeditor_link_file', $entity_type, $entity_id, $entity_count);
    }
  }

}

/**
 * Parse file references from an entity's text fields and return them as an array.
 */
function ckeditor_link_file_filter_parse_from_fields($entity_type, $entity) {
  $file_references = array();

  foreach (_ckeditor_link_file_filter_fields_with_text_filtering($entity_type, $entity) as $field_name) {
    if ($field_items = field_get_items($entity_type, $entity, $field_name)) {
      foreach ($field_items as $field_item) {
        // Only search for links within text fields that have content.
        if (!empty($field_item['value'])) {
          // Disable standard libxml errors and handle them ourselves.
          // The function returns the state of error handling prior to calling it
          // so we store the value in order to properly respect any previous
          // modifications to the state of error handling.
          $previous_state = libxml_use_internal_errors(TRUE);

          $dom = new DOMDocument;

          // Proceed if the HTML was loaded successfully.
          if ($dom->loadHTML($field_item['value'])) {
            // Get any libxml errors.
            $errors = libxml_get_errors();

            // Loop through the errors and log them with the watchdog.
            foreach ($errors as $error) {
              $uri = entity_uri($entity_type, $entity);

              // Build a link to view the entity associated with the error.
              if (!empty($uri)) {
                $link = l(t('view'), $uri['path'], array($uri['options']));
              }
              else {
                $link = NULL;
              }

              watchdog('ckeditor_link_file', '@message on line @line at column @column.', array('@message' => $error->message, '@line' => $error->line, '@column' => $error->column), WATCHDOG_NOTICE, $link);
            }

            // Clear the libxml error buffer.
            libxml_clear_errors();

            // Restore libxml error handling to its previous state.
            libxml_use_internal_errors($previous_state);

            // Find all links in the text field.
            $links = $dom->getElementsByTagName('a');

            // Loop through all of the links and check if they represent files.
            foreach ($links as $link) {
              // Find the link's href and trim off the leading slash.
              $href = ltrim($link->getAttribute('href'), '/');

              // Check if the link belongs to CKEditor Link File.
              preg_match_all('`^file/(\d+)$`', $href, $matches);

              foreach ($matches[1] as $fid) {
                $file_references[] = array('fid' => $fid);
              }
            }
          }
        }
      }
    }
  }

  return $file_references;
}

/**
 * Returns an array containing the names of all fields that perform text filtering.
 */
function _ckeditor_link_file_filter_fields_with_text_filtering($entity_type, $entity) {
  list($entity_id, $revision_id, $bundle) = entity_extract_ids($entity_type, $entity);
  $fields = field_info_instances($entity_type, $bundle);

  // Get all of the fields on this entity that allow text filtering.
  $fields_with_text_filtering = array();

  foreach ($fields as $field_name => $field) {
    if (!empty($field['settings']['text_processing'])) {
      $fields_with_text_filtering[] = $field_name;
    }
  }

  return $fields_with_text_filtering;
}

/**
 * Utility function to get the file count in this entity
 *
 * @param type $entity
 * @param type $entity_type
 * @return int
 */
function ckeditor_link_file_entity_field_count_files($entity_type, $entity) {
  $entity_files = array();

  foreach (ckeditor_link_file_filter_parse_from_fields($entity_type, $entity) as $file_reference) {
    if (empty($entity_files[$file_reference['fid']])) {
      $entity_files[$file_reference['fid']] = 1;
    }
    else {
      $entity_files[$file_reference['fid']]++;
    }
  }

  return $entity_files;
}

/**
 * Implements hook_entity_delete().
 */
function ckeditor_link_file_entity_delete($entity, $type) {
  list($entity_id) = entity_extract_ids($type, $entity);

  db_delete('file_usage')
    ->condition('module', 'ckeditor_link_file')
    ->condition('type', $type)
    ->condition('id', $entity_id)
    ->execute();
}

/**
 * Implements hook_field_attach_delete_revision().
 */
function ckeditor_link_file_field_attach_delete_revision($entity_type, $entity) {
  list($entity_id) = entity_extract_ids($entity_type, $entity);

  $files = ckeditor_link_file_entity_field_count_files($entity_type, $entity);

  foreach ($files as $fid => $count) {
    if ($file = file_load($fid)) {
      file_usage_delete($file, 'ckeditor_link_file', $entity_type , $entity_id, $count);
    }
  }
}
