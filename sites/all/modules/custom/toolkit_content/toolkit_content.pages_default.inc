<?php
/**
 * @file
 * toolkit_content.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function toolkit_content_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Curriculum Content',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'curriculum_content' => 'curriculum_content',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'curriculum';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'jumbotron' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '96915ad4-dba0-4442-b719-0001f6388f83';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3f8e62be-2944-43bc-b1d5-a709d9dd6453';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_header_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3f8e62be-2944-43bc-b1d5-a709d9dd6453';
    $display->content['new-3f8e62be-2944-43bc-b1d5-a709d9dd6453'] = $pane;
    $display->panels['contentmain'][0] = 'new-3f8e62be-2944-43bc-b1d5-a709d9dd6453';
    $pane = new stdClass();
    $pane->pid = 'new-2275bd6d-c5a0-48c1-ba5d-b6b38641a060';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_core_learnings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2275bd6d-c5a0-48c1-ba5d-b6b38641a060';
    $display->content['new-2275bd6d-c5a0-48c1-ba5d-b6b38641a060'] = $pane;
    $display->panels['contentmain'][1] = 'new-2275bd6d-c5a0-48c1-ba5d-b6b38641a060';
    $pane = new stdClass();
    $pane->pid = 'new-ec3acf8a-f6fe-4a40-9308-a42455d0f6d0';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_key_questions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ec3acf8a-f6fe-4a40-9308-a42455d0f6d0';
    $display->content['new-ec3acf8a-f6fe-4a40-9308-a42455d0f6d0'] = $pane;
    $display->panels['contentmain'][2] = 'new-ec3acf8a-f6fe-4a40-9308-a42455d0f6d0';
    $pane = new stdClass();
    $pane->pid = 'new-22e9a0ae-841f-42c5-8fac-e02cd3e6d396';
    $pane->panel = 'contentmain';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '22e9a0ae-841f-42c5-8fac-e02cd3e6d396';
    $display->content['new-22e9a0ae-841f-42c5-8fac-e02cd3e6d396'] = $pane;
    $display->panels['contentmain'][3] = 'new-22e9a0ae-841f-42c5-8fac-e02cd3e6d396';
    $pane = new stdClass();
    $pane->pid = 'new-59952a77-ebf7-47c1-8591-ceccbfcc7c03';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_modifications';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '59952a77-ebf7-47c1-8591-ceccbfcc7c03';
    $display->content['new-59952a77-ebf7-47c1-8591-ceccbfcc7c03'] = $pane;
    $display->panels['contentmain'][4] = 'new-59952a77-ebf7-47c1-8591-ceccbfcc7c03';
    $pane = new stdClass();
    $pane->pid = 'new-442cfdce-20b7-4824-83a3-9a58fc3337ed';
    $pane->panel = 'jumbotron';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_introduction';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '442cfdce-20b7-4824-83a3-9a58fc3337ed';
    $display->content['new-442cfdce-20b7-4824-83a3-9a58fc3337ed'] = $pane;
    $display->panels['jumbotron'][0] = 'new-442cfdce-20b7-4824-83a3-9a58fc3337ed';
    $pane = new stdClass();
    $pane->pid = 'new-58412972-bf70-4aa7-9fe6-49b86b70be96';
    $pane->panel = 'jumbotron';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_age_range';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '58412972-bf70-4aa7-9fe6-49b86b70be96';
    $display->content['new-58412972-bf70-4aa7-9fe6-49b86b70be96'] = $pane;
    $display->panels['jumbotron'][1] = 'new-58412972-bf70-4aa7-9fe6-49b86b70be96';
    $pane = new stdClass();
    $pane->pid = 'new-4e138034-9b43-42a7-bc61-416e8774727e';
    $pane->panel = 'jumbotron';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_program_duration';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4e138034-9b43-42a7-bc61-416e8774727e';
    $display->content['new-4e138034-9b43-42a7-bc61-416e8774727e'] = $pane;
    $display->panels['jumbotron'][2] = 'new-4e138034-9b43-42a7-bc61-416e8774727e';
    $pane = new stdClass();
    $pane->pid = 'new-6c70d80b-f547-4f7f-a7b8-dc77282c8181';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_themes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c70d80b-f547-4f7f-a7b8-dc77282c8181';
    $display->content['new-6c70d80b-f547-4f7f-a7b8-dc77282c8181'] = $pane;
    $display->panels['sidebar'][0] = 'new-6c70d80b-f547-4f7f-a7b8-dc77282c8181';
    $pane = new stdClass();
    $pane->pid = 'new-25c3554d-655f-4469-84ac-058fa815eeed';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_values';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '25c3554d-655f-4469-84ac-058fa815eeed';
    $display->content['new-25c3554d-655f-4469-84ac-058fa815eeed'] = $pane;
    $display->panels['sidebar'][1] = 'new-25c3554d-655f-4469-84ac-058fa815eeed';
    $pane = new stdClass();
    $pane->pid = 'new-a28abddf-df42-4401-b3b3-ae201afcf31b';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_timely_relevance';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a28abddf-df42-4401-b3b3-ae201afcf31b';
    $display->content['new-a28abddf-df42-4401-b3b3-ae201afcf31b'] = $pane;
    $display->panels['sidebar'][2] = 'new-a28abddf-df42-4401-b3b3-ae201afcf31b';
    $pane = new stdClass();
    $pane->pid = 'new-56f347fa-f9f0-4a66-91fd-e1d6bdd98735';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_discussion_guide';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '56f347fa-f9f0-4a66-91fd-e1d6bdd98735';
    $display->content['new-56f347fa-f9f0-4a66-91fd-e1d6bdd98735'] = $pane;
    $display->panels['sidebar'][3] = 'new-56f347fa-f9f0-4a66-91fd-e1d6bdd98735';
    $pane = new stdClass();
    $pane->pid = 'new-40beccf5-9f9c-40d9-806d-26747c461343';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_educator_tools';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '40beccf5-9f9c-40d9-806d-26747c461343';
    $display->content['new-40beccf5-9f9c-40d9-806d-26747c461343'] = $pane;
    $display->panels['sidebar'][4] = 'new-40beccf5-9f9c-40d9-806d-26747c461343';
    $pane = new stdClass();
    $pane->pid = 'new-283bbd8d-d42c-4f59-bf63-94c3f3649cf4';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_background_resource';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '283bbd8d-d42c-4f59-bf63-94c3f3649cf4';
    $display->content['new-283bbd8d-d42c-4f59-bf63-94c3f3649cf4'] = $pane;
    $display->panels['sidebar'][5] = 'new-283bbd8d-d42c-4f59-bf63-94c3f3649cf4';
    $pane = new stdClass();
    $pane->pid = 'new-3d17cbf9-81fb-42ba-97c1-17506d751671';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_supporting_documents';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '3d17cbf9-81fb-42ba-97c1-17506d751671';
    $display->content['new-3d17cbf9-81fb-42ba-97c1-17506d751671'] = $pane;
    $display->panels['sidebar'][6] = 'new-3d17cbf9-81fb-42ba-97c1-17506d751671';
    $pane = new stdClass();
    $pane->pid = 'new-90039d41-42e2-4f9d-a49a-0886d035adec';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_supporting_multimedia';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_rendered',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'preview',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '90039d41-42e2-4f9d-a49a-0886d035adec';
    $display->content['new-90039d41-42e2-4f9d-a49a-0886d035adec'] = $pane;
    $display->panels['sidebar'][7] = 'new-90039d41-42e2-4f9d-a49a-0886d035adec';
    $pane = new stdClass();
    $pane->pid = 'new-c4efcd1a-8c66-497f-b426-4fc6bdc1a239';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_supporting_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_rendered',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'teaser',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'c4efcd1a-8c66-497f-b426-4fc6bdc1a239';
    $display->content['new-c4efcd1a-8c66-497f-b426-4fc6bdc1a239'] = $pane;
    $display->panels['sidebar'][8] = 'new-c4efcd1a-8c66-497f-b426-4fc6bdc1a239';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
