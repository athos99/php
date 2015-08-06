<?php
/**
 * @file
 * Provide views data and handlers.
 */

/**
 * Implements hook_views_plugins().
 */
function myphp_views_plugins() {
  $module_path = drupal_get_path('module', 'myphp');

  return array(
    'style' => array(
      'myphp_grid_plugin_style' => array(
        'title' => t('Bootstrap Grid'),
        'help' => t('Bootstrap Grid Style'),
        'path' => $module_path . '/plugins',
        'handler' => 'MyphpGridPluginStyle',
        'parent' => 'default',
        'theme' => 'myphp_grid_plugin_style',
        'theme path' => $module_path . '/templates',
        'theme file' => 'theme.inc',
        'uses row plugin' => TRUE,
        'uses grouping' => FALSE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}
