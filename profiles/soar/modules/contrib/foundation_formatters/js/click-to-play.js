/**
 * Adds the region selector map to the main provider search page.
 */
(function ($) {


Drupal.behaviors.region_map = {
  attach: function(context, settings) {
// End Drupal wrapper

//$('main').attr('id', 'map');

window.map = L.map('map', {
  minZoom: 1,
  maxZoom: 10,
  scrollWheelZoom: false
}).setView([ 47.26362112146958, -122.40323066711426], 2);

L.mapbox.tileLayer('ifsight.gfm9oo79').addTo(window.map);

// Begin Drupal wrapper  
  }
};
})(jQuery);