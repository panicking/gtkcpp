// AUTO-GENERATED

#ifndef _GI_SOUP_DATE_HPP_
#define _GI_SOUP_DATE_HPP_


namespace gi {

namespace repository {

namespace Soup {


class Date;

namespace base {


#define GI_SOUP_DATE_BASE base::DateBase
class DateBase : public gi::detail::GBoxedWrapper<DateBase, ::SoupDate>
{
typedef gi::detail::GBoxedWrapper<DateBase, ::SoupDate> super_type;
public:

DateBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return soup_date_get_type(); } 

// gint Date::year (const ::SoupDate* obj);
// gint Date::year (const ::SoupDate* obj);
GI_INLINE_DECL gint year_ () const noexcept;

//  Date::year (::SoupDate* obj, gint _value);
// void Date::year (::SoupDate* obj, gint _value);
GI_INLINE_DECL void year_ (gint _value) noexcept;

// gint Date::month (const ::SoupDate* obj);
// gint Date::month (const ::SoupDate* obj);
GI_INLINE_DECL gint month_ () const noexcept;

//  Date::month (::SoupDate* obj, gint _value);
// void Date::month (::SoupDate* obj, gint _value);
GI_INLINE_DECL void month_ (gint _value) noexcept;

// gint Date::day (const ::SoupDate* obj);
// gint Date::day (const ::SoupDate* obj);
GI_INLINE_DECL gint day_ () const noexcept;

//  Date::day (::SoupDate* obj, gint _value);
// void Date::day (::SoupDate* obj, gint _value);
GI_INLINE_DECL void day_ (gint _value) noexcept;

// gint Date::hour (const ::SoupDate* obj);
// gint Date::hour (const ::SoupDate* obj);
GI_INLINE_DECL gint hour_ () const noexcept;

//  Date::hour (::SoupDate* obj, gint _value);
// void Date::hour (::SoupDate* obj, gint _value);
GI_INLINE_DECL void hour_ (gint _value) noexcept;

// gint Date::minute (const ::SoupDate* obj);
// gint Date::minute (const ::SoupDate* obj);
GI_INLINE_DECL gint minute_ () const noexcept;

//  Date::minute (::SoupDate* obj, gint _value);
// void Date::minute (::SoupDate* obj, gint _value);
GI_INLINE_DECL void minute_ (gint _value) noexcept;

// gint Date::second (const ::SoupDate* obj);
// gint Date::second (const ::SoupDate* obj);
GI_INLINE_DECL gint second_ () const noexcept;

//  Date::second (::SoupDate* obj, gint _value);
// void Date::second (::SoupDate* obj, gint _value);
GI_INLINE_DECL void second_ (gint _value) noexcept;

// gboolean Date::utc (const ::SoupDate* obj);
// gboolean Date::utc (const ::SoupDate* obj);
GI_INLINE_DECL bool utc_ () const noexcept;

//  Date::utc (::SoupDate* obj, gboolean _value);
// void Date::utc (::SoupDate* obj, gboolean _value);
GI_INLINE_DECL void utc_ (gboolean _value) noexcept;

// gint Date::offset (const ::SoupDate* obj);
// gint Date::offset (const ::SoupDate* obj);
GI_INLINE_DECL gint offset_ () const noexcept;

//  Date::offset (::SoupDate* obj, gint _value);
// void Date::offset (::SoupDate* obj, gint _value);
GI_INLINE_DECL void offset_ (gint _value) noexcept;

// SoupDate* soup_date_new (int year, int month, int day, int hour, int minute, int second);
// ::SoupDate* soup_date_new (gint year, gint month, gint day, gint hour, gint minute, gint second);
static GI_INLINE_DECL Soup::Date new_ (gint year, gint month, gint day, gint hour, gint minute, gint second) noexcept;

// SoupDate* soup_date_new_from_now (int offset_seconds);
// ::SoupDate* soup_date_new_from_now (gint offset_seconds);
static GI_INLINE_DECL Soup::Date new_from_now (gint offset_seconds) noexcept;

// SoupDate* soup_date_new_from_string (const char* date_string);
// ::SoupDate* soup_date_new_from_string (const char* date_string);
static GI_INLINE_DECL Soup::Date new_from_string (const std::string & date_string) noexcept;

// SoupDate* soup_date_new_from_time_t (time_t when);
// ::SoupDate* soup_date_new_from_time_t (glong when);
static GI_INLINE_DECL Soup::Date new_from_time_t (glong when) noexcept;

// SoupDate* soup_date_copy (SoupDate* date);
// ::SoupDate* soup_date_copy (::SoupDate* date);
GI_INLINE_DECL Soup::Date copy () noexcept;

// void soup_date_free (SoupDate* date);
// void soup_date_free (::SoupDate* date);
// IGNORE; marked ignore

// int soup_date_get_day (SoupDate* date);
// gint soup_date_get_day (::SoupDate* date);
GI_INLINE_DECL gint get_day () noexcept;

// int soup_date_get_hour (SoupDate* date);
// gint soup_date_get_hour (::SoupDate* date);
GI_INLINE_DECL gint get_hour () noexcept;

// int soup_date_get_minute (SoupDate* date);
// gint soup_date_get_minute (::SoupDate* date);
GI_INLINE_DECL gint get_minute () noexcept;

// int soup_date_get_month (SoupDate* date);
// gint soup_date_get_month (::SoupDate* date);
GI_INLINE_DECL gint get_month () noexcept;

// int soup_date_get_offset (SoupDate* date);
// gint soup_date_get_offset (::SoupDate* date);
GI_INLINE_DECL gint get_offset () noexcept;

// int soup_date_get_second (SoupDate* date);
// gint soup_date_get_second (::SoupDate* date);
GI_INLINE_DECL gint get_second () noexcept;

// int soup_date_get_utc (SoupDate* date);
// gint soup_date_get_utc (::SoupDate* date);
GI_INLINE_DECL gint get_utc () noexcept;

// int soup_date_get_year (SoupDate* date);
// gint soup_date_get_year (::SoupDate* date);
GI_INLINE_DECL gint get_year () noexcept;

// gboolean soup_date_is_past (SoupDate* date);
// gboolean soup_date_is_past (::SoupDate* date);
GI_INLINE_DECL bool is_past () noexcept;

// char* soup_date_to_string (SoupDate* date, SoupDateFormat format);
// char* soup_date_to_string (::SoupDate* date, ::SoupDateFormat format);
GI_INLINE_DECL std::string to_string (Soup::DateFormat format) noexcept;

// time_t soup_date_to_time_t (SoupDate* date);
// glong soup_date_to_time_t (::SoupDate* date);
GI_INLINE_DECL glong to_time_t () noexcept;

// void soup_date_to_timeval (SoupDate* date, GTimeVal* time);
// void soup_date_to_timeval (::SoupDate* date,  time);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/date_extra_def.hpp>)
#include <soup/date_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/date_extra.hpp>)
#include <soup/date_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Date : public GI_SOUP_DATE_BASE
{ typedef GI_SOUP_DATE_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupDate>
{ typedef Soup::Date type; }; 

} // namespace repository

} // namespace gi

#endif
