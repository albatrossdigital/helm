<?php
/**
 * @file
 * helm_payment.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function helm_payment_default_rules_configuration() {
  $items = array();
  $items['commerce_cart_redirct_to_checkout'] = entity_import('rules_config', '{ "commerce_cart_redirct_to_checkout" : {
      "LABEL" : "Redirct to checkout",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Cart" ],
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "DO" : [ { "redirect" : { "url" : "checkout" } } ]
    }
  }');
  $items['rules_add_invoice_value_to_price'] = entity_import('rules_config', '{ "rules_add_invoice_value_to_price" : {
      "LABEL" : "Add invoice value to price",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_line_item", "commerce_product_reference", "entity" ],
      "ON" : {
        "commerce_product_calculate_sell_price" : [],
        "commerce_line_item_presave" : []
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "helm_payment_amount" } }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "commerce-line-item:helm-payment-amount" ],
              "op" : "*",
              "input_2" : "100"
            },
            "PROVIDE" : { "result" : { "invoice_amount" : "invoice amount" } }
          }
        },
        { "commerce_line_item_unit_price_amount" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : [ "invoice_amount" ],
            "component_name" : "base_price",
            "round_mode" : "0"
          }
        }
      ]
    }
  }');
  return $items;
}
