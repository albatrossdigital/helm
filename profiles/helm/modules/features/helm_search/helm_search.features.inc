<?php
/**
 * @file
 * helm_search.features.inc
 */

/**
 * Implements hook_views_api().
 */
function helm_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function helm_search_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_search'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_search",
    "name" : "Search",
    "index_id" : "helm_search_node",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : { "result count" : true, "fields" : [] },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function helm_search_default_search_api_server() {
  $items = array();
  $items['helm_search'] = entity_import('search_api_server', '{
    "name" : "Helm Search",
    "machine_name" : "helm_search",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "2",
      "partial_matches" : 0,
      "indexes" : { "helm_search_node" : {
          "nid" : {
            "table" : "search_api_db_helm_search_node",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_helm_search_node",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_helm_search_node_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_helm_search_node",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_helm_search_node",
            "column" : "status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "promote" : {
            "table" : "search_api_db_helm_search_node",
            "column" : "promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "sticky" : {
            "table" : "search_api_db_helm_search_node",
            "column" : "sticky",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_helm_search_node",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_subtitle" : {
            "table" : "search_api_db_helm_search_node_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_category" : {
            "table" : "search_api_db_helm_search_node",
            "column" : "field_category",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_faq_category" : {
            "table" : "search_api_db_helm_search_node_field_faq_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_faq_tags" : {
            "table" : "search_api_db_helm_search_node_field_faq_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_event_category" : {
            "table" : "search_api_db_helm_search_node_field_event_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_event_contact" : {
            "table" : "search_api_db_helm_search_node_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_event_phone_number" : {
            "table" : "search_api_db_helm_search_node_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_location_description" : {
            "table" : "search_api_db_helm_search_node_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_helm_search_node",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_viewed" : {
            "table" : "search_api_db_helm_search_node_text",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
