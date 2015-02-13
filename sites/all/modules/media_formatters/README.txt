Media Formatters
================

Control all of your media display from the Node Display page. Easily add modern, best-practices front-end enhancements for media. Out of the box, it works well with Bootstrap-based themes, but it can be easily extened to work with other custom themes as well.

Features:
* Lazyloading of images, with multiple responsive versions using [lazysizes](http://afarkas.github.io/lazysizes)
* Image lightbox with [Bootstrap Lightbox](http://ashleydw.github.io/lightbox/)
* Click-to-play videos with custom thumbnails
* Works out of the box with [Angular Media](http://drupal.org/project/angular_media)


### Installation
1) Download the module, install as normal
2) Install the dependency libaries to sites/all/libraries (or similar):
```
cd sites/all/libraries
git clone https://github.com/aFarkas/lazysizes
git clone https://github.com/ashleydw/lightbox.git
```
3) Add File or Image fields and customize them to use the media formatters

### Field formatters provided:
* Nice icons - Displays thumbnails for images and video, and icons (based on fontawesome/glyphicon icons) for other files
* Lazy-load - For images. Allows you to select Image Styles for various viewports. Uses using [lazysizes](http://afarkas.github.io/lazysizes).
* Lightbox - For images. Using [Bootstrap Lightbox](http://ashleydw.github.io/lightbox/). 
* Click-to-play - For videos.
* Flexible media - A super combination of the fields above. It works for Files (of all types). Allows you to select image styles for images, click-to-play for video, and Media display mode for generic media.