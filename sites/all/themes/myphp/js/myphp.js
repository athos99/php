/**
 * @file
 * JS for myphp.
 */
(function ($, Drupal, window, document, undefined) {
    // Show dropdown on hover.
    Drupal.behaviors.myphp_dropdown = {
        attach: function(context, setting) {
            $('.dropdown').once('myphp-dropdown', function(){
                // Show dropdown on hover.
                $(this).mouseenter(function(){
                    $(this).addClass('open');
                });
                $(this).mouseleave(function(){
                    $(this).removeClass('open');
                });
            });
            // Allow main menu dropdown-toggle to be clickable.
            $('.menu.primary  .dropdown > a.dropdown-toggle').once('myphp-dropdown', function () {
                $(this).click(function (e) {
                    e.preventDefault();
                    window.location.href = $(this).attr('href');
                });
            });

        }
    }



})(jQuery, Drupal, this, this.document);
