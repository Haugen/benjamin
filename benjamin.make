api = 2
core = 7.x

projects[admin_menu][version] = 3.0-rc4
projects[admin_menu][subdir] = contrib

projects[admin_views][version] = 1.3
projects[admin_views][subdir] = contrib

projects[ctools][version] = 1.4
projects[ctools][subdir] = contrib

projects[diff][version] = 3.2
projects[diff][subdir] = contrib

projects[devel][version] = 1.5
projects[devel][subdir] = contrib

projects[entity][version] = 1.5
projects[entity][subdir] = contrib

projects[entity_view_mode][version] = 1.0-rc1
projects[entity_view_mode][subdir] = contrib

projects[features][version] = 2.2
projects[features][subdir] = contrib

projects[file_entity][version] = 2.0-alpha3
projects[file_entity][subdir] = contrib
projects[file_entity][patch][] = https://drupal.org/files/issues/file_entity-move-file-display-alter-to-db-1858370-17.patch

projects[globalredirect][version] = 1.5
projects[globalredirect][subdir] = contrib

projects[libraries][version] = 2.2
projects[libraries][subdir] = contrib

projects[media][type] = module
projects[media][download][type] = git
projects[media][download][revision] = 2f828ea
projects[media][subdir] = contrib
projects[media][patch][2126755] = https://drupal.org/files/issues/media-wysiwyg-improve-our-macro-handling-2126755-58.patch

projects[media_youtube][version] = 2.0-rc4
projects[media_youtube][subdir] = contrib

projects[menu_block][version] = 2.4
projects[menu_block][subdir] = contrib

projects[panels][version] = 3.4
projects[panels][subdir] = contrib

projects[panels_everywhere][version] = 1.0-rc1
projects[panels_everywhere][subdir] = contrib

projects[pathauto][version] = 1.2
projects[pathauto][subdir] = contrib

projects[strongarm][version] = 2.0
projects[strongarm][subdir] = contrib

projects[token][version] = 1.5
projects[token][subdir] = contrib

projects[variable][version] = 2.5
projects[variable][subdir] = contrib

projects[views][version] = 3.8
projects[views][subdir] = contrib

projects[views_bulk_operations][version] = 3.2
projects[views_bulk_operations][subdir] = contrib

projects[wysiwyg][type] = module
projects[wysiwyg][version] = 2.2
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = ee64524
projects[wysiwyg][patch][1956778] = https://drupal.org/files/wysiwyg-ckeditor-acf-1956778-37.patch

; Libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3.2/ckeditor_4.3.2_standard.zip
libraries[ckeditor][destination] = libraries
