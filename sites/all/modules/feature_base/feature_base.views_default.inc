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
  $view->name = 'last_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'last articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Last articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'myphp_grid_plugin_style';
  $handler->display->display_options['style_options']['lg'] = array(
    'enable' => 1,
    'nb_columns' => '3',
    'nb_items1' => '5',
    'nb_columns1' => '2',
    'nb_items2' => '3',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['style_options']['md'] = array(
    'enable' => 1,
    'nb_columns' => '3',
    'nb_items1' => '5',
    'nb_columns1' => '2',
    'nb_items2' => '3',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['style_options']['sm'] = array(
    'enable' => 1,
    'nb_columns' => '2',
    'nb_items1' => '3',
    'nb_columns1' => '1',
    'nb_items2' => '0',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['style_options']['xs'] = array(
    'enable' => 1,
    'nb_columns' => '1',
    'nb_items1' => '0',
    'nb_columns1' => '2',
    'nb_items2' => '0',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Views: Views Exclude Previous */
  $handler->display->display_options['filters']['views_exclude_previous']['id'] = 'views_exclude_previous';
  $handler->display->display_options['filters']['views_exclude_previous']['table'] = 'node';
  $handler->display->display_options['filters']['views_exclude_previous']['field'] = 'views_exclude_previous';
  $handler->display->display_options['filters']['views_exclude_previous']['value'] = array(
    'node_load' => 'node_load',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'last articles';
  $handler->display->display_options['block_caching'] = '-1';
  $translatables['last_articles'] = array(
    t('Master'),
    t('Last articles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('last articles'),
  );
  $export['last_articles'] = $view;

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

  $view = new view();
  $view->name = 'sticky_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'sticky articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sticky articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'myphp_grid_plugin_style';
  $handler->display->display_options['style_options']['lg'] = array(
    'enable' => 1,
    'nb_columns' => '3',
    'nb_items1' => '2',
    'nb_columns1' => '2',
    'nb_items2' => '1',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['style_options']['md'] = array(
    'enable' => 1,
    'nb_columns' => '3',
    'nb_items1' => '2',
    'nb_columns1' => '2',
    'nb_items2' => '1',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['style_options']['sm'] = array(
    'enable' => 1,
    'nb_columns' => '2',
    'nb_items1' => '1',
    'nb_columns1' => '1',
    'nb_items2' => '0',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['style_options']['xs'] = array(
    'enable' => 1,
    'nb_columns' => '1',
    'nb_items1' => '0',
    'nb_columns1' => '2',
    'nb_items2' => '0',
    'nb_columns2' => '1',
  );
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  /* Filter criterion: Views: Views Exclude Previous */
  $handler->display->display_options['filters']['views_exclude_previous']['id'] = 'views_exclude_previous';
  $handler->display->display_options['filters']['views_exclude_previous']['table'] = 'node';
  $handler->display->display_options['filters']['views_exclude_previous']['field'] = 'views_exclude_previous';
  $handler->display->display_options['filters']['views_exclude_previous']['value'] = array(
    'node_load' => 'node_load',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'sticky articles';
  $handler->display->display_options['block_caching'] = '-1';
  $translatables['sticky_articles'] = array(
    t('Master'),
    t('Sticky articles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('sticky articles'),
  );
  $export['sticky_articles'] = $view;

  return $export;
}
