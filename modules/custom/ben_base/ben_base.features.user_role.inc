<?php
/**
 * @file
 * ben_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ben_base_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 2,
  );

  return $roles;
}
