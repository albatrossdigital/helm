<?php
// Plugin definition
$plugin = array(
  'title' => t('Sidebar Right'),
  'icon' => 'helm-sidebar-right.png',
  'category' => t('Helm'),
  'theme' => 'helm_sidebar_right',
  'regions' => array(
    'sidebar' => t('Sidebar'),
    'contentmain' => t('Content'),
  ),
);
