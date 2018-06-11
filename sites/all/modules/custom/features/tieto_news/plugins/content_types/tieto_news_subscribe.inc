<?php

/**
 * Simple block to display news subscribe form.
 */
$plugin = array(
  'title' => 'News subscribe',
  // Name of a function which will render the block.
  'render callback' => 'tieto_news_subscribe_render',
  // The default context.
  'defaults' => array(),
  'category' => array('Tieto News'),
);

function tieto_news_subscribe_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $response = tieto_news_subscribe_parse_response(isset($_GET['tieto_news_subscribe']) ? $_GET['tieto_news_subscribe'] : '');

  if (!$response || !$response->status) {
    if ($response && !$response->status) {
      drupal_set_message(t('Error occured during subscribing to our releases email list. Please verify if you filled in correctly all fields and try again.'), 'error');
    }
    $block->title = t('Subscribe releases');
    $block->content = array(
      '#markup' => tieto_news_subscribe_elevation_form(),
      '#attached' => array(
        'js' => array(drupal_get_path('module', 'tieto_news') . '/elevation/js/tieto-elevation-subscribe.js'),
        'css' => array(drupal_get_path('module', 'tieto_news') . '/elevation/css/tieto-elevation-subscribe.css'),
      ),
    );
  }
  else {
    $block->title = t('Thank you');
    $block->content = '<p>' . t('Your request to receive our latest releases has successfully been sent.') . '</p>';
    $block->content .= '<p>' . t('You will receive releases each time we publish them. Thanks for taking interest in Tieto.') . '</p>';
  }

  return $block;
}

function tieto_news_subscribe_parse_response($raw_input) {
  $return = NULL;

  @list($service, $response) = explode('-', $raw_input, 2);
  switch ($service) {
    case 'hugin':
      @list($file, $ext) = explode('.', $response, 2);
      $parts = explode('_', $file);
      if (!empty($parts[0])) {
        $return = new stdClass;
        // $parts[0] = status str
        switch ($parts[0]) {
          case 'mandatory':
            $return->status = FALSE;
            $return->message = 'Mandatory field(s) not completed.';
            break;
          case 'emailerror':
            $return->status = FALSE;
            $return->message = 'Not valid e-mail address.';
            break;
          case 'subscribed':
            $return->status = TRUE;
            $return->message = 'Subscription complete.';
            break;
          case 'subscribednochange':
            $return->status = TRUE;
            $return->message = 'Already subscribed with no list changes.';
            break;
          case 'subscribedchange':
            $return->status = TRUE;
            $return->message = 'Already subscribed, but with list changes.';
            break;
          default:
            $return = NULL;
            break;
        }
      }
      else {
        $return = NULL;
      }
      break;
    case 'omx':
      $return = new stdClass;
      $return->status = ($response === 'success');
      if ($return->status) {
        $return->message = 'Subscription complete.';
      }
      else {
        $return->message = 'Error occured.';
      }
      break;
    default:
      $return = NULL;
      break;
  }
  return $return;
}

function tieto_news_subscribe_elevation_form() {
  $pageLanguages = array(
    'en' => 'eng',
    'fi' => 'fin',
    'sv' => 'swe',
  );
  $language = $GLOBALS[LANGUAGE_TYPE_CONTENT]->language;
  $t_RootPageLanguage = isset($pageLanguages[$language]) ? $pageLanguages[$language] : 'eng';

  // Strings
  $t_nameLabel = t('Name');
  $t_namePlaceholder = t('First name and Last name');
  $t_nameMissing = t('You haven’t entered a name. Please tell us who we need to subscribe.');
  $t_emailLabel = t('Email address');
  $t_emailPlaceholder = t('Email address');
  $t_emailMissing = t('You haven’t entered an email address. Please enter the email address subscription.');
  $t_emailAddressNotValid = t('The entered email address doesn’t seem to be valid. Please check the email address.');
  $t_organizationLabel = t('Organization');
  $t_organizationPlaceholder = t('Company or Organization name');
  $t_subscribeLabel = t('Subscribe to');
  $t_languageMissing = t('You haven’t selected any option to subscribe. Please specify also in which language(s) you want to receive emails.');
  $t_press_releases = t('Press releases');
  $t_stock_exchange_releases = t('Stock exchange releases');
  $t_selected_industries = t('Only releases from selected industries');
  $t_selected_industries_description = t('Select one or more industries and/or offerings to subscribe to. Also check in which language(s) you want to receive those emails.');
  $t_Add = t('Add');
  $t_Subscribe = t('Subscribe');
  $t_Eng = t('English');
  $t_Fin = t('Finnish');
  $t_Swe = t('Swedish');
  $t_Select = t('Select...');
  $t_Energy_utilities = t('Energy utilities');
  $t_Financial_services = t('Financial services');
  $t_Forest = t('Forest');
  $t_Healthcare_and_welfare = t('Healthcare and welfare');
  $t_Logistics = t('Logistics');
  $t_Manufacturing = t('Manufacturing');
  $t_Media = t('Media');
  $t_Oil_and_gas = t('Oil and gas');
  $t_Public = t('Public');
  $t_Telecom = t('Telecom');
   $feedback_page_url = url(current_path(), array(
    'absolute' => TRUE,
    'query' => array(
      'tieto_news_subscribe' => '',
    ),
  ));

  return <<<EO_HTML
  <form id="releases-subscribe-form" name="releases-subscribe-form" method="post" action="#">
  <div class="content report">
  <div class="form-leave-comment">
  <div>
  <label for="f_name">$t_nameLabel *
  <span id="nameMissing" class="error">$t_nameMissing</span></label>
  <input class="hidableInfo" id="f_name" name="f_name" type="text" placeholder="$t_namePlaceholder" title="$t_namePlaceholder" />
  </div>
  	
  <div>
  <label for="email">$t_emailLabel *
  <span id="emailMissing" class="error">$t_emailMissing</span>
  <span id="emailAddresNotValid" class="error">$t_emailAddressNotValid</span>
  </label>
  <input class="hidableInfo" id="email" name="email" type="text" placeholder="$t_emailPlaceholder" title="$t_emailPlaceholder" />
  </div>
  	
  <div>
  <label for="organization">$t_organizationLabel</label>
  <input class="filled hidableInfo" id="organization" type="text" placeholder="$t_organizationPlaceholder" title="$t_organizationPlaceholder" />
  </div>
  
  <div class="form-selection">
  <label for="all-releases">$t_subscribeLabel *
  <span id="languageMissing" class="error">$t_languageMissing</span></label>
  
  <div class="selection-field-area field-area-selected">
  <a id="all-releases" href="#" class="eventcheck radio eventchecked">
  <input type="radio" id="press-and-stock" value="press-and-stock" checked="checked"/>$t_press_releases
  </a>
  <div class="select-language">
  <a href="#" class="eventcheck eng"><input type="checkbox" value="all" />$t_Eng</a>
  <a href="#" class="eventcheck fin"><input type="checkbox" value="all" />$t_Fin</a>
  <a href="#" class="eventcheck swe"><input type="checkbox" value="all" />$t_Swe</a>
  </div>
  </div>
  
  <div class="selection-field-area field-area-disabled">
  <a href="#" class="eventcheck radio">
  <input type="radio" id="stock-only" value="stock-only" />$t_stock_exchange_releases
  </a>
  <div class="select-language">
  <select name="preferredLanguage" id="preferredLanguage">
  <option value="en" class="eng">$t_Eng</option>
  <option value="fi" class="fin">$t_Fin</option>
  <option value="sv" class="swe">$t_Swe</option>
  </select>
  </div>
  </div>
  
  <div class="selection-field-area field-area-disabled">
  <a href="#" class="eventcheck radio"><input type="radio" id="selected-industries" value="selected-industries" />$t_selected_industries</a>
  
  <div class="industries-selection">
  <p>$t_selected_industries_description</p>
   
  <div class="dropdown-area">
  <div class="select-industries">
  <select class="select-ind-off" id="dropdown-values" disabled="disabled">
  <option value="" selected="selected">$t_Select</option>
  </select>
   
  <select class="select-ind-off" id="dropdown-all-values" style="display:none;">
  
  <option value="" selected="selected">$t_Select</option>
  <option value="852685|852687|852643">$t_Energy_utilities</option>
  <option value="756975|756978|757180">$t_Financial_services</option>
  <option value="756984|756985|757182">$t_Forest</option>
  <option value="852662|852671|852648">$t_Healthcare_and_welfare</option>
  <option value="852663|852672|852649">$t_Logistics</option>
  <option value="756995|756994|757201">$t_Manufacturing</option>
  <option value="852667|852673|852650">$t_Media</option>
  <option value="852668|852674|852651">$t_Oil_and_gas</option>
  <option value="756986|757013|757195">$t_Public</option>
  <option value="852669|852676|852660">$t_Telecom</option>
  </select>
   
  <div class="add-more"><a href="#">$t_Add</a></div>
  </div>
  
  <div class="select-industries" style="display:none;">
  <div class="select-language">
  <a href="#" class="eventcheck eng"><input type="checkbox" name="p_list_id" value="" />$t_Eng</a>
  <a href="#" class="eventcheck fin"><input type="checkbox" name="p_list_id" value="" />$t_Fin</a>
  <a href="#" class="eventcheck swe"><input type="checkbox" name="p_list_id" value="" />$t_Swe</a>
  </div>
  <div class="select-all" id="remove">
  <a href="#" class="eventcheck"><input type="checkbox" name="" value="" /><input type="checkbox" name="" value="" /></a>
  </div>
  </div>
   
  </div>
  </div>
  </div>
  </div>
  <div>
  <input id="send-releases-subscription" class="send" type="submit" value="$t_Subscribe" title="$t_Subscribe" />
  </div>
  	
  <input type="hidden" id="RootPageLanguage" value="$t_RootPageLanguage" />
  <input type="hidden" id="PressUrl" value="http://www.huginonline.com/subscription-manager/signupuser/subscribe" />
  <input type="hidden" id="StockUrl" value="https://cns.omxgroup.com/cdsPublic/addDynamicSubscription.action" />
  
  <div id="pressHelpers" style="display:none;">
  <input type="hidden" name="f_id" value="3114" />
  <input type="hidden" name="lan" value="5" />
  <input type="hidden" name="p_firm_id" value="3114" />
  <input type="hidden" name="p_firm_id" value="1058" />
  <input type="hidden" name="p_mandatory" value="f_name" />
  <input type="hidden" name="p_mandatory" value="email" />
  <input type="hidden" name="p_mandatory" value="p_list_id" />
  <input type="hidden" name="p_file_ext" value="status" />
  <input type="hidden" name="p_sendemail" value="Y" />
  <input type="hidden" name="base_href" value="{$feedback_page_url}hugin-" />
  </div>
  
  <div id="stockHelpers" style="display:none;">
  <input type="hidden" name="disclosingPartyId" value="1057" />
  <input type="hidden" name="infoTypes" value="6" />
  <input type="hidden" name="successUrl" value="{$feedback_page_url}omx-success" />
  <input type="hidden" name="failureUrl" value="{$feedback_page_url}omx-error" />
  </div>
  </div>
  </div>
  </form>

EO_HTML;
}
