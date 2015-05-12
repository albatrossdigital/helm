(function ($) {

Drupal.behaviors.social_stream = {
  attach: function (context, settings) {
    settings.social_stream.days = 100;
    $('#social-stream').dcSocialStream(settings.social_stream);

  }
};

})(jQuery);