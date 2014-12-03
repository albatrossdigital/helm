/* New D7 Wrapper --> */(function ($) {


Drupal.behaviors.form_beautifier_zurbmulti = {
  attach: function(context, settings) { //new attach function

    /**
     * Zurb multiselect
     **/
    if (typeof(Drupal.settings.form_beautifier) != 'undefined' && typeof(Drupal.settings.form_beautifier.zurbmulti) != 'undefined'){
      
      
      $('form.zurb-multiselect').not('.multi-processed').each(function() {
        // add multi select
        $(this).find('select[multiple="multiple"]').each(function() {
          var selected = [],
            $select = $(this);

          $select.zmultiselect(
            jQuery.extend({
              placeholder: $select.attr('title')
            }, Drupal.settings.form_beautifier.zurbmulti)
          );

          var $zselect = $select.next('.zselect');

          $zselect.find('input')
            // unbind ctools
            .unbind('change')
            // bind our change
            .change(function(e) {
              e.preventDefault();
              // find all selected
              $zselect.find('input:checked').each(function() {
                selected.push(this.value);
              });
              $select.val(selected);
            });
        });
        // add processed
        $(this).addClass('multi-processed');

      });
    }

  }//attach
};//behaviors

/* New D7 Wrapper --> */ })(jQuery);