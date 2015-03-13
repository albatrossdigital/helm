Flight Base - A Zurb Foundation base theme for the flight distribution

-------------
-- SUMMARY --
-------------

Authors: Jeff Lyon, Alex Schmoe
http://albatrossdigital.com


------------------
-- REQUIREMENTS --
------------------

This Drupal theme is intended for Drupal versions 7 only; it will not work with Drupal 6 or below. You must install Open Framework theme 7.x-2.x or higher for this theme to operate properly.


-----------------------------
-- SUBTHEMING INSTRUCTIONS --
-----------------------------

If you are familiar with node.js and would like to use the provided helpers to speed up subtheming, please read the "Development Tools" section below.  Otherwise, continue here.

1) Copy (don't move) the flight_subtheme folder from the Flight theme folder.
2) Paste it in your themes directory.
3) Rename the "flight_subtheme" folder to "your-theme-name" and rename the "flight_subtheme" .info file to "your-theme-name" as well.
4) Edit the README.txt for your new theme (this file) and the theme info in the .info file.
5) Once you have renamed everything, you can proceed to the installation instructions below.

To start creating your subtheme, you can use the CSS template included (.css file), or add your own. Add Javascript to the scripts folder. Add your own site logo to replace the logo.png file (keep same name) and your own theme's screenshot (replace screenshot.png). Also you can add a favicon.ico file for your site if you wish.


------------------
-- INSTALLATION --
------------------

As an admin, go to Administer > Appearance > Themes to enable your subtheme and the Open Framework theme (as it is a required base theme).
More detailed information on installing themes here: http://drupal.org/getting-started/install-contrib/themes.


------------------------
-- DEVELOPEMENT TOOLS --
------------------------

This theme ships with some tools to make the theme building process much easier.  The tool set (as written) is reliant upon sass, compass, livereload browser plugin, node.js, npm package manager, and grunt.js.


-> SASS

http://sass-lang.com/

CSS compiler that makes life easy


-> COMPASS

http://compass-style.org/

Toolset for SASS.  A folder


-> LIVERELOAD

http://feedback.livereload.com/knowledgebase/articles/86242-how-do-i-install-and-use-the-browser-extensions-

Browser plugin that auto-refreshes the page on CSS / JS changes in the theme.  You only need to get the pertinent browser tool from the link above, we will use grunt.js to run the livereload server.


-> NODE.JS

http://nodejs.org/

Javascript platform.


-> NPM

https://npmjs.org/

Package manager for node.


-> GRUNT.JS

http://gruntjs.com/

Node.js tasking toolset.


-> USING THE INCLUDED TOOLS


- Subtheme creator

Included in the base theme flight_base, this is a Grunt task that copies and renames a new subtheme for you.

Install via the install.sh file included in the folder, the call it from the command line using "grunt subtheme:MYTHEME_NAME:SYNTAX" where syntax is either "sass" or "scss"


- Subtheme watcher

Included in the subtheme flight_subtheme, this is a Grunt task that runs compass, livereload, and jshint on your theme code.

Once you have created a new subtheme (by copying or using the tool described above) and are using it in Drupal, install via the install.sh file included in the folder.  Start the watcher from the command line using "grunt" and make sure you have the livereload browser plugin activated.

There is a config.rb file that defines the SASS/COMPASS options, and a .jshintrc file for the jshint options.


-------------------------------
-- THEMING WITH COMPASS/SASS --
-------------------------------

This theme includes a config.rb file, so compiling the sass is pretty easy.  Check the "Development Tools" section above for a provided tool. Or from the command line, cd to your theme directory and then type:
compass watch..


A quick description of included SASS mixins:


-> EXTENDIBLES

Silent extends are a great tool for minimizing css.  In the mixin file you will find some simple examples of extendibles you could use in you theme.  They work by combining all calls to an extend into a single css block at the top of the compiled code.


.some-class                     .some-class,
  +s(hide)                      .another-class {
                                  display: none;
.another-class    Compiles      }
  +s(hide)       ---------->
                                .some-other {
.some-other                       color: #000000;
  color: $black                 }


Extends do not work in media queries yet, so this tool set is somewhat limited.


-> RESPOND MIXIN

The respond mixin takes a media query as an argument, and prints out the following content block under that media query.


.content                               .content.left {
  &.left               Compiles          float: left;
    float: left       ---------->      }

    +respond($mq-mobile)               @media (max-width: 480px) {
      width: 100%                        .content.left {
                                           width: 100%;
                                         }
                                       }

There are compass plugins like breakpoint (https://github.com/team-sass/breakpoint) that provide a more full featured approach to this style of media query management, but this version accomplishes the core functionality.


-> SPRITES

Included in _mixins.sass are a couple different tools for implementing sprites.

+sprite() and +sprite-block() are simple helpers that assume you have a sprite file in ./images/, and provide a short-hand for including sprites.

Another option is the stock compass spriting system. http://compass-style.org/help/tutorials/spriting/

The compass spriting system is a fantastic tool for making image sprites easy.  Unfortuately, it doesn't play well with media queries.  Included is a mixin that does function as expected with media queries (from https://gist.github.com/dfadler/3105369), but is a little more complicated to use than compass' version.

Under the sprite section in _mixins.sass is the example call:

$icons: sprite-map("icons/*.png")

Use this form when using the responsive sprite mixin. In order to control the drawing of the icon sprite in this example you must explicitly include instructions inline with the sprite-map call above.  Using http://compass-style.org/help/tutorials/spriting/customization-options/ as a reference.

For example, instead you might have:
$icons: sprite-map("icons/*.png", $icons-spacing: 60px, $icons-ICONNAME-position: 100%)

Then use the +get-sprite() mixin to include sprites.


-> ICON FONTS

We recommend using the excellent iconfont generator at http://icomoon.io/app/

You can follow either of 2 routes (or both for that matter) when it comes to iconfonts.

1. Simply include the generated icon fonts + css in your theme, and follow their convention of inserting icons into the HTML structure.  This is probably the best option, but it can be frustrating to inject classes in some areas of drupal output.

2. Set up the variables in _variables.sass and complete a little leg work to use the icon mixins found in this subtheme's mixin file.  Then use SASS to place icons wherever you would like.


-- TROUBLESHOOTING --

Connect with the Open Framework maintainers at http://drupal.org/project/flight.
