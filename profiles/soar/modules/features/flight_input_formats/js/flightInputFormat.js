(function ($) {


Drupal.behaviors.flightInputFormat = {
  attach: function(context, settings) { //new attach function
    // alter settings
    if(settings.ckeditor 
      && settings.ckeditor.elements 
      && Object.keys(settings.ckeditor.elements).length) {

      // grab window height
      var height = "innerHeight" in window 
        ? window.innerHeight
        : document.documentElement.offsetHeight;
        
      // run through formats 
      $.each(settings.ckeditor.input_formats, function(format) {
        // restrict autogrow
        if(format.autoGrow_maxHeight && format.autoGrow_maxHeight > 0) {
          format.autoGrow_maxHeight = height * .75;
        }
        // make replace false by default for templates
        format.templates_replaceContent = false;
      });
    }
    
  }//attach
};//behaviors

})(jQuery);

