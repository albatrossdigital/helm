UNDERSCORE
----------

This is a simple module that makes the Underscore.js JavaScript library
available to module and theme developers.


INCLUDED FUNCTIONALITY (or under development)
---------------------------------------------

* Makes Underscore.js available to other modules and custom code via the
  Library API

* Provides a drush command to download and install the latest version of the
  library


USE AND CONFIGURATION
---------------------

* After enabling this module, install the Underscore.js JavaScript file:

    * *Without drush:* Download underscore.js and store it in your
      libraries directory. In most cases the resulting path should be
      sites/all/libraries/underscore/underscore.js

    * *With drush:* Run the command `drush underscore-download`

* In your module code, add the library with libraries_load() and
  drupal_add_library(). If unsure where to do this, add it within an
  implementation of hook_init(). Use 'underscore' for both the module and
  library name arguments, like this:

      libraries_load('underscore');
      drupal_add_library('underscore', 'underscore');

* You can update your version of Underscore.js to the latest version by
  calling the drush command (drush underscore-download).
