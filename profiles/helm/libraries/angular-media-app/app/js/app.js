'use strict';

//***************************************

// Main Application

//***************************************
(function ($) {

angular.module('app', [
  'app.core',
  'app.flickr',
  'ui.router',
  //'ui.bootstrap',
  //'ngSanitize',
  //'ngAnimate', // @todo: caused bugs w ng-include: https://github.com/angular/angular.js/issues/8900
  //'ngTouch',
  'ngResource',
  //'afkl.lazyImage',
  'infinite-scroll',
  'angularFileUpload',
  //'ngImgCrop',
  //'xeditable',
  'ngJcrop'
  //'wu.masonry'
])

.run(
  [          '$rootScope', '$state', '$stateParams', '$window', '$location', '$timeout',
    function ($rootScope,   $state,   $stateParams,   $window,   $location, $timeout) {

      $rootScope.settings = {defaults: {}};
      $rootScope.files = {};
      $rootScope.settings.defaults.flickrKey = '5202f8e46861f39f55bedfa2374a41d8';
      //$rootScope.settings.defaults.apiUrl = 'http://liftoff.local/api/angular-media/';
      // $rootScope.apiUrlUpload = 'http://soar-current.local/api/angular-media';
      // $rootScope.apiUrlBrowse = 'http://soar-current.local/api/angular-media';


      $rootScope.settings.defaults.appUrl = '';
      $rootScope.settings.defaults.multiple = false;
      $rootScope.settings.defaults.cardinality = 1; // max number of fields
      $rootScope.tabs = {
        upload: {key: 'upload', title: 'Upload'},
        site: {key: 'browse', title: 'Site Files', params: {person: 'all'}},
        flickr: {key: 'flickr', title: 'Flickr'}
        // @todo link: {key: 'link', title: 'Page'}
        // @todo me: {key: 'browse', title: 'My Files', params: {person: 'all'}}
      };
      $rootScope.settings.defaults.tabs = ['upload', 'site', 'flickr'];

      // It's very handy to add references to $state and $stateParams to the $rootScope
      // @todo: bad for performance?
      $rootScope.$state = $state;
      $rootScope.$stateParams = $stateParams;

      // Adds the files to the individual fields.  Called from the various browsers.
      $rootScope.addFiles = function(files) {
        Array.prototype.push.apply($rootScope.files[$rootScope.activeField], files);
        if ($rootScope.settings[$rootScope.activeField].addlFieldName != undefined && $rootScope.files[$rootScope.settings[$rootScope.activeField].addlFieldName] != undefined) {
          Array.prototype.push.apply($rootScope.files[$rootScope.settings[$rootScope.activeField].addlFieldName], files);
        }
        jQuery('#'+$rootScope.activeField+'_media').trigger('change');
        console.log('elem', jQuery('#'+$rootScope.activeField+'_media').val());
        $state.go('base');
      }

   
      $rootScope.$on('$stateChangeSuccess', 
        function(event, toState, toParams, fromState, fromParams){
        }
      );

      // Helper function detects the correct sub route to go to (for templating)
      $rootScope.goSubRoute = function(baseRoute, subRoute, baseName) {
        baseName = baseName == undefined ? 'base' : baseName;
        var stateName = baseRoute+'.'+subRoute;
        try {
          var state = $state.get(stateName);
          if (state == undefined || state == null) {
            throw "myException";
          }
        }
        catch(e) {
          stateName = baseRoute+'.'+baseName;
        }
        $state.go(stateName);
      }
    
    }
  ]
)

.config(
  [          '$locationProvider', '$stateProvider', '$urlRouterProvider',
    function ($locationProvider,   $stateProvider,   $urlRouterProvider) {

      //////////////////////////
      // State Configurations //
      //////////////////////////

      // Use $stateProvider to configure your states.
      $stateProvider

    }
  ]
);

}(jQuery));