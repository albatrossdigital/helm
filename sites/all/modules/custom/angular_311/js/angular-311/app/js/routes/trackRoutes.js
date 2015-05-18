'use strict';

angular.module('app.track', [
  'ui.router',
])

.config(
  [ '$stateProvider', '$urlRouterProvider',
    function ($stateProvider, $urlRouterProvider) {
      
      $urlRouterProvider
        //.when('', '/answers');

      $stateProvider
        
   

        .state("status", {
          url: '/status',
          templateUrl: appUrl + 'views/track/track-status.html',
          controller: function($scope, $rootScope, $state){
            //$scope.code = 'd2a6-1'; // @todo: default value, remove

          }
        })

        .state("status.item", {
          url: '/:code',
          templateUrl: appUrl + 'views/track/track-status-result.html',
          controller: function($scope, $rootScope, $state, Track){
            $scope.code = $state.params.code;

            Track.get({code: $state.params.code}).$promise.then(function(data) {
              if (data != undefined && data[0] != undefined) {
                $scope.item = data[0];
              }
              else {
                $scope.error = true;
              }
            });
          }
        })

        .state("report", {
          url: '/report',
          templateUrl: appUrl + 'views/track/track-report.html',
          resolve: {
            services: function($stateParams, TrackService) {
              return TrackService.query({}).$promise.then(function(data) {
                return data;
              });
            }
          },
          controller: function($scope, $rootScope, $state, services){
            $scope.types = services;
          }
        })

        .state("report.map", {
          url: '/:type',
          templateUrl: appUrl + 'views/track/track-report-map.html',
          controller: function($scope, $rootScope, $state, services){
            $scope.type = $state.params.type;
          }
        })



    }
  ]
);
