(function ($) {

Drupal.behaviors.social_stream = {
  attach: function (context, settings) {
    $('#social-stream').dcSocialStream(settings.social_stream);

  }
};

})(jQuery);