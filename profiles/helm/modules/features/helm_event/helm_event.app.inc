<?php
/**
 * @file
 * Provides app info for Helm.
 */

/**
 * Implements hook_apps_app_info().
 */
function helm_event_apps_app_info() {
  return array(
    'demo content description' => '',
    'demo content module' => 'helm_event_content',
    'post install callback' => 'helm_event_app_post_install',
  );
}


function helm_event_app_post_install($status) {
  module_enable('helm_event_display', 'helm_event_categories');
}
