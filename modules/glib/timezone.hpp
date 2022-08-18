// AUTO-GENERATED

#ifndef _GI_GLIB_TIMEZONE_HPP_
#define _GI_GLIB_TIMEZONE_HPP_


namespace gi {

namespace repository {

namespace GLib {


class TimeZone;

namespace base {


#define GI_GLIB_TIMEZONE_BASE base::TimeZoneBase
class TimeZoneBase : public gi::detail::GBoxedWrapper<TimeZoneBase, ::GTimeZone>
{
typedef gi::detail::GBoxedWrapper<TimeZoneBase, ::GTimeZone> super_type;
public:

TimeZoneBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_time_zone_get_type(); } 

// GTimeZone* g_time_zone_new (const gchar* identifier);
// ::GTimeZone* g_time_zone_new (const char* identifier);
// IGNORE; deprecated

// GTimeZone* g_time_zone_new_identifier (const gchar* identifier);
// ::GTimeZone* g_time_zone_new_identifier (const char* identifier);
static GI_INLINE_DECL GLib::TimeZone new_identifier (const std::string & identifier) noexcept;
static GI_INLINE_DECL GLib::TimeZone new_identifier () noexcept;

// GTimeZone* g_time_zone_new_local ();
// ::GTimeZone* g_time_zone_new_local ();
static GI_INLINE_DECL GLib::TimeZone new_local () noexcept;

// GTimeZone* g_time_zone_new_offset (gint32 seconds);
// ::GTimeZone* g_time_zone_new_offset (gint32 seconds);
static GI_INLINE_DECL GLib::TimeZone new_offset (gint32 seconds) noexcept;

// GTimeZone* g_time_zone_new_utc ();
// ::GTimeZone* g_time_zone_new_utc ();
static GI_INLINE_DECL GLib::TimeZone new_utc () noexcept;

// gint g_time_zone_adjust_time (GTimeZone* tz, GTimeType type, gint64* time_);
// gint g_time_zone_adjust_time (::GTimeZone* tz, ::GTimeType type, gint64 time_);
// SKIP; inconsistent in time_ pointer depth (1 vs 0)

// gint g_time_zone_find_interval (GTimeZone* tz, GTimeType type, gint64 time_);
// gint g_time_zone_find_interval (::GTimeZone* tz, ::GTimeType type, gint64 time_);
GI_INLINE_DECL gint find_interval (GLib::TimeType type, gint64 time_) noexcept;

// const gchar* g_time_zone_get_abbreviation (GTimeZone* tz, gint interval);
// const char* g_time_zone_get_abbreviation (::GTimeZone* tz, gint interval);
GI_INLINE_DECL std::string get_abbreviation (gint interval) noexcept;

// const gchar* g_time_zone_get_identifier (GTimeZone* tz);
// const char* g_time_zone_get_identifier (::GTimeZone* tz);
GI_INLINE_DECL std::string get_identifier () noexcept;

// gint32 g_time_zone_get_offset (GTimeZone* tz, gint interval);
// gint32 g_time_zone_get_offset (::GTimeZone* tz, gint interval);
GI_INLINE_DECL gint32 get_offset (gint interval) noexcept;

// gboolean g_time_zone_is_dst (GTimeZone* tz, gint interval);
// gboolean g_time_zone_is_dst (::GTimeZone* tz, gint interval);
GI_INLINE_DECL bool is_dst (gint interval) noexcept;

// GTimeZone* g_time_zone_ref (GTimeZone* tz);
// ::GTimeZone* g_time_zone_ref (::GTimeZone* tz);
// IGNORE; marked ignore

// void g_time_zone_unref (GTimeZone* tz);
// void g_time_zone_unref (::GTimeZone* tz);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/timezone_extra_def.hpp>)
#include <glib/timezone_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/timezone_extra.hpp>)
#include <glib/timezone_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class TimeZone : public GI_GLIB_TIMEZONE_BASE
{ typedef GI_GLIB_TIMEZONE_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GTimeZone>
{ typedef GLib::TimeZone type; }; 

} // namespace repository

} // namespace gi

#endif
