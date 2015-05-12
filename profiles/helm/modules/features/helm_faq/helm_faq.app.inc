<?php
/**
 * @file
 * Provides app info for Helm.
 */

/**
 * Implements hook_apps_app_info().
 */
function helm_faq_apps_app_info() {
  return array(
    'demo content description' => '',
    'demo content module' => 'helm_faq_content',
    'post install callback' => 'helm_faq_app_post_install',
  );
}


function helm_faq_app_post_install($status) {
  module_enable('helm_faq_display', 'helm_faq_categories');
}
