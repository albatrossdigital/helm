
(function ($) {

Drupal.behaviors.facetapi = {
  attach: function(context, settings) {

    $('[data-menu-back]').click(function(e) {
      var $self = $(this),
        level = $self.data('menu-back');
      // switch classes
      $self.closest('.menu-block-wrapper')
           .addClass('level-' + level + '-active')
           .removeClass('level-' + (level + 1) + '-active');
      e.preventDefault();
    }); 
  }
}
})(jQuery);
