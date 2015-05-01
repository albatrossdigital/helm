'use strict';

angular.module('app')


// Returns term object
.filter('termByTid', function() {
  return function(items, tid) {
    for(var i = 0; i < items.length; i++) {
      if(parseInt(items[i].tid) == parseInt(tid)) {
        return items[i];
      }
    }
    return null;
  }
})

// Filters by checking there are no parents
.filter('termsNoParent', function() {
  return function(items) {
    var filtered = [];
    for(var i = 0; i < items.length; i++) {
      if(items[i].parent.length == 0)
        filtered.push(items[i]);
    }
    return filtered;
  }
})

// Filters by parent tid
.filter('termsByParent', function() {
  return function(items, tid) {
    var filtered = [];
    for(var i = 0; i < items.length; i++) {
      for(var j = 0; j < items[i].parent.length; j++) {
        if (items[i].parent[j].id == tid) {
          filtered.push(items[i]);
        }
      }
    }
    return filtered;
  }
});