
(function($, Drupal) {
  Drupal.behaviors.soar_admin = {
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
      var reg = new RegExp("/" + window.location.host + "/");
      $("a").each(function() {
        if (!reg.test(this.href)) {
          $(this).click(function(event) {
            event.preventDefault();
            event.stopPropagation();
            window.open(this.href, "_blank");
          });
        }
      });


      $('[data-toggle="offcanvas"]').click(function () {
        $('.row-offcanvas').toggleClass('active')
      });
    }
  };
})(jQuery, Drupal);
