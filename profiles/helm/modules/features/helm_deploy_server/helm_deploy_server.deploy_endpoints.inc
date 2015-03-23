<?php
/**
 * @file
 * helm_deploy_server.deploy_endpoints.inc
 */

/**
 * Implements hook_deploy_endpoints_default().
 */
function helm_deploy_server_deploy_endpoints_default() {
  $export = array();

  $endpoint = new DeployEndpoint();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 1;
  $endpoint->name = 'helm_client';
  $endpoint->title = 'Helm Client';
  $endpoint->description = 'The client server you would like to connect to';
  $endpoint->debug = 0;
  $endpoint->authenticator_plugin = 'DeployAuthenticatorSession';
  $endpoint->authenticator_config = array(
    'username' => 'admin',
    'password' => 'demo',
  );
  $endpoint->service_plugin = 'DeployServiceRestJSON';
  $endpoint->service_config = array(
    'url' => 'http://demo2.liftoff.albatrossdigital.com/services/rest',
  );
  $export['helm_client'] = $endpoint;

  return $export;
}
