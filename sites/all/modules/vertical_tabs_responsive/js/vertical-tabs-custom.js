/**
 * @file
 * Vertical tabs responsive js file.
 */

(function ($) {
  Drupal.behaviors.vertical_tabs_responsive = {
    attach: function (context, settings) {
      var left;
      var vt_width;
      var button;
      var content_width;

      try {
        left = Drupal.vertical_tabs_responsive.intToString(settings.vertical_tabs_responsive.left);
        vt_width = Drupal.vertical_tabs_responsive.intToString(settings.vertical_tabs_responsive.vt_width);
        button = Drupal.vertical_tabs_responsive.intToString(settings.vertical_tabs_responsive.button);
      }
      catch(err) {
        // Default values if something goes wrong.
        left = 0;
        vt_width = 30;
        button = 0;
      }
      content_width = 100 - vt_width;

      if (!$('.vertical-tabs-panes').length) {
        // If there are no vertical tabs we reset content area to its initial state.
        $('body').find('#content').css({
          'width': 'initial',
          'margin-left': 'initial'
        });
      }
      else if (typeof left != 'undefined' && typeof content_width != 'undefined' && typeof vt_width != 'undefined') {
        // Change content and vertical tabs width depending on user's selection (desktop screens).
        var margin = 4;
        var vt_final = vt_width - margin;

        $('body').find('#content').css('width', content_width + '%');
        $('body').find('.vertical-tabs-panes').css('width', vt_final + '%');
        if(left == 1) {
          $('body').find('#content').css('margin-left', vt_final + '%');
        }

        // Store calculated widths for toggle feature.
        Drupal.vertical_tabs_responsive.variables.left = left;
        Drupal.vertical_tabs_responsive.variables.content_width = content_width;
        Drupal.vertical_tabs_responsive.variables.vt_final = vt_final;

        // Insert toggle button.
        if (button == 1) {
          Drupal.vertical_tabs_responsive.insertToggleButton();
        }
      }
    }
  };
})(jQuery);

/**
 * Attach utility functions.
 */
Drupal.vertical_tabs_responsive = Drupal.vertical_tabs_responsive || {};

/**
 * Initialize variable array.
 */
Drupal.vertical_tabs_responsive.variables = {vt_visible:1, left:0, content_width:70, vt_final:26};

/**
 * Converts string from drupal settings variable to integers.
 */
Drupal.vertical_tabs_responsive.intToString = function (configuration) {

  var str = String(configuration);

  // Erase first " character.
  str = str.replace('"', "");
  // Erase second " character.
  str = str.replace('"', "");

  return str;
};

/**
 * Inserts hide/show button.
 */
Drupal.vertical_tabs_responsive.insertToggleButton = function () {
  if(jQuery(".switch-vtr").length == 0) {
    jQuery(".vertical-tabs-panes").prepend('<a class="switch-vtr" href="#" onclick="javascript:Drupal.vertical_tabs_responsive.butClick();"><h3>' + Drupal.t('Hide') + ' >></h3></a>');
  }
};

/**
 * Hides or shows vertical tabs.
 */
Drupal.vertical_tabs_responsive.butClick = function () {
  var left;
  var content_width;
  var vt_final;

  left = Drupal.vertical_tabs_responsive.variables.left;
  content_width = Drupal.vertical_tabs_responsive.variables.content_width;
  vt_final = Drupal.vertical_tabs_responsive.variables.vt_final;

  if (Drupal.vertical_tabs_responsive.variables.vt_visible == 1) {

    jQuery('body').find('#content').css('width', '85%');
    jQuery('body').find('.vertical-tabs-panes').css('width', '10%');

    if(left == 1) {
      jQuery('body').find('#content').css('margin-left', '10%');
      jQuery(".switch-vtr h3").text(Drupal.t('Show') + ' >>');
    }
    else {
      jQuery(".switch-vtr h3").text('<< ' + Drupal.t('Show'));
    }

    jQuery('body').find('.vertical-tabs-panes fieldset.collapsible:not(.collapsed)').addClass('collapsed');
    jQuery('body').find('.vertical-tabs-panes').css('overflow-x', 'hidden');

    Drupal.vertical_tabs_responsive.variables.vt_visible = 0;
  } else {

    jQuery('body').find('#content').css('width', content_width + '%');
    jQuery('body').find('.vertical-tabs-panes').css('width', vt_final + '%');

    if(left == 1) {
      jQuery('body').find('#content').css('margin-left', vt_final + '%');
      jQuery(".switch-vtr h3").text('<< ' + Drupal.t('Hide'));
    }
    else {
      jQuery(".switch-vtr h3").text(Drupal.t('Hide') + ' >>');
    }

    jQuery('body').find('.vertical-tabs-panes').css('overflow-x', 'initial');

    Drupal.vertical_tabs_responsive.variables.vt_visible = 1;
  }
};
