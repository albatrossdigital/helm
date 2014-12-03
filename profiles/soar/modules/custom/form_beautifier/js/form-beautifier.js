/**
 * Custom JS for CTLA theme
 */

/* New D7 Wrapper --> */(function ($) {


Drupal.behaviors.form_beautifier = {
  attach: function(context, settings) { //new attach function
    
    if (typeof(Drupal.settings.form_beautifier) != 'undefined' && typeof(Drupal.settings.form_beautifier.ddcl) != 'undefined'){
      var selector_element = 'select:not(.processed)';
      var selector = Drupal.settings.form_beautifier.ddcl.forms.join(' ' + selector_element + ', .') + ' ' + selector_element;
      selector = '#' + selector + ', .' + selector;
      $(selector).each(function(){
        if ($(this).attr('multiple') || Drupal.settings.form_beautifier.ddcl.single){
          /*if (Drupal.settings.form_beautifier.ddcl.any || $(this).find('option:eq(0)').text().indexOf('Any') != -1){
            var any = true;
          } else {
            var any = false;
          }*/
          var any = false;
          $(this).dropdownchecklist({
            firstItemChecksAll: any,
            maxDropHeight: Drupal.settings.form_beautifier.ddcl.maxHeight
          }).addClass('processed');
        }
      });
      
    }
    
    
    /**
     * In-field labels
     **/
    $('.infieldlabels label:not(.option, .processed)').each(function(){
      var $input = $(this).parent().find('input:eq(0), textarea:eq(0)');
      if ($input.size() > 0){       
        $(this).html($(this).html().replace(/:/g, '')).inFieldLabels().addClass('processed');
      }

    });
    
  }//attach
};//behaviors

/* New D7 Wrapper --> */ })(jQuery);

