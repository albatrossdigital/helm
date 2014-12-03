<?php
/**
 * @file
 * flight_input_formats.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function flight_input_formats_filter_default_formats() {
  $formats = array();

  // Exported format: Rich Text.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Rich Text',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'oembed' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'options' => '',
          'view_mode' => 'full',
          'autoembed' => 1,
        ),
      ),
      'flight_wysiwyg_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'valid_elements' => 'p,a,div,span,h2,h3,h4,section,article,strong,b,i,em,cite,blockquote,small,sub,sup,code,ul,ol,li,dl,dt,dd,table,thead,tbody,th,tr,td,img,caption,br,hr,iframe,figure,figcaption',
          'valid_attributes' => 'src,href,target,width,height,colspan,span,alt,name,title,class,id,data-reaveal-id,data-clearing,data-abide,data-options,data-section,data-section-content,data-section-title',
          'valid_styles' => 'text-align,float',
        ),
      ),
      'media_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'image_resize_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
    ),
  );

  // Exported format: Unfiltered Rich Text.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Unfiltered Rich Text',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'oembed' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'options' => '',
          'view_mode' => 'full',
          'autoembed' => 1,
        ),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 10,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
