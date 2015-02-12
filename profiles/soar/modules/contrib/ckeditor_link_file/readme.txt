CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Usage
 * Sponsors

INTRODUCTION
------------

Current Maintainers:

 * Devin Carlson <http://drupal.org/user/290182>

CKEditor Link File provides integration between CKEditor Link and File entity,
allowing editors to link to files from within CKEditor.

CKEditor Link File gives editors three important tools:

 * A simple method of linking to existing files (promoting file reuse and
   helping to eliminate duplicate files).
 * The ability to link to files, file URLs or file downloads (configurable by an
   administrator).
 * The ability to restrict links to certain file types such as audio, video,
   images or documents (configurable by an administrator).

REQUIREMENTS
------------

CKEditor Link File has two dependencies.

Contributed modules
 * CKEditor Link
 * File entity

INSTALLATION
------------

To install CKEditor Link File:

 * CKEditor Link File can be installed using the standard module installation
   process (http://drupal.org/documentation/install/modules-themes/modules-7).

USAGE
-----

CKEditor Link File adds file support to CKEditor Link.

With CKEditor Link File installed, users can link to files in addition to menu
items, taxonomy terms and nodes which CKEditor Link supports out of the box.

CKEditor Link File provides three file link methods: file, URL and download.
 * File
    Provide a link to view the file entity itself (file/%fid)
 * URL
    Link to a web-accessible URL of the file (example.com/files/image.jpg)
 * Download
    A special link to the file which forces the visitor's browser to download
    the file instead of opening it.

Sponsors
--------

Development of CKEditor Link File is sponsored by the Ontario Ministry of
Northern Development and Mines (http://www.mndm.gov.on.ca).
