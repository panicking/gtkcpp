// AUTO-GENERATED

#ifndef _GI_GST_DATETIME_HPP_
#define _GI_GST_DATETIME_HPP_


namespace gi {

namespace repository {

namespace Gst {


class DateTime;

namespace base {


#define GI_GST_DATETIME_BASE base::DateTimeBase
class DateTimeBase : public gi::detail::GBoxedWrapper<DateTimeBase, ::GstDateTime>
{
typedef gi::detail::GBoxedWrapper<DateTimeBase, ::GstDateTime> super_type;
public:

DateTimeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_date_time_get_type(); } 

// GstDateTime* gst_date_time_new (gfloat tzoffset, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GstDateTime* gst_date_time_new (gfloat tzoffset, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
static GI_INLINE_DECL Gst::DateTime new_ (gfloat tzoffset, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept;

// GstDateTime* gst_date_time_new_from_g_date_time (GDateTime* dt);
// ::GstDateTime* gst_date_time_new_from_g_date_time (::GDateTime* dt);
static GI_INLINE_DECL Gst::DateTime new_from_g_date_time (GLib::DateTime dt) noexcept;
static GI_INLINE_DECL Gst::DateTime new_from_g_date_time () noexcept;

// GstDateTime* gst_date_time_new_from_iso8601_string (const gchar* string);
// ::GstDateTime* gst_date_time_new_from_iso8601_string (const char* string);
static GI_INLINE_DECL Gst::DateTime new_from_iso8601_string (const std::string & string) noexcept;

// GstDateTime* gst_date_time_new_from_unix_epoch_local_time (gint64 secs);
// ::GstDateTime* gst_date_time_new_from_unix_epoch_local_time (gint64 secs);
static GI_INLINE_DECL Gst::DateTime new_from_unix_epoch_local_time (gint64 secs) noexcept;

// GstDateTime* gst_date_time_new_from_unix_epoch_local_time_usecs (gint64 usecs);
// ::GstDateTime* gst_date_time_new_from_unix_epoch_local_time_usecs (gint64 usecs);
static GI_INLINE_DECL Gst::DateTime new_from_unix_epoch_local_time_usecs (gint64 usecs) noexcept;

// GstDateTime* gst_date_time_new_from_unix_epoch_utc (gint64 secs);
// ::GstDateTime* gst_date_time_new_from_unix_epoch_utc (gint64 secs);
static GI_INLINE_DECL Gst::DateTime new_from_unix_epoch_utc (gint64 secs) noexcept;

// GstDateTime* gst_date_time_new_from_unix_epoch_utc_usecs (gint64 usecs);
// ::GstDateTime* gst_date_time_new_from_unix_epoch_utc_usecs (gint64 usecs);
static GI_INLINE_DECL Gst::DateTime new_from_unix_epoch_utc_usecs (gint64 usecs) noexcept;

// GstDateTime* gst_date_time_new_local_time (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
// ::GstDateTime* gst_date_time_new_local_time (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
static GI_INLINE_DECL Gst::DateTime new_local_time (gint year, gint month, gint day, gint hour, gint minute, gdouble seconds) noexcept;

// GstDateTime* gst_date_time_new_now_local_time ();
// ::GstDateTime* gst_date_time_new_now_local_time ();
static GI_INLINE_DECL Gst::DateTime new_now_local_time () noexcept;

// GstDateTime* gst_date_time_new_now_utc ();
// ::GstDateTime* gst_date_time_new_now_utc ();
static GI_INLINE_DECL Gst::DateTime new_now_utc () noexcept;

// GstDateTime* gst_date_time_new_y (gint year);
// ::GstDateTime* gst_date_time_new_y (gint year);
static GI_INLINE_DECL Gst::DateTime new_y (gint year) noexcept;

// GstDateTime* gst_date_time_new_ym (gint year, gint month);
// ::GstDateTime* gst_date_time_new_ym (gint year, gint month);
static GI_INLINE_DECL Gst::DateTime new_ym (gint year, gint month) noexcept;

// GstDateTime* gst_date_time_new_ymd (gint year, gint month, gint day);
// ::GstDateTime* gst_date_time_new_ymd (gint year, gint month, gint day);
static GI_INLINE_DECL Gst::DateTime new_ymd (gint year, gint month, gint day) noexcept;

// gint gst_date_time_get_day (const GstDateTime* datetime);
// gint gst_date_time_get_day (const ::GstDateTime* datetime);
GI_INLINE_DECL gint get_day () const noexcept;

// gint gst_date_time_get_hour (const GstDateTime* datetime);
// gint gst_date_time_get_hour (const ::GstDateTime* datetime);
GI_INLINE_DECL gint get_hour () const noexcept;

// gint gst_date_time_get_microsecond (const GstDateTime* datetime);
// gint gst_date_time_get_microsecond (const ::GstDateTime* datetime);
GI_INLINE_DECL gint get_microsecond () const noexcept;

// gint gst_date_time_get_minute (const GstDateTime* datetime);
// gint gst_date_time_get_minute (const ::GstDateTime* datetime);
GI_INLINE_DECL gint get_minute () const noexcept;

// gint gst_date_time_get_month (const GstDateTime* datetime);
// gint gst_date_time_get_month (const ::GstDateTime* datetime);
GI_INLINE_DECL gint get_month () const noexcept;

// gint gst_date_time_get_second (const GstDateTime* datetime);
// gint gst_date_time_get_second (const ::GstDateTime* datetime);
GI_INLINE_DECL gint get_second () const noexcept;

// gfloat gst_date_time_get_time_zone_offset (const GstDateTime* datetime);
// gfloat gst_date_time_get_time_zone_offset (const ::GstDateTime* datetime);
GI_INLINE_DECL gfloat get_time_zone_offset () const noexcept;

// gint gst_date_time_get_year (const GstDateTime* datetime);
// gint gst_date_time_get_year (const ::GstDateTime* datetime);
GI_INLINE_DECL gint get_year () const noexcept;

// gboolean gst_date_time_has_day (const GstDateTime* datetime);
// gboolean gst_date_time_has_day (const ::GstDateTime* datetime);
GI_INLINE_DECL bool has_day () const noexcept;

// gboolean gst_date_time_has_month (const GstDateTime* datetime);
// gboolean gst_date_time_has_month (const ::GstDateTime* datetime);
GI_INLINE_DECL bool has_month () const noexcept;

// gboolean gst_date_time_has_second (const GstDateTime* datetime);
// gboolean gst_date_time_has_second (const ::GstDateTime* datetime);
GI_INLINE_DECL bool has_second () const noexcept;

// gboolean gst_date_time_has_time (const GstDateTime* datetime);
// gboolean gst_date_time_has_time (const ::GstDateTime* datetime);
GI_INLINE_DECL bool has_time () const noexcept;

// gboolean gst_date_time_has_year (const GstDateTime* datetime);
// gboolean gst_date_time_has_year (const ::GstDateTime* datetime);
GI_INLINE_DECL bool has_year () const noexcept;

// GstDateTime* gst_date_time_ref (GstDateTime* datetime);
// ::GstDateTime* gst_date_time_ref (::GstDateTime* datetime);
// IGNORE; marked ignore

// GDateTime* gst_date_time_to_g_date_time (GstDateTime* datetime);
// ::GDateTime* gst_date_time_to_g_date_time (::GstDateTime* datetime);
GI_INLINE_DECL GLib::DateTime to_g_date_time () noexcept;

// gchar* gst_date_time_to_iso8601_string (GstDateTime* datetime);
// char* gst_date_time_to_iso8601_string (::GstDateTime* datetime);
GI_INLINE_DECL std::string to_iso8601_string () noexcept;

// void gst_date_time_unref (GstDateTime* datetime);
// void gst_date_time_unref (::GstDateTime* datetime);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/datetime_extra_def.hpp>)
#include <gst/datetime_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/datetime_extra.hpp>)
#include <gst/datetime_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class DateTime : public GI_GST_DATETIME_BASE
{ typedef GI_GST_DATETIME_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstDateTime>
{ typedef Gst::DateTime type; }; 

} // namespace repository

} // namespace gi

#endif
