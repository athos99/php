<?php

/**
 * Class to define a style plugin handler.
 */
class MyphpGridPluginStyle extends views_plugin_style
{
    const grid_conf = array(
        array('name' => 'Large device', 'index' => 'lg', 'active' => false),
        array('name' => 'Medium device', 'index' => 'md', 'active' => true),
        array('name' => 'Small device', 'index' => 'sm', 'active' => false),
        array('name' => 'Extra small device', 'index' => 'xs', 'active' => false)
    );


    /**
     * Definition.
     */
    public function option_definition()
    {
        $options = parent::option_definition();
        $options['alignment'] = array('default' => 'horizontal');
        foreach (self::grid_conf as $grid) {
            $index = $grid['index'];
            $options[$index]['default']['enable'] =  $grid['active'];
            $options[$index]['default']['nb_columns'] = 3;
            $options[$index]['default']['nb_items1'] = 8;
            $options[$index]['default']['nb_columns1'] = 2;
            $options[$index]['default']['nb_items2'] = 4;
            $options[$index]['default']['nb_columns2'] = 1;
        }
        return $options;
    }


    protected function _form_grid(&$form)
    {
        $col_options = array(1 => 1, 2 => 2, 3 => 3, 4 => 4, 6 => 6, 12 => 12);

        foreach (self::grid_conf as $grid) {
            $name = $grid['name'];
            $index = $grid['index'];
            $open = !$grid['active'];
            $form[$index] = array(
                '#type' => 'fieldset',
                '#title' => t('@name gridsettings', array('@name' => $name)),
                '#collapsible' => TRUE,
                '#collapsed' => $open);

            $form[$index]['enable'] = array(
                '#type' => 'checkbox',
                '#title' => t('Enable'),
                '#default_value' => $this->options[$index]['enable'],
            );

            $form[$index]['nb_columns'] = array(
                '#type' => 'select',
                '#title' => t('Number of columns (default)'),
                '#options' => $col_options,
                '#required' => TRUE,
                '#default_value' => $this->options[$index]['nb_columns'],
            );


            $form[$index]['nb_items1'] = array(
                '#type' => 'textfield',
                '#title' => t('When number of items is equal or lower then'),
                '#description' => t('empty or 0 if not used'),
                '#default_value' => $this->options[$index]['nb_items1'],
                '#size' => 5,
                '#maxlength' => 5,
                '#required' => false,
            );
            $form[$index] ['nb_columns1'] = array(
                '#type' => 'select',
                '#title' => t('Number of columns'),
                '#options' => $col_options,
                '#required' => false,
                '#default_value' => $this->options[$index]['nb_columns1'],
            );
            $form[$index]['nb_items2'] = array(
                '#type' => 'textfield',
                '#title' => t('When number of items is equal or lower then'),
                '#description' => t('empty or 0 if not used'),
                '#default_value' => $this->options[$index]['nb_items2'],
                '#size' => 5,
                '#maxlength' => 5,
                '#required' => false,
            );
            $form[$index]['nb_columns2'] = array(
                '#type' => 'select',
                '#title' => t('Number of columns'),
                '#options' => $col_options,
                '#required' => false,
                '#default_value' => $this->options[$index]['nb_columns2'],
            );
        }
    }

    /**
     * Form.
     */
    function options_form(&$form, &$form_state)
    {
        parent::options_form($form, $form_state);

        $form['alignment'] = array(
            '#type' => 'radios',
            '#title' => t('Alignment'),
            '#options' => array(
                'horizontal' => t('Horizontal'),
                'masonry' => t('Masonry'),
            ),
            '#description' => t('Horizontal alignment will place items starting in the upper left and moving right. Masonry alignment will place item in optimal position based on available vertical'),
            '#default_value' => $this->options['alignment'],
        );
        $this->_form_grid($form);
    }
}
