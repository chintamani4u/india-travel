<?php



$conf['file_temporary_path'] = '/tmp';

$conf['file_private_path'] = "sites/default/files/private";

$conf['shield_user'] = '';

$conf['securepages_enable'] = FALSE;

//if(!isset($databases) ){

//  $databases = array();

$databases['default']['default'] = array(

'driver' => 'mysql',

'database' => 'test_travel',

'username' => 'root',

'password' => 'Tieto@123456789',

'host' => 'localhost',

'port' => 3306

);

$conf['proxy_server'] ="http://swg.tieto.com";
$conf['proxy_port'] = "8080";


$conf['feeds_never_use_curl']=TRUE;
$conf['proxy_server'] = 'swg.tieto.com';
$conf['proxy_port'] = 8080;
$conf['proxy_username'] = '';
$conf['proxy_password'] = '';
//$conf['proxy_exceptions'] = array('127.0.0.1', 'en.tietolocal.dev');
$conf['proxy_user_agent'] = '';
 

//}



if (empty($_ENV['AH_SITE_ENVIRONMENT'])) {
  $conf['acquia_key'] = '';
  $conf['acquia_identifier'] = '';
  $conf['acquia_subscription_name'] = '';
  $conf['search_api_tasks'] = array();
}


$conf['stage_file_proxy_origin'] = 'http://en.tietodev.tieto.com';
