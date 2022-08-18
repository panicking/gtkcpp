// AUTO-GENERATED

#ifndef _GI_GST_SEGMENT_HPP_
#define _GI_GST_SEGMENT_HPP_


namespace gi {

namespace repository {

namespace Gst {


class Segment;

namespace base {


#define GI_GST_SEGMENT_BASE base::SegmentBase
class SegmentBase : public gi::detail::GBoxedWrapper<SegmentBase, ::GstSegment>
{
typedef gi::detail::GBoxedWrapper<SegmentBase, ::GstSegment> super_type;
public:

SegmentBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_segment_get_type(); } 

// ::GstSegmentFlags Segment::flags (const ::GstSegment* obj);
// ::GstSegmentFlags Segment::flags (const ::GstSegment* obj);
GI_INLINE_DECL Gst::SegmentFlags flags_ () const noexcept;

//  Segment::flags (::GstSegment* obj, ::GstSegmentFlags _value);
// void Segment::flags (::GstSegment* obj, ::GstSegmentFlags _value);
GI_INLINE_DECL void flags_ (Gst::SegmentFlags _value) noexcept;

// gdouble Segment::rate (const ::GstSegment* obj);
// gdouble Segment::rate (const ::GstSegment* obj);
GI_INLINE_DECL gdouble rate_ () const noexcept;

//  Segment::rate (::GstSegment* obj, gdouble _value);
// void Segment::rate (::GstSegment* obj, gdouble _value);
GI_INLINE_DECL void rate_ (gdouble _value) noexcept;

// gdouble Segment::applied_rate (const ::GstSegment* obj);
// gdouble Segment::applied_rate (const ::GstSegment* obj);
GI_INLINE_DECL gdouble applied_rate_ () const noexcept;

//  Segment::applied_rate (::GstSegment* obj, gdouble _value);
// void Segment::applied_rate (::GstSegment* obj, gdouble _value);
GI_INLINE_DECL void applied_rate_ (gdouble _value) noexcept;

// ::GstFormat Segment::format (const ::GstSegment* obj);
// ::GstFormat Segment::format (const ::GstSegment* obj);
GI_INLINE_DECL Gst::Format format_ () const noexcept;

//  Segment::format (::GstSegment* obj, ::GstFormat _value);
// void Segment::format (::GstSegment* obj, ::GstFormat _value);
GI_INLINE_DECL void format_ (Gst::Format _value) noexcept;

// guint64 Segment::base (const ::GstSegment* obj);
// guint64 Segment::base (const ::GstSegment* obj);
GI_INLINE_DECL guint64 base_ () const noexcept;

//  Segment::base (::GstSegment* obj, guint64 _value);
// void Segment::base (::GstSegment* obj, guint64 _value);
GI_INLINE_DECL void base_ (guint64 _value) noexcept;

// guint64 Segment::offset (const ::GstSegment* obj);
// guint64 Segment::offset (const ::GstSegment* obj);
GI_INLINE_DECL guint64 offset_ () const noexcept;

//  Segment::offset (::GstSegment* obj, guint64 _value);
// void Segment::offset (::GstSegment* obj, guint64 _value);
GI_INLINE_DECL void offset_ (guint64 _value) noexcept;

// guint64 Segment::start (const ::GstSegment* obj);
// guint64 Segment::start (const ::GstSegment* obj);
GI_INLINE_DECL guint64 start_ () const noexcept;

//  Segment::start (::GstSegment* obj, guint64 _value);
// void Segment::start (::GstSegment* obj, guint64 _value);
GI_INLINE_DECL void start_ (guint64 _value) noexcept;

// guint64 Segment::stop (const ::GstSegment* obj);
// guint64 Segment::stop (const ::GstSegment* obj);
GI_INLINE_DECL guint64 stop_ () const noexcept;

//  Segment::stop (::GstSegment* obj, guint64 _value);
// void Segment::stop (::GstSegment* obj, guint64 _value);
GI_INLINE_DECL void stop_ (guint64 _value) noexcept;

// guint64 Segment::time (const ::GstSegment* obj);
// guint64 Segment::time (const ::GstSegment* obj);
GI_INLINE_DECL guint64 time_ () const noexcept;

//  Segment::time (::GstSegment* obj, guint64 _value);
// void Segment::time (::GstSegment* obj, guint64 _value);
GI_INLINE_DECL void time_ (guint64 _value) noexcept;

// guint64 Segment::position (const ::GstSegment* obj);
// guint64 Segment::position (const ::GstSegment* obj);
GI_INLINE_DECL guint64 position_ () const noexcept;

//  Segment::position (::GstSegment* obj, guint64 _value);
// void Segment::position (::GstSegment* obj, guint64 _value);
GI_INLINE_DECL void position_ (guint64 _value) noexcept;

// guint64 Segment::duration (const ::GstSegment* obj);
// guint64 Segment::duration (const ::GstSegment* obj);
GI_INLINE_DECL guint64 duration_ () const noexcept;

//  Segment::duration (::GstSegment* obj, guint64 _value);
// void Segment::duration (::GstSegment* obj, guint64 _value);
GI_INLINE_DECL void duration_ (guint64 _value) noexcept;

// GstSegment* gst_segment_new ();
// ::GstSegment* gst_segment_new ();
static GI_INLINE_DECL Gst::Segment new_ () noexcept;

// gboolean gst_segment_clip (const GstSegment* segment, GstFormat format, guint64 start, guint64 stop, guint64* clip_start, guint64* clip_stop);
// gboolean gst_segment_clip (const ::GstSegment* segment, ::GstFormat format, guint64 start, guint64 stop, guint64* clip_start, guint64* clip_stop);
GI_INLINE_DECL bool clip (Gst::Format format, guint64 start, guint64 stop, guint64 * clip_start = nullptr, guint64 * clip_stop = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<bool, guint64, guint64> clip (Gst::Format format, guint64 start, guint64 stop) const noexcept;

// GstSegment* gst_segment_copy (const GstSegment* segment);
// ::GstSegment* gst_segment_copy (const ::GstSegment* segment);
GI_INLINE_DECL Gst::Segment copy () const noexcept;

// void gst_segment_copy_into (const GstSegment* src, GstSegment* dest);
// void gst_segment_copy_into (const ::GstSegment* src, ::GstSegment* dest);
GI_INLINE_DECL void copy_into (Gst::Segment dest) const noexcept;

// gboolean gst_segment_do_seek (GstSegment* segment, gdouble rate, GstFormat format, GstSeekFlags flags, GstSeekType start_type, guint64 start, GstSeekType stop_type, guint64 stop, gboolean* update);
// gboolean gst_segment_do_seek (::GstSegment* segment, gdouble rate, ::GstFormat format, ::GstSeekFlags flags, ::GstSeekType start_type, guint64 start, ::GstSeekType stop_type, guint64 stop, gboolean* update);
GI_INLINE_DECL bool do_seek (gdouble rate, Gst::Format format, Gst::SeekFlags flags, Gst::SeekType start_type, guint64 start, Gst::SeekType stop_type, guint64 stop, bool * update = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> do_seek (gdouble rate, Gst::Format format, Gst::SeekFlags flags, Gst::SeekType start_type, guint64 start, Gst::SeekType stop_type, guint64 stop) noexcept;

// void gst_segment_free (GstSegment* segment);
// void gst_segment_free (::GstSegment* segment);
// IGNORE; marked ignore

// void gst_segment_init (GstSegment* segment, GstFormat format);
// void gst_segment_init (::GstSegment* segment, ::GstFormat format);
GI_INLINE_DECL void init (Gst::Format format) noexcept;

// gboolean gst_segment_is_equal (const GstSegment* s0, const GstSegment* s1);
// gboolean gst_segment_is_equal (const ::GstSegment* s0, const ::GstSegment* s1);
GI_INLINE_DECL bool is_equal (const Gst::Segment & s1) const noexcept;

// gboolean gst_segment_offset_running_time (GstSegment* segment, GstFormat format, gint64 offset);
// gboolean gst_segment_offset_running_time (::GstSegment* segment, ::GstFormat format, gint64 offset);
GI_INLINE_DECL bool offset_running_time (Gst::Format format, gint64 offset) noexcept;

// guint64 gst_segment_position_from_running_time (const GstSegment* segment, GstFormat format, guint64 running_time);
// guint64 gst_segment_position_from_running_time (const ::GstSegment* segment, ::GstFormat format, guint64 running_time);
GI_INLINE_DECL guint64 position_from_running_time (Gst::Format format, guint64 running_time) const noexcept;

// gint gst_segment_position_from_running_time_full (const GstSegment* segment, GstFormat format, guint64 running_time, guint64* position);
// gint gst_segment_position_from_running_time_full (const ::GstSegment* segment, ::GstFormat format, guint64 running_time, guint64* position);
GI_INLINE_DECL gint position_from_running_time_full (Gst::Format format, guint64 running_time, guint64 & position) const noexcept;
GI_INLINE_DECL std::tuple<gint, guint64> position_from_running_time_full (Gst::Format format, guint64 running_time) const noexcept;

// guint64 gst_segment_position_from_stream_time (const GstSegment* segment, GstFormat format, guint64 stream_time);
// guint64 gst_segment_position_from_stream_time (const ::GstSegment* segment, ::GstFormat format, guint64 stream_time);
GI_INLINE_DECL guint64 position_from_stream_time (Gst::Format format, guint64 stream_time) const noexcept;

// gint gst_segment_position_from_stream_time_full (const GstSegment* segment, GstFormat format, guint64 stream_time, guint64* position);
// gint gst_segment_position_from_stream_time_full (const ::GstSegment* segment, ::GstFormat format, guint64 stream_time, guint64* position);
GI_INLINE_DECL gint position_from_stream_time_full (Gst::Format format, guint64 stream_time, guint64 & position) const noexcept;
GI_INLINE_DECL std::tuple<gint, guint64> position_from_stream_time_full (Gst::Format format, guint64 stream_time) const noexcept;

// gboolean gst_segment_set_running_time (GstSegment* segment, GstFormat format, guint64 running_time);
// gboolean gst_segment_set_running_time (::GstSegment* segment, ::GstFormat format, guint64 running_time);
GI_INLINE_DECL bool set_running_time (Gst::Format format, guint64 running_time) noexcept;

// guint64 gst_segment_to_position (const GstSegment* segment, GstFormat format, guint64 running_time);
// guint64 gst_segment_to_position (const ::GstSegment* segment, ::GstFormat format, guint64 running_time);
// IGNORE; deprecated

// guint64 gst_segment_to_running_time (const GstSegment* segment, GstFormat format, guint64 position);
// guint64 gst_segment_to_running_time (const ::GstSegment* segment, ::GstFormat format, guint64 position);
GI_INLINE_DECL guint64 to_running_time (Gst::Format format, guint64 position) const noexcept;

// gint gst_segment_to_running_time_full (const GstSegment* segment, GstFormat format, guint64 position, guint64* running_time);
// gint gst_segment_to_running_time_full (const ::GstSegment* segment, ::GstFormat format, guint64 position, guint64* running_time);
GI_INLINE_DECL gint to_running_time_full (Gst::Format format, guint64 position, guint64 * running_time = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<gint, guint64> to_running_time_full (Gst::Format format, guint64 position) const noexcept;

// guint64 gst_segment_to_stream_time (const GstSegment* segment, GstFormat format, guint64 position);
// guint64 gst_segment_to_stream_time (const ::GstSegment* segment, ::GstFormat format, guint64 position);
GI_INLINE_DECL guint64 to_stream_time (Gst::Format format, guint64 position) const noexcept;

// gint gst_segment_to_stream_time_full (const GstSegment* segment, GstFormat format, guint64 position, guint64* stream_time);
// gint gst_segment_to_stream_time_full (const ::GstSegment* segment, ::GstFormat format, guint64 position, guint64* stream_time);
GI_INLINE_DECL gint to_stream_time_full (Gst::Format format, guint64 position, guint64 & stream_time) const noexcept;
GI_INLINE_DECL std::tuple<gint, guint64> to_stream_time_full (Gst::Format format, guint64 position) const noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/segment_extra_def.hpp>)
#include <gst/segment_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/segment_extra.hpp>)
#include <gst/segment_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Segment : public GI_GST_SEGMENT_BASE
{ typedef GI_GST_SEGMENT_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstSegment>
{ typedef Gst::Segment type; }; 

} // namespace repository

} // namespace gi

#endif
