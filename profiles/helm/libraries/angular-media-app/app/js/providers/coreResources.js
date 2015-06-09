angular.module('app.core')

// JSON endpoint provided by Drupal view.
.factory('CoreBrowser', function ($resource, $rootScope) {
  return $resource($rootScope.settings[$rootScope.activeField].apiUrl + 'browse/:person/:type/:name', {
    format: 'json',
    type: '@type',
    name: '@name',
    person: '@person'
  }, { 'load': { method: 'JSON' } });
})


// Read/edit/create files. Provided by angular_media.module.
.factory('CoreFile', function ($resource, $rootScope) {
  return $resource($rootScope.settings[$rootScope.activeField].apiUrl + 'file', {
    format: 'json',
    fid: '@fid',
    filename: '@filename',
    name: '@name',
    title: '@title',
    alt: '@alt',
    license: '@license',
    attribution: '@attribution',
    source: '@source',
    url: '@url',
    crop: '@crop',
    external: '@external',
    token: $rootScope.settings[$rootScope.activeField].token
  }, { 'load': { method: 'JSON' } });
})
