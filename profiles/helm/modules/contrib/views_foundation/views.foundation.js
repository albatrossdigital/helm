(function ($) {

  /**
   * Views Foundation orbit settings.
   */
  Drupal.behaviors.viewsFoundation = {
    attach:function(context, settings) {
      // Each loop for more than one slider on the page.
      $.each(settings.viewsFoundation, function (orbitId, settings) {
          // Process orbit function with custom settings.
          $('#views-orbit-' + orbitId, context).orbit(settings);
      });
    }
  };
}(jQuery));
