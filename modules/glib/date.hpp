// AUTO-GENERATED

#ifndef _GI_GLIB_DATE_HPP_
#define _GI_GLIB_DATE_HPP_


namespace gi {

namespace repository {

namespace GLib {


class Date;

namespace base {


#define GI_GLIB_DATE_BASE base::DateBase
class DateBase : public gi::detail::GBoxedWrapper<DateBase, ::GDate>
{
typedef gi::detail::GBoxedWrapper<DateBase, ::GDate> super_type;
public:

DateBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_date_get_type(); } 

// guint Date::julian_days (const ::GDate* obj);
// guint Date::julian_days (const ::GDate* obj);
GI_INLINE_DECL guint julian_days_ () const noexcept;

//  Date::julian_days (::GDate* obj, guint _value);
// void Date::julian_days (::GDate* obj, guint _value);
GI_INLINE_DECL void julian_days_ (guint _value) noexcept;

// guint Date::julian (const ::GDate* obj);
// guint Date::julian (const ::GDate* obj);
GI_INLINE_DECL guint julian_ () const noexcept;

//  Date::julian (::GDate* obj, guint _value);
// void Date::julian (::GDate* obj, guint _value);
GI_INLINE_DECL void julian_ (guint _value) noexcept;

// guint Date::dmy (const ::GDate* obj);
// guint Date::dmy (const ::GDate* obj);
GI_INLINE_DECL guint dmy_ () const noexcept;

//  Date::dmy (::GDate* obj, guint _value);
// void Date::dmy (::GDate* obj, guint _value);
GI_INLINE_DECL void dmy_ (guint _value) noexcept;

// guint Date::day (const ::GDate* obj);
// guint Date::day (const ::GDate* obj);
GI_INLINE_DECL guint day_ () const noexcept;

//  Date::day (::GDate* obj, guint _value);
// void Date::day (::GDate* obj, guint _value);
GI_INLINE_DECL void day_ (guint _value) noexcept;

// guint Date::month (const ::GDate* obj);
// guint Date::month (const ::GDate* obj);
GI_INLINE_DECL guint month_ () const noexcept;

//  Date::month (::GDate* obj, guint _value);
// void Date::month (::GDate* obj, guint _value);
GI_INLINE_DECL void month_ (guint _value) noexcept;

// guint Date::year (const ::GDate* obj);
// guint Date::year (const ::GDate* obj);
GI_INLINE_DECL guint year_ () const noexcept;

//  Date::year (::GDate* obj, guint _value);
// void Date::year (::GDate* obj, guint _value);
GI_INLINE_DECL void year_ (guint _value) noexcept;

// GDate* g_date_new ();
// ::GDate* g_date_new ();
static GI_INLINE_DECL GLib::Date new_ () noexcept;

// GDate* g_date_new_dmy (GDateDay day, GDateMonth month, GDateYear year);
// ::GDate* g_date_new_dmy (::GDateDay day, ::GDateMonth month, ::GDateYear year);
static GI_INLINE_DECL GLib::Date new_dmy (::GDateDay day, GLib::DateMonth month, ::GDateYear year) noexcept;

// GDate* g_date_new_julian (guint32 julian_day);
// ::GDate* g_date_new_julian (guint32 julian_day);
static GI_INLINE_DECL GLib::Date new_julian (guint32 julian_day) noexcept;

// void g_date_add_days (GDate* date, guint n_days);
// void g_date_add_days (::GDate* date, guint n_days);
GI_INLINE_DECL void add_days (guint n_days) noexcept;

// void g_date_add_months (GDate* date, guint n_months);
// void g_date_add_months (::GDate* date, guint n_months);
GI_INLINE_DECL void add_months (guint n_months) noexcept;

// void g_date_add_years (GDate* date, guint n_years);
// void g_date_add_years (::GDate* date, guint n_years);
GI_INLINE_DECL void add_years (guint n_years) noexcept;

// void g_date_clamp (GDate* date, const GDate* min_date, const GDate* max_date);
// void g_date_clamp (::GDate* date, const ::GDate* min_date, const ::GDate* max_date);
GI_INLINE_DECL void clamp (const GLib::Date & min_date, const GLib::Date & max_date) noexcept;

// void g_date_clear (GDate* date, guint n_dates);
// void g_date_clear (::GDate* date, guint n_dates);
GI_INLINE_DECL void clear (guint n_dates) noexcept;

// gint g_date_compare (const GDate* lhs, const GDate* rhs);
// gint g_date_compare (const ::GDate* lhs, const ::GDate* rhs);
GI_INLINE_DECL gint compare (const GLib::Date & rhs) const noexcept;

// GDate* g_date_copy (const GDate* date);
// ::GDate* g_date_copy (const ::GDate* date);
GI_INLINE_DECL GLib::Date copy () const noexcept;

// gint g_date_days_between (const GDate* date1, const GDate* date2);
// gint g_date_days_between (const ::GDate* date1, const ::GDate* date2);
GI_INLINE_DECL gint days_between (const GLib::Date & date2) const noexcept;

// void g_date_free (GDate* date);
// void g_date_free (::GDate* date);
// IGNORE; marked ignore

// GDateDay g_date_get_day (const GDate* date);
// ::GDateDay g_date_get_day (const ::GDate* date);
GI_INLINE_DECL GLib::DateDay get_day () const noexcept;

// guint g_date_get_day_of_year (const GDate* date);
// guint g_date_get_day_of_year (const ::GDate* date);
GI_INLINE_DECL guint get_day_of_year () const noexcept;

// guint g_date_get_iso8601_week_of_year (const GDate* date);
// guint g_date_get_iso8601_week_of_year (const ::GDate* date);
GI_INLINE_DECL guint get_iso8601_week_of_year () const noexcept;

// guint32 g_date_get_julian (const GDate* date);
// guint32 g_date_get_julian (const ::GDate* date);
GI_INLINE_DECL guint32 get_julian () const noexcept;

// guint g_date_get_monday_week_of_year (const GDate* date);
// guint g_date_get_monday_week_of_year (const ::GDate* date);
GI_INLINE_DECL guint get_monday_week_of_year () const noexcept;

// GDateMonth g_date_get_month (const GDate* date);
// ::GDateMonth g_date_get_month (const ::GDate* date);
GI_INLINE_DECL GLib::DateMonth get_month () const noexcept;

// guint g_date_get_sunday_week_of_year (const GDate* date);
// guint g_date_get_sunday_week_of_year (const ::GDate* date);
GI_INLINE_DECL guint get_sunday_week_of_year () const noexcept;

// GDateWeekday g_date_get_weekday (const GDate* date);
// ::GDateWeekday g_date_get_weekday (const ::GDate* date);
GI_INLINE_DECL GLib::DateWeekday get_weekday () const noexcept;

// GDateYear g_date_get_year (const GDate* date);
// ::GDateYear g_date_get_year (const ::GDate* date);
GI_INLINE_DECL GLib::DateYear get_year () const noexcept;

// gboolean g_date_is_first_of_month (const GDate* date);
// gboolean g_date_is_first_of_month (const ::GDate* date);
GI_INLINE_DECL bool is_first_of_month () const noexcept;

// gboolean g_date_is_last_of_month (const GDate* date);
// gboolean g_date_is_last_of_month (const ::GDate* date);
GI_INLINE_DECL bool is_last_of_month () const noexcept;

// void g_date_order (GDate* date1, GDate* date2);
// void g_date_order (::GDate* date1, ::GDate* date2);
GI_INLINE_DECL void order (GLib::Date date2) noexcept;

// void g_date_set_day (GDate* date, GDateDay day);
// void g_date_set_day (::GDate* date, ::GDateDay day);
GI_INLINE_DECL void set_day (::GDateDay day) noexcept;

// void g_date_set_dmy (GDate* date, GDateDay day, GDateMonth month, GDateYear y);
// void g_date_set_dmy (::GDate* date, ::GDateDay day, ::GDateMonth month, ::GDateYear y);
GI_INLINE_DECL void set_dmy (::GDateDay day, GLib::DateMonth month, ::GDateYear y) noexcept;

// void g_date_set_julian (GDate* date, guint32 julian_date);
// void g_date_set_julian (::GDate* date, guint32 julian_date);
GI_INLINE_DECL void set_julian (guint32 julian_date) noexcept;

// void g_date_set_month (GDate* date, GDateMonth month);
// void g_date_set_month (::GDate* date, ::GDateMonth month);
GI_INLINE_DECL void set_month (GLib::DateMonth month) noexcept;

// void g_date_set_parse (GDate* date, const gchar* str);
// void g_date_set_parse (::GDate* date, const char* str);
GI_INLINE_DECL void set_parse (const std::string & str) noexcept;

// void g_date_set_time (GDate* date, GTime time_);
// void g_date_set_time (::GDate* date,  time_);
// IGNORE; deprecated

// void g_date_set_time_t (GDate* date, time_t timet);
// void g_date_set_time_t (::GDate* date, glong timet);
GI_INLINE_DECL void set_time_t (glong timet) noexcept;

// void g_date_set_time_val (GDate* date, GTimeVal* timeval);
// void g_date_set_time_val (::GDate* date,  timeval);
// IGNORE; deprecated

// void g_date_set_year (GDate* date, GDateYear year);
// void g_date_set_year (::GDate* date, ::GDateYear year);
GI_INLINE_DECL void set_year (::GDateYear year) noexcept;

// void g_date_subtract_days (GDate* date, guint n_days);
// void g_date_subtract_days (::GDate* date, guint n_days);
GI_INLINE_DECL void subtract_days (guint n_days) noexcept;

// void g_date_subtract_months (GDate* date, guint n_months);
// void g_date_subtract_months (::GDate* date, guint n_months);
GI_INLINE_DECL void subtract_months (guint n_months) noexcept;

// void g_date_subtract_years (GDate* date, guint n_years);
// void g_date_subtract_years (::GDate* date, guint n_years);
GI_INLINE_DECL void subtract_years (guint n_years) noexcept;

// void g_date_to_struct_tm (const GDate* date, tm* tm);
// void g_date_to_struct_tm (const ::GDate* date, void* tm);
GI_INLINE_DECL void to_struct_tm (void* tm) const noexcept;

// gboolean g_date_valid (const GDate* date);
// gboolean g_date_valid (const ::GDate* date);
GI_INLINE_DECL bool valid () const noexcept;

// guint8 g_date_get_days_in_month (GDateMonth month, GDateYear year);
// guint8 g_date_get_days_in_month (::GDateMonth month, ::GDateYear year);
static GI_INLINE_DECL guint8 get_days_in_month (GLib::DateMonth month, ::GDateYear year) noexcept;

// guint8 g_date_get_monday_weeks_in_year (GDateYear year);
// guint8 g_date_get_monday_weeks_in_year (::GDateYear year);
static GI_INLINE_DECL guint8 get_monday_weeks_in_year (::GDateYear year) noexcept;

// guint8 g_date_get_sunday_weeks_in_year (GDateYear year);
// guint8 g_date_get_sunday_weeks_in_year (::GDateYear year);
static GI_INLINE_DECL guint8 get_sunday_weeks_in_year (::GDateYear year) noexcept;

// gboolean g_date_is_leap_year (GDateYear year);
// gboolean g_date_is_leap_year (::GDateYear year);
static GI_INLINE_DECL bool is_leap_year (::GDateYear year) noexcept;

// gsize g_date_strftime (gchar* s, gsize slen, const gchar* format, const GDate* date);
// gsize g_date_strftime (char* s, gsize slen, const char* format, const ::GDate* date);
static GI_INLINE_DECL gsize strftime (const std::string & s, gsize slen, const std::string & format, const GLib::Date & date) noexcept;

// gboolean g_date_valid_day (GDateDay day);
// gboolean g_date_valid_day (::GDateDay day);
static GI_INLINE_DECL bool valid_day (::GDateDay day) noexcept;

// gboolean g_date_valid_dmy (GDateDay day, GDateMonth month, GDateYear year);
// gboolean g_date_valid_dmy (::GDateDay day, ::GDateMonth month, ::GDateYear year);
static GI_INLINE_DECL bool valid_dmy (::GDateDay day, GLib::DateMonth month, ::GDateYear year) noexcept;

// gboolean g_date_valid_julian (guint32 julian_date);
// gboolean g_date_valid_julian (guint32 julian_date);
static GI_INLINE_DECL bool valid_julian (guint32 julian_date) noexcept;

// gboolean g_date_valid_month (GDateMonth month);
// gboolean g_date_valid_month (::GDateMonth month);
static GI_INLINE_DECL bool valid_month (GLib::DateMonth month) noexcept;

// gboolean g_date_valid_weekday (GDateWeekday weekday);
// gboolean g_date_valid_weekday (::GDateWeekday weekday);
static GI_INLINE_DECL bool valid_weekday (GLib::DateWeekday weekday) noexcept;

// gboolean g_date_valid_year (GDateYear year);
// gboolean g_date_valid_year (::GDateYear year);
static GI_INLINE_DECL bool valid_year (::GDateYear year) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/date_extra_def.hpp>)
#include <glib/date_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/date_extra.hpp>)
#include <glib/date_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Date : public GI_GLIB_DATE_BASE
{ typedef GI_GLIB_DATE_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GDate>
{ typedef GLib::Date type; }; 

} // namespace repository

} // namespace gi

#endif
