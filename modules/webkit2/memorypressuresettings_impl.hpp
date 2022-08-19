// AUTO-GENERATED

#ifndef _GI_WEBKIT2_MEMORYPRESSURESETTINGS_IMPL_HPP_
#define _GI_WEBKIT2_MEMORYPRESSURESETTINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitMemoryPressureSettings* webkit_memory_pressure_settings_new ();
// ::WebKitMemoryPressureSettings* webkit_memory_pressure_settings_new ();
WebKit2::MemoryPressureSettings base::MemoryPressureSettingsBase::new_ () noexcept
{
  typedef ::WebKitMemoryPressureSettings* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitMemoryPressureSettings* webkit_memory_pressure_settings_copy (WebKitMemoryPressureSettings* settings);
// ::WebKitMemoryPressureSettings* webkit_memory_pressure_settings_copy (::WebKitMemoryPressureSettings* settings);
WebKit2::MemoryPressureSettings base::MemoryPressureSettingsBase::copy () noexcept
{
  typedef ::WebKitMemoryPressureSettings* (*call_wrap_t) (::WebKitMemoryPressureSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_copy;
  auto _temp_ret = call_wrap_v ((::WebKitMemoryPressureSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_memory_pressure_settings_free (WebKitMemoryPressureSettings* settings);
// void webkit_memory_pressure_settings_free (::WebKitMemoryPressureSettings* settings);
// IGNORE; marked ignore

// gdouble webkit_memory_pressure_settings_get_conservative_threshold (WebKitMemoryPressureSettings* settings);
// gdouble webkit_memory_pressure_settings_get_conservative_threshold (::WebKitMemoryPressureSettings* settings);
gdouble base::MemoryPressureSettingsBase::get_conservative_threshold () noexcept
{
  typedef gdouble (*call_wrap_t) (::WebKitMemoryPressureSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_get_conservative_threshold;
  auto _temp_ret = call_wrap_v ((::WebKitMemoryPressureSettings*) (gobj_()));
  return _temp_ret;
}

// gdouble webkit_memory_pressure_settings_get_kill_threshold (WebKitMemoryPressureSettings* settings);
// gdouble webkit_memory_pressure_settings_get_kill_threshold (::WebKitMemoryPressureSettings* settings);
gdouble base::MemoryPressureSettingsBase::get_kill_threshold () noexcept
{
  typedef gdouble (*call_wrap_t) (::WebKitMemoryPressureSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_get_kill_threshold;
  auto _temp_ret = call_wrap_v ((::WebKitMemoryPressureSettings*) (gobj_()));
  return _temp_ret;
}

// guint webkit_memory_pressure_settings_get_memory_limit (WebKitMemoryPressureSettings* settings);
// guint webkit_memory_pressure_settings_get_memory_limit (::WebKitMemoryPressureSettings* settings);
guint base::MemoryPressureSettingsBase::get_memory_limit () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitMemoryPressureSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_get_memory_limit;
  auto _temp_ret = call_wrap_v ((::WebKitMemoryPressureSettings*) (gobj_()));
  return _temp_ret;
}

// gdouble webkit_memory_pressure_settings_get_poll_interval (WebKitMemoryPressureSettings* settings);
// gdouble webkit_memory_pressure_settings_get_poll_interval (::WebKitMemoryPressureSettings* settings);
gdouble base::MemoryPressureSettingsBase::get_poll_interval () noexcept
{
  typedef gdouble (*call_wrap_t) (::WebKitMemoryPressureSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_get_poll_interval;
  auto _temp_ret = call_wrap_v ((::WebKitMemoryPressureSettings*) (gobj_()));
  return _temp_ret;
}

// gdouble webkit_memory_pressure_settings_get_strict_threshold (WebKitMemoryPressureSettings* settings);
// gdouble webkit_memory_pressure_settings_get_strict_threshold (::WebKitMemoryPressureSettings* settings);
gdouble base::MemoryPressureSettingsBase::get_strict_threshold () noexcept
{
  typedef gdouble (*call_wrap_t) (::WebKitMemoryPressureSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_get_strict_threshold;
  auto _temp_ret = call_wrap_v ((::WebKitMemoryPressureSettings*) (gobj_()));
  return _temp_ret;
}

// void webkit_memory_pressure_settings_set_conservative_threshold (WebKitMemoryPressureSettings* settings, gdouble value);
// void webkit_memory_pressure_settings_set_conservative_threshold (::WebKitMemoryPressureSettings* settings, gdouble value);
void base::MemoryPressureSettingsBase::set_conservative_threshold (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::WebKitMemoryPressureSettings* settings, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_set_conservative_threshold;
  auto value_to_c = value;
  call_wrap_v ((::WebKitMemoryPressureSettings*) (gobj_()), (gdouble) (value_to_c));
}

// void webkit_memory_pressure_settings_set_kill_threshold (WebKitMemoryPressureSettings* settings, gdouble value);
// void webkit_memory_pressure_settings_set_kill_threshold (::WebKitMemoryPressureSettings* settings, gdouble value);
void base::MemoryPressureSettingsBase::set_kill_threshold (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::WebKitMemoryPressureSettings* settings, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_set_kill_threshold;
  auto value_to_c = value;
  call_wrap_v ((::WebKitMemoryPressureSettings*) (gobj_()), (gdouble) (value_to_c));
}

// void webkit_memory_pressure_settings_set_memory_limit (WebKitMemoryPressureSettings* settings, guint memory_limit);
// void webkit_memory_pressure_settings_set_memory_limit (::WebKitMemoryPressureSettings* settings, guint memory_limit);
void base::MemoryPressureSettingsBase::set_memory_limit (guint memory_limit) noexcept
{
  typedef void (*call_wrap_t) (::WebKitMemoryPressureSettings* settings, guint memory_limit);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_set_memory_limit;
  auto memory_limit_to_c = memory_limit;
  call_wrap_v ((::WebKitMemoryPressureSettings*) (gobj_()), (guint) (memory_limit_to_c));
}

// void webkit_memory_pressure_settings_set_poll_interval (WebKitMemoryPressureSettings* settings, gdouble value);
// void webkit_memory_pressure_settings_set_poll_interval (::WebKitMemoryPressureSettings* settings, gdouble value);
void base::MemoryPressureSettingsBase::set_poll_interval (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::WebKitMemoryPressureSettings* settings, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_set_poll_interval;
  auto value_to_c = value;
  call_wrap_v ((::WebKitMemoryPressureSettings*) (gobj_()), (gdouble) (value_to_c));
}

// void webkit_memory_pressure_settings_set_strict_threshold (WebKitMemoryPressureSettings* settings, gdouble value);
// void webkit_memory_pressure_settings_set_strict_threshold (::WebKitMemoryPressureSettings* settings, gdouble value);
void base::MemoryPressureSettingsBase::set_strict_threshold (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::WebKitMemoryPressureSettings* settings, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_memory_pressure_settings_set_strict_threshold;
  auto value_to_c = value;
  call_wrap_v ((::WebKitMemoryPressureSettings*) (gobj_()), (gdouble) (value_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/memorypressuresettings_extra_def_impl.hpp>)
#include <webkit2/memorypressuresettings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/memorypressuresettings_extra_impl.hpp>)
#include <webkit2/memorypressuresettings_extra_impl.hpp>
#endif
#endif

#endif
