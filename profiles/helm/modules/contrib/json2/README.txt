INSTRUCTIONS
-------------
Download the module.
Download the json2 javascript library (https://github.com/douglascrockford/JSON-js/blob/master/json2.js).
Place it under sites/all/libraries/json2 so that the file can be found under sites/all/libraries/json2/json2.js.
Enable the module.


This module does nothing by itself, it just provides the json2 library so that other modules can use it.

You can load the library like this:
<?php
libraries_load('json2');
?>