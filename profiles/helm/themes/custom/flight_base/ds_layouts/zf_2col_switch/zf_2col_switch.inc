<?php
/**
 * @file
 * Definition of Zurb Foundation Two column Display Suite layout.
 */

function ds_zf_2col_switch() {
  return array(
    'label' => t('Foundation 2col switched (right on top mobile)'),
    'regions' => array(
      'left' => t('Left'),
      'right' => t('Right'),
    ),
    'image' => TRUE,
  );
}
