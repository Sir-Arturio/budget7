<?php
/**
 * @file
 * transaction_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function transaction_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function transaction_feature_node_info() {
  $items = array(
    'transaction' => array(
      'name' => t('Transaction'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
