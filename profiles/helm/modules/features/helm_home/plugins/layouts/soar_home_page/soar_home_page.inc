<?php
// Plugin definition
$plugin = array(
  'title' => t('Helm Home Page'),
  'icon' => 'soar-home-page.png',
  'category' => t('Radix'),
  'theme' => 'helm_home_page',
  'regions' => array(
    'topleft' => t('Top Left'),
    'topright' => t('Top Right'),
    'contentmain' => t('Content'),
    'tripleft' => t('Triptych Left'),
    'tripmiddle' => t('Triptych Middle'),
    'tripright' => t('Triptych Right'),
    'lowerleft' => t('Lower Left'),
    'lowerright' => t('Lower Right'),
    'bottom' => t('Bottom')
  ),
);