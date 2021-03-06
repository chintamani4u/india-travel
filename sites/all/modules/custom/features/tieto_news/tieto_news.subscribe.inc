<?php

/**
* Implements hook_block_info().
*/
function tieto_news_block_info(){
  $blocks = array();

  $blocks['subscribe_releases_block'] = array(
    'info' => t('Subscribe releases block'),
  );

  $blocks['subscribe_releases_block_new'] = array(
    'info' => t('Subscribe releases block new'),
  );

  return $blocks;
}

/**
* Implements hook_block_view().
*/
function tieto_news_block_view($delta = ''){   
  $block = array();
  switch ($delta){
    case 'subscribe_releases_block':
      drupal_add_css(drupal_get_path('module', 'jquery_update') .'/replace/ui/themes/base/jquery.ui.all.css');
      drupal_add_library('system', 'ui.autocomplete');
      drupal_add_library('system', 'ui.button');
      drupal_add_library('system', 'ui.widget');
      drupal_add_js(drupal_get_path('module', 'tieto_news'). '/js/subscribe_form.js');      
      $block['subject'] = '';
      $block['content'] = drupal_get_form('tieto_news_subscription_form');
      break;
    case 'subscribe_releases_block_new':
      drupal_add_css(drupal_get_path('module', 'jquery_update') .'/replace/ui/themes/base/jquery.ui.all.css');
      drupal_add_library('system', 'ui.autocomplete');
      drupal_add_library('system', 'ui.button');
      drupal_add_library('system', 'ui.widget');
      drupal_add_js(drupal_get_path('module', 'tieto_news'). '/js/subscribe_form.js');
      $block['subject'] = '';
      $block['content'] = drupal_get_form('tieto_news_subscription_form_new');
      break;
  }
  return $block;
}

function tieto_news_subscription_form(){
  global $language;
  $release_countries = array('en', 'fi', 'sv');

  $vocabulary = taxonomy_vocabulary_machine_name_load('industry');
  $terms = taxonomy_get_tree($vocabulary->vid, 0, 1);
  $industries2 = array();

  foreach ($terms as $key => $val) {
    $industries2[$val->name] = $val->name;
  }

  $industries2['PDS'] = 'Product development services';
  ksort($industries2);

  $industries = array('All press releases' => 'All press releases', 'Corporate' => 'Corporate news');
  $arr_industries = array_merge($industries, $industries2);
  foreach ($arr_industries as $key => $value){
    $arr_industries_press[$key] = t($value);
  }
  
  $industries = array('All trade releases' => 'All trade releases');
  $arr_industries2 = array_merge($industries, $industries2);

  $arr_industries_trade = array();
  foreach ($arr_industries2 as $key => $value){
    $key = 'Trade news '.$key;
    $arr_industries_trade[$key] = t($value);
  }
  $arr_industries_trade['Trade news PDS'] = t('Product development services');
  //set the default country
  $default_country = $language->language;
  if (!in_array($default_country, $release_countries)){
    $default_country = 'en';
  }
  
  $form['lang'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Select language'),
    '#options' => array(
      'en' => t('English'),
      'fi' => t('Finnish'),
      'sv' => t('Swedish'),
    ),
    '#id' => 'lang',
    '#prefix' => '<div id="subscribe_form_container"><div id="lang_container">',
    '#suffix' => '</div>  <div class = "release_type_title">'.t('Select type').'</div>',
    '#default_value' => array($default_country),
  );  

   $form['press_releases'] = array(
    '#type' => 'checkboxes',
    '#title' => '',
    '#options' => $arr_industries_press,
    '#id' => 'select_press_releases',
    '#prefix' => '<div id="div_press_releases"><h6 class="accordion">' . t('Press releases'). '<span id ="countPressRel"><span></h6><div>',
    '#suffix' => '</div>', 
   );
   
  $form['trade_releases'] = array(
    '#type' => 'checkboxes',
    '#title' => '',
    '#prefix' => '<h6>'.t('Trade releases').'<span id ="countTradeRel"><span></h6><div>',
    '#suffix' => '</div>',    
    '#options' => $arr_industries_trade,
    '#id' => 'select_trade_releases',
  ); 
  
  $form['stock_exchange_releases'] = array(
    '#type' => 'checkbox',   
    '#title' => '',  
    '#prefix' => '</div><label id="label_stock_tab" for="edit-stock-exchange-releases"><h6 id="header_stock_tab"> ' .t('Stock exchange releases'). ' <span id="span_stock_tab">'.t('Select').'</span></h6></label>',
    '#suffix' => '</div>',
    );
  
  $form['name'] = array(
    '#type' => 'textfield',
    '#required' => true,
    '#title' => t('Name'),
    '#description' => t('First name and Last name'),
  );
  
  $form['email'] = array(
    '#type' => 'textfield',
    '#required' => true,
    '#title' => t('Email address'),
    '#description' => '',
  );
  
  $form['organization'] = array(
    '#type' => 'textfield',
    '#title' => t('Organization'),
    '#description' => t('Company or Organization name'),
  );
     
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t("Subscribe"),
    '#suffix' => '</div>', //end form container div
    '#id' => "subscribe_submit",
  );
  return $form;
}

function tieto_news_subscription_form_validate($form, &$form_state){
  $email_address = $form_state['input']['email'];
  if (!valid_email_address($email_address)){
    form_set_error('email', t('The email address appears to be invalid.'));
  }
  $data = _release_type_selected($form, $form_state);

  if ( !( $data['status'] ||  $form_state['input']['stock_exchange_releases'] )){
    form_set_error('press_releases', t('Please select atleast one release category.'));
  }
}

function _release_type_selected($form, $form_state){
  $str_press_releases='';
  $str_trade_releases='';

  $selected_press_releases =  array_values($form_state['input']['press_releases']);
  $selected_press_releases = array_filter($selected_press_releases);
  if (is_array($selected_press_releases)){
    $str_press_releases = implode(',', $selected_press_releases);
    $needle = t('All press releases') . ',';    
    $str_press_releases = str_replace($needle, '', $str_press_releases);
  }

  $selected_trade_releases = array_values($form_state['input']['trade_releases']);
  $selected_trade_releases = array_filter($selected_trade_releases);
  if (is_array($selected_trade_releases)){
    $str_trade_releases = implode(',', $selected_trade_releases);
    $needle = t('Trade news All trade releases') . ',';
    $str_trade_releases = str_replace($needle, '', $str_trade_releases);
  } 
  $data = array('str_press_releases' => $str_press_releases, 'str_trade_releases' => $str_trade_releases);
  if ($str_press_releases || $str_trade_releases){
     $data['status'] = true;
  }
  else {
    $data['status'] = false;
  }
  return $data;
}

function tieto_news_subscription_form_submit($form, $form_state){
  $email_address = $form_state['input']['email'];
  $press_url = variable_get('cision_subscribe_url', '');
  $stock_url = variable_get('nasdaq_subscribe_url', '');

  $relese_type_data = _release_type_selected($form, $form_state);
  if ($relese_type_data['status'] ){
    $data['subscriptionUniqueIdentifier'] = variable_get('cision_subscription_unique_identifier', 0);
    $arrLanguage = array_filter(array_values($form_state['input']['lang']));
    //send subscription request for each language
    foreach ($arrLanguage as $language){
      $data['Replylanguage']= $language;
      //handle subscription to multiple languages
      $data['Language'] = $language;
      $data['name'] = $form_state['input']['name']; 
      $data['companyname'] = $form_state['input']['organization']; 
      $data['email'] = $email_address;
      $data['action'] = 'Subscribe';
      $data['CustomCategory'] = $relese_type_data['str_press_releases'].','.$relese_type_data['str_trade_releases']; 
      $data['CustomCategory'] = trim($data['CustomCategory'],',');
      $options['data'] = $data; 

      $ch = curl_init();
      curl_setopt($ch, CURLOPT_URL, $press_url);
      curl_setopt($ch, CURLOPT_POST, 1);
      curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));
      //dsm($data);
      //dsm(http_build_query($data));
      // receive server response ...
      curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
      $server_output = curl_exec ($ch);
      //dpm($server_output);
      $err_in_output = stripos($server_output, 'error');
      $exception_in_output = stripos($server_output, 'exception');
      //dsm($server_output);  
      $errno = curl_errno($ch);
      if ($errno || $err_in_output || $exception_in_output){
        $error_message = curl_error($ch);
        drupal_set_message('Subscription to press/trade release failed.', 'error');    
        //dsm( 'cURL error {$errno} {$error_message}');
        watchdog('tieto_news', t('cURL error {$errno} {$error_message} server output: {$err_in_output} {$exception_in_output}'), $variables = array(), $severity = WATCHDOG_ERROR);
      }
      else{
        drupal_set_message(t('Please activate your subscription by clicking on the link sent to your e-mail.'), 'status');
      }
      curl_close($ch);
    }
  }
  
  if ($form_state['input']['stock_exchange_releases']){
    //subscribe to stock releases
    $data['selectedFirstName'] = $form_state['input']['name']; 
    $data['selectedCompany'] = $form_state['input']['organization']; 
    $data['selectedEmail'] = $email_address;    
    $data['disclosingPartyId'] = 1057;
    $data['infoTypes'] = 6;
        
    $ch = curl_init();
    curl_setopt($ch, CURLOPT_URL, $stock_url);
    curl_setopt($ch, CURLOPT_POST, 1);
    curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query($data));
    // receive server response ...
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    $server_output = curl_exec ($ch);
    //dsm($server_output);  
    $errno = curl_errno($ch);
    if ($errno){
      $error_message = curl_error($ch);
      drupal_set_message(t('Subscription to stock exchange release failed.'), 'error');    
      //dsm( 'cURL error {$errno} {$error_message}');
      watchdog('tieto_news', t('cURL error {$errno} {$error_message}'), $variables = array(), $severity = WATCHDOG_ERROR);

    }
    else{
      drupal_set_message(t('Please activate your subscription by clicking on the link sent to your e-mail.'), 'status');
    }
    curl_close($ch);
  }
}
        
