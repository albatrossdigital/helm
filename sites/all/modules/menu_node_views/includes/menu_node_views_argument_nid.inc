<?php


/**
 * Argument handler to accept a node id that is menu-sensitive.
 */
class menu_node_views_argument_nid extends views_handler_argument_node_nid {
  function option_definition() {
    $options = parent::option_definition();
    $options['depth'] = array('default' => 1);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['depth'] = array(
      '#type' => 'select',
      '#title' => t('Depth'),
      '#options' => drupal_map_assoc(array(1, 2, 3, 4, 5, 6, 7, 8, 9)),
      '#default_value' => $this->options['depth'],
      '#description' => t('The depth will match nodes tagged with terms in the hierarchy. For example, if you have the term "fruit" and a child term "apple", with a depth of 1 (or higher) then filtering for the term "fruit" will get nodes that are tagged with "apple" as well as "fruit". If negative, the reverse is true; searching for "apple" will also pick up nodes tagged with "fruit" if depth is -1 (or lower).'),
    );
    unset($form['break_phrase']);
  }

  function query($group_by = FALSE) {
    $this->ensure_my_table();
    $nid = $this->argument;
    $depth = $this->options['depth'];
    $pid_list = db_query("SELECT mlid FROM {menu_node} WHERE nid = :nid", array(':nid' => $nid));
    $conditions = array();
    foreach ($pid_list as $pid) {
      $item = db_query("SELECT * FROM {menu_links} WHERE mlid = :pid", array(':pid' => $pid->mlid))->fetchObject();
      if ($item) {
        $max_depth = menu_link_children_relative_depth((array)$item);
        if ($max_depth < $this->options['depth']) {
          $depth = $max_depth;
        }
        $i = (int) $item->depth;
        $depth = (int) ($i + $depth);
        $expression = "({$this->table_alias}.p{$i} = " . (int)$item->mlid;
        $expression .= " AND {$this->table_alias}.depth > {$i}";
        $expression .= " AND {$this->table_alias}.depth <= {$depth})";
        $conditions[] = $expression;
      }
    }
    $snippet = '('.implode(' OR ', $conditions).')';
    $this->query->add_where_expression(0, $snippet);
  }
}
