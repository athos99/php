<?php

class FacetapiFilterItemAll extends FacetapiFilter
{

    /**
     * Filters facet items.
     *
     * Add a new facet "All"
     *
     */
    public function execute(array $build)
    {
        if (count($build)) {
            $total_count = 0;
            $all_active = 1;
            foreach ($build as &$e) {
                $total_count += $e['#count'];
                if ($e['#active']) {
                    $all_active = 0;
                }
            }

            $firstitem = reset($build);
            $path = $firstitem['#path'];
            $query = $firstitem['#query'];
            // Special Handling for pretty paths
            if (module_exists('facetapi_pretty_paths')) {
                // Get the adapter
                $adapter = facetapi_adapter_load($this->settings->searcher);
                // Load the facet object
                $facet = facetapi_facet_load($this->settings->facet, $this->settings->searcher);
                // Create the processor
                $processor = new FacetapiUrlProcessorPrettyPaths($adapter);
                // Pull the pretty path alias
                $pretty_paths_alias = $processor->getFacetPrettyPathsAlias($facet);
                // Explode the path
                $path = explode('/', $path);
                // Loop through the path parts
                for ($i = 1; $i < count($path); $i++) {
                    // If the current path part is the path alias
                    if ($path[$i] == $pretty_paths_alias) {
                        // We unset this part and the next one
                        unset($path[$i]);
                        unset($path[++$i]);
                    }
                }
                // Rebuild the path
                $path = implode('/', $path);
            } else {
                // For not-so-pretty paths all we have to do is rebuild the query without
                // any of the facet items for this filter
                if (isset($firstitem['#query']['f'])) {
                    foreach ($firstitem['#query']['f'] as $key => $value) {
                        if (strpos($value, $this->settings->facet) !== 0) {
                            $query['f'][] = $value;
                        }
                    }
                }
            }


            // remove form query the current facet selection
            if (isset($this->settings->facet) && isset($query['f'])) {
                $facetQueryName = $this->settings->facet . ':';
                foreach ($query['f'] as $k => $v) {
                    if (strpos($v, $facetQueryName) === 0) {
                        unset($query['f'][$k]);
                    }
                }
            }
            // Build the "All" link.
            $all = array(
                '#markup' => t('View All'),
                '#path' => $path,
                '#query' => $query,
                '#html' => FALSE,
                '#indexed_value' => '0',
                '#active' => $all_active,
                '#item_parents' => array(),
                '#item_children' => array(),
                '#count' => null,
                '#itemall' => true
            );

            $build['all'] = $all;
        }
        return $build;
    }
}