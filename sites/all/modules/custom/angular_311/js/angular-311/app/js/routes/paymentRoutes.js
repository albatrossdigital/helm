'use strict';

angular.module('app.payment', [
  'ui.router' 
])

.config(
  [ '$stateProvider', '$urlRouterProvider',
    function ($stateProvider, $urlRouterProvider) {
      
      $stateProvider

        .state("payments", {
          templateUrl: appUrl + 'views/payment/payment.html',
          url: "/payments",
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
          templateUrl: appUrl + 'views/payment/payment-type.html',
          url: "/:nid",
          resolve: {
            node: function($stateParams, $filter, nodes) {
              return $filter('filter')(nodes, { nid: $stateParams.nid })[0];
            }
          },
          controller: function($scope, $rootScope, $state, node, Payment){
            $scope.node = node;
            $scope.number = '';
            $scope.amount = '';
            $scope.numberClass = '';

            // Talk to invoice API
            $scope.$watch('number', function(){
              if ($scope.number != '' && $scope.number.length > 3) {
                $scope.numberClass = 'has-warning';
                Payment.get({number: $scope.number}, function(data) {
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
              window.location = $scope.node.url + '?edit[line_item_fields][field_payment_invoice_id][und][0][value]=' + $scope.number + '&edit[line_item_fields][helm_payment_amount][und][0][value]=' + $scope.amount;
            }

          }
        })
        


    }
  ]
)


