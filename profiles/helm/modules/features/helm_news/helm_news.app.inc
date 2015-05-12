<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function helm_news_apps_app_info() {
  return array(
    'demo content description' => '',
    'demo content module' => 'helm_news_content',
    //'demo content enabled' => 'helm_news_apps_app_demo_content_enabled',
    //'demo content enable' => 'helm_news_apps_app_demo_content_enable',
    //'demo content disable' => 'helm_news_apps_app_demo_content_disable',
    //'permissions' => array(),
    //'status callback' => 'helm_news_app_status',
    'post install callback' => 'helm_news_app_post_install',
    /*
    // Demo Content.
    'demo content description' => 'This tells what add demo content will do it is placed on the configure form',
    // The preferred way for an app to provide demo content is to have a module
    // that when enabled will add demo content, and when disabled will removed
    // demo content.
    // This module should be a submodule or part of the manifest dependent
    // modules.
    'demo content module' => 'appname_demo_content',

    // If the demo content is provided in a different way one should provide the
    // following callbacks:
    // - This callback should return TRUE if demo content is on.
    'demo content enabled' => 'appname_demo_content_enabled',
    // - This callback should turn on demo content and return TRUE.
    'demo content enable' => 'appname_demo_content_enable',
    // - This callback should turn off demo content and return TRUE.
    'demo content disable' => 'appname_demo_content_disable',

    // This form will be rendered on the app config page:
    'configure form' => 'appname_app_configure_form',
    'post install callback' => 'appname_app_post_install',
    // This will be called after the app is enabled initially or when the app
    // has been uninstalled.
    'status callback' => 'appname_app_status',
    // This will provide permission configuration on the configre form.
    // This will also set the permissions on install of the app.
    'permissions' => array(
      'access my app' => array('role 1', 'role 2'),
    ),
    // Same format as permissions but key includes [entity type]:[bundle] of the
    // the og group the permission should default for.
    'og permissions' => array(
      'node:group:create myapp content' => array('role 1', 'role 2'),
    ),
    */
  );
}

//function helm_news_app_status($status) {
//  dpm($status);
//}

function helm_news_app_post_install($status) {
  module_enable('helm_news_display', 'helm_news_categories');
}


function helm_news_apps_app_demo_content_enabled() {
  return module_exists('helm_news_content');
}

function helm_news_apps_app_demo_content_enable() {
  module_enable('helm_news_content', 'helm_news_categories');
}

function helm_news_apps_app_demo_content_disable() {
  module_disable('helm_news_content', 'helm_news_categories');
}