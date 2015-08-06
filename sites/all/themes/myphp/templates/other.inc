<?php


/* Overrides the facet count display */
function myphp_facetapi_count($variables)
{
    return '<span class="neurones-facet-count pull-right">' . (int)$variables['count'] . '</span>';
}

function myphp_facetapi_deactivate_widget($variables)
{
    return '(-)';
}



function myphp_preprocess_views_view(&$vars)
{
    $size = count($vars['view']->result);
    if ($size <= 3) {
        $classSize = 'l';
    } elseif ($size <= 6) {
        $classSize = 'm';
    } else {
        $classSize = 's';
    }
    $vars['classes_array'][] = 'myphp_size_' . $classSize;
}

