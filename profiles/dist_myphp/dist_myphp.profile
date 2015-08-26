<?php
function dist_myphp_form_install_configure_form_alter(&$form, $form_state)
{
    // Hide some messages from various modules that are just too chatty.
    drupal_get_messages('status');
    drupal_get_messages('warning');
// Pre-populate the site name with the server name.
    $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
//    $form['admin_account']['account']['name']['#default_value'] = 'admin';
    $form['server_settings']['site_default_country']['#default_value'] = 'CH';
    $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Zurich';
}
