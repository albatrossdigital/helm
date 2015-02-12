
(function($, Drupal) {
  Drupal.behaviors.angular_media   = {
    attach: function(context, settings) {
      angular.bootstrap(context, ['app']);
    }
  };
})(jQuery, Drupal);
