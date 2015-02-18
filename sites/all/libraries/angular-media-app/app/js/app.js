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
  'xeditable',
  'ngJcrop'
  //'wu.masonry'
])

.run(
  [          '$rootScope', '$state', '$stateParams', '$window', '$location', '$timeout', 'editableOptions',
    function ($rootScope,   $state,   $stateParams,   $window,   $location, $timeout, editableOptions) {

      $rootScope.settings = {};
      $rootScope.files = {};
      $rootScope.flickrApiKey = '5202f8e46861f39f55bedfa2374a41d8';
      $rootScope.apiUrlUpload = 'http://liftoff.local/api/angular-media/';
      $rootScope.apiUrlBrowse = 'http://liftoff.local/api/angular-media/';


      $rootScope.appUrl = '';
      $rootScope.multiple = false;
      $rootScope.cardinality = 1; // max number of fields
      $rootScope.tabs = [
        {key: 'upload', title: 'Upload'},
        {key: 'browse', title: 'Site Files', params: {person: 'all'}},
        {key: 'flickr', title: 'Flickr'}
      ];

      editableOptions.theme = 'bs3';

      // It's very handy to add references to $state and $stateParams to the $rootScope
      // @todo: bad for performance?
      $rootScope.$state = $state;
      $rootScope.$stateParams = $stateParams;

   
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