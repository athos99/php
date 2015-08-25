<?php
/**
 * @file
 * feature_panel.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function feature_panel_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '3',
          'sm' => '3',
          'md' => '3',
          'lg' => '7',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '9',
          'sm' => '9',
          'md' => '9',
          'lg' => '9',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c13d23dc-0126-4a70-acea-2c61a9240372';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d6c7ce3d-cf45-49fb-b184-f432af7ee4a3';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'full page overide',
      'title' => 'full page overide',
      'body' => 'full page overide',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd6c7ce3d-cf45-49fb-b184-f432af7ee4a3';
    $display->content['new-d6c7ce3d-cf45-49fb-b184-f432af7ee4a3'] = $pane;
    $display->panels['left'][0] = 'new-d6c7ce3d-cf45-49fb-b184-f432af7ee4a3';
    $pane = new stdClass();
    $pane->pid = 'new-ac3dc66b-646a-48d2-846b-5706e574205e';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ac3dc66b-646a-48d2-846b-5706e574205e';
    $display->content['new-ac3dc66b-646a-48d2-846b-5706e574205e'] = $pane;
    $display->panels['right'][0] = 'new-ac3dc66b-646a-48d2-846b-5706e574205e';
    $pane = new stdClass();
    $pane->pid = 'new-9796313b-f8c6-4e6f-a307-c791b389e10e';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9796313b-f8c6-4e6f-a307-c791b389e10e';
    $display->content['new-9796313b-f8c6-4e6f-a307-c791b389e10e'] = $pane;
    $display->panels['right'][1] = 'new-9796313b-f8c6-4e6f-a307-c791b389e10e';
    $pane = new stdClass();
    $pane->pid = 'new-b90cbb25-1100-491a-b6fa-282c652755d1';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b90cbb25-1100-491a-b6fa-282c652755d1';
    $display->content['new-b90cbb25-1100-491a-b6fa-282c652755d1'] = $pane;
    $display->panels['right'][2] = 'new-b90cbb25-1100-491a-b6fa-282c652755d1';
    $pane = new stdClass();
    $pane->pid = 'new-cf2d1aff-515f-4390-be96-d788c11a4f30';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_rubric';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cf2d1aff-515f-4390-be96-d788c11a4f30';
    $display->content['new-cf2d1aff-515f-4390-be96-d788c11a4f30'] = $pane;
    $display->panels['right'][3] = 'new-cf2d1aff-515f-4390-be96-d788c11a4f30';
    $pane = new stdClass();
    $pane->pid = 'new-305e6f60-8fc7-476a-b553-7d52d04059e2';
    $pane->panel = 'right';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '305e6f60-8fc7-476a-b553-7d52d04059e2';
    $display->content['new-305e6f60-8fc7-476a-b553-7d52d04059e2'] = $pane;
    $display->panels['right'][4] = 'new-305e6f60-8fc7-476a-b553-7d52d04059e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ac3dc66b-646a-48d2-846b-5706e574205e';
  $panelizer->display = $display;
  $export['node:article:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '10',
          'sm' => '10',
          'md' => '10',
          'lg' => '10',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e9c02911-490d-4039-9684-11801806837c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a73d9687-30ef-4cc6-984e-b70f1b5ec0e7';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'default',
      'title' => 'default',
      'body' => 'default',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a73d9687-30ef-4cc6-984e-b70f1b5ec0e7';
    $display->content['new-a73d9687-30ef-4cc6-984e-b70f1b5ec0e7'] = $pane;
    $display->panels['left'][0] = 'new-a73d9687-30ef-4cc6-984e-b70f1b5ec0e7';
    $pane = new stdClass();
    $pane->pid = 'new-ee83ce1b-9d55-4a40-af88-1fbd0a4d10d7';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h2',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ee83ce1b-9d55-4a40-af88-1fbd0a4d10d7';
    $display->content['new-ee83ce1b-9d55-4a40-af88-1fbd0a4d10d7'] = $pane;
    $display->panels['right'][0] = 'new-ee83ce1b-9d55-4a40-af88-1fbd0a4d10d7';
    $pane = new stdClass();
    $pane->pid = 'new-e50f39d4-91fd-477b-8001-98df9acdbb56';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e50f39d4-91fd-477b-8001-98df9acdbb56';
    $display->content['new-e50f39d4-91fd-477b-8001-98df9acdbb56'] = $pane;
    $display->panels['right'][1] = 'new-e50f39d4-91fd-477b-8001-98df9acdbb56';
    $pane = new stdClass();
    $pane->pid = 'new-d38ca8af-ba15-4bf7-98b5-a30b33407d45';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd38ca8af-ba15-4bf7-98b5-a30b33407d45';
    $display->content['new-d38ca8af-ba15-4bf7-98b5-a30b33407d45'] = $pane;
    $display->panels['right'][2] = 'new-d38ca8af-ba15-4bf7-98b5-a30b33407d45';
    $pane = new stdClass();
    $pane->pid = 'new-235a21b6-cbf8-4295-9de2-9ee1a1bca4ef';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '235a21b6-cbf8-4295-9de2-9ee1a1bca4ef';
    $display->content['new-235a21b6-cbf8-4295-9de2-9ee1a1bca4ef'] = $pane;
    $display->panels['right'][3] = 'new-235a21b6-cbf8-4295-9de2-9ee1a1bca4ef';
    $pane = new stdClass();
    $pane->pid = 'new-1bfa6fd2-e186-454e-854f-67da6d84ec63';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_rubric';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1bfa6fd2-e186-454e-854f-67da6d84ec63';
    $display->content['new-1bfa6fd2-e186-454e-854f-67da6d84ec63'] = $pane;
    $display->panels['right'][4] = 'new-1bfa6fd2-e186-454e-854f-67da6d84ec63';
    $pane = new stdClass();
    $pane->pid = 'new-38a2e1cd-5ff8-44d5-888a-e8bffaf4a98b';
    $pane->panel = 'right';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '38a2e1cd-5ff8-44d5-888a-e8bffaf4a98b';
    $display->content['new-38a2e1cd-5ff8-44d5-888a-e8bffaf4a98b'] = $pane;
    $display->panels['right'][5] = 'new-38a2e1cd-5ff8-44d5-888a-e8bffaf4a98b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e50f39d4-91fd-477b-8001-98df9acdbb56';
  $panelizer->display = $display;
  $export['node:article:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8ebae93a-fc47-47ed-a41a-12c2f4799f6a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-191d9aba-a47b-46e1-9af2-563a8dce5e51';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'thumbnail',
        'image_link' => 'content',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '191d9aba-a47b-46e1-9af2-563a8dce5e51';
    $display->content['new-191d9aba-a47b-46e1-9af2-563a8dce5e51'] = $pane;
    $display->panels['center'][0] = 'new-191d9aba-a47b-46e1-9af2-563a8dce5e51';
    $pane = new stdClass();
    $pane->pid = 'new-755a684d-a4b0-49d1-abc1-04beccf5cb4f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_rubric';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '755a684d-a4b0-49d1-abc1-04beccf5cb4f';
    $display->content['new-755a684d-a4b0-49d1-abc1-04beccf5cb4f'] = $pane;
    $display->panels['center'][1] = 'new-755a684d-a4b0-49d1-abc1-04beccf5cb4f';
    $pane = new stdClass();
    $pane->pid = 'new-aa54468c-76f7-44f8-884d-489b43ea961f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'smart_trim_format',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'more_link' => 0,
        'more_text' => '',
        'summary_handler' => 'full',
        'trim_length' => 15,
        'trim_link' => 0,
        'trim_options' => array(
          'text' => 'text',
        ),
        'trim_preserve_tags' => '',
        'trim_suffix' => '...',
        'trim_type' => 'words',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aa54468c-76f7-44f8-884d-489b43ea961f';
    $display->content['new-aa54468c-76f7-44f8-884d-489b43ea961f'] = $pane;
    $display->panels['center'][2] = 'new-aa54468c-76f7-44f8-884d-489b43ea961f';
    $pane = new stdClass();
    $pane->pid = 'new-edeba13f-90b1-4b82-830a-99140e45a871';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'edeba13f-90b1-4b82-830a-99140e45a871';
    $display->content['new-edeba13f-90b1-4b82-830a-99140e45a871'] = $pane;
    $display->panels['center'][3] = 'new-edeba13f-90b1-4b82-830a-99140e45a871';
    $pane = new stdClass();
    $pane->pid = 'new-1df9ffb6-7299-400c-af32-1d40d1890410';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'teaser',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1df9ffb6-7299-400c-af32-1d40d1890410';
    $display->content['new-1df9ffb6-7299-400c-af32-1d40d1890410'] = $pane;
    $display->panels['center'][4] = 'new-1df9ffb6-7299-400c-af32-1d40d1890410';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1df9ffb6-7299-400c-af32-1d40d1890410';
  $panelizer->display = $display;
  $export['node:article:default:teaser'] = $panelizer;

  return $export;
}
