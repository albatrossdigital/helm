Foundation Group
================

This module adds a new set of group styles to the Field Group options when configuring a view mode display.
Simply enable the module, and nest Fields from "Manage Display" like so:

Main Container (Foundation Section container)
 - Group Container 1 (Foundation Section item)
   - Field 1
   - Field 2
 - Group Container 2 (Foundation Section item)
   - Field 3
   - Field 4

This implements Zurb Foundation 4.x's Section component. Sections replace the
Accordion, Tabs, Vertical Nav & Nav Bar. Please refer to the Foundation 4.x
documentation for more information.


Installation
============

This module requires the latest dev version of the Field Group module and the
following patch applied: http://drupal.org/files/field-group-attach-group-alter.patch


Options
=======

All of the options supported by Foundation 4.x sections are available as
Field Formatter settings.

See also: Foundation 4.x Section: http://foundation.zurb.com/docs/components/section.html
