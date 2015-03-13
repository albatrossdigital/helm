<?php

/**
 * @file
 * Hooks provided by ckeditor_filter.
 */

/**
 * Hook for default filters 
 */
function hook_ckeditor_filter_defaults() {
  return array(
    'valid_elements' => 'p,a,div,span,h2,h3,h4,h5,h6,section,article,strong,b,i,em,cite,blockquote,small,sub,sup,code,pre,ul,ol,li,dl,dt,dd,table,tbody,thead,th,tr,td,img,caption,br',
    'valid_attributes' => 'href,src,target,width,height,colspan,span,alt,name,title,class,id',
    'valid_styles' => 'text-align,float,margin'
  );
}