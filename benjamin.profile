<?php
/**
 * Implements hook_wysiwyg_editor_settings_alter().
 */
function benjamin_wysiwyg_editor_settings_alter(&$settings, $context) {
  if ($context['profile']->editor == 'ckeditor') {
    $settings['allowedContent'] = TRUE;
  }
}
