<?php
// Plugin definition
$plugin = array(
  'title' => t('Sidebar Left'),
  'icon' => 'helm-sidebar-left.png',
  'category' => t('Helm'),
  'theme' => 'helm_sidebar_left',
  'regions' => array(
    'sidebar' => t('Sidebar'),
    'contentmain' => t('Content'),
  ),
);
