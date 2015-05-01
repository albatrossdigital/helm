Social Stream
=============

Integrates the [jQuery Social Stream](http://codecanyon.net/item/jquery-social-stream/2103997) plugin (USD$8 on Code Canyon) with Drupal, 
in particular the [Social Field](https://www.drupal.org/project/socialfield) module.


Installation
------------
1. Install as you would any module.
2. Purchase and add the jQuery Social Stream plugin to `sites/all/libraries` (or similar) so that `sites/all/libraries/jquery-social-stream/js` exists.
3. If you are going to use the Social Wall, you need to patch the `jquery-social-stream` library with the `jquery-social-stream_isotope-err.patch` file found in this dir.
4. If you want to use Twitter or Instagram, you need to obtain oAuth tokens.  Go to `/admin/config/media/socialfield/social-stream` and follow the links on that page.
5. Add a Social Field field to a content type, [fieldable panel pane](https://www.drupal.org/project/fieldable_panels_panes) or [bean block](https://www.drupal.org/project/bean).  Choose the Social Stream feed or Social Stream wall display formatter and edit the additional settings on that page.


Using without the Social Field module
-------------------------------------
You can add a Social Stream without `socialfield` module by calling the theme function directly:
```
theme('social_stream', array(
  'feeds' => array(
    'twitter' => 'albatrossdigi',
  ),
  'theme' => 'light',
));
```

Who?
----
Conception, development and maintenance for this module is provided by [Albatross Digital](http://albatrossdigital.com).  This module
is a part of our [Helm](http://helm.albatrossdigital.com) distribution.