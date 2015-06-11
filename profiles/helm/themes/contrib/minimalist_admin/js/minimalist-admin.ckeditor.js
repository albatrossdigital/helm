// Make CKEditor topbar float when scrolling
// From http://stackoverflow.com/questions/19542660/how-to-fix-ckeditor-toolbar-on-the-screen
(function($, Drupal) {
  Drupal.behaviors.minimalist_admin_ckeditor = {
    attach: function(context, settings) {

      if (typeof CKEDITOR === 'undefined') {
          return;
      }

      var floatingClass = 'floatingToolbox';

      var $editors;

      CKEDITOR.on('instanceReady', function (e) {
          $editors = $('.cke', e.element);

          e.editor.on('focus',function() {
              checkToolbars($editors, floatingClass);

              $(window).on('scroll.ckeditor', function () {
                  checkToolbars($editors, floatingClass);
              });
          });

          e.editor.on('blur', function () {
              $(window).unbind('scroll.ckeditor');

              $('.cke_top', $editors).removeClass(floatingClass);
          });
      });     

      function checkToolbars($editors, floatingClass) {
          if (!$editors)
              return;

          var editor = $editors.filter('.cke_focus');

          if (editor.length == 0)
              return;

          var toolbox = $('.cke_top', editor);

          var offset = editor.offset();
          var top = offset.top;
          var bottom = offset.top + editor.height() - 55;

          var scrollPosition = $(window).scrollTop();

          if (top < scrollPosition && bottom > scrollPosition) {
              toolbox.addClass(floatingClass).css(
                  {
                      left: (offset.left + 1) + 'px',
                      width: editor.width() + 'px'
                  });
          } else if (toolbox.hasClass(floatingClass)) {
              toolbox.removeClass(floatingClass);
          }
      }


    }
  };
})(jQuery, Drupal);
