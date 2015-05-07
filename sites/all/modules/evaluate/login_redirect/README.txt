About
------------

A simple module providing a method to redirect users according to an URL-defined
parameter after logging in. Allows redirect towards non-Drupal location.

Author(s):
  legendm33066 <http://drupal.org/user/1290564>

Installation
------------

1. Install and enable the module.
2. Visit the Settings page (admin/config/system/login_redirect).
   In the Settings Page
1. Set Module Status : Enable
2. Enter user defined query Parameter name same as we have q in drupal core.

How it works
------------

Visit the Login page (usually user/login) and append the redirection URL
parameter using the parameter name defined in the Settings page
(admin/config/system/login_redirect).
For example, if you set the parameter name to
"destination", then you would visit user/login?destination=http://www.google.com
to have the user redirected to Google (http://www.google.com) after logging in.

Please note that the URL passed parameter ALWAYS overrides the destination
parameter handled by Drupal itself.
