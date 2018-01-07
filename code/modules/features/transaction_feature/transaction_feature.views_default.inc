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
  $view->name = 'distribution_by_category';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Distribution by category';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Distribution by category';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_value_date_value' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
        'datepicker_options' => '',
      ),
    ),
    'field_value_date_value_1' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
        'datepicker_options' => '',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_transaction_category' => 'field_transaction_category',
    'field_amount' => 'field_amount',
  );
  $handler->display->display_options['style_options']['default'] = 'field_transaction_category';
  $handler->display->display_options['style_options']['info'] = array(
    'field_transaction_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Transaction Category */
  $handler->display->display_options['fields']['field_transaction_category']['id'] = 'field_transaction_category';
  $handler->display->display_options['fields']['field_transaction_category']['table'] = 'field_data_field_transaction_category';
  $handler->display->display_options['fields']['field_transaction_category']['field'] = 'field_transaction_category';
  $handler->display->display_options['fields']['field_transaction_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: SUM(Content: Amount) */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
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
  /* Filter criterion: Content: Value date (field_value_date) */
  $handler->display->display_options['filters']['field_value_date_value']['id'] = 'field_value_date_value';
  $handler->display->display_options['filters']['field_value_date_value']['table'] = 'field_data_field_value_date';
  $handler->display->display_options['filters']['field_value_date_value']['field'] = 'field_value_date_value';
  $handler->display->display_options['filters']['field_value_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_value_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_value_date_value']['expose']['operator_id'] = 'field_value_date_value_op';
  $handler->display->display_options['filters']['field_value_date_value']['expose']['label'] = 'Value date (beginning)';
  $handler->display->display_options['filters']['field_value_date_value']['expose']['operator'] = 'field_value_date_value_op';
  $handler->display->display_options['filters']['field_value_date_value']['expose']['identifier'] = 'field_value_date_value';
  $handler->display->display_options['filters']['field_value_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_value_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_value_date_value']['form_type'] = 'date_text';
  /* Filter criterion: Content: Value date (field_value_date) */
  $handler->display->display_options['filters']['field_value_date_value_1']['id'] = 'field_value_date_value_1';
  $handler->display->display_options['filters']['field_value_date_value_1']['table'] = 'field_data_field_value_date';
  $handler->display->display_options['filters']['field_value_date_value_1']['field'] = 'field_value_date_value';
  $handler->display->display_options['filters']['field_value_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_value_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_value_date_value_1']['expose']['operator_id'] = 'field_value_date_value_1_op';
  $handler->display->display_options['filters']['field_value_date_value_1']['expose']['label'] = 'Value date (end)';
  $handler->display->display_options['filters']['field_value_date_value_1']['expose']['operator'] = 'field_value_date_value_1_op';
  $handler->display->display_options['filters']['field_value_date_value_1']['expose']['identifier'] = 'field_value_date_value_1';
  $handler->display->display_options['filters']['field_value_date_value_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_value_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_value_date_value_1']['form_type'] = 'date_text';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/distribution-by-category';
  $export['distribution_by_category'] = $view;

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

  $view = new view();
  $view->name = 'transactions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Transactions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
    ),
    'field_counterparty_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_amount_value' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_amount_value_1' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'date_filter' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
        'datepicker_options' => '',
      ),
    ),
    'date_filter_1' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
        'datepicker_options' => '',
      ),
    ),
    'field_transaction_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 1,
        'bef_term_description' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_account_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'uid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 50, 100, 200';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'field_transaction_id' => 'field_transaction_id',
    'field_counterparty' => 'field_counterparty',
    'field_amount' => 'field_amount',
    'field_transaction_category' => 'field_transaction_category',
    'field_value_date' => 'field_value_date',
    'field_account' => 'field_account',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'field_value_date';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transaction_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_counterparty' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transaction_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_value_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 1,
      'label' => 'Change Transaction Category',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'transaction::field_transaction_category' => 'transaction::field_transaction_category',
        ),
      ),
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Transaction ID */
  $handler->display->display_options['fields']['field_transaction_id']['id'] = 'field_transaction_id';
  $handler->display->display_options['fields']['field_transaction_id']['table'] = 'field_data_field_transaction_id';
  $handler->display->display_options['fields']['field_transaction_id']['field'] = 'field_transaction_id';
  $handler->display->display_options['fields']['field_transaction_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_transaction_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_transaction_id']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_transaction_id']['alter']['alt'] = '[field_transaction_id]';
  /* Field: Content: Counterparty */
  $handler->display->display_options['fields']['field_counterparty']['id'] = 'field_counterparty';
  $handler->display->display_options['fields']['field_counterparty']['table'] = 'field_data_field_counterparty';
  $handler->display->display_options['fields']['field_counterparty']['field'] = 'field_counterparty';
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Transaction Category */
  $handler->display->display_options['fields']['field_transaction_category']['id'] = 'field_transaction_category';
  $handler->display->display_options['fields']['field_transaction_category']['table'] = 'field_data_field_transaction_category';
  $handler->display->display_options['fields']['field_transaction_category']['field'] = 'field_transaction_category';
  $handler->display->display_options['fields']['field_transaction_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_transaction_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Value date */
  $handler->display->display_options['fields']['field_value_date']['id'] = 'field_value_date';
  $handler->display->display_options['fields']['field_value_date']['table'] = 'field_data_field_value_date';
  $handler->display->display_options['fields']['field_value_date']['field'] = 'field_value_date';
  $handler->display->display_options['fields']['field_value_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd.m.Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Account */
  $handler->display->display_options['fields']['field_account']['id'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['table'] = 'field_data_field_account';
  $handler->display->display_options['fields']['field_account']['field'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: Content: Value date (field_value_date) */
  $handler->display->display_options['sorts']['field_value_date_value']['id'] = 'field_value_date_value';
  $handler->display->display_options['sorts']['field_value_date_value']['table'] = 'field_data_field_value_date';
  $handler->display->display_options['sorts']['field_value_date_value']['field'] = 'field_value_date_value';
  $handler->display->display_options['sorts']['field_value_date_value']['expose']['label'] = 'Value date';
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
  /* Filter criterion: Content: Counterparty (field_counterparty) */
  $handler->display->display_options['filters']['field_counterparty_value']['id'] = 'field_counterparty_value';
  $handler->display->display_options['filters']['field_counterparty_value']['table'] = 'field_data_field_counterparty';
  $handler->display->display_options['filters']['field_counterparty_value']['field'] = 'field_counterparty_value';
  $handler->display->display_options['filters']['field_counterparty_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_counterparty_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_counterparty_value']['expose']['operator_id'] = 'field_counterparty_value_op';
  $handler->display->display_options['filters']['field_counterparty_value']['expose']['label'] = 'Counterparty';
  $handler->display->display_options['filters']['field_counterparty_value']['expose']['operator'] = 'field_counterparty_value_op';
  $handler->display->display_options['filters']['field_counterparty_value']['expose']['identifier'] = 'field_counterparty_value';
  $handler->display->display_options['filters']['field_counterparty_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_counterparty_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Amount (field_amount) */
  $handler->display->display_options['filters']['field_amount_value']['id'] = 'field_amount_value';
  $handler->display->display_options['filters']['field_amount_value']['table'] = 'field_data_field_amount';
  $handler->display->display_options['filters']['field_amount_value']['field'] = 'field_amount_value';
  $handler->display->display_options['filters']['field_amount_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_amount_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_amount_value']['expose']['operator_id'] = 'field_amount_value_op';
  $handler->display->display_options['filters']['field_amount_value']['expose']['label'] = 'Amount (min)';
  $handler->display->display_options['filters']['field_amount_value']['expose']['operator'] = 'field_amount_value_op';
  $handler->display->display_options['filters']['field_amount_value']['expose']['identifier'] = 'field_amount_value';
  $handler->display->display_options['filters']['field_amount_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_amount_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Content: Amount (field_amount) */
  $handler->display->display_options['filters']['field_amount_value_1']['id'] = 'field_amount_value_1';
  $handler->display->display_options['filters']['field_amount_value_1']['table'] = 'field_data_field_amount';
  $handler->display->display_options['filters']['field_amount_value_1']['field'] = 'field_amount_value';
  $handler->display->display_options['filters']['field_amount_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_amount_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_amount_value_1']['expose']['operator_id'] = 'field_amount_value_1_op';
  $handler->display->display_options['filters']['field_amount_value_1']['expose']['label'] = 'Amount (max)';
  $handler->display->display_options['filters']['field_amount_value_1']['expose']['operator'] = 'field_amount_value_1_op';
  $handler->display->display_options['filters']['field_amount_value_1']['expose']['identifier'] = 'field_amount_value_1';
  $handler->display->display_options['filters']['field_amount_value_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_amount_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Value date (beginning) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['ui_name'] = 'Value date (beginning)';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Value date (beginning)';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_value_date.field_value_date_value' => 'field_data_field_value_date.field_value_date_value',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'AND';
  /* Filter criterion: Value date (end) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['ui_name'] = 'Value date (end)';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Value date (end)';
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'field_data_field_value_date.field_value_date_value' => 'field_data_field_value_date.field_value_date_value',
  );
  $handler->display->display_options['filters']['date_filter_1']['date_method'] = 'AND';
  /* Filter criterion: Content: Transaction Category (field_transaction_category) */
  $handler->display->display_options['filters']['field_transaction_category_tid']['id'] = 'field_transaction_category_tid';
  $handler->display->display_options['filters']['field_transaction_category_tid']['table'] = 'field_data_field_transaction_category';
  $handler->display->display_options['filters']['field_transaction_category_tid']['field'] = 'field_transaction_category_tid';
  $handler->display->display_options['filters']['field_transaction_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_transaction_category_tid']['expose']['operator_id'] = 'field_transaction_category_tid_op';
  $handler->display->display_options['filters']['field_transaction_category_tid']['expose']['label'] = 'Transaction Category';
  $handler->display->display_options['filters']['field_transaction_category_tid']['expose']['operator'] = 'field_transaction_category_tid_op';
  $handler->display->display_options['filters']['field_transaction_category_tid']['expose']['identifier'] = 'field_transaction_category_tid';
  $handler->display->display_options['filters']['field_transaction_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_transaction_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_transaction_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_transaction_category_tid']['vocabulary'] = 'transaction_category';
  $handler->display->display_options['filters']['field_transaction_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Account (field_account) */
  $handler->display->display_options['filters']['field_account_tid']['id'] = 'field_account_tid';
  $handler->display->display_options['filters']['field_account_tid']['table'] = 'field_data_field_account';
  $handler->display->display_options['filters']['field_account_tid']['field'] = 'field_account_tid';
  $handler->display->display_options['filters']['field_account_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_account_tid']['expose']['operator_id'] = 'field_account_tid_op';
  $handler->display->display_options['filters']['field_account_tid']['expose']['label'] = 'Account (field_account)';
  $handler->display->display_options['filters']['field_account_tid']['expose']['operator'] = 'field_account_tid_op';
  $handler->display->display_options['filters']['field_account_tid']['expose']['identifier'] = 'field_account_tid';
  $handler->display->display_options['filters']['field_account_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_account_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_account_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_account_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_account_tid']['vocabulary'] = 'account';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['uid']['group_info']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['group_info']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['uid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/transactions';
  $export['transactions'] = $view;

  return $export;
}
