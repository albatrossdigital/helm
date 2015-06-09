<?php
/**
 * Administration Menu select API documentation.
 */

/**
 * Implements hook_admin_select_info().
 *
 * @return
 *   An associative array of Administration Menu modules provided by this
 *   module, keyed by tag name with the following properties:
 *   - title: The human readable name of the module.
 *   - access arguments: An array of arguments for user_access().
 *   - suppress callback: The modules suppress function.
 *   - file: (optional) The include file where the callback function resides.
 */
function hook_admin_select_info() {
  $info = array();

  $info['MYMODULE'] = array(
    'title' => t('My Module'),
    'access arguments' => array('access MYMODULE'),
    'suppress callback' => 'MYMODULE_suppress',
    'file' => drupal_get_path('module', 'MYMODULE') . '/MYMODULE.admin_select.inc',
  );

  return $info;
}
