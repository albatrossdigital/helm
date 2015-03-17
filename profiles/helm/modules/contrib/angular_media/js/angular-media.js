
(function($, Drupal) {
  Drupal.behaviors.angular_media = {
    attach: function(context, settings) {
      angular.bootstrap($('.angular-media-field', context), ['app']);
    }
  };
})(jQuery, Drupal);
