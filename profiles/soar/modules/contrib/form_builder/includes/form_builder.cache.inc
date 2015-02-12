<?php

/**
 * @file form_builder.cache.inc
 * Functions for temporary storage of form builder structures while editing.
 */

/**
 * Load a form configuration cache.
 *
 * @param $form_type
 *   The type of form being edited.
 * @param $form_id
 *   The unique identifier for the form type.
 * @return
 *   A FAPI array if a cache entry was found. Boolean FALSE if an entry does not
 *   yet exist. Note that an empty FAPI array may exist, so be sure to use
 *   strict comparison (===) when checking return values.
 */
function form_builder_cache_load($form_type, $form_id, $sid = NULL, $reset = FALSE) {
  static $data;
  $sid = isset($sid) ? $sid : session_id();

  if ($reset) {
    $data = NULL;
  }

  if (empty($data) && !empty($form_type) && !empty($form_id)) {
    $data = db_query("SELECT data FROM {form_builder_cache} WHERE type = :type AND form_id = :form_id AND sid = :sid", array(':type' => $form_type, ':form_id' => $form_id, ':sid' => $sid))->fetchField();

    if ($data) {
      $data = unserialize($data);
    }
  }

  return $data;
}

/**
 * Save a form builder cache based on the form structure.
 */
function form_builder_cache_save($form_type, $form_id, $form, $sid = NULL) {
  $sid = isset($sid) ? $sid : session_id();

  if (form_builder_cache_load($form_type, $form_id, $sid) === FALSE) {
    $result = db_insert('form_builder_cache')
      ->fields(array(
        'sid' => $sid,
        'type' => $form_type,
        'form_id' => $form_id,
        'updated' => REQUEST_TIME,
        'data' => serialize($form),
      ))
      ->execute();
  }
  else {
    $result = db_update('form_builder_cache')
      ->fields(array(
        'updated' => REQUEST_TIME,
        'data' => serialize($form),
      ))
      ->condition('sid', $sid)
      ->condition('type', $form_type)
      ->condition('form_id', $form_id)
      ->execute();
  }

  // Ensure caches are fresh for any retrievals made this request.
  form_builder_cache_load(NULL, NULL, NULL, TRUE);

  return $result;
}

function form_builder_cache_delete($form_type, $form_id, $sid = NULL) {
  $sid = isset($sid) ? $sid : session_id();

  return db_delete('form_builder_cache')
    ->condition('sid', $sid)
    ->condition('type', $form_type)
    ->condition('form_id', $form_id)
    ->execute();
}

/**
 * Delete outdated cache entries.
 *
 * @param $expire_threshold
 *   The maximum amount of time allowed for entries to be kept, in seconds.
 */
function form_builder_cache_purge($expire_threshold = NULL) {
  $expire_threshold = isset($expire_threshold) ? $expire_threshold : ini_get('session.cache_expire');

  return db_delete('form_builder_cache')
    ->condition('updated', REQUEST_TIME - $expire_threshold, '<')
    ->execute();
}

/**
 * Compare the cached form with the original and return all changed elements.
 *
 * @return
 *   An array of elements keyed by the element_id of the changed element. Each
 *   value contains an array of the 'original' and 'modified' elements.
 */
function form_builder_cache_difference($form_type, $form_id, $exclude_weight = TRUE) {
  if (($modified_form = form_builder_cache_load($form_type, $form_id)) && $modified_form !== FALSE) {
    $original_form = form_builder_load_form($form_type, $form_id);
    $original_ids = form_builder_get_element_ids($original_form);
    $modified_ids = form_builder_get_element_ids($modified_form);

    // Find the union of IDs in both arrays.
    $element_ids = array_keys(array_flip($original_ids) + array_flip($modified_ids));

    // Build a list of all elements that have changed.
    $differences = array();
    foreach ($element_ids as $element_id) {
      $original = form_builder_get_element($original_form, $element_id);
      $modified = form_builder_get_element($modified_form, $element_id);

      if ($exclude_weight) {
        if (isset($original['#weight'])) {
          unset($original['#weight']);
        }
        if (isset($modified['#weight'])) {
          unset($modified['#weight']);
        }
      }

      if ($original != $modified) {
        $differences[$element_id] = array(
          'original' => $original,
          'modified' => $modified,
        );
      }
    }

    return $differences;
  }
  return FALSE;
}

/**
 * Retrieve a single field from a form cache..
 */
function form_builder_cache_field_load($form_type, $form_id, $element_id, $sid = NULL, $reset = FALSE) {
  $sid = isset($sid) ? $sid : session_id();

  $form = form_builder_cache_load($form_type, $form_id, $sid, $reset);
  return form_builder_get_element($form, $element_id);
}

/**
 * Add or update a single field in a form builder cache.
 */
function form_builder_cache_field_save($form_type, $form_id, $element, $sid = NULL) {
  $sid = isset($sid) ? $sid : session_id();

  $form = form_builder_cache_load($form_type, $form_id, $sid);
  form_builder_set_element($form, $element);
  form_builder_cache_save($form_type, $form_id, $form, $sid);
}

/**
 * Remove a single field from a form builder cache.
 */
function form_builder_cache_field_delete($form_type, $form_id, $element_id, $sid = NULL) {
  $sid = isset($sid) ? $sid : session_id();

  $form = form_builder_cache_load($form_type, $form_id, $sid);
  form_builder_unset_element($form, $element_id);
  form_builder_cache_save($form_type, $form_id, $form, $sid);
}
