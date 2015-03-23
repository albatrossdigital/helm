<?php
/**
 * @file
 * helm_deploy_server.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function helm_deploy_server_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'helm_deploy';
  $plan->title = 'Helm Deploy';
  $plan->description = 'Pushes to a site with the helm_deploy feature enabled.';
  $plan->debug = 0;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 0,
  );
  $plan->fetch_only = 0;
  $plan->processor_plugin = 'DeployProcessorBatch';
  $plan->processor_config = array();
  $plan->endpoints = array(
    'helm_client' => 'helm_client',
  );
  $plan->dependency_plugin = 'deploy_iterator';
  $export['helm_deploy'] = $plan;

  return $export;
}
