
/**
 * @file
 * README file for Domain CTools.
 */

Domain CTools
A domain-based access control system.

CONTENTS
--------

1.  Introduction
2.  Features
3.  Additional development

----
1.  Introduction

This module extends Domain Access for Drupal developers by using
the CTools suite. To use this module, you must have both Domain
Access and CTools installed.

----
2.  Features

The only feature currently implemented is an access control plugin
for Page Manager. This plugin allows you to set domain-specific
visibility rules for Pages and Panels.

Note that CTools provides a "Reverse (NOT)" option when setting
the access control. This value is not passed to the plugin and appears
to be a CTools API error. Do not use this feature. It will fail.

----
3.  Additional development
Additional features should be filed as patches against HEAD.
