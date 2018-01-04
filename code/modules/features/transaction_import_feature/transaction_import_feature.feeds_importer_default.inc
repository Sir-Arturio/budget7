<?php
/**
 * @file
 * transaction_import_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function transaction_import_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'transaction';
  $feeds_importer->config = array(
    'name' => 'Transaction',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'delete_uploaded_file' => 0,
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'encoding' => 'ISO-8859-1',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Arkistointitunnus',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Arkistointitunnus',
            'target' => 'field_transaction_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Arvopäivä',
            'target' => 'field_value_date:start',
            'timezone' => '__SITE__',
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Kirjauspäivä',
            'target' => 'field_entry_date:start',
            'timezone' => '__SITE__',
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Määrä  EUROA',
            'target' => 'field_amount',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Saaja/Maksaja',
            'target' => 'field_counterparty',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Saajan tilinumero ja pankin BIC',
            'target' => 'field_counterpartys_account',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Viite',
            'target' => 'field_reference_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Viesti',
            'target' => 'field_message',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Saaja/Maksaja',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Laji',
            'target' => 'field_transaction_type_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Selitys',
            'target' => 'field_transaction_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'transaction',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['transaction'] = $feeds_importer;

  return $export;
}
