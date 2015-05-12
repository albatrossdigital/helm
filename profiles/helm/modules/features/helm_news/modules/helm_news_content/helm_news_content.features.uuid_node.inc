<?php
/**
 * @file
 * helm_news_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function helm_news_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 4,
  'title' => 'City Begins First Friday Art Walk',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a07f1452-b25c-45ed-94da-c7af7797517f',
  'type' => 'article',
  'language' => 'und',
  'created' => 1430855669,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '15ed3c39-54da-4981-81c3-caf023d41843',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="component_title"><span id="ctl00_titleLabel">First Friday Art Walk Begins This Month</span></div>

<div class="component_subtitle">&nbsp;</div>

<div class="component_listitem" id="ctl00_timeDiv">
<div><span class="component_listitem_header">Posted Date: </span> <span class="component_listitem_content"><span class="Component_TimeSpan" id="ctl00_timeLabel">4/24/2015 3:15 PM</span></span></div>
</div>

<p>Eleven galleries in the City will kick off the free, First Friday Art Walk on Friday 6 to 9 p.m. Some of the activities include:</p>

<ul>
	<li>Depot Art Gallery – live painting demos, meet artists and see the 37th Anniversary Show.</li>
	<li>Art and Design Center – sidewalk chalk demo, plaster art, window gallery, and ceramics for sale.</li>
	<li>The Pottery Studio Gallery – potters demonstrate wheel-throwing on the sidewalk or try it yourself. More than 50 established and emerging artists represented.</li>
	<li>Evolution Hair Studio – local photography exhibit and meet Golden photographer Sandra Price and refreshments.</li>
	<li>Colorado Frame &amp; Savvy Stuff – brushes, paint and window canvas supplied to ‘Create Your Art’ on the front windows and refreshments.</li>
	<li>Outnumbered Gallery – sculpture demo by Tim DeShong and watercolor demo by Robert Gray, music and Colorado wine.</li>
	<li>Steve Adams Gallery – Curated ACC student art show featuring aspiring artists.</li>
	<li>Town Hall Arts Center – “The Art of Memories” exhibit with the four featured oil and watercolor artists in attendance and refreshments.</li>
	<li>Willow – An Artisan’s Market – meet and see the work of Littleton wildlife artist Sarah Petkus.</li>
</ul>

<p>The newly-formed Downtown Arts District (DAD) is a collaborative effort between the City, Town Hall Arts Center, Helm Community College (HCC) and numerous galleries in the downtown area.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<div class="component_title"><span id="ctl00_titleLabel">First Friday Art Walk Begins This Month</span></div>

<div class="component_subtitle"> </div>

<div class="component_listitem" id="ctl00_timeDiv">
<div><span class="component_listitem_header">Posted Date: </span> <span class="component_listitem_content"><span class="Component_TimeSpan" id="ctl00_timeLabel">4/24/2015 3:15 PM</span></span></div>
</div>

<p>Eleven galleries in the City will kick off the free, First Friday Art Walk on Friday 6 to 9 p.m. Some of the activities include:</p>

<ul><li>Depot Art Gallery – live painting demos, meet artists and see the 37th Anniversary Show.</li>
	<li>Art and Design Center – sidewalk chalk demo, plaster art, window gallery, and ceramics for sale.</li>
	<li>The Pottery Studio Gallery – potters demonstrate wheel-throwing on the sidewalk or try it yourself. More than 50 established and emerging artists represented.</li>
	<li>Evolution Hair Studio – local photography exhibit and meet Golden photographer Sandra Price and refreshments.</li>
	<li>Colorado Frame &amp; Savvy Stuff – brushes, paint and window canvas supplied to ‘Create Your Art’ on the front windows and refreshments.</li>
	<li>Outnumbered Gallery – sculpture demo by Tim DeShong and watercolor demo by Robert Gray, music and Colorado wine.</li>
	<li>Steve Adams Gallery – Curated ACC student art show featuring aspiring artists.</li>
	<li>Town Hall Arts Center – “The Art of Memories” exhibit with the four featured oil and watercolor artists in attendance and refreshments.</li>
	<li>Willow – An Artisan’s Market – meet and see the work of Littleton wildlife artist Sarah Petkus.</li>
</ul><p>The newly-formed Downtown Arts District (DAD) is a collaborative effort between the City, Town Hall Arts Center, Helm Community College (HCC) and numerous galleries in the downtown area.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_attachment' => array(),
  'field_media' => array(),
  'field_article_category' => array(),
  'field_subtitle' => array(),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 109,
      'revision_id' => 129,
      'name' => 'node:article:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          103 => array(
            'pid' => 103,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'c1304af9-8744-4b7e-8d81-7dee76cbb735',
          ),
          101 => array(
            'pid' => 101,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_subtitle',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_plain',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h3',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '6e7a9866-8b0a-4224-b0d4-c511a0c333be',
          ),
          92 => array(
            'pid' => 92,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h5',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '04854c1b-0a48-4048-b31c-370fb27a1815',
          ),
          93 => array(
            'pid' => 93,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'default',
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => 'formatter_large__1140_x_1140_',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
            'uuid' => '620c9c74-fc1b-4b88-91b5-f5010b93e22e',
          ),
          94 => array(
            'pid' => 94,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'plain_text',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
            'uuid' => '6015b2d7-3da3-4825-afef-efbfcf61839d',
          ),
          95 => array(
            'pid' => 95,
            'did' => 20,
            'panel' => 'sidebar',
            'type' => 'panels_mini',
            'subtype' => 'page_sidebar_right',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'aa9af1ac-0b8a-4005-9003-e6881d9a2870',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 103,
            1 => 101,
            2 => 92,
            3 => 93,
            4 => 94,
          ),
          'sidebar' => array(
            0 => 95,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 20,
        'renderer' => 'standard',
        'layout' => 'helm_full_page',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'style' => 'wrapper_element',
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'sidebar' => array(
            'style' => 'wrapper_element',
          ),
        ),
        'cache' => array(),
        'title' => 'News',
        'hide_title' => 0,
        'title_pane' => 93,
        'uuid' => 'e268aed3-0cd7-4cf6-870c-5faa75f8cf64',
      ),
    ),
    'teaser' => array(
      'entity_type' => 'node',
      'entity_id' => 109,
      'revision_id' => 129,
      'name' => 'node:article:default:teaser',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'teaser',
      'css_class' => '',
      'title_element' => 'H3',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          97 => array(
            'pid' => 97,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'style' => 'default',
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '9d2bca18-dfc4-48b1-9918-336531e323cd',
          ),
          98 => array(
            'pid' => 98,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'trim_length' => 600,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '17d36e42-3bd7-44bf-b0fc-5de0e7460cf0',
          ),
          99 => array(
            'pid' => 99,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 'no_wrapper',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h4',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '7d02c90d-6b27-419a-86fc-c589357b4003',
          ),
          100 => array(
            'pid' => 100,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => 'content',
                'image_style' => 'medium',
                'quickedit' => array(
                  'editor' => 'form',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'e34b8ac5-e704-4394-9450-b72b7d105d67',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 97,
            1 => 98,
          ),
          'sidebar' => array(
            0 => 99,
            1 => 100,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 21,
        'renderer' => 'standard',
        'layout' => 'helm_teaser',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => NULL,
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'style' => 'wrapper_element',
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 0,
        'uuid' => '85da5139-1fd2-43b0-a91d-b6dc80117370',
      ),
    ),
    'featured' => array(
      'entity_type' => 'node',
      'entity_id' => 109,
      'revision_id' => 129,
      'name' => 'node:article:default:featured',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          15 => array(
            'pid' => 15,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'image_style' => 'default',
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => '',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'f4eb77a2-9f16-439e-b5b7-cb8c1ac703b0',
          ),
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'center',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9f395dd-dbdc-47e9-9bcb-efabc1a6f02d',
          ),
          16 => array(
            'pid' => 16,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'trim_length' => 300,
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '0eff787b-9c44-40a8-9e2f-afe37ea8e72a',
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 15,
            1 => 18,
            2 => 16,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'center' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 18,
        'uuid' => 'a4d26072-bb9b-4dc5-b51b-a30f37a3285a',
      ),
    ),
  ),
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'City of Springfield',
  ),
  'domain_source' => NULL,
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-05 19:54:29 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Free Workshop Helps Citizens Build or Repair Credit History',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a07da2b8-b260-4b9a-a949-3fdaae552844',
  'type' => 'article',
  'language' => 'und',
  'created' => 1430889870,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '200c2422-3612-4bb1-998b-ec6d4cdc65ba',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Free Workshop Helps Citizens Build or Repair Credit History</p>

<p>“Credit As An Asset” is new workshop offered by the Department of Community Services that provides people with the tools to build or rebuild a good credit history. This free, two-hour workshop will help individuals think about their relationship with credit and why credit it is important and plan for future financial stability.&nbsp;</p>

<p><span>The free workshop is </span><strong>Thursday, May 28 </strong><span>from 12 - 2:00 p.m. at the Urban Government Center, Room 347.&nbsp;To register, call 123-456-7890.</span></p>

<p>The Department of Community Services recognized credit building and repair as a vital need for many individuals and families across our community, particularly those impacted by the economic downturn several years ago.</p>

<p>&nbsp;“’Credit As An Asset’ helps us provide another tool in our clients’ toolbox,” said the Executive Administrator of Community Services’ Advocacy and Empowerment Division. "The vast majority of consumer-lending decisions are based on an individual’s credit score, and this new curriculum is designed to help people build a solid score and credit history so they can better qualify for loans to buy homes and cars, rent apartments and start businesses.”</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Free Workshop Helps Citizens Build or Repair Credit History</p>

<p>“Credit As An Asset” is new workshop offered by the Department of Community Services that provides people with the tools to build or rebuild a good credit history. This free, two-hour workshop will help individuals think about their relationship with credit and why credit it is important and plan for future financial stability. </p>

<p><span>The free workshop is </span><strong>Thursday, May 28 </strong><span>from 12 - 2:00 p.m. at the Urban Government Center, Room 347. To register, call 123-456-7890.</span></p>

<p>The Department of Community Services recognized credit building and repair as a vital need for many individuals and families across our community, particularly those impacted by the economic downturn several years ago.</p>

<p> “’Credit As An Asset’ helps us provide another tool in our clients’ toolbox,” said the Executive Administrator of Community Services’ Advocacy and Empowerment Division. "The vast majority of consumer-lending decisions are based on an individual’s credit score, and this new curriculum is designed to help people build a solid score and credit history so they can better qualify for loans to buy homes and cars, rent apartments and start businesses.”</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_attachment' => array(),
  'field_media' => array(),
  'field_article_category' => array(),
  'field_subtitle' => array(),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 122,
      'revision_id' => 163,
      'name' => 'node:article:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          103 => array(
            'pid' => 103,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'c1304af9-8744-4b7e-8d81-7dee76cbb735',
          ),
          101 => array(
            'pid' => 101,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_subtitle',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_plain',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h3',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '6e7a9866-8b0a-4224-b0d4-c511a0c333be',
          ),
          92 => array(
            'pid' => 92,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h5',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '04854c1b-0a48-4048-b31c-370fb27a1815',
          ),
          93 => array(
            'pid' => 93,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'default',
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => 'formatter_large__1140_x_1140_',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
            'uuid' => '620c9c74-fc1b-4b88-91b5-f5010b93e22e',
          ),
          94 => array(
            'pid' => 94,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'plain_text',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
            'uuid' => '6015b2d7-3da3-4825-afef-efbfcf61839d',
          ),
          95 => array(
            'pid' => 95,
            'did' => 20,
            'panel' => 'sidebar',
            'type' => 'panels_mini',
            'subtype' => 'page_sidebar_right',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'aa9af1ac-0b8a-4005-9003-e6881d9a2870',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 103,
            1 => 101,
            2 => 92,
            3 => 93,
            4 => 94,
          ),
          'sidebar' => array(
            0 => 95,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 20,
        'renderer' => 'standard',
        'layout' => 'helm_full_page',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'style' => 'wrapper_element',
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'sidebar' => array(
            'style' => 'wrapper_element',
          ),
        ),
        'cache' => array(),
        'title' => 'News',
        'hide_title' => 0,
        'title_pane' => 93,
        'uuid' => 'e268aed3-0cd7-4cf6-870c-5faa75f8cf64',
      ),
    ),
    'teaser' => array(
      'entity_type' => 'node',
      'entity_id' => 122,
      'revision_id' => 163,
      'name' => 'node:article:default:teaser',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'teaser',
      'css_class' => '',
      'title_element' => 'H3',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          97 => array(
            'pid' => 97,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'style' => 'default',
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '9d2bca18-dfc4-48b1-9918-336531e323cd',
          ),
          98 => array(
            'pid' => 98,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'trim_length' => 600,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '17d36e42-3bd7-44bf-b0fc-5de0e7460cf0',
          ),
          99 => array(
            'pid' => 99,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 'no_wrapper',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h4',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '7d02c90d-6b27-419a-86fc-c589357b4003',
          ),
          100 => array(
            'pid' => 100,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => 'content',
                'image_style' => 'medium',
                'quickedit' => array(
                  'editor' => 'form',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'e34b8ac5-e704-4394-9450-b72b7d105d67',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 97,
            1 => 98,
          ),
          'sidebar' => array(
            0 => 99,
            1 => 100,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 21,
        'renderer' => 'standard',
        'layout' => 'helm_teaser',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => NULL,
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'style' => 'wrapper_element',
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 0,
        'uuid' => '85da5139-1fd2-43b0-a91d-b6dc80117370',
      ),
    ),
    'featured' => array(
      'entity_type' => 'node',
      'entity_id' => 122,
      'revision_id' => 163,
      'name' => 'node:article:default:featured',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          15 => array(
            'pid' => 15,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'image_style' => 'default',
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => '',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'f4eb77a2-9f16-439e-b5b7-cb8c1ac703b0',
          ),
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'center',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9f395dd-dbdc-47e9-9bcb-efabc1a6f02d',
          ),
          16 => array(
            'pid' => 16,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'trim_length' => 300,
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '0eff787b-9c44-40a8-9e2f-afe37ea8e72a',
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 15,
            1 => 18,
            2 => 16,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'center' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 18,
        'uuid' => 'a4d26072-bb9b-4dc5-b51b-a30f37a3285a',
      ),
    ),
  ),
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'City of Springfield',
  ),
  'domain_source' => NULL,
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-06 05:24:30 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Standard of Excellence Continues for City Police Dept.',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b580e158-2dcf-41af-b65c-a4a6f5a3b251',
  'type' => 'article',
  'language' => 'und',
  'created' => 1430856615,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '20a3f224-530e-4ad0-9c11-bf9d46fc5c91',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="component_title"><span id="ctl00_titleLabel">Helm Civic City Police Standard of Excellence Continues</span></div>

<div class="component_subtitle">&nbsp;</div>

<div class="component_listitem" id="ctl00_timeDiv">
<div><span class="component_listitem_header">Posted Date: </span> <span class="component_listitem_content"><span class="Component_TimeSpan" id="ctl00_timeLabel">4/8/2015 11:30 AM</span></span></div>
</div>

<p>The Police Department was awarded reaccreditation by the Commission on Accreditation for Law Enforcement Agencies (CALEA) at the organization’s spring meeting.&nbsp;</p>

<p>CALEA accreditation requires the department to meet 382 professional standards based on national best practices. The reaccreditation process takes place every three years and requires the department to undergo an extensive review including a week-long, on-site audit by outside assessors.</p>

<p>The Police Department is one of only 16 State law enforcement agencies who have achieved full accreditation status. This is the Department\'s fourth consecutive accreditation.</p>

<p>City Manager Mr. Michael Helm said, “CALEA’s recognition reinforces what our citizens know and appreciate. The men and women of the Police Department are among the finest in the state and we thank them for their service.”</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<div class="component_title"><span id="ctl00_titleLabel">Helm Civic City Police Standard of Excellence Continues</span></div>

<div class="component_subtitle"> </div>

<div class="component_listitem" id="ctl00_timeDiv">
<div><span class="component_listitem_header">Posted Date: </span> <span class="component_listitem_content"><span class="Component_TimeSpan" id="ctl00_timeLabel">4/8/2015 11:30 AM</span></span></div>
</div>

<p>The Police Department was awarded reaccreditation by the Commission on Accreditation for Law Enforcement Agencies (CALEA) at the organization’s spring meeting. </p>

<p>CALEA accreditation requires the department to meet 382 professional standards based on national best practices. The reaccreditation process takes place every three years and requires the department to undergo an extensive review including a week-long, on-site audit by outside assessors.</p>

<p>The Police Department is one of only 16 State law enforcement agencies who have achieved full accreditation status. This is the Department\'s fourth consecutive accreditation.</p>

<p>City Manager Mr. Michael Helm said, “CALEA’s recognition reinforces what our citizens know and appreciate. The men and women of the Police Department are among the finest in the state and we thank them for their service.”</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_attachment' => array(),
  'field_media' => array(),
  'field_article_category' => array(),
  'field_subtitle' => array(),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 110,
      'revision_id' => 130,
      'name' => 'node:article:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          103 => array(
            'pid' => 103,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'c1304af9-8744-4b7e-8d81-7dee76cbb735',
          ),
          101 => array(
            'pid' => 101,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_subtitle',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_plain',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h3',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '6e7a9866-8b0a-4224-b0d4-c511a0c333be',
          ),
          92 => array(
            'pid' => 92,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h5',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '04854c1b-0a48-4048-b31c-370fb27a1815',
          ),
          93 => array(
            'pid' => 93,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'default',
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => 'formatter_large__1140_x_1140_',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
            'uuid' => '620c9c74-fc1b-4b88-91b5-f5010b93e22e',
          ),
          94 => array(
            'pid' => 94,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'plain_text',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
            'uuid' => '6015b2d7-3da3-4825-afef-efbfcf61839d',
          ),
          95 => array(
            'pid' => 95,
            'did' => 20,
            'panel' => 'sidebar',
            'type' => 'panels_mini',
            'subtype' => 'page_sidebar_right',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'aa9af1ac-0b8a-4005-9003-e6881d9a2870',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 103,
            1 => 101,
            2 => 92,
            3 => 93,
            4 => 94,
          ),
          'sidebar' => array(
            0 => 95,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 20,
        'renderer' => 'standard',
        'layout' => 'helm_full_page',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'style' => 'wrapper_element',
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'sidebar' => array(
            'style' => 'wrapper_element',
          ),
        ),
        'cache' => array(),
        'title' => 'News',
        'hide_title' => 0,
        'title_pane' => 93,
        'uuid' => 'e268aed3-0cd7-4cf6-870c-5faa75f8cf64',
      ),
    ),
    'teaser' => array(
      'entity_type' => 'node',
      'entity_id' => 110,
      'revision_id' => 130,
      'name' => 'node:article:default:teaser',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'teaser',
      'css_class' => '',
      'title_element' => 'H3',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          97 => array(
            'pid' => 97,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'style' => 'default',
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '9d2bca18-dfc4-48b1-9918-336531e323cd',
          ),
          98 => array(
            'pid' => 98,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'trim_length' => 600,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '17d36e42-3bd7-44bf-b0fc-5de0e7460cf0',
          ),
          99 => array(
            'pid' => 99,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 'no_wrapper',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h4',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '7d02c90d-6b27-419a-86fc-c589357b4003',
          ),
          100 => array(
            'pid' => 100,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => 'content',
                'image_style' => 'medium',
                'quickedit' => array(
                  'editor' => 'form',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'e34b8ac5-e704-4394-9450-b72b7d105d67',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 97,
            1 => 98,
          ),
          'sidebar' => array(
            0 => 99,
            1 => 100,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 21,
        'renderer' => 'standard',
        'layout' => 'helm_teaser',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => NULL,
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'style' => 'wrapper_element',
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 0,
        'uuid' => '85da5139-1fd2-43b0-a91d-b6dc80117370',
      ),
    ),
    'featured' => array(
      'entity_type' => 'node',
      'entity_id' => 110,
      'revision_id' => 130,
      'name' => 'node:article:default:featured',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          15 => array(
            'pid' => 15,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'image_style' => 'default',
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => '',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'f4eb77a2-9f16-439e-b5b7-cb8c1ac703b0',
          ),
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'center',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9f395dd-dbdc-47e9-9bcb-efabc1a6f02d',
          ),
          16 => array(
            'pid' => 16,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'trim_length' => 300,
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '0eff787b-9c44-40a8-9e2f-afe37ea8e72a',
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 15,
            1 => 18,
            2 => 16,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'center' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 18,
        'uuid' => 'a4d26072-bb9b-4dc5-b51b-a30f37a3285a',
      ),
    ),
  ),
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'City of Springfield',
  ),
  'domain_source' => NULL,
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-05 20:10:15 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Mayor and Metro Council to Evaluate Home Buyout Program',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c8feb59d-60e6-45ff-9105-df75a616ce71',
  'type' => 'article',
  'language' => 'und',
  'created' => 1430890789,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2435ace3-f180-4b36-9b66-073aa5bf3110',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Mayor and Metro Council to Evaluate Home Buyout Program</p>

<p>Today the Mayor announced the formation of a Work Group to study and recommend a course of action to address homes subject to repetitive losses caused by recent major rain and flood events.</p>

<p>The work group will be comprised of members from the Metro Government and Metro Council.&nbsp; It will identify an immediate course of action to address the most severely flooded homes from the recent rain event. Over the past six years, Springfield has experienced four significant rain events (2009, 2011, 2013, 2015) that impacted 1000\'s of homes throughout the Metro area.</p>

<p>“The recent rains and the city’s floodplain ordinance adopted years ago have had a real impact on the lives of our citizens,” the Mayor said. “I’m asking this group to identify the hardships that have been caused by this most recent rain – and consider ways to move forward to help families.”</p>

<p>The work group will also look at programs implemented in other river cities across the country to address and mitigate the impact of major rain and flood events on homeowners living within flood prone areas. The group will be begin its work immediately, and provide short term recommendations within 30 days for those repetitive loss homes that cannot obtain rebuilding permits.&nbsp;</p>

<p>“We on the Metro Council who represent those areas impacted by the previous and most recent episodes in Springfield are keenly aware of the disruption and hardship that our fellow citizens face,” Council President said. “We stand ready to address this pressing issue and will work with our partners at the federal, state and local levels to help our neighbors build a stronger community.” The group will also evaluate longer term solutions for mitigation and home buyouts.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Mayor and Metro Council to Evaluate Home Buyout Program</p>

<p>Today the Mayor announced the formation of a Work Group to study and recommend a course of action to address homes subject to repetitive losses caused by recent major rain and flood events.</p>

<p>The work group will be comprised of members from the Metro Government and Metro Council.  It will identify an immediate course of action to address the most severely flooded homes from the recent rain event. Over the past six years, Springfield has experienced four significant rain events (2009, 2011, 2013, 2015) that impacted 1000\'s of homes throughout the Metro area.</p>

<p>“The recent rains and the city’s floodplain ordinance adopted years ago have had a real impact on the lives of our citizens,” the Mayor said. “I’m asking this group to identify the hardships that have been caused by this most recent rain – and consider ways to move forward to help families.”</p>

<p>The work group will also look at programs implemented in other river cities across the country to address and mitigate the impact of major rain and flood events on homeowners living within flood prone areas. The group will be begin its work immediately, and provide short term recommendations within 30 days for those repetitive loss homes that cannot obtain rebuilding permits. </p>

<p>“We on the Metro Council who represent those areas impacted by the previous and most recent episodes in Springfield are keenly aware of the disruption and hardship that our fellow citizens face,” Council President said. “We stand ready to address this pressing issue and will work with our partners at the federal, state and local levels to help our neighbors build a stronger community.” The group will also evaluate longer term solutions for mitigation and home buyouts.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_attachment' => array(),
  'field_media' => array(),
  'field_article_category' => array(),
  'field_subtitle' => array(),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 123,
      'revision_id' => 165,
      'name' => 'node:article:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          103 => array(
            'pid' => 103,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'c1304af9-8744-4b7e-8d81-7dee76cbb735',
          ),
          101 => array(
            'pid' => 101,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_subtitle',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_plain',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h3',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '6e7a9866-8b0a-4224-b0d4-c511a0c333be',
          ),
          92 => array(
            'pid' => 92,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h5',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '04854c1b-0a48-4048-b31c-370fb27a1815',
          ),
          93 => array(
            'pid' => 93,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'default',
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => 'formatter_large__1140_x_1140_',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
            'uuid' => '620c9c74-fc1b-4b88-91b5-f5010b93e22e',
          ),
          94 => array(
            'pid' => 94,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'plain_text',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
            'uuid' => '6015b2d7-3da3-4825-afef-efbfcf61839d',
          ),
          95 => array(
            'pid' => 95,
            'did' => 20,
            'panel' => 'sidebar',
            'type' => 'panels_mini',
            'subtype' => 'page_sidebar_right',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'aa9af1ac-0b8a-4005-9003-e6881d9a2870',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 103,
            1 => 101,
            2 => 92,
            3 => 93,
            4 => 94,
          ),
          'sidebar' => array(
            0 => 95,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 20,
        'renderer' => 'standard',
        'layout' => 'helm_full_page',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'style' => 'wrapper_element',
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'sidebar' => array(
            'style' => 'wrapper_element',
          ),
        ),
        'cache' => array(),
        'title' => 'News',
        'hide_title' => 0,
        'title_pane' => 93,
        'uuid' => 'e268aed3-0cd7-4cf6-870c-5faa75f8cf64',
      ),
    ),
    'teaser' => array(
      'entity_type' => 'node',
      'entity_id' => 123,
      'revision_id' => 165,
      'name' => 'node:article:default:teaser',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'teaser',
      'css_class' => '',
      'title_element' => 'H3',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          97 => array(
            'pid' => 97,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'style' => 'default',
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '9d2bca18-dfc4-48b1-9918-336531e323cd',
          ),
          98 => array(
            'pid' => 98,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'trim_length' => 600,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '17d36e42-3bd7-44bf-b0fc-5de0e7460cf0',
          ),
          99 => array(
            'pid' => 99,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 'no_wrapper',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h4',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '7d02c90d-6b27-419a-86fc-c589357b4003',
          ),
          100 => array(
            'pid' => 100,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => 'content',
                'image_style' => 'medium',
                'quickedit' => array(
                  'editor' => 'form',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'e34b8ac5-e704-4394-9450-b72b7d105d67',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 97,
            1 => 98,
          ),
          'sidebar' => array(
            0 => 99,
            1 => 100,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 21,
        'renderer' => 'standard',
        'layout' => 'helm_teaser',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => NULL,
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'style' => 'wrapper_element',
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 0,
        'uuid' => '85da5139-1fd2-43b0-a91d-b6dc80117370',
      ),
    ),
    'featured' => array(
      'entity_type' => 'node',
      'entity_id' => 123,
      'revision_id' => 165,
      'name' => 'node:article:default:featured',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          15 => array(
            'pid' => 15,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'image_style' => 'default',
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => '',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'f4eb77a2-9f16-439e-b5b7-cb8c1ac703b0',
          ),
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'center',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9f395dd-dbdc-47e9-9bcb-efabc1a6f02d',
          ),
          16 => array(
            'pid' => 16,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'trim_length' => 300,
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '0eff787b-9c44-40a8-9e2f-afe37ea8e72a',
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 15,
            1 => 18,
            2 => 16,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'center' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 18,
        'uuid' => 'a4d26072-bb9b-4dc5-b51b-a30f37a3285a',
      ),
    ),
  ),
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'City of Springfield',
  ),
  'domain_source' => NULL,
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-06 05:39:49 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Your government at work: 2014 year in review',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '97ffbedc-5262-4855-979f-9efe4860a4e4',
  'type' => 'article',
  'language' => 'und',
  'created' => 1426756966,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '34720554-6b2f-491a-ac40-61e1b4279a57',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>War Is the H-Word</h2>

<p>That\'s not soon enough! Michelle, I don\'t regret this, but I both rue and lament it. Oh right. I forgot about the battle. Bender, I didn\'t know you liked cooking. That\'s so cute. I suppose I could part with \'one\' and still be feared…</p>

<ul>
	<li style="margin:0px">I feel like I was mauled by Jesus.</li>
	<li style="margin:0px">We don\'t have a brig.</li>
	<li style="margin:0px">We need rest. The spirit is willing, but the flesh is spongy and bruised.</li>
</ul>

<h3>I Second That Emotion</h3>

<p>I suppose I could part with \'one\' and still be feared… Morbo will now introduce tonight\'s candidates… PUNY HUMAN NUMBER ONE, PUNY HUMAN NUMBER TWO, and Morbo\'s good friend, Richard Nixon. You, minion. Lift my arm. AFTER HIM! Well, thanks to the Internet, I\'m now bored with sex. Is there a place on the web that panders to my lust for violence? I wish! It\'s a nickel. It\'s toe-tappingly tragic!</p>

<h4>Bend Her</h4>

<p>So, how \'bout them Knicks? Doomsday device? Ah, now the ball\'s in Farnsworth\'s court! These old Doomsday Devices are dangerously unstable. I\'ll rest easier not knowing where they are. You, minion. Lift my arm. AFTER HIM! Now what?</p>

<ol>
	<li style="margin:0px">Doomsday device? Ah, now the ball\'s in Farnsworth\'s court!</li>
	<li style="margin:0px">It\'s okay, Bender. I like cooking too.</li>
	<li style="margin:0px">Also Zoidberg.</li>
	<li>&nbsp;</li>
</ol>
',
        'summary' => '<p><span>That\'s not soon enough! Michelle, I don\'t regret this, but I both rue and lament it. Oh right. I forgot about the battle.&nbsp;</span></p>
',
        'format' => 'filtered_html',
        'safe_value' => '<h2>War Is the H-Word</h2>

<p>That\'s not soon enough! Michelle, I don\'t regret this, but I both rue and lament it. Oh right. I forgot about the battle. Bender, I didn\'t know you liked cooking. That\'s so cute. I suppose I could part with \'one\' and still be feared…</p>

<ul><li style=";;margin:0px;">I feel like I was mauled by Jesus.</li>
	<li style=";;margin:0px;">We don\'t have a brig.</li>
	<li style=";;margin:0px;">We need rest. The spirit is willing, but the flesh is spongy and bruised.</li>
</ul><h3>I Second That Emotion</h3>

<p>I suppose I could part with \'one\' and still be feared… Morbo will now introduce tonight\'s candidates… PUNY HUMAN NUMBER ONE, PUNY HUMAN NUMBER TWO, and Morbo\'s good friend, Richard Nixon. You, minion. Lift my arm. AFTER HIM! Well, thanks to the Internet, I\'m now bored with sex. Is there a place on the web that panders to my lust for violence? I wish! It\'s a nickel. It\'s toe-tappingly tragic!</p>

<h4>Bend Her</h4>

<p>So, how \'bout them Knicks? Doomsday device? Ah, now the ball\'s in Farnsworth\'s court! These old Doomsday Devices are dangerously unstable. I\'ll rest easier not knowing where they are. You, minion. Lift my arm. AFTER HIM! Now what?</p>

<ol><li style=";;margin:0px;">Doomsday device? Ah, now the ball\'s in Farnsworth\'s court!</li>
	<li style=";;margin:0px;">It\'s okay, Bender. I like cooking too.</li>
	<li style=";;margin:0px;">Also Zoidberg.</li>
	<li> </li>
</ol>',
        'safe_summary' => '<p><span>That\'s not soon enough! Michelle, I don\'t regret this, but I both rue and lament it. Oh right. I forgot about the battle. </span></p>
',
      ),
    ),
  ),
  'field_attachment' => array(),
  'field_media' => array(),
  'field_article_category' => array(),
  'field_subtitle' => array(),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 7,
      'revision_id' => 52,
      'name' => 'node:article:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          103 => array(
            'pid' => 103,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'c1304af9-8744-4b7e-8d81-7dee76cbb735',
          ),
          101 => array(
            'pid' => 101,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_subtitle',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_plain',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h3',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '6e7a9866-8b0a-4224-b0d4-c511a0c333be',
          ),
          92 => array(
            'pid' => 92,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h5',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '04854c1b-0a48-4048-b31c-370fb27a1815',
          ),
          93 => array(
            'pid' => 93,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'default',
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => 'formatter_large__1140_x_1140_',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
            'uuid' => '620c9c74-fc1b-4b88-91b5-f5010b93e22e',
          ),
          94 => array(
            'pid' => 94,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'plain_text',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
            'uuid' => '6015b2d7-3da3-4825-afef-efbfcf61839d',
          ),
          95 => array(
            'pid' => 95,
            'did' => 20,
            'panel' => 'sidebar',
            'type' => 'panels_mini',
            'subtype' => 'page_sidebar_right',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'aa9af1ac-0b8a-4005-9003-e6881d9a2870',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 103,
            1 => 101,
            2 => 92,
            3 => 93,
            4 => 94,
          ),
          'sidebar' => array(
            0 => 95,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 20,
        'renderer' => 'standard',
        'layout' => 'helm_full_page',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'style' => 'wrapper_element',
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'sidebar' => array(
            'style' => 'wrapper_element',
          ),
        ),
        'cache' => array(),
        'title' => 'News',
        'hide_title' => 0,
        'title_pane' => 93,
        'uuid' => 'e268aed3-0cd7-4cf6-870c-5faa75f8cf64',
      ),
    ),
    'teaser' => array(
      'entity_type' => 'node',
      'entity_id' => 7,
      'revision_id' => 52,
      'name' => 'node:article:default:teaser',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'teaser',
      'css_class' => '',
      'title_element' => 'H3',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          97 => array(
            'pid' => 97,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'style' => 'default',
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '9d2bca18-dfc4-48b1-9918-336531e323cd',
          ),
          98 => array(
            'pid' => 98,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'trim_length' => 600,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '17d36e42-3bd7-44bf-b0fc-5de0e7460cf0',
          ),
          99 => array(
            'pid' => 99,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 'no_wrapper',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h4',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '7d02c90d-6b27-419a-86fc-c589357b4003',
          ),
          100 => array(
            'pid' => 100,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => 'content',
                'image_style' => 'medium',
                'quickedit' => array(
                  'editor' => 'form',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'e34b8ac5-e704-4394-9450-b72b7d105d67',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 97,
            1 => 98,
          ),
          'sidebar' => array(
            0 => 99,
            1 => 100,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 21,
        'renderer' => 'standard',
        'layout' => 'helm_teaser',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => NULL,
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'style' => 'wrapper_element',
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 0,
        'uuid' => '85da5139-1fd2-43b0-a91d-b6dc80117370',
      ),
    ),
    'featured' => array(
      'entity_type' => 'node',
      'entity_id' => 7,
      'revision_id' => 52,
      'name' => 'node:article:default:featured',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          15 => array(
            'pid' => 15,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'image_style' => 'default',
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => '',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'f4eb77a2-9f16-439e-b5b7-cb8c1ac703b0',
          ),
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'center',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9f395dd-dbdc-47e9-9bcb-efabc1a6f02d',
          ),
          16 => array(
            'pid' => 16,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'trim_length' => 300,
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '0eff787b-9c44-40a8-9e2f-afe37ea8e72a',
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 15,
            1 => 18,
            2 => 16,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'center' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 18,
        'uuid' => 'a4d26072-bb9b-4dc5-b51b-a30f37a3285a',
      ),
    ),
  ),
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'City of Springfield',
  ),
  'domain_source' => NULL,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:12:"admin_select";s:10:"admin_menu";s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-19 09:22:46 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Mayor Quimby Announces mandatory water rationing',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd9bed512-f858-4e97-8132-bfe7d77f33b3',
  'type' => 'article',
  'language' => 'und',
  'created' => 1426756741,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bd1cfda3-c136-4141-9ad0-46df817c24c9',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bendin\' in the Wind</p>

<p>Then throw her in the laundry room, which will hereafter be referred to as "the brig". OK, this has gotta stop. I\'m going to remind Fry of his humanity the way only a woman can. I just told you! You\'ve killed me! Ven ve voke up, ve had zese wodies. I decline the title of Iron Cook and accept the lesser title of Zinc Saucier, which I just made up. Uhh… also, comes with double prize money.</p>

<h2>Mars University</h2>

<p>Oh, I always feared he might run off like this. Why, why, why didn\'t I break his legs? In our darkest hour, we can stand erect, with proud upthrust bosoms. We don\'t have a brig. Actually, that\'s still true.</p>

<ul>
	<li style="margin:0px">And yet you haven\'t said what I told you to say! How can any of us trust you?</li>
	<li style="margin:0px">Yes, if you make it look like an electrical fire. When you do things right, people won\'t be sure you\'ve done anything at all.</li>
	<li style="margin:0px">I guess because my parents keep telling me to be more ladylike. As though!</li>
	<li style="margin:0px">You\'re going to do his laundry?</li>
</ul>

<h3>The Mutants Are Revolting</h3>

<p>Oh, you\'re a dollar naughtier than most. Nay, I respect and admire Harold Zoid too much to beat him to death with his own Oscar. As an interesting side note, as a head without a body, I envy the dead. I was having the most wonderful dream. Except you were there, and you were there, and you were there! We don\'t have a brig.</p>

<h4>A Clockwork Origin</h4>

<p>Please, Don-Bot… look into your hard drive, and open your mercy file! I feel like I was mauled by Jesus. I meant \'physically\'. Look, perhaps you could let me work for a little food? I could clean the floors or paint a fence, or service you sexually? Oh, I always feared he might run off like this. Why, why, why didn\'t I break his legs? Yes, except the Dave Matthews Band doesn\'t rock.</p>

<ol>
	<li style="margin:0px">Ooh, name it after me!</li>
	<li style="margin:0px">Nay, I respect and admire Harold Zoid too much to beat him to death with his own Oscar.</li>
	<li style="margin:0px">Hey! I\'m a porno-dealing monster, what do I care what you think?</li>
</ol>

<h5>Xmas Story</h5>

<p>Okay, it\'s 500 dollars, you have no choice of carrier, the battery can\'t hold the charge and the reception isn\'t very… Oh no! The professor will hit me! But if Zoidberg \'fixes\' it… then perhaps gifts! It must be wonderful.</p>
',
        'summary' => '<p><span>Then throw her in the laundry room, which will hereafter be referred to as "the brig". OK, this has gotta stop. I\'m going to remind Fry of his humanity the way only a woman can.&nbsp;</span></p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Bendin\' in the Wind</p>

<p>Then throw her in the laundry room, which will hereafter be referred to as "the brig". OK, this has gotta stop. I\'m going to remind Fry of his humanity the way only a woman can. I just told you! You\'ve killed me! Ven ve voke up, ve had zese wodies. I decline the title of Iron Cook and accept the lesser title of Zinc Saucier, which I just made up. Uhh… also, comes with double prize money.</p>

<h2>Mars University</h2>

<p>Oh, I always feared he might run off like this. Why, why, why didn\'t I break his legs? In our darkest hour, we can stand erect, with proud upthrust bosoms. We don\'t have a brig. Actually, that\'s still true.</p>

<ul><li style=";;margin:0px;">And yet you haven\'t said what I told you to say! How can any of us trust you?</li>
	<li style=";;margin:0px;">Yes, if you make it look like an electrical fire. When you do things right, people won\'t be sure you\'ve done anything at all.</li>
	<li style=";;margin:0px;">I guess because my parents keep telling me to be more ladylike. As though!</li>
	<li style=";;margin:0px;">You\'re going to do his laundry?</li>
</ul><h3>The Mutants Are Revolting</h3>

<p>Oh, you\'re a dollar naughtier than most. Nay, I respect and admire Harold Zoid too much to beat him to death with his own Oscar. As an interesting side note, as a head without a body, I envy the dead. I was having the most wonderful dream. Except you were there, and you were there, and you were there! We don\'t have a brig.</p>

<h4>A Clockwork Origin</h4>

<p>Please, Don-Bot… look into your hard drive, and open your mercy file! I feel like I was mauled by Jesus. I meant \'physically\'. Look, perhaps you could let me work for a little food? I could clean the floors or paint a fence, or service you sexually? Oh, I always feared he might run off like this. Why, why, why didn\'t I break his legs? Yes, except the Dave Matthews Band doesn\'t rock.</p>

<ol><li style=";;margin:0px;">Ooh, name it after me!</li>
	<li style=";;margin:0px;">Nay, I respect and admire Harold Zoid too much to beat him to death with his own Oscar.</li>
	<li style=";;margin:0px;">Hey! I\'m a porno-dealing monster, what do I care what you think?</li>
</ol><h5>Xmas Story</h5>

<p>Okay, it\'s 500 dollars, you have no choice of carrier, the battery can\'t hold the charge and the reception isn\'t very… Oh no! The professor will hit me! But if Zoidberg \'fixes\' it… then perhaps gifts! It must be wonderful.</p>
',
        'safe_summary' => '<p><span>Then throw her in the laundry room, which will hereafter be referred to as "the brig". OK, this has gotta stop. I\'m going to remind Fry of his humanity the way only a woman can. </span></p>
',
      ),
    ),
  ),
  'field_attachment' => array(),
  'field_media' => array(),
  'field_article_category' => array(),
  'field_subtitle' => array(),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 9,
      'revision_id' => 164,
      'name' => 'node:article:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          103 => array(
            'pid' => 103,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'c1304af9-8744-4b7e-8d81-7dee76cbb735',
          ),
          101 => array(
            'pid' => 101,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_subtitle',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_plain',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h3',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '6e7a9866-8b0a-4224-b0d4-c511a0c333be',
          ),
          92 => array(
            'pid' => 92,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h5',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '04854c1b-0a48-4048-b31c-370fb27a1815',
          ),
          93 => array(
            'pid' => 93,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'default',
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => 'formatter_large__1140_x_1140_',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
            'uuid' => '620c9c74-fc1b-4b88-91b5-f5010b93e22e',
          ),
          94 => array(
            'pid' => 94,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'plain_text',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
            'uuid' => '6015b2d7-3da3-4825-afef-efbfcf61839d',
          ),
          95 => array(
            'pid' => 95,
            'did' => 20,
            'panel' => 'sidebar',
            'type' => 'panels_mini',
            'subtype' => 'page_sidebar_right',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'aa9af1ac-0b8a-4005-9003-e6881d9a2870',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 103,
            1 => 101,
            2 => 92,
            3 => 93,
            4 => 94,
          ),
          'sidebar' => array(
            0 => 95,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 20,
        'renderer' => 'standard',
        'layout' => 'helm_full_page',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'style' => 'wrapper_element',
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'sidebar' => array(
            'style' => 'wrapper_element',
          ),
        ),
        'cache' => array(),
        'title' => 'News',
        'hide_title' => 0,
        'title_pane' => 93,
        'uuid' => 'e268aed3-0cd7-4cf6-870c-5faa75f8cf64',
      ),
    ),
    'teaser' => array(
      'entity_type' => 'node',
      'entity_id' => 9,
      'revision_id' => 164,
      'name' => 'node:article:default:teaser',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'teaser',
      'css_class' => '',
      'title_element' => 'H3',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          97 => array(
            'pid' => 97,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'style' => 'default',
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '9d2bca18-dfc4-48b1-9918-336531e323cd',
          ),
          98 => array(
            'pid' => 98,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'trim_length' => 600,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '17d36e42-3bd7-44bf-b0fc-5de0e7460cf0',
          ),
          99 => array(
            'pid' => 99,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 'no_wrapper',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h4',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '7d02c90d-6b27-419a-86fc-c589357b4003',
          ),
          100 => array(
            'pid' => 100,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => 'content',
                'image_style' => 'medium',
                'quickedit' => array(
                  'editor' => 'form',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'e34b8ac5-e704-4394-9450-b72b7d105d67',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 97,
            1 => 98,
          ),
          'sidebar' => array(
            0 => 99,
            1 => 100,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 21,
        'renderer' => 'standard',
        'layout' => 'helm_teaser',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => NULL,
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'style' => 'wrapper_element',
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 0,
        'uuid' => '85da5139-1fd2-43b0-a91d-b6dc80117370',
      ),
    ),
    'featured' => array(
      'entity_type' => 'node',
      'entity_id' => 9,
      'revision_id' => 164,
      'name' => 'node:article:default:featured',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          15 => array(
            'pid' => 15,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'image_style' => 'default',
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => '',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'f4eb77a2-9f16-439e-b5b7-cb8c1ac703b0',
          ),
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'center',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9f395dd-dbdc-47e9-9bcb-efabc1a6f02d',
          ),
          16 => array(
            'pid' => 16,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'trim_length' => 300,
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '0eff787b-9c44-40a8-9e2f-afe37ea8e72a',
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 15,
            1 => 18,
            2 => 16,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'center' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 18,
        'uuid' => 'a4d26072-bb9b-4dc5-b51b-a30f37a3285a',
      ),
    ),
  ),
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'City of Springfield',
  ),
  'domain_source' => NULL,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:12:"admin_select";s:10:"admin_menu";s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-19 09:19:01 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Springfield Anticipates Bright Economic Future',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cc5ec90b-f1e1-45de-93de-89c753f15046',
  'type' => 'article',
  'language' => 'und',
  'created' => 1430889069,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd8d6c11f-8329-45ba-93a0-d0b9996d635f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Springfield Downtown Business Improvement District named one of Site Selector’s Top U.S. Economic Development Groups for 2015</p>

<p>The Springfield Downtown Business Improvement District, the city’s economic development organization, is named one of the Top U.S. Economic Development Groups for 2015 by&nbsp;<em>Site Selectors magazine</em>.&nbsp; Since its creation in July, the&nbsp;Springfield Downtown Business Improvement District has helped businesses create nearly 3,500 new jobs in Springfield, representing an investment of more than half a billion dollars.&nbsp;</p>

<p>“Quality companies are investing in Springfield resulting in one of the highest employment rates ever for our city,” said the Mayor. “This recognition is proof that Louisville is thriving and the hard work of our economic development team."</p>

<p>The group was formed last summer to unite economic development efforts and built environment functions, allowing business owners to go from concept to permit in one streamlined agency. Giving equal attention to quality of place as economic development, the&nbsp;Springfield Downtown Business Improvement District touches the arts, parks, and other community amenities such as connectivity, schools and being a welcoming, international city.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The Springfield Downtown Business Improvement District named one of Site Selector’s Top U.S. Economic Development Groups for 2015</p>

<p>The Springfield Downtown Business Improvement District, the city’s economic development organization, is named one of the Top U.S. Economic Development Groups for 2015 by <em>Site Selectors magazine</em>.  Since its creation in July, the Springfield Downtown Business Improvement District has helped businesses create nearly 3,500 new jobs in Springfield, representing an investment of more than half a billion dollars. </p>

<p>“Quality companies are investing in Springfield resulting in one of the highest employment rates ever for our city,” said the Mayor. “This recognition is proof that Louisville is thriving and the hard work of our economic development team."</p>

<p>The group was formed last summer to unite economic development efforts and built environment functions, allowing business owners to go from concept to permit in one streamlined agency. Giving equal attention to quality of place as economic development, the Springfield Downtown Business Improvement District touches the arts, parks, and other community amenities such as connectivity, schools and being a welcoming, international city.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_attachment' => array(),
  'field_media' => array(),
  'field_article_category' => array(),
  'field_subtitle' => array(
    'und' => array(
      0 => array(
        'value' => 'Record setting increase in new sites selected in the City',
        'format' => NULL,
        'safe_value' => 'Record setting increase in new sites selected in the City',
      ),
    ),
  ),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 121,
      'revision_id' => 161,
      'name' => 'node:article:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          103 => array(
            'pid' => 103,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'c1304af9-8744-4b7e-8d81-7dee76cbb735',
          ),
          101 => array(
            'pid' => 101,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_subtitle',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_plain',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h3',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '6e7a9866-8b0a-4224-b0d4-c511a0c333be',
          ),
          92 => array(
            'pid' => 92,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h5',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '04854c1b-0a48-4048-b31c-370fb27a1815',
          ),
          93 => array(
            'pid' => 93,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'default',
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => 'formatter_large__1140_x_1140_',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
            'uuid' => '620c9c74-fc1b-4b88-91b5-f5010b93e22e',
          ),
          94 => array(
            'pid' => 94,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'plain_text',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
            'uuid' => '6015b2d7-3da3-4825-afef-efbfcf61839d',
          ),
          95 => array(
            'pid' => 95,
            'did' => 20,
            'panel' => 'sidebar',
            'type' => 'panels_mini',
            'subtype' => 'page_sidebar_right',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'aa9af1ac-0b8a-4005-9003-e6881d9a2870',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 103,
            1 => 101,
            2 => 92,
            3 => 93,
            4 => 94,
          ),
          'sidebar' => array(
            0 => 95,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 20,
        'renderer' => 'standard',
        'layout' => 'helm_full_page',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'style' => 'wrapper_element',
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'sidebar' => array(
            'style' => 'wrapper_element',
          ),
        ),
        'cache' => array(),
        'title' => 'News',
        'hide_title' => 0,
        'title_pane' => 93,
        'uuid' => 'e268aed3-0cd7-4cf6-870c-5faa75f8cf64',
      ),
    ),
    'teaser' => array(
      'entity_type' => 'node',
      'entity_id' => 121,
      'revision_id' => 161,
      'name' => 'node:article:default:teaser',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'teaser',
      'css_class' => '',
      'title_element' => 'H3',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          97 => array(
            'pid' => 97,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'style' => 'default',
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '9d2bca18-dfc4-48b1-9918-336531e323cd',
          ),
          98 => array(
            'pid' => 98,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'trim_length' => 600,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '17d36e42-3bd7-44bf-b0fc-5de0e7460cf0',
          ),
          99 => array(
            'pid' => 99,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 'no_wrapper',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h4',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '7d02c90d-6b27-419a-86fc-c589357b4003',
          ),
          100 => array(
            'pid' => 100,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => 'content',
                'image_style' => 'medium',
                'quickedit' => array(
                  'editor' => 'form',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'e34b8ac5-e704-4394-9450-b72b7d105d67',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 97,
            1 => 98,
          ),
          'sidebar' => array(
            0 => 99,
            1 => 100,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 21,
        'renderer' => 'standard',
        'layout' => 'helm_teaser',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => NULL,
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'style' => 'wrapper_element',
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 0,
        'uuid' => '85da5139-1fd2-43b0-a91d-b6dc80117370',
      ),
    ),
    'featured' => array(
      'entity_type' => 'node',
      'entity_id' => 121,
      'revision_id' => 161,
      'name' => 'node:article:default:featured',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          15 => array(
            'pid' => 15,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'image_style' => 'default',
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => '',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'f4eb77a2-9f16-439e-b5b7-cb8c1ac703b0',
          ),
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'center',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9f395dd-dbdc-47e9-9bcb-efabc1a6f02d',
          ),
          16 => array(
            'pid' => 16,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'trim_length' => 300,
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '0eff787b-9c44-40a8-9e2f-afe37ea8e72a',
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 15,
            1 => 18,
            2 => 16,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'center' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 18,
        'uuid' => 'a4d26072-bb9b-4dc5-b51b-a30f37a3285a',
      ),
    ),
  ),
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'City of Springfield',
  ),
  'domain_source' => NULL,
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-06 05:11:09 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Springfield Isotopes Advance to AA Minor League Championship Series',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'a941aced-a265-423f-b461-dfbab00cbc51',
  'type' => 'article',
  'language' => 'und',
  'created' => 1427335712,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'da33829a-63ea-4ef4-9369-ee0608991780',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Hey, guess what you\'re accessories to. What are you hacking off? Is it my torso?! \'It is!\' My precious torso! We\'ll need to have a look inside you with this camera.</p>

<ul>
	<li style="margin:0px">Now what?</li>
	<li style="margin:0px">No! The kind with looting and maybe starting a few fires!</li>
	<li style="margin:0px">OK, if everyone\'s finished being stupid.</li>
	<li style="margin:0px">There, now he\'s trapped in a book I wrote: a crummy world of plot holes and spelling errors!</li>
	<li style="margin:0px">OK, if everyone\'s finished being stupid.</li>
</ul>

<h3>Attack of the Killer App</h3>

<p>Professor, make a woman out of me. Say it in Russian! Ven ve voke up, ve had zese wodies. Isn\'t it true that you have been paid for your testimony? Fetal stemcells, aren\'t those controversial? Oh right. I forgot about the battle.</p>

<h4>A Clone of My Own</h4>

<p>We\'ll need to have a look inside you with this camera. No! The kind with looting and maybe starting a few fires! We\'ll need to have a look inside you with this camera. Hey, tell me something. You\'ve got all this money. How come you always dress like you\'re doing your laundry? Whoa a real live robot; or is that some kind of cheesy New Year\'s costume?</p>

<ol>
	<li style="margin:0px">I\'m sorry, guys. I never meant to hurt you. Just to destroy everything you ever believed in.</li>
	<li style="margin:0px">Yeah. Give a little credit to our public schools.</li>
	<li style="margin:0px">There, now he\'s trapped in a book I wrote: a crummy world of plot holes and spelling errors!</li>
</ol>

<h5>The Birdbot of Ice-Catraz</h5>

<p>And remember, don\'t do anything that affects anything, unless it turns out you were supposed to, in which case, for the love of God, don\'t not do it! Leela, are you alright? You got wanged on the head. Well I\'da done better, but it\'s plum hard pleading a case while awaiting trial for that there incompetence.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Hey, guess what you\'re accessories to. What are you hacking off? Is it my torso?! \'It is!\' My precious torso! We\'ll need to have a look inside you with this camera.</p>

<ul><li style=";;margin:0px;">Now what?</li>
	<li style=";;margin:0px;">No! The kind with looting and maybe starting a few fires!</li>
	<li style=";;margin:0px;">OK, if everyone\'s finished being stupid.</li>
	<li style=";;margin:0px;">There, now he\'s trapped in a book I wrote: a crummy world of plot holes and spelling errors!</li>
	<li style=";;margin:0px;">OK, if everyone\'s finished being stupid.</li>
</ul><h3>Attack of the Killer App</h3>

<p>Professor, make a woman out of me. Say it in Russian! Ven ve voke up, ve had zese wodies. Isn\'t it true that you have been paid for your testimony? Fetal stemcells, aren\'t those controversial? Oh right. I forgot about the battle.</p>

<h4>A Clone of My Own</h4>

<p>We\'ll need to have a look inside you with this camera. No! The kind with looting and maybe starting a few fires! We\'ll need to have a look inside you with this camera. Hey, tell me something. You\'ve got all this money. How come you always dress like you\'re doing your laundry? Whoa a real live robot; or is that some kind of cheesy New Year\'s costume?</p>

<ol><li style=";;margin:0px;">I\'m sorry, guys. I never meant to hurt you. Just to destroy everything you ever believed in.</li>
	<li style=";;margin:0px;">Yeah. Give a little credit to our public schools.</li>
	<li style=";;margin:0px;">There, now he\'s trapped in a book I wrote: a crummy world of plot holes and spelling errors!</li>
</ol><h5>The Birdbot of Ice-Catraz</h5>

<p>And remember, don\'t do anything that affects anything, unless it turns out you were supposed to, in which case, for the love of God, don\'t not do it! Leela, are you alright? You got wanged on the head. Well I\'da done better, but it\'s plum hard pleading a case while awaiting trial for that there incompetence.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_attachment' => array(),
  'field_media' => array(),
  'field_article_category' => array(),
  'field_subtitle' => array(),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 10,
      'revision_id' => 55,
      'name' => 'node:article:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          103 => array(
            'pid' => 103,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'c1304af9-8744-4b7e-8d81-7dee76cbb735',
          ),
          101 => array(
            'pid' => 101,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_subtitle',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_plain',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h3',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '6e7a9866-8b0a-4224-b0d4-c511a0c333be',
          ),
          92 => array(
            'pid' => 92,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h5',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '04854c1b-0a48-4048-b31c-370fb27a1815',
          ),
          93 => array(
            'pid' => 93,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'default',
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => 'formatter_large__1140_x_1140_',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
            'uuid' => '620c9c74-fc1b-4b88-91b5-f5010b93e22e',
          ),
          94 => array(
            'pid' => 94,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'plain_text',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
            'uuid' => '6015b2d7-3da3-4825-afef-efbfcf61839d',
          ),
          95 => array(
            'pid' => 95,
            'did' => 20,
            'panel' => 'sidebar',
            'type' => 'panels_mini',
            'subtype' => 'page_sidebar_right',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'aa9af1ac-0b8a-4005-9003-e6881d9a2870',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 103,
            1 => 101,
            2 => 92,
            3 => 93,
            4 => 94,
          ),
          'sidebar' => array(
            0 => 95,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 20,
        'renderer' => 'standard',
        'layout' => 'helm_full_page',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'style' => 'wrapper_element',
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'sidebar' => array(
            'style' => 'wrapper_element',
          ),
        ),
        'cache' => array(),
        'title' => 'News',
        'hide_title' => 0,
        'title_pane' => 93,
        'uuid' => 'e268aed3-0cd7-4cf6-870c-5faa75f8cf64',
      ),
    ),
    'teaser' => array(
      'entity_type' => 'node',
      'entity_id' => 10,
      'revision_id' => 55,
      'name' => 'node:article:default:teaser',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'teaser',
      'css_class' => '',
      'title_element' => 'H3',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          97 => array(
            'pid' => 97,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'style' => 'default',
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '9d2bca18-dfc4-48b1-9918-336531e323cd',
          ),
          98 => array(
            'pid' => 98,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'trim_length' => 600,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '17d36e42-3bd7-44bf-b0fc-5de0e7460cf0',
          ),
          99 => array(
            'pid' => 99,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 'no_wrapper',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h4',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '7d02c90d-6b27-419a-86fc-c589357b4003',
          ),
          100 => array(
            'pid' => 100,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => 'content',
                'image_style' => 'medium',
                'quickedit' => array(
                  'editor' => 'form',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'e34b8ac5-e704-4394-9450-b72b7d105d67',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 97,
            1 => 98,
          ),
          'sidebar' => array(
            0 => 99,
            1 => 100,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 21,
        'renderer' => 'standard',
        'layout' => 'helm_teaser',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => NULL,
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'style' => 'wrapper_element',
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 0,
        'uuid' => '85da5139-1fd2-43b0-a91d-b6dc80117370',
      ),
    ),
    'featured' => array(
      'entity_type' => 'node',
      'entity_id' => 10,
      'revision_id' => 55,
      'name' => 'node:article:default:featured',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          15 => array(
            'pid' => 15,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'image_style' => 'default',
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => '',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'f4eb77a2-9f16-439e-b5b7-cb8c1ac703b0',
          ),
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'center',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9f395dd-dbdc-47e9-9bcb-efabc1a6f02d',
          ),
          16 => array(
            'pid' => 16,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'trim_length' => 300,
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '0eff787b-9c44-40a8-9e2f-afe37ea8e72a',
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 15,
            1 => 18,
            2 => 16,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'center' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 18,
        'uuid' => 'a4d26072-bb9b-4dc5-b51b-a30f37a3285a',
      ),
    ),
  ),
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'City of Springfield',
  ),
  'domain_source' => NULL,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:12:"admin_select";s:10:"admin_menu";s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-03-26 02:08:32 +0000',
);
  $nodes[] = array(
  'uid' => 4,
  'title' => 'Community Wide Cleanup Sets New Volunteer Record',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c81ab776-bd90-47a4-9b45-1625a2e6ddce',
  'type' => 'article',
  'language' => 'und',
  'created' => 1430891391,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e725a34e-d158-4436-8234-3799c849bf3d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Brightpass Health Plan Spring Community-Wide Cleanup Sets New Volunteer Record. Over 12,000 volunteers have signed up and will join together for this year’s annual Spring Community-Wide Cleanup to pick up litter and beautify over 190 sites in Springfield.&nbsp;</p>

<div class="panel-col-top panel-panel">
<div class="inside">
<div class="panel-pane pane-node-content">
<div class="pane-content">
<div class="ds-1col node node-article view-mode-full clearfix">
<div class="field field-name-body field-type-text-with-summary field-label-hidden">
<div class="field-items">
<div class="field-item even">
<p>“Once again the community has united together to keep Springfield a clean and green place to live,’ the Mayor said.&nbsp; “I am especially proud of the more than 5,000 Public School students who showed compassion and leadership by cleaning up their schools and surrounding neighborhoods this past Saturday.”</p>

<p>Volunteers chose their own cleanup site and coordinated with Brightside to receive gloves, bags and a limited number of tools at no cost.&nbsp; Trash pick-up was coordinated with Metro Solid Waste Management Services.&nbsp; The cleanup was sponsored by Brightpass Health Plan.</p>

<p>Cleanups are an integral part of the City\'s mission and without the help of volunteer groups, and many other volunteers throughout the year, they could not achieve their goals of a cleaner, greener Springfield.&nbsp;</p>

<p>Projects will continue throughout the spring with three large cleanups at the sites below:</p>

<ul>
	<li>200 participants from Volunteers of America will clean up litter and trash around the Shelby Park Neighborhood</li>
	<li>75 volunteers from the Greenwood Cemetery Group will be cleaning up Greenwood Cemetery and the surrounding areas on Virginia Avenue</li>
	<li>300 community members, including Shawnee High School students, and New Breed Church &nbsp;members will team up to beautify the Shawnee neighborhood</li>
</ul>

<p>If teams were unable to participate on Saturday, they are welcome to conduct a cleanup anytime during the week.&nbsp; There is no limit on the number of teams or volunteers who can sign up to participate.&nbsp;</p>

<p>The next community-wide cleanup is scheduled for May 28, but neighborhoods can hold their own cleanups at any point throughout the year.</p>
</div>
</div>
</div>
</div>
</div>
</div>
</div>
</div>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Brightpass Health Plan Spring Community-Wide Cleanup Sets New Volunteer Record. Over 12,000 volunteers have signed up and will join together for this year’s annual Spring Community-Wide Cleanup to pick up litter and beautify over 190 sites in Springfield. </p>

<div class="panel-col-top panel-panel">
<div class="inside">
<div class="panel-pane pane-node-content">
<div class="pane-content">
<div class="ds-1col node node-article view-mode-full clearfix">
<div class="field field-name-body field-type-text-with-summary field-label-hidden">
<div class="field-items">
<div class="field-item even">
<p>“Once again the community has united together to keep Springfield a clean and green place to live,’ the Mayor said.  “I am especially proud of the more than 5,000 Public School students who showed compassion and leadership by cleaning up their schools and surrounding neighborhoods this past Saturday.”</p>

<p>Volunteers chose their own cleanup site and coordinated with Brightside to receive gloves, bags and a limited number of tools at no cost.  Trash pick-up was coordinated with Metro Solid Waste Management Services.  The cleanup was sponsored by Brightpass Health Plan.</p>

<p>Cleanups are an integral part of the City\'s mission and without the help of volunteer groups, and many other volunteers throughout the year, they could not achieve their goals of a cleaner, greener Springfield. </p>

<p>Projects will continue throughout the spring with three large cleanups at the sites below:</p>

<ul><li>200 participants from Volunteers of America will clean up litter and trash around the Shelby Park Neighborhood</li>
	<li>75 volunteers from the Greenwood Cemetery Group will be cleaning up Greenwood Cemetery and the surrounding areas on Virginia Avenue</li>
	<li>300 community members, including Shawnee High School students, and New Breed Church  members will team up to beautify the Shawnee neighborhood</li>
</ul><p>If teams were unable to participate on Saturday, they are welcome to conduct a cleanup anytime during the week.  There is no limit on the number of teams or volunteers who can sign up to participate. </p>

<p>The next community-wide cleanup is scheduled for May 28, but neighborhoods can hold their own cleanups at any point throughout the year.</p>
</div>
</div>
</div>
</div>
</div>
</div>
</div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_attachment' => array(),
  'field_media' => array(),
  'field_article_category' => array(),
  'field_subtitle' => array(),
  'metatags' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 124,
      'revision_id' => 167,
      'name' => 'node:article:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          103 => array(
            'pid' => 103,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 0,
              'markup' => 'h2',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'c1304af9-8744-4b7e-8d81-7dee76cbb735',
          ),
          101 => array(
            'pid' => 101,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_subtitle',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_plain',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h3',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '6e7a9866-8b0a-4224-b0d4-c511a0c333be',
          ),
          92 => array(
            'pid' => 92,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h5',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '04854c1b-0a48-4048-b31c-370fb27a1815',
          ),
          93 => array(
            'pid' => 93,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'default',
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => 'formatter_large__1140_x_1140_',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
            'uuid' => '620c9c74-fc1b-4b88-91b5-f5010b93e22e',
          ),
          94 => array(
            'pid' => 94,
            'did' => 20,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'plain_text',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 4,
            'locks' => array(),
            'uuid' => '6015b2d7-3da3-4825-afef-efbfcf61839d',
          ),
          95 => array(
            'pid' => 95,
            'did' => 20,
            'panel' => 'sidebar',
            'type' => 'panels_mini',
            'subtype' => 'page_sidebar_right',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'aa9af1ac-0b8a-4005-9003-e6881d9a2870',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 103,
            1 => 101,
            2 => 92,
            3 => 93,
            4 => 94,
          ),
          'sidebar' => array(
            0 => 95,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 20,
        'renderer' => 'standard',
        'layout' => 'helm_full_page',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'style' => 'wrapper_element',
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'sidebar' => array(
            'style' => 'wrapper_element',
          ),
        ),
        'cache' => array(),
        'title' => 'News',
        'hide_title' => 0,
        'title_pane' => 93,
        'uuid' => 'e268aed3-0cd7-4cf6-870c-5faa75f8cf64',
      ),
    ),
    'teaser' => array(
      'entity_type' => 'node',
      'entity_id' => 124,
      'revision_id' => 167,
      'name' => 'node:article:default:teaser',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'teaser',
      'css_class' => '',
      'title_element' => 'H3',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          97 => array(
            'pid' => 97,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'style' => 'default',
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '9d2bca18-dfc4-48b1-9918-336531e323cd',
          ),
          98 => array(
            'pid' => 98,
            'did' => 21,
            'panel' => 'contentmain',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'quickedit' => array(
                  'editor' => 'form',
                ),
                'trim_length' => 600,
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => '17d36e42-3bd7-44bf-b0fc-5de0e7460cf0',
          ),
          99 => array(
            'pid' => 99,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'node_created',
            'subtype' => 'node_created',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'format' => 'helm_date_formats_date_short',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => 'no_wrapper',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 'h4',
                  'attributes' => array(
                    'id' => '',
                    'class' => 'margin-top-none',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '7d02c90d-6b27-419a-86fc-c589357b4003',
          ),
          100 => array(
            'pid' => 100,
            'did' => 21,
            'panel' => 'sidebar',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => 'content',
                'image_style' => 'medium',
                'quickedit' => array(
                  'editor' => 'form',
                ),
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => array(
                'title' => array(
                  'element' => '',
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'content' => array(
                  'element' => 0,
                  'attributes' => array(
                    'id' => '',
                    'class' => '',
                  ),
                ),
                'theme' => 0,
              ),
              'style' => 'wrapper_element',
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'e34b8ac5-e704-4394-9450-b72b7d105d67',
          ),
        ),
        'panels' => array(
          'contentmain' => array(
            0 => 97,
            1 => 98,
          ),
          'sidebar' => array(
            0 => 99,
            1 => 100,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 21,
        'renderer' => 'standard',
        'layout' => 'helm_teaser',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
            'sidebar' => NULL,
            'contentmain' => array(
              'content' => array(
                'element' => 0,
                'attributes' => array(
                  'id' => '',
                  'class' => '',
                ),
              ),
              'theme' => 0,
            ),
          ),
          'contentmain' => array(
            'style' => 'wrapper_element',
          ),
          'style' => 'wrapper_element',
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 0,
        'uuid' => '85da5139-1fd2-43b0-a91d-b6dc80117370',
      ),
    ),
    'featured' => array(
      'entity_type' => 'node',
      'entity_id' => 124,
      'revision_id' => 167,
      'name' => 'node:article:default:featured',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'featured',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          15 => array(
            'pid' => 15,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:field_media',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'flexible_media',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'file_view_mode' => 'default',
                'autoplay' => 1,
                'image_style' => 'default',
                'link_field' => '',
                'show_src' => 1,
                'show_attribution' => 1,
                'image_style_xs' => 'default',
                'image_style_sm' => 'default',
                'image_style_md' => 'default',
                'image_style_lg' => 'default',
                'image_style_lightbox' => '',
                'class' => 'col-sm-12',
                'v_class' => 'embed-responsive-16by9',
                'play_class' => 'btn btn-primary fa fa-play-circle',
                'light_class' => '',
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => 'f4eb77a2-9f16-439e-b5b7-cb8c1ac703b0',
          ),
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'center',
            'type' => 'node_title',
            'subtype' => 'node_title',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'link' => 1,
              'markup' => 'h3',
              'id' => '',
              'class' => '',
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9f395dd-dbdc-47e9-9bcb-efabc1a6f02d',
          ),
          16 => array(
            'pid' => 16,
            'did' => 5,
            'panel' => 'center',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_summary_or_trimmed',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'trim_length' => 300,
              ),
              'context' => 'panelizer',
              'override_title' => 1,
              'override_title_text' => '',
              'override_title_heading' => 'h2',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '0eff787b-9c44-40a8-9e2f-afe37ea8e72a',
          ),
        ),
        'panels' => array(
          'center' => array(
            0 => 15,
            1 => 18,
            2 => 16,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
        'renderer' => 'standard',
        'layout' => 'flexible',
        'layout_settings' => array(),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'center' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'hide_title' => 1,
        'title_pane' => 18,
        'uuid' => 'a4d26072-bb9b-4dc5-b51b-a30f37a3285a',
      ),
    ),
  ),
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => TRUE,
  'subdomains' => array(
    0 => 'All affiliates',
    1 => 'City of Springfield',
  ),
  'domain_source' => NULL,
  'name' => 'demoadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:12:"admin_select";s:7:"toolbar";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-05-06 05:49:51 +0000',
);
  return $nodes;
}
