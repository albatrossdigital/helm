(function ($) {

  Drupal.behaviors.fontawesomesFieldAdmin = {
    attach: function (context, settings) {

      function renderPreview(wrapperId) {
        var $wrapper = $('#' + wrapperId);
        var $i = $('<i class="fa"></i>')

        // update the selected icon
        var iconSelection = $wrapper.find('select.fontawesome-icon').val();
        if(iconSelection == '0') { $wrapper.find('.fontawesome-icon-preview').html('Preview');  return false; }
        $i.addClass(iconSelection);

        // update the size
        var iconSize = $wrapper.find('.fontawesome-size').val();
        if(iconSize) {
          $i.addClass(iconSize);
        }

        // update the rotation
        var iconRotate = $wrapper.find('.fontawesome-rotation').val();
        if(iconRotate) {
          $i.addClass(iconRotate);
        }

        // boolean stuff
        var boolBoxes = {
          'fixed-width' : 'fa-fw',
          'border'      : 'fa-border',
          'invert'      : 'fa-inverse',
          'spinning'    : 'fa-spin',
          'flip-horizontal' : 'fa-flip-horizontal',
          'flip-vertical'   : 'fa-flip-vertical'
        };

        $.each(boolBoxes, function(stub,  cssClass) {
          var isChecked = $wrapper.find('.fontawesome-' + stub).prop('checked');
          if(isChecked) { $i.addClass(cssClass); }

          if(stub == 'invert') {
            if(isChecked) {
              $wrapper.find('.fontawesome-icon-preview').addClass('inverted');
            }
            else {
              $wrapper.find('.fontawesome-icon-preview').removeClass('inverted');
            }
          }
        });
        // replace what's there
        $wrapper.find('.fontawesome-icon-preview').html($i);
      }

      // on load render what we got (if applicaable)
      $('.font-awesome-field-admin-wrapper').each(function() {
        var wrapperId = $(this).attr('id');
        renderPreview(wrapperId);
      });

      // watch the form elements
      $('.faf-watch').change(function() {
          var wrapperId = $(this).parents('.font-awesome-field-admin-wrapper').attr('id');
          renderPreview(wrapperId);
        });

    }
  };

})(jQuery);
