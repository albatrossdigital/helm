'use strict';

module.exports = function(grunt) {

  require('load-grunt-tasks')(grunt);

  var globalConfig = {
    theme_css: 'css',
    theme_scss: 'scss',
    theme_compass: false,
    theme_dist: 'nested',
    bowerPath: {
      'bootSass': 'bower_components/bootstrap-sass-official/assets/stylesheets/',
      'bootJs':   'bower_components/bootstrap-sass-official/assets/javascripts/bootstrap/',
      'bourbon':  'bower_components/bourbon/dist/'
    }
  };

  // Set up our sass files
  var sassFiles = {},
      fileNames = [
        'custom'
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
            '<%= globalConfig.bowerPath.bootSass %>',
            '<%= globalConfig.bowerPath.bourbon %>'
          ],
          imagePath: '../images/unminified'
        },
        files: sassFiles
      },
      dist: {
        options: {
          outputStyle: 'compressed', // expanded or nested or compact or compressed
          includePaths: [
            'sass',
            '<%= globalConfig.bowerPath.bootSass %>',
            '<%= globalConfig.bowerPath.bourbon %>'
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
      livereload: {
        files: ['js/{,**/}*.js', '<%= globalConfig.theme_css %>/{,**/}*.css', 'images/{,**/}.{jpg,gif,svg,jpeg,png}'],
        options: {
          livereload: true
        }
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
      bootstrap: {
        options: {
          preserveComments: 'some',
          mangle: false
        },
        files: {
          'js/custom-bootstrap.min.js' : [
            '<%= globalConfig.bowerPath.bootJs %>transition.js',
            '<%= globalConfig.bowerPath.bootJs %>modal.js',
            '<%= globalConfig.bowerPath.bootJs %>affix.js',
            '<%= globalConfig.bowerPath.bootJs %>alert.js',
            '<%= globalConfig.bowerPath.bootJs %>button.js',
            'js/bootstrap/carousel-compatibility.js',
            '<%= globalConfig.bowerPath.bootJs %>collapse.js',
            '<%= globalConfig.bowerPath.bootJs %>dropdown.js',
            '<%= globalConfig.bowerPath.bootJs %>tooltip.js',
            '<%= globalConfig.bowerPath.bootJs %>popover.js',
            '<%= globalConfig.bowerPath.bootJs %>scrollspy.js',
            '<%= globalConfig.bowerPath.bootJs %>tab.js'
          ]
        }
      }
    },
    // concat: {///\$(\.fn\.(.*?)\.Constructor.*?\=.*?(.*)),
    //   dist: {// $(\.fn\.(.*?)\.Constructor\=)
    //     options: {
    //       // Pass in the new jquery val
    //       process: function(src, filepath) {
    //         if(filepath.indexOf('bootstrap') > 0) {
    //           // Inject new jquery version
    //           src = src.replace(/jQuery/g, 'jqboot');
    //         }
    //         return src;
    //       },
    //     },
    //     files: {
    //       'js/bootstrap-full.min.js': [
    //         'bower_components/jquery/dist/jquery.min.js',
    //         'js/no-conflict.js',
    //         'js/custom-bootstrap.min.js',
    //         'js/attach-no-conflict.js'
    //       ],
    //     },
    //   },
    // },
    stripmq: {
      options: {
        stripBase: true,
        minWidth: 40,
        maxWidth: 1280
      },
      files: {
        src: [
          'css/custom.css',
        ],
        dest: 'css/ie-mq.css'
      },
    }
  });
  

  // Runs sass, sets vars
  grunt.registerTask('compile-sass', ['sass:dist','stripmq', 'imagemin']);

  // Run watch at default settings
  grunt.registerTask('default', ['sass:dev','stripmq','watch']);

  // Run watch with options
  grunt.registerTask('build', ['compile-sass', 'uglify']);
}
