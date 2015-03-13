'use strict';
var path = require('path');

module.exports = function (grunt) {
  // Project configuration.
  grunt.initConfig({
    copy: {
      main: {
        files: [
          {
            expand: true,
            cwd: 'flight_subtheme',
            src: [
              '.gitignore',
              '.jshintrc',
              '*',
              '{,**/}*',
              '!sass',
              '!sass/*',
              '!*.info',
              '!flight_subtheme.png'
            ],
            dest: '<%= themeName %>/'
          },
          {
            expand: true,
            cwd: 'flight_subtheme',
            src: [
              '*.info'
            ],
            dest: '<%= themeName %>/',
            rename: function(dest) {
              return dest + "<%= themeName %>.info";
            }
          },
          {
            expand: true,
            cwd: 'flight_subtheme',
            src: [
              'flight_subtheme.png'
            ],
            dest: '<%= themeName %>/',
            rename: function(dest) {
              return dest + "<%= themeName %>.png";
            }
          }
        ]
      },
      sass: {
        files: [
          {
            expand: true,
            cwd: 'flight_subtheme/sass',
            src: [
              '**'
            ],
            dest: '<%= themeName %>/sass/'
          },
        ]
      }
    },
    replace: {
      theme: {
        src: [
          '<%= themeName %>/*.php',
          '<%= themeName %>/*.info',
          '<%= themeName %>/js/*.js',
          '<%= themeName %>/js/*.coffee',
          '<%= themeName %>/*.txt',
          '<%= themeName %>/package.json'
        ],
        overwrite: true,
        replacements: [{
          from: 'flight_subtheme',
          to: '<%= themeName %>'
        }]
      },
      sass: {
        src: ['<%= themeName %>/config.rb'],
        overwrite: true,
        replacements: [{
          from: /\"scss\"/i,
          to: '\"sass\"'
        }]
      },
      sassgrunt: {
        src: ['<%= themeName %>/Gruntfile.js'],
        overwrite: true,
        replacements: [{
          from: /theme_scss\:\ \'scss/i,
          to: "theme_scss: 'sass",
        }]
      }
    },
    "sass-convert": {
      options: {
        to: "sass",
        from: "scss"
      },
      files: {
        src: ['<%= themeName %>/sass/**/*.scss'],
        dest: '.'
      }
    },
    clean: {
      scss: {
        src: ["<%= themeName %>/sass/**/*.scss"]
      }
    }
  });

  grunt.loadNpmTasks('grunt-contrib-copy');
  grunt.loadNpmTasks('grunt-text-replace');
  grunt.loadNpmTasks('grunt-sass-convert');
  grunt.loadNpmTasks('grunt-contrib-clean');

  grunt.registerTask('subtheme', "Create a flight subtheme", function(themeName, syntax) {
    var sassCon = false;
    if (arguments.length === 0) {
      grunt.log.error(this.name + " cannot run without a theme name, use the form \"grunt subtheme:THEMENAME:SYNTAX\"");
    }
    else if (arguments.length === 1) {
      grunt.log.writeln(this.name + " running with theme name " + themeName + ", and scss syntax since nothing was specified");
      syntax = 'scss';
    }
    else if (arguments.length === 2) {
      if (syntax == "sass" || syntax == "scss") {
        grunt.log.writeln(this.name + " running with theme name " + themeName + ", and " + syntax + " syntax");
      }
      else {
        grunt.log.error(this.name + " syntax argument must be \"scss\" or \"sass\"");
      }
    }
    if (this.errorCount) { return false; }
    else {
      grunt.config.set('themeName', themeName);
      grunt.config.set('syntax', syntax);
      grunt.task.run('copy:main');
      grunt.task.run('copy:sass');
      grunt.task.run('replace:theme');
      if(syntax == "sass") {
        grunt.task.run('sass-convert');
        grunt.task.run('clean:scss');
        grunt.task.run('replace:sass');
        grunt.task.run('replace:sassgrunt');
      }
    }
  });
};
