// AUTO-GENERATED

#ifndef _GI_GLIB_TIMEZONE_IMPL_HPP_
#define _GI_GLIB_TIMEZONE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GTimeZone* g_time_zone_new (const gchar* identifier);
// ::GTimeZone* g_time_zone_new (const char* identifier);
// IGNORE; deprecated

// GTimeZone* g_time_zone_new_identifier (const gchar* identifier);
// ::GTimeZone* g_time_zone_new_identifier (const char* identifier);
GLib::TimeZone base::TimeZoneBase::new_identifier (const std::string & identifier) noexcept
{
  typedef ::GTimeZone* (*call_wrap_t) (const char* identifier);
  call_wrap_t call_wrap_v = (call_wrap_t) g_time_zone_new_identifier;
  auto identifier_to_c = gi::unwrap (identifier, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (identifier_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::TimeZone base::TimeZoneBase::new_identifier () noexcept
{
  typedef ::GTimeZone* (*call_wrap_t) (const char* identifier);
  call_wrap_t call_wrap_v = (call_wrap_t) g_time_zone_new_identifier;
  auto identifier_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (identifier_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GTimeZone* g_time_zone_new_local ();
// ::GTimeZone* g_time_zone_new_local ();
GLib::TimeZone base::TimeZoneBase::new_local () noexcept
{
  typedef ::GTimeZone* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_time_zone_new_local;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GTimeZone* g_time_zone_new_offset (gint32 seconds);
// ::GTimeZone* g_time_zone_new_offset (gint32 seconds);
GLib::TimeZone base::TimeZoneBase::new_offset (gint32 seconds) noexcept
{
  typedef ::GTimeZone* (*call_wrap_t) (gint32 seconds);
  call_wrap_t call_wrap_v = (call_wrap_t) g_time_zone_new_offset;
  auto seconds_to_c = seconds;
  auto _temp_ret = call_wrap_v ((gint32) (seconds_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GTimeZone* g_time_zone_new_utc ();
// ::GTimeZone* g_time_zone_new_utc ();
GLib::TimeZone base::TimeZoneBase::new_utc () noexcept
{
  typedef ::GTimeZone* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_time_zone_new_utc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint g_time_zone_adjust_time (GTimeZone* tz, GTimeType type, gint64* time_);
// gint g_time_zone_adjust_time (::GTimeZone* tz, ::GTimeType type, gint64 time_);
// SKIP; inconsistent in time_ pointer depth (1 vs 0)

// gint g_time_zone_find_interval (GTimeZone* tz, GTimeType type, gint64 time_);
// gint g_time_zone_find_interval (::GTimeZone* tz, ::GTimeType type, gint64 time_);
gint base::TimeZoneBase::find_interval (GLib::TimeType type, gint64 time_) noexcept
{
  typedef gint (*call_wrap_t) (::GTimeZone* tz, ::GTimeType type, gint64 time_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_time_zone_find_interval;
  auto time__to_c = time_;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GTimeZone*) (gobj_()), (::GTimeType) (type_to_c), (gint64) (time__to_c));
  return _temp_ret;
}

// const gchar* g_time_zone_get_abbreviation (GTimeZone* tz, gint interval);
// const char* g_time_zone_get_abbreviation (::GTimeZone* tz, gint interval);
std::string base::TimeZoneBase::get_abbreviation (gint interval) noexcept
{
  typedef const char* (*call_wrap_t) (::GTimeZone* tz, gint interval);
  call_wrap_t call_wrap_v = (call_wrap_t) g_time_zone_get_abbreviation;
  auto interval_to_c = interval;
  auto _temp_ret = call_wrap_v ((::GTimeZone*) (gobj_()), (gint) (interval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_time_zone_get_identifier (GTimeZone* tz);
// const char* g_time_zone_get_identifier (::GTimeZone* tz);
std::string base::TimeZoneBase::get_identifier () noexcept
{
  typedef const char* (*call_wrap_t) (::GTimeZone* tz);
  call_wrap_t call_wrap_v = (call_wrap_t) g_time_zone_get_identifier;
  auto _temp_ret = call_wrap_v ((::GTimeZone*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint32 g_time_zone_get_offset (GTimeZone* tz, gint interval);
// gint32 g_time_zone_get_offset (::GTimeZone* tz, gint interval);
gint32 base::TimeZoneBase::get_offset (gint interval) noexcept
{
  typedef gint32 (*call_wrap_t) (::GTimeZone* tz, gint interval);
  call_wrap_t call_wrap_v = (call_wrap_t) g_time_zone_get_offset;
  auto interval_to_c = interval;
  auto _temp_ret = call_wrap_v ((::GTimeZone*) (gobj_()), (gint) (interval_to_c));
  return _temp_ret;
}

// gboolean g_time_zone_is_dst (GTimeZone* tz, gint interval);
// gboolean g_time_zone_is_dst (::GTimeZone* tz, gint interval);
bool base::TimeZoneBase::is_dst (gint interval) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTimeZone* tz, gint interval);
  call_wrap_t call_wrap_v = (call_wrap_t) g_time_zone_is_dst;
  auto interval_to_c = interval;
  auto _temp_ret = call_wrap_v ((::GTimeZone*) (gobj_()), (gint) (interval_to_c));
  return _temp_ret;
}

// GTimeZone* g_time_zone_ref (GTimeZone* tz);
// ::GTimeZone* g_time_zone_ref (::GTimeZone* tz);
// IGNORE; marked ignore

// void g_time_zone_unref (GTimeZone* tz);
// void g_time_zone_unref (::GTimeZone* tz);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/timezone_extra_def_impl.hpp>)
#include <glib/timezone_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/timezone_extra_impl.hpp>)
#include <glib/timezone_extra_impl.hpp>
#endif
#endif

#endif
