// AUTO-GENERATED

#ifndef _GI_WEBKIT2_APPLICATIONINFO_IMPL_HPP_
#define _GI_WEBKIT2_APPLICATIONINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitApplicationInfo* webkit_application_info_new ();
// ::WebKitApplicationInfo* webkit_application_info_new ();
WebKit2::ApplicationInfo base::ApplicationInfoBase::new_ () noexcept
{
  typedef ::WebKitApplicationInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_application_info_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* webkit_application_info_get_name (WebKitApplicationInfo* info);
// const char* webkit_application_info_get_name (::WebKitApplicationInfo* info);
std::string base::ApplicationInfoBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitApplicationInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_application_info_get_name;
  auto _temp_ret = call_wrap_v ((::WebKitApplicationInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_application_info_get_version (WebKitApplicationInfo* info, guint64* major, guint64* minor, guint64* micro);
// void webkit_application_info_get_version (::WebKitApplicationInfo* info, guint64* major, guint64* minor, guint64* micro);
void base::ApplicationInfoBase::get_version (guint64 & major, guint64 * minor, guint64 * micro) noexcept
{
  typedef void (*call_wrap_t) (::WebKitApplicationInfo* info, guint64* major, guint64* minor, guint64* micro);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_application_info_get_version;
  guint64 micro_o {};
  guint64 minor_o {};
  guint64 major_o {};
  call_wrap_v ((::WebKitApplicationInfo*) (gobj_()), (guint64*) (&major_o), (guint64*) (minor ? &minor_o : nullptr), (guint64*) (micro ? &micro_o : nullptr));
  if (micro) *micro = micro_o;
  if (minor) *minor = minor_o;
  major = major_o;
}
std::tuple<guint64, guint64, guint64> base::ApplicationInfoBase::get_version () noexcept
{
  typedef void (*call_wrap_t) (::WebKitApplicationInfo* info, guint64* major, guint64* minor, guint64* micro);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_application_info_get_version;
  guint64 micro_o {};
  guint64 minor_o {};
  guint64 major_o {};
  call_wrap_v ((::WebKitApplicationInfo*) (gobj_()), (guint64*) (&major_o), (guint64*) (&minor_o), (guint64*) (&micro_o));
  return std::make_tuple (major_o, minor_o, micro_o);
}

// WebKitApplicationInfo* webkit_application_info_ref (WebKitApplicationInfo* info);
// ::WebKitApplicationInfo* webkit_application_info_ref (::WebKitApplicationInfo* info);
// IGNORE; marked ignore

// void webkit_application_info_set_name (WebKitApplicationInfo* info, const gchar* name);
// void webkit_application_info_set_name (::WebKitApplicationInfo* info, const char* name);
void base::ApplicationInfoBase::set_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::WebKitApplicationInfo* info, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_application_info_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitApplicationInfo*) (gobj_()), (const char*) (name_to_c));
}

// void webkit_application_info_set_version (WebKitApplicationInfo* info, guint64 major, guint64 minor, guint64 micro);
// void webkit_application_info_set_version (::WebKitApplicationInfo* info, guint64 major, guint64 minor, guint64 micro);
void base::ApplicationInfoBase::set_version (guint64 major, guint64 minor, guint64 micro) noexcept
{
  typedef void (*call_wrap_t) (::WebKitApplicationInfo* info, guint64 major, guint64 minor, guint64 micro);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_application_info_set_version;
  auto micro_to_c = micro;
  auto minor_to_c = minor;
  auto major_to_c = major;
  call_wrap_v ((::WebKitApplicationInfo*) (gobj_()), (guint64) (major_to_c), (guint64) (minor_to_c), (guint64) (micro_to_c));
}

// void webkit_application_info_unref (WebKitApplicationInfo* info);
// void webkit_application_info_unref (::WebKitApplicationInfo* info);
// IGNORE; marked ignore


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/applicationinfo_extra_def_impl.hpp>)
#include <webkit2/applicationinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/applicationinfo_extra_impl.hpp>)
#include <webkit2/applicationinfo_extra_impl.hpp>
#endif
#endif

#endif
