
This module leverages simplehtmldom API and provides a simple, powerful interface for a general html text format filter.

Configuration has 3 input fields:

-> Valid HTML elements
Html elements
Example:"p,a,div,span,h2,h3,h4,section,article,strong,b,i,em,cite,blockquote,small,sub,sup,code,ul,ol,li,dl,dt,dd,table,tbody,th,tr,td,img,caption,br,hr"

-> Valid element attributes
List of valid element attributes
Example: "src,href,target,width,height,colspan,span,alt,name,title,class,id"

-> Valid Style properties
List of allowed style values
Example: "text-align,float,margin"

Any element, property, style not defined in the interface will be stripped out.

Requires:
simplehtmldom API

Similar modules:
WYSIWYG Filter

Known Issues
If you have xdebug enabled, and your nesting function setting (xdebug.max_nesting_level) is set low, you may receive errors as this module uses a recursive dive in simplehtmldom to run through the HTML.