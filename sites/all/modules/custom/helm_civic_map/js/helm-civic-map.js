
(function($, Drupal) {
  Drupal.behaviors.helm_civic_map = {
    attach: function(context, settings) {

if ($('#helm-map').length) {
  if (!$('#abovetop').length) {
    loadMap();
  }
  else {
    var height = $(window).height()*.8;
    $('#helm-map').height(height);
    $('body').prepend($('#abovetop'));
    document.body.scrollTop = height;
    $(window).scroll(function(){
      if ($(this).scrollTop() < height*.6) {
        if (!$('#abovetop').hasClass('helm-map-activated')){ 
          loadMap();
          $('#abovetop').addClass('helm-map-activated')
        }
      }
    });
  }

}


function loadMap() {
  var config = {
    clientKey: '1CAZ5UW5UDQ2F1EDEHFOULURU4K3RBWWITBOONJ2XLXPD52V',
    clientSecret: 'GA4DAN4KLI5UM0VJ4BAZAE4SEVLIR0BC5B4UKGNVR2VJXXWN',
    authUrl: 'https://foursquare.com/',
    apiUrl: 'https://api.foursquare.com/',
    lat: settings.helm_civic_map.lat,
    lng: settings.helm_civic_map.lng
  };

  L.mapbox.accessToken = 'pk.eyJ1IjoiYWxiYXRyb3NzZGlnaXRhbCIsImEiOiI1cVUxbUxVIn0.SqKOVeohLfY0vfShalVDUw';

  var map = new L.mapbox.Map('helm-map', 'albatrossdigital.lpkdpcjb', {
      center: new L.LatLng(config.lat, config.lng),
      zoom: 14,
      scrollWheelZoom: false
  });
  window.map = map;  // @todo: delete (helpful for debugging);
  /*map.addLayer(new L.StamenTileLayer("watercolor", {
      detectRetina: true
  }));*/


  // Hack (possibly needed because of the animation on the header height change)
  setTimeout(function(){ map.invalidateSize(); }, 1100);
  

  /*
  L.control.layers({
      'Painting': L.StamenTileLayer("watercolor", {
        detectRetina: true
      }).addTo(map),
      'Topo Map': L.StamenTileLayer("watercolor", {
        detectRetina: true
      }),
      'Street Map': L.mapbox.tileLayer('examples.map-i87786ca')
  }).addTo(map);
  */

  var attr;
  var activeLayer;
  var gridControl;

  //if (settings.helm_civic_map.type == 'full') {  // @todo
    var layers = document.getElementById('menu-ui'); 
    var foursquareDefault = true;
    if (settings.helm_civic_map.lat == 44.5667) {
      addLayer('Public Transit', 'mbtiles', 14, {url: settings.helm_civic_map.transportation, 'attribution': '<a href="ftp://ftp.ci.corvallis.or.us/pw/Transportation/GoogleTransitFeed/">City of Corvallis GTFS</a>'}, true);
      foursquareDefault = false;
    }
    addLayer('Schools', 'foursquare', 13, {query: 'school'}, foursquareDefault); 
    addLayer('Parks', 'foursquare', 14, {query: 'park'});
    addLayer('Restaurants', 'foursquare', 15, {query: 'restaurant'});
    addLayer('Entertainment', 'foursquare', 14, {query: 'entertainment'});
    addLayer('Events', 'drupal', 14, {url: settings.helm_civic_map.drupal_events});
  //}
  // @todo: http://www.opencyclemap.org/
  // @todo: hiking map

  
  function addLayer(name, type, zoom, params, active) {
      active = active == undefined ? false : active;
      //layer
      //    .setZIndex(zIndex)
      //    .addTo(map);

      // Create a simple layer switcher that
      // toggles layers on and off.
      var link = document.createElement('a');
          link.href = '#';
          link.className = active ? 'active' : '';
          link.innerHTML = name;

      link.onclick = function(e) {
          e.preventDefault();
          e.stopPropagation();

          if (activeLayer != undefined) {
            map.removeLayer(activeLayer);
          }
          activeLayer = L.layerGroup().addTo(map);
          if (attr != undefined) {
            //map.removeControl(attr);
          }
          if (gridControl != undefined) {
            map.removeControl(gridControl);
            gridControl = undefined;
          }
          //attr = L.control.attribution({prefix: false}).addTo('map');
          map.setView(new L.LatLng(config.lat, config.lng), zoom, {animate: true});
          $('#menu-ui a.active').removeClass('active');
          map.invalidateSize();
          this.className = 'active';

          switch(type) {
            case 'foursquare':
              addFoursquareLayer(params.query);
              //attr.addAttribution('<a href="http://foursquare.com">Foursquare</a>');
              map.attributionControl.setPrefix('Data from <a href="http://foursquare.com">Foursquare</a>');
              break;
            case 'drupal':
              addFoursquareLayer(params.query);
              map.attributionControl.setPrefix('Data from <a href="/">this website</a>');
              //attr.addAttribution('This website');
              break;
            case 'mbtiles':
              tile = L.mapbox.tileLayer(params.url).addTo(activeLayer);
              grid = L.mapbox.gridLayer(params.url).addTo(activeLayer);
              gridControl = L.mapbox.gridControl(grid, {follow: true}).addTo(map);

              //attr.addAttribution(params.attribution);
          }          

    
      };
      if (active) {
        $(link).trigger('click');
      }


      layers.appendChild(link);
  }

  function addFoursquareLayer(query) {

    /* Query Foursquare API for venue recommendations near the current location. */
    $.getJSON(config.apiUrl + 'v2/venues/explore?ll=' + config.lat + ',' + config.lng + '&query=' + query + '&client_id=' + config.clientKey + '&client_secret=' + config.clientSecret +'&v=20140601', {}, function(data) {
      venues = data['response']['groups'][0]['items'];
      console.log(venues);
      /* Place marker for each venue. */
      for (var i = 0; i < venues.length; i++) {
        /* Get marker's location */
        var latLng = new L.LatLng(
          venues[i]['venue']['location']['lat'],
          venues[i]['venue']['location']['lng']
        );
        /* Build icon for each icon */
        var fsqIcon = venues[i]['venue']['categories'][0]['icon'];
        var leafletIcon = L.Icon.extend({
          options: {
            iconUrl: fsqIcon['prefix'] + '32' + fsqIcon['suffix'],
            shadowUrl: null,
            iconSize: new L.Point(32,32),
            iconAnchor: new L.Point(16, 41),
            popupAnchor: new L.Point(0, -51)
          }
        });
        var icon = new leafletIcon();
        var popup = '<h4>' + venues[i]['venue']['name'] + '</h4>' + venues[i]['venue']['categories'][0].name;
        if (venues[i]['venue']['contact'].formattedPhone != undefined) {
          popup += '<br/>' + venues[i]['venue']['contact'].formattedPhone;
        }
        var marker = new L.Marker(latLng, {icon: icon})
          .bindPopup(popup, { closeButton: false })
          .on('mouseover', function(e) { this.openPopup(); })
          .on('mouseout', function(e) { this.closePopup(); });
        activeLayer.addLayer(marker);
      }
    })
  }

}


    }
  };
})(jQuery, Drupal);
