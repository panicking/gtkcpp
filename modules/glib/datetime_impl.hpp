// AUTO-GENERATED

#ifndef _GI_GLIB_DATETIME_IMPL_HPP_
#define _GI_GLIB_DATETIME_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GDateTime* g_date_time_new (GTimeZone* tz, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GDateTime* g_date_time_new (::GTimeZone* tz, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
GLib::DateTime base::DateTimeBase::new_ (GLib::TimeZone tz, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GTimeZone* tz, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_new;
  auto seconds_to_c = seconds;
  auto minute_to_c = minute;
  auto hour_to_c = hour;
  auto day_to_c = day;
  auto month_to_c = month;
  auto year_to_c = year;
  auto tz_to_c = gi::unwrap (tz, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTimeZone*) (tz_to_c), (gint) (year_to_c), (gint) (month_to_c), (gint) (day_to_c), (gint) (hour_to_c), (gint) (minute_to_c), (gdouble) (seconds_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_new_from_iso8601 (const gchar* text, GTimeZone* default_tz);
// ::GDateTime* g_date_time_new_from_iso8601 (const char* text, ::GTimeZone* default_tz);
GLib::DateTime base::DateTimeBase::new_from_iso8601 (const std::string & text, GLib::TimeZone default_tz) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (const char* text, ::GTimeZone* default_tz);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_new_from_iso8601;
  auto default_tz_to_c = gi::unwrap (default_tz, gi::transfer_none, gi::direction_in);
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c), (::GTimeZone*) (default_tz_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::DateTime base::DateTimeBase::new_from_iso8601 (const std::string & text) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (const char* text, ::GTimeZone* default_tz);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_new_from_iso8601;
  auto default_tz_to_c = nullptr;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c), (::GTimeZone*) (default_tz_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_new_from_timeval_local (const GTimeVal* tv);
// ::GDateTime* g_date_time_new_from_timeval_local (const  tv);
// IGNORE; deprecated

// GDateTime* g_date_time_new_from_timeval_utc (const GTimeVal* tv);
// ::GDateTime* g_date_time_new_from_timeval_utc (const  tv);
// IGNORE; deprecated

// GDateTime* g_date_time_new_from_unix_local (gint64 t);
// ::GDateTime* g_date_time_new_from_unix_local (gint64 t);
GLib::DateTime base::DateTimeBase::new_from_unix_local (gint64 t) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (gint64 t);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_new_from_unix_local;
  auto t_to_c = t;
  auto _temp_ret = call_wrap_v ((gint64) (t_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_new_from_unix_utc (gint64 t);
// ::GDateTime* g_date_time_new_from_unix_utc (gint64 t);
GLib::DateTime base::DateTimeBase::new_from_unix_utc (gint64 t) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (gint64 t);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_new_from_unix_utc;
  auto t_to_c = t;
  auto _temp_ret = call_wrap_v ((gint64) (t_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_new_local (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GDateTime* g_date_time_new_local (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
GLib::DateTime base::DateTimeBase::new_local (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_new_local;
  auto seconds_to_c = seconds;
  auto minute_to_c = minute;
  auto hour_to_c = hour;
  auto day_to_c = day;
  auto month_to_c = month;
  auto year_to_c = year;
  auto _temp_ret = call_wrap_v ((gint) (year_to_c), (gint) (month_to_c), (gint) (day_to_c), (gint) (hour_to_c), (gint) (minute_to_c), (gdouble) (seconds_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_new_now (GTimeZone* tz);
// ::GDateTime* g_date_time_new_now (::GTimeZone* tz);
GLib::DateTime base::DateTimeBase::new_now (GLib::TimeZone tz) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GTimeZone* tz);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_new_now;
  auto tz_to_c = gi::unwrap (tz, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTimeZone*) (tz_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_new_now_local ();
// ::GDateTime* g_date_time_new_now_local ();
GLib::DateTime base::DateTimeBase::new_now_local () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_new_now_local;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_new_now_utc ();
// ::GDateTime* g_date_time_new_now_utc ();
GLib::DateTime base::DateTimeBase::new_now_utc () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_new_now_utc;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_new_utc (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GDateTime* g_date_time_new_utc (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
GLib::DateTime base::DateTimeBase::new_utc (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_new_utc;
  auto seconds_to_c = seconds;
  auto minute_to_c = minute;
  auto hour_to_c = hour;
  auto day_to_c = day;
  auto month_to_c = month;
  auto year_to_c = year;
  auto _temp_ret = call_wrap_v ((gint) (year_to_c), (gint) (month_to_c), (gint) (day_to_c), (gint) (hour_to_c), (gint) (minute_to_c), (gdouble) (seconds_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_add (GDateTime* datetime, GTimeSpan timespan);
// ::GDateTime* g_date_time_add (::GDateTime* datetime, ::GTimeSpan timespan);
GLib::DateTime base::DateTimeBase::add (::GTimeSpan timespan) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime, ::GTimeSpan timespan);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_add;
  auto timespan_to_c = timespan;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (::GTimeSpan) (timespan_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_add_days (GDateTime* datetime, gint days);
// ::GDateTime* g_date_time_add_days (::GDateTime* datetime, gint days);
GLib::DateTime base::DateTimeBase::add_days (gint days) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime, gint days);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_add_days;
  auto days_to_c = days;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (gint) (days_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_add_full (GDateTime* datetime, gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds);
// ::GDateTime* g_date_time_add_full (::GDateTime* datetime, gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds);
GLib::DateTime base::DateTimeBase::add_full (gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime, gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_add_full;
  auto seconds_to_c = seconds;
  auto minutes_to_c = minutes;
  auto hours_to_c = hours;
  auto days_to_c = days;
  auto months_to_c = months;
  auto years_to_c = years;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (gint) (years_to_c), (gint) (months_to_c), (gint) (days_to_c), (gint) (hours_to_c), (gint) (minutes_to_c), (gdouble) (seconds_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_add_hours (GDateTime* datetime, gint hours);
// ::GDateTime* g_date_time_add_hours (::GDateTime* datetime, gint hours);
GLib::DateTime base::DateTimeBase::add_hours (gint hours) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime, gint hours);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_add_hours;
  auto hours_to_c = hours;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (gint) (hours_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_add_minutes (GDateTime* datetime, gint minutes);
// ::GDateTime* g_date_time_add_minutes (::GDateTime* datetime, gint minutes);
GLib::DateTime base::DateTimeBase::add_minutes (gint minutes) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime, gint minutes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_add_minutes;
  auto minutes_to_c = minutes;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (gint) (minutes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_add_months (GDateTime* datetime, gint months);
// ::GDateTime* g_date_time_add_months (::GDateTime* datetime, gint months);
GLib::DateTime base::DateTimeBase::add_months (gint months) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime, gint months);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_add_months;
  auto months_to_c = months;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (gint) (months_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_add_seconds (GDateTime* datetime, gdouble seconds);
// ::GDateTime* g_date_time_add_seconds (::GDateTime* datetime, gdouble seconds);
GLib::DateTime base::DateTimeBase::add_seconds (gdouble seconds) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime, gdouble seconds);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_add_seconds;
  auto seconds_to_c = seconds;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (gdouble) (seconds_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_add_weeks (GDateTime* datetime, gint weeks);
// ::GDateTime* g_date_time_add_weeks (::GDateTime* datetime, gint weeks);
GLib::DateTime base::DateTimeBase::add_weeks (gint weeks) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime, gint weeks);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_add_weeks;
  auto weeks_to_c = weeks;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (gint) (weeks_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDateTime* g_date_time_add_years (GDateTime* datetime, gint years);
// ::GDateTime* g_date_time_add_years (::GDateTime* datetime, gint years);
GLib::DateTime base::DateTimeBase::add_years (gint years) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime, gint years);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_add_years;
  auto years_to_c = years;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (gint) (years_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint g_date_time_compare (gconstpointer dt1, gconstpointer dt2);
// gint g_date_time_compare (const ::GDateTime* dt1, const ::GDateTime* dt2);
gint base::DateTimeBase::compare (const GLib::DateTime & dt2) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDateTime* dt1, const ::GDateTime* dt2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_compare;
  auto dt2_to_c = gi::unwrap (dt2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GDateTime*) (gobj_()), (const ::GDateTime*) (dt2_to_c));
  return _temp_ret;
}

// GTimeSpan g_date_time_difference (GDateTime* end, GDateTime* begin);
// ::GTimeSpan g_date_time_difference (::GDateTime* end, ::GDateTime* begin);
GLib::TimeSpan base::DateTimeBase::difference (GLib::DateTime begin) noexcept
{
  typedef ::GTimeSpan (*call_wrap_t) (::GDateTime* end, ::GDateTime* begin);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_difference;
  auto begin_to_c = gi::unwrap (begin, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (::GDateTime*) (begin_to_c));
  return _temp_ret;
}

// gboolean g_date_time_equal (gconstpointer dt1, gconstpointer dt2);
// gboolean g_date_time_equal (const ::GDateTime* dt1, const ::GDateTime* dt2);
bool base::DateTimeBase::equal (const GLib::DateTime & dt2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GDateTime* dt1, const ::GDateTime* dt2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_equal;
  auto dt2_to_c = gi::unwrap (dt2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GDateTime*) (gobj_()), (const ::GDateTime*) (dt2_to_c));
  return _temp_ret;
}

// gchar* g_date_time_format (GDateTime* datetime, const gchar* format);
// char* g_date_time_format (::GDateTime* datetime, const char* format);
std::string base::DateTimeBase::format (const std::string & format) noexcept
{
  typedef char* (*call_wrap_t) (::GDateTime* datetime, const char* format);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_format;
  auto format_to_c = gi::unwrap (format, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (const char*) (format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_date_time_format_iso8601 (GDateTime* datetime);
// char* g_date_time_format_iso8601 (::GDateTime* datetime);
std::string base::DateTimeBase::format_iso8601 () noexcept
{
  typedef char* (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_format_iso8601;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint g_date_time_get_day_of_month (GDateTime* datetime);
// gint g_date_time_get_day_of_month (::GDateTime* datetime);
gint base::DateTimeBase::get_day_of_month () noexcept
{
  typedef gint (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_day_of_month;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gint g_date_time_get_day_of_week (GDateTime* datetime);
// gint g_date_time_get_day_of_week (::GDateTime* datetime);
gint base::DateTimeBase::get_day_of_week () noexcept
{
  typedef gint (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_day_of_week;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gint g_date_time_get_day_of_year (GDateTime* datetime);
// gint g_date_time_get_day_of_year (::GDateTime* datetime);
gint base::DateTimeBase::get_day_of_year () noexcept
{
  typedef gint (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_day_of_year;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gint g_date_time_get_hour (GDateTime* datetime);
// gint g_date_time_get_hour (::GDateTime* datetime);
gint base::DateTimeBase::get_hour () noexcept
{
  typedef gint (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_hour;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gint g_date_time_get_microsecond (GDateTime* datetime);
// gint g_date_time_get_microsecond (::GDateTime* datetime);
gint base::DateTimeBase::get_microsecond () noexcept
{
  typedef gint (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_microsecond;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gint g_date_time_get_minute (GDateTime* datetime);
// gint g_date_time_get_minute (::GDateTime* datetime);
gint base::DateTimeBase::get_minute () noexcept
{
  typedef gint (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_minute;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gint g_date_time_get_month (GDateTime* datetime);
// gint g_date_time_get_month (::GDateTime* datetime);
gint base::DateTimeBase::get_month () noexcept
{
  typedef gint (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_month;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gint g_date_time_get_second (GDateTime* datetime);
// gint g_date_time_get_second (::GDateTime* datetime);
gint base::DateTimeBase::get_second () noexcept
{
  typedef gint (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_second;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gdouble g_date_time_get_seconds (GDateTime* datetime);
// gdouble g_date_time_get_seconds (::GDateTime* datetime);
gdouble base::DateTimeBase::get_seconds () noexcept
{
  typedef gdouble (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_seconds;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// GTimeZone* g_date_time_get_timezone (GDateTime* datetime);
// ::GTimeZone* g_date_time_get_timezone (::GDateTime* datetime);
GLib::TimeZone base::DateTimeBase::get_timezone () noexcept
{
  typedef ::GTimeZone* (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_timezone;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_date_time_get_timezone_abbreviation (GDateTime* datetime);
// const char* g_date_time_get_timezone_abbreviation (::GDateTime* datetime);
std::string base::DateTimeBase::get_timezone_abbreviation () noexcept
{
  typedef const char* (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_timezone_abbreviation;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GTimeSpan g_date_time_get_utc_offset (GDateTime* datetime);
// ::GTimeSpan g_date_time_get_utc_offset (::GDateTime* datetime);
GLib::TimeSpan base::DateTimeBase::get_utc_offset () noexcept
{
  typedef ::GTimeSpan (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_utc_offset;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gint g_date_time_get_week_numbering_year (GDateTime* datetime);
// gint g_date_time_get_week_numbering_year (::GDateTime* datetime);
gint base::DateTimeBase::get_week_numbering_year () noexcept
{
  typedef gint (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_week_numbering_year;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gint g_date_time_get_week_of_year (GDateTime* datetime);
// gint g_date_time_get_week_of_year (::GDateTime* datetime);
gint base::DateTimeBase::get_week_of_year () noexcept
{
  typedef gint (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_week_of_year;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gint g_date_time_get_year (GDateTime* datetime);
// gint g_date_time_get_year (::GDateTime* datetime);
gint base::DateTimeBase::get_year () noexcept
{
  typedef gint (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_year;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// void g_date_time_get_ymd (GDateTime* datetime, gint* year, gint* month, gint* day);
// void g_date_time_get_ymd (::GDateTime* datetime, gint* year, gint* month, gint* day);
void base::DateTimeBase::get_ymd (gint * year, gint * month, gint * day) noexcept
{
  typedef void (*call_wrap_t) (::GDateTime* datetime, gint* year, gint* month, gint* day);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_ymd;
  gint day_o {};
  gint month_o {};
  gint year_o {};
  call_wrap_v ((::GDateTime*) (gobj_()), (gint*) (year ? &year_o : nullptr), (gint*) (month ? &month_o : nullptr), (gint*) (day ? &day_o : nullptr));
  if (day) *day = day_o;
  if (month) *month = month_o;
  if (year) *year = year_o;
}
std::tuple<gint, gint, gint> base::DateTimeBase::get_ymd () noexcept
{
  typedef void (*call_wrap_t) (::GDateTime* datetime, gint* year, gint* month, gint* day);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_get_ymd;
  gint day_o {};
  gint month_o {};
  gint year_o {};
  call_wrap_v ((::GDateTime*) (gobj_()), (gint*) (&year_o), (gint*) (&month_o), (gint*) (&day_o));
  return std::make_tuple (year_o, month_o, day_o);
}

// guint g_date_time_hash (gconstpointer datetime);
// guint g_date_time_hash (const ::GDateTime* datetime);
guint base::DateTimeBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_hash;
  auto _temp_ret = call_wrap_v ((const ::GDateTime*) (gobj_()));
  return _temp_ret;
}

// gboolean g_date_time_is_daylight_savings (GDateTime* datetime);
// gboolean g_date_time_is_daylight_savings (::GDateTime* datetime);
bool base::DateTimeBase::is_daylight_savings () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_is_daylight_savings;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// GDateTime* g_date_time_ref (GDateTime* datetime);
// ::GDateTime* g_date_time_ref (::GDateTime* datetime);
// IGNORE; marked ignore

// GDateTime* g_date_time_to_local (GDateTime* datetime);
// ::GDateTime* g_date_time_to_local (::GDateTime* datetime);
GLib::DateTime base::DateTimeBase::to_local () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_to_local;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_date_time_to_timeval (GDateTime* datetime, GTimeVal* tv);
// gboolean g_date_time_to_timeval (::GDateTime* datetime,  tv);
// IGNORE; deprecated

// GDateTime* g_date_time_to_timezone (GDateTime* datetime, GTimeZone* tz);
// ::GDateTime* g_date_time_to_timezone (::GDateTime* datetime, ::GTimeZone* tz);
GLib::DateTime base::DateTimeBase::to_timezone (GLib::TimeZone tz) noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime, ::GTimeZone* tz);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_to_timezone;
  auto tz_to_c = gi::unwrap (tz, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()), (::GTimeZone*) (tz_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint64 g_date_time_to_unix (GDateTime* datetime);
// gint64 g_date_time_to_unix (::GDateTime* datetime);
gint64 base::DateTimeBase::to_unix () noexcept
{
  typedef gint64 (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_to_unix;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return _temp_ret;
}

// GDateTime* g_date_time_to_utc (GDateTime* datetime);
// ::GDateTime* g_date_time_to_utc (::GDateTime* datetime);
GLib::DateTime base::DateTimeBase::to_utc () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::GDateTime* datetime);
  call_wrap_t call_wrap_v = (call_wrap_t) g_date_time_to_utc;
  auto _temp_ret = call_wrap_v ((::GDateTime*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_date_time_unref (GDateTime* datetime);
// void g_date_time_unref (::GDateTime* datetime);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/datetime_extra_def_impl.hpp>)
#include <glib/datetime_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/datetime_extra_impl.hpp>)
#include <glib/datetime_extra_impl.hpp>
#endif
#endif

#endif
