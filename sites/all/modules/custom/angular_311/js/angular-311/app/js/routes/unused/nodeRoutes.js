'use strict';

angular.module('app.node', [
  'ui.router' 
])

.config(
  [ '$stateProvider', '$urlRouterProvider',
    function ($stateProvider, $urlRouterProvider) {

      $stateProvider
         
        // Base route handles getching data, sub-routing 
        .state("node", {
          url: "/node/:nid",
          template: '<div class="node node-{{type}}" ui-view></div>',
          data: { 
            title: 'Node',                 // Sets meta title
            description: 'About the about', // Sets different meta description
            keywords: 'About, this, page',  // Sets different meta keywords
            skipScroll: false               // Skips scroll animation (embedded ui-views)
          },
          resolve: {
            node: function($stateParams, Node) {
              return Node.get({nid: $stateParams.nid}).$promise.then(function(data) {
                $stateParams.type = data.type[0].target_id;
                return data;
              });
            }
          },
          controller: function($scope, $rootScope, $state, node){
            $scope.node = node;
            $scope.type = node.type[0].target_id;

            // Set route metadata
            // @todo: make this work
            $state.$current.data.title = node.title[0].value;
            //@todo: keywords, description

            // Determine the appropriate sub-route
            $scope.$watch('node', function() {
              $rootScope.goSubRoute('node', $scope.type);
            });            
          }
        })

        // Generic node template
        .state("node.base", {
          templateUrl: appUrl + 'views/node.html'
        })

        // Custom template for article content type
        
        .state("payments", {
          templateUrl: appUrl + 'views/node/node-payments.html',
          url: "payments",
          resolve: {
            nodes: function($stateParams, Node) {
              return Node.query({type: 'payment'}).$promise.then(function(data) {
                return data.list;
              });
            }
          },
          controller: function($scope, $rootScope, $state, nodes){
            $scope.nodes = nodes;
          }
        })

        .state("payments.type", {
          templateUrl: appUrl + 'views/node/node-payments-type.html',
          url: ":nid",
          resolve: {
            node: function($stateParams, $filter, nodes) {
              return $filter('filter')(nodes, { nid: $stateParams.nid })[0];
            }
          },
          controller: function($scope, $rootScope, $state, node, Track){
            $scope.node = node;
            $scope.number = '';
            $scope.amount = '';
            $scope.numberClass = '';

            // Talk to invoice API
            $scope.$watch('number', function(){
              if ($scope.number != '' && $scope.number.length > 3) {
                $scope.numberClass = 'has-warning';
                Track.get({number: $scope.number}, function(data) {
                  if (data.amount != undefined) {
                    $scope.amount = data.amount;
                    $scope.name = data.name;
                    $scope.numberClass = 'has-success';
                  }
                  else {
                    $scope.amount = '';
                    $scope.numberClass = 'has-error';
                  }
                });
              }
              else {
                $scope.numberClass = '';
              }
            });

            // Submit
            $scope.submit = function() {
              window.location = $scope.node.url + '?number=' + $scope.number + '&amount=' + $scope.amount;
            }

          }
        })
        


    }
  ]
)


