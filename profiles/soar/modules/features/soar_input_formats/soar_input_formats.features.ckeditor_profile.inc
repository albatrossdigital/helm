<?php
/**
 * @file
 * soar_input_formats.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function soar_input_formats_ckeditor_profile_defaults() {
  $data = array(
    'Basic' => array(
      'name' => 'Basic',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Format\',\'Bold\',\'Italic\',\'-\',\'NumberedList\',\'BulletedList\',\'-\',\'Link\',\'Unlink\',\'Image\',\'WidgetTemplateMenu\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'ckfinder',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin. See <a href="http://ckeditor.com/addon/autogrow">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.4.3/full-all/plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
            'active' => 0,
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for inserting images from Drupal media module',
            'path' => '%plugin_dir%media/',
            'buttons' => array(
              'Media' => array(
                'label' => 'Media',
                'icon' => 'images/icon.gif',
              ),
            ),
            'default' => 'f',
          ),
          'mediaBrowser' => array(
            'name' => 'mediaBrowser',
            'desc' => 'Media Browser for File Upload/Browsing',
            'path' => '%base_path%profiles/soar/modules/contrib/ckeditor_media/plugins/mediaBrowser/',
            'buttons' => FALSE,
          ),
          'tableresize' => array(
            'name' => 'tableresize',
            'desc' => 'Table Resize plugin. See <a href="http://ckeditor.com/addon/tableresize">addon page</a> for more details.',
            'path' => '//cdn.ckeditor.com/4.4.3/full-all/plugins/tableresize/',
            'buttons' => FALSE,
            'default' => 't',
            'active' => 0,
          ),
          'widgetcommon' => array(
            'name' => 'widgetcommon',
            'desc' => 'Plugin to add common widgets',
            'path' => '%base_path%profiles/soar/modules/custom/ckeditor_widgets/plugins/widgetcommon/',
            'buttons' => array(
              'widgetcommonBox' => array(
                'icon' => 'icons/widgetcommonBox.png',
                'label' => 'Insert box',
              ),
              'widgetcommonQuotebox' => array(
                'icon' => 'icons/widgetcommonQuotebox.png',
                'label' => 'Insert quote box',
              ),
            ),
          ),
          'widgetfoundation' => array(
            'name' => 'widgetfoundation',
            'desc' => 'Plugin to add widgets based on Zurb Foundation elements',
            'path' => '%base_path%profiles/soar/modules/custom/ckeditor_widgets/plugins/widgetfoundation/',
            'buttons' => array(
              'widgetfoundationLeftCol' => array(
                'icon' => 'icons/widgetfoundationLeftCol.png',
                'label' => 'Insert left column box',
              ),
              'widgetfoundationRightCol' => array(
                'icon' => 'icons/widgetfoundationRightCol.png',
                'label' => 'Insert right column box',
              ),
              'widgetfoundationTwoCol' => array(
                'icon' => 'icons/widgetfoundationTwoCol.png',
                'label' => 'Insert two column box',
              ),
              'widgetfoundationThreeCol' => array(
                'icon' => 'icons/widgetfoundationThreeCol.png',
                'label' => 'Insert three column box',
              ),
              'widgetfoundationAlert' => array(
                'icon' => 'icons/widgetfoundationAlert.png',
                'label' => 'Insert alert box',
              ),
              'widgetfoundationAccordion' => array(
                'icon' => 'icons/widgetfoundationAccordion.png',
                'label' => 'Insert accordion box',
              ),
            ),
          ),
          'widgettemplatemenu' => array(
            'name' => 'widgettemplatemenu',
            'desc' => 'Plugin for adding an Insert Template dropdown menu',
            'path' => '%base_path%profiles/soar/modules/custom/ckeditor_widgets/plugins/widgettemplatemenu/',
            'buttons' => array(
              'oembed' => array(
                'icon' => 'extraIcons/oembed.png',
                'label' => 'Insert media',
              ),
              'codeSnippet' => array(
                'icon' => 'extraIcons/codesnippet.png',
                'label' => 'Insert code snippet',
              ),
              'leaflet' => array(
                'icon' => 'extraIcons/leaflet.png',
                'label' => 'Insert leaflet map',
              ),
              'FontAwesome' => array(
                'icon' => 'extraIcons/fontawesome.png',
                'label' => 'Insert Font Awesome icon',
              ),
              'WidgetTemplateMenu' => array(
                'icon' => 'icons/widgettemplatemenu.png',
                'label' => 'Add Template Menu',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'skin' => 'moono',
        'ckeditor_path' => '%l/ckeditor',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%m/plugins',
        'ckeditor_plugins_local_path' => '',
        'ckfinder_path' => '%m/ckfinder',
        'ckfinder_local_path' => '',
        'ckeditor_aggregate' => 'f',
        'toolbar_wizard' => 't',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'filebrowser' => 'none',
        'quickupload' => 'f',
        'ss' => 2,
        'filters' => array(),
        'default' => 't',
        'show_toggle' => 't',
        'popup' => 'f',
        'toolbar' => '
[
    [\'Source\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'-\',\'SpellChecker\', \'Scayt\'],
    [\'Undo\',\'Redo\',\'Find\',\'Replace\',\'-\',\'SelectAll\'],
    [\'Image\',\'Media\',\'Flash\',\'Table\',\'HorizontalRule\',\'Smiley\',\'SpecialChar\',\'Iframe\'],
    \'/\',
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\',\'-\',\'RemoveFormat\'],
    [\'NumberedList\',\'BulletedList\',\'-\',\'Outdent\',\'Indent\',\'Blockquote\',\'CreateDiv\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'-\',\'BidiLtr\',\'BidiRtl\',\'-\',\'Language\'],
    [\'Link\',\'Unlink\',\'Anchor\',\'Linkit\'],
    [\'DrupalBreak\'],
    \'/\',
    [\'Format\',\'Font\',\'FontSize\'],
    [\'TextColor\',\'BGColor\'],
    [\'Maximize\', \'ShowBlocks\']
]
    ',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'format_source' => 't',
        'format_output' => 't',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'user_choose' => 'f',
        'ckeditor_load_method' => 'ckeditor.js',
        'ckeditor_load_time_out' => 0,
        'scayt_autoStartup' => 'f',
        'html_entities' => 'f',
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}
