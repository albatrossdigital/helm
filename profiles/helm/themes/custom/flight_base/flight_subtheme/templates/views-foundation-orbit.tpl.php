<?php
/**
 * @file
 * View template to display a list of rows.
 *
 * Available variables:
 * - $view: The view object.
 * - $rows: The output for the rows.
 * - $captions: The output for the images captions.
 * - $title: The title of this group of rows. May be empty.
 * - $options: Orbit slider options.
 *
 * @ingroup views_templates
 */
  
  drupal_add_js(array(
    'flightOrbit' => array(
      $view->dom_id => 'orbit-' . $view->dom_id
    )
  ), 'setting');

?>

<ul id="orbit-<?=$view->dom_id?>" data-orbit data-options="orbit_transition_class:transitioning; timer:true; bullets:false; animation:slide; slide_number:false;">
  <?php foreach ($rows as $id => $row): ?>
  <li>
    <?php print $row; ?>
  </li>
  <?php endforeach; ?>
</ul>
