// AUTO-GENERATED

#ifndef _GI_GST_SEGMENT_IMPL_HPP_
#define _GI_GST_SEGMENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstSegmentFlags _field_flags_get (const ::GstSegment* obj) { return (::GstSegmentFlags) obj->flags; }
// ::GstSegmentFlags Segment::flags (const ::GstSegment* obj);
// ::GstSegmentFlags Segment::flags (const ::GstSegment* obj);
Gst::SegmentFlags base::SegmentBase::flags_ () const noexcept
{
  typedef ::GstSegmentFlags (*call_wrap_t) (const ::GstSegment* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_flags_set (::GstSegment* obj, ::GstSegmentFlags _value) { obj->flags = (decltype(obj->flags)) _value; }
//  Segment::flags (::GstSegment* obj, ::GstSegmentFlags _value);
// void Segment::flags (::GstSegment* obj, ::GstSegmentFlags _value);
void base::SegmentBase::flags_ (Gst::SegmentFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* obj, ::GstSegmentFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstSegment*) (gobj_()), (::GstSegmentFlags) (_value_to_c));
}

static gdouble _field_rate_get (const ::GstSegment* obj) { return (gdouble) obj->rate; }
// gdouble Segment::rate (const ::GstSegment* obj);
// gdouble Segment::rate (const ::GstSegment* obj);
gdouble base::SegmentBase::rate_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GstSegment* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_rate_get;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return _temp_ret;
}

static void _field_rate_set (::GstSegment* obj, gdouble _value) { obj->rate = (decltype(obj->rate)) _value; }
//  Segment::rate (::GstSegment* obj, gdouble _value);
// void Segment::rate (::GstSegment* obj, gdouble _value);
void base::SegmentBase::rate_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_rate_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstSegment*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_applied_rate_get (const ::GstSegment* obj) { return (gdouble) obj->applied_rate; }
// gdouble Segment::applied_rate (const ::GstSegment* obj);
// gdouble Segment::applied_rate (const ::GstSegment* obj);
gdouble base::SegmentBase::applied_rate_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GstSegment* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_applied_rate_get;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return _temp_ret;
}

static void _field_applied_rate_set (::GstSegment* obj, gdouble _value) { obj->applied_rate = (decltype(obj->applied_rate)) _value; }
//  Segment::applied_rate (::GstSegment* obj, gdouble _value);
// void Segment::applied_rate (::GstSegment* obj, gdouble _value);
void base::SegmentBase::applied_rate_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_applied_rate_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstSegment*) (gobj_()), (gdouble) (_value_to_c));
}

static ::GstFormat _field_format_get (const ::GstSegment* obj) { return (::GstFormat) obj->format; }
// ::GstFormat Segment::format (const ::GstSegment* obj);
// ::GstFormat Segment::format (const ::GstSegment* obj);
Gst::Format base::SegmentBase::format_ () const noexcept
{
  typedef ::GstFormat (*call_wrap_t) (const ::GstSegment* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_format_get;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_format_set (::GstSegment* obj, ::GstFormat _value) { obj->format = (decltype(obj->format)) _value; }
//  Segment::format (::GstSegment* obj, ::GstFormat _value);
// void Segment::format (::GstSegment* obj, ::GstFormat _value);
void base::SegmentBase::format_ (Gst::Format _value) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* obj, ::GstFormat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_format_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstSegment*) (gobj_()), (::GstFormat) (_value_to_c));
}

static guint64 _field_base_get (const ::GstSegment* obj) { return (guint64) obj->base; }
// guint64 Segment::base (const ::GstSegment* obj);
// guint64 Segment::base (const ::GstSegment* obj);
guint64 base::SegmentBase::base_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstSegment* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_base_get;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return _temp_ret;
}

static void _field_base_set (::GstSegment* obj, guint64 _value) { obj->base = (decltype(obj->base)) _value; }
//  Segment::base (::GstSegment* obj, guint64 _value);
// void Segment::base (::GstSegment* obj, guint64 _value);
void base::SegmentBase::base_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_base_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstSegment*) (gobj_()), (guint64) (_value_to_c));
}

static guint64 _field_offset_get (const ::GstSegment* obj) { return (guint64) obj->offset; }
// guint64 Segment::offset (const ::GstSegment* obj);
// guint64 Segment::offset (const ::GstSegment* obj);
guint64 base::SegmentBase::offset_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstSegment* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_get;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return _temp_ret;
}

static void _field_offset_set (::GstSegment* obj, guint64 _value) { obj->offset = (decltype(obj->offset)) _value; }
//  Segment::offset (::GstSegment* obj, guint64 _value);
// void Segment::offset (::GstSegment* obj, guint64 _value);
void base::SegmentBase::offset_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstSegment*) (gobj_()), (guint64) (_value_to_c));
}

static guint64 _field_start_get (const ::GstSegment* obj) { return (guint64) obj->start; }
// guint64 Segment::start (const ::GstSegment* obj);
// guint64 Segment::start (const ::GstSegment* obj);
guint64 base::SegmentBase::start_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstSegment* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_get;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return _temp_ret;
}

static void _field_start_set (::GstSegment* obj, guint64 _value) { obj->start = (decltype(obj->start)) _value; }
//  Segment::start (::GstSegment* obj, guint64 _value);
// void Segment::start (::GstSegment* obj, guint64 _value);
void base::SegmentBase::start_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstSegment*) (gobj_()), (guint64) (_value_to_c));
}

static guint64 _field_stop_get (const ::GstSegment* obj) { return (guint64) obj->stop; }
// guint64 Segment::stop (const ::GstSegment* obj);
// guint64 Segment::stop (const ::GstSegment* obj);
guint64 base::SegmentBase::stop_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstSegment* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_stop_get;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return _temp_ret;
}

static void _field_stop_set (::GstSegment* obj, guint64 _value) { obj->stop = (decltype(obj->stop)) _value; }
//  Segment::stop (::GstSegment* obj, guint64 _value);
// void Segment::stop (::GstSegment* obj, guint64 _value);
void base::SegmentBase::stop_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_stop_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstSegment*) (gobj_()), (guint64) (_value_to_c));
}

static guint64 _field_time_get (const ::GstSegment* obj) { return (guint64) obj->time; }
// guint64 Segment::time (const ::GstSegment* obj);
// guint64 Segment::time (const ::GstSegment* obj);
guint64 base::SegmentBase::time_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstSegment* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GstSegment* obj, guint64 _value) { obj->time = (decltype(obj->time)) _value; }
//  Segment::time (::GstSegment* obj, guint64 _value);
// void Segment::time (::GstSegment* obj, guint64 _value);
void base::SegmentBase::time_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstSegment*) (gobj_()), (guint64) (_value_to_c));
}

static guint64 _field_position_get (const ::GstSegment* obj) { return (guint64) obj->position; }
// guint64 Segment::position (const ::GstSegment* obj);
// guint64 Segment::position (const ::GstSegment* obj);
guint64 base::SegmentBase::position_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstSegment* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_position_get;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return _temp_ret;
}

static void _field_position_set (::GstSegment* obj, guint64 _value) { obj->position = (decltype(obj->position)) _value; }
//  Segment::position (::GstSegment* obj, guint64 _value);
// void Segment::position (::GstSegment* obj, guint64 _value);
void base::SegmentBase::position_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_position_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstSegment*) (gobj_()), (guint64) (_value_to_c));
}

static guint64 _field_duration_get (const ::GstSegment* obj) { return (guint64) obj->duration; }
// guint64 Segment::duration (const ::GstSegment* obj);
// guint64 Segment::duration (const ::GstSegment* obj);
guint64 base::SegmentBase::duration_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstSegment* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_duration_get;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return _temp_ret;
}

static void _field_duration_set (::GstSegment* obj, guint64 _value) { obj->duration = (decltype(obj->duration)) _value; }
//  Segment::duration (::GstSegment* obj, guint64 _value);
// void Segment::duration (::GstSegment* obj, guint64 _value);
void base::SegmentBase::duration_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_duration_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstSegment*) (gobj_()), (guint64) (_value_to_c));
}

// GstSegment* gst_segment_new ();
// ::GstSegment* gst_segment_new ();
Gst::Segment base::SegmentBase::new_ () noexcept
{
  typedef ::GstSegment* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_segment_clip (const GstSegment* segment, GstFormat format, guint64 start, guint64 stop, guint64* clip_start, guint64* clip_stop);
// gboolean gst_segment_clip (const ::GstSegment* segment, ::GstFormat format, guint64 start, guint64 stop, guint64* clip_start, guint64* clip_stop);
bool base::SegmentBase::clip (Gst::Format format, guint64 start, guint64 stop, guint64 * clip_start, guint64 * clip_stop) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 start, guint64 stop, guint64* clip_start, guint64* clip_stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_clip;
  guint64 clip_stop_o {};
  guint64 clip_start_o {};
  auto stop_to_c = stop;
  auto start_to_c = start;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (start_to_c), (guint64) (stop_to_c), (guint64*) (clip_start ? &clip_start_o : nullptr), (guint64*) (clip_stop ? &clip_stop_o : nullptr));
  if (clip_stop) *clip_stop = clip_stop_o;
  if (clip_start) *clip_start = clip_start_o;
  return _temp_ret;
}
std::tuple<bool, guint64, guint64> base::SegmentBase::clip (Gst::Format format, guint64 start, guint64 stop) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 start, guint64 stop, guint64* clip_start, guint64* clip_stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_clip;
  guint64 clip_stop_o {};
  guint64 clip_start_o {};
  auto stop_to_c = stop;
  auto start_to_c = start;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (start_to_c), (guint64) (stop_to_c), (guint64*) (&clip_start_o), (guint64*) (&clip_stop_o));
  return std::make_tuple (_temp_ret, clip_start_o, clip_stop_o);
}

// GstSegment* gst_segment_copy (const GstSegment* segment);
// ::GstSegment* gst_segment_copy (const ::GstSegment* segment);
Gst::Segment base::SegmentBase::copy () const noexcept
{
  typedef ::GstSegment* (*call_wrap_t) (const ::GstSegment* segment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_copy;
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_segment_copy_into (const GstSegment* src, GstSegment* dest);
// void gst_segment_copy_into (const ::GstSegment* src, ::GstSegment* dest);
void base::SegmentBase::copy_into (Gst::Segment dest) const noexcept
{
  typedef void (*call_wrap_t) (const ::GstSegment* src, ::GstSegment* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_copy_into;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstSegment*) (dest_to_c));
}

// gboolean gst_segment_do_seek (GstSegment* segment, gdouble rate, GstFormat format, GstSeekFlags flags, GstSeekType start_type, guint64 start, GstSeekType stop_type, guint64 stop, gboolean* update);
// gboolean gst_segment_do_seek (::GstSegment* segment, gdouble rate, ::GstFormat format, ::GstSeekFlags flags, ::GstSeekType start_type, guint64 start, ::GstSeekType stop_type, guint64 stop, gboolean* update);
bool base::SegmentBase::do_seek (gdouble rate, Gst::Format format, Gst::SeekFlags flags, Gst::SeekType start_type, guint64 start, Gst::SeekType stop_type, guint64 stop, bool * update) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstSegment* segment, gdouble rate, ::GstFormat format, ::GstSeekFlags flags, ::GstSeekType start_type, guint64 start, ::GstSeekType stop_type, guint64 stop, gboolean* update);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_do_seek;
  gboolean update_o {};
  auto stop_to_c = stop;
  auto stop_type_to_c = gi::unwrap (stop_type);
  auto start_to_c = start;
  auto start_type_to_c = gi::unwrap (start_type);
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto rate_to_c = rate;
  auto _temp_ret = call_wrap_v ((::GstSegment*) (gobj_()), (gdouble) (rate_to_c), (::GstFormat) (format_to_c), (::GstSeekFlags) (flags_to_c), (::GstSeekType) (start_type_to_c), (guint64) (start_to_c), (::GstSeekType) (stop_type_to_c), (guint64) (stop_to_c), (gboolean*) (update ? &update_o : nullptr));
  if (update) *update = update_o;
  return _temp_ret;
}
std::tuple<bool, bool> base::SegmentBase::do_seek (gdouble rate, Gst::Format format, Gst::SeekFlags flags, Gst::SeekType start_type, guint64 start, Gst::SeekType stop_type, guint64 stop) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstSegment* segment, gdouble rate, ::GstFormat format, ::GstSeekFlags flags, ::GstSeekType start_type, guint64 start, ::GstSeekType stop_type, guint64 stop, gboolean* update);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_do_seek;
  gboolean update_o {};
  auto stop_to_c = stop;
  auto stop_type_to_c = gi::unwrap (stop_type);
  auto start_to_c = start;
  auto start_type_to_c = gi::unwrap (start_type);
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto rate_to_c = rate;
  auto _temp_ret = call_wrap_v ((::GstSegment*) (gobj_()), (gdouble) (rate_to_c), (::GstFormat) (format_to_c), (::GstSeekFlags) (flags_to_c), (::GstSeekType) (start_type_to_c), (guint64) (start_to_c), (::GstSeekType) (stop_type_to_c), (guint64) (stop_to_c), (gboolean*) (&update_o));
  return std::make_tuple (_temp_ret, update_o);
}

// void gst_segment_free (GstSegment* segment);
// void gst_segment_free (::GstSegment* segment);
// IGNORE; marked ignore

// void gst_segment_init (GstSegment* segment, GstFormat format);
// void gst_segment_init (::GstSegment* segment, ::GstFormat format);
void base::SegmentBase::init (Gst::Format format) noexcept
{
  typedef void (*call_wrap_t) (::GstSegment* segment, ::GstFormat format);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_init;
  auto format_to_c = gi::unwrap (format);
  call_wrap_v ((::GstSegment*) (gobj_()), (::GstFormat) (format_to_c));
}

// gboolean gst_segment_is_equal (const GstSegment* s0, const GstSegment* s1);
// gboolean gst_segment_is_equal (const ::GstSegment* s0, const ::GstSegment* s1);
bool base::SegmentBase::is_equal (const Gst::Segment & s1) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstSegment* s0, const ::GstSegment* s1);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_is_equal;
  auto s1_to_c = gi::unwrap (s1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (const ::GstSegment*) (s1_to_c));
  return _temp_ret;
}

// gboolean gst_segment_offset_running_time (GstSegment* segment, GstFormat format, gint64 offset);
// gboolean gst_segment_offset_running_time (::GstSegment* segment, ::GstFormat format, gint64 offset);
bool base::SegmentBase::offset_running_time (Gst::Format format, gint64 offset) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstSegment* segment, ::GstFormat format, gint64 offset);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_offset_running_time;
  auto offset_to_c = offset;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (gint64) (offset_to_c));
  return _temp_ret;
}

// guint64 gst_segment_position_from_running_time (const GstSegment* segment, GstFormat format, guint64 running_time);
// guint64 gst_segment_position_from_running_time (const ::GstSegment* segment, ::GstFormat format, guint64 running_time);
guint64 base::SegmentBase::position_from_running_time (Gst::Format format, guint64 running_time) const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_position_from_running_time;
  auto running_time_to_c = running_time;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (running_time_to_c));
  return _temp_ret;
}

// gint gst_segment_position_from_running_time_full (const GstSegment* segment, GstFormat format, guint64 running_time, guint64* position);
// gint gst_segment_position_from_running_time_full (const ::GstSegment* segment, ::GstFormat format, guint64 running_time, guint64* position);
gint base::SegmentBase::position_from_running_time_full (Gst::Format format, guint64 running_time, guint64 & position) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 running_time, guint64* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_position_from_running_time_full;
  guint64 position_o {};
  auto running_time_to_c = running_time;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (running_time_to_c), (guint64*) (&position_o));
  position = position_o;
  return _temp_ret;
}
std::tuple<gint, guint64> base::SegmentBase::position_from_running_time_full (Gst::Format format, guint64 running_time) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 running_time, guint64* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_position_from_running_time_full;
  guint64 position_o {};
  auto running_time_to_c = running_time;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (running_time_to_c), (guint64*) (&position_o));
  return std::make_tuple (_temp_ret, position_o);
}

// guint64 gst_segment_position_from_stream_time (const GstSegment* segment, GstFormat format, guint64 stream_time);
// guint64 gst_segment_position_from_stream_time (const ::GstSegment* segment, ::GstFormat format, guint64 stream_time);
guint64 base::SegmentBase::position_from_stream_time (Gst::Format format, guint64 stream_time) const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 stream_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_position_from_stream_time;
  auto stream_time_to_c = stream_time;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (stream_time_to_c));
  return _temp_ret;
}

// gint gst_segment_position_from_stream_time_full (const GstSegment* segment, GstFormat format, guint64 stream_time, guint64* position);
// gint gst_segment_position_from_stream_time_full (const ::GstSegment* segment, ::GstFormat format, guint64 stream_time, guint64* position);
gint base::SegmentBase::position_from_stream_time_full (Gst::Format format, guint64 stream_time, guint64 & position) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 stream_time, guint64* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_position_from_stream_time_full;
  guint64 position_o {};
  auto stream_time_to_c = stream_time;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (stream_time_to_c), (guint64*) (&position_o));
  position = position_o;
  return _temp_ret;
}
std::tuple<gint, guint64> base::SegmentBase::position_from_stream_time_full (Gst::Format format, guint64 stream_time) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 stream_time, guint64* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_position_from_stream_time_full;
  guint64 position_o {};
  auto stream_time_to_c = stream_time;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (stream_time_to_c), (guint64*) (&position_o));
  return std::make_tuple (_temp_ret, position_o);
}

// gboolean gst_segment_set_running_time (GstSegment* segment, GstFormat format, guint64 running_time);
// gboolean gst_segment_set_running_time (::GstSegment* segment, ::GstFormat format, guint64 running_time);
bool base::SegmentBase::set_running_time (Gst::Format format, guint64 running_time) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstSegment* segment, ::GstFormat format, guint64 running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_set_running_time;
  auto running_time_to_c = running_time;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (running_time_to_c));
  return _temp_ret;
}

// guint64 gst_segment_to_position (const GstSegment* segment, GstFormat format, guint64 running_time);
// guint64 gst_segment_to_position (const ::GstSegment* segment, ::GstFormat format, guint64 running_time);
// IGNORE; deprecated

// guint64 gst_segment_to_running_time (const GstSegment* segment, GstFormat format, guint64 position);
// guint64 gst_segment_to_running_time (const ::GstSegment* segment, ::GstFormat format, guint64 position);
guint64 base::SegmentBase::to_running_time (Gst::Format format, guint64 position) const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_to_running_time;
  auto position_to_c = position;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (position_to_c));
  return _temp_ret;
}

// gint gst_segment_to_running_time_full (const GstSegment* segment, GstFormat format, guint64 position, guint64* running_time);
// gint gst_segment_to_running_time_full (const ::GstSegment* segment, ::GstFormat format, guint64 position, guint64* running_time);
gint base::SegmentBase::to_running_time_full (Gst::Format format, guint64 position, guint64 * running_time) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 position, guint64* running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_to_running_time_full;
  guint64 running_time_o {};
  auto position_to_c = position;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (position_to_c), (guint64*) (running_time ? &running_time_o : nullptr));
  if (running_time) *running_time = running_time_o;
  return _temp_ret;
}
std::tuple<gint, guint64> base::SegmentBase::to_running_time_full (Gst::Format format, guint64 position) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 position, guint64* running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_to_running_time_full;
  guint64 running_time_o {};
  auto position_to_c = position;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (position_to_c), (guint64*) (&running_time_o));
  return std::make_tuple (_temp_ret, running_time_o);
}

// guint64 gst_segment_to_stream_time (const GstSegment* segment, GstFormat format, guint64 position);
// guint64 gst_segment_to_stream_time (const ::GstSegment* segment, ::GstFormat format, guint64 position);
guint64 base::SegmentBase::to_stream_time (Gst::Format format, guint64 position) const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_to_stream_time;
  auto position_to_c = position;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (position_to_c));
  return _temp_ret;
}

// gint gst_segment_to_stream_time_full (const GstSegment* segment, GstFormat format, guint64 position, guint64* stream_time);
// gint gst_segment_to_stream_time_full (const ::GstSegment* segment, ::GstFormat format, guint64 position, guint64* stream_time);
gint base::SegmentBase::to_stream_time_full (Gst::Format format, guint64 position, guint64 & stream_time) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 position, guint64* stream_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_to_stream_time_full;
  guint64 stream_time_o {};
  auto position_to_c = position;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (position_to_c), (guint64*) (&stream_time_o));
  stream_time = stream_time_o;
  return _temp_ret;
}
std::tuple<gint, guint64> base::SegmentBase::to_stream_time_full (Gst::Format format, guint64 position) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstSegment* segment, ::GstFormat format, guint64 position, guint64* stream_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_segment_to_stream_time_full;
  guint64 stream_time_o {};
  auto position_to_c = position;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (position_to_c), (guint64*) (&stream_time_o));
  return std::make_tuple (_temp_ret, stream_time_o);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/segment_extra_def_impl.hpp>)
#include <gst/segment_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/segment_extra_impl.hpp>)
#include <gst/segment_extra_impl.hpp>
#endif
#endif

#endif
