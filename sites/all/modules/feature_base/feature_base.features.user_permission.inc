<?php
/**
 * @file
 * feature_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access service links'.
  $permissions['access service links'] = array(
    'name' => 'access service links',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'service_links',
  );

  return $permissions;
}
