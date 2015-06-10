
CONTENTS OF THIS FILE
---------------------

* Overview
* Features
* Requirements
* Installation
* Known problems
* Version history
* Future plans
* Credits
* Recommended modules
* Similar projects

OVERVIEW
--------

This module aims to clean up, enhance and facilitate the customization of markup
for Drupal core and several popular contrib modules such as Panels.

FEATURES
--------

As of version 2.x:

Blocks
    From each individual block's configuration page (click "configure" on the
    block management screen), you can:
    * Disable or set the HTML5 element to use as the block wrapper,
    * Enable or disable an inner div,
    * Add classes to the outer block element,
    * Add custom attributes (i.e. role="navigation")
    * Set the HTML5 element to wrap the title,
    * Toggle whether the block title is displayed visually,
    * Disable or set the HTML5 element to wrap the content.

Panel panes
    By changing the pane style to "Clean markup" (click the gear in the top-
    right of a pane and click "Change" under "Style"), you can:
    * Disable or set the HTML5 element to use as the pane wrapper,
    * Enable or disable an inner div,
    * Add classes to the outer pane wrapper,
    * Add custom attributes (i.e. role="navigation")
    * Set the HTML5 element to wrap the title,
    * Toggle whether the block title is displayed visually,
    * Disable or set the HTML5 element to wrap the content.

Panel regions
    By changing the region style to "Clean markup" (click the gear in the top-
    left of a region and click "Change" under "Style"; or click "Display
    settings" on the panel itself), you can:
    * Disable or set the HTML5 element to use as the region wrapper,
    * Enable or disable an inner div,
    * Add classes to the outer region element,
    * Add custom attributes (i.e. role="navigation").
    * Enable or disable separator divs between panes in the region.

Panel Layouts
    Layouts have been provided to take advantage of Clean Markup's ability to
    output the minimal amount of markup.
    * One Column Clean: one region and single <section> wrapper.
    * One Column Reset: one region with no wrapper.
    * Six pack: six regions.
    * Myriad: five rows with four regions each that will output the absolute
      minimum markup. For example, a row with only one region will not output the row wrapper.

REQUIREMENTS
------------

Clean markup API
    no dependencies.
Clean block markup
    Block (in core) and Clean markup API
Clean panels markup
    Panels and Clean markup API
Tokens (Optional)
    For use in the custom attributes.

INSTALLATION
------------

1. Download and install the clean_markup project.

   If you want to change the markup of blocks, enable the "Clean block markup"
   module.

   If you want to change the markup of panels, enable the "Clean panels markup"
   module.

   See https://drupal.org/node/895232 for further information.

2. In order for a user to change the clean markup settings, they will need to
   have the correct permissions.

   To change the markup of blocks, a user will need *both* the "Administer
   blocks" and the "Administer clean markup block settings" permissions.

   To use Clean Markup module with Panels layouts, users will need the relevant
   permissions for using one or more of the Panels Suite interfaces (Mini
   panels, Panel nodes, Page manager, etc.), the "Administer Panels styles"
   permission and one or both of the following:

     - To change the markup of panel panes, "Administer clean panel pane markup
       settings".
     - To change the markup of panel regions, "Administer clean panel region
       markup settings".

   See https://drupal.org/node/1576512 for further information.

3. By default, the Clean Markup module doesn't make many changes to the markup
   to avoid breaking existing themes. To take control of the markup for a
   particular block, panel pane, panel region or panel layout, you must
   configure them.

   A block's clean markup settings can be changed from the block's settings
   page. See https://drupal.org/node/1576532 for further information. Note that
   if your theme (or your theme's base theme) has it's own block.tpl.php file,
   the Clean markup settings you choose may not take effect. In this case, you
   will need to copy modules/clean_markup_blocks/block.tpl.php from this module
   into your theme. See https://drupal.org/node/341628 and
   https://drupal.org/node/173880#template-override for further information.

   A panel pane's clean markup settings can be administered by changing the pane
   style to "Clean markup" (click the gear in the top-right of a pane and click
   "Change" under "Style").

   A panel region's clean markup settings can be administered by changing the
   region style to "Clean markup" (click the gear in the top-left of a region
   and click "Change" under "Style"; or click "Display settings" on the panel
   itself).

   Clean markup also provides a set of panel layouts with cleaner markup. To use
   these, you must replace a panel's current layout with one from the "Clean
   Markup" category.

KNOWN PROBLEMS
--------------

We don't know of any problems at this time, so if you find one, please let us
know by adding an issue!

VERSION HISTORY
---------------

The 1.x branch contains only the Clean Block Markup module. Updates made to
other branches that affect Clean Block Markup are being backported to this
branch if possible.

The 2.x branch is the current stable branch, and contains both the Clean Block
Markup and the Clean Panel Markup modules. Updates made to other branches that
affect Clean Block Markup and Clean Panel markup are being backported to this
branch if possible.

FUTURE PLANS
------------

The 3.x branch is currently in development, and contains the Clean Block Markup,
Clean Panel Markup and Clean Views Markup blocks.

We may also write something for Display Suite.


RECOMMENDED MODULES
-------------------

If you want to clean up the markup of nodes, comments, taxonomy terms or users,
check out Display Suite.

If you want to clean up the markup of fields, check out Fences.

If you want a really clean base theme, check out Mothership.

SIMILAR PROJECTS
----------------

The clean panel markup sub-module is similar to the Semantic Panels module,
available from https://drupal.org/project/semantic_panels . There are efforts
underway to collaborate with them: https://drupal.org/node/2087777 .

CREDITS
-------

Concept by rhache. Coding by mparker17 and anandps with assistance from rhache.
Sponsored by Myplanet Digital (http://www.myplanetdigital.com) and OpenConcept
Consulting (http://openconcept.ca/).
