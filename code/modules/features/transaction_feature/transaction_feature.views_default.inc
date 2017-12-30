<?php
/**
 * @file
 * transaction_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function transaction_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'relevant_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Relevant categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Relevant categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'tid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Transaction Category (field_transaction_category) */
  $handler->display->display_options['relationships']['field_transaction_category_tid']['id'] = 'field_transaction_category_tid';
  $handler->display->display_options['relationships']['field_transaction_category_tid']['table'] = 'field_data_field_transaction_category';
  $handler->display->display_options['relationships']['field_transaction_category_tid']['field'] = 'field_transaction_category_tid';
  $handler->display->display_options['relationships']['field_transaction_category_tid']['label'] = 'Transaction Category';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_transaction_category_tid';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_transaction_category_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'field_transaction_category_tid';
  $handler->display->display_options['fields']['tid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid_1']['label'] = 'Count';
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Sort criterion: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'field_transaction_category_tid';
  $handler->display->display_options['sorts']['tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['tid']['order'] = 'DESC';
  /* Contextual filter: Content: Counterparty (field_counterparty) */
  $handler->display->display_options['arguments']['field_counterparty_value']['id'] = 'field_counterparty_value';
  $handler->display->display_options['arguments']['field_counterparty_value']['table'] = 'field_data_field_counterparty';
  $handler->display->display_options['arguments']['field_counterparty_value']['field'] = 'field_counterparty_value';
  $handler->display->display_options['arguments']['field_counterparty_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_counterparty_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_counterparty_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_counterparty_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_counterparty_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'transaction' => 'transaction',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['relevant_categories'] = $view;

  return $export;
}
