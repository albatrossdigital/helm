<?php
/**
 * @file
 * helm_deploy_client.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function helm_deploy_client_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'helm_deploy_client';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'services/rest';
  $endpoint->authentication = array(
    'services' => 'services',
  );
  $endpoint->server_settings = array(
    'formatters' => array(
      'bencode' => TRUE,
      'json' => TRUE,
      'php' => TRUE,
      'xml' => TRUE,
      'jsonp' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => TRUE,
      'application/x-www-form-urlencoded' => TRUE,
      'application/xml' => TRUE,
      'multipart/form-data' => TRUE,
      'text/xml' => TRUE,
    ),
  );
  $endpoint->resources = array(
    'file' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
        'delete' => array(
          'enabled' => '1',
        ),
        'index' => array(
          'enabled' => '1',
        ),
        'update' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'node' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
        ),
        'update' => array(
          'enabled' => '1',
        ),
      ),
      'relationships' => array(
        'files' => array(
          'enabled' => '1',
        ),
      ),
      'targeted_actions' => array(
        'attach_file' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'user' => array(
      'actions' => array(
        'login' => array(
          'enabled' => '1',
        ),
        'logout' => array(
          'enabled' => '1',
        ),
        'token' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['helm_deploy_client'] = $endpoint;

  return $export;
}
