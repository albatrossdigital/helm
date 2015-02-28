
/**
 * Adds the region selector map to the main provider search page.
 */

(function ($) {

Drupal.behaviors.boostrap_lightbox = {
  attach: function(context, settings) {
// End Drupal wrapper

$('*[data-toggle="lightbox"]:not(.ekko-processed)').on('click', function(event) {
    event.preventDefault();
    return $(this).ekkoLightbox();
}).addClass('ekko-processed');

// Begin Drupal wrapper  
  }
};
})(jQuery);