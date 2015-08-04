<?php


/* Overrides the facet count display */
function myphp_facetapi_count($variables) {
    return '<span class="neurones-facet-count pull-right">' . (int) $variables['count'] . '</span>';
}

function myphp_facetapi_deactivate_widget($variables) {
    return '(-)';
}