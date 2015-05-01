'use strict';

angular.module('app.view', [
  'ui.router'
])

.config(
  [ '$stateProvider', '$urlRouterProvider',
    function ($stateProvider,   $urlRouterProvider) {

      $stateProvider

        // Base route handles getching data, sub-routing 
        .state("view", {
          url: "/list/:entityType/:name",
          template: '<div class="view view-{{name}}" ui-view></div>',
          data: { 
            title: 'View',                 // Sets meta title
            description: 'About the about', // Sets different meta description
            keywords: 'About, this, page',  // Sets different meta keywords
            skipScroll: false               // Skips scroll animation (embedded ui-views)
          },
          resolve: {
            items: function($stateParams, View) {
              return View.query($stateParams).$promise.then(function(data) {
                return data;
              });
            }
          },
          controller: function($scope, $rootScope, $state, items, View, viewsFactory){
            $scope.items = items;
            $scope.name = $state.params.name;
            $scope.entityType = $state.params.entityType;

            // @todo: Set route metadata (is this possible?)

            // Determine the appropriate sub-route
            $scope.$watch('items', function() {
              $rootScope.goSubRoute('view', $scope.entityType+$scope.name);
            });

            // Helper function 

            // Helper function for infinite scroll pager
            $scope.currentPage = 0;
            $scope.loadingPage = false;
            $scope.addItems = function() {
              viewsFactory.pageLoad($scope, {entityType: $scope.entityType, name: $scope.name, page: $scope.currentPage});
            }
          }
        })

        // Generic node template
        .state("view.base", {
          templateUrl: appUrl + 'views/view.html'
        })

        // Custom template for lists of the article content type
        
        .state("article", {
          templateUrl: appUrl + 'views/view/article.html',
          url: '/articles?tag',
          resolve: {
            items: function($stateParams, View) {
              return View.query({entityType: 'node', name: 'article', a: $stateParams.tag}).$promise.then(function(data) {
                return data;
              });
            }
          },
          controller: function($scope, $rootScope, $state, items, View, viewsFactory){
            $scope.items = items;
            $scope.tag = $state.params.tag;
            
            // Get tags
            $scope.activeTerm = null;
            View.query({entityType: 'term', name: 'tags'}, function(data) {
              $scope.terms = data;
              console.log(data);
            });

            // Helper function for infinite scroll pager
            $scope.currentPage = 0;
            $scope.loadingPage = false;
            $scope.addItems = function() {
              viewsFactory.pageLoad($scope, {entityType: 'node', name: 'article', a: $state.params.tag, page: $scope.currentPage});
            }
          } 
        })
        
        
    }
  ]
);
