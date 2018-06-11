<?php
/**
 * @file
 * tieto_marketo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tieto_marketo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_account_id';
  $strongarm->value = '517-ITT-285';
  $export['marketo_ma_munchkin_account_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_api_private_key';
  $strongarm->value = 'tietokey2014';
  $export['marketo_ma_munchkin_api_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_javascript_library';
  $strongarm->value = '//munchkin.marketo.net/munchkin.js';
  $export['marketo_ma_munchkin_javascript_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_lead_source';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_lead_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition';
  $strongarm->value = 'j0hRd9jOKwEO';
  $export['marketo_ma_munchkin_partition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_cs';
  $strongarm->value = 'j0hQcdjOKwAJ';
  $export['marketo_ma_munchkin_partition_cs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_da';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_partition_da'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_de';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_partition_de'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_de-at';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_partition_de-at'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_de-DE';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_partition_de-DE'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_en';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_partition_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_en-in';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_partition_en-in'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_et';
  $strongarm->value = 'j0hRedjOKwEA';
  $export['marketo_ma_munchkin_partition_et'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_fi';
  $strongarm->value = 'j0hRc9jOKwEL';
  $export['marketo_ma_munchkin_partition_fi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_fil';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_partition_fil'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_lt';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_partition_lt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_lv';
  $strongarm->value = 'j0hReNjOKwEB';
  $export['marketo_ma_munchkin_partition_lv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_nl';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_partition_nl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_nn';
  $strongarm->value = 'j0hRdNjOKwEN';
  $export['marketo_ma_munchkin_partition_nn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_pl';
  $strongarm->value = 'j0hQctjOKwAL';
  $export['marketo_ma_munchkin_partition_pl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_ru';
  $strongarm->value = 'j0hRdtjOKwEP';
  $export['marketo_ma_munchkin_partition_ru'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_sv';
  $strongarm->value = 'j0hRcdjOKwEI';
  $export['marketo_ma_munchkin_partition_sv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_munchkin_partition_zh-hans';
  $strongarm->value = '';
  $export['marketo_ma_munchkin_partition_zh-hans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_pages';
  $strongarm->value = 'admin
admin/*
batch
node/add*
node/*/*
user/*/*';
  $export['marketo_ma_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_tracking_method';
  $strongarm->value = 'munchkin';
  $export['marketo_ma_tracking_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'marketo_ma_visibility_pages';
  $strongarm->value = '0';
  $export['marketo_ma_visibility_pages'] = $strongarm;

  return $export;
}
