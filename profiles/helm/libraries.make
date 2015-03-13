; Libraries that can't be in the main drupal-org.make because they are not whitelisted.
; NOTE: These need to be listed in http://drupal.org/packaging-whitelist.
core = "7.x"
api = "2"

; CKEditor from Albatross Digital Github
libraries[ckeditor][download][type] = git
libraries[ckeditor][download][url] = git@github.com:albatrossdigital/ckeditor-sandbox.git
libraries[ckeditor][download][branch] = master

; angular-media-app from Albatross Digital Github
libraries[ckeditor][download][type] = git
libraries[ckeditor][download][url] = git@github.com:albatrossdigital/angular-media-app.git
libraries[ckeditor][download][branch] = master

