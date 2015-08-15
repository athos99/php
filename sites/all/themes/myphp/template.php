<?php

/**
 * @file
 * template.php
 */
//require_once dirname(__FILE__) . '/templates/menu.inc';
//require_once dirname(__FILE__) . '/templates/other.inc';




/**
 * Overrides theme_menu_tree().
 */
function myphp_menu_tree(&$variables) {
    return '<ul class="menu nav">' . $variables['tree'] . '</ul>';
}

/**
 * Bootstrap theme wrapper function for the primary menu links.
 */
function myphp_menu_tree__primary(&$variables) {
    return '<ul class="menu nav navbar-nav primary">' . $variables['tree'] . '</ul>';
}

/**
 * Bootstrap theme wrapper function for the secondary menu links.
 */
function myphp_menu_tree__secondary(&$variables) {
    return '<ul class="menu nav navbar-nav secondary">' . $variables['tree'] . '</ul>';
}




/* Overrides the facet count display */
function myphp_facetapi_count($variables)
{
    return '<span class="facet-count pull-right">' . (int)$variables['count'] . '</span>';
}


function myphp_facetapi_link_active($variables) {

    $accessible_vars = array(
        'text' => $variables['text'],
        'active' => TRUE,
    );
    $accessible_markup = theme('facetapi_accessible_markup', $accessible_vars);

    $variables['text'] .= $accessible_markup;
    $variables['options']['html'] = TRUE;

    // Sanitizes the link text if necessary.
    $sanitize = empty($variables['options']['html']);
    $text = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

    // Adds count to link if one was passed.
    if (isset($variables['count'])) {
        $text .= ' ' . theme('facetapi_count', $variables);
    }



    return theme_link($variables) .$text;
}



