'use strict';

angular.module('paymentService', ['ngResource'])

  .factory('Payment', ['$resource', '$rootScope', function ($resource, $rootScope) {
    return $resource($rootScope.paymentUrl + '?number', 
      { 'number': '@number' },
      {
        get: {
          cache: true
        }
      }
    );
  }]);