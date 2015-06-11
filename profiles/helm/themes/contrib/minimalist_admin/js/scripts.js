
(function($, Drupal) {
  Drupal.behaviors.minimalist_admin = {
    attach: function(context, settings) {
      var triggerImageSize = function($image, callback) {
        if (!$image.hasClass("size-processing")) {
          $image.addClass("size-processing");
          $image.waitForImages({
            finished: function() {
              callback();
              $image.removeClass("size-processing");
            },
            each: $.noop,
            waitForAll: true
          });
        }
      };
      
      // Open external links in new window
      var reg = new RegExp("/" + window.location.host + "/");
      $("a").each(function() {
        if (!reg.test(this.href)) {
          $(this).attr('target', '_blank');
        }
      });


      $('[data-toggle="offcanvas"]').click(function () {
        $('.row-offcanvas').toggleClass('active')
      });

      // Put sidebar accordion help text into title for <label>s
      $('.vertical-tabs-panes .help-block', context).once('help-text', function() {
        $(this).parent().find('label').attr('title', $(this).text()).addClass('label-help');
        $(this).hide();
      });

      var scrollStart = 0;
      $(window).on('scroll', function () {
        var $element = $('.form-actions', context);
        var offset = $element.offset();
        var top = offset.top;
        var scrollPosition = $(window).scrollTop();
        if (top < scrollPosition) {
          $element.addClass('top-fixed');
          scrollStart = scrollPosition;
        }
        else if (scrollStart > scrollPosition) {
          $element.removeClass('top-fixed');
        }
      });


    }
  };
})(jQuery, Drupal);
