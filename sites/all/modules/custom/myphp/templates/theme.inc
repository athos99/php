<?php

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_myphp_grid_plugin_style(&$vars)
{
    $view = $vars['view'];
    $options = $view->style_plugin->options;
    if ($options['alignment'] == 'masonry') {
        masonry_apply('div.row.masonry', array());
    }
    $cnt = count($vars['rows']);
    $vars['info']['devices'] = array();
    $vars['info']['class'] = '';
    foreach (array('lg', 'md', 'sm', 'xs') as $index) {
        $col = 0;
        $opt = $options[$index];
        if ($opt['enable']) {
            $col = $opt['nb_columns'];
            if ($cnt <= $opt['nb_items1']) {
                $col = $opt['nb_columns1'];
                if ($cnt <= $opt['nb_items2']) {
                    $col = $opt['nb_columns2'];
                }
            }
        }
        if ($col != 0) {
            $vars['info']['devices'][] = array('index' => $index, 'col' => $col);
            $vars['info']['class'] .= ' col-' . $index . '-' . (12 / $col);
        }
    }
}

