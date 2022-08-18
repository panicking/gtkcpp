// AUTO-GENERATED

#ifndef _GI_GIO_APPINFO_IMPL_HPP_
#define _GI_GIO_APPINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GAppInfo* g_app_info_create_from_commandline (const char* commandline, const char* application_name, GAppInfoCreateFlags flags, GError ** error);
// ::GAppInfo* g_app_info_create_from_commandline (const char* commandline, const char* application_name, ::GAppInfoCreateFlags flags, GError ** error);
Gio::AppInfo base::AppInfoBase::create_from_commandline (const std::string & commandline, const std::string & application_name, Gio::AppInfoCreateFlags flags)
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* commandline, const char* application_name, ::GAppInfoCreateFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_create_from_commandline;
  auto flags_to_c = gi::unwrap (flags);
  auto application_name_to_c = gi::unwrap (application_name, gi::transfer_none, gi::direction_in);
  auto commandline_to_c = gi::unwrap (commandline, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (commandline_to_c), (const char*) (application_name_to_c), (::GAppInfoCreateFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::AppInfo base::AppInfoBase::create_from_commandline (const std::string & commandline, Gio::AppInfoCreateFlags flags)
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* commandline, const char* application_name, ::GAppInfoCreateFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_create_from_commandline;
  auto flags_to_c = gi::unwrap (flags);
  auto application_name_to_c = nullptr;
  auto commandline_to_c = gi::unwrap (commandline, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (commandline_to_c), (const char*) (application_name_to_c), (::GAppInfoCreateFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::AppInfo base::AppInfoBase::create_from_commandline (const std::string & commandline, const std::string & application_name, Gio::AppInfoCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* commandline, const char* application_name, ::GAppInfoCreateFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_create_from_commandline;
  auto flags_to_c = gi::unwrap (flags);
  auto application_name_to_c = gi::unwrap (application_name, gi::transfer_none, gi::direction_in);
  auto commandline_to_c = gi::unwrap (commandline, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (commandline_to_c), (const char*) (application_name_to_c), (::GAppInfoCreateFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::AppInfo base::AppInfoBase::create_from_commandline (const std::string & commandline, Gio::AppInfoCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* commandline, const char* application_name, ::GAppInfoCreateFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_create_from_commandline;
  auto flags_to_c = gi::unwrap (flags);
  auto application_name_to_c = nullptr;
  auto commandline_to_c = gi::unwrap (commandline, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (commandline_to_c), (const char*) (application_name_to_c), (::GAppInfoCreateFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* g_app_info_get_all ();
// ::GList* g_app_info_get_all ();
std::vector<Gio::AppInfo> base::AppInfoBase::get_all () noexcept
{
  typedef ::GList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_all;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<Gio::AppInfo> (_temp_ret, gi::transfer_full);
}

// GList* g_app_info_get_all_for_type (const char* content_type);
// ::GList* g_app_info_get_all_for_type (const char* content_type);
std::vector<Gio::AppInfo> base::AppInfoBase::get_all_for_type (const std::string & content_type) noexcept
{
  typedef ::GList* (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_all_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c));
  return gi::detail::wrap_list<Gio::AppInfo> (_temp_ret, gi::transfer_full);
}

// GAppInfo* g_app_info_get_default_for_type (const char* content_type, gboolean must_support_uris);
// ::GAppInfo* g_app_info_get_default_for_type (const char* content_type, gboolean must_support_uris);
Gio::AppInfo base::AppInfoBase::get_default_for_type (const std::string & content_type, gboolean must_support_uris) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* content_type, gboolean must_support_uris);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_default_for_type;
  auto must_support_uris_to_c = must_support_uris;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c), (gboolean) (must_support_uris_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GAppInfo* g_app_info_get_default_for_uri_scheme (const char* uri_scheme);
// ::GAppInfo* g_app_info_get_default_for_uri_scheme (const char* uri_scheme);
Gio::AppInfo base::AppInfoBase::get_default_for_uri_scheme (const std::string & uri_scheme) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (const char* uri_scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_default_for_uri_scheme;
  auto uri_scheme_to_c = gi::unwrap (uri_scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_scheme_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* g_app_info_get_fallback_for_type (const gchar* content_type);
// ::GList* g_app_info_get_fallback_for_type (const char* content_type);
std::vector<Gio::AppInfo> base::AppInfoBase::get_fallback_for_type (const std::string & content_type) noexcept
{
  typedef ::GList* (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_fallback_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c));
  return gi::detail::wrap_list<Gio::AppInfo> (_temp_ret, gi::transfer_full);
}

// GList* g_app_info_get_recommended_for_type (const gchar* content_type);
// ::GList* g_app_info_get_recommended_for_type (const char* content_type);
std::vector<Gio::AppInfo> base::AppInfoBase::get_recommended_for_type (const std::string & content_type) noexcept
{
  typedef ::GList* (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_recommended_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c));
  return gi::detail::wrap_list<Gio::AppInfo> (_temp_ret, gi::transfer_full);
}

// gboolean g_app_info_launch_default_for_uri (const char* uri, GAppLaunchContext* context, GError ** error);
// gboolean g_app_info_launch_default_for_uri (const char* uri, ::GAppLaunchContext* context, GError ** error);
bool base::AppInfoBase::launch_default_for_uri (const std::string & uri, Gio::AppLaunchContext context)
{
  typedef gboolean (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_default_for_uri;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_default_for_uri (const std::string & uri)
{
  typedef gboolean (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_default_for_uri;
  auto context_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_default_for_uri (const std::string & uri, Gio::AppLaunchContext context, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_default_for_uri;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::AppInfoBase::launch_default_for_uri (const std::string & uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_default_for_uri;
  auto context_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_app_info_launch_default_for_uri_async (const char* uri, GAppLaunchContext* context, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_app_info_launch_default_for_uri_async (const char* uri, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::AppInfoBase::launch_default_for_uri_async (const std::string & uri, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_default_for_uri_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::AppInfoBase::launch_default_for_uri_async (const std::string & uri, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* uri, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_default_for_uri_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto context_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (uri_to_c), (::GAppLaunchContext*) (context_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_app_info_launch_default_for_uri_finish (GAsyncResult* result, GError ** error);
// gboolean g_app_info_launch_default_for_uri_finish (::GAsyncResult* result, GError ** error);
bool base::AppInfoBase::launch_default_for_uri_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_default_for_uri_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_default_for_uri_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_default_for_uri_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_app_info_reset_type_associations (const char* content_type);
// void g_app_info_reset_type_associations (const char* content_type);
void base::AppInfoBase::reset_type_associations (const std::string & content_type) noexcept
{
  typedef void (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_reset_type_associations;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (content_type_to_c));
}

// gboolean g_app_info_add_supports_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean g_app_info_add_supports_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
bool base::AppInfoBase::add_supports_type (const std::string & content_type)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_add_supports_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::add_supports_type (const std::string & content_type, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_add_supports_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_app_info_can_delete (GAppInfo* appinfo);
// gboolean g_app_info_can_delete (::GAppInfo* appinfo);
bool base::AppInfoBase::can_delete () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_can_delete;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_app_info_can_remove_supports_type (GAppInfo* appinfo);
// gboolean g_app_info_can_remove_supports_type (::GAppInfo* appinfo);
bool base::AppInfoBase::can_remove_supports_type () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_can_remove_supports_type;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_app_info_delete (GAppInfo* appinfo);
// gboolean g_app_info_delete (::GAppInfo* appinfo);
bool base::AppInfoBase::delete_ () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_delete;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// GAppInfo* g_app_info_dup (GAppInfo* appinfo);
// ::GAppInfo* g_app_info_dup (::GAppInfo* appinfo);
Gio::AppInfo base::AppInfoBase::dup () noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_dup;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_app_info_equal (GAppInfo* appinfo1, GAppInfo* appinfo2);
// gboolean g_app_info_equal (::GAppInfo* appinfo1, ::GAppInfo* appinfo2);
bool base::AppInfoBase::equal (Gio::AppInfo appinfo2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo1, ::GAppInfo* appinfo2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_equal;
  auto appinfo2_to_c = gi::unwrap (appinfo2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GAppInfo*) (appinfo2_to_c));
  return _temp_ret;
}

// const char* g_app_info_get_commandline (GAppInfo* appinfo);
// const char* g_app_info_get_commandline (::GAppInfo* appinfo);
std::string base::AppInfoBase::get_commandline () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_commandline;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* g_app_info_get_description (GAppInfo* appinfo);
// const char* g_app_info_get_description (::GAppInfo* appinfo);
std::string base::AppInfoBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_description;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* g_app_info_get_display_name (GAppInfo* appinfo);
// const char* g_app_info_get_display_name (::GAppInfo* appinfo);
std::string base::AppInfoBase::get_display_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_display_name;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* g_app_info_get_executable (GAppInfo* appinfo);
// const char* g_app_info_get_executable (::GAppInfo* appinfo);
std::string base::AppInfoBase::get_executable () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_executable;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GIcon* g_app_info_get_icon (GAppInfo* appinfo);
// ::GIcon* g_app_info_get_icon (::GAppInfo* appinfo);
Gio::Icon base::AppInfoBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_icon;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* g_app_info_get_id (GAppInfo* appinfo);
// const char* g_app_info_get_id (::GAppInfo* appinfo);
std::string base::AppInfoBase::get_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_id;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* g_app_info_get_name (GAppInfo* appinfo);
// const char* g_app_info_get_name (::GAppInfo* appinfo);
std::string base::AppInfoBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_name;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char** g_app_info_get_supported_types (GAppInfo* appinfo);
// const char** g_app_info_get_supported_types (::GAppInfo* appinfo);
std::vector<std::string> base::AppInfoBase::get_supported_types () noexcept
{
  typedef const char** (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_get_supported_types;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// gboolean g_app_info_launch (GAppInfo* appinfo, GList* files, GAppLaunchContext* context, GError ** error);
// gboolean g_app_info_launch (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
bool base::AppInfoBase::launch (const std::vector<Gio::File> & files, Gio::AppLaunchContext context)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto files_i = detail::make_list_unwrap_range<::GList> (files);
  auto files_w = unwrap (files_i, gi::transfer_none, direction_in);
  auto files_to_c = files_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (files_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch (const std::vector<Gio::File> & files)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch;
  auto context_to_c = nullptr;
  auto files_i = detail::make_list_unwrap_range<::GList> (files);
  auto files_w = unwrap (files_i, gi::transfer_none, direction_in);
  auto files_to_c = files_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (files_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch (const std::vector<Gio::File> & files, Gio::AppLaunchContext context, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto files_i = detail::make_list_unwrap_range<::GList> (files);
  auto files_w = unwrap (files_i, gi::transfer_none, direction_in);
  auto files_to_c = files_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (files_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::AppInfoBase::launch (const std::vector<Gio::File> & files, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch;
  auto context_to_c = nullptr;
  auto files_i = detail::make_list_unwrap_range<::GList> (files);
  auto files_w = unwrap (files_i, gi::transfer_none, direction_in);
  auto files_to_c = files_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (files_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_app_info_launch_uris (GAppInfo* appinfo, GList* uris, GAppLaunchContext* context, GError ** error);
// gboolean g_app_info_launch_uris (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
bool base::AppInfoBase::launch_uris (const std::vector<std::string> & uris, Gio::AppLaunchContext context)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_uris;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto uris_i = detail::make_list_unwrap_range<::GList> (uris);
  auto uris_w = unwrap (uris_i, gi::transfer_none, direction_in);
  auto uris_to_c = uris_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_uris (const std::vector<std::string> & uris)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_uris;
  auto context_to_c = nullptr;
  auto uris_i = detail::make_list_unwrap_range<::GList> (uris);
  auto uris_w = unwrap (uris_i, gi::transfer_none, direction_in);
  auto uris_to_c = uris_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_uris (const std::vector<std::string> & uris, Gio::AppLaunchContext context, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_uris;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto uris_i = detail::make_list_unwrap_range<::GList> (uris);
  auto uris_w = unwrap (uris_i, gi::transfer_none, direction_in);
  auto uris_to_c = uris_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::AppInfoBase::launch_uris (const std::vector<std::string> & uris, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_uris;
  auto context_to_c = nullptr;
  auto uris_i = detail::make_list_unwrap_range<::GList> (uris);
  auto uris_w = unwrap (uris_i, gi::transfer_none, direction_in);
  auto uris_to_c = uris_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_app_info_launch_uris_async (GAppInfo* appinfo, GList* uris, GAppLaunchContext* context, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_app_info_launch_uris_async (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::AppInfoBase::launch_uris_async (const std::vector<std::string> & uris, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_uris_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto uris_i = detail::make_list_unwrap_range<::GList> (uris);
  auto uris_w = unwrap (uris_i, gi::transfer_none, direction_in);
  auto uris_to_c = uris_w.gobj_(false);
  call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::AppInfoBase::launch_uris_async (const std::vector<std::string> & uris, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_uris_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto context_to_c = nullptr;
  auto uris_i = detail::make_list_unwrap_range<::GList> (uris);
  auto uris_w = unwrap (uris_i, gi::transfer_none, direction_in);
  auto uris_to_c = uris_w.gobj_(false);
  call_wrap_v ((::GAppInfo*) (gobj_()), (::GList*) (uris_to_c), (::GAppLaunchContext*) (context_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_app_info_launch_uris_finish (GAppInfo* appinfo, GAsyncResult* result, GError ** error);
// gboolean g_app_info_launch_uris_finish (::GAppInfo* appinfo, ::GAsyncResult* result, GError ** error);
bool base::AppInfoBase::launch_uris_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_uris_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::launch_uris_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_launch_uris_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_app_info_remove_supports_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean g_app_info_remove_supports_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
bool base::AppInfoBase::remove_supports_type (const std::string & content_type)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_remove_supports_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::remove_supports_type (const std::string & content_type, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_remove_supports_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_app_info_set_as_default_for_extension (GAppInfo* appinfo, const char* extension, GError ** error);
// gboolean g_app_info_set_as_default_for_extension (::GAppInfo* appinfo, const char* extension, GError ** error);
bool base::AppInfoBase::set_as_default_for_extension (const std::string & extension)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* extension, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_set_as_default_for_extension;
  auto extension_to_c = gi::unwrap (extension, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (extension_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::set_as_default_for_extension (const std::string & extension, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* extension, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_set_as_default_for_extension;
  auto extension_to_c = gi::unwrap (extension, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (extension_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_app_info_set_as_default_for_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean g_app_info_set_as_default_for_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
bool base::AppInfoBase::set_as_default_for_type (const std::string & content_type)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_set_as_default_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::set_as_default_for_type (const std::string & content_type, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_set_as_default_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_app_info_set_as_last_used_for_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean g_app_info_set_as_last_used_for_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
bool base::AppInfoBase::set_as_last_used_for_type (const std::string & content_type)
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_set_as_last_used_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::AppInfoBase::set_as_last_used_for_type (const std::string & content_type, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo, const char* content_type, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_set_as_last_used_for_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (const char*) (content_type_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_app_info_should_show (GAppInfo* appinfo);
// gboolean g_app_info_should_show (::GAppInfo* appinfo);
bool base::AppInfoBase::should_show () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_should_show;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_app_info_supports_files (GAppInfo* appinfo);
// gboolean g_app_info_supports_files (::GAppInfo* appinfo);
bool base::AppInfoBase::supports_files () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_supports_files;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_app_info_supports_uris (GAppInfo* appinfo);
// gboolean g_app_info_supports_uris (::GAppInfo* appinfo);
bool base::AppInfoBase::supports_uris () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_supports_uris;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/appinfo_extra_def_impl.hpp>)
#include <gio/appinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/appinfo_extra_impl.hpp>)
#include <gio/appinfo_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void AppInfoIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GAppInfoIface *methods = (::GAppInfoIface *) interface_struct;
  (void) methods;

  methods->can_delete = (decltype (methods->can_delete)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_delete_>;
  methods->can_remove_supports_type = (decltype (methods->can_remove_supports_type)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_remove_supports_type_>;
  methods->do_delete = (decltype (methods->do_delete)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::do_delete_>;
  methods->dup = (decltype (methods->dup)) detail::method_wrapper<self, Gio::AppInfo (*) (), gi::transfer_full_t>::wrapper<&self::dup_>;
  methods->equal = (decltype (methods->equal)) detail::method_wrapper<self, bool (*) (Gio::AppInfo appinfo2), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::equal_>;
  methods->get_icon = (decltype (methods->get_icon)) detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_none_t>::wrapper<&self::get_icon_>;
  methods->should_show = (decltype (methods->should_show)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::should_show_>;
  methods->supports_files = (decltype (methods->supports_files)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::supports_files_>;
  methods->supports_uris = (decltype (methods->supports_uris)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::supports_uris_>;
}

// gboolean AppInfo::add_supports_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::add_supports_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::can_delete (GAppInfo* appinfo);
// gboolean AppInfo::can_delete (::GAppInfo* appinfo);
bool AppInfoIfaceClassImpl::can_delete_ () noexcept
{
  if (!get_struct_()->can_delete) return bool{};
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_delete;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean AppInfo::can_remove_supports_type (GAppInfo* appinfo);
// gboolean AppInfo::can_remove_supports_type (::GAppInfo* appinfo);
bool AppInfoIfaceClassImpl::can_remove_supports_type_ () noexcept
{
  if (!get_struct_()->can_remove_supports_type) return bool{};
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_remove_supports_type;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean AppInfo::do_delete (GAppInfo* appinfo);
// gboolean AppInfo::do_delete (::GAppInfo* appinfo);
bool AppInfoIfaceClassImpl::do_delete_ () noexcept
{
  if (!get_struct_()->do_delete) return bool{};
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->do_delete;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// GAppInfo* AppInfo::dup (GAppInfo* appinfo);
// ::GAppInfo* AppInfo::dup (::GAppInfo* appinfo);
Gio::AppInfo AppInfoIfaceClassImpl::dup_ () noexcept
{
  if (!get_struct_()->dup) return Gio::AppInfo{};
  typedef ::GAppInfo* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->dup;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean AppInfo::equal (GAppInfo* appinfo1, GAppInfo* appinfo2);
// gboolean AppInfo::equal (::GAppInfo* appinfo1, ::GAppInfo* appinfo2);
bool AppInfoIfaceClassImpl::equal_ (Gio::AppInfo appinfo2) noexcept
{
  if (!get_struct_()->equal) return bool{};
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo1, ::GAppInfo* appinfo2);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->equal;
  auto appinfo2_to_c = gi::unwrap (appinfo2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()), (::GAppInfo*) (appinfo2_to_c));
  return _temp_ret;
}

// const char* AppInfo::get_commandline (GAppInfo* appinfo);
// const char* AppInfo::get_commandline (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_description (GAppInfo* appinfo);
// const char* AppInfo::get_description (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_display_name (GAppInfo* appinfo);
// const char* AppInfo::get_display_name (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_executable (GAppInfo* appinfo);
// const char* AppInfo::get_executable (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// GIcon* AppInfo::get_icon (GAppInfo* appinfo);
// ::GIcon* AppInfo::get_icon (::GAppInfo* appinfo);
Gio::Icon AppInfoIfaceClassImpl::get_icon_ () noexcept
{
  if (!get_struct_()->get_icon) return Gio::Icon{};
  typedef ::GIcon* (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_icon;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* AppInfo::get_id (GAppInfo* appinfo);
// const char* AppInfo::get_id (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_name (GAppInfo* appinfo);
// const char* AppInfo::get_name (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char** AppInfo::get_supported_types (GAppInfo* appinfo);
// const char** AppInfo::get_supported_types (::GAppInfo* appinfo);
// SKIP; container return not supported

// gboolean AppInfo::launch (GAppInfo* appinfo, GList* files, GAppLaunchContext* context, GError ** error);
// gboolean AppInfo::launch (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// gboolean AppInfo::launch_uris (GAppInfo* appinfo, GList* uris, GAppLaunchContext* context, GError ** error);
// gboolean AppInfo::launch_uris (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// void AppInfo::launch_uris_async (GAppInfo* appinfo, GList* uris, GAppLaunchContext* context, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void AppInfo::launch_uris_async (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method container parameter not supported, virtual-method callback parameter not supported

// gboolean AppInfo::launch_uris_finish (GAppInfo* appinfo, GAsyncResult* result, GError ** error);
// gboolean AppInfo::launch_uris_finish (::GAppInfo* appinfo, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::remove_supports_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::remove_supports_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::set_as_default_for_extension (GAppInfo* appinfo, const char* extension, GError ** error);
// gboolean AppInfo::set_as_default_for_extension (::GAppInfo* appinfo, const char* extension, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::set_as_default_for_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::set_as_default_for_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::set_as_last_used_for_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::set_as_last_used_for_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::should_show (GAppInfo* appinfo);
// gboolean AppInfo::should_show (::GAppInfo* appinfo);
bool AppInfoIfaceClassImpl::should_show_ () noexcept
{
  if (!get_struct_()->should_show) return bool{};
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->should_show;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean AppInfo::supports_files (GAppInfo* appinfo);
// gboolean AppInfo::supports_files (::GAppInfo* appinfo);
bool AppInfoIfaceClassImpl::supports_files_ () noexcept
{
  if (!get_struct_()->supports_files) return bool{};
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->supports_files;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean AppInfo::supports_uris (GAppInfo* appinfo);
// gboolean AppInfo::supports_uris (::GAppInfo* appinfo);
bool AppInfoIfaceClassImpl::supports_uris_ () noexcept
{
  if (!get_struct_()->supports_uris) return bool{};
  typedef gboolean (*call_wrap_t) (::GAppInfo* appinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->supports_uris;
  auto _temp_ret = call_wrap_v ((::GAppInfo*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
