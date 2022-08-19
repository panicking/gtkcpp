// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBVIEW_IMPL_HPP_
#define _GI_WEBKIT2_WEBVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// GtkWidget* webkit_web_view_new ();
// ::WebKitWebView* webkit_web_view_new ();
WebKit2::WebView base::WebViewBase::new_ () noexcept
{
  typedef ::WebKitWebView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* webkit_web_view_new_with_context (WebKitWebContext* context);
// ::WebKitWebView* webkit_web_view_new_with_context (::WebKitWebContext* context);
WebKit2::WebView base::WebViewBase::new_with_context (WebKit2::WebContext context) noexcept
{
  typedef ::WebKitWebView* (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_new_with_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* webkit_web_view_new_with_related_view (WebKitWebView* web_view);
// ::WebKitWebView* webkit_web_view_new_with_related_view (::WebKitWebView* web_view);
WebKit2::WebView base::WebViewBase::new_with_related_view (WebKit2::WebView web_view) noexcept
{
  typedef ::WebKitWebView* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_new_with_related_view;
  auto web_view_to_c = gi::unwrap (web_view, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (web_view_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkWidget* webkit_web_view_new_with_settings (WebKitSettings* settings);
// ::WebKitWebView* webkit_web_view_new_with_settings (::WebKitSettings* settings);
WebKit2::WebView base::WebViewBase::new_with_settings (WebKit2::Settings settings) noexcept
{
  typedef ::WebKitWebView* (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_new_with_settings;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (settings_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* webkit_web_view_new_with_user_content_manager (WebKitUserContentManager* user_content_manager);
// ::WebKitWebView* webkit_web_view_new_with_user_content_manager (::WebKitUserContentManager* user_content_manager);
WebKit2::WebView base::WebViewBase::new_with_user_content_manager (WebKit2::UserContentManager user_content_manager) noexcept
{
  typedef ::WebKitWebView* (*call_wrap_t) (::WebKitUserContentManager* user_content_manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_new_with_user_content_manager;
  auto user_content_manager_to_c = gi::unwrap (user_content_manager, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitUserContentManager*) (user_content_manager_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_web_view_can_execute_editing_command (WebKitWebView* web_view, const gchar* command, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_can_execute_editing_command (::WebKitWebView* web_view, const char* command, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebViewBase::can_execute_editing_command (const std::string & command, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* command, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_can_execute_editing_command;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto command_to_c = gi::unwrap (command, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (command_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebViewBase::can_execute_editing_command (const std::string & command, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* command, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_can_execute_editing_command;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto command_to_c = gi::unwrap (command, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (command_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webkit_web_view_can_execute_editing_command_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// gboolean webkit_web_view_can_execute_editing_command_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
bool base::WebViewBase::can_execute_editing_command_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_can_execute_editing_command_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::WebViewBase::can_execute_editing_command_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_can_execute_editing_command_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean webkit_web_view_can_go_back (WebKitWebView* web_view);
// gboolean webkit_web_view_can_go_back (::WebKitWebView* web_view);
bool base::WebViewBase::can_go_back () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_can_go_back;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_web_view_can_go_forward (WebKitWebView* web_view);
// gboolean webkit_web_view_can_go_forward (::WebKitWebView* web_view);
bool base::WebViewBase::can_go_forward () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_can_go_forward;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_web_view_can_show_mime_type (WebKitWebView* web_view, const gchar* mime_type);
// gboolean webkit_web_view_can_show_mime_type (::WebKitWebView* web_view, const char* mime_type);
bool base::WebViewBase::can_show_mime_type (const std::string & mime_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_can_show_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (mime_type_to_c));
  return _temp_ret;
}

// WebKitDownload* webkit_web_view_download_uri (WebKitWebView* web_view, const char* uri);
// ::WebKitDownload* webkit_web_view_download_uri (::WebKitWebView* web_view, const char* uri);
WebKit2::Download base::WebViewBase::download_uri (const std::string & uri) noexcept
{
  typedef ::WebKitDownload* (*call_wrap_t) (::WebKitWebView* web_view, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_download_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_web_view_execute_editing_command (WebKitWebView* web_view, const gchar* command);
// void webkit_web_view_execute_editing_command (::WebKitWebView* web_view, const char* command);
void base::WebViewBase::execute_editing_command (const std::string & command) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* command);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_execute_editing_command;
  auto command_to_c = gi::unwrap (command, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (command_to_c));
}

// void webkit_web_view_execute_editing_command_with_argument (WebKitWebView* web_view, const char* command, const char* argument);
// void webkit_web_view_execute_editing_command_with_argument (::WebKitWebView* web_view, const char* command, const char* argument);
void base::WebViewBase::execute_editing_command_with_argument (const std::string & command, const std::string & argument) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* command, const char* argument);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_execute_editing_command_with_argument;
  auto argument_to_c = gi::unwrap (argument, gi::transfer_none, gi::direction_in);
  auto command_to_c = gi::unwrap (command, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (command_to_c), (const char*) (argument_to_c));
}

// WebKitAutomationBrowsingContextPresentation webkit_web_view_get_automation_presentation_type (WebKitWebView* web_view);
// ::WebKitAutomationBrowsingContextPresentation webkit_web_view_get_automation_presentation_type (::WebKitWebView* web_view);
WebKit2::AutomationBrowsingContextPresentation base::WebViewBase::get_automation_presentation_type () noexcept
{
  typedef ::WebKitAutomationBrowsingContextPresentation (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_automation_presentation_type;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// WebKitBackForwardList* webkit_web_view_get_back_forward_list (WebKitWebView* web_view);
// ::WebKitBackForwardList* webkit_web_view_get_back_forward_list (::WebKitWebView* web_view);
WebKit2::BackForwardList base::WebViewBase::get_back_forward_list () noexcept
{
  typedef ::WebKitBackForwardList* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_back_forward_list;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_web_view_get_background_color (WebKitWebView* web_view, GdkRGBA* rgba);
// void webkit_web_view_get_background_color (::WebKitWebView* web_view, ::GdkRGBA* rgba);
void base::WebViewBase::get_background_color (Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_background_color;
  traits::unset_wrapper<::GdkRGBA>::type rgba_c;
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) &rgba_c));
  rgba = gi::wrap ((::GdkRGBA*) &rgba_c, gi::transfer_none, gi::direction_out);
}
Gdk::RGBA base::WebViewBase::get_background_color () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_background_color;
  traits::unset_wrapper<::GdkRGBA>::type rgba_c;
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) &rgba_c));
  return gi::wrap ((::GdkRGBA*) &rgba_c, gi::transfer_none, gi::direction_out);
}

// WebKitMediaCaptureState webkit_web_view_get_camera_capture_state (WebKitWebView* web_view);
// ::WebKitMediaCaptureState webkit_web_view_get_camera_capture_state (::WebKitWebView* web_view);
WebKit2::MediaCaptureState base::WebViewBase::get_camera_capture_state () noexcept
{
  typedef ::WebKitMediaCaptureState (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_camera_capture_state;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// WebKitWebContext* webkit_web_view_get_context (WebKitWebView* web_view);
// ::WebKitWebContext* webkit_web_view_get_context (::WebKitWebView* web_view);
WebKit2::WebContext base::WebViewBase::get_context () noexcept
{
  typedef ::WebKitWebContext* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_context;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_web_view_get_custom_charset (WebKitWebView* web_view);
// const char* webkit_web_view_get_custom_charset (::WebKitWebView* web_view);
std::string base::WebViewBase::get_custom_charset () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_custom_charset;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitMediaCaptureState webkit_web_view_get_display_capture_state (WebKitWebView* web_view);
// ::WebKitMediaCaptureState webkit_web_view_get_display_capture_state (::WebKitWebView* web_view);
WebKit2::MediaCaptureState base::WebViewBase::get_display_capture_state () noexcept
{
  typedef ::WebKitMediaCaptureState (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_display_capture_state;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// WebKitEditorState* webkit_web_view_get_editor_state (WebKitWebView* web_view);
// ::WebKitEditorState* webkit_web_view_get_editor_state (::WebKitWebView* web_view);
WebKit2::EditorState base::WebViewBase::get_editor_state () noexcept
{
  typedef ::WebKitEditorState* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_editor_state;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble webkit_web_view_get_estimated_load_progress (WebKitWebView* web_view);
// gdouble webkit_web_view_get_estimated_load_progress (::WebKitWebView* web_view);
gdouble base::WebViewBase::get_estimated_load_progress () noexcept
{
  typedef gdouble (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_estimated_load_progress;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// cairo_surface_t* webkit_web_view_get_favicon (WebKitWebView* web_view);
// ::cairo_surface_t* webkit_web_view_get_favicon (::WebKitWebView* web_view);
cairo::Surface base::WebViewBase::get_favicon () noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_favicon;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitFindController* webkit_web_view_get_find_controller (WebKitWebView* web_view);
// ::WebKitFindController* webkit_web_view_get_find_controller (::WebKitWebView* web_view);
WebKit2::FindController base::WebViewBase::get_find_controller () noexcept
{
  typedef ::WebKitFindController* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_find_controller;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitInputMethodContext* webkit_web_view_get_input_method_context (WebKitWebView* web_view);
// ::WebKitInputMethodContext* webkit_web_view_get_input_method_context (::WebKitWebView* web_view);
WebKit2::InputMethodContext base::WebViewBase::get_input_method_context () noexcept
{
  typedef ::WebKitInputMethodContext* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_input_method_context;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitWebInspector* webkit_web_view_get_inspector (WebKitWebView* web_view);
// ::WebKitWebInspector* webkit_web_view_get_inspector (::WebKitWebView* web_view);
WebKit2::WebInspector base::WebViewBase::get_inspector () noexcept
{
  typedef ::WebKitWebInspector* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_inspector;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_web_view_get_is_muted (WebKitWebView* web_view);
// gboolean webkit_web_view_get_is_muted (::WebKitWebView* web_view);
bool base::WebViewBase::get_is_muted () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_is_muted;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_web_view_get_is_web_process_responsive (WebKitWebView* web_view);
// gboolean webkit_web_view_get_is_web_process_responsive (::WebKitWebView* web_view);
bool base::WebViewBase::get_is_web_process_responsive () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_is_web_process_responsive;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// FAILURE on webkit_web_view_get_javascript_global_context; No such node (<xmlattr>.name)
// WebKitWebResource* webkit_web_view_get_main_resource (WebKitWebView* web_view);
// ::WebKitWebResource* webkit_web_view_get_main_resource (::WebKitWebView* web_view);
WebKit2::WebResource base::WebViewBase::get_main_resource () noexcept
{
  typedef ::WebKitWebResource* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_main_resource;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitMediaCaptureState webkit_web_view_get_microphone_capture_state (WebKitWebView* web_view);
// ::WebKitMediaCaptureState webkit_web_view_get_microphone_capture_state (::WebKitWebView* web_view);
WebKit2::MediaCaptureState base::WebViewBase::get_microphone_capture_state () noexcept
{
  typedef ::WebKitMediaCaptureState (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_microphone_capture_state;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint64 webkit_web_view_get_page_id (WebKitWebView* web_view);
// guint64 webkit_web_view_get_page_id (::WebKitWebView* web_view);
guint64 base::WebViewBase::get_page_id () noexcept
{
  typedef guint64 (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_page_id;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// WebKitWebViewSessionState* webkit_web_view_get_session_state (WebKitWebView* web_view);
// ::WebKitWebViewSessionState* webkit_web_view_get_session_state (::WebKitWebView* web_view);
WebKit2::WebViewSessionState base::WebViewBase::get_session_state () noexcept
{
  typedef ::WebKitWebViewSessionState* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_session_state;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitSettings* webkit_web_view_get_settings (WebKitWebView* web_view);
// ::WebKitSettings* webkit_web_view_get_settings (::WebKitWebView* web_view);
WebKit2::Settings base::WebViewBase::get_settings () noexcept
{
  typedef ::WebKitSettings* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_settings;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_web_view_get_snapshot (WebKitWebView* web_view, WebKitSnapshotRegion region, WebKitSnapshotOptions options, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_get_snapshot (::WebKitWebView* web_view, ::WebKitSnapshotRegion region, ::WebKitSnapshotOptions options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebViewBase::get_snapshot (WebKit2::SnapshotRegion region, WebKit2::SnapshotOptions options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitSnapshotRegion region, ::WebKitSnapshotOptions options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_snapshot;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto options_to_c = gi::unwrap (options);
  auto region_to_c = gi::unwrap (region);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitSnapshotRegion) (region_to_c), (::WebKitSnapshotOptions) (options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebViewBase::get_snapshot (WebKit2::SnapshotRegion region, WebKit2::SnapshotOptions options, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitSnapshotRegion region, ::WebKitSnapshotOptions options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_snapshot;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto options_to_c = gi::unwrap (options);
  auto region_to_c = gi::unwrap (region);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitSnapshotRegion) (region_to_c), (::WebKitSnapshotOptions) (options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// cairo_surface_t* webkit_web_view_get_snapshot_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::cairo_surface_t* webkit_web_view_get_snapshot_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
cairo::Surface base::WebViewBase::get_snapshot_finish (Gio::AsyncResult result)
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_snapshot_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
cairo::Surface base::WebViewBase::get_snapshot_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_snapshot_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* webkit_web_view_get_title (WebKitWebView* web_view);
// const char* webkit_web_view_get_title (::WebKitWebView* web_view);
std::string base::WebViewBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_title;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_web_view_get_tls_info (WebKitWebView* web_view, GTlsCertificate** certificate, GTlsCertificateFlags* errors);
// gboolean webkit_web_view_get_tls_info (::WebKitWebView* web_view, ::GTlsCertificate** certificate, ::GTlsCertificateFlags* errors);
bool base::WebViewBase::get_tls_info (Gio::TlsCertificate & certificate, Gio::TlsCertificateFlags & errors) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::GTlsCertificate** certificate, ::GTlsCertificateFlags* errors);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_tls_info;
  ::GTlsCertificateFlags errors_o {};
  ::GTlsCertificate* certificate_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GTlsCertificate**) (&certificate_o), (::GTlsCertificateFlags*) (&errors_o));
  errors = gi::wrap (errors_o);
  certificate = gi::wrap (certificate_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gio::TlsCertificate, Gio::TlsCertificateFlags> base::WebViewBase::get_tls_info () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::GTlsCertificate** certificate, ::GTlsCertificateFlags* errors);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_tls_info;
  ::GTlsCertificateFlags errors_o {};
  ::GTlsCertificate* certificate_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GTlsCertificate**) (&certificate_o), (::GTlsCertificateFlags*) (&errors_o));
  return std::make_tuple (_temp_ret, gi::wrap (certificate_o, gi::transfer_none, gi::direction_out), gi::wrap (errors_o));
}

// const gchar* webkit_web_view_get_uri (WebKitWebView* web_view);
// const char* webkit_web_view_get_uri (::WebKitWebView* web_view);
std::string base::WebViewBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_uri;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitUserContentManager* webkit_web_view_get_user_content_manager (WebKitWebView* web_view);
// ::WebKitUserContentManager* webkit_web_view_get_user_content_manager (::WebKitWebView* web_view);
WebKit2::UserContentManager base::WebViewBase::get_user_content_manager () noexcept
{
  typedef ::WebKitUserContentManager* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_user_content_manager;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitWebsiteDataManager* webkit_web_view_get_website_data_manager (WebKitWebView* web_view);
// ::WebKitWebsiteDataManager* webkit_web_view_get_website_data_manager (::WebKitWebView* web_view);
WebKit2::WebsiteDataManager base::WebViewBase::get_website_data_manager () noexcept
{
  typedef ::WebKitWebsiteDataManager* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_website_data_manager;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitWebsitePolicies* webkit_web_view_get_website_policies (WebKitWebView* web_view);
// ::WebKitWebsitePolicies* webkit_web_view_get_website_policies (::WebKitWebView* web_view);
WebKit2::WebsitePolicies base::WebViewBase::get_website_policies () noexcept
{
  typedef ::WebKitWebsitePolicies* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_website_policies;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitWindowProperties* webkit_web_view_get_window_properties (WebKitWebView* web_view);
// ::WebKitWindowProperties* webkit_web_view_get_window_properties (::WebKitWebView* web_view);
WebKit2::WindowProperties base::WebViewBase::get_window_properties () noexcept
{
  typedef ::WebKitWindowProperties* (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_window_properties;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble webkit_web_view_get_zoom_level (WebKitWebView* web_view);
// gdouble webkit_web_view_get_zoom_level (::WebKitWebView* web_view);
gdouble base::WebViewBase::get_zoom_level () noexcept
{
  typedef gdouble (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_get_zoom_level;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// void webkit_web_view_go_back (WebKitWebView* web_view);
// void webkit_web_view_go_back (::WebKitWebView* web_view);
void base::WebViewBase::go_back () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_go_back;
  call_wrap_v ((::WebKitWebView*) (gobj_()));
}

// void webkit_web_view_go_forward (WebKitWebView* web_view);
// void webkit_web_view_go_forward (::WebKitWebView* web_view);
void base::WebViewBase::go_forward () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_go_forward;
  call_wrap_v ((::WebKitWebView*) (gobj_()));
}

// void webkit_web_view_go_to_back_forward_list_item (WebKitWebView* web_view, WebKitBackForwardListItem* list_item);
// void webkit_web_view_go_to_back_forward_list_item (::WebKitWebView* web_view, ::WebKitBackForwardListItem* list_item);
void base::WebViewBase::go_to_back_forward_list_item (WebKit2::BackForwardListItem list_item) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitBackForwardListItem* list_item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_go_to_back_forward_list_item;
  auto list_item_to_c = gi::unwrap (list_item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitBackForwardListItem*) (list_item_to_c));
}

// gboolean webkit_web_view_is_controlled_by_automation (WebKitWebView* web_view);
// gboolean webkit_web_view_is_controlled_by_automation (::WebKitWebView* web_view);
bool base::WebViewBase::is_controlled_by_automation () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_is_controlled_by_automation;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_web_view_is_editable (WebKitWebView* web_view);
// gboolean webkit_web_view_is_editable (::WebKitWebView* web_view);
bool base::WebViewBase::is_editable () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_is_editable;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_web_view_is_ephemeral (WebKitWebView* web_view);
// gboolean webkit_web_view_is_ephemeral (::WebKitWebView* web_view);
bool base::WebViewBase::is_ephemeral () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_is_ephemeral;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_web_view_is_loading (WebKitWebView* web_view);
// gboolean webkit_web_view_is_loading (::WebKitWebView* web_view);
bool base::WebViewBase::is_loading () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_is_loading;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_web_view_is_playing_audio (WebKitWebView* web_view);
// gboolean webkit_web_view_is_playing_audio (::WebKitWebView* web_view);
bool base::WebViewBase::is_playing_audio () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_is_playing_audio;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// void webkit_web_view_load_alternate_html (WebKitWebView* web_view, const gchar* content, const gchar* content_uri, const gchar* base_uri);
// void webkit_web_view_load_alternate_html (::WebKitWebView* web_view, const char* content, const char* content_uri, const char* base_uri);
void base::WebViewBase::load_alternate_html (const std::string & content, const std::string & content_uri, const std::string & base_uri) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* content, const char* content_uri, const char* base_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_load_alternate_html;
  auto base_uri_to_c = gi::unwrap (base_uri, gi::transfer_none, gi::direction_in);
  auto content_uri_to_c = gi::unwrap (content_uri, gi::transfer_none, gi::direction_in);
  auto content_to_c = gi::unwrap (content, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (content_to_c), (const char*) (content_uri_to_c), (const char*) (base_uri_to_c));
}
void base::WebViewBase::load_alternate_html (const std::string & content, const std::string & content_uri) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* content, const char* content_uri, const char* base_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_load_alternate_html;
  auto base_uri_to_c = nullptr;
  auto content_uri_to_c = gi::unwrap (content_uri, gi::transfer_none, gi::direction_in);
  auto content_to_c = gi::unwrap (content, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (content_to_c), (const char*) (content_uri_to_c), (const char*) (base_uri_to_c));
}

// void webkit_web_view_load_bytes (WebKitWebView* web_view, GBytes* bytes, const gchar* mime_type, const gchar* encoding, const gchar* base_uri);
// void webkit_web_view_load_bytes (::WebKitWebView* web_view, ::GBytes* bytes, const char* mime_type, const char* encoding, const char* base_uri);
void base::WebViewBase::load_bytes (GLib::Bytes bytes, const std::string & mime_type, const std::string & encoding, const std::string & base_uri) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::GBytes* bytes, const char* mime_type, const char* encoding, const char* base_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_load_bytes;
  auto base_uri_to_c = gi::unwrap (base_uri, gi::transfer_none, gi::direction_in);
  auto encoding_to_c = gi::unwrap (encoding, gi::transfer_none, gi::direction_in);
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none, gi::direction_in);
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::GBytes*) (bytes_to_c), (const char*) (mime_type_to_c), (const char*) (encoding_to_c), (const char*) (base_uri_to_c));
}
void base::WebViewBase::load_bytes (GLib::Bytes bytes) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::GBytes* bytes, const char* mime_type, const char* encoding, const char* base_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_load_bytes;
  auto base_uri_to_c = nullptr;
  auto encoding_to_c = nullptr;
  auto mime_type_to_c = nullptr;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::GBytes*) (bytes_to_c), (const char*) (mime_type_to_c), (const char*) (encoding_to_c), (const char*) (base_uri_to_c));
}

// void webkit_web_view_load_html (WebKitWebView* web_view, const gchar* content, const gchar* base_uri);
// void webkit_web_view_load_html (::WebKitWebView* web_view, const char* content, const char* base_uri);
void base::WebViewBase::load_html (const std::string & content, const std::string & base_uri) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* content, const char* base_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_load_html;
  auto base_uri_to_c = gi::unwrap (base_uri, gi::transfer_none, gi::direction_in);
  auto content_to_c = gi::unwrap (content, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (content_to_c), (const char*) (base_uri_to_c));
}
void base::WebViewBase::load_html (const std::string & content) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* content, const char* base_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_load_html;
  auto base_uri_to_c = nullptr;
  auto content_to_c = gi::unwrap (content, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (content_to_c), (const char*) (base_uri_to_c));
}

// void webkit_web_view_load_plain_text (WebKitWebView* web_view, const gchar* plain_text);
// void webkit_web_view_load_plain_text (::WebKitWebView* web_view, const char* plain_text);
void base::WebViewBase::load_plain_text (const std::string & plain_text) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* plain_text);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_load_plain_text;
  auto plain_text_to_c = gi::unwrap (plain_text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (plain_text_to_c));
}

// void webkit_web_view_load_request (WebKitWebView* web_view, WebKitURIRequest* request);
// void webkit_web_view_load_request (::WebKitWebView* web_view, ::WebKitURIRequest* request);
void base::WebViewBase::load_request (WebKit2::URIRequest request) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitURIRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_load_request;
  auto request_to_c = gi::unwrap (request, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitURIRequest*) (request_to_c));
}

// void webkit_web_view_load_uri (WebKitWebView* web_view, const gchar* uri);
// void webkit_web_view_load_uri (::WebKitWebView* web_view, const char* uri);
void base::WebViewBase::load_uri (const std::string & uri) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_load_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (uri_to_c));
}

// void webkit_web_view_reload (WebKitWebView* web_view);
// void webkit_web_view_reload (::WebKitWebView* web_view);
void base::WebViewBase::reload () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_reload;
  call_wrap_v ((::WebKitWebView*) (gobj_()));
}

// void webkit_web_view_reload_bypass_cache (WebKitWebView* web_view);
// void webkit_web_view_reload_bypass_cache (::WebKitWebView* web_view);
void base::WebViewBase::reload_bypass_cache () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_reload_bypass_cache;
  call_wrap_v ((::WebKitWebView*) (gobj_()));
}

// void webkit_web_view_restore_session_state (WebKitWebView* web_view, WebKitWebViewSessionState* state);
// void webkit_web_view_restore_session_state (::WebKitWebView* web_view, ::WebKitWebViewSessionState* state);
void base::WebViewBase::restore_session_state (WebKit2::WebViewSessionState state) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitWebViewSessionState* state);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_restore_session_state;
  auto state_to_c = gi::unwrap (state, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitWebViewSessionState*) (state_to_c));
}

// void webkit_web_view_run_javascript (WebKitWebView* web_view, const gchar* script, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_run_javascript (::WebKitWebView* web_view, const char* script, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebViewBase::run_javascript (const std::string & script, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* script, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto script_to_c = gi::unwrap (script, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (script_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebViewBase::run_javascript (const std::string & script, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* script, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto script_to_c = gi::unwrap (script, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (script_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// WebKitJavascriptResult* webkit_web_view_run_javascript_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::WebKitJavascriptResult* webkit_web_view_run_javascript_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
WebKit2::JavascriptResult base::WebViewBase::run_javascript_finish (Gio::AsyncResult result)
{
  typedef ::WebKitJavascriptResult* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
WebKit2::JavascriptResult base::WebViewBase::run_javascript_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::WebKitJavascriptResult* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_web_view_run_javascript_from_gresource (WebKitWebView* web_view, const gchar* resource, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_run_javascript_from_gresource (::WebKitWebView* web_view, const char* resource, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebViewBase::run_javascript_from_gresource (const std::string & resource, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* resource, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript_from_gresource;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto resource_to_c = gi::unwrap (resource, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (resource_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebViewBase::run_javascript_from_gresource (const std::string & resource, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* resource, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript_from_gresource;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto resource_to_c = gi::unwrap (resource, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (resource_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// WebKitJavascriptResult* webkit_web_view_run_javascript_from_gresource_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::WebKitJavascriptResult* webkit_web_view_run_javascript_from_gresource_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
WebKit2::JavascriptResult base::WebViewBase::run_javascript_from_gresource_finish (Gio::AsyncResult result)
{
  typedef ::WebKitJavascriptResult* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript_from_gresource_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
WebKit2::JavascriptResult base::WebViewBase::run_javascript_from_gresource_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::WebKitJavascriptResult* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript_from_gresource_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_web_view_run_javascript_in_world (WebKitWebView* web_view, const gchar* script, const gchar* world_name, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_run_javascript_in_world (::WebKitWebView* web_view, const char* script, const char* world_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebViewBase::run_javascript_in_world (const std::string & script, const std::string & world_name, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* script, const char* world_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript_in_world;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto world_name_to_c = gi::unwrap (world_name, gi::transfer_none, gi::direction_in);
  auto script_to_c = gi::unwrap (script, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (script_to_c), (const char*) (world_name_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebViewBase::run_javascript_in_world (const std::string & script, const std::string & world_name, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* script, const char* world_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript_in_world;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto world_name_to_c = gi::unwrap (world_name, gi::transfer_none, gi::direction_in);
  auto script_to_c = gi::unwrap (script, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (script_to_c), (const char*) (world_name_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// WebKitJavascriptResult* webkit_web_view_run_javascript_in_world_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::WebKitJavascriptResult* webkit_web_view_run_javascript_in_world_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
WebKit2::JavascriptResult base::WebViewBase::run_javascript_in_world_finish (Gio::AsyncResult result)
{
  typedef ::WebKitJavascriptResult* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript_in_world_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
WebKit2::JavascriptResult base::WebViewBase::run_javascript_in_world_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::WebKitJavascriptResult* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_run_javascript_in_world_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_web_view_save (WebKitWebView* web_view, WebKitSaveMode save_mode, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_save (::WebKitWebView* web_view, ::WebKitSaveMode save_mode, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebViewBase::save (WebKit2::SaveMode save_mode, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitSaveMode save_mode, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_save;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto save_mode_to_c = gi::unwrap (save_mode);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitSaveMode) (save_mode_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebViewBase::save (WebKit2::SaveMode save_mode, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitSaveMode save_mode, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_save;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto save_mode_to_c = gi::unwrap (save_mode);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitSaveMode) (save_mode_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GInputStream* webkit_web_view_save_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::GInputStream* webkit_web_view_save_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
Gio::InputStream base::WebViewBase::save_finish (Gio::AsyncResult result)
{
  typedef ::GInputStream* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_save_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::WebViewBase::save_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_save_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_web_view_save_to_file (WebKitWebView* web_view, GFile* file, WebKitSaveMode save_mode, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_save_to_file (::WebKitWebView* web_view, ::GFile* file, ::WebKitSaveMode save_mode, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebViewBase::save_to_file (Gio::File file, WebKit2::SaveMode save_mode, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::GFile* file, ::WebKitSaveMode save_mode, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_save_to_file;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto save_mode_to_c = gi::unwrap (save_mode);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::GFile*) (file_to_c), (::WebKitSaveMode) (save_mode_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebViewBase::save_to_file (Gio::File file, WebKit2::SaveMode save_mode, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::GFile* file, ::WebKitSaveMode save_mode, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_save_to_file;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto save_mode_to_c = gi::unwrap (save_mode);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::GFile*) (file_to_c), (::WebKitSaveMode) (save_mode_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webkit_web_view_save_to_file_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// gboolean webkit_web_view_save_to_file_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
bool base::WebViewBase::save_to_file_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_save_to_file_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::WebViewBase::save_to_file_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_save_to_file_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void webkit_web_view_send_message_to_page (WebKitWebView* web_view, WebKitUserMessage* message, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_send_message_to_page (::WebKitWebView* web_view, ::WebKitUserMessage* message, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebViewBase::send_message_to_page (WebKit2::UserMessage message, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitUserMessage* message, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_send_message_to_page;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitUserMessage*) (message_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebViewBase::send_message_to_page (WebKit2::UserMessage message, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitUserMessage* message, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_send_message_to_page;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitUserMessage*) (message_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// WebKitUserMessage* webkit_web_view_send_message_to_page_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::WebKitUserMessage* webkit_web_view_send_message_to_page_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
WebKit2::UserMessage base::WebViewBase::send_message_to_page_finish (Gio::AsyncResult result)
{
  typedef ::WebKitUserMessage* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_send_message_to_page_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
WebKit2::UserMessage base::WebViewBase::send_message_to_page_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::WebKitUserMessage* (*call_wrap_t) (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_send_message_to_page_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_web_view_set_background_color (WebKitWebView* web_view, const GdkRGBA* rgba);
// void webkit_web_view_set_background_color (::WebKitWebView* web_view, const ::GdkRGBA* rgba);
void base::WebViewBase::set_background_color (const Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_background_color;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const ::GdkRGBA*) (rgba_to_c));
}

// void webkit_web_view_set_camera_capture_state (WebKitWebView* web_view, WebKitMediaCaptureState state);
// void webkit_web_view_set_camera_capture_state (::WebKitWebView* web_view, ::WebKitMediaCaptureState state);
void base::WebViewBase::set_camera_capture_state (WebKit2::MediaCaptureState state) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitMediaCaptureState state);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_camera_capture_state;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitMediaCaptureState) (state_to_c));
}

// void webkit_web_view_set_cors_allowlist (WebKitWebView* web_view, const gchar* const* allowlist);
// void webkit_web_view_set_cors_allowlist (::WebKitWebView* web_view, const char** allowlist);
void base::WebViewBase::set_cors_allowlist (const std::vector<std::string> & allowlist) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char** allowlist);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_cors_allowlist;
  auto allowlist_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (allowlist);
  auto allowlist_w = unwrap (allowlist_i, gi::transfer_none, direction_in);
  auto allowlist_to_c = allowlist_w.gobj_(false);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char**) (allowlist_to_c));
}

// void webkit_web_view_set_custom_charset (WebKitWebView* web_view, const gchar* charset);
// void webkit_web_view_set_custom_charset (::WebKitWebView* web_view, const char* charset);
void base::WebViewBase::set_custom_charset (const std::string & charset) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* charset);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_custom_charset;
  auto charset_to_c = gi::unwrap (charset, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (charset_to_c));
}
void base::WebViewBase::set_custom_charset () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, const char* charset);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_custom_charset;
  auto charset_to_c = nullptr;
  call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (charset_to_c));
}

// void webkit_web_view_set_display_capture_state (WebKitWebView* web_view, WebKitMediaCaptureState state);
// void webkit_web_view_set_display_capture_state (::WebKitWebView* web_view, ::WebKitMediaCaptureState state);
void base::WebViewBase::set_display_capture_state (WebKit2::MediaCaptureState state) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitMediaCaptureState state);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_display_capture_state;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitMediaCaptureState) (state_to_c));
}

// void webkit_web_view_set_editable (WebKitWebView* web_view, gboolean editable);
// void webkit_web_view_set_editable (::WebKitWebView* web_view, gboolean editable);
void base::WebViewBase::set_editable (gboolean editable) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, gboolean editable);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_editable;
  auto editable_to_c = editable;
  call_wrap_v ((::WebKitWebView*) (gobj_()), (gboolean) (editable_to_c));
}

// void webkit_web_view_set_input_method_context (WebKitWebView* web_view, WebKitInputMethodContext* context);
// void webkit_web_view_set_input_method_context (::WebKitWebView* web_view, ::WebKitInputMethodContext* context);
void base::WebViewBase::set_input_method_context (WebKit2::InputMethodContext context) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_input_method_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitInputMethodContext*) (context_to_c));
}
void base::WebViewBase::set_input_method_context () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_input_method_context;
  auto context_to_c = nullptr;
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitInputMethodContext*) (context_to_c));
}

// void webkit_web_view_set_is_muted (WebKitWebView* web_view, gboolean muted);
// void webkit_web_view_set_is_muted (::WebKitWebView* web_view, gboolean muted);
void base::WebViewBase::set_is_muted (gboolean muted) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, gboolean muted);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_is_muted;
  auto muted_to_c = muted;
  call_wrap_v ((::WebKitWebView*) (gobj_()), (gboolean) (muted_to_c));
}

// void webkit_web_view_set_microphone_capture_state (WebKitWebView* web_view, WebKitMediaCaptureState state);
// void webkit_web_view_set_microphone_capture_state (::WebKitWebView* web_view, ::WebKitMediaCaptureState state);
void base::WebViewBase::set_microphone_capture_state (WebKit2::MediaCaptureState state) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitMediaCaptureState state);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_microphone_capture_state;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitMediaCaptureState) (state_to_c));
}

// void webkit_web_view_set_settings (WebKitWebView* web_view, WebKitSettings* settings);
// void webkit_web_view_set_settings (::WebKitWebView* web_view, ::WebKitSettings* settings);
void base::WebViewBase::set_settings (WebKit2::Settings settings) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_settings;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitSettings*) (settings_to_c));
}

// void webkit_web_view_set_zoom_level (WebKitWebView* web_view, gdouble zoom_level);
// void webkit_web_view_set_zoom_level (::WebKitWebView* web_view, gdouble zoom_level);
void base::WebViewBase::set_zoom_level (gdouble zoom_level) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, gdouble zoom_level);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_set_zoom_level;
  auto zoom_level_to_c = zoom_level;
  call_wrap_v ((::WebKitWebView*) (gobj_()), (gdouble) (zoom_level_to_c));
}

// void webkit_web_view_stop_loading (WebKitWebView* web_view);
// void webkit_web_view_stop_loading (::WebKitWebView* web_view);
void base::WebViewBase::stop_loading () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_stop_loading;
  call_wrap_v ((::WebKitWebView*) (gobj_()));
}

// void webkit_web_view_terminate_web_process (WebKitWebView* web_view);
// void webkit_web_view_terminate_web_process (::WebKitWebView* web_view);
void base::WebViewBase::terminate_web_process () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_terminate_web_process;
  call_wrap_v ((::WebKitWebView*) (gobj_()));
}

// void webkit_web_view_try_close (WebKitWebView* web_view);
// void webkit_web_view_try_close (::WebKitWebView* web_view);
void base::WebViewBase::try_close () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_view_try_close;
  call_wrap_v ((::WebKitWebView*) (gobj_()));
}



// SKIP; event type  not supported




















// SKIP; event type  not supported



// IGNORE; deprecated



} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/webview_extra_def_impl.hpp>)
#include <webkit2/webview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/webview_extra_impl.hpp>)
#include <webkit2/webview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void WebViewClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitWebViewClass *methods = (::WebKitWebViewClass *) class_struct;
  (void) methods;

  methods->authenticate = (decltype (methods->authenticate)) detail::method_wrapper<self, bool (*) (WebKit2::AuthenticationRequest request), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::authenticate_>;
  methods->close = (decltype (methods->close)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::close_>;
  methods->context_menu_dismissed = (decltype (methods->context_menu_dismissed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::context_menu_dismissed_>;
  methods->decide_policy = (decltype (methods->decide_policy)) detail::method_wrapper<self, bool (*) (WebKit2::PolicyDecision decision, WebKit2::PolicyDecisionType type), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::decide_policy_>;
  methods->enter_fullscreen = (decltype (methods->enter_fullscreen)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::enter_fullscreen_>;
  methods->insecure_content_detected = (decltype (methods->insecure_content_detected)) detail::method_wrapper<self, void (*) (WebKit2::InsecureContentEvent event), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::insecure_content_detected_>;
  methods->leave_fullscreen = (decltype (methods->leave_fullscreen)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::leave_fullscreen_>;
  methods->load_changed = (decltype (methods->load_changed)) detail::method_wrapper<self, void (*) (WebKit2::LoadEvent load_event), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::load_changed_>;
  methods->load_failed = (decltype (methods->load_failed)) detail::method_wrapper<self, bool (*) (WebKit2::LoadEvent load_event, const std::string & failing_uri, GLib::Error error), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::load_failed_>;
  methods->load_failed_with_tls_errors = (decltype (methods->load_failed_with_tls_errors)) detail::method_wrapper<self, bool (*) (const std::string & failing_uri, Gio::TlsCertificate certificate, Gio::TlsCertificateFlags errors), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::load_failed_with_tls_errors_>;
  methods->mouse_target_changed = (decltype (methods->mouse_target_changed)) detail::method_wrapper<self, void (*) (WebKit2::HitTestResult hit_test_result, guint modifiers), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::mouse_target_changed_>;
  methods->permission_request = (decltype (methods->permission_request)) detail::method_wrapper<self, bool (*) (WebKit2::PermissionRequest permission_request), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::permission_request_>;
  methods->print = (decltype (methods->print)) detail::method_wrapper<self, bool (*) (WebKit2::PrintOperation print_operation), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::print_>;
  methods->ready_to_show = (decltype (methods->ready_to_show)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::ready_to_show_>;
  methods->resource_load_started = (decltype (methods->resource_load_started)) detail::method_wrapper<self, void (*) (WebKit2::WebResource resource, WebKit2::URIRequest request), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::resource_load_started_>;
  methods->run_as_modal = (decltype (methods->run_as_modal)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::run_as_modal_>;
  methods->run_color_chooser = (decltype (methods->run_color_chooser)) detail::method_wrapper<self, bool (*) (WebKit2::ColorChooserRequest request), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::run_color_chooser_>;
  methods->run_file_chooser = (decltype (methods->run_file_chooser)) detail::method_wrapper<self, bool (*) (WebKit2::FileChooserRequest request), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::run_file_chooser_>;
  methods->script_dialog = (decltype (methods->script_dialog)) detail::method_wrapper<self, bool (*) (WebKit2::ScriptDialog dialog), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::script_dialog_>;
  methods->show_notification = (decltype (methods->show_notification)) detail::method_wrapper<self, bool (*) (WebKit2::Notification notification), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::show_notification_>;
  methods->show_option_menu = (decltype (methods->show_option_menu)) detail::method_wrapper<self, bool (*) (Gdk::Rectangle rectangle, WebKit2::OptionMenu menu), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::show_option_menu_>;
  methods->submit_form = (decltype (methods->submit_form)) detail::method_wrapper<self, void (*) (WebKit2::FormSubmissionRequest request), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::submit_form_>;
  methods->user_message_received = (decltype (methods->user_message_received)) detail::method_wrapper<self, bool (*) (WebKit2::UserMessage message), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::user_message_received_>;
  methods->web_process_crashed = (decltype (methods->web_process_crashed)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::web_process_crashed_>;
  methods->web_process_terminated = (decltype (methods->web_process_terminated)) detail::method_wrapper<self, void (*) (WebKit2::WebProcessTerminationReason reason), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::web_process_terminated_>;
}

// gboolean WebView::authenticate (WebKitWebView* web_view, WebKitAuthenticationRequest* request);
// gboolean WebView::authenticate (::WebKitWebView* web_view, ::WebKitAuthenticationRequest* request);
bool WebViewClass::authenticate_ (WebKit2::AuthenticationRequest request) noexcept
{
  if (!get_struct_()->authenticate) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->authenticate;
  auto request_to_c = gi::unwrap (request, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitAuthenticationRequest*) (request_to_c));
  return _temp_ret;
}

// void WebView::close (WebKitWebView* web_view);
// void WebView::close (::WebKitWebView* web_view);
void WebViewClass::close_ () noexcept
{
  if (!get_struct_()->close) return ;
  typedef void (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close;
  call_wrap_v ((::WebKitWebView*) (gobj_()));
}

// gboolean WebView::context_menu (WebKitWebView* web_view, WebKitContextMenu* context_menu, GdkEvent* event, WebKitHitTestResult* hit_test_result);
// gboolean WebView::context_menu (::WebKitWebView* web_view, ::WebKitContextMenu* context_menu,  event, ::WebKitHitTestResult* hit_test_result);
// SKIP; event type  not supported

// void WebView::context_menu_dismissed (WebKitWebView* web_view);
// void WebView::context_menu_dismissed (::WebKitWebView* web_view);
void WebViewClass::context_menu_dismissed_ () noexcept
{
  if (!get_struct_()->context_menu_dismissed) return ;
  typedef void (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->context_menu_dismissed;
  call_wrap_v ((::WebKitWebView*) (gobj_()));
}

// gboolean WebView::decide_policy (WebKitWebView* web_view, WebKitPolicyDecision* decision, WebKitPolicyDecisionType type);
// gboolean WebView::decide_policy (::WebKitWebView* web_view, ::WebKitPolicyDecision* decision, ::WebKitPolicyDecisionType type);
bool WebViewClass::decide_policy_ (WebKit2::PolicyDecision decision, WebKit2::PolicyDecisionType type) noexcept
{
  if (!get_struct_()->decide_policy) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitPolicyDecision* decision, ::WebKitPolicyDecisionType type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->decide_policy;
  auto type_to_c = gi::unwrap (type);
  auto decision_to_c = gi::unwrap (decision, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitPolicyDecision*) (decision_to_c), (::WebKitPolicyDecisionType) (type_to_c));
  return _temp_ret;
}

// gboolean WebView::enter_fullscreen (WebKitWebView* web_view);
// gboolean WebView::enter_fullscreen (::WebKitWebView* web_view);
bool WebViewClass::enter_fullscreen_ () noexcept
{
  if (!get_struct_()->enter_fullscreen) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->enter_fullscreen;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// void WebView::insecure_content_detected (WebKitWebView* web_view, WebKitInsecureContentEvent event);
// void WebView::insecure_content_detected (::WebKitWebView* web_view, ::WebKitInsecureContentEvent event);
void WebViewClass::insecure_content_detected_ (WebKit2::InsecureContentEvent event) noexcept
{
  if (!get_struct_()->insecure_content_detected) return ;
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitInsecureContentEvent event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insecure_content_detected;
  auto event_to_c = gi::unwrap (event);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitInsecureContentEvent) (event_to_c));
}

// gboolean WebView::leave_fullscreen (WebKitWebView* web_view);
// gboolean WebView::leave_fullscreen (::WebKitWebView* web_view);
bool WebViewClass::leave_fullscreen_ () noexcept
{
  if (!get_struct_()->leave_fullscreen) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->leave_fullscreen;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// void WebView::load_changed (WebKitWebView* web_view, WebKitLoadEvent load_event);
// void WebView::load_changed (::WebKitWebView* web_view, ::WebKitLoadEvent load_event);
void WebViewClass::load_changed_ (WebKit2::LoadEvent load_event) noexcept
{
  if (!get_struct_()->load_changed) return ;
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitLoadEvent load_event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load_changed;
  auto load_event_to_c = gi::unwrap (load_event);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitLoadEvent) (load_event_to_c));
}

// gboolean WebView::load_failed (WebKitWebView* web_view, WebKitLoadEvent load_event, const gchar* failing_uri, GError* error);
// gboolean WebView::load_failed (::WebKitWebView* web_view, ::WebKitLoadEvent load_event, const char* failing_uri, ::GError* error);
bool WebViewClass::load_failed_ (WebKit2::LoadEvent load_event, const std::string & failing_uri, GLib::Error error) noexcept
{
  if (!get_struct_()->load_failed) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitLoadEvent load_event, const char* failing_uri, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load_failed;
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto failing_uri_to_c = gi::unwrap (failing_uri, gi::transfer_none, gi::direction_in);
  auto load_event_to_c = gi::unwrap (load_event);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitLoadEvent) (load_event_to_c), (const char*) (failing_uri_to_c), (::GError*) (error_to_c));
  return _temp_ret;
}

// gboolean WebView::load_failed_with_tls_errors (WebKitWebView* web_view, const gchar* failing_uri, GTlsCertificate* certificate, GTlsCertificateFlags errors);
// gboolean WebView::load_failed_with_tls_errors (::WebKitWebView* web_view, const char* failing_uri, ::GTlsCertificate* certificate, ::GTlsCertificateFlags errors);
bool WebViewClass::load_failed_with_tls_errors_ (const std::string & failing_uri, Gio::TlsCertificate certificate, Gio::TlsCertificateFlags errors) noexcept
{
  if (!get_struct_()->load_failed_with_tls_errors) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, const char* failing_uri, ::GTlsCertificate* certificate, ::GTlsCertificateFlags errors);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load_failed_with_tls_errors;
  auto errors_to_c = gi::unwrap (errors);
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  auto failing_uri_to_c = gi::unwrap (failing_uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (const char*) (failing_uri_to_c), (::GTlsCertificate*) (certificate_to_c), (::GTlsCertificateFlags) (errors_to_c));
  return _temp_ret;
}

// void WebView::mouse_target_changed (WebKitWebView* web_view, WebKitHitTestResult* hit_test_result, guint modifiers);
// void WebView::mouse_target_changed (::WebKitWebView* web_view, ::WebKitHitTestResult* hit_test_result, guint modifiers);
void WebViewClass::mouse_target_changed_ (WebKit2::HitTestResult hit_test_result, guint modifiers) noexcept
{
  if (!get_struct_()->mouse_target_changed) return ;
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitHitTestResult* hit_test_result, guint modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mouse_target_changed;
  auto modifiers_to_c = modifiers;
  auto hit_test_result_to_c = gi::unwrap (hit_test_result, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitHitTestResult*) (hit_test_result_to_c), (guint) (modifiers_to_c));
}

// gboolean WebView::permission_request (WebKitWebView* web_view, WebKitPermissionRequest* permission_request);
// gboolean WebView::permission_request (::WebKitWebView* web_view, ::WebKitPermissionRequest* permission_request);
bool WebViewClass::permission_request_ (WebKit2::PermissionRequest permission_request) noexcept
{
  if (!get_struct_()->permission_request) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitPermissionRequest* permission_request);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->permission_request;
  auto permission_request_to_c = gi::unwrap (permission_request, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitPermissionRequest*) (permission_request_to_c));
  return _temp_ret;
}

// gboolean WebView::print (WebKitWebView* web_view, WebKitPrintOperation* print_operation);
// gboolean WebView::print (::WebKitWebView* web_view, ::WebKitPrintOperation* print_operation);
bool WebViewClass::print_ (WebKit2::PrintOperation print_operation) noexcept
{
  if (!get_struct_()->print) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitPrintOperation* print_operation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->print;
  auto print_operation_to_c = gi::unwrap (print_operation, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitPrintOperation*) (print_operation_to_c));
  return _temp_ret;
}

// void WebView::ready_to_show (WebKitWebView* web_view);
// void WebView::ready_to_show (::WebKitWebView* web_view);
void WebViewClass::ready_to_show_ () noexcept
{
  if (!get_struct_()->ready_to_show) return ;
  typedef void (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ready_to_show;
  call_wrap_v ((::WebKitWebView*) (gobj_()));
}

// void WebView::resource_load_started (WebKitWebView* web_view, WebKitWebResource* resource, WebKitURIRequest* request);
// void WebView::resource_load_started (::WebKitWebView* web_view, ::WebKitWebResource* resource, ::WebKitURIRequest* request);
void WebViewClass::resource_load_started_ (WebKit2::WebResource resource, WebKit2::URIRequest request) noexcept
{
  if (!get_struct_()->resource_load_started) return ;
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitWebResource* resource, ::WebKitURIRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->resource_load_started;
  auto request_to_c = gi::unwrap (request, gi::transfer_none, gi::direction_in);
  auto resource_to_c = gi::unwrap (resource, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitWebResource*) (resource_to_c), (::WebKitURIRequest*) (request_to_c));
}

// void WebView::run_as_modal (WebKitWebView* web_view);
// void WebView::run_as_modal (::WebKitWebView* web_view);
void WebViewClass::run_as_modal_ () noexcept
{
  if (!get_struct_()->run_as_modal) return ;
  typedef void (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->run_as_modal;
  call_wrap_v ((::WebKitWebView*) (gobj_()));
}

// gboolean WebView::run_color_chooser (WebKitWebView* web_view, WebKitColorChooserRequest* request);
// gboolean WebView::run_color_chooser (::WebKitWebView* web_view, ::WebKitColorChooserRequest* request);
bool WebViewClass::run_color_chooser_ (WebKit2::ColorChooserRequest request) noexcept
{
  if (!get_struct_()->run_color_chooser) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitColorChooserRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->run_color_chooser;
  auto request_to_c = gi::unwrap (request, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitColorChooserRequest*) (request_to_c));
  return _temp_ret;
}

// gboolean WebView::run_file_chooser (WebKitWebView* web_view, WebKitFileChooserRequest* request);
// gboolean WebView::run_file_chooser (::WebKitWebView* web_view, ::WebKitFileChooserRequest* request);
bool WebViewClass::run_file_chooser_ (WebKit2::FileChooserRequest request) noexcept
{
  if (!get_struct_()->run_file_chooser) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitFileChooserRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->run_file_chooser;
  auto request_to_c = gi::unwrap (request, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitFileChooserRequest*) (request_to_c));
  return _temp_ret;
}

// gboolean WebView::script_dialog (WebKitWebView* web_view, WebKitScriptDialog* dialog);
// gboolean WebView::script_dialog (::WebKitWebView* web_view, ::WebKitScriptDialog* dialog);
bool WebViewClass::script_dialog_ (WebKit2::ScriptDialog dialog) noexcept
{
  if (!get_struct_()->script_dialog) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitScriptDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->script_dialog;
  auto dialog_to_c = gi::unwrap (dialog, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitScriptDialog*) (dialog_to_c));
  return _temp_ret;
}

// gboolean WebView::show_notification (WebKitWebView* web_view, WebKitNotification* notification);
// gboolean WebView::show_notification (::WebKitWebView* web_view, ::WebKitNotification* notification);
bool WebViewClass::show_notification_ (WebKit2::Notification notification) noexcept
{
  if (!get_struct_()->show_notification) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitNotification* notification);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->show_notification;
  auto notification_to_c = gi::unwrap (notification, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitNotification*) (notification_to_c));
  return _temp_ret;
}

// gboolean WebView::show_option_menu (WebKitWebView* web_view, GdkRectangle* rectangle, WebKitOptionMenu* menu);
// gboolean WebView::show_option_menu (::WebKitWebView* web_view, ::GdkRectangle* rectangle, ::WebKitOptionMenu* menu);
bool WebViewClass::show_option_menu_ (Gdk::Rectangle rectangle, WebKit2::OptionMenu menu) noexcept
{
  if (!get_struct_()->show_option_menu) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::GdkRectangle* rectangle, ::WebKitOptionMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->show_option_menu;
  auto menu_to_c = gi::unwrap (menu, gi::transfer_none, gi::direction_in);
  auto rectangle_to_c = gi::unwrap (rectangle, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::GdkRectangle*) (rectangle_to_c), (::WebKitOptionMenu*) (menu_to_c));
  return _temp_ret;
}

// void WebView::submit_form (WebKitWebView* web_view, WebKitFormSubmissionRequest* request);
// void WebView::submit_form (::WebKitWebView* web_view, ::WebKitFormSubmissionRequest* request);
void WebViewClass::submit_form_ (WebKit2::FormSubmissionRequest request) noexcept
{
  if (!get_struct_()->submit_form) return ;
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitFormSubmissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->submit_form;
  auto request_to_c = gi::unwrap (request, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitFormSubmissionRequest*) (request_to_c));
}

// gboolean WebView::user_message_received (WebKitWebView* web_view, WebKitUserMessage* message);
// gboolean WebView::user_message_received (::WebKitWebView* web_view, ::WebKitUserMessage* message);
bool WebViewClass::user_message_received_ (WebKit2::UserMessage message) noexcept
{
  if (!get_struct_()->user_message_received) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitUserMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->user_message_received;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitUserMessage*) (message_to_c));
  return _temp_ret;
}

// gboolean WebView::web_process_crashed (WebKitWebView* web_view);
// gboolean WebView::web_process_crashed (::WebKitWebView* web_view);
bool WebViewClass::web_process_crashed_ () noexcept
{
  if (!get_struct_()->web_process_crashed) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebView* web_view);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->web_process_crashed;
  auto _temp_ret = call_wrap_v ((::WebKitWebView*) (gobj_()));
  return _temp_ret;
}

// void WebView::web_process_terminated (WebKitWebView* web_view, WebKitWebProcessTerminationReason reason);
// void WebView::web_process_terminated (::WebKitWebView* web_view, ::WebKitWebProcessTerminationReason reason);
void WebViewClass::web_process_terminated_ (WebKit2::WebProcessTerminationReason reason) noexcept
{
  if (!get_struct_()->web_process_terminated) return ;
  typedef void (*call_wrap_t) (::WebKitWebView* web_view, ::WebKitWebProcessTerminationReason reason);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->web_process_terminated;
  auto reason_to_c = gi::unwrap (reason);
  call_wrap_v ((::WebKitWebView*) (gobj_()), (::WebKitWebProcessTerminationReason) (reason_to_c));
}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
