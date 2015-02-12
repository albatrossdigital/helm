
/**
 *  @file
 *  This file handles the JS for Media Module functions.
 */

(function ($) {

/**
 * Loads media browsers and callbacks, specifically for media as a field.
 */
Drupal.behaviors.mediaInkfilepicker = {
  attach: function (context, settings) {

    filepicker.setKey(settings.media_inkfilepicker.key);

    filepicker.pick(settings.media_inkfilepicker.options, function(FPFile){
      $('#inkfilepicker-files').val(JSON.stringify(FPFile));
      $('#media-inkfilepicker-form').addClass('filepicker-loading').trigger('submit');
    });

  }
};

})(jQuery);
