(function ($) {

  Drupal.behaviors.fontawesomesSelect2 = {
    attach: function (context, settings) {

      function formatIcon(icon) {
        if(!icon.id) return icon.text; // optgroup
        return '<i class="fa ' + icon.id + '"></i>&nbsp;&nbsp;' + icon.text;
      }

      $('select.fontawesome-icon').select2({
        width: '200px',
        formatResult : formatIcon,
        escapeMarkup: function(m) { return m; }
      });
    }
  };

})(jQuery);
