'use strict';

// Deal with local HTML5 Mode
var modRewrite = require('connect-modrewrite');
var mountFolder = function (connect, dir) {
  return connect.static(require('path').resolve(dir));
};
var filesRedirect = '!\\.html|\\.js|\\.svg|\\.woff|\\.ttf|\\.eot|\\.otf|\\.css|\\.png|\\.jpg$ /index.html [L]';

module.exports = function(grunt) {

  require('load-grunt-tasks')(grunt);


	grunt.initConfig({
		pkg: grunt.file.readJSON('package.json'),
		app: 'app',
		dist: 'dist',

		sass: {
			options: {
				includePaths: [
				  '<%= app %>/bower_components/foundation/scss',
				  '<%= app %>/bower_components/bootstrap-sass-official/assets/stylesheets',
          '<%= app %>/bower_components/bourbon/dist'
				]
			},
			dist: {
				options: {
					outputStyle: 'extended'
				},
				files: {
					'<%= app %>/css/app.css': '<%= app %>/scss/app.scss'
				}
			}
		},

		jshint: {
			options: {
				jshintrc: '.jshintrc'
			},
			all: [
				'Gruntfile.js',
				'<%= app %>/js/**/*.js'
			]
		},

		clean: {
			dist: {
				src: ['<%= dist %>/*']
			},
		},
		copy: {
			dist: {
				files: [{
					expand: true,
					cwd:'<%= app %>/',
					src: ['CNAME', '.htaccess', 'favicon.ico', 'fonts/**', 'vendor/**', '**/*.html', '!**/*.scss', '!bower_components/**'],
					dest: '<%= dist %>/'
				} , {
					expand: true,
					flatten: true,
					src: ['<%= app %>/bower_components/font-awesome/fonts/**'],
					dest: '<%= dist %>/fonts/',
					filter: 'isFile'
				} ]
			},
		},

		imagemin: {
			target: {
				files: [{
					expand: true,
					cwd: '<%= app %>/images/',
					src: ['**/*.{jpg,gif,svg,jpeg,png}'],
					dest: '<%= dist %>/images/'
				}]
			}
		},

		uglify: {
			options: {
				preserveComments: 'some',
				mangle: false,
				beautify: true
			}
		},

		useminPrepare: {
			html: ['<%= app %>/index.html'],
			options: {
				dest: '<%= dist %>'
			}
		},

		usemin: {
			html: ['<%= dist %>/**/*.html', '!<%= app %>/bower_components/**'],
			css: ['<%= dist %>/css/**/*.css'],
			options: {
				dirs: ['<%= dist %>']
			}
		},

		watch: {
			grunt: {
				files: ['Gruntfile.js'],
				tasks: ['sass']
			},
			sass: {
				files: '<%= app %>/scss/**/*.scss',
				tasks: ['sass']
			},
			livereload: {
				files: ['<%= app %>/**/*.html', '!<%= app %>/bower_components/**', '<%= app %>/js/**/*.js', '<%= app %>/css/**/*.css', '<%= app %>/images/**/*.{jpg,gif,svg,jpeg,png}'],
				options: {
					livereload: 35727
				}
			}
		},

		connect: {
			app: {
				options: {
					port: 9000,
					base: '<%= app %>/',
					open: true,
					livereload: 35727,
					hostname: 'localhost',
					middleware:  function (connect) {
            return [
              modRewrite ([filesRedirect]),
              mountFolder(connect, 'app')
            ];        
	        }
				}
			},
			dist: {
				options: {
					port: 9001,
					base: '<%= dist %>/',
					open: true,
					keepalive: true,
					livereload: false,
					hostname: 'localhost',
					middleware:  function (connect) {
            return [
              modRewrite ([filesRedirect]),
              mountFolder(connect, 'dist')
            ];        
	        }
				}
			}
		},

		wiredep: {
			target: {
				src: [
					'<%= app %>/**/*.html'
				],
				exclude: [
					'font-awesome',
					'bootstrap-sass-official'
				]
			}
		}

	});

	
	grunt.registerTask('compile-sass', ['sass']);
	grunt.registerTask('bower-install', ['wiredep']);
	
	grunt.registerTask('default', ['compile-sass', 'bower-install', 'connect:app', 'watch']);
	grunt.registerTask('validate-js', ['jshint']);
	grunt.registerTask('server-dist', ['connect:dist']);
	
	grunt.registerTask('publish', ['compile-sass', 'clean:dist', 'useminPrepare', 'copy:dist', 'concat', 'cssmin', 'uglify', 'usemin']);

};
