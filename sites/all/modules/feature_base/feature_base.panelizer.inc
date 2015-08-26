<?php
/**
 * @file
 * feature_base.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function feature_base_panelizer_defaults() {
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
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd7b1e0a8-039f-4297-86ee-84c69adc5a7f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4a7ca192-04a7-4adf-a4f6-bdaf115dc405';
    $pane->panel = 'top';
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
        'title_class' => '',
        'title_link' => '',
        'title_style' => '',
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
    $pane->uuid = '4a7ca192-04a7-4adf-a4f6-bdaf115dc405';
    $display->content['new-4a7ca192-04a7-4adf-a4f6-bdaf115dc405'] = $pane;
    $display->panels['top'][0] = 'new-4a7ca192-04a7-4adf-a4f6-bdaf115dc405';
    $pane = new stdClass();
    $pane->pid = 'new-f177b7c9-f7e4-46cb-9cda-01a2ae8f2f55';
    $pane->panel = 'top';
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
        'image_link' => '',
        'image_style' => 'large',
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
    $pane->uuid = 'f177b7c9-f7e4-46cb-9cda-01a2ae8f2f55';
    $display->content['new-f177b7c9-f7e4-46cb-9cda-01a2ae8f2f55'] = $pane;
    $display->panels['top'][1] = 'new-f177b7c9-f7e4-46cb-9cda-01a2ae8f2f55';
    $pane = new stdClass();
    $pane->pid = 'new-b8f44bac-5c47-4d25-8db3-5a21b46fd3ac';
    $pane->panel = 'top';
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
    $pane->uuid = 'b8f44bac-5c47-4d25-8db3-5a21b46fd3ac';
    $display->content['new-b8f44bac-5c47-4d25-8db3-5a21b46fd3ac'] = $pane;
    $display->panels['top'][2] = 'new-b8f44bac-5c47-4d25-8db3-5a21b46fd3ac';
    $pane = new stdClass();
    $pane->pid = 'new-7ec5aa6c-3a7f-414c-adbe-04a5f20fffa3';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->uuid = '7ec5aa6c-3a7f-414c-adbe-04a5f20fffa3';
    $display->content['new-7ec5aa6c-3a7f-414c-adbe-04a5f20fffa3'] = $pane;
    $display->panels['top'][3] = 'new-7ec5aa6c-3a7f-414c-adbe-04a5f20fffa3';
    $pane = new stdClass();
    $pane->pid = 'new-abbafaca-7054-4b72-9ba7-f4b0a45ec3c3';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_rubric';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->uuid = 'abbafaca-7054-4b72-9ba7-f4b0a45ec3c3';
    $display->content['new-abbafaca-7054-4b72-9ba7-f4b0a45ec3c3'] = $pane;
    $display->panels['top'][4] = 'new-abbafaca-7054-4b72-9ba7-f4b0a45ec3c3';
    $pane = new stdClass();
    $pane->pid = 'new-996d3423-bae4-4d35-8b96-54d5bac7a2a7';
    $pane->panel = 'top';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '996d3423-bae4-4d35-8b96-54d5bac7a2a7';
    $display->content['new-996d3423-bae4-4d35-8b96-54d5bac7a2a7'] = $pane;
    $display->panels['top'][5] = 'new-996d3423-bae4-4d35-8b96-54d5bac7a2a7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-996d3423-bae4-4d35-8b96-54d5bac7a2a7';
  $panelizer->display = $display;
  $export['node:article:default'] = $panelizer;

  return $export;
}
