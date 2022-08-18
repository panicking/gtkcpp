// AUTO-GENERATED

#ifndef _GI_GIO_APPLAUNCHCONTEXT_IMPL_HPP_
#define _GI_GIO_APPLAUNCHCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GAppLaunchContext* g_app_launch_context_new ();
// ::GAppLaunchContext* g_app_launch_context_new ();
Gio::AppLaunchContext base::AppLaunchContextBase::new_ () noexcept
{
  typedef ::GAppLaunchContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_launch_context_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_app_launch_context_get_display (GAppLaunchContext* context, GAppInfo* info, GList* files);
// char* g_app_launch_context_get_display (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
std::string base::AppLaunchContextBase::get_display (Gio::AppInfo info, const std::vector<Gio::File> & files) noexcept
{
  typedef char* (*call_wrap_t) (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_launch_context_get_display;
  auto files_i = detail::make_list_unwrap_range<::GList> (files);
  auto files_w = unwrap (files_i, gi::transfer_none, direction_in);
  auto files_to_c = files_w.gobj_(false);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GAppLaunchContext*) (gobj_()), (::GAppInfo*) (info_to_c), (::GList*) (files_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char** g_app_launch_context_get_environment (GAppLaunchContext* context);
// char** g_app_launch_context_get_environment (::GAppLaunchContext* context);
std::vector<std::string> base::AppLaunchContextBase::get_environment () noexcept
{
  typedef char** (*call_wrap_t) (::GAppLaunchContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_launch_context_get_environment;
  auto _temp_ret = call_wrap_v ((::GAppLaunchContext*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// char* g_app_launch_context_get_startup_notify_id (GAppLaunchContext* context, GAppInfo* info, GList* files);
// char* g_app_launch_context_get_startup_notify_id (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
std::string base::AppLaunchContextBase::get_startup_notify_id (Gio::AppInfo info, const std::vector<Gio::File> & files) noexcept
{
  typedef char* (*call_wrap_t) (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_launch_context_get_startup_notify_id;
  auto files_i = detail::make_list_unwrap_range<::GList> (files);
  auto files_w = unwrap (files_i, gi::transfer_none, direction_in);
  auto files_to_c = files_w.gobj_(false);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GAppLaunchContext*) (gobj_()), (::GAppInfo*) (info_to_c), (::GList*) (files_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_app_launch_context_launch_failed (GAppLaunchContext* context, const char* startup_notify_id);
// void g_app_launch_context_launch_failed (::GAppLaunchContext* context, const char* startup_notify_id);
void base::AppLaunchContextBase::launch_failed (const std::string & startup_notify_id) noexcept
{
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, const char* startup_notify_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_launch_context_launch_failed;
  auto startup_notify_id_to_c = gi::unwrap (startup_notify_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (const char*) (startup_notify_id_to_c));
}

// void g_app_launch_context_setenv (GAppLaunchContext* context, const char* variable, const char* value);
// void g_app_launch_context_setenv (::GAppLaunchContext* context, const char* variable, const char* value);
void base::AppLaunchContextBase::setenv (const std::string & variable, const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, const char* variable, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_launch_context_setenv;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (const char*) (variable_to_c), (const char*) (value_to_c));
}

// void g_app_launch_context_unsetenv (GAppLaunchContext* context, const char* variable);
// void g_app_launch_context_unsetenv (::GAppLaunchContext* context, const char* variable);
void base::AppLaunchContextBase::unsetenv (const std::string & variable) noexcept
{
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_launch_context_unsetenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (const char*) (variable_to_c));
}





} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/applaunchcontext_extra_def_impl.hpp>)
#include <gio/applaunchcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/applaunchcontext_extra_impl.hpp>)
#include <gio/applaunchcontext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void AppLaunchContextClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GAppLaunchContextClass *methods = (::GAppLaunchContextClass *) class_struct;
  (void) methods;

  methods->launch_failed = (decltype (methods->launch_failed)) detail::method_wrapper<self, void (*) (const std::string & startup_notify_id), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::launch_failed_>;
  methods->launch_started = (decltype (methods->launch_started)) detail::method_wrapper<self, void (*) (Gio::AppInfo info, GLib::Variant platform_data), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::launch_started_>;
  methods->launched = (decltype (methods->launched)) detail::method_wrapper<self, void (*) (Gio::AppInfo info, GLib::Variant platform_data), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::launched_>;
}

// char* AppLaunchContext::get_display (GAppLaunchContext* context, GAppInfo* info, GList* files);
// char* AppLaunchContext::get_display (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
// SKIP; virtual-method container parameter not supported

// char* AppLaunchContext::get_startup_notify_id (GAppLaunchContext* context, GAppInfo* info, GList* files);
// char* AppLaunchContext::get_startup_notify_id (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
// SKIP; virtual-method container parameter not supported

// void AppLaunchContext::launch_failed (GAppLaunchContext* context, const char* startup_notify_id);
// void AppLaunchContext::launch_failed (::GAppLaunchContext* context, const char* startup_notify_id);
void AppLaunchContextClass::launch_failed_ (const std::string & startup_notify_id) noexcept
{
  if (!get_struct_()->launch_failed) return ;
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, const char* startup_notify_id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->launch_failed;
  auto startup_notify_id_to_c = gi::unwrap (startup_notify_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (const char*) (startup_notify_id_to_c));
}

// void AppLaunchContext::launch_started (GAppLaunchContext* context, GAppInfo* info, GVariant* platform_data);
// void AppLaunchContext::launch_started (::GAppLaunchContext* context, ::GAppInfo* info, ::GVariant* platform_data);
void AppLaunchContextClass::launch_started_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept
{
  if (!get_struct_()->launch_started) return ;
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, ::GAppInfo* info, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->launch_started;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none, gi::direction_in);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (::GAppInfo*) (info_to_c), (::GVariant*) (platform_data_to_c));
}

// void AppLaunchContext::launched (GAppLaunchContext* context, GAppInfo* info, GVariant* platform_data);
// void AppLaunchContext::launched (::GAppLaunchContext* context, ::GAppInfo* info, ::GVariant* platform_data);
void AppLaunchContextClass::launched_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept
{
  if (!get_struct_()->launched) return ;
  typedef void (*call_wrap_t) (::GAppLaunchContext* context, ::GAppInfo* info, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->launched;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none, gi::direction_in);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GAppLaunchContext*) (gobj_()), (::GAppInfo*) (info_to_c), (::GVariant*) (platform_data_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
