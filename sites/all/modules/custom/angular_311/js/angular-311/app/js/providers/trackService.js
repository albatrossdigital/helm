'use strict';

angular.module('trackService', ['ngResource'])

  .factory('TrackService', ['$resource', '$rootScope', function ($resource, $rootScope) {
    return $resource($rootScope.trackUrl + '/services.json');
  }])

  .factory('Track', ['$resource', '$rootScope', function ($resource, $rootScope) {
    return $resource($rootScope.trackUrl + '/requests/:code.json', 
      { 'code': '@code' },
      {
        get: {
          isArray: true
        }
      }
    );
  }])