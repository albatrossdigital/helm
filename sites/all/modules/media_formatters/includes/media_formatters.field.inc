<?php


/******************************* FIELD FORMATTERS ***************************** */

/**
* Implements hook_field_formatter_info().
*/
function media_formatters_field_formatter_info() {
  $info = array(
    'image_style_url' => array(
      'label' => t('URL to image style'),
      'field types' => array('file', 'image'),
      'settings'  => array(
        'image_style' => 'default',
      ),
    ),
    'image_link' => array(
      'label' => t('Image linking to another field'),
      'field types' => array('file', 'image'),
      'settings'  => array(
        'image_style' => 'default',
        'link_field' => '',
      ),
    ),
    'media_formatter_icons' => array(
      'label' => t('Nice icons with iconfont'),
      'field types' => array('file', 'image'),
      'settings'  => array(
        'thumbnail_size' => 'sm',
        'image_style' => '',
      ),
    ),
    'lazysizes' => array(
      'label' => t('Responsive lazy-loaded images'),
      'field types' => array('file', 'image'),
      'settings'  => array(
        'image_style' => '',
        'show_src' => FALSE,
        'link_field' => '',
        'show_attribution' => TRUE,
        'image_style_xs' => 'default',
        'image_style_sm' => 'default',
        'image_style_md' => 'default',
        'image_style_lg' => 'default',
      ),
    ),
    'bootstrap_lightbox' => array(
      'label' => t('Bootstrap lightbox'),
      'field types' => array('file', 'image'),
      'settings'  => array(
        'image_style' => 'default',
        'image_style_lightbox' => '',
        'image_style_first' => '',
        'thumbnail_num' => '',
        'class' => 'col-sm-4',
      ),
    ),
    'video_click_to_play' => array(
      'label' => t('Video click-to-play'),
      'field types' => array('file'),
      'settings'  => array(
        'click_format' => 'inline',
        'autoplay' => TRUE,
        'v_class' => 'embed-responsive-16by9',
        'play_class' => 'button icon-play',
        'light_class' => 'col-xs-12',
        'image_style_xs' => 'default',
        'image_style_sm' => 'default',
        'image_style_md' => 'default',
        'image_style_lg' => 'default',
        'image_style' => '',
        'show_attribution' => TRUE,
      ),
    ),
    'flexible_media' => array(
      'label' => t('Flexible media'),
      'field types' => array('file', 'image'),
      'settings'  => array(
        'image_style' => '',
        'link_field' => '',
        'show_attribution' => TRUE,
        'image_style_xs' => 'default',
        'image_style_sm' => 'default',
        'image_style_md' => 'default',
        'image_style_lg' => 'default',
        'image_style_lightbox' => '',
        'class' => '',
        'click_format' => 'lightbox',
        'autoplay' => TRUE,
        'v_class' => '',
        'play_class' => 'button icon-play',
        'file_view_mode' => 'default',
      ),
    ),
  );
  return $info;
}


function media_formatters_field_info_alter(&$info) {
  //dpm($info);
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function media_formatters_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {

  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];

  // Add fields
  switch ($display['type']) {

    case 'image_style_url':
      $element['image_style'] = array(
        '#title' => t('Thumbnail image style'),
        '#type' => 'select',
        '#default_value' => $settings['image_style'],
        '#empty_option' => t('None (do not include this)'),
        '#options' => _media_formatters_image_style_options(),
        '#description' => t('This is only relevant if a Thumbnail image field is selected above.'),
      );
      break;

    case 'image_link':
      $element = array();
      $element['link_field'] = array(
        '#title' => t('Link field'),
        '#type' => 'select',
        '#default_value' => $settings['link_field'],
        '#options' => _media_formatters_fields('link_field'),
      );
      $element['image_style'] = array(
        '#title' => t('Image style'),
        '#type' => 'select',
        '#default_value' => $settings['image_style'],
        '#empty_option' => t('None (just use the original image)'),
        '#options' => _media_formatters_image_style_options(),
      );
      break;

    case 'media_formatter_icons':
      $element['thumbnail_size'] = array(
        '#title' => t('Thumbnail image style'),
        '#type' => 'select',
        '#default_value' => $settings['thumbnail_size'],
        '#empty_option' => t('sm'),
        '#options' => array(
          'sm' => t('Small (inline)'),
          'md' => t('Medium'),
          'lg' => t('Large'),
        ),
        '#description' => t('Select the thumbnail size. Additional customization can be done with css.'),
      );
      $element['image_style'] = array(
        '#title' => t('Thumbnail image style'),
        '#type' => 'select',
        '#default_value' => $settings['image_style'],
        '#empty_option' => t('None (use icon)'),
        '#options' => _media_formatters_image_style_options(),
        '#description' => t('If you would like a thumbnail image to be displayed in place of the icon for images, select an Image Style here.  Leaving this as "None" will display an icon for images.'),
      );
      break;

    case 'lazysizes':
      $element = _media_formatters_form_lazysizes($field, $instance, $view_mode, $form, $form_state, $settings);
      break;

    case 'bootstrap_lightbox':
      $element = _media_formatters_form_bootstrap_lightbox($field, $instance, $view_mode, $form, $form_state, $settings);
      break;

    case 'video_click_to_play':
      $element = _media_formatters_form_video_click_to_play($field, $instance, $view_mode, $form, $form_state, $settings);
      $image_styles = image_style_options(FALSE, PASS_THROUGH);
      $element['image_before'] = _media_formatters_hack_fieldset_before('Image Placeholder Settings');
      $element = array_merge($element, _media_formatters_form_lazysizes($field, $instance, $view_mode, $form, $form_state, $settings));
      $element['image_after'] = _media_formatters_hack_fieldset_after();
      break;

    case 'flexible_media':

      $element['image_before'] = _media_formatters_hack_fieldset_before('Image Settings');
      $element = array_merge($element, _media_formatters_form_lazysizes($field, $instance, $view_mode, $form, $form_state, $settings));

      $element['image_style_lightbox'] = array(
        '#title' => t('Lightbox image style'),
        '#type' => 'select',
        '#default_value' => $settings['image_style_lightbox'],
        '#empty_option' => t('None (no lightbox)'),
        '#options' => _media_formatters_image_style_options(),
        '#description' => t('The large image style used the lightbox. Set to None to not show a lightbox.'),    
      );
      $element['class'] = array(
        '#title' => t('Class'),
        '#type' => 'textfield',
        '#size' => 20,
        '#default_value' => $settings['class'],
        '#description' => t('The class for the lightbox thumb items. Ex: col-xs-12 or col-sm-4.  See the !docs for more.', array('!docs' => l('Ekko lightbox documentation', 'http://ashleydw.github.io/lightbox/'))),
      );
      $element['image_after'] = _media_formatters_hack_fieldset_after();

      $element['video_before'] = _media_formatters_hack_fieldset_before('Video Settings');
      $element = array_merge($element, _media_formatters_form_video_click_to_play($field, $instance, $view_mode, $form, $form_state, $settings));
      $element['video_after'] = _media_formatters_hack_fieldset_after();

      $element['file_before'] = _media_formatters_hack_fieldset_before('File Settings');
      $element['file_view_mode'] = array(
        '#title'   => t('View mode'),
        '#type'    => 'select',
        '#options' => file_entity_view_mode_labels(),
        '#default_value' => $settings['file_view_mode'],
        // Never empty, so no #empty_option
      );
      $element['file_after'] = _media_formatters_hack_fieldset_after();
      break;
  }
 
  return $element;
}

/**
 * hook_field_formatter_settings_form doesn't allow fieldsets in these settings forms
 * without setting #parent on all children see: 
 * https://api.drupal.org/api/drupal/modules!field_ui!field_ui.api.php/function/hook_field_formatter_settings_form/7#comment-48048
 */
function _media_formatters_hack_fieldset_before($title) {
  return array('#markup' => '<fieldset class="form-wrapper panel panel-default" id="edit-image"><legend class="panel-heading"><div class="panel-title fieldset-legend">' . t($title) . '</div></legend><div class="panel-body fieldset-wrapper">');
}

/**
 * hook_field_formatter_settings_form doesn't allow fieldsets in these settings forms
 * without setting #parent on all children see: 
 * https://api.drupal.org/api/drupal/modules!field_ui!field_ui.api.php/function/hook_field_formatter_settings_form/7#comment-48048
 */
function _media_formatters_hack_fieldset_after() {
  return array('#markup' => '</div></fieldset>');
}


/**
 * Implements hook_field_formatter_settings_summary().
 * @todo
 */
function media_formatters_field_formatter_settings_summary($field, $instance, $view_mode) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];

  $summary = array();

  foreach ($settings as $key => $value) {
    if(!is_array($value)) {
      $summary[] = $key . ': ' . $value;
    }
  }
  /*$image_styles = image_style_options(FALSE, PASS_THROUGH);
  // Unset possible 'No defined styles' option.
  unset($image_styles['']);
  // Styles could be lost because of enabled/disabled modules that defines
  // their styles in code.
  if (isset($image_styles[$settings['image_style']])) {
    $summary[] = t('Image style: @style', array('@style' => $image_styles[$settings['image_style']]));
  }
  else {
    $summary[] = t('Original image');
  }*/

  return implode('<br />', $summary);
}



/******************************* FORMATTER FORM FUNCTIONS ***************************** */
/**
 * lazysizes form.
 */
function _media_formatters_form_lazysizes($field, $instance, $view_mode, $form, &$form_state, $settings) {
  $element = array();
  $element['markup'] = array(
    '#markup' => '<div>' . t('For details, see the !docs.', array('!docs' => l('lazysizes docs', 'http://afarkas.github.io/lazysizes/#examples'))) . '</div>',
    '#weight' => -2,
  );
  $image_styles = _media_formatters_image_style_options();
  $element['show_src'] = array(
    '#title' => t('Use Low Quality Image Placeholder'),
    '#type' => 'checkbox',
    '#default_value' => $settings['show_src'],
    '#description' => t('!doc are recommended for above-the-fold images. Read the docs for more details.', array(
      '!doc' => l('Low Quality Image Placeholders', 'http://afarkas.github.io/lazysizes/#examples')
    ))
  );
  $element['image_style'] = array(
    '#title' => t('Default image style'),
    '#type' => 'select',
    '#default_value' => $settings['image_style'],
    '#empty_option' => t('None (use original image)'),
    '#options' => $image_styles,
    '#description' => t('Select an image style to use for the !doc.  Leave as "None" if you would like to not use a Low Quality Image Placeholder.', array(
      '!doc' => l('Low Quality Image Placeholder', 'http://afarkas.github.io/lazysizes/#examples')
    ))
  );
  $element['image_style_xs'] = array(
    '#title' => t('Extra small image style'),
    '#type' => 'select',
    '#default_value' => $settings['image_style_xs'],
    '#empty_option' => t('None (do not use this style)'),
    '#options' => $image_styles,
  );
  $element['image_style_sm'] = array(
    '#title' => t('mall image style'),
    '#type' => 'select',
    '#default_value' => $settings['image_style_sm'],
    '#empty_option' => t('None (do not use this style)'),
    '#options' => $image_styles,
  );
  $element['image_style_md'] = array(
    '#title' => t('Medium image style'),
    '#type' => 'select',
    '#default_value' => $settings['image_style_md'],
    '#empty_option' => t('None (do not use this style)'),
    '#options' => $image_styles,
  );
  $element['image_style_lg'] = array(
    '#title' => t('Large image style'),
    '#type' => 'select',
    '#default_value' => $settings['image_style_lg'],
    '#empty_option' => t('None (do not use this style)'),
    '#options' => $image_styles,
  );
  $element['show_attribution'] = array(
    '#title' => t('Show attribution and license information'),
    '#type' => 'checkbox',
    '#default_value' => $settings['show_attribution'],
  );
  $element['link_field'] = array(
    '#title' => t('Link field'),
    '#type' => 'select',
    '#default_value' => $settings['link_field'],
    '#options' => _media_formatters_fields('link_field', array('' => t('- None -'))),
  );
  dpm($settings);
  return $element;
}

/**
 * Bootstrap lightbox form.
 */
function _media_formatters_form_bootstrap_lightbox($field, $instance, $view_mode, $form, &$form_state, $settings) {
  $element = array();
  $image_styles = _media_formatters_image_style_options();
  $element['image_style'] = array(
    '#title' => t('Thumbnail image style'),
    '#type' => 'select',
    '#default_value' => $settings['image_style'],
    '#empty_option' => t('None (use original image)'),
    '#options' => $image_styles,
    '#description' => t('The image style used for thumbnails'),
  );
  $element['image_style_lightbox'] = array(
    '#title' => t('Lightbox image style'),
    '#type' => 'select',
    '#default_value' => $settings['image_style_lightbox'],
    '#empty_option' => t('None (use original image)'),
    '#options' => $image_styles,
    '#description' => t('The large image style used the lightbox.'),    
  );
  $element['image_style_first'] = array(
    '#title' => t('First thumbnail image style'),
    '#type' => 'select',
    '#default_value' => $settings['image_style_first'],
    '#empty_option' => t('None'),
    '#options' => $image_styles,
    '#description' => t('Select an image style for the first thumbnail image, if you would like it to appear bigger than the others. Leave as "None" to display all thumbnails as the same Image Style.'),
  );
  $element['thumbnail_num'] = array(
    '#title' => t('Show'),
    '#type' => 'textfield',
    '#default_value' => $settings['thumbnail_num'],
    '#empty_option' => '',
    '#size' => 5,
    '#field_suffix' => t(' thumbnails'),
    '#description' => t('Leave blank to display all thumbnails'),
  );
  $element['class'] = array(
    '#title' => t('Class'),
    '#type' => 'textfield',
    '#size' => 20,
    '#default_value' => $settings['class'],
    '#description' => t('The class for the lightbox thumb items. Ex: col-xs-12 or col-sm-4.  See the !docs for more.', array('!docs' => l('Ekko lightbox documentation', 'http://ashleydw.github.io/lightbox/'))),
  );
  return $element;
}


/**
 * Video click-to-play form.
 */
function _media_formatters_form_video_click_to_play($field, $instance, $view_mode, $form, &$form_state, $settings) {
  $element = array();
  $element['format'] = array(
    '#title' => t('format'),
    '#type' => 'radios',
    '#default_value' => $settings['format'],
    '#options' => array(
      'inline' => 'Play video in-place',
      'lightbox' => 'Play video in a Lightbox.'
    ),
  );
  $element['autoplay'] = array(
    '#title' => t('Autoplay'),
    '#type' => 'checkbox',
    '#default_value' => $settings['autoplay'],
    '#description' => t('Attempt to autoplay the video when clicked. Currently only works with Youtube.'),
  );
  $element['v_class'] = array(
    '#title' => t('Responsive Class'),
    '#type' => 'textfield',
    '#default_value' => $settings['v_class'],
    '#description' => t('The responsive class for the video. Ex: embed-responsive-16by9 or embed-responsive-4by3.  See the !docs for more.', array('!docs' => l('Bootstrap documentation', 'http://getbootstrap.com/components/#responsive-embed'))),
  );
  $element['play_class'] = array(
    '#title' => t('Play button class(es)'),
    '#type' => 'textfield',
    '#default_value' => $settings['play_class'],
  );
  $element['light_class'] = array(
    '#title' => t('Lightbox thumbnail Class'),
    '#type' => 'textfield',
    '#default_value' => $settings['light_class'],
    '#description' => t('The class for the lightbox thumb items. Ex: col-xs-12 or col-sm-4.  See the !docs for more.', array('!docs' => l('Ekko lightbox documentation', 'http://ashleydw.github.io/lightbox/'))),
  );
  return $element;
}






/**
 * Implements hook_field_formatter_view().
 */
function media_formatters_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  $settings = $display['settings'];
    
  foreach ($items as $delta => $item) {
    
    switch ($display['type']) {
      case 'image_style_url':
        $uri = array(
          'path' => file_create_url(),
          'options' => array(),
        );
        $element[$delta] = array(
          '#markup' =>  $item['uri'] ?  image_style_url($settings['image_style'], $item['uri']) : '',
        );
        break;

      case 'image_link':
        if ($item['uri']) {
          $item['path'] = $item['uri'];
          $item['style_name'] = $settings['image_style'];
          $markup = theme('image_style', $item);
          if (!empty($entity->{$settings['link_field']})) {
            $wrapper = entity_metadata_wrapper($entity_type, $entity);
            $markup = !empty($entity->{$settings['link_field']}) ? l($markup, $wrapper->{$settings['link_field']}->url->value(), array('html' => TRUE)) : $markup;
          }
        }
        else {
          $markup = '';
        }
        $element[$delta] = array(
          '#markup' => $markup,
        );
        break;

      case 'lazysizes':
        $markup = _media_formatters_view_lazysizes($entity_type, $entity, $field, $instance, $langcode, $item, $display, $settings);
        if (!empty($markup)) {
          $element[$delta] = array(
            '#markup' => $markup,
          );
        }
        break;

      case 'bootstrap_lightbox':
        $options = array(
          'is_hidden' => (!empty($settings['thumbnail_num']) && $delta+1 > (int)$settings['thumbnail_num']) ? TRUE : FALSE,
          'path' => image_style_url($settings['image_style'], $item['uri']),
          'path_lightbox' => image_style_url($settings['image_style_lightbox'], $item['uri']),
          'gallery' => $instance['field_name'],
          'class' => $settings['class'],
          'title' => $item['title'],
          'alt' => $item['alt'],
        );
        $markup = theme('image_lightbox', $options);
        $element[$delta] = array(
          '#markup' => $markup,
        );
        $display['combine_fields'] = TRUE;
        break;

      case 'video_click_to_play':
        // We currently only support oembed fields
        // @todo: Generalize this to add support for video fields too.
        $markup = _media_formatters_view_video_click_to_play($entity_type, $entity, $field, $instance, $langcode, $item, $display, $settings);
        $element[$delta] = array(
          '#markup' => $markup,
        );
        break;

      case 'flexible_media':
        $markup = _media_formatters_view_flexible_media($entity_type, $entity, $field, $instance, $langcode, $item, $display, $settings, $delta);
        $element[$delta] = array(
          '#markup' => $markup,
        );
        break;
    }

  } // foreach


  // Boostrap lightbox
  if (!empty($display['combine_fields'])) {
    $element[0]['#prefix'] = '<div class="row lightbox-gallery-wrapper">';
    $element[(count($element) - 1)]['#suffix'] = '</div>';
    $element = array($element);
  }

  // Add a default image to image_super formats
  // @todo: this isn't working...does drupal hide a field if it is empty?
  /*if (empty($items) && $display['type'] === 'image_super' && !empty($settings['placeholder_dimensions'])) {
    $url = 'http://placehold.it/' . $settings['placeholder_dimensions'];
    $options = array(
      'query' => array(),
      'absolute' => TRUE
    );
    if (!empty($settings['placeholder_text'])) {
      $options['query']['text'] = $settings['placeholder_text'];
    }
    $element[0] = array(
      '#markup' => '<img src="' . url($url, $options) . '" />',
    );
    //dpm(drupal_render($element));
  }*/

  return $element;
}


/******************************* FORMATTER VIEW FUNCTIONS ***************************** */

/**
 * Formatter view for lazysizes.
 */
function _media_formatters_view_lazysizes($entity_type, $entity, $field, $instance, $langcode, $item, $display, $settings) {
  $markup = theme('image_lazysizes', array(
    'item' => $item, 
    'image_style' => $settings['image_style'],
    'show_src' => !empty($settings['show_src']) ? $settings['show_src'] : NULL,
    'image_style_xs' => $settings['image_style_xs'],
    'image_style_sm' => $settings['image_style_sm'],
    'image_style_md' => $settings['image_style_md'],
    'image_style_lg' => $settings['image_style_lg'],
  ));
  if (!empty($settings['link_field']) && !empty($entity->{$settings['link_field']})) {
    $wrapper = entity_metadata_wrapper($entity_type, $entity);
    $markup = l($markup, $wrapper->{$settings['link_field']}->url->value(), array('html' => TRUE));
  }
  return $markup;
}

/**
 * Formatter view for video click to play.
 */
function _media_formatters_view_video_click_to_play($entity_type, $entity, $field, $instance, $langcode, $item, &$display, $settings){

  if (
    !empty($item['metadata']['oembed'])
    && (!empty($item['metadata']['oembed']['thumbnail_url']) || (!empty($settings['link_field']) && !empty($entity->{$settings['link_field']} )))
  ) {
    // Get the output of the thumbnail from the image field
    if (!empty($item['field_media_thumbnail'])) {
      // @todo support multilingual (use $wrapper?)
      $thumb_file = (array)file_load($item['field_media_thumbnail'][LANGUAGE_NONE][0]['fid']);
      $markup = _media_formatters_view_lazysizes($entity_type, $entity, $field, $instance, $langcode, $thumb_file, $display, $settings);
    }
    // Get the output of the thumbnail from the oembed thumbnail field
    else {
      $item['attributes']['src'] = $item['metadata']['oembed']['thumbnail_url'];

      $item['attributes']['class'] = array('embed-responsive-item');
      $markup = theme('html_tag', array('element' => array(
        '#tag' => 'img',
        '#attributes' => array_merge($item['attributes'], array()),
      )));
    }
    // Now build out the tags
    if (!empty($markup)) {

      if ($settings['format'] == 'inline') {
        $content = $item['metadata']['oembed']['html'];

        // Add responsive tag to item
        if(strpos($content, 'class="')) {
          $content = str_replace('class="', 'class="embed-responsive-item ', $content);
        }
        else {
          $content = str_replace('<iframe ', '<iframe class="embed-responsive-item" ', $content);
        }

        $content = $settings['autoplay'] 
                 ? str_replace('oembed"', 'oembed&autoplay=1"', $content) 
                 : $content;

        $options = array(
          'placeholder' => $markup,
          'play_class' => $settings['play_class'],
          'content' => htmlentities($content),
          'v_class' => $settings['v_class']
        );
        
        $markup = theme('media_formatters_clicktoplay_inline', $options);
      }
      // Lightbox
      else {
        $options = array(
          'img' => $markup,
          'path_lightbox' => $item['metadata']['oembed']['original_url'],
          'gallery' => $instance['field_name'],
          'class' => $settings['light_class'],
          'title' => $item['title'],
          'alt' => $item['alt'],
        );
        $markup = theme('image_lightbox', $options);
        $display['combine_fields'] = TRUE;
      }
    }
  }

    // Gracefully degrade to a normal File Render.
  if (empty($markup)) {
    // render as normal
    $markup = drupal_render(field_view_value($entity_type, $entity, $field['field_name'], $item, array(
      'type' => 'file_rendered',
    )));
  }

  return $markup;
}

/**
 * Formatter view for flexible media.
 */
function _media_formatters_view_flexible_media($entity_type, $entity, $field, $instance, $langcode, $item, &$display, $settings, $delta) {
  switch ($item['type']) {
    case 'image':

      // Hidden image (for galleries)
      if (!empty($settings['image_style_lightbox']) && $delta > 0) {
        $options = array(
          'is_hidden' => TRUE,
          'path_lightbox' => image_style_url($settings['image_style_lightbox'], $item['uri']),
          'gallery' => $instance['field_name'],
          'class' => $settings['class'],
          'title' => $item['title'],
        );
        $display['combine_fields'] = TRUE;
        $markup = theme('image_lightbox', $options);
      }
      // All other images use lazysizes
      else {
        $markup = _media_formatters_view_lazysizes($entity_type, $entity, $field, $instance, $langcode, $item, $display, $settings);
        if (!empty($settings['link_field']) && !empty($entity->{$settings['link_field']})) {
          $wrapper = entity_metadata_wrapper($entity_type, $entity);
          $markup = l($value, $wrapper->{$settings['link_field']}->url->value(), array('html' => TRUE));
        }
        elseif (!empty($settings['image_style_lightbox'])) {
          $options = array(
            'is_hidden' => FALSE,
            'img' => $markup,
            'path_lightbox' => image_style_url($settings['image_style_lightbox'], $item['uri']),
            'gallery' => $instance['field_name'],
            'class' => $settings['class'],
            'title' => $item['title'],
          );
          $display['combine_fields'] = TRUE;
          $markup = theme('image_lightbox', $options);
        }
      }
      break;
      
    case 'video':
      $markup = _media_formatters_view_video_click_to_play($entity_type, $entity, $field, $instance, $langcode, $item, $display, $settings);
      break;

    default:
      $markup = entity_view('file', array((object)$item), $settings['file_view_mode']);

  }
  return $markup;
}


        

/******************************* HELPER FUNCTIONS ***************************** */


/**
 * Helper function.
 * Returns all of the fields of a specific type for a select list
 */
function _media_formatters_fields($types, $unshift = array()) {
  $fields = $unshift;
  $types = is_array($types) ? $types : array($types);
  foreach (field_info_fields() as $index => $field) {
    if (in_array($field['type'], $types)) {
      $fields[$index] = $index;
    }
  }
  return $fields;
}

/**
 * Helper function.
 * Returns all of the fields of a specific type for a select list
 */
function _media_formatters_image_style_options($default = NULL) {
  $default = empty($default) ? array('default' => t('Default (config setting)')) : $default;
  $image_styles = image_style_options(FALSE, PASS_THROUGH);
  return array_merge($default, $image_styles);
}

/**
 * Helper function.
 * Return list of lazysizes breakpoints and default image styles
 */
function _media_formatters_breakpoints($set_defaults = TRUE) {
  $arr = array(
    'xs' => array('width' => 480, 'title' => 'Extra Small'),
    'sm' => array('width' => 768, 'title' => 'Small'),
    'md' => array('width' => 992, 'title' => 'Medium'),
    'lg' => array('width' => 1200, 'title' => 'Large'),
  );
  if ($set_defaults) {
    foreach ($arr as $key=>$item) {
      $arr[$key]['width'] = variable_get('media_formatters_breakpoint_' . $key, $item['width']);
      $arr[$key]['style'] = variable_get('media_formatters_style_' . $key, '');
    }
  }
  return $arr;
}
