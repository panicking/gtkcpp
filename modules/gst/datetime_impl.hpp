// AUTO-GENERATED

#ifndef _GI_GST_DATETIME_IMPL_HPP_
#define _GI_GST_DATETIME_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstDateTime* gst_date_time_new (gfloat tzoffset, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GstDateTime* gst_date_time_new (gfloat tzoffset, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
Gst::DateTime base::DateTimeBase::new_ (gfloat tzoffset, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (gfloat tzoffset, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new;
  auto seconds_to_c = seconds;
  auto minute_to_c = minute;
  auto hour_to_c = hour;
  auto day_to_c = day;
  auto month_to_c = month;
  auto year_to_c = year;
  auto tzoffset_to_c = tzoffset;
  auto _temp_ret = call_wrap_v ((gfloat) (tzoffset_to_c), (gint) (year_to_c), (gint) (month_to_c), (gint) (day_to_c), (gint) (hour_to_c), (gint) (minute_to_c), (gdouble) (seconds_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_from_g_date_time (GDateTime* dt);
// ::GstDateTime* gst_date_time_new_from_g_date_time (::GDateTime* dt);
Gst::DateTime base::DateTimeBase::new_from_g_date_time (GLib::DateTime dt) noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (::GDateTime* dt);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_from_g_date_time;
  auto dt_to_c = gi::unwrap (dt, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDateTime*) (dt_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::DateTime base::DateTimeBase::new_from_g_date_time () noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (::GDateTime* dt);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_from_g_date_time;
  auto dt_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (dt_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_from_iso8601_string (const gchar* string);
// ::GstDateTime* gst_date_time_new_from_iso8601_string (const char* string);
Gst::DateTime base::DateTimeBase::new_from_iso8601_string (const std::string & string) noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_from_iso8601_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_from_unix_epoch_local_time (gint64 secs);
// ::GstDateTime* gst_date_time_new_from_unix_epoch_local_time (gint64 secs);
Gst::DateTime base::DateTimeBase::new_from_unix_epoch_local_time (gint64 secs) noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (gint64 secs);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_from_unix_epoch_local_time;
  auto secs_to_c = secs;
  auto _temp_ret = call_wrap_v ((gint64) (secs_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_from_unix_epoch_local_time_usecs (gint64 usecs);
// ::GstDateTime* gst_date_time_new_from_unix_epoch_local_time_usecs (gint64 usecs);
Gst::DateTime base::DateTimeBase::new_from_unix_epoch_local_time_usecs (gint64 usecs) noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (gint64 usecs);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_from_unix_epoch_local_time_usecs;
  auto usecs_to_c = usecs;
  auto _temp_ret = call_wrap_v ((gint64) (usecs_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_from_unix_epoch_utc (gint64 secs);
// ::GstDateTime* gst_date_time_new_from_unix_epoch_utc (gint64 secs);
Gst::DateTime base::DateTimeBase::new_from_unix_epoch_utc (gint64 secs) noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (gint64 secs);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_from_unix_epoch_utc;
  auto secs_to_c = secs;
  auto _temp_ret = call_wrap_v ((gint64) (secs_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_from_unix_epoch_utc_usecs (gint64 usecs);
// ::GstDateTime* gst_date_time_new_from_unix_epoch_utc_usecs (gint64 usecs);
Gst::DateTime base::DateTimeBase::new_from_unix_epoch_utc_usecs (gint64 usecs) noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (gint64 usecs);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_from_unix_epoch_utc_usecs;
  auto usecs_to_c = usecs;
  auto _temp_ret = call_wrap_v ((gint64) (usecs_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_local_time (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GstDateTime* gst_date_time_new_local_time (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
Gst::DateTime base::DateTimeBase::new_local_time (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_local_time;
  auto seconds_to_c = seconds;
  auto minute_to_c = minute;
  auto hour_to_c = hour;
  auto day_to_c = day;
  auto month_to_c = month;
  auto year_to_c = year;
  auto _temp_ret = call_wrap_v ((gint) (year_to_c), (gint) (month_to_c), (gint) (day_to_c), (gint) (hour_to_c), (gint) (minute_to_c), (gdouble) (seconds_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_now_local_time ();
// ::GstDateTime* gst_date_time_new_now_local_time ();
Gst::DateTime base::DateTimeBase::new_now_local_time () noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_now_local_time;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_now_utc ();
// ::GstDateTime* gst_date_time_new_now_utc ();
Gst::DateTime base::DateTimeBase::new_now_utc () noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_now_utc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_y (gint year);
// ::GstDateTime* gst_date_time_new_y (gint year);
Gst::DateTime base::DateTimeBase::new_y (gint year) noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (gint year);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_y;
  auto year_to_c = year;
  auto _temp_ret = call_wrap_v ((gint) (year_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_ym (gint year, gint month);
// ::GstDateTime* gst_date_time_new_ym (gint year, gint month);
Gst::DateTime base::DateTimeBase::new_ym (gint year, gint month) noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (gint year, gint month);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_ym;
  auto month_to_c = month;
  auto year_to_c = year;
  auto _temp_ret = call_wrap_v ((gint) (year_to_c), (gint) (month_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDateTime* gst_date_time_new_ymd (gint year, gint month, gint day);
// ::GstDateTime* gst_date_time_new_ymd (gint year, gint month, gint day);
Gst::DateTime base::DateTimeBase::new_ymd (gint year, gint month, gint day) noexcept
{
  typedef ::GstDateTime* (*call_wrap_t) (gint year, gint month, gint day);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_new_ymd;
  auto day_to_c = day;
  auto month_to_c = month;
  auto year_to_c = year;
  auto _temp_ret = call_wrap_v ((gint) (year_to_c), (gint) (month_to_c), (gint) (day_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint gst_date_time_get_day (const GstDateTime* datetime);
// gint gst_date_time_get_day (const ::GstDateTime* datetime);
gint base::DateTimeBase::get_day () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_get_day;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gint gst_date_time_get_hour (const GstDateTime* datetime);
// gint gst_date_time_get_hour (const ::GstDateTime* datetime);
gint base::DateTimeBase::get_hour () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_get_hour;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gint gst_date_time_get_microsecond (const GstDateTime* datetime);
// gint gst_date_time_get_microsecond (const ::GstDateTime* datetime);
gint base::DateTimeBase::get_microsecond () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_get_microsecond;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gint gst_date_time_get_minute (const GstDateTime* datetime);
// gint gst_date_time_get_minute (const ::GstDateTime* datetime);
gint base::DateTimeBase::get_minute () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_get_minute;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gint gst_date_time_get_month (const GstDateTime* datetime);
// gint gst_date_time_get_month (const ::GstDateTime* datetime);
gint base::DateTimeBase::get_month () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_get_month;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gint gst_date_time_get_second (const GstDateTime* datetime);
// gint gst_date_time_get_second (const ::GstDateTime* datetime);
gint base::DateTimeBase::get_second () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_get_second;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gfloat gst_date_time_get_time_zone_offset (const GstDateTime* datetime);
// gfloat gst_date_time_get_time_zone_offset (const ::GstDateTime* datetime);
gfloat base::DateTimeBase::get_time_zone_offset () const noexcept
{
  typedef gfloat (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_get_time_zone_offset;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gint gst_date_time_get_year (const GstDateTime* datetime);
// gint gst_date_time_get_year (const ::GstDateTime* datetime);
gint base::DateTimeBase::get_year () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_get_year;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_date_time_has_day (const GstDateTime* datetime);
// gboolean gst_date_time_has_day (const ::GstDateTime* datetime);
bool base::DateTimeBase::has_day () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_has_day;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_date_time_has_month (const GstDateTime* datetime);
// gboolean gst_date_time_has_month (const ::GstDateTime* datetime);
bool base::DateTimeBase::has_month () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_has_month;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_date_time_has_second (const GstDateTime* datetime);
// gboolean gst_date_time_has_second (const ::GstDateTime* datetime);
bool base::DateTimeBase::has_second () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_has_second;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_date_time_has_time (const GstDateTime* datetime);
// gboolean gst_date_time_has_time (const ::GstDateTime* datetime);
bool base::DateTimeBase::has_time () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_has_time;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_date_time_has_year (const GstDateTime* datetime);
// gboolean gst_date_time_has_year (const ::GstDateTime* datetime);
bool base::DateTimeBase::has_year () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_has_year;
  auto _temp_ret = call_wrap_v ((const ::GstDateTime*) (gobj_()));
  return _temp_ret;
}

// GstDateTime* gst_date_time_ref (GstDateTime* datetime);
// ::GstDateTime* gst_date_time_ref (::GstDateTime* datetime);
// IGNORE; marked ignore

// GDateTime* gst_date_time_to_g_date_time (GstDateTime* datetime);
// ::GDateTime* gst_date_time_to_g_date_time (::GstDateTime* datetime);
GLib::DateTime base::DateTimeBase::to_g_date_time () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_to_g_date_time;
  auto _temp_ret = call_wrap_v ((::GstDateTime*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gst_date_time_to_iso8601_string (GstDateTime* datetime);
// char* gst_date_time_to_iso8601_string (::GstDateTime* datetime);
std::string base::DateTimeBase::to_iso8601_string () noexcept
{
  typedef char* (*call_wrap_t) (::GstDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_date_time_to_iso8601_string;
  auto _temp_ret = call_wrap_v ((::GstDateTime*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_date_time_unref (GstDateTime* datetime);
// void gst_date_time_unref (::GstDateTime* datetime);
// IGNORE; marked ignore


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/datetime_extra_def_impl.hpp>)
#include <gst/datetime_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/datetime_extra_impl.hpp>)
#include <gst/datetime_extra_impl.hpp>
#endif
#endif

#endif
