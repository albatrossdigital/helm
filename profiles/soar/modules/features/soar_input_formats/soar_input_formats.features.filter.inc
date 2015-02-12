<?php
/**
 * @file
 * soar_input_formats.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function soar_input_formats_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'soar_wysiwyg_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'valid_elements' => 'p,a,div,span,h2,h3,h4,h5,h6,section,article,iframe,object,embed,strong,b,i,em,cite,pre,blockquote,small,sub,sup,code,ul,ol,li,dl,dt,dd,table,thead,tbody,th,tr,td,img,caption,mediawrapper,br',
          'valid_attributes' => 'href,src,target,width,height,colspan,span,alt,name,title,class,id,data-options',
          'valid_styles' => 'text-align,float,margin',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: HTML Code.
  $formats['html_code'] = array(
    'format' => 'html_code',
    'name' => 'HTML Code',
    'cache' => 1,
    'status' => 1,
    'weight' => -7,
    'filters' => array(),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
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
