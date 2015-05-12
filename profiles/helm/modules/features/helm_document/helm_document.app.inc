<?php
/**
 * @file
 * Provides app info for Helm.
 */

/**
 * Implements hook_apps_app_info().
 */
function helm_document_apps_app_info() {
  return array(
    'demo content description' => '',
    'demo content module' => 'helm_document_content',
    'post install callback' => 'helm_document_app_post_install',
  );
}


function helm_document_app_post_install($status) {
  module_enable('helm_document_display', 'helm_document_categories');
}
