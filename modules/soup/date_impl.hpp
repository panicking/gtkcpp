// AUTO-GENERATED

#ifndef _GI_SOUP_DATE_IMPL_HPP_
#define _GI_SOUP_DATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

static gint _field_year_get (const ::SoupDate* obj) { return (gint) obj->year; }
// gint Date::year (const ::SoupDate* obj);
// gint Date::year (const ::SoupDate* obj);
gint base::DateBase::year_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::SoupDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_year_get;
  auto _temp_ret = call_wrap_v ((const ::SoupDate*) (gobj_()));
  return _temp_ret;
}

static void _field_year_set (::SoupDate* obj, gint _value) { obj->year = (decltype(obj->year)) _value; }
//  Date::year (::SoupDate* obj, gint _value);
// void Date::year (::SoupDate* obj, gint _value);
void base::DateBase::year_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupDate* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_year_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupDate*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_month_get (const ::SoupDate* obj) { return (gint) obj->month; }
// gint Date::month (const ::SoupDate* obj);
// gint Date::month (const ::SoupDate* obj);
gint base::DateBase::month_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::SoupDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_month_get;
  auto _temp_ret = call_wrap_v ((const ::SoupDate*) (gobj_()));
  return _temp_ret;
}

static void _field_month_set (::SoupDate* obj, gint _value) { obj->month = (decltype(obj->month)) _value; }
//  Date::month (::SoupDate* obj, gint _value);
// void Date::month (::SoupDate* obj, gint _value);
void base::DateBase::month_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupDate* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_month_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupDate*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_day_get (const ::SoupDate* obj) { return (gint) obj->day; }
// gint Date::day (const ::SoupDate* obj);
// gint Date::day (const ::SoupDate* obj);
gint base::DateBase::day_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::SoupDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_day_get;
  auto _temp_ret = call_wrap_v ((const ::SoupDate*) (gobj_()));
  return _temp_ret;
}

static void _field_day_set (::SoupDate* obj, gint _value) { obj->day = (decltype(obj->day)) _value; }
//  Date::day (::SoupDate* obj, gint _value);
// void Date::day (::SoupDate* obj, gint _value);
void base::DateBase::day_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupDate* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_day_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupDate*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_hour_get (const ::SoupDate* obj) { return (gint) obj->hour; }
// gint Date::hour (const ::SoupDate* obj);
// gint Date::hour (const ::SoupDate* obj);
gint base::DateBase::hour_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::SoupDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_hour_get;
  auto _temp_ret = call_wrap_v ((const ::SoupDate*) (gobj_()));
  return _temp_ret;
}

static void _field_hour_set (::SoupDate* obj, gint _value) { obj->hour = (decltype(obj->hour)) _value; }
//  Date::hour (::SoupDate* obj, gint _value);
// void Date::hour (::SoupDate* obj, gint _value);
void base::DateBase::hour_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupDate* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_hour_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupDate*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_minute_get (const ::SoupDate* obj) { return (gint) obj->minute; }
// gint Date::minute (const ::SoupDate* obj);
// gint Date::minute (const ::SoupDate* obj);
gint base::DateBase::minute_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::SoupDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_minute_get;
  auto _temp_ret = call_wrap_v ((const ::SoupDate*) (gobj_()));
  return _temp_ret;
}

static void _field_minute_set (::SoupDate* obj, gint _value) { obj->minute = (decltype(obj->minute)) _value; }
//  Date::minute (::SoupDate* obj, gint _value);
// void Date::minute (::SoupDate* obj, gint _value);
void base::DateBase::minute_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupDate* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_minute_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupDate*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_second_get (const ::SoupDate* obj) { return (gint) obj->second; }
// gint Date::second (const ::SoupDate* obj);
// gint Date::second (const ::SoupDate* obj);
gint base::DateBase::second_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::SoupDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_second_get;
  auto _temp_ret = call_wrap_v ((const ::SoupDate*) (gobj_()));
  return _temp_ret;
}

static void _field_second_set (::SoupDate* obj, gint _value) { obj->second = (decltype(obj->second)) _value; }
//  Date::second (::SoupDate* obj, gint _value);
// void Date::second (::SoupDate* obj, gint _value);
void base::DateBase::second_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupDate* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_second_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupDate*) (gobj_()), (gint) (_value_to_c));
}

static gboolean _field_utc_get (const ::SoupDate* obj) { return (gboolean) obj->utc; }
// gboolean Date::utc (const ::SoupDate* obj);
// gboolean Date::utc (const ::SoupDate* obj);
bool base::DateBase::utc_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::SoupDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_utc_get;
  auto _temp_ret = call_wrap_v ((const ::SoupDate*) (gobj_()));
  return _temp_ret;
}

static void _field_utc_set (::SoupDate* obj, gboolean _value) { obj->utc = (decltype(obj->utc)) _value; }
//  Date::utc (::SoupDate* obj, gboolean _value);
// void Date::utc (::SoupDate* obj, gboolean _value);
void base::DateBase::utc_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupDate* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_utc_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupDate*) (gobj_()), (gboolean) (_value_to_c));
}

static gint _field_offset_get (const ::SoupDate* obj) { return (gint) obj->offset; }
// gint Date::offset (const ::SoupDate* obj);
// gint Date::offset (const ::SoupDate* obj);
gint base::DateBase::offset_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::SoupDate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_get;
  auto _temp_ret = call_wrap_v ((const ::SoupDate*) (gobj_()));
  return _temp_ret;
}

static void _field_offset_set (::SoupDate* obj, gint _value) { obj->offset = (decltype(obj->offset)) _value; }
//  Date::offset (::SoupDate* obj, gint _value);
// void Date::offset (::SoupDate* obj, gint _value);
void base::DateBase::offset_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupDate* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupDate*) (gobj_()), (gint) (_value_to_c));
}

// SoupDate* soup_date_new (int year, int month, int day, int hour, int minute, int second);
// ::SoupDate* soup_date_new (gint year, gint month, gint day, gint hour, gint minute, gint second);
Soup::Date base::DateBase::new_ (gint year, gint month, gint day, gint hour, gint minute, gint second) noexcept
{
  typedef ::SoupDate* (*call_wrap_t) (gint year, gint month, gint day, gint hour, gint minute, gint second);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_new;
  auto second_to_c = second;
  auto minute_to_c = minute;
  auto hour_to_c = hour;
  auto day_to_c = day;
  auto month_to_c = month;
  auto year_to_c = year;
  auto _temp_ret = call_wrap_v ((gint) (year_to_c), (gint) (month_to_c), (gint) (day_to_c), (gint) (hour_to_c), (gint) (minute_to_c), (gint) (second_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupDate* soup_date_new_from_now (int offset_seconds);
// ::SoupDate* soup_date_new_from_now (gint offset_seconds);
Soup::Date base::DateBase::new_from_now (gint offset_seconds) noexcept
{
  typedef ::SoupDate* (*call_wrap_t) (gint offset_seconds);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_new_from_now;
  auto offset_seconds_to_c = offset_seconds;
  auto _temp_ret = call_wrap_v ((gint) (offset_seconds_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupDate* soup_date_new_from_string (const char* date_string);
// ::SoupDate* soup_date_new_from_string (const char* date_string);
Soup::Date base::DateBase::new_from_string (const std::string & date_string) noexcept
{
  typedef ::SoupDate* (*call_wrap_t) (const char* date_string);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_new_from_string;
  auto date_string_to_c = gi::unwrap (date_string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (date_string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupDate* soup_date_new_from_time_t (time_t when);
// ::SoupDate* soup_date_new_from_time_t (glong when);
Soup::Date base::DateBase::new_from_time_t (glong when) noexcept
{
  typedef ::SoupDate* (*call_wrap_t) (glong when);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_new_from_time_t;
  auto when_to_c = when;
  auto _temp_ret = call_wrap_v ((glong) (when_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupDate* soup_date_copy (SoupDate* date);
// ::SoupDate* soup_date_copy (::SoupDate* date);
Soup::Date base::DateBase::copy () noexcept
{
  typedef ::SoupDate* (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_copy;
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_date_free (SoupDate* date);
// void soup_date_free (::SoupDate* date);
// IGNORE; marked ignore

// int soup_date_get_day (SoupDate* date);
// gint soup_date_get_day (::SoupDate* date);
gint base::DateBase::get_day () noexcept
{
  typedef gint (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_get_day;
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()));
  return _temp_ret;
}

// int soup_date_get_hour (SoupDate* date);
// gint soup_date_get_hour (::SoupDate* date);
gint base::DateBase::get_hour () noexcept
{
  typedef gint (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_get_hour;
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()));
  return _temp_ret;
}

// int soup_date_get_minute (SoupDate* date);
// gint soup_date_get_minute (::SoupDate* date);
gint base::DateBase::get_minute () noexcept
{
  typedef gint (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_get_minute;
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()));
  return _temp_ret;
}

// int soup_date_get_month (SoupDate* date);
// gint soup_date_get_month (::SoupDate* date);
gint base::DateBase::get_month () noexcept
{
  typedef gint (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_get_month;
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()));
  return _temp_ret;
}

// int soup_date_get_offset (SoupDate* date);
// gint soup_date_get_offset (::SoupDate* date);
gint base::DateBase::get_offset () noexcept
{
  typedef gint (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_get_offset;
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()));
  return _temp_ret;
}

// int soup_date_get_second (SoupDate* date);
// gint soup_date_get_second (::SoupDate* date);
gint base::DateBase::get_second () noexcept
{
  typedef gint (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_get_second;
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()));
  return _temp_ret;
}

// int soup_date_get_utc (SoupDate* date);
// gint soup_date_get_utc (::SoupDate* date);
gint base::DateBase::get_utc () noexcept
{
  typedef gint (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_get_utc;
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()));
  return _temp_ret;
}

// int soup_date_get_year (SoupDate* date);
// gint soup_date_get_year (::SoupDate* date);
gint base::DateBase::get_year () noexcept
{
  typedef gint (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_get_year;
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()));
  return _temp_ret;
}

// gboolean soup_date_is_past (SoupDate* date);
// gboolean soup_date_is_past (::SoupDate* date);
bool base::DateBase::is_past () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_is_past;
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()));
  return _temp_ret;
}

// char* soup_date_to_string (SoupDate* date, SoupDateFormat format);
// char* soup_date_to_string (::SoupDate* date, ::SoupDateFormat format);
std::string base::DateBase::to_string (Soup::DateFormat format) noexcept
{
  typedef char* (*call_wrap_t) (::SoupDate* date, ::SoupDateFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_to_string;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()), (::SoupDateFormat) (format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// time_t soup_date_to_time_t (SoupDate* date);
// glong soup_date_to_time_t (::SoupDate* date);
glong base::DateBase::to_time_t () noexcept
{
  typedef glong (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_date_to_time_t;
  auto _temp_ret = call_wrap_v ((::SoupDate*) (gobj_()));
  return _temp_ret;
}

// void soup_date_to_timeval (SoupDate* date, GTimeVal* time);
// void soup_date_to_timeval (::SoupDate* date,  time);
// IGNORE; deprecated


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/date_extra_def_impl.hpp>)
#include <soup/date_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/date_extra_impl.hpp>)
#include <soup/date_extra_impl.hpp>
#endif
#endif

#endif
