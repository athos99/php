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
          'xs' => '3',
          'sm' => '3',
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
  $display->title = '';
  $display->uuid = '62401dfd-ba7b-4576-9717-ff17263a4df3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a1a24b97-487f-4255-adab-aaab3ad8dd2b';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-sticky_articles-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Articles en  évidence',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a1a24b97-487f-4255-adab-aaab3ad8dd2b';
    $display->content['new-a1a24b97-487f-4255-adab-aaab3ad8dd2b'] = $pane;
    $display->panels['right'][0] = 'new-a1a24b97-487f-4255-adab-aaab3ad8dd2b';
    $pane = new stdClass();
    $pane->pid = 'new-37b0abad-3859-43d5-9cb0-db813b87dfd8';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h3>Athos99, PHP et développement WEB est un site qui recense des informations utiles, à travers divers articles et news, sur le développement d’applications WEB en PHP.</h3>',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '37b0abad-3859-43d5-9cb0-db813b87dfd8';
    $display->content['new-37b0abad-3859-43d5-9cb0-db813b87dfd8'] = $pane;
    $display->panels['right'][1] = 'new-37b0abad-3859-43d5-9cb0-db813b87dfd8';
    $pane = new stdClass();
    $pane->pid = 'new-21ccd4b2-5495-4270-9077-e1af450de03a';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-last_articles-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Les derniers articles',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '21ccd4b2-5495-4270-9077-e1af450de03a';
    $display->content['new-21ccd4b2-5495-4270-9077-e1af450de03a'] = $pane;
    $display->panels['right'][2] = 'new-21ccd4b2-5495-4270-9077-e1af450de03a';
  $display->hide_title = PANELS_TITLE_FIXED;
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
  $page->menu = array();
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
    $pane->pid = 'new-a115e638-a996-4b71-a577-1ff041f38cfa';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-rubric-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a115e638-a996-4b71-a577-1ff041f38cfa';
    $display->content['new-a115e638-a996-4b71-a577-1ff041f38cfa'] = $pane;
    $display->panels['right'][0] = 'new-a115e638-a996-4b71-a577-1ff041f38cfa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rubric'] = $page;

  return $pages;

}
