<?php
/**
 * @file
 * Hatha template with content column and a sidebar.
 */

$plugin = array(
  'title' => t('One sidebar'),
  'theme' => 'one_sidebar',
  'icon' => 'one-sidebar.png',
  'category' => 'Benjamin',
  'regions' => array(
    'top' => t('Top'),
    'sidebar' => t('Sidebar'),
    'content' => t('Content'),
    'bottom' => t('Bottom'),
  ),
);
