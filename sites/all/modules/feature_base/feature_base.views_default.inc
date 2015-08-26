<?php
/**
 * @file
 * feature_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rubric';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_node_index';
  $view->human_name = 'rubric';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'myphp_grid_plugin_style';
  $handler->display->display_options['style_options']['lg'] = array(
    'enable' => 1,
    'nb_columns' => '3',
    'nb_items1' => '6',
    'nb_columns1' => '2',
    'nb_items2' => '3',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['style_options']['md'] = array(
    'enable' => 0,
    'nb_columns' => '1',
    'nb_items1' => '8',
    'nb_columns1' => '2',
    'nb_items2' => '4',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['style_options']['sm'] = array(
    'enable' => 0,
    'nb_columns' => '1',
    'nb_items1' => '8',
    'nb_columns1' => '2',
    'nb_items2' => '4',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['style_options']['xs'] = array(
    'enable' => 0,
    'nb_columns' => '1',
    'nb_items1' => '8',
    'nb_columns1' => '2',
    'nb_items2' => '4',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_search_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_search_node_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['rubric'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Block'),
  );
  $export['rubric'] = $view;

  return $export;
}
