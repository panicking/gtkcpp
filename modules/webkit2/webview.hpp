// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBVIEW_HPP_
#define _GI_WEBKIT2_WEBVIEW_HPP_

#include "webviewbase.hpp"

namespace gi {

namespace repository {

namespace WebKit2 {

class AuthenticationRequest;
class BackForwardList;
class BackForwardListItem;
class ColorChooserRequest;
class ContextMenu;
class Download;
class EditorState;
class FileChooserRequest;
class FindController;
class FormSubmissionRequest;
class HitTestResult;
class InputMethodContext;
class JavascriptResult;
class NavigationAction;
class Notification;
class OptionMenu;
class PermissionRequest;
class PolicyDecision;
class PrintOperation;
class ScriptDialog;
class Settings;
class URIRequest;
class UserContentManager;
class UserMessage;
class WebContext;
class WebInspector;
class WebResource;
class WebViewSessionState;
class WebsiteDataManager;
class WebsitePolicies;
class WindowProperties;

class WebView;

namespace base {


#define GI_WEBKIT2_WEBVIEW_BASE base::WebViewBase
class WebViewBase : public WebKit2::WebViewBase
{
typedef WebKit2::WebViewBase super_type;
public:
typedef ::WebKitWebView BaseObjectType;

WebViewBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_web_view_get_type(); } 

// GtkWidget* webkit_web_view_new ();
// ::WebKitWebView* webkit_web_view_new ();
static GI_INLINE_DECL WebKit2::WebView new_ () noexcept;

// GtkWidget* webkit_web_view_new_with_context (WebKitWebContext* context);
// ::WebKitWebView* webkit_web_view_new_with_context (::WebKitWebContext* context);
static GI_INLINE_DECL WebKit2::WebView new_with_context (WebKit2::WebContext context) noexcept;

// GtkWidget* webkit_web_view_new_with_related_view (WebKitWebView* web_view);
// ::WebKitWebView* webkit_web_view_new_with_related_view (::WebKitWebView* web_view);
static GI_INLINE_DECL WebKit2::WebView new_with_related_view (WebKit2::WebView web_view) noexcept;

// GtkWidget* webkit_web_view_new_with_settings (WebKitSettings* settings);
// ::WebKitWebView* webkit_web_view_new_with_settings (::WebKitSettings* settings);
static GI_INLINE_DECL WebKit2::WebView new_with_settings (WebKit2::Settings settings) noexcept;

// GtkWidget* webkit_web_view_new_with_user_content_manager (WebKitUserContentManager* user_content_manager);
// ::WebKitWebView* webkit_web_view_new_with_user_content_manager (::WebKitUserContentManager* user_content_manager);
static GI_INLINE_DECL WebKit2::WebView new_with_user_content_manager (WebKit2::UserContentManager user_content_manager) noexcept;

// void webkit_web_view_can_execute_editing_command (WebKitWebView* web_view, const gchar* command, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_can_execute_editing_command (::WebKitWebView* web_view, const char* command, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void can_execute_editing_command (const std::string & command, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void can_execute_editing_command (const std::string & command, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webkit_web_view_can_execute_editing_command_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// gboolean webkit_web_view_can_execute_editing_command_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool can_execute_editing_command_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool can_execute_editing_command_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean webkit_web_view_can_go_back (WebKitWebView* web_view);
// gboolean webkit_web_view_can_go_back (::WebKitWebView* web_view);
GI_INLINE_DECL bool can_go_back () noexcept;

// gboolean webkit_web_view_can_go_forward (WebKitWebView* web_view);
// gboolean webkit_web_view_can_go_forward (::WebKitWebView* web_view);
GI_INLINE_DECL bool can_go_forward () noexcept;

// gboolean webkit_web_view_can_show_mime_type (WebKitWebView* web_view, const gchar* mime_type);
// gboolean webkit_web_view_can_show_mime_type (::WebKitWebView* web_view, const char* mime_type);
GI_INLINE_DECL bool can_show_mime_type (const std::string & mime_type) noexcept;

// WebKitDownload* webkit_web_view_download_uri (WebKitWebView* web_view, const char* uri);
// ::WebKitDownload* webkit_web_view_download_uri (::WebKitWebView* web_view, const char* uri);
GI_INLINE_DECL WebKit2::Download download_uri (const std::string & uri) noexcept;

// void webkit_web_view_execute_editing_command (WebKitWebView* web_view, const gchar* command);
// void webkit_web_view_execute_editing_command (::WebKitWebView* web_view, const char* command);
GI_INLINE_DECL void execute_editing_command (const std::string & command) noexcept;

// void webkit_web_view_execute_editing_command_with_argument (WebKitWebView* web_view, const char* command, const char* argument);
// void webkit_web_view_execute_editing_command_with_argument (::WebKitWebView* web_view, const char* command, const char* argument);
GI_INLINE_DECL void execute_editing_command_with_argument (const std::string & command, const std::string & argument) noexcept;

// WebKitAutomationBrowsingContextPresentation webkit_web_view_get_automation_presentation_type (WebKitWebView* web_view);
// ::WebKitAutomationBrowsingContextPresentation webkit_web_view_get_automation_presentation_type (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::AutomationBrowsingContextPresentation get_automation_presentation_type () noexcept;

// WebKitBackForwardList* webkit_web_view_get_back_forward_list (WebKitWebView* web_view);
// ::WebKitBackForwardList* webkit_web_view_get_back_forward_list (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::BackForwardList get_back_forward_list () noexcept;

// void webkit_web_view_get_background_color (WebKitWebView* web_view, GdkRGBA* rgba);
// void webkit_web_view_get_background_color (::WebKitWebView* web_view, ::GdkRGBA* rgba);
GI_INLINE_DECL void get_background_color (Gdk::RGBA & rgba) noexcept;
GI_INLINE_DECL Gdk::RGBA get_background_color () noexcept;

// WebKitMediaCaptureState webkit_web_view_get_camera_capture_state (WebKitWebView* web_view);
// ::WebKitMediaCaptureState webkit_web_view_get_camera_capture_state (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::MediaCaptureState get_camera_capture_state () noexcept;

// WebKitWebContext* webkit_web_view_get_context (WebKitWebView* web_view);
// ::WebKitWebContext* webkit_web_view_get_context (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::WebContext get_context () noexcept;

// const gchar* webkit_web_view_get_custom_charset (WebKitWebView* web_view);
// const char* webkit_web_view_get_custom_charset (::WebKitWebView* web_view);
GI_INLINE_DECL std::string get_custom_charset () noexcept;

// WebKitMediaCaptureState webkit_web_view_get_display_capture_state (WebKitWebView* web_view);
// ::WebKitMediaCaptureState webkit_web_view_get_display_capture_state (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::MediaCaptureState get_display_capture_state () noexcept;

// WebKitEditorState* webkit_web_view_get_editor_state (WebKitWebView* web_view);
// ::WebKitEditorState* webkit_web_view_get_editor_state (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::EditorState get_editor_state () noexcept;

// gdouble webkit_web_view_get_estimated_load_progress (WebKitWebView* web_view);
// gdouble webkit_web_view_get_estimated_load_progress (::WebKitWebView* web_view);
GI_INLINE_DECL gdouble get_estimated_load_progress () noexcept;

// cairo_surface_t* webkit_web_view_get_favicon (WebKitWebView* web_view);
// ::cairo_surface_t* webkit_web_view_get_favicon (::WebKitWebView* web_view);
GI_INLINE_DECL cairo::Surface get_favicon () noexcept;

// WebKitFindController* webkit_web_view_get_find_controller (WebKitWebView* web_view);
// ::WebKitFindController* webkit_web_view_get_find_controller (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::FindController get_find_controller () noexcept;

// WebKitInputMethodContext* webkit_web_view_get_input_method_context (WebKitWebView* web_view);
// ::WebKitInputMethodContext* webkit_web_view_get_input_method_context (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::InputMethodContext get_input_method_context () noexcept;

// WebKitWebInspector* webkit_web_view_get_inspector (WebKitWebView* web_view);
// ::WebKitWebInspector* webkit_web_view_get_inspector (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::WebInspector get_inspector () noexcept;

// gboolean webkit_web_view_get_is_muted (WebKitWebView* web_view);
// gboolean webkit_web_view_get_is_muted (::WebKitWebView* web_view);
GI_INLINE_DECL bool get_is_muted () noexcept;

// gboolean webkit_web_view_get_is_web_process_responsive (WebKitWebView* web_view);
// gboolean webkit_web_view_get_is_web_process_responsive (::WebKitWebView* web_view);
GI_INLINE_DECL bool get_is_web_process_responsive () noexcept;

// FAILURE on webkit_web_view_get_javascript_global_context; No such node (<xmlattr>.name)
// WebKitWebResource* webkit_web_view_get_main_resource (WebKitWebView* web_view);
// ::WebKitWebResource* webkit_web_view_get_main_resource (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::WebResource get_main_resource () noexcept;

// WebKitMediaCaptureState webkit_web_view_get_microphone_capture_state (WebKitWebView* web_view);
// ::WebKitMediaCaptureState webkit_web_view_get_microphone_capture_state (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::MediaCaptureState get_microphone_capture_state () noexcept;

// guint64 webkit_web_view_get_page_id (WebKitWebView* web_view);
// guint64 webkit_web_view_get_page_id (::WebKitWebView* web_view);
GI_INLINE_DECL guint64 get_page_id () noexcept;

// WebKitWebViewSessionState* webkit_web_view_get_session_state (WebKitWebView* web_view);
// ::WebKitWebViewSessionState* webkit_web_view_get_session_state (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::WebViewSessionState get_session_state () noexcept;

// WebKitSettings* webkit_web_view_get_settings (WebKitWebView* web_view);
// ::WebKitSettings* webkit_web_view_get_settings (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::Settings get_settings () noexcept;

// void webkit_web_view_get_snapshot (WebKitWebView* web_view, WebKitSnapshotRegion region, WebKitSnapshotOptions options, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_get_snapshot (::WebKitWebView* web_view, ::WebKitSnapshotRegion region, ::WebKitSnapshotOptions options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void get_snapshot (WebKit2::SnapshotRegion region, WebKit2::SnapshotOptions options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void get_snapshot (WebKit2::SnapshotRegion region, WebKit2::SnapshotOptions options, Gio::AsyncReadyCallback callback) noexcept;

// cairo_surface_t* webkit_web_view_get_snapshot_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::cairo_surface_t* webkit_web_view_get_snapshot_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL cairo::Surface get_snapshot_finish (Gio::AsyncResult result);
GI_INLINE_DECL cairo::Surface get_snapshot_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// const gchar* webkit_web_view_get_title (WebKitWebView* web_view);
// const char* webkit_web_view_get_title (::WebKitWebView* web_view);
GI_INLINE_DECL std::string get_title () noexcept;

// gboolean webkit_web_view_get_tls_info (WebKitWebView* web_view, GTlsCertificate** certificate, GTlsCertificateFlags* errors);
// gboolean webkit_web_view_get_tls_info (::WebKitWebView* web_view, ::GTlsCertificate** certificate, ::GTlsCertificateFlags* errors);
GI_INLINE_DECL bool get_tls_info (Gio::TlsCertificate & certificate, Gio::TlsCertificateFlags & errors) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::TlsCertificate, Gio::TlsCertificateFlags> get_tls_info () noexcept;

// const gchar* webkit_web_view_get_uri (WebKitWebView* web_view);
// const char* webkit_web_view_get_uri (::WebKitWebView* web_view);
GI_INLINE_DECL std::string get_uri () noexcept;

// WebKitUserContentManager* webkit_web_view_get_user_content_manager (WebKitWebView* web_view);
// ::WebKitUserContentManager* webkit_web_view_get_user_content_manager (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::UserContentManager get_user_content_manager () noexcept;

// WebKitWebsiteDataManager* webkit_web_view_get_website_data_manager (WebKitWebView* web_view);
// ::WebKitWebsiteDataManager* webkit_web_view_get_website_data_manager (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::WebsiteDataManager get_website_data_manager () noexcept;

// WebKitWebsitePolicies* webkit_web_view_get_website_policies (WebKitWebView* web_view);
// ::WebKitWebsitePolicies* webkit_web_view_get_website_policies (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::WebsitePolicies get_website_policies () noexcept;

// WebKitWindowProperties* webkit_web_view_get_window_properties (WebKitWebView* web_view);
// ::WebKitWindowProperties* webkit_web_view_get_window_properties (::WebKitWebView* web_view);
GI_INLINE_DECL WebKit2::WindowProperties get_window_properties () noexcept;

// gdouble webkit_web_view_get_zoom_level (WebKitWebView* web_view);
// gdouble webkit_web_view_get_zoom_level (::WebKitWebView* web_view);
GI_INLINE_DECL gdouble get_zoom_level () noexcept;

// void webkit_web_view_go_back (WebKitWebView* web_view);
// void webkit_web_view_go_back (::WebKitWebView* web_view);
GI_INLINE_DECL void go_back () noexcept;

// void webkit_web_view_go_forward (WebKitWebView* web_view);
// void webkit_web_view_go_forward (::WebKitWebView* web_view);
GI_INLINE_DECL void go_forward () noexcept;

// void webkit_web_view_go_to_back_forward_list_item (WebKitWebView* web_view, WebKitBackForwardListItem* list_item);
// void webkit_web_view_go_to_back_forward_list_item (::WebKitWebView* web_view, ::WebKitBackForwardListItem* list_item);
GI_INLINE_DECL void go_to_back_forward_list_item (WebKit2::BackForwardListItem list_item) noexcept;

// gboolean webkit_web_view_is_controlled_by_automation (WebKitWebView* web_view);
// gboolean webkit_web_view_is_controlled_by_automation (::WebKitWebView* web_view);
GI_INLINE_DECL bool is_controlled_by_automation () noexcept;

// gboolean webkit_web_view_is_editable (WebKitWebView* web_view);
// gboolean webkit_web_view_is_editable (::WebKitWebView* web_view);
GI_INLINE_DECL bool is_editable () noexcept;

// gboolean webkit_web_view_is_ephemeral (WebKitWebView* web_view);
// gboolean webkit_web_view_is_ephemeral (::WebKitWebView* web_view);
GI_INLINE_DECL bool is_ephemeral () noexcept;

// gboolean webkit_web_view_is_loading (WebKitWebView* web_view);
// gboolean webkit_web_view_is_loading (::WebKitWebView* web_view);
GI_INLINE_DECL bool is_loading () noexcept;

// gboolean webkit_web_view_is_playing_audio (WebKitWebView* web_view);
// gboolean webkit_web_view_is_playing_audio (::WebKitWebView* web_view);
GI_INLINE_DECL bool is_playing_audio () noexcept;

// void webkit_web_view_load_alternate_html (WebKitWebView* web_view, const gchar* content, const gchar* content_uri, const gchar* base_uri);
// void webkit_web_view_load_alternate_html (::WebKitWebView* web_view, const char* content, const char* content_uri, const char* base_uri);
GI_INLINE_DECL void load_alternate_html (const std::string & content, const std::string & content_uri, const std::string & base_uri) noexcept;
GI_INLINE_DECL void load_alternate_html (const std::string & content, const std::string & content_uri) noexcept;

// void webkit_web_view_load_bytes (WebKitWebView* web_view, GBytes* bytes, const gchar* mime_type, const gchar* encoding, const gchar* base_uri);
// void webkit_web_view_load_bytes (::WebKitWebView* web_view, ::GBytes* bytes, const char* mime_type, const char* encoding, const char* base_uri);
GI_INLINE_DECL void load_bytes (GLib::Bytes bytes, const std::string & mime_type, const std::string & encoding, const std::string & base_uri) noexcept;
GI_INLINE_DECL void load_bytes (GLib::Bytes bytes) noexcept;

// void webkit_web_view_load_html (WebKitWebView* web_view, const gchar* content, const gchar* base_uri);
// void webkit_web_view_load_html (::WebKitWebView* web_view, const char* content, const char* base_uri);
GI_INLINE_DECL void load_html (const std::string & content, const std::string & base_uri) noexcept;
GI_INLINE_DECL void load_html (const std::string & content) noexcept;

// void webkit_web_view_load_plain_text (WebKitWebView* web_view, const gchar* plain_text);
// void webkit_web_view_load_plain_text (::WebKitWebView* web_view, const char* plain_text);
GI_INLINE_DECL void load_plain_text (const std::string & plain_text) noexcept;

// void webkit_web_view_load_request (WebKitWebView* web_view, WebKitURIRequest* request);
// void webkit_web_view_load_request (::WebKitWebView* web_view, ::WebKitURIRequest* request);
GI_INLINE_DECL void load_request (WebKit2::URIRequest request) noexcept;

// void webkit_web_view_load_uri (WebKitWebView* web_view, const gchar* uri);
// void webkit_web_view_load_uri (::WebKitWebView* web_view, const char* uri);
GI_INLINE_DECL void load_uri (const std::string & uri) noexcept;

// void webkit_web_view_reload (WebKitWebView* web_view);
// void webkit_web_view_reload (::WebKitWebView* web_view);
GI_INLINE_DECL void reload () noexcept;

// void webkit_web_view_reload_bypass_cache (WebKitWebView* web_view);
// void webkit_web_view_reload_bypass_cache (::WebKitWebView* web_view);
GI_INLINE_DECL void reload_bypass_cache () noexcept;

// void webkit_web_view_restore_session_state (WebKitWebView* web_view, WebKitWebViewSessionState* state);
// void webkit_web_view_restore_session_state (::WebKitWebView* web_view, ::WebKitWebViewSessionState* state);
GI_INLINE_DECL void restore_session_state (WebKit2::WebViewSessionState state) noexcept;

// void webkit_web_view_run_javascript (WebKitWebView* web_view, const gchar* script, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_run_javascript (::WebKitWebView* web_view, const char* script, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void run_javascript (const std::string & script, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void run_javascript (const std::string & script, Gio::AsyncReadyCallback callback) noexcept;

// WebKitJavascriptResult* webkit_web_view_run_javascript_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::WebKitJavascriptResult* webkit_web_view_run_javascript_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL WebKit2::JavascriptResult run_javascript_finish (Gio::AsyncResult result);
GI_INLINE_DECL WebKit2::JavascriptResult run_javascript_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_web_view_run_javascript_from_gresource (WebKitWebView* web_view, const gchar* resource, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_run_javascript_from_gresource (::WebKitWebView* web_view, const char* resource, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void run_javascript_from_gresource (const std::string & resource, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void run_javascript_from_gresource (const std::string & resource, Gio::AsyncReadyCallback callback) noexcept;

// WebKitJavascriptResult* webkit_web_view_run_javascript_from_gresource_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::WebKitJavascriptResult* webkit_web_view_run_javascript_from_gresource_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL WebKit2::JavascriptResult run_javascript_from_gresource_finish (Gio::AsyncResult result);
GI_INLINE_DECL WebKit2::JavascriptResult run_javascript_from_gresource_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_web_view_run_javascript_in_world (WebKitWebView* web_view, const gchar* script, const gchar* world_name, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_run_javascript_in_world (::WebKitWebView* web_view, const char* script, const char* world_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void run_javascript_in_world (const std::string & script, const std::string & world_name, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void run_javascript_in_world (const std::string & script, const std::string & world_name, Gio::AsyncReadyCallback callback) noexcept;

// WebKitJavascriptResult* webkit_web_view_run_javascript_in_world_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::WebKitJavascriptResult* webkit_web_view_run_javascript_in_world_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL WebKit2::JavascriptResult run_javascript_in_world_finish (Gio::AsyncResult result);
GI_INLINE_DECL WebKit2::JavascriptResult run_javascript_in_world_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_web_view_save (WebKitWebView* web_view, WebKitSaveMode save_mode, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_save (::WebKitWebView* web_view, ::WebKitSaveMode save_mode, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void save (WebKit2::SaveMode save_mode, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void save (WebKit2::SaveMode save_mode, Gio::AsyncReadyCallback callback) noexcept;

// GInputStream* webkit_web_view_save_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::GInputStream* webkit_web_view_save_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::InputStream save_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::InputStream save_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_web_view_save_to_file (WebKitWebView* web_view, GFile* file, WebKitSaveMode save_mode, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_save_to_file (::WebKitWebView* web_view, ::GFile* file, ::WebKitSaveMode save_mode, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void save_to_file (Gio::File file, WebKit2::SaveMode save_mode, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void save_to_file (Gio::File file, WebKit2::SaveMode save_mode, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webkit_web_view_save_to_file_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// gboolean webkit_web_view_save_to_file_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool save_to_file_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool save_to_file_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_web_view_send_message_to_page (WebKitWebView* web_view, WebKitUserMessage* message, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_view_send_message_to_page (::WebKitWebView* web_view, ::WebKitUserMessage* message, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void send_message_to_page (WebKit2::UserMessage message, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void send_message_to_page (WebKit2::UserMessage message, Gio::AsyncReadyCallback callback) noexcept;

// WebKitUserMessage* webkit_web_view_send_message_to_page_finish (WebKitWebView* web_view, GAsyncResult* result, GError ** error);
// ::WebKitUserMessage* webkit_web_view_send_message_to_page_finish (::WebKitWebView* web_view, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL WebKit2::UserMessage send_message_to_page_finish (Gio::AsyncResult result);
GI_INLINE_DECL WebKit2::UserMessage send_message_to_page_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_web_view_set_background_color (WebKitWebView* web_view, const GdkRGBA* rgba);
// void webkit_web_view_set_background_color (::WebKitWebView* web_view, const ::GdkRGBA* rgba);
GI_INLINE_DECL void set_background_color (const Gdk::RGBA & rgba) noexcept;

// void webkit_web_view_set_camera_capture_state (WebKitWebView* web_view, WebKitMediaCaptureState state);
// void webkit_web_view_set_camera_capture_state (::WebKitWebView* web_view, ::WebKitMediaCaptureState state);
GI_INLINE_DECL void set_camera_capture_state (WebKit2::MediaCaptureState state) noexcept;

// void webkit_web_view_set_cors_allowlist (WebKitWebView* web_view, const gchar* const* allowlist);
// void webkit_web_view_set_cors_allowlist (::WebKitWebView* web_view, const char** allowlist);
GI_INLINE_DECL void set_cors_allowlist (const std::vector<std::string> & allowlist) noexcept;

// void webkit_web_view_set_custom_charset (WebKitWebView* web_view, const gchar* charset);
// void webkit_web_view_set_custom_charset (::WebKitWebView* web_view, const char* charset);
GI_INLINE_DECL void set_custom_charset (const std::string & charset) noexcept;
GI_INLINE_DECL void set_custom_charset () noexcept;

// void webkit_web_view_set_display_capture_state (WebKitWebView* web_view, WebKitMediaCaptureState state);
// void webkit_web_view_set_display_capture_state (::WebKitWebView* web_view, ::WebKitMediaCaptureState state);
GI_INLINE_DECL void set_display_capture_state (WebKit2::MediaCaptureState state) noexcept;

// void webkit_web_view_set_editable (WebKitWebView* web_view, gboolean editable);
// void webkit_web_view_set_editable (::WebKitWebView* web_view, gboolean editable);
GI_INLINE_DECL void set_editable (gboolean editable) noexcept;

// void webkit_web_view_set_input_method_context (WebKitWebView* web_view, WebKitInputMethodContext* context);
// void webkit_web_view_set_input_method_context (::WebKitWebView* web_view, ::WebKitInputMethodContext* context);
GI_INLINE_DECL void set_input_method_context (WebKit2::InputMethodContext context) noexcept;
GI_INLINE_DECL void set_input_method_context () noexcept;

// void webkit_web_view_set_is_muted (WebKitWebView* web_view, gboolean muted);
// void webkit_web_view_set_is_muted (::WebKitWebView* web_view, gboolean muted);
GI_INLINE_DECL void set_is_muted (gboolean muted) noexcept;

// void webkit_web_view_set_microphone_capture_state (WebKitWebView* web_view, WebKitMediaCaptureState state);
// void webkit_web_view_set_microphone_capture_state (::WebKitWebView* web_view, ::WebKitMediaCaptureState state);
GI_INLINE_DECL void set_microphone_capture_state (WebKit2::MediaCaptureState state) noexcept;

// void webkit_web_view_set_settings (WebKitWebView* web_view, WebKitSettings* settings);
// void webkit_web_view_set_settings (::WebKitWebView* web_view, ::WebKitSettings* settings);
GI_INLINE_DECL void set_settings (WebKit2::Settings settings) noexcept;

// void webkit_web_view_set_zoom_level (WebKitWebView* web_view, gdouble zoom_level);
// void webkit_web_view_set_zoom_level (::WebKitWebView* web_view, gdouble zoom_level);
GI_INLINE_DECL void set_zoom_level (gdouble zoom_level) noexcept;

// void webkit_web_view_stop_loading (WebKitWebView* web_view);
// void webkit_web_view_stop_loading (::WebKitWebView* web_view);
GI_INLINE_DECL void stop_loading () noexcept;

// void webkit_web_view_terminate_web_process (WebKitWebView* web_view);
// void webkit_web_view_terminate_web_process (::WebKitWebView* web_view);
GI_INLINE_DECL void terminate_web_process () noexcept;

// void webkit_web_view_try_close (WebKitWebView* web_view);
// void webkit_web_view_try_close (::WebKitWebView* web_view);
GI_INLINE_DECL void try_close () noexcept;

gi::property_proxy<WebKit2::AutomationBrowsingContextPresentation, base::WebViewBase> property_automation_presentation_type()
{ return gi::property_proxy<WebKit2::AutomationBrowsingContextPresentation, base::WebViewBase> (*this, "automation-presentation-type"); }
const gi::property_proxy<WebKit2::AutomationBrowsingContextPresentation, base::WebViewBase> property_automation_presentation_type() const
{ return gi::property_proxy<WebKit2::AutomationBrowsingContextPresentation, base::WebViewBase> (*this, "automation-presentation-type"); }

gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> property_camera_capture_state()
{ return gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> (*this, "camera-capture-state"); }
const gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> property_camera_capture_state() const
{ return gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> (*this, "camera-capture-state"); }

gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> property_display_capture_state()
{ return gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> (*this, "display-capture-state"); }
const gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> property_display_capture_state() const
{ return gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> (*this, "display-capture-state"); }

gi::property_proxy<bool, base::WebViewBase> property_editable()
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "editable"); }
const gi::property_proxy<bool, base::WebViewBase> property_editable() const
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "editable"); }

gi::property_proxy<gdouble, base::WebViewBase> property_estimated_load_progress()
{ return gi::property_proxy<gdouble, base::WebViewBase> (*this, "estimated-load-progress"); }
const gi::property_proxy<gdouble, base::WebViewBase> property_estimated_load_progress() const
{ return gi::property_proxy<gdouble, base::WebViewBase> (*this, "estimated-load-progress"); }

gi::property_proxy<gpointer, base::WebViewBase> property_favicon()
{ return gi::property_proxy<gpointer, base::WebViewBase> (*this, "favicon"); }
const gi::property_proxy<gpointer, base::WebViewBase> property_favicon() const
{ return gi::property_proxy<gpointer, base::WebViewBase> (*this, "favicon"); }

gi::property_proxy<bool, base::WebViewBase> property_is_controlled_by_automation()
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-controlled-by-automation"); }
const gi::property_proxy<bool, base::WebViewBase> property_is_controlled_by_automation() const
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-controlled-by-automation"); }

gi::property_proxy<bool, base::WebViewBase> property_is_ephemeral()
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-ephemeral"); }
const gi::property_proxy<bool, base::WebViewBase> property_is_ephemeral() const
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-ephemeral"); }

gi::property_proxy<bool, base::WebViewBase> property_is_loading()
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-loading"); }
const gi::property_proxy<bool, base::WebViewBase> property_is_loading() const
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-loading"); }

gi::property_proxy<bool, base::WebViewBase> property_is_muted()
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-muted"); }
const gi::property_proxy<bool, base::WebViewBase> property_is_muted() const
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-muted"); }

gi::property_proxy<bool, base::WebViewBase> property_is_playing_audio()
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-playing-audio"); }
const gi::property_proxy<bool, base::WebViewBase> property_is_playing_audio() const
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-playing-audio"); }

gi::property_proxy<bool, base::WebViewBase> property_is_web_process_responsive()
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-web-process-responsive"); }
const gi::property_proxy<bool, base::WebViewBase> property_is_web_process_responsive() const
{ return gi::property_proxy<bool, base::WebViewBase> (*this, "is-web-process-responsive"); }

gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> property_microphone_capture_state()
{ return gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> (*this, "microphone-capture-state"); }
const gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> property_microphone_capture_state() const
{ return gi::property_proxy<WebKit2::MediaCaptureState, base::WebViewBase> (*this, "microphone-capture-state"); }

gi::property_proxy<guint64, base::WebViewBase> property_page_id()
{ return gi::property_proxy<guint64, base::WebViewBase> (*this, "page-id"); }
const gi::property_proxy<guint64, base::WebViewBase> property_page_id() const
{ return gi::property_proxy<guint64, base::WebViewBase> (*this, "page-id"); }

gi::property_proxy_write<WebKit2::WebView, base::WebViewBase> property_related_view()
{ return gi::property_proxy_write<WebKit2::WebView, base::WebViewBase> (*this, "related-view"); }

gi::property_proxy_write<WebKit2::Settings, base::WebViewBase> property_settings()
{ return gi::property_proxy_write<WebKit2::Settings, base::WebViewBase> (*this, "settings"); }

gi::property_proxy<std::string, base::WebViewBase> property_title()
{ return gi::property_proxy<std::string, base::WebViewBase> (*this, "title"); }
const gi::property_proxy<std::string, base::WebViewBase> property_title() const
{ return gi::property_proxy<std::string, base::WebViewBase> (*this, "title"); }

gi::property_proxy<std::string, base::WebViewBase> property_uri()
{ return gi::property_proxy<std::string, base::WebViewBase> (*this, "uri"); }
const gi::property_proxy<std::string, base::WebViewBase> property_uri() const
{ return gi::property_proxy<std::string, base::WebViewBase> (*this, "uri"); }

gi::property_proxy<WebKit2::UserContentManager, base::WebViewBase> property_user_content_manager()
{ return gi::property_proxy<WebKit2::UserContentManager, base::WebViewBase> (*this, "user-content-manager"); }
const gi::property_proxy<WebKit2::UserContentManager, base::WebViewBase> property_user_content_manager() const
{ return gi::property_proxy<WebKit2::UserContentManager, base::WebViewBase> (*this, "user-content-manager"); }

gi::property_proxy<WebKit2::WebContext, base::WebViewBase> property_web_context()
{ return gi::property_proxy<WebKit2::WebContext, base::WebViewBase> (*this, "web-context"); }
const gi::property_proxy<WebKit2::WebContext, base::WebViewBase> property_web_context() const
{ return gi::property_proxy<WebKit2::WebContext, base::WebViewBase> (*this, "web-context"); }

gi::property_proxy<WebKit2::WebsitePolicies, base::WebViewBase> property_website_policies()
{ return gi::property_proxy<WebKit2::WebsitePolicies, base::WebViewBase> (*this, "website-policies"); }
const gi::property_proxy<WebKit2::WebsitePolicies, base::WebViewBase> property_website_policies() const
{ return gi::property_proxy<WebKit2::WebsitePolicies, base::WebViewBase> (*this, "website-policies"); }

gi::property_proxy<gdouble, base::WebViewBase> property_zoom_level()
{ return gi::property_proxy<gdouble, base::WebViewBase> (*this, "zoom-level"); }
const gi::property_proxy<gdouble, base::WebViewBase> property_zoom_level() const
{ return gi::property_proxy<gdouble, base::WebViewBase> (*this, "zoom-level"); }

// signal authenticate
gi::signal_proxy<bool(WebKit2::WebView, WebKit2::AuthenticationRequest request)> signal_authenticate()
{ return gi::signal_proxy<bool(WebKit2::WebView, WebKit2::AuthenticationRequest request)> (*this, "authenticate"); }

// signal close
gi::signal_proxy<void(WebKit2::WebView)> signal_close()
{ return gi::signal_proxy<void(WebKit2::WebView)> (*this, "close"); }

// signal context-menu
// SKIP; event type  not supported

// signal context-menu-dismissed
gi::signal_proxy<void(WebKit2::WebView)> signal_context_menu_dismissed()
{ return gi::signal_proxy<void(WebKit2::WebView)> (*this, "context-menu-dismissed"); }

// signal create
gi::signal_proxy<Gtk::Widget(WebKit2::WebView, WebKit2::NavigationAction navigation_action)> signal_create()
{ return gi::signal_proxy<Gtk::Widget(WebKit2::WebView, WebKit2::NavigationAction navigation_action)> (*this, "create"); }

// signal decide-policy
gi::signal_proxy<bool(WebKit2::WebView, WebKit2::PolicyDecision decision, WebKit2::PolicyDecisionType decision_type)> signal_decide_policy()
{ return gi::signal_proxy<bool(WebKit2::WebView, WebKit2::PolicyDecision decision, WebKit2::PolicyDecisionType decision_type)> (*this, "decide-policy"); }

// signal enter-fullscreen
gi::signal_proxy<bool(WebKit2::WebView)> signal_enter_fullscreen()
{ return gi::signal_proxy<bool(WebKit2::WebView)> (*this, "enter-fullscreen"); }

// signal insecure-content-detected
gi::signal_proxy<void(WebKit2::WebView, WebKit2::InsecureContentEvent event)> signal_insecure_content_detected()
{ return gi::signal_proxy<void(WebKit2::WebView, WebKit2::InsecureContentEvent event)> (*this, "insecure-content-detected"); }

// signal leave-fullscreen
gi::signal_proxy<bool(WebKit2::WebView)> signal_leave_fullscreen()
{ return gi::signal_proxy<bool(WebKit2::WebView)> (*this, "leave-fullscreen"); }

// signal load-changed
gi::signal_proxy<void(WebKit2::WebView, WebKit2::LoadEvent load_event)> signal_load_changed()
{ return gi::signal_proxy<void(WebKit2::WebView, WebKit2::LoadEvent load_event)> (*this, "load-changed"); }

// signal load-failed
gi::signal_proxy<bool(WebKit2::WebView, WebKit2::LoadEvent load_event, const std::string & failing_uri, GLib::Error error)> signal_load_failed()
{ return gi::signal_proxy<bool(WebKit2::WebView, WebKit2::LoadEvent load_event, const std::string & failing_uri, GLib::Error error)> (*this, "load-failed"); }

// signal load-failed-with-tls-errors
gi::signal_proxy<bool(WebKit2::WebView, const std::string & failing_uri, Gio::TlsCertificate certificate, Gio::TlsCertificateFlags errors)> signal_load_failed_with_tls_errors()
{ return gi::signal_proxy<bool(WebKit2::WebView, const std::string & failing_uri, Gio::TlsCertificate certificate, Gio::TlsCertificateFlags errors)> (*this, "load-failed-with-tls-errors"); }

// signal mouse-target-changed
gi::signal_proxy<void(WebKit2::WebView, WebKit2::HitTestResult hit_test_result, guint modifiers)> signal_mouse_target_changed()
{ return gi::signal_proxy<void(WebKit2::WebView, WebKit2::HitTestResult hit_test_result, guint modifiers)> (*this, "mouse-target-changed"); }

// signal permission-request
gi::signal_proxy<bool(WebKit2::WebView, WebKit2::PermissionRequest request)> signal_permission_request()
{ return gi::signal_proxy<bool(WebKit2::WebView, WebKit2::PermissionRequest request)> (*this, "permission-request"); }

// signal print
gi::signal_proxy<bool(WebKit2::WebView, WebKit2::PrintOperation print_operation)> signal_print()
{ return gi::signal_proxy<bool(WebKit2::WebView, WebKit2::PrintOperation print_operation)> (*this, "print"); }

// signal ready-to-show
gi::signal_proxy<void(WebKit2::WebView)> signal_ready_to_show()
{ return gi::signal_proxy<void(WebKit2::WebView)> (*this, "ready-to-show"); }

// signal resource-load-started
gi::signal_proxy<void(WebKit2::WebView, WebKit2::WebResource resource, WebKit2::URIRequest request)> signal_resource_load_started()
{ return gi::signal_proxy<void(WebKit2::WebView, WebKit2::WebResource resource, WebKit2::URIRequest request)> (*this, "resource-load-started"); }

// signal run-as-modal
gi::signal_proxy<void(WebKit2::WebView)> signal_run_as_modal()
{ return gi::signal_proxy<void(WebKit2::WebView)> (*this, "run-as-modal"); }

// signal run-color-chooser
gi::signal_proxy<bool(WebKit2::WebView, WebKit2::ColorChooserRequest request)> signal_run_color_chooser()
{ return gi::signal_proxy<bool(WebKit2::WebView, WebKit2::ColorChooserRequest request)> (*this, "run-color-chooser"); }

// signal run-file-chooser
gi::signal_proxy<bool(WebKit2::WebView, WebKit2::FileChooserRequest request)> signal_run_file_chooser()
{ return gi::signal_proxy<bool(WebKit2::WebView, WebKit2::FileChooserRequest request)> (*this, "run-file-chooser"); }

// signal script-dialog
gi::signal_proxy<bool(WebKit2::WebView, WebKit2::ScriptDialog dialog)> signal_script_dialog()
{ return gi::signal_proxy<bool(WebKit2::WebView, WebKit2::ScriptDialog dialog)> (*this, "script-dialog"); }

// signal show-notification
gi::signal_proxy<bool(WebKit2::WebView, WebKit2::Notification notification)> signal_show_notification()
{ return gi::signal_proxy<bool(WebKit2::WebView, WebKit2::Notification notification)> (*this, "show-notification"); }

// signal show-option-menu
// SKIP; event type  not supported

// signal submit-form
gi::signal_proxy<void(WebKit2::WebView, WebKit2::FormSubmissionRequest request)> signal_submit_form()
{ return gi::signal_proxy<void(WebKit2::WebView, WebKit2::FormSubmissionRequest request)> (*this, "submit-form"); }

// signal user-message-received
gi::signal_proxy<bool(WebKit2::WebView, WebKit2::UserMessage message)> signal_user_message_received()
{ return gi::signal_proxy<bool(WebKit2::WebView, WebKit2::UserMessage message)> (*this, "user-message-received"); }

// signal web-process-crashed
// IGNORE; deprecated

// signal web-process-terminated
gi::signal_proxy<void(WebKit2::WebView, WebKit2::WebProcessTerminationReason reason)> signal_web_process_terminated()
{ return gi::signal_proxy<void(WebKit2::WebView, WebKit2::WebProcessTerminationReason reason)> (*this, "web-process-terminated"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/webview_extra_def.hpp>)
#include <webkit2/webview_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/webview_extra.hpp>)
#include <webkit2/webview_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class WebView : public GI_WEBKIT2_WEBVIEW_BASE
{ typedef GI_WEBKIT2_WEBVIEW_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitWebView>
{ typedef WebKit2::WebView type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class WebViewClassDef
{
typedef WebViewClassDef self;
public:
typedef WebKit2::WebView instance_type;
typedef ::WebKitWebViewClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean WebView::authenticate (WebKitWebView* web_view, WebKitAuthenticationRequest* request);
// gboolean WebView::authenticate (::WebKitWebView* web_view, ::WebKitAuthenticationRequest* request);
virtual bool authenticate_ (WebKit2::AuthenticationRequest request) noexcept = 0;

// void WebView::close (WebKitWebView* web_view);
// void WebView::close (::WebKitWebView* web_view);
virtual void close_ () noexcept = 0;

// gboolean WebView::context_menu (WebKitWebView* web_view, WebKitContextMenu* context_menu, GdkEvent* event, WebKitHitTestResult* hit_test_result);
// gboolean WebView::context_menu (::WebKitWebView* web_view, ::WebKitContextMenu* context_menu,  event, ::WebKitHitTestResult* hit_test_result);
// SKIP; event type  not supported

// void WebView::context_menu_dismissed (WebKitWebView* web_view);
// void WebView::context_menu_dismissed (::WebKitWebView* web_view);
virtual void context_menu_dismissed_ () noexcept = 0;

// gboolean WebView::decide_policy (WebKitWebView* web_view, WebKitPolicyDecision* decision, WebKitPolicyDecisionType type);
// gboolean WebView::decide_policy (::WebKitWebView* web_view, ::WebKitPolicyDecision* decision, ::WebKitPolicyDecisionType type);
virtual bool decide_policy_ (WebKit2::PolicyDecision decision, WebKit2::PolicyDecisionType type) noexcept = 0;

// gboolean WebView::enter_fullscreen (WebKitWebView* web_view);
// gboolean WebView::enter_fullscreen (::WebKitWebView* web_view);
virtual bool enter_fullscreen_ () noexcept = 0;

// void WebView::insecure_content_detected (WebKitWebView* web_view, WebKitInsecureContentEvent event);
// void WebView::insecure_content_detected (::WebKitWebView* web_view, ::WebKitInsecureContentEvent event);
virtual void insecure_content_detected_ (WebKit2::InsecureContentEvent event) noexcept = 0;

// gboolean WebView::leave_fullscreen (WebKitWebView* web_view);
// gboolean WebView::leave_fullscreen (::WebKitWebView* web_view);
virtual bool leave_fullscreen_ () noexcept = 0;

// void WebView::load_changed (WebKitWebView* web_view, WebKitLoadEvent load_event);
// void WebView::load_changed (::WebKitWebView* web_view, ::WebKitLoadEvent load_event);
virtual void load_changed_ (WebKit2::LoadEvent load_event) noexcept = 0;

// gboolean WebView::load_failed (WebKitWebView* web_view, WebKitLoadEvent load_event, const gchar* failing_uri, GError* error);
// gboolean WebView::load_failed (::WebKitWebView* web_view, ::WebKitLoadEvent load_event, const char* failing_uri, ::GError* error);
virtual bool load_failed_ (WebKit2::LoadEvent load_event, const std::string & failing_uri, GLib::Error error) noexcept = 0;

// gboolean WebView::load_failed_with_tls_errors (WebKitWebView* web_view, const gchar* failing_uri, GTlsCertificate* certificate, GTlsCertificateFlags errors);
// gboolean WebView::load_failed_with_tls_errors (::WebKitWebView* web_view, const char* failing_uri, ::GTlsCertificate* certificate, ::GTlsCertificateFlags errors);
virtual bool load_failed_with_tls_errors_ (const std::string & failing_uri, Gio::TlsCertificate certificate, Gio::TlsCertificateFlags errors) noexcept = 0;

// void WebView::mouse_target_changed (WebKitWebView* web_view, WebKitHitTestResult* hit_test_result, guint modifiers);
// void WebView::mouse_target_changed (::WebKitWebView* web_view, ::WebKitHitTestResult* hit_test_result, guint modifiers);
virtual void mouse_target_changed_ (WebKit2::HitTestResult hit_test_result, guint modifiers) noexcept = 0;

// gboolean WebView::permission_request (WebKitWebView* web_view, WebKitPermissionRequest* permission_request);
// gboolean WebView::permission_request (::WebKitWebView* web_view, ::WebKitPermissionRequest* permission_request);
virtual bool permission_request_ (WebKit2::PermissionRequest permission_request) noexcept = 0;

// gboolean WebView::print (WebKitWebView* web_view, WebKitPrintOperation* print_operation);
// gboolean WebView::print (::WebKitWebView* web_view, ::WebKitPrintOperation* print_operation);
virtual bool print_ (WebKit2::PrintOperation print_operation) noexcept = 0;

// void WebView::ready_to_show (WebKitWebView* web_view);
// void WebView::ready_to_show (::WebKitWebView* web_view);
virtual void ready_to_show_ () noexcept = 0;

// void WebView::resource_load_started (WebKitWebView* web_view, WebKitWebResource* resource, WebKitURIRequest* request);
// void WebView::resource_load_started (::WebKitWebView* web_view, ::WebKitWebResource* resource, ::WebKitURIRequest* request);
virtual void resource_load_started_ (WebKit2::WebResource resource, WebKit2::URIRequest request) noexcept = 0;

// void WebView::run_as_modal (WebKitWebView* web_view);
// void WebView::run_as_modal (::WebKitWebView* web_view);
virtual void run_as_modal_ () noexcept = 0;

// gboolean WebView::run_color_chooser (WebKitWebView* web_view, WebKitColorChooserRequest* request);
// gboolean WebView::run_color_chooser (::WebKitWebView* web_view, ::WebKitColorChooserRequest* request);
virtual bool run_color_chooser_ (WebKit2::ColorChooserRequest request) noexcept = 0;

// gboolean WebView::run_file_chooser (WebKitWebView* web_view, WebKitFileChooserRequest* request);
// gboolean WebView::run_file_chooser (::WebKitWebView* web_view, ::WebKitFileChooserRequest* request);
virtual bool run_file_chooser_ (WebKit2::FileChooserRequest request) noexcept = 0;

// gboolean WebView::script_dialog (WebKitWebView* web_view, WebKitScriptDialog* dialog);
// gboolean WebView::script_dialog (::WebKitWebView* web_view, ::WebKitScriptDialog* dialog);
virtual bool script_dialog_ (WebKit2::ScriptDialog dialog) noexcept = 0;

// gboolean WebView::show_notification (WebKitWebView* web_view, WebKitNotification* notification);
// gboolean WebView::show_notification (::WebKitWebView* web_view, ::WebKitNotification* notification);
virtual bool show_notification_ (WebKit2::Notification notification) noexcept = 0;

// gboolean WebView::show_option_menu (WebKitWebView* web_view, GdkRectangle* rectangle, WebKitOptionMenu* menu);
// gboolean WebView::show_option_menu (::WebKitWebView* web_view, ::GdkRectangle* rectangle, ::WebKitOptionMenu* menu);
virtual bool show_option_menu_ (Gdk::Rectangle rectangle, WebKit2::OptionMenu menu) noexcept = 0;

// void WebView::submit_form (WebKitWebView* web_view, WebKitFormSubmissionRequest* request);
// void WebView::submit_form (::WebKitWebView* web_view, ::WebKitFormSubmissionRequest* request);
virtual void submit_form_ (WebKit2::FormSubmissionRequest request) noexcept = 0;

// gboolean WebView::user_message_received (WebKitWebView* web_view, WebKitUserMessage* message);
// gboolean WebView::user_message_received (::WebKitWebView* web_view, ::WebKitUserMessage* message);
virtual bool user_message_received_ (WebKit2::UserMessage message) noexcept = 0;

// gboolean WebView::web_process_crashed (WebKitWebView* web_view);
// gboolean WebView::web_process_crashed (::WebKitWebView* web_view);
virtual bool web_process_crashed_ () noexcept = 0;

// void WebView::web_process_terminated (WebKitWebView* web_view, WebKitWebProcessTerminationReason reason);
// void WebView::web_process_terminated (::WebKitWebView* web_view, ::WebKitWebProcessTerminationReason reason);
virtual void web_process_terminated_ (WebKit2::WebProcessTerminationReason reason) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class WebViewClass: public detail::ClassTemplate<WebKit2::impl::internal::WebViewClassDef, WebKit2::impl::internal::WebViewBaseClass>
{
typedef WebViewClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::WebViewClassDef, WebKit2::impl::internal::WebViewBaseClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean WebView::authenticate (WebKitWebView* web_view, WebKitAuthenticationRequest* request);
// gboolean WebView::authenticate (::WebKitWebView* web_view, ::WebKitAuthenticationRequest* request);
GI_INLINE_DECL bool authenticate_ (WebKit2::AuthenticationRequest request) noexcept override;

// void WebView::close (WebKitWebView* web_view);
// void WebView::close (::WebKitWebView* web_view);
GI_INLINE_DECL void close_ () noexcept override;

// gboolean WebView::context_menu (WebKitWebView* web_view, WebKitContextMenu* context_menu, GdkEvent* event, WebKitHitTestResult* hit_test_result);
// gboolean WebView::context_menu (::WebKitWebView* web_view, ::WebKitContextMenu* context_menu,  event, ::WebKitHitTestResult* hit_test_result);
// SKIP; event type  not supported

// void WebView::context_menu_dismissed (WebKitWebView* web_view);
// void WebView::context_menu_dismissed (::WebKitWebView* web_view);
GI_INLINE_DECL void context_menu_dismissed_ () noexcept override;

// gboolean WebView::decide_policy (WebKitWebView* web_view, WebKitPolicyDecision* decision, WebKitPolicyDecisionType type);
// gboolean WebView::decide_policy (::WebKitWebView* web_view, ::WebKitPolicyDecision* decision, ::WebKitPolicyDecisionType type);
GI_INLINE_DECL bool decide_policy_ (WebKit2::PolicyDecision decision, WebKit2::PolicyDecisionType type) noexcept override;

// gboolean WebView::enter_fullscreen (WebKitWebView* web_view);
// gboolean WebView::enter_fullscreen (::WebKitWebView* web_view);
GI_INLINE_DECL bool enter_fullscreen_ () noexcept override;

// void WebView::insecure_content_detected (WebKitWebView* web_view, WebKitInsecureContentEvent event);
// void WebView::insecure_content_detected (::WebKitWebView* web_view, ::WebKitInsecureContentEvent event);
GI_INLINE_DECL void insecure_content_detected_ (WebKit2::InsecureContentEvent event) noexcept override;

// gboolean WebView::leave_fullscreen (WebKitWebView* web_view);
// gboolean WebView::leave_fullscreen (::WebKitWebView* web_view);
GI_INLINE_DECL bool leave_fullscreen_ () noexcept override;

// void WebView::load_changed (WebKitWebView* web_view, WebKitLoadEvent load_event);
// void WebView::load_changed (::WebKitWebView* web_view, ::WebKitLoadEvent load_event);
GI_INLINE_DECL void load_changed_ (WebKit2::LoadEvent load_event) noexcept override;

// gboolean WebView::load_failed (WebKitWebView* web_view, WebKitLoadEvent load_event, const gchar* failing_uri, GError* error);
// gboolean WebView::load_failed (::WebKitWebView* web_view, ::WebKitLoadEvent load_event, const char* failing_uri, ::GError* error);
GI_INLINE_DECL bool load_failed_ (WebKit2::LoadEvent load_event, const std::string & failing_uri, GLib::Error error) noexcept override;

// gboolean WebView::load_failed_with_tls_errors (WebKitWebView* web_view, const gchar* failing_uri, GTlsCertificate* certificate, GTlsCertificateFlags errors);
// gboolean WebView::load_failed_with_tls_errors (::WebKitWebView* web_view, const char* failing_uri, ::GTlsCertificate* certificate, ::GTlsCertificateFlags errors);
GI_INLINE_DECL bool load_failed_with_tls_errors_ (const std::string & failing_uri, Gio::TlsCertificate certificate, Gio::TlsCertificateFlags errors) noexcept override;

// void WebView::mouse_target_changed (WebKitWebView* web_view, WebKitHitTestResult* hit_test_result, guint modifiers);
// void WebView::mouse_target_changed (::WebKitWebView* web_view, ::WebKitHitTestResult* hit_test_result, guint modifiers);
GI_INLINE_DECL void mouse_target_changed_ (WebKit2::HitTestResult hit_test_result, guint modifiers) noexcept override;

// gboolean WebView::permission_request (WebKitWebView* web_view, WebKitPermissionRequest* permission_request);
// gboolean WebView::permission_request (::WebKitWebView* web_view, ::WebKitPermissionRequest* permission_request);
GI_INLINE_DECL bool permission_request_ (WebKit2::PermissionRequest permission_request) noexcept override;

// gboolean WebView::print (WebKitWebView* web_view, WebKitPrintOperation* print_operation);
// gboolean WebView::print (::WebKitWebView* web_view, ::WebKitPrintOperation* print_operation);
GI_INLINE_DECL bool print_ (WebKit2::PrintOperation print_operation) noexcept override;

// void WebView::ready_to_show (WebKitWebView* web_view);
// void WebView::ready_to_show (::WebKitWebView* web_view);
GI_INLINE_DECL void ready_to_show_ () noexcept override;

// void WebView::resource_load_started (WebKitWebView* web_view, WebKitWebResource* resource, WebKitURIRequest* request);
// void WebView::resource_load_started (::WebKitWebView* web_view, ::WebKitWebResource* resource, ::WebKitURIRequest* request);
GI_INLINE_DECL void resource_load_started_ (WebKit2::WebResource resource, WebKit2::URIRequest request) noexcept override;

// void WebView::run_as_modal (WebKitWebView* web_view);
// void WebView::run_as_modal (::WebKitWebView* web_view);
GI_INLINE_DECL void run_as_modal_ () noexcept override;

// gboolean WebView::run_color_chooser (WebKitWebView* web_view, WebKitColorChooserRequest* request);
// gboolean WebView::run_color_chooser (::WebKitWebView* web_view, ::WebKitColorChooserRequest* request);
GI_INLINE_DECL bool run_color_chooser_ (WebKit2::ColorChooserRequest request) noexcept override;

// gboolean WebView::run_file_chooser (WebKitWebView* web_view, WebKitFileChooserRequest* request);
// gboolean WebView::run_file_chooser (::WebKitWebView* web_view, ::WebKitFileChooserRequest* request);
GI_INLINE_DECL bool run_file_chooser_ (WebKit2::FileChooserRequest request) noexcept override;

// gboolean WebView::script_dialog (WebKitWebView* web_view, WebKitScriptDialog* dialog);
// gboolean WebView::script_dialog (::WebKitWebView* web_view, ::WebKitScriptDialog* dialog);
GI_INLINE_DECL bool script_dialog_ (WebKit2::ScriptDialog dialog) noexcept override;

// gboolean WebView::show_notification (WebKitWebView* web_view, WebKitNotification* notification);
// gboolean WebView::show_notification (::WebKitWebView* web_view, ::WebKitNotification* notification);
GI_INLINE_DECL bool show_notification_ (WebKit2::Notification notification) noexcept override;

// gboolean WebView::show_option_menu (WebKitWebView* web_view, GdkRectangle* rectangle, WebKitOptionMenu* menu);
// gboolean WebView::show_option_menu (::WebKitWebView* web_view, ::GdkRectangle* rectangle, ::WebKitOptionMenu* menu);
GI_INLINE_DECL bool show_option_menu_ (Gdk::Rectangle rectangle, WebKit2::OptionMenu menu) noexcept override;

// void WebView::submit_form (WebKitWebView* web_view, WebKitFormSubmissionRequest* request);
// void WebView::submit_form (::WebKitWebView* web_view, ::WebKitFormSubmissionRequest* request);
GI_INLINE_DECL void submit_form_ (WebKit2::FormSubmissionRequest request) noexcept override;

// gboolean WebView::user_message_received (WebKitWebView* web_view, WebKitUserMessage* message);
// gboolean WebView::user_message_received (::WebKitWebView* web_view, ::WebKitUserMessage* message);
GI_INLINE_DECL bool user_message_received_ (WebKit2::UserMessage message) noexcept override;

// gboolean WebView::web_process_crashed (WebKitWebView* web_view);
// gboolean WebView::web_process_crashed (::WebKitWebView* web_view);
GI_INLINE_DECL bool web_process_crashed_ () noexcept override;

// void WebView::web_process_terminated (WebKitWebView* web_view, WebKitWebProcessTerminationReason reason);
// void WebView::web_process_terminated (::WebKitWebView* web_view, ::WebKitWebProcessTerminationReason reason);
GI_INLINE_DECL void web_process_terminated_ (WebKit2::WebProcessTerminationReason reason) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using WebViewImpl = detail::ObjectImpl<WebView, internal::WebViewClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
