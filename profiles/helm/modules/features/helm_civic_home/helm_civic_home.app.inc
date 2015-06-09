<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function helm_civic_home_apps_app_info() {
  return array(
    'demo content description' => 'Default home page for Helm Civic',
    'configure form' => 'helm_civic_home_app_configure_form',
    //'demo content module' => 'helm_civic_home_content',
    //'demo content enabled' => 'helm_civic_home_apps_app_demo_content_enabled',
    //'demo content enable' => 'helm_civic_home_apps_app_demo_content_enable',
    //'demo content disable' => 'helm_civic_home_apps_app_demo_content_disable',
    //'permissions' => array(),
    //'status callback' => 'helm_civic_home_app_status',
    //'post install callback' => 'helm_civic_home_app_post_install',
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


function helm_civic_home_app_configure_form($form, &$form_state) {
  $form['header'] = array(
    '#type' => 'fieldset',
    '#title' => t('Header settings'),
  );
  $helm_civic_header = helm_civic_home_header_image_url();
  $helm_civic_header_path = file_uri_target($helm_civic_header);
  $helm_civic_image_thumb = array(
    'style_name' => 'thumbnail',
    'path' => $helm_civic_header,//image_style_url('thumbnail',$helm_civic_header),
    'width' => '150',
    'height' => '',
    'alt' => 'Preview',
    'title' => 'Preview',
  );
  $helm_civic_image_message = t('Current image: ').$helm_civic_header_path.'<p>'.theme('image',$helm_civic_image_thumb).'</p>';


  $form['header']['helm_civic_header_image'] =array(
    '#type'          => 'file',
    '#title'         => t('Upload Image'),
    '#widget'        => 'image',
    '#description'   =>  $helm_civic_image_message,
  );
  return $form;
}

function helm_civic_home_app_configure_form_validate($form, &$form_state) {

  $validators = array('file_validate_is_image' => array());

  // Check for a new uploaded logo.
  $file = file_save_upload('helm_civic_header_image', $validators);
  if (isset($file)) {
    // File upload was attempted.
    if ($file) {
      // Put the temporary file in form_values so we can save it on submit.
      $form_state['values']['helm_civic_header_image'] = $file;
    }
    else {
      // File upload failed.
      form_set_error('helm_civic_header_image', t('The header image could not be uploaded.'));
    }
  }
}

function helm_civic_home_app_configure_form_submit($form, &$form_state) {

  // If the user uploaded a new logo or favicon, save it to a permanent location
  // and use it in place of the default theme-provided file.
  if ($file = $form_state['values']['helm_civic_header_image']) {
    unset($form_state['values']['helm_civic_header_image']);
    $filename = file_unmanaged_copy($file->uri);
  }
  else {
    $file = variable_get('helm_civic_home_header_image');
    $filename = $file['path'];
  }
  if(isset($filename)) {
    variable_set('helm_civic_home_header_image', $filename);
  }
}