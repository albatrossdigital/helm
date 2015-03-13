(function ($) {
  Drupal.behaviors.viewsBootstrapCarousel = {
    attach: function(context, settings) {
      $(function () {
        $.each(settings.viewsBootstrap.carousel, function(id, carousel) {
          try {
            $('#views-bootstrap-carousel-' + carousel.id, context, context).once('views-bootstrap-carousel', function() {
              $(this).carousel(carousel.attributes);
            });
          }
          catch(err) {
            console.log(err);
          }
        });
      });
    }
  };
})(jQuery);
