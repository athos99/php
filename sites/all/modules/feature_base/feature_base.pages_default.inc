<?php
/**
 * @file
 * feature_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function feature_base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'home';
  $page->admin_description = 'home';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
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
          'xs' => 'hidden',
          'sm' => 'hidden',
          'md' => '3',
          'lg' => '3',
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
          'xs' => '12',
          'sm' => '12',
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
  $display->title = '';
  $display->uuid = '62401dfd-ba7b-4576-9717-ff17263a4df3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-37b0abad-3859-43d5-9cb0-db813b87dfd8';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p class="myphp-evidence">Athos99, PHP et développement WEB est un site qui recense des informations utiles, à travers divers articles et news, sur le développement d’applications WEB en PHP.</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '37b0abad-3859-43d5-9cb0-db813b87dfd8';
    $display->content['new-37b0abad-3859-43d5-9cb0-db813b87dfd8'] = $pane;
    $display->panels['top'][0] = 'new-37b0abad-3859-43d5-9cb0-db813b87dfd8';
    $pane = new stdClass();
    $pane->pid = 'new-ef76ba9b-d3bc-4d54-9388-a8407d3332be';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'sticky_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'override_title' => 1,
      'override_title_text' => 'Articles en  évidence',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ef76ba9b-d3bc-4d54-9388-a8407d3332be';
    $display->content['new-ef76ba9b-d3bc-4d54-9388-a8407d3332be'] = $pane;
    $display->panels['top'][1] = 'new-ef76ba9b-d3bc-4d54-9388-a8407d3332be';
    $pane = new stdClass();
    $pane->pid = 'new-af138f3b-e76b-474d-b3c6-e59873a8268e';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'last_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '787',
      'override_title' => 1,
      'override_title_text' => 'Les derniers articles',
      'override_title_heading' => 'h1',
      'items_per_page' => '9',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'af138f3b-e76b-474d-b3c6-e59873a8268e';
    $display->content['new-af138f3b-e76b-474d-b3c6-e59873a8268e'] = $pane;
    $display->panels['top'][2] = 'new-af138f3b-e76b-474d-b3c6-e59873a8268e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rubric';
  $page->task = 'page';
  $page->admin_title = 'rubric';
  $page->admin_description = '';
  $page->path = 'rubric/!term';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Articles',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          2 => 0,
          1 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rubric__panel';
  $handler->task = 'page';
  $handler->subtask = 'rubric';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
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
          'xs' => 'hidden',
          'sm' => '4',
          'md' => '3',
          'lg' => '3',
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
          'xs' => '12',
          'sm' => '8',
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
  $display->title = '';
  $display->uuid = '6f8f26c7-44cc-4d61-8193-e3301b571e39';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-12bbd729-e2e0-4a8c-8ffd-b8b9d5522269';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-3tY1sc7S98X8cRkoR6bapmlfpHMdR0LL';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrer par rubrique',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '12bbd729-e2e0-4a8c-8ffd-b8b9d5522269';
    $display->content['new-12bbd729-e2e0-4a8c-8ffd-b8b9d5522269'] = $pane;
    $display->panels['left'][0] = 'new-12bbd729-e2e0-4a8c-8ffd-b8b9d5522269';
    $pane = new stdClass();
    $pane->pid = 'new-ce977ac8-c5d8-41be-92cb-ec40a2de6dc1';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-lh0RBnSXz85folHApFp6U70S7mJrOYKA';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrer par tag',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ce977ac8-c5d8-41be-92cb-ec40a2de6dc1';
    $display->content['new-ce977ac8-c5d8-41be-92cb-ec40a2de6dc1'] = $pane;
    $display->panels['left'][1] = 'new-ce977ac8-c5d8-41be-92cb-ec40a2de6dc1';
    $pane = new stdClass();
    $pane->pid = 'new-ec8fa00a-d284-44f2-b7f5-132cbca93fe7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'rubric-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec8fa00a-d284-44f2-b7f5-132cbca93fe7';
    $display->content['new-ec8fa00a-d284-44f2-b7f5-132cbca93fe7'] = $pane;
    $display->panels['right'][0] = 'new-ec8fa00a-d284-44f2-b7f5-132cbca93fe7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rubric'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 's';
  $page->task = 'page';
  $page->admin_title = 's';
  $page->admin_description = 'ss';
  $page->path = 's';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_s__panel';
  $handler->task = 'page';
  $handler->subtask = 's';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
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
          'xs' => 'hidden',
          'sm' => '4',
          'md' => '3',
          'lg' => '3',
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
          'xs' => '12',
          'sm' => '8',
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
  $display->title = '';
  $display->uuid = '292f6f55-7416-4fb4-a7a2-e496c07b2308';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ab058903-f954-45f3-8335-4fca41b78b32';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-3tY1sc7S98X8cRkoR6bapmlfpHMdR0LL';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrer par rubrique',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ab058903-f954-45f3-8335-4fca41b78b32';
    $display->content['new-ab058903-f954-45f3-8335-4fca41b78b32'] = $pane;
    $display->panels['left'][0] = 'new-ab058903-f954-45f3-8335-4fca41b78b32';
    $pane = new stdClass();
    $pane->pid = 'new-4db7cd5f-2146-4bfb-b198-a906ec0a77fc';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-lh0RBnSXz85folHApFp6U70S7mJrOYKA';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrer par tag',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4db7cd5f-2146-4bfb-b198-a906ec0a77fc';
    $display->content['new-4db7cd5f-2146-4bfb-b198-a906ec0a77fc'] = $pane;
    $display->panels['left'][1] = 'new-4db7cd5f-2146-4bfb-b198-a906ec0a77fc';
    $pane = new stdClass();
    $pane->pid = 'new-360d103d-8fcb-4c75-b656-ea4867e10af0';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-121acrZYx9AeeMHOoTUbwtTl4SDNT5Lj';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Filtrer par date',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '360d103d-8fcb-4c75-b656-ea4867e10af0';
    $display->content['new-360d103d-8fcb-4c75-b656-ea4867e10af0'] = $pane;
    $display->panels['left'][2] = 'new-360d103d-8fcb-4c75-b656-ea4867e10af0';
    $pane = new stdClass();
    $pane->pid = 'new-84fd68cd-700a-4954-963e-e23420cba8c9';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'search-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '84fd68cd-700a-4954-963e-e23420cba8c9';
    $display->content['new-84fd68cd-700a-4954-963e-e23420cba8c9'] = $pane;
    $display->panels['right'][0] = 'new-84fd68cd-700a-4954-963e-e23420cba8c9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['s'] = $page;

  return $pages;

}
