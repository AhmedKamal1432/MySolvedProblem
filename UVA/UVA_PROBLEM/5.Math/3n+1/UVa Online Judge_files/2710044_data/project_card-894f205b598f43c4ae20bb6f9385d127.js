( function( jQuery ) { /* Partner display on project badges */
jQuery(document).ready(function() {

  jQuery('.badge .partner .link .long-description').before('<span class="fl short-tag">P</span>');

  jQuery('.badge .partner .link').hover(   
    function() {
      var target = jQuery(this);
      target.find('.long-description').show();
      target.find('.short-tag').hide();
    },
    function() {
      var target = jQuery(this);
      target.find('.short-tag').show();
      target.find('.long-description').hide();
    }
    );

  jQuery('.badge .contest-winner .link .long-description').before('<span class="fl short-tag">&#9733;</span>');

  jQuery('.badge .contest-winner .link').hover(   
    function() {
      var target = jQuery(this);
      target.find('.long-description').show();
      target.find('.short-tag').hide();
    },
    function() {
      var target = jQuery(this);
      target.find('.short-tag').show();
      target.find('.long-description').hide();
    }
    );

});
})(jQuery);

