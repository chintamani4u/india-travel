// We define a function that takes one parameter named $.
(function ($) {
  jQuery(document).ready(function(){
    //render accordion
    jQuery("#div_press_releases" ).accordion({ header: "h6", collapsible: true,  heightStyle: "content",active:false    });

    //ugly workaround for stock exchange releases tab
    $( "#edit-stock-exchange-releases" ).button();  
    //render langauge buttonset and remove clased added by drupal
    $( "#lang_container" ).buttonset();
    $("label[for*='edit-lang-en']").removeClass("option ui-corner-left");
    $("label[for*='edit-lang-fi']").removeClass("option");
    $("label[for*='edit-lang-sv']").removeClass("option");
    $("label[for*='edit-lang-no']").removeClass("option ui-corner-right");

    //render press release option buttons
    $( "input[id*='edit-press-releases-']" ).button();
    $("label[for*='edit-press-releases-']").removeClass("option ui-state-active ui-corner-all");   

    //render trade news option buttons and remove classes added by drupal
    $( "input[id*='edit-trade-releases-trade-news-']" ).button();
    $( "label[for*='edit-trade-releases-trade-news-']").removeClass("option ui-state-active ui-corner-all");
          
    //update selected element count on press release type selection
    jQuery( "#select_press_releases" ).change(function(event) {
      updateSelectedReleaseCount('press');
    })
    //update selected element count on trade release type selection
    jQuery( "#select_trade_releases" ).change(function() {
      updateSelectedReleaseCount('trade');
    })
    
    //select all press releases
    jQuery( "#edit-press-releases-all-press-releases" ).change(function(event) {
      $checkStatus = event.target.checked;
      $( "input[id*='edit-press-releases-']" ).each(function( i ) {
        if(this.id != 'edit-press-releases-all-industries'){
          this.checked =  $checkStatus;
        }
      });      
      $( "input[id*='edit-press-releases-']" ).button( "refresh");
    });

    //select all trade releases
    jQuery( "#edit-trade-releases-trade-news-all-trade-releases" ).change(function(event) {
      $checkStatus = event.target.checked;
      $( "input[id*='edit-trade-releases-trade-news']" ).each(function( i ) {
        if(this.id != 'edit-trade-releases-trade-news-all-industries'){
          this.checked =  $checkStatus;
        }
      });      
      $( "input[id*='edit-trade-releases-trade-news-']" ).button("refresh");
    });
    
    //highlight selected elements after validation errors
    $( "input[id*='edit-press-releases-']:checked" ).each(function( i ) {
      $("label[for*='"+this.id+"']").addClass("ui-state-active");   
    });
    $( "input[id*='edit-trade-releases-trade-news-']:checked" ).each(function( i ) {
      $("label[for*='"+this.id+"']").addClass("ui-state-active");   
    });

    updateSelectedReleaseCount('press');
    updateSelectedReleaseCount('trade');
  });
  
  //updates selected release types count
  function updateSelectedReleaseCount(type){     
    if (type == 'press') {
      pressReleaseCount = $( "input[id*='edit-press-releases-']:checked" ).length;
      if ($("#edit-press-releases-all-press-releases").attr("checked") == "checked") {
        pressReleaseCount = pressReleaseCount - 1;
      }
      if(pressReleaseCount == 0 ) {
        $("#countPressRel").html('');      
      }
      else {
        $("#countPressRel").html(' ('+pressReleaseCount+')');      
      }
    }
    if (type == 'trade') {
      tradeReleaseCount = $( "input[id*='edit-trade-releases-trade-news-']:checked" ).length;
      if ($("#edit-trade-releases-trade-news-all-trade-releases").attr("checked") == "checked") {
        tradeReleaseCount = tradeReleaseCount - 1;
      }
      if(tradeReleaseCount == 0 ) {
        $("#countTradeRel").html('');      
      }
      else {
        $("#countTradeRel").html(' ('+tradeReleaseCount+')');      
      }
    }    
  }
}(jQuery));