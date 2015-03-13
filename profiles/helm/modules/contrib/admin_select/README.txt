The Administration Menu select module is a very basic module that provides a
selectbox on the user settings form allowing the user to choose which
Administration menu module they wish to use.

Administration Menu select was written and is maintained by Stuart Clark
(deciphered).
- http://stuar.tc/lark
- http://twitter.com/Decipher


Features
--------------------------------------------------------------------------------

* Support for:
  * Admin module.
  * Administration menu module.
  * Toolbar module.
* Ability to set default by role.
    http://[www.yoursite.com/path/to/drupal]/admin/config/user-interface/admin_select


Installation
--------------------------------------------------------------------------------

1. Install the module as usual. See:
   https://drupal.org/documentation/install/modules-themes/modules-7
2. Go to configuration page (admin/config/user-interface/admin_select).
3. Select the appropriate admin menu for each role. These will be the defaults
   for users who haven't selected anything on their account edit page.
4. If a user has multiple roles, the role used to determine which menu they see
   will be the one that appears highest in the list, so drag the roles to
   order them as required (remember that all logged in users also have the
   authenticated user role).
5. Save the settings.
