<?php
/**
 * @file
 * Hatha template with content column and a left sidebar.
 */

$plugin = array(
  'title' => t('Sidebar left'),
  'theme' => 'sidebar-left',
  'icon' => 'sidebar-left.png',
  'category' => 'Hatha',
  'regions' => array(
    'top' => t('Top'),
    'sidebar' => t('Sidebar'),
    'content' => t('Content'),
    'bottom' => t('Bottom'),
  ),
);
