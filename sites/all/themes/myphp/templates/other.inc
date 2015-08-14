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

function myphp_node_view_alter(&$build)
{
    if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
        // Change its weight.
        $build['an_additional_field']['#weight'] = -10;
    }

    // Add a #post_render callback to act on the rendered HTML of the node.
    $build['#post_render'][] = 'my_module_node_post_render';
}


function myphp_preprocess_node(&$variables)
{
    $a = 1;
}


function myphp_preprocess_node__article(&$variables)
{
    $a = 1;
}




