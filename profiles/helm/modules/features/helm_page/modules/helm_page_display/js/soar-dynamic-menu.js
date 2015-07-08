
(function ($) {

Drupal.behaviors.facetapi = {
  attach: function(context, settings) {

    function menuClick($self, selector, e) {
      var level = $self.data(selector);
      // switch classes
      $self.closest('.menu-block-wrapper')
           .addClass('level-' + level + '-active')
           .removeClass('level-' + (level + 1) + '-active');
      e.preventDefault();
    }

    $('[data-menu-back]').click(function(e) {
      menuClick($(this), 'menu-back', e);
    });

    $('[data-menu-forward]').click(function(e) {
      menuClick($(this), 'menu-forward', e);
    });
  }
}
})(jQuery);
