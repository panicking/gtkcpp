// AUTO-GENERATED

#ifndef _GI_GLIB_DATETIME_HPP_
#define _GI_GLIB_DATETIME_HPP_


namespace gi {

namespace repository {

namespace GLib {

class TimeZone;

class DateTime;

namespace base {


#define GI_GLIB_DATETIME_BASE base::DateTimeBase
class DateTimeBase : public gi::detail::GBoxedWrapper<DateTimeBase, ::GDateTime>
{
typedef gi::detail::GBoxedWrapper<DateTimeBase, ::GDateTime> super_type;
public:

DateTimeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_date_time_get_type(); } 

// GDateTime* g_date_time_new (GTimeZone* tz, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GDateTime* g_date_time_new (::GTimeZone* tz, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
static GI_INLINE_DECL GLib::DateTime new_ (GLib::TimeZone tz, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept;

// GDateTime* g_date_time_new_from_iso8601 (const gchar* text, GTimeZone* default_tz);
// ::GDateTime* g_date_time_new_from_iso8601 (const char* text, ::GTimeZone* default_tz);
static GI_INLINE_DECL GLib::DateTime new_from_iso8601 (const std::string & text, GLib::TimeZone default_tz) noexcept;
static GI_INLINE_DECL GLib::DateTime new_from_iso8601 (const std::string & text) noexcept;

// GDateTime* g_date_time_new_from_timeval_local (const GTimeVal* tv);
// ::GDateTime* g_date_time_new_from_timeval_local (const  tv);
// IGNORE; deprecated

// GDateTime* g_date_time_new_from_timeval_utc (const GTimeVal* tv);
// ::GDateTime* g_date_time_new_from_timeval_utc (const  tv);
// IGNORE; deprecated

// GDateTime* g_date_time_new_from_unix_local (gint64 t);
// ::GDateTime* g_date_time_new_from_unix_local (gint64 t);
static GI_INLINE_DECL GLib::DateTime new_from_unix_local (gint64 t) noexcept;

// GDateTime* g_date_time_new_from_unix_utc (gint64 t);
// ::GDateTime* g_date_time_new_from_unix_utc (gint64 t);
static GI_INLINE_DECL GLib::DateTime new_from_unix_utc (gint64 t) noexcept;

// GDateTime* g_date_time_new_local (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GDateTime* g_date_time_new_local (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
static GI_INLINE_DECL GLib::DateTime new_local (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept;

// GDateTime* g_date_time_new_now (GTimeZone* tz);
// ::GDateTime* g_date_time_new_now (::GTimeZone* tz);
static GI_INLINE_DECL GLib::DateTime new_now (GLib::TimeZone tz) noexcept;

// GDateTime* g_date_time_new_now_local ();
// ::GDateTime* g_date_time_new_now_local ();
static GI_INLINE_DECL GLib::DateTime new_now_local () noexcept;

// GDateTime* g_date_time_new_now_utc ();
// ::GDateTime* g_date_time_new_now_utc ();
static GI_INLINE_DECL GLib::DateTime new_now_utc () noexcept;

// GDateTime* g_date_time_new_utc (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GDateTime* g_date_time_new_utc (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
static GI_INLINE_DECL GLib::DateTime new_utc (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept;

// GDateTime* g_date_time_add (GDateTime* datetime, GTimeSpan timespan);
// ::GDateTime* g_date_time_add (::GDateTime* datetime, ::GTimeSpan timespan);
GI_INLINE_DECL GLib::DateTime add (::GTimeSpan timespan) noexcept;

// GDateTime* g_date_time_add_days (GDateTime* datetime, gint days);
// ::GDateTime* g_date_time_add_days (::GDateTime* datetime, gint days);
GI_INLINE_DECL GLib::DateTime add_days (gint days) noexcept;

// GDateTime* g_date_time_add_full (GDateTime* datetime, gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds);
// ::GDateTime* g_date_time_add_full (::GDateTime* datetime, gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds);
GI_INLINE_DECL GLib::DateTime add_full (gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds) noexcept;

// GDateTime* g_date_time_add_hours (GDateTime* datetime, gint hours);
// ::GDateTime* g_date_time_add_hours (::GDateTime* datetime, gint hours);
GI_INLINE_DECL GLib::DateTime add_hours (gint hours) noexcept;

// GDateTime* g_date_time_add_minutes (GDateTime* datetime, gint minutes);
// ::GDateTime* g_date_time_add_minutes (::GDateTime* datetime, gint minutes);
GI_INLINE_DECL GLib::DateTime add_minutes (gint minutes) noexcept;

// GDateTime* g_date_time_add_months (GDateTime* datetime, gint months);
// ::GDateTime* g_date_time_add_months (::GDateTime* datetime, gint months);
GI_INLINE_DECL GLib::DateTime add_months (gint months) noexcept;

// GDateTime* g_date_time_add_seconds (GDateTime* datetime, gdouble seconds);
// ::GDateTime* g_date_time_add_seconds (::GDateTime* datetime, gdouble seconds);
GI_INLINE_DECL GLib::DateTime add_seconds (gdouble seconds) noexcept;

// GDateTime* g_date_time_add_weeks (GDateTime* datetime, gint weeks);
// ::GDateTime* g_date_time_add_weeks (::GDateTime* datetime, gint weeks);
GI_INLINE_DECL GLib::DateTime add_weeks (gint weeks) noexcept;

// GDateTime* g_date_time_add_years (GDateTime* datetime, gint years);
// ::GDateTime* g_date_time_add_years (::GDateTime* datetime, gint years);
GI_INLINE_DECL GLib::DateTime add_years (gint years) noexcept;

// gint g_date_time_compare (gconstpointer dt1, gconstpointer dt2);
// gint g_date_time_compare (const ::GDateTime* dt1, const ::GDateTime* dt2);
GI_INLINE_DECL gint compare (const GLib::DateTime & dt2) const noexcept;

// GTimeSpan g_date_time_difference (GDateTime* end, GDateTime* begin);
// ::GTimeSpan g_date_time_difference (::GDateTime* end, ::GDateTime* begin);
GI_INLINE_DECL GLib::TimeSpan difference (GLib::DateTime begin) noexcept;

// gboolean g_date_time_equal (gconstpointer dt1, gconstpointer dt2);
// gboolean g_date_time_equal (const ::GDateTime* dt1, const ::GDateTime* dt2);
GI_INLINE_DECL bool equal (const GLib::DateTime & dt2) const noexcept;

// gchar* g_date_time_format (GDateTime* datetime, const gchar* format);
// char* g_date_time_format (::GDateTime* datetime, const char* format);
GI_INLINE_DECL std::string format (const std::string & format) noexcept;

// gchar* g_date_time_format_iso8601 (GDateTime* datetime);
// char* g_date_time_format_iso8601 (::GDateTime* datetime);
GI_INLINE_DECL std::string format_iso8601 () noexcept;

// gint g_date_time_get_day_of_month (GDateTime* datetime);
// gint g_date_time_get_day_of_month (::GDateTime* datetime);
GI_INLINE_DECL gint get_day_of_month () noexcept;

// gint g_date_time_get_day_of_week (GDateTime* datetime);
// gint g_date_time_get_day_of_week (::GDateTime* datetime);
GI_INLINE_DECL gint get_day_of_week () noexcept;

// gint g_date_time_get_day_of_year (GDateTime* datetime);
// gint g_date_time_get_day_of_year (::GDateTime* datetime);
GI_INLINE_DECL gint get_day_of_year () noexcept;

// gint g_date_time_get_hour (GDateTime* datetime);
// gint g_date_time_get_hour (::GDateTime* datetime);
GI_INLINE_DECL gint get_hour () noexcept;

// gint g_date_time_get_microsecond (GDateTime* datetime);
// gint g_date_time_get_microsecond (::GDateTime* datetime);
GI_INLINE_DECL gint get_microsecond () noexcept;

// gint g_date_time_get_minute (GDateTime* datetime);
// gint g_date_time_get_minute (::GDateTime* datetime);
GI_INLINE_DECL gint get_minute () noexcept;

// gint g_date_time_get_month (GDateTime* datetime);
// gint g_date_time_get_month (::GDateTime* datetime);
GI_INLINE_DECL gint get_month () noexcept;

// gint g_date_time_get_second (GDateTime* datetime);
// gint g_date_time_get_second (::GDateTime* datetime);
GI_INLINE_DECL gint get_second () noexcept;

// gdouble g_date_time_get_seconds (GDateTime* datetime);
// gdouble g_date_time_get_seconds (::GDateTime* datetime);
GI_INLINE_DECL gdouble get_seconds () noexcept;

// GTimeZone* g_date_time_get_timezone (GDateTime* datetime);
// ::GTimeZone* g_date_time_get_timezone (::GDateTime* datetime);
GI_INLINE_DECL GLib::TimeZone get_timezone () noexcept;

// const gchar* g_date_time_get_timezone_abbreviation (GDateTime* datetime);
// const char* g_date_time_get_timezone_abbreviation (::GDateTime* datetime);
GI_INLINE_DECL std::string get_timezone_abbreviation () noexcept;

// GTimeSpan g_date_time_get_utc_offset (GDateTime* datetime);
// ::GTimeSpan g_date_time_get_utc_offset (::GDateTime* datetime);
GI_INLINE_DECL GLib::TimeSpan get_utc_offset () noexcept;

// gint g_date_time_get_week_numbering_year (GDateTime* datetime);
// gint g_date_time_get_week_numbering_year (::GDateTime* datetime);
GI_INLINE_DECL gint get_week_numbering_year () noexcept;

// gint g_date_time_get_week_of_year (GDateTime* datetime);
// gint g_date_time_get_week_of_year (::GDateTime* datetime);
GI_INLINE_DECL gint get_week_of_year () noexcept;

// gint g_date_time_get_year (GDateTime* datetime);
// gint g_date_time_get_year (::GDateTime* datetime);
GI_INLINE_DECL gint get_year () noexcept;

// void g_date_time_get_ymd (GDateTime* datetime, gint* year, gint* month, gint* day);
// void g_date_time_get_ymd (::GDateTime* datetime, gint* year, gint* month, gint* day);
GI_INLINE_DECL void get_ymd (gint * year = nullptr, gint * month = nullptr, gint * day = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint> get_ymd () noexcept;

// guint g_date_time_hash (gconstpointer datetime);
// guint g_date_time_hash (const ::GDateTime* datetime);
GI_INLINE_DECL guint hash () const noexcept;

// gboolean g_date_time_is_daylight_savings (GDateTime* datetime);
// gboolean g_date_time_is_daylight_savings (::GDateTime* datetime);
GI_INLINE_DECL bool is_daylight_savings () noexcept;

// GDateTime* g_date_time_ref (GDateTime* datetime);
// ::GDateTime* g_date_time_ref (::GDateTime* datetime);
// IGNORE; marked ignore

// GDateTime* g_date_time_to_local (GDateTime* datetime);
// ::GDateTime* g_date_time_to_local (::GDateTime* datetime);
GI_INLINE_DECL GLib::DateTime to_local () noexcept;

// gboolean g_date_time_to_timeval (GDateTime* datetime, GTimeVal* tv);
// gboolean g_date_time_to_timeval (::GDateTime* datetime,  tv);
// IGNORE; deprecated

// GDateTime* g_date_time_to_timezone (GDateTime* datetime, GTimeZone* tz);
// ::GDateTime* g_date_time_to_timezone (::GDateTime* datetime, ::GTimeZone* tz);
GI_INLINE_DECL GLib::DateTime to_timezone (GLib::TimeZone tz) noexcept;

// gint64 g_date_time_to_unix (GDateTime* datetime);
// gint64 g_date_time_to_unix (::GDateTime* datetime);
GI_INLINE_DECL gint64 to_unix () noexcept;

// GDateTime* g_date_time_to_utc (GDateTime* datetime);
// ::GDateTime* g_date_time_to_utc (::GDateTime* datetime);
GI_INLINE_DECL GLib::DateTime to_utc () noexcept;

// void g_date_time_unref (GDateTime* datetime);
// void g_date_time_unref (::GDateTime* datetime);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/datetime_extra_def.hpp>)
#include <glib/datetime_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/datetime_extra.hpp>)
#include <glib/datetime_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class DateTime : public GI_GLIB_DATETIME_BASE
{ typedef GI_GLIB_DATETIME_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GDateTime>
{ typedef GLib::DateTime type; }; 

} // namespace repository

} // namespace gi

#endif
