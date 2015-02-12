angular.module('app.core')

// JSON endpoint provided by Drupal view.
.factory('CoreBrowser', function ($resource, $rootScope) {
    return $resource($rootScope.apiUrl + 'browse/:person/:type/:name', {
      format: 'json',
      type: '@type',
      name: '@name',
      person: '@person'
    }, { 'load': { method: 'JSON' } });
})


// Read/edit/create files. Provided by angular_media.module.
.factory('CoreFile', function ($resource, $rootScope) {
    return $resource($rootScope.apiUrl + 'file', {
      format: 'json',
      fid: '@fid',
      filename: '@filename',
      name: '@name',
      title: '@title',
      alt: '@alt',
      license: '@license',
      source: '@source',
      url: '@url'
    }, { 'load': { method: 'JSON' } });
})
