'use strict';

module.exports = function(grunt) {

  require('load-grunt-tasks')(grunt);

  var globalConfig = {
    theme_css: 'css',
    theme_scss: 'scss',
    theme_compass: false,
    theme_dist: 'nested'
  };

  // Set up our sass files
  var sassFiles = {},
      fileNames = [
        'ckeditor',
        'custom',
        'custom-foundation',
        'ie',
      ];

  // compile sass file paths
  for(var i = 0; i < fileNames.length; i++) {
    sassFiles['<%= globalConfig.theme_css %>/' + fileNames[i] + '.css'] = 'sass/' + fileNames[i] + '.<%= globalConfig.theme_scss %>';
  }

  grunt.initConfig({
    globalConfig: globalConfig,
    pkg: grunt.file.readJSON('package.json'),

    'node-inspector': {
      dev: {}
    },

    // Lib-sass
    sass: {
      //options: {
        //sourceMap: true
      //},
      dev: {
        options: {
          outputStyle: 'nested', // expanded or nested or compact or compressed
          includePaths: [
            'sass',
            'bower_components/foundation/scss',
            'bower_components/bourbon/dist'
          ],
          imagePath: '../images/unminified'
        },
        files: sassFiles
      },
      dist: {
        options: {
          outputStyle: 'compressed', // expanded or nested or compact or compressed
          includePaths: [
            '<%= globalConfig.theme_scss %>',
            'bower_components/foundation/scss',
            'bower_components/bourbon/dist'
          ],
          imagePath: '../images'
        },
        files: sassFiles
      }
    },

    watch: {
      grunt: { files: ['Gruntfile.js'] },

      sass: {
        files: ['sass/{,**/}*.s*ss'],
        tasks: ['sass:dev']
      },
      js: {
        files: [
          'js/{,**/}*.js',
          '!js/{,**/}*.min.js'
        ],
        tasks: [
          'jshint',
        ]
      },
      livereload: {
        files: ['js/{,**/}*.js', '<%= globalConfig.theme_css %>/{,**/}*.css', 'images/{,**/}.{jpg,gif,svg,jpeg,png}'],
        options: {
          livereload: true
        }
      }
    },
    jshint: {
      options: {
        jshintrc: '.jshintrc'
      },
      all: [
        'js/{,**/}*.js',
        '!js/{,**/}*.min.js',
        '!js/{,**/}foundatio*.js',
        '!js/behavior/{,**/}*.js',
        '!js/foundation/{,**/}*.js',
        '!js/vendor/{,**/}*.js'
      ]
    },
    coffeelint: {
      all: ['js/{,*/}*.coffee']
    },
    coffee: {
      dist: {
        files: [{
          expand: true,
          cwd: 'js',
          src: '{,*/}*.coffee',
          dest: 'js',
          ext: '.js'
        }]
      }
    },
    imagemin: {
      options: {                      
        optimizationLevel: 3
      },
      dynamic: {                         
        files: [{
          expand: true,                  
          cwd: 'images/unminified/',     
          src: ['**/*.{jpg,gif,svg,jpeg,png}'],       
          dest: 'images/'                
        }]
      }
    },
    uglify: {
      foundation: {
        options: {
          preserveComments: 'some',
          mangle: false
        },
        files: {
          'js/custom-foundation.min.js' : [
            'js/foundation/foundation.js',
            'js/foundation/foundation.abide.js',
            'js/foundation/foundation.accordion.js',
            'js/foundation/foundation.alert.js',
            'js/foundation/foundation.clearing.js',
            'js/foundation/foundation.dropdown.js',
            'js/foundation/foundation.equalizer.js',
            'js/foundation/foundation.interchange.js',
            'js/foundation/foundation.joyride.js',
            'js/foundation/foundation.magellan.js',
            'js/foundation/foundation.offcanvas.js',
            'js/foundation/foundation.orbit.js',
            'js/foundation/foundation.reveal.js',
            'js/foundation/foundation.slider.js',
            'js/foundation/foundation.tab.js',
            'js/foundation/foundation.tooltip.js',
            'js/foundation/foundation.topbar.js'
          ]
        }
      }
    },
    stripmq: {
      options: {
        stripBase: true,
        minWidth: 40,
        maxWidth: 1280
      },
      files: {
        src: [
          'css/custom-foundation.css',
          'css/custom.css',
        ],
        dest: 'css/ie-mq.css'
      },
    }
  });

  
  grunt.registerTask('warn', "Notice", function() {
    grunt.log.writeln("If you encounter compilation errors make sure you have the flight_base theme include path configured correctly (see: sass/base/_init.sass).");
  });
  

  // Runs sass, sets vars
  grunt.registerTask('compile-sass', ['warn', 'sass:dist','stripmq', 'imagemin']);

  // Run watch at default settings
  grunt.registerTask('default', ['warn', 'sass:dev','stripmq','watch']);

  // Run watch with options
  grunt.registerTask('build', ['warn', 'compile-sass', 'uglify']);
}
