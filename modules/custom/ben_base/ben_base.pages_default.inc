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
