/*
 * In-Field Label Drupal Module
 *
 * Copyright (c) 2010 Jeff Lyon, Albatross Digital
 * Dual licensed under the MIT and GPL licenses.
 * Uses the same license as jQuery, see:
 * http://docs.jquery.com/License
 *
 * @version 0.1
 */

Drupal.behaviors.coloradodeservesbetter = function(context){
  
  $('infieldlabels label:not(.option)').each(function(){
    var $input = $(this).parent().find('input:eq(0), textarea:eq(0)');
    
    //implement infieldlabels for keep in touch block
    if ($input.size() > 0){
      
      $(this).html($(this).html().replace(/\*|:/g, '')).inFieldLabels();
    }

  });
    

}

