<?php


/**
 * Implements hook_variable_info().
 */
function media_inkfilepicker_variable_info($options) {

  $variable['media_inkfilepicker_key'] = array(
    'access' => 'administer media_inkfilepicker',
    'title' => t('Ink Filepicker key', array(), $options),
    'description' => t('Create an account on Ink Filepicker and then go to their !link.', array('!link' => l('Developer Portal', 'https://developers.inkfilepicker.com/apps'))),
    'type' => 'string',
  );

  $variable['media_inkfilepicker_services'] = array(
    'title' => t('Enabled services', array(), $options),
    'type' => 'string',
    'default' => array('COMPUTER', 'URL', 'IMAGE_SEARCH', 'DROPBOX', 'GOOGLE_DRIVE', 'FACEBOOK', 'FLICKR'),
    'element' => array(
      '#type' => 'checkboxes',
      '#options' => media_inkfilepicker_services(),
    ),
  );

  return $variable;
}


/**
 * Lists the available Filepicker.io services.
 * List from https://developers.filepicker.io/docs/web/#pick.
 */
function media_inkfilepicker_services() {
  return array(
    'BOX' => 'Box',
    'COMPUTER' => 'Upload from Computer',
    'DROPBOX' => 'Dropbox',
    'EVERNOTE' => 'Evernote',
    'FACEBOOK' => 'Facebook',
    'FLICKR' => 'Flickr',
    'FTP' => 'FTP',
    'GITHUB' => 'Github',
    'GOOGLE_DRIVE' => 'Google Drive',
    'SKYDRIVE' => 'SkyDrive',
    'PICASA' => 'Picasa',
    'WEBDAV' => 'Webdav',
    'GMAIL' => 'Gmail',
    'IMAGE_SEARCH' => 'Image Search',
    'INSTAGRAM' => 'Instagram',
    'URL' => 'URL',
    'VIDEO' => 'Webcam (video capture)',
    'WEBCAM' => 'Webcam (capture still image)',
  );
}

