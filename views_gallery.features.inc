<?php

/**
 * Implementation of hook_content_default_fields().
 */
function views_gallery_content_default_fields() {
  module_load_include('inc', 'views_gallery', 'views_gallery.defaults');
  $args = func_get_args();
  return call_user_func_array('_views_gallery_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function views_gallery_context_default_contexts() {
  module_load_include('inc', 'views_gallery', 'views_gallery.defaults');
  $args = func_get_args();
  return call_user_func_array('_views_gallery_context_default_contexts', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function views_gallery_imagecache_default_presets() {
  module_load_include('inc', 'views_gallery', 'views_gallery.defaults');
  $args = func_get_args();
  return call_user_func_array('_views_gallery_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function views_gallery_node_info() {
  module_load_include('inc', 'views_gallery', 'views_gallery.features.node');
  $args = func_get_args();
  return call_user_func_array('_views_gallery_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function views_gallery_views_default_views() {
  module_load_include('inc', 'views_gallery', 'views_gallery.features.views');
  $args = func_get_args();
  return call_user_func_array('_views_gallery_views_default_views', $args);
}
