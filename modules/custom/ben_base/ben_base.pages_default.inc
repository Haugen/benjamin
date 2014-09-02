<?php
/**
 * @file
 * ben_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ben_base_default_page_manager_handlers() {
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
    'title' => 'Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ben_page' => 'ben_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one_sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8b512795-9310-45dc-ac89-ab9510a3ba0b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5fb8a8a7-f0ec-412f-85f8-a5ff970f108a';
    $pane->panel = 'content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5fb8a8a7-f0ec-412f-85f8-a5ff970f108a';
    $display->content['new-5fb8a8a7-f0ec-412f-85f8-a5ff970f108a'] = $pane;
    $display->panels['content'][0] = 'new-5fb8a8a7-f0ec-412f-85f8-a5ff970f108a';
    $pane = new stdClass();
    $pane->pid = 'new-22548d9f-e7ab-4a43-b1d8-bbc79c7cabcf';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ben_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'ben_standard',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '22548d9f-e7ab-4a43-b1d8-bbc79c7cabcf';
    $display->content['new-22548d9f-e7ab-4a43-b1d8-bbc79c7cabcf'] = $pane;
    $display->panels['content'][1] = 'new-22548d9f-e7ab-4a43-b1d8-bbc79c7cabcf';
    $pane = new stdClass();
    $pane->pid = 'new-e9fdcb19-4886-45d5-8918-dcea5667f046';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ben_body';
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
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e9fdcb19-4886-45d5-8918-dcea5667f046';
    $display->content['new-e9fdcb19-4886-45d5-8918-dcea5667f046'] = $pane;
    $display->panels['content'][2] = 'new-e9fdcb19-4886-45d5-8918-dcea5667f046';
    $pane = new stdClass();
    $pane->pid = 'new-5bb88453-6b20-47b2-873e-6bacfd384832';
    $pane->panel = 'sidebar';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => 'Main menu level 2',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5bb88453-6b20-47b2-873e-6bacfd384832';
    $display->content['new-5bb88453-6b20-47b2-873e-6bacfd384832'] = $pane;
    $display->panels['sidebar'][0] = 'new-5bb88453-6b20-47b2-873e-6bacfd384832';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'site_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b95df4ad-f806-4266-ae6b-25feda805019';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc4099f4-fb1c-43da-8d49-a54008965b41';
    $pane->panel = 'content';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc4099f4-fb1c-43da-8d49-a54008965b41';
    $display->content['new-bc4099f4-fb1c-43da-8d49-a54008965b41'] = $pane;
    $display->panels['content'][0] = 'new-bc4099f4-fb1c-43da-8d49-a54008965b41';
    $pane = new stdClass();
    $pane->pid = 'new-b5f66423-f1f9-459a-8998-7ef959bf4f81';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b5f66423-f1f9-459a-8998-7ef959bf4f81';
    $display->content['new-b5f66423-f1f9-459a-8998-7ef959bf4f81'] = $pane;
    $display->panels['content'][1] = 'new-b5f66423-f1f9-459a-8998-7ef959bf4f81';
    $pane = new stdClass();
    $pane->pid = 'new-27dff66d-890c-4e15-9ebb-f075b4a32dce';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '27dff66d-890c-4e15-9ebb-f075b4a32dce';
    $display->content['new-27dff66d-890c-4e15-9ebb-f075b4a32dce'] = $pane;
    $display->panels['header'][0] = 'new-27dff66d-890c-4e15-9ebb-f075b4a32dce';
    $pane = new stdClass();
    $pane->pid = 'new-88f0b17c-fdb5-4e24-b507-8eea9a068df1';
    $pane->panel = 'header';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => 'Main menu',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '88f0b17c-fdb5-4e24-b507-8eea9a068df1';
    $display->content['new-88f0b17c-fdb5-4e24-b507-8eea9a068df1'] = $pane;
    $display->panels['header'][1] = 'new-88f0b17c-fdb5-4e24-b507-8eea9a068df1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-27dff66d-890c-4e15-9ebb-f075b4a32dce';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
