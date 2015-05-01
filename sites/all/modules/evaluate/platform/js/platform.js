(function ($) {
  Drupal.behaviors.platformIndicator = {
    attach: function (context, settings) {

      var platformEnvironment = Drupal.settings.environment;
      if (platformEnvironment == 'master') {
      	$('body').prepend('<div id="platform-indicator" class="master">' + platformEnvironment + '</div>');	
      } else {
      	$('body').prepend('<div id="platform-indicator">' + platformEnvironment + '</div>');	
      };
      

    }
  }
})(jQuery);
