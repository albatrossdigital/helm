
(function($, Drupal) {
  Drupal.behaviors.bootstrap_multiselect = {
    attach: function(context, settings) {
      $('select[multiple="multiple"]').multiselect({
        buttonClass: 'form-control'
      }).wrap('<div>');
    }
  };
})(jQuery, Drupal);
