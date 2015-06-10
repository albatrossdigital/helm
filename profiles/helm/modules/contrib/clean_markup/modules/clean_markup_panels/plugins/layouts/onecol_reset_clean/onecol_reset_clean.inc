<?php
/**
 * @file
 * Define a one-column reset style plugin.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Clean Markup Reset'),
  'category' => t('Clean Markup'),
  'icon' => 'onecol_reset_clean.png',
  'theme' => 'panels_onecol_reset_clean',
  'regions' => array('middle' => t('Middle column')),
);
