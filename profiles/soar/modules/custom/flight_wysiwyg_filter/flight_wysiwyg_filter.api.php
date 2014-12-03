<?php

/**
 * @file
 * Hooks provided by Context.
 */

/**
 * Hook for default filters 
 */
function hook_flight_wysiwyg_filter_defaults() {
  return array(
    'valid_elements' => 'p,a,div,span,h2,h3,h4,h5,h6,section,article,strong,b,i,em,cite,blockquote,small,sub,sup,code,pre,ul,ol,li,dl,dt,dd,table,tbody,th,tr,td,img,caption,br',
    'valid_attributes' => 'href,src,target,width,height,colspan,span,alt,name,title,class,id,data-reaveal-id,data-clearing,data-abide,data-options,data-section,data-section-content,data-section-title',
    'valid_styles' => 'text-align,float'
  );
}