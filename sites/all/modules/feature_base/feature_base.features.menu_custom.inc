<?php
/**
 * @file
 * feature_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-me-suivre-ou-me-contacter.
  $menus['menu-me-suivre-ou-me-contacter'] = array(
    'menu_name' => 'menu-me-suivre-ou-me-contacter',
    'title' => 'Me suivre',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Me suivre');


  return $menus;
}
