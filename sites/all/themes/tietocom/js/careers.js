(function ( $ ) {
  $( document ).ready( function () {
    // hide select custom element.
    $( ".chzn-container" ).hide();
    var url = window.location.href.split( '?' )[ 0 ];
    var callback = function () {
      $( 'form' ).attr( "action", url );
      $( 'form' ).submit();
    };
    var callback1 = function () {
      $( '#views-exposed-form-job-suggestion-panel-pane-2' ).attr( "action", url );
      $( '#views-exposed-form-job-suggestion-panel-pane-2' ).submit();
    };

    $( "#open-job" ).on( "click", function () {
      window.location = "https://" + window.location.host + "/careers/all-open-jobs?search_api_views_fulltext=" + $( '#edit-keys' ).val();
    } );

    $( "#open-job1" ).on( "click", function () {
      window.location = "https://" + window.location.host + "/careers/all-open-jobs?search_api_views_fulltext=" + $( '#edit-keys' ).val();
    } );

    // Selection box component.
    $.fn.feild_selection_box = function ( options ) {
      var select_element = this;
      var selected_text = $( select_element ).find( "option:selected" ).text();
      var settings = $.extend( {
        placeholder: selected_text ? selected_text : "Select",
      }, options );
      var selector = $( "<div/>", {
        class: "field-selector"
      } );
      var selected = $( "<div/>", {
        class: "field-selected",
      } );
      $( selected ).html( settings.placeholder );
      $( selector ).append( selected );
      $( this ).find( 'option' ).each( function ( index, element ) {
        var options = $( "<span/>", {
          class: "field-options"
        } );

        $( options ).html( $( element ).html() );
        $( selector ).append( options );
        //console.log($(element).val());
      } );
      //console.log(selector);
      $( this ).parent().append( selector );
      $( this ).hide();
      $( selected ).on( 'click', function () {
        $( selector ).css( {
          "overflow-y": "scroll",
          "height": "280px"
        } ).addClass( 'field-selector-visible' );
        //console.log($(selector).css("overflow"));
        $( selector ).find( '.field-options' ).css( {
          "width": "auto",
          "display": "block"
        } );
      } );
      $( selector ).find( '.field-options' ).on( 'click', function () {
        $( selected ).html( $( this ).html() );
        $( selector ).css( {
          "overflow-y": "hidden",
          "height": "40px"
        } ).removeClass( 'field-selector-visible' );
        $( select_element ).find( 'option' ).eq( $( this ).index() - 1 ).attr( "selected", "selected" );
        $( selector ).find( '.field-options' ).css( {
          "width": "40px",
          "display": "none"
        } );
        settings.callback.call();
        //$(select_element).find('options').index($(this).index()).attr("selected","selected");
      } );
      $( document ).mouseup( function ( e ) {


        if ( !selector.is( e.target ) // if the target of the click isn't the container...
          && selector.has( e.target ).length === 0 ) // ... nor a descendant of the container
        {
          $( selector ).css( {
            "overflow-y": "hidden",
            "height": "40px"
          } );
          $( selector ).find( '.field-options' ).css( {
            "width": "40px",
            "display": "none"
          } );
        }
      } );
    };

    $( '#edit-field-jobs-jobareas-tid' ).feild_selection_box( {
      "callback": callback
    } );
    $( '#edit-field-jobs-location-tid' ).feild_selection_box( {
      "callback": callback,
    } );
    $( '#edit-field-jobs-jobareas' ).feild_selection_box( {
      "callback": callback1
    } );
    $( '#edit-field-jobs-location' ).feild_selection_box( {
      "callback": callback1,
    } );

    // Sticky menu.
    //function stickIt() {
    //  var menu = $( '.megamenu-block' ).parent( '.nav-menu' );
    //  var generic = $( '.generic-page' );
    //  if ( generic.length == 0 && menu.length && $( window ).scrollTop() >= $( '.job-section' ).offset().top - 40 ) {
    //    menu.addClass( 'stick' );
    //    //console.log('1');
    //  }
    //  else if ( generic.length && $( window ).scrollTop() >= (parseInt( $( '.nav-menu' ).next().offset().top ) - 40) ) {
    //    menu.addClass( 'stick' );
    //
    //    //console.log('2');
    //  }
    //  else {
    //    menu.removeClass( 'stick' );
    //    //  console.log('3');
    //  }
    //
    //
    //}

    //$( '.megamenu-block .menu__item a' ).click( function ( e ) {
    //  e.preventDefault();
    //  var self = $( this );
    //  var target = this.hash;
    //  $( 'html,body' ).animate( {
    //    scrollTop: $( target ).offset().top - self.height()
    //  }, {
    //    duration: 1000,
    //    complete: function () {
    //      stickIt();
    //    }
    //  } );
    //} );
    //$( document ).scroll( function () {
    //  stickIt();
    //} );
    // Sticky menu ends.

  } )
})( jQuery );
