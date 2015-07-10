<?php
/**
 * @file
 * feature_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_default';
  $strongarm->value = 'en';
  $export['admin_language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_force_default';
  $strongarm->value = '0';
  $export['admin_language_force_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_force_neutral';
  $strongarm->value = '0';
  $export['admin_language_force_neutral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_hide_node';
  $strongarm->value = '0';
  $export['admin_language_hide_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_hide_user';
  $strongarm->value = '0';
  $export['admin_language_hide_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_pages';
  $strongarm->value = 'admin_menu/*
file/ajax/*
system/ajax';
  $export['admin_language_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_path_is_admin_paths';
  $strongarm->value = array(
    'admin' => 'node/*/edit
node/*/delete
node/*/revisions
node/*/revisions/*/revert
node/*/revisions/*/delete
node/add
node/add/*
overlay/dismiss-message
user/*/shortcuts
admin
admin/*
batch
taxonomy/term/*/edit
user/*/cancel
user/*/edit
user/*/edit/*
devel/*
node/*/devel
node/*/devel/*
comment/*/devel
comment/*/devel/*
user/*/devel
user/*/devel/*
taxonomy/term/*/devel
taxonomy/term/*/devel/*',
    'non_admin' => 'admin/structure/block/demo/*
admin/reports/status/php',
  );
  $export['admin_language_path_is_admin_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_translate_admin_menu';
  $strongarm->value = '1';
  $export['admin_language_translate_admin_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_use_path_is_admin';
  $strongarm->value = 1;
  $export['admin_language_use_path_is_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_visibility';
  $strongarm->value = '1';
  $export['admin_language_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '2.1';
  $export['jquery_update_jquery_version'] = $strongarm;

  return $export;
}
