<?php
/**
 * @file
 * ben_base.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function ben_base_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__ben_standard__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'ben_standard',
    'image_link' => '',
  );
  $export['image__ben_standard__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ben_standard__file_field_file_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'width' => '',
    'height' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__ben_standard__file_field_file_video'] = $file_display;

  return $export;
}
