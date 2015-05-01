'use strict';

angular.module('metaInfo', [])

.provider('metaInfo', function metaInfoProvider() {

  // title

  var baseTitle = '',
      title     = '';

  // Meta information

  var baseMetaDescription = '',
      metaDescription    = '',
      baseMetaKeywords    = '',
      metaKeywords    = '';

  this.setBaseTitle = function(newTitle) {
    baseTitle = newTitle;
  }
  this.setBaseDescription = function(description) {
    baseMetaDescription = description;
  }
  this.setBaseKeywords = function(keywords) {
    baseMetaKeywords = keywords;
  }

  this.$get = function metaInfoFactory() {
    
    return {

      //title -----------------
      title: function() { 
        return title.length ? title + " | " + baseTitle : baseTitle; 
      },
      setTitle: function(newTitle) { 
        title = newTitle; 
      },

      // Meta -------------------

      metaDescription: function() { 
        return metaDescription.length ? metaDescription : baseMetaDescription; 
      },
      metaKeywords: function() { 
        return metaKeywords.length ? metaKeywords : baseMetaKeywords; 
      },
      setMetaDescription: function(newMetaDescription) {
        metaDescription = newMetaDescription;
      }, 
      setMetaKeywords: function(newKeywords, append) {
        var keywords = '';
        for (var key in newKeywords) {
          keywords += ', ' + newKeywords[key].name;
        }
        // Append extras
        if(typeof append != 'undefined' && append) {
          metaKeywords = baseMetaKeywords + keywords;
        }
        // Just set
        else {
          metaKeywords = keywords;
        }
      },
      resetAll: function() {
        title = '';
        metaDescription = '';
        metaKeywords = '';
      }
    }
  }
});