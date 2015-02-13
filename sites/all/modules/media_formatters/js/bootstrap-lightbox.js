
/**
 * Adds the region selector map to the main provider search page.
 */

(function ($) {

Drupal.behaviors.boostrap_lightbox = {
  attach: function(context, settings) {
// End Drupal wrapper

$(document).delegate('*[data-toggle="lightbox"]', 'click', function(event) {
    event.preventDefault();
    if (!$(this).hasClass('ekko-processed')) {
      $(this).ekkoLightbox().addClass('ekko-processed');
    }
});

// Begin Drupal wrapper  
  }
};
})(jQuery);