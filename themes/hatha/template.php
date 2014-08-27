<?php
/**
 * @file
 * Template file
 */

/**
 * Override panels function to remove pane-separator div.
 */
function hatha_panels_default_style_render_region($vars) {
  $output = '';
  foreach ($vars['panes'] as $pane) {
    $output .= $pane;
  }
  return $output;
}
