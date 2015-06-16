<?php
// Plugin definition
$plugin = array(
  'title' => t('Home Page'),
  'icon' => 'helm-home-page.png',
  'category' => t('Helm'),
  'theme' => 'helm_home_page',
  'regions' => array(
    //'abovetop' => t('Above Page'),
    'topleft' => t('Top Left'),
    'topright' => t('Top Right'),
    'contentmain' => t('Content'),
    'tripleft' => t('Triptych Left'),
    'tripmiddle' => t('Triptych Middle'),
    'tripright' => t('Triptych Right'),
    'lowerleft' => t('Lower Left'),
    'lowerright' => t('Lower Right'),
    'quad1' => t('Quadriptych 1'),
    'quad2' => t('Quadriptych 2'),
    'quad3' => t('Quadriptych 3'),
    'quad4' => t('Quadriptych 4'),
    'bottom' => t('Bottom'),
    'bottom_banner' => t('Bottom banner'),
  ),
);
