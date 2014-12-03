/**
 * Custom JS for CTLA theme
 */

/* New D7 Wrapper --> */(function ($) {


Drupal.behaviors.form_beautifier_select2 = {
  attach: function(context, settings) { //new attach function

    /**
     * Select2
     **/
    if (typeof(Drupal.settings.form_beautifier) != 'undefined' && typeof(Drupal.settings.form_beautifier.select2) != 'undefined'){
      $(Drupal.settings.form_beautifier.select2.selector).select2({
        width: Drupal.settings.form_beautifier.select2.width
      });
    }

  }//attach
};//behaviors

/* New D7 Wrapper --> */ })(jQuery);

