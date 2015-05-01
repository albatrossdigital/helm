
(function($, Drupal) {
  Drupal.behaviors.angular_311 = {
    attach: function(context, settings) {
      if (settings.angular_311 != undefined) {
        appUrl = settings.angular_311.app_path;
        apiUrl = settings.angular_311.api_path;
        paymentUrl = settings.angular_311.payment_url;
        trackUrl = settings.angular_311.track_url;
        vocabularyVid = settings.angular_311.vocabulary_vid;
        var app = $('#' + settings.angular_311.app_id);
        if(!app.hasClass('ng-scope')) {
          angular.bootstrap(app, ['app']);
        }
      }
    }
  };
})(jQuery, Drupal);
