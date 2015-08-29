<?php
/**
 * @file
 * feature_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-me-suivre-ou-me-contacter_blog-photo-athos99:http://blog.athos99.com
  $menu_links['menu-me-suivre-ou-me-contacter_blog-photo-athos99:http://blog.athos99.com'] = array(
    'menu_name' => 'menu-me-suivre-ou-me-contacter',
    'link_path' => 'http://blog.athos99.com',
    'router_path' => '',
    'link_title' => 'Blog photo Athos99',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-me-suivre-ou-me-contacter_blog-photo-athos99:http://blog.athos99.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-me-suivre-ou-me-contacter_facebook:http://www.facebook.com/michel.bobillier
  $menu_links['menu-me-suivre-ou-me-contacter_facebook:http://www.facebook.com/michel.bobillier'] = array(
    'menu_name' => 'menu-me-suivre-ou-me-contacter',
    'link_path' => 'http://www.facebook.com/michel.bobillier',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-me-suivre-ou-me-contacter_facebook:http://www.facebook.com/michel.bobillier',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog photo Athos99');
  t('Facebook');

  return $menu_links;
}
