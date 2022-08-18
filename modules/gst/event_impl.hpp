// AUTO-GENERATED

#ifndef _GI_GST_EVENT_IMPL_HPP_
#define _GI_GST_EVENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstEventType _field_type_get (const ::GstEvent* obj) { return (::GstEventType) obj->type; }
// ::GstEventType Event::type (const ::GstEvent* obj);
// ::GstEventType Event::type (const ::GstEvent* obj);
Gst::EventType base::EventBase::type_ () const noexcept
{
  typedef ::GstEventType (*call_wrap_t) (const ::GstEvent* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GstEvent*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GstEvent* obj, ::GstEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  Event::type (::GstEvent* obj, ::GstEventType _value);
// void Event::type (::GstEvent* obj, ::GstEventType _value);
void base::EventBase::type_ (Gst::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* obj, ::GstEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstEventType) (_value_to_c));
}

static guint64 _field_timestamp_get (const ::GstEvent* obj) { return (guint64) obj->timestamp; }
// guint64 Event::timestamp (const ::GstEvent* obj);
// guint64 Event::timestamp (const ::GstEvent* obj);
guint64 base::EventBase::timestamp_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstEvent* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_timestamp_get;
  auto _temp_ret = call_wrap_v ((const ::GstEvent*) (gobj_()));
  return _temp_ret;
}

static void _field_timestamp_set (::GstEvent* obj, guint64 _value) { obj->timestamp = (decltype(obj->timestamp)) _value; }
//  Event::timestamp (::GstEvent* obj, guint64 _value);
// void Event::timestamp (::GstEvent* obj, guint64 _value);
void base::EventBase::timestamp_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_timestamp_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstEvent*) (gobj_()), (guint64) (_value_to_c));
}

static guint32 _field_seqnum_get (const ::GstEvent* obj) { return (guint32) obj->seqnum; }
// guint32 Event::seqnum (const ::GstEvent* obj);
// guint32 Event::seqnum (const ::GstEvent* obj);
guint32 base::EventBase::seqnum_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GstEvent* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_seqnum_get;
  auto _temp_ret = call_wrap_v ((const ::GstEvent*) (gobj_()));
  return _temp_ret;
}

static void _field_seqnum_set (::GstEvent* obj, guint32 _value) { obj->seqnum = (decltype(obj->seqnum)) _value; }
//  Event::seqnum (::GstEvent* obj, guint32 _value);
// void Event::seqnum (::GstEvent* obj, guint32 _value);
void base::EventBase::seqnum_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_seqnum_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstEvent*) (gobj_()), (guint32) (_value_to_c));
}

// GstEvent* gst_event_new_buffer_size (GstFormat format, gint64 minsize, gint64 maxsize, gboolean async);
// ::GstEvent* gst_event_new_buffer_size (::GstFormat format, gint64 minsize, gint64 maxsize, gboolean async);
Gst::Event base::EventBase::new_buffer_size (Gst::Format format, gint64 minsize, gint64 maxsize, gboolean async) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstFormat format, gint64 minsize, gint64 maxsize, gboolean async);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_buffer_size;
  auto async_to_c = async;
  auto maxsize_to_c = maxsize;
  auto minsize_to_c = minsize;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (format_to_c), (gint64) (minsize_to_c), (gint64) (maxsize_to_c), (gboolean) (async_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_caps (GstCaps* caps);
// ::GstEvent* gst_event_new_caps (::GstCaps* caps);
Gst::Event base::EventBase::new_caps (Gst::Caps caps) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCaps*) (caps_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_custom (GstEventType type, GstStructure* structure);
// ::GstEvent* gst_event_new_custom (::GstEventType type, ::GstStructure* structure);
Gst::Event base::EventBase::new_custom (Gst::EventType type, Gst::Structure structure) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstEventType type, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_custom;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstEventType) (type_to_c), (::GstStructure*) (structure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_eos ();
// ::GstEvent* gst_event_new_eos ();
Gst::Event base::EventBase::new_eos () noexcept
{
  typedef ::GstEvent* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_eos;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_flush_start ();
// ::GstEvent* gst_event_new_flush_start ();
Gst::Event base::EventBase::new_flush_start () noexcept
{
  typedef ::GstEvent* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_flush_start;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_flush_stop (gboolean reset_time);
// ::GstEvent* gst_event_new_flush_stop (gboolean reset_time);
Gst::Event base::EventBase::new_flush_stop (gboolean reset_time) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (gboolean reset_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_flush_stop;
  auto reset_time_to_c = reset_time;
  auto _temp_ret = call_wrap_v ((gboolean) (reset_time_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_gap (GstClockTime timestamp, GstClockTime duration);
// ::GstEvent* gst_event_new_gap (::GstClockTime timestamp, ::GstClockTime duration);
Gst::Event base::EventBase::new_gap (::GstClockTime timestamp, ::GstClockTime duration) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstClockTime timestamp, ::GstClockTime duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_gap;
  auto duration_to_c = duration;
  auto timestamp_to_c = timestamp;
  auto _temp_ret = call_wrap_v ((::GstClockTime) (timestamp_to_c), (::GstClockTime) (duration_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_instant_rate_change (gdouble rate_multiplier, GstSegmentFlags new_flags);
// ::GstEvent* gst_event_new_instant_rate_change (gdouble rate_multiplier, ::GstSegmentFlags new_flags);
Gst::Event base::EventBase::new_instant_rate_change (gdouble rate_multiplier, Gst::SegmentFlags new_flags) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (gdouble rate_multiplier, ::GstSegmentFlags new_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_instant_rate_change;
  auto new_flags_to_c = gi::unwrap (new_flags);
  auto rate_multiplier_to_c = rate_multiplier;
  auto _temp_ret = call_wrap_v ((gdouble) (rate_multiplier_to_c), (::GstSegmentFlags) (new_flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_instant_rate_sync_time (gdouble rate_multiplier, GstClockTime running_time, GstClockTime upstream_running_time);
// ::GstEvent* gst_event_new_instant_rate_sync_time (gdouble rate_multiplier, ::GstClockTime running_time, ::GstClockTime upstream_running_time);
Gst::Event base::EventBase::new_instant_rate_sync_time (gdouble rate_multiplier, ::GstClockTime running_time, ::GstClockTime upstream_running_time) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (gdouble rate_multiplier, ::GstClockTime running_time, ::GstClockTime upstream_running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_instant_rate_sync_time;
  auto upstream_running_time_to_c = upstream_running_time;
  auto running_time_to_c = running_time;
  auto rate_multiplier_to_c = rate_multiplier;
  auto _temp_ret = call_wrap_v ((gdouble) (rate_multiplier_to_c), (::GstClockTime) (running_time_to_c), (::GstClockTime) (upstream_running_time_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_latency (GstClockTime latency);
// ::GstEvent* gst_event_new_latency (::GstClockTime latency);
Gst::Event base::EventBase::new_latency (::GstClockTime latency) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstClockTime latency);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_latency;
  auto latency_to_c = latency;
  auto _temp_ret = call_wrap_v ((::GstClockTime) (latency_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_navigation (GstStructure* structure);
// ::GstEvent* gst_event_new_navigation (::GstStructure* structure);
Gst::Event base::EventBase::new_navigation (Gst::Structure structure) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_navigation;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (structure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_protection (const gchar* system_id, GstBuffer* data, const gchar* origin);
// ::GstEvent* gst_event_new_protection (const char* system_id, ::GstBuffer* data, const char* origin);
Gst::Event base::EventBase::new_protection (const std::string & system_id, Gst::Buffer data, const std::string & origin) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (const char* system_id, ::GstBuffer* data, const char* origin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_protection;
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none, gi::direction_in);
  auto data_to_c = gi::unwrap (data, gi::transfer_none, gi::direction_in);
  auto system_id_to_c = gi::unwrap (system_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (system_id_to_c), (::GstBuffer*) (data_to_c), (const char*) (origin_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_qos (GstQOSType type, gdouble proportion, GstClockTimeDiff diff, GstClockTime timestamp);
// ::GstEvent* gst_event_new_qos (::GstQOSType type, gdouble proportion, ::GstClockTimeDiff diff, ::GstClockTime timestamp);
Gst::Event base::EventBase::new_qos (Gst::QOSType type, gdouble proportion, ::GstClockTimeDiff diff, ::GstClockTime timestamp) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstQOSType type, gdouble proportion, ::GstClockTimeDiff diff, ::GstClockTime timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_qos;
  auto timestamp_to_c = timestamp;
  auto diff_to_c = diff;
  auto proportion_to_c = proportion;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstQOSType) (type_to_c), (gdouble) (proportion_to_c), (::GstClockTimeDiff) (diff_to_c), (::GstClockTime) (timestamp_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_reconfigure ();
// ::GstEvent* gst_event_new_reconfigure ();
Gst::Event base::EventBase::new_reconfigure () noexcept
{
  typedef ::GstEvent* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_reconfigure;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_seek (gdouble rate, GstFormat format, GstSeekFlags flags, GstSeekType start_type, gint64 start, GstSeekType stop_type, gint64 stop);
// ::GstEvent* gst_event_new_seek (gdouble rate, ::GstFormat format, ::GstSeekFlags flags, ::GstSeekType start_type, gint64 start, ::GstSeekType stop_type, gint64 stop);
Gst::Event base::EventBase::new_seek (gdouble rate, Gst::Format format, Gst::SeekFlags flags, Gst::SeekType start_type, gint64 start, Gst::SeekType stop_type, gint64 stop) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (gdouble rate, ::GstFormat format, ::GstSeekFlags flags, ::GstSeekType start_type, gint64 start, ::GstSeekType stop_type, gint64 stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_seek;
  auto stop_to_c = stop;
  auto stop_type_to_c = gi::unwrap (stop_type);
  auto start_to_c = start;
  auto start_type_to_c = gi::unwrap (start_type);
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto rate_to_c = rate;
  auto _temp_ret = call_wrap_v ((gdouble) (rate_to_c), (::GstFormat) (format_to_c), (::GstSeekFlags) (flags_to_c), (::GstSeekType) (start_type_to_c), (gint64) (start_to_c), (::GstSeekType) (stop_type_to_c), (gint64) (stop_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_segment (const GstSegment* segment);
// ::GstEvent* gst_event_new_segment (const ::GstSegment* segment);
Gst::Event base::EventBase::new_segment (const Gst::Segment & segment) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (const ::GstSegment* segment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_segment;
  auto segment_to_c = gi::unwrap (segment, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstSegment*) (segment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_segment_done (GstFormat format, gint64 position);
// ::GstEvent* gst_event_new_segment_done (::GstFormat format, gint64 position);
Gst::Event base::EventBase::new_segment_done (Gst::Format format, gint64 position) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstFormat format, gint64 position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_segment_done;
  auto position_to_c = position;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (format_to_c), (gint64) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_select_streams (GList* streams);
// ::GstEvent* gst_event_new_select_streams (::GList* streams);
Gst::Event base::EventBase::new_select_streams (const std::vector<std::string> & streams) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GList* streams);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_select_streams;
  auto streams_i = detail::make_list_unwrap_range<::GList> (streams);
  auto streams_w = unwrap (streams_i, gi::transfer_none, direction_in);
  auto streams_to_c = streams_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GList*) (streams_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_sink_message (const gchar* name, GstMessage* msg);
// ::GstEvent* gst_event_new_sink_message (const char* name, ::GstMessage* msg);
Gst::Event base::EventBase::new_sink_message (const std::string & name, Gst::Message msg) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (const char* name, ::GstMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_sink_message;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GstMessage*) (msg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_step (GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate);
// ::GstEvent* gst_event_new_step (::GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate);
Gst::Event base::EventBase::new_step (Gst::Format format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_step;
  auto intermediate_to_c = intermediate;
  auto flush_to_c = flush;
  auto rate_to_c = rate;
  auto amount_to_c = amount;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstFormat) (format_to_c), (guint64) (amount_to_c), (gdouble) (rate_to_c), (gboolean) (flush_to_c), (gboolean) (intermediate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_stream_collection (GstStreamCollection* collection);
// ::GstEvent* gst_event_new_stream_collection (::GstStreamCollection* collection);
Gst::Event base::EventBase::new_stream_collection (Gst::StreamCollection collection) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstStreamCollection* collection);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_stream_collection;
  auto collection_to_c = gi::unwrap (collection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStreamCollection*) (collection_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_stream_group_done (guint group_id);
// ::GstEvent* gst_event_new_stream_group_done (guint group_id);
Gst::Event base::EventBase::new_stream_group_done (guint group_id) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (guint group_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_stream_group_done;
  auto group_id_to_c = group_id;
  auto _temp_ret = call_wrap_v ((guint) (group_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_stream_start (const gchar* stream_id);
// ::GstEvent* gst_event_new_stream_start (const char* stream_id);
Gst::Event base::EventBase::new_stream_start (const std::string & stream_id) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (const char* stream_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_stream_start;
  auto stream_id_to_c = gi::unwrap (stream_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (stream_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_tag (GstTagList* taglist);
// ::GstEvent* gst_event_new_tag (::GstTagList* taglist);
Gst::Event base::EventBase::new_tag (Gst::TagList taglist) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstTagList* taglist);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_tag;
  auto taglist_to_c = gi::unwrap (taglist, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstTagList*) (taglist_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_toc (GstToc* toc, gboolean updated);
// ::GstEvent* gst_event_new_toc (::GstToc* toc, gboolean updated);
Gst::Event base::EventBase::new_toc (Gst::Toc toc, gboolean updated) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstToc* toc, gboolean updated);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_toc;
  auto updated_to_c = updated;
  auto toc_to_c = gi::unwrap (toc, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstToc*) (toc_to_c), (gboolean) (updated_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_event_new_toc_select (const gchar* uid);
// ::GstEvent* gst_event_new_toc_select (const char* uid);
Gst::Event base::EventBase::new_toc_select (const std::string & uid) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (const char* uid);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_new_toc_select;
  auto uid_to_c = gi::unwrap (uid, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_event_copy_segment (GstEvent* event, GstSegment* segment);
// void gst_event_copy_segment (::GstEvent* event, ::GstSegment* segment);
void base::EventBase::copy_segment (Gst::Segment segment) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstSegment* segment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_copy_segment;
  auto segment_to_c = gi::unwrap (segment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstSegment*) (segment_to_c));
}

// gint64 gst_event_get_running_time_offset (GstEvent* event);
// gint64 gst_event_get_running_time_offset (::GstEvent* event);
gint64 base::EventBase::get_running_time_offset () noexcept
{
  typedef gint64 (*call_wrap_t) (::GstEvent* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_get_running_time_offset;
  auto _temp_ret = call_wrap_v ((::GstEvent*) (gobj_()));
  return _temp_ret;
}

// guint32 gst_event_get_seqnum (GstEvent* event);
// guint32 gst_event_get_seqnum (::GstEvent* event);
guint32 base::EventBase::get_seqnum () noexcept
{
  typedef guint32 (*call_wrap_t) (::GstEvent* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_get_seqnum;
  auto _temp_ret = call_wrap_v ((::GstEvent*) (gobj_()));
  return _temp_ret;
}

// const GstStructure* gst_event_get_structure (GstEvent* event);
// const ::GstStructure* gst_event_get_structure (::GstEvent* event);
Gst::Structure base::EventBase::get_structure () noexcept
{
  typedef const ::GstStructure* (*call_wrap_t) (::GstEvent* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_get_structure;
  auto _temp_ret = call_wrap_v ((::GstEvent*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_event_has_name (GstEvent* event, const gchar* name);
// gboolean gst_event_has_name (::GstEvent* event, const char* name);
bool base::EventBase::has_name (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstEvent* event, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_has_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstEvent*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean gst_event_has_name_id (GstEvent* event, GQuark name);
// gboolean gst_event_has_name_id (::GstEvent* event, ::GQuark name);
bool base::EventBase::has_name_id (::GQuark name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstEvent* event, ::GQuark name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_has_name_id;
  auto name_to_c = name;
  auto _temp_ret = call_wrap_v ((::GstEvent*) (gobj_()), (::GQuark) (name_to_c));
  return _temp_ret;
}

// void gst_event_parse_buffer_size (GstEvent* event, GstFormat* format, gint64* minsize, gint64* maxsize, gboolean* async);
// void gst_event_parse_buffer_size (::GstEvent* event, ::GstFormat* format, gint64* minsize, gint64* maxsize, gboolean* async);
void base::EventBase::parse_buffer_size (Gst::Format & format, gint64 & minsize, gint64 & maxsize, bool & async) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstFormat* format, gint64* minsize, gint64* maxsize, gboolean* async);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_buffer_size;
  gboolean async_o {};
  gint64 maxsize_o {};
  gint64 minsize_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstFormat*) (&format_o), (gint64*) (&minsize_o), (gint64*) (&maxsize_o), (gboolean*) (&async_o));
  async = async_o;
  maxsize = maxsize_o;
  minsize = minsize_o;
  format = gi::wrap (format_o);
}
std::tuple<Gst::Format, gint64, gint64, bool> base::EventBase::parse_buffer_size () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstFormat* format, gint64* minsize, gint64* maxsize, gboolean* async);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_buffer_size;
  gboolean async_o {};
  gint64 maxsize_o {};
  gint64 minsize_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstFormat*) (&format_o), (gint64*) (&minsize_o), (gint64*) (&maxsize_o), (gboolean*) (&async_o));
  return std::make_tuple (gi::wrap (format_o), minsize_o, maxsize_o, async_o);
}

// void gst_event_parse_caps (GstEvent* event, GstCaps** caps);
// void gst_event_parse_caps (::GstEvent* event, ::GstCaps** caps);
void base::EventBase::parse_caps (Gst::Caps & caps) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstCaps** caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_caps;
  ::GstCaps* caps_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstCaps**) (&caps_o));
  caps = gi::wrap (caps_o, gi::transfer_none, gi::direction_out);
}
Gst::Caps base::EventBase::parse_caps () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstCaps** caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_caps;
  ::GstCaps* caps_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstCaps**) (&caps_o));
  return gi::wrap (caps_o, gi::transfer_none, gi::direction_out);
}

// void gst_event_parse_flush_stop (GstEvent* event, gboolean* reset_time);
// void gst_event_parse_flush_stop (::GstEvent* event, gboolean* reset_time);
void base::EventBase::parse_flush_stop (bool & reset_time) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, gboolean* reset_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_flush_stop;
  gboolean reset_time_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (gboolean*) (&reset_time_o));
  reset_time = reset_time_o;
}
bool base::EventBase::parse_flush_stop () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, gboolean* reset_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_flush_stop;
  gboolean reset_time_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (gboolean*) (&reset_time_o));
  return reset_time_o;
}

// void gst_event_parse_gap (GstEvent* event, GstClockTime* timestamp, GstClockTime* duration);
// void gst_event_parse_gap (::GstEvent* event, ::GstClockTime* timestamp, ::GstClockTime* duration);
void base::EventBase::parse_gap (Gst::ClockTime * timestamp, Gst::ClockTime * duration) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstClockTime* timestamp, ::GstClockTime* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_gap;
  ::GstClockTime duration_o {};
  ::GstClockTime timestamp_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstClockTime*) (timestamp ? &timestamp_o : nullptr), (::GstClockTime*) (duration ? &duration_o : nullptr));
  if (duration) *duration = duration_o;
  if (timestamp) *timestamp = timestamp_o;
}
std::tuple<Gst::ClockTime, Gst::ClockTime> base::EventBase::parse_gap () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstClockTime* timestamp, ::GstClockTime* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_gap;
  ::GstClockTime duration_o {};
  ::GstClockTime timestamp_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstClockTime*) (&timestamp_o), (::GstClockTime*) (&duration_o));
  return std::make_tuple (timestamp_o, duration_o);
}

// void gst_event_parse_gap_flags (GstEvent* event, GstGapFlags* flags);
// void gst_event_parse_gap_flags (::GstEvent* event, ::GstGapFlags* flags);
void base::EventBase::parse_gap_flags (Gst::GapFlags & flags) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstGapFlags* flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_gap_flags;
  ::GstGapFlags flags_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstGapFlags*) (&flags_o));
  flags = gi::wrap (flags_o);
}
Gst::GapFlags base::EventBase::parse_gap_flags () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstGapFlags* flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_gap_flags;
  ::GstGapFlags flags_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstGapFlags*) (&flags_o));
  return gi::wrap (flags_o);
}

// gboolean gst_event_parse_group_id (GstEvent* event, guint* group_id);
// gboolean gst_event_parse_group_id (::GstEvent* event, guint* group_id);
bool base::EventBase::parse_group_id (guint & group_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstEvent* event, guint* group_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_group_id;
  guint group_id_o {};
  auto _temp_ret = call_wrap_v ((::GstEvent*) (gobj_()), (guint*) (&group_id_o));
  group_id = group_id_o;
  return _temp_ret;
}
std::tuple<bool, guint> base::EventBase::parse_group_id () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstEvent* event, guint* group_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_group_id;
  guint group_id_o {};
  auto _temp_ret = call_wrap_v ((::GstEvent*) (gobj_()), (guint*) (&group_id_o));
  return std::make_tuple (_temp_ret, group_id_o);
}

// void gst_event_parse_instant_rate_change (GstEvent* event, gdouble* rate_multiplier, GstSegmentFlags* new_flags);
// void gst_event_parse_instant_rate_change (::GstEvent* event, gdouble* rate_multiplier, ::GstSegmentFlags* new_flags);
void base::EventBase::parse_instant_rate_change (gdouble * rate_multiplier, Gst::SegmentFlags * new_flags) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, gdouble* rate_multiplier, ::GstSegmentFlags* new_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_instant_rate_change;
  ::GstSegmentFlags new_flags_o {};
  gdouble rate_multiplier_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (gdouble*) (rate_multiplier ? &rate_multiplier_o : nullptr), (::GstSegmentFlags*) (new_flags ? &new_flags_o : nullptr));
  if (new_flags) *new_flags = gi::wrap (new_flags_o);
  if (rate_multiplier) *rate_multiplier = rate_multiplier_o;
}
std::tuple<gdouble, Gst::SegmentFlags> base::EventBase::parse_instant_rate_change () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, gdouble* rate_multiplier, ::GstSegmentFlags* new_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_instant_rate_change;
  ::GstSegmentFlags new_flags_o {};
  gdouble rate_multiplier_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (gdouble*) (&rate_multiplier_o), (::GstSegmentFlags*) (&new_flags_o));
  return std::make_tuple (rate_multiplier_o, gi::wrap (new_flags_o));
}

// void gst_event_parse_instant_rate_sync_time (GstEvent* event, gdouble* rate_multiplier, GstClockTime* running_time, GstClockTime* upstream_running_time);
// void gst_event_parse_instant_rate_sync_time (::GstEvent* event, gdouble* rate_multiplier, ::GstClockTime* running_time, ::GstClockTime* upstream_running_time);
void base::EventBase::parse_instant_rate_sync_time (gdouble * rate_multiplier, Gst::ClockTime * running_time, Gst::ClockTime * upstream_running_time) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, gdouble* rate_multiplier, ::GstClockTime* running_time, ::GstClockTime* upstream_running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_instant_rate_sync_time;
  ::GstClockTime upstream_running_time_o {};
  ::GstClockTime running_time_o {};
  gdouble rate_multiplier_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (gdouble*) (rate_multiplier ? &rate_multiplier_o : nullptr), (::GstClockTime*) (running_time ? &running_time_o : nullptr), (::GstClockTime*) (upstream_running_time ? &upstream_running_time_o : nullptr));
  if (upstream_running_time) *upstream_running_time = upstream_running_time_o;
  if (running_time) *running_time = running_time_o;
  if (rate_multiplier) *rate_multiplier = rate_multiplier_o;
}
std::tuple<gdouble, Gst::ClockTime, Gst::ClockTime> base::EventBase::parse_instant_rate_sync_time () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, gdouble* rate_multiplier, ::GstClockTime* running_time, ::GstClockTime* upstream_running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_instant_rate_sync_time;
  ::GstClockTime upstream_running_time_o {};
  ::GstClockTime running_time_o {};
  gdouble rate_multiplier_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (gdouble*) (&rate_multiplier_o), (::GstClockTime*) (&running_time_o), (::GstClockTime*) (&upstream_running_time_o));
  return std::make_tuple (rate_multiplier_o, running_time_o, upstream_running_time_o);
}

// void gst_event_parse_latency (GstEvent* event, GstClockTime* latency);
// void gst_event_parse_latency (::GstEvent* event, ::GstClockTime* latency);
void base::EventBase::parse_latency (Gst::ClockTime & latency) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstClockTime* latency);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_latency;
  ::GstClockTime latency_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstClockTime*) (&latency_o));
  latency = latency_o;
}
Gst::ClockTime base::EventBase::parse_latency () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstClockTime* latency);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_latency;
  ::GstClockTime latency_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstClockTime*) (&latency_o));
  return latency_o;
}

// void gst_event_parse_protection (GstEvent* event, const gchar** system_id, GstBuffer** data, const gchar** origin);
// void gst_event_parse_protection (::GstEvent* event, const char** system_id, ::GstBuffer** data, const char** origin);
void base::EventBase::parse_protection (std::string * system_id, Gst::Buffer * data, std::string * origin) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, const char** system_id, ::GstBuffer** data, const char** origin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_protection;
  const char* origin_o {};
  ::GstBuffer* data_o {};
  const char* system_id_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (const char**) (system_id ? &system_id_o : nullptr), (::GstBuffer**) (data ? &data_o : nullptr), (const char**) (origin ? &origin_o : nullptr));
  if (origin) *origin = gi::wrap (origin_o, gi::transfer_none, gi::direction_out);
  if (data) *data = gi::wrap (data_o, gi::transfer_none, gi::direction_out);
  if (system_id) *system_id = gi::wrap (system_id_o, gi::transfer_none, gi::direction_out);
}
std::tuple<std::string, Gst::Buffer, std::string> base::EventBase::parse_protection () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, const char** system_id, ::GstBuffer** data, const char** origin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_protection;
  const char* origin_o {};
  ::GstBuffer* data_o {};
  const char* system_id_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (const char**) (&system_id_o), (::GstBuffer**) (&data_o), (const char**) (&origin_o));
  return std::make_tuple (gi::wrap (system_id_o, gi::transfer_none, gi::direction_out), gi::wrap (data_o, gi::transfer_none, gi::direction_out), gi::wrap (origin_o, gi::transfer_none, gi::direction_out));
}

// void gst_event_parse_qos (GstEvent* event, GstQOSType* type, gdouble* proportion, GstClockTimeDiff* diff, GstClockTime* timestamp);
// void gst_event_parse_qos (::GstEvent* event, ::GstQOSType* type, gdouble* proportion, ::GstClockTimeDiff* diff, ::GstClockTime* timestamp);
void base::EventBase::parse_qos (Gst::QOSType & type, gdouble & proportion, Gst::ClockTimeDiff & diff, Gst::ClockTime & timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstQOSType* type, gdouble* proportion, ::GstClockTimeDiff* diff, ::GstClockTime* timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_qos;
  ::GstClockTime timestamp_o {};
  ::GstClockTimeDiff diff_o {};
  gdouble proportion_o {};
  ::GstQOSType type_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstQOSType*) (&type_o), (gdouble*) (&proportion_o), (::GstClockTimeDiff*) (&diff_o), (::GstClockTime*) (&timestamp_o));
  timestamp = timestamp_o;
  diff = diff_o;
  proportion = proportion_o;
  type = gi::wrap (type_o);
}
std::tuple<Gst::QOSType, gdouble, Gst::ClockTimeDiff, Gst::ClockTime> base::EventBase::parse_qos () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstQOSType* type, gdouble* proportion, ::GstClockTimeDiff* diff, ::GstClockTime* timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_qos;
  ::GstClockTime timestamp_o {};
  ::GstClockTimeDiff diff_o {};
  gdouble proportion_o {};
  ::GstQOSType type_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstQOSType*) (&type_o), (gdouble*) (&proportion_o), (::GstClockTimeDiff*) (&diff_o), (::GstClockTime*) (&timestamp_o));
  return std::make_tuple (gi::wrap (type_o), proportion_o, diff_o, timestamp_o);
}

// void gst_event_parse_seek (GstEvent* event, gdouble* rate, GstFormat* format, GstSeekFlags* flags, GstSeekType* start_type, gint64* start, GstSeekType* stop_type, gint64* stop);
// void gst_event_parse_seek (::GstEvent* event, gdouble* rate, ::GstFormat* format, ::GstSeekFlags* flags, ::GstSeekType* start_type, gint64* start, ::GstSeekType* stop_type, gint64* stop);
void base::EventBase::parse_seek (gdouble & rate, Gst::Format & format, Gst::SeekFlags & flags, Gst::SeekType & start_type, gint64 & start, Gst::SeekType & stop_type, gint64 & stop) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, gdouble* rate, ::GstFormat* format, ::GstSeekFlags* flags, ::GstSeekType* start_type, gint64* start, ::GstSeekType* stop_type, gint64* stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_seek;
  gint64 stop_o {};
  ::GstSeekType stop_type_o {};
  gint64 start_o {};
  ::GstSeekType start_type_o {};
  ::GstSeekFlags flags_o {};
  ::GstFormat format_o {};
  gdouble rate_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (gdouble*) (&rate_o), (::GstFormat*) (&format_o), (::GstSeekFlags*) (&flags_o), (::GstSeekType*) (&start_type_o), (gint64*) (&start_o), (::GstSeekType*) (&stop_type_o), (gint64*) (&stop_o));
  stop = stop_o;
  stop_type = gi::wrap (stop_type_o);
  start = start_o;
  start_type = gi::wrap (start_type_o);
  flags = gi::wrap (flags_o);
  format = gi::wrap (format_o);
  rate = rate_o;
}
std::tuple<gdouble, Gst::Format, Gst::SeekFlags, Gst::SeekType, gint64, Gst::SeekType, gint64> base::EventBase::parse_seek () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, gdouble* rate, ::GstFormat* format, ::GstSeekFlags* flags, ::GstSeekType* start_type, gint64* start, ::GstSeekType* stop_type, gint64* stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_seek;
  gint64 stop_o {};
  ::GstSeekType stop_type_o {};
  gint64 start_o {};
  ::GstSeekType start_type_o {};
  ::GstSeekFlags flags_o {};
  ::GstFormat format_o {};
  gdouble rate_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (gdouble*) (&rate_o), (::GstFormat*) (&format_o), (::GstSeekFlags*) (&flags_o), (::GstSeekType*) (&start_type_o), (gint64*) (&start_o), (::GstSeekType*) (&stop_type_o), (gint64*) (&stop_o));
  return std::make_tuple (rate_o, gi::wrap (format_o), gi::wrap (flags_o), gi::wrap (start_type_o), start_o, gi::wrap (stop_type_o), stop_o);
}

// void gst_event_parse_seek_trickmode_interval (GstEvent* event, GstClockTime* interval);
// void gst_event_parse_seek_trickmode_interval (::GstEvent* event, ::GstClockTime* interval);
void base::EventBase::parse_seek_trickmode_interval (Gst::ClockTime & interval) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstClockTime* interval);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_seek_trickmode_interval;
  ::GstClockTime interval_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstClockTime*) (&interval_o));
  interval = interval_o;
}
Gst::ClockTime base::EventBase::parse_seek_trickmode_interval () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstClockTime* interval);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_seek_trickmode_interval;
  ::GstClockTime interval_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstClockTime*) (&interval_o));
  return interval_o;
}

// void gst_event_parse_segment (GstEvent* event, const GstSegment** segment);
// void gst_event_parse_segment (::GstEvent* event, const ::GstSegment** segment);
void base::EventBase::parse_segment (Gst::Segment & segment) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, const ::GstSegment** segment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_segment;
  const ::GstSegment* segment_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (const ::GstSegment**) (&segment_o));
  segment = gi::wrap (segment_o, gi::transfer_none, gi::direction_out);
}
Gst::Segment base::EventBase::parse_segment () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, const ::GstSegment** segment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_segment;
  const ::GstSegment* segment_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (const ::GstSegment**) (&segment_o));
  return gi::wrap (segment_o, gi::transfer_none, gi::direction_out);
}

// void gst_event_parse_segment_done (GstEvent* event, GstFormat* format, gint64* position);
// void gst_event_parse_segment_done (::GstEvent* event, ::GstFormat* format, gint64* position);
void base::EventBase::parse_segment_done (Gst::Format * format, gint64 * position) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstFormat* format, gint64* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_segment_done;
  gint64 position_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstFormat*) (format ? &format_o : nullptr), (gint64*) (position ? &position_o : nullptr));
  if (position) *position = position_o;
  if (format) *format = gi::wrap (format_o);
}
std::tuple<Gst::Format, gint64> base::EventBase::parse_segment_done () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstFormat* format, gint64* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_segment_done;
  gint64 position_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstFormat*) (&format_o), (gint64*) (&position_o));
  return std::make_tuple (gi::wrap (format_o), position_o);
}

// void gst_event_parse_select_streams (GstEvent* event, GList** streams);
// void gst_event_parse_select_streams (::GstEvent* event, ::GList** streams);
void base::EventBase::parse_select_streams (std::vector<std::string> & streams) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GList** streams);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_select_streams;
  ::GList* streams_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GList**) (&streams_o));
  streams = gi::detail::wrap_list<std::string> (streams_o, gi::transfer_full);
}
std::vector<std::string> base::EventBase::parse_select_streams () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GList** streams);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_select_streams;
  ::GList* streams_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GList**) (&streams_o));
  return gi::detail::wrap_list<std::string> (streams_o, gi::transfer_full);
}

// void gst_event_parse_sink_message (GstEvent* event, GstMessage** msg);
// void gst_event_parse_sink_message (::GstEvent* event, ::GstMessage** msg);
void base::EventBase::parse_sink_message (Gst::Message & msg) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstMessage** msg);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_sink_message;
  ::GstMessage* msg_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstMessage**) (&msg_o));
  msg = gi::wrap (msg_o, gi::transfer_full, gi::direction_out);
}
Gst::Message base::EventBase::parse_sink_message () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstMessage** msg);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_sink_message;
  ::GstMessage* msg_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstMessage**) (&msg_o));
  return gi::wrap (msg_o, gi::transfer_full, gi::direction_out);
}

// void gst_event_parse_step (GstEvent* event, GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
// void gst_event_parse_step (::GstEvent* event, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
void base::EventBase::parse_step (Gst::Format * format, guint64 * amount, gdouble * rate, bool * flush, bool * intermediate) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_step;
  gboolean intermediate_o {};
  gboolean flush_o {};
  gdouble rate_o {};
  guint64 amount_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstFormat*) (format ? &format_o : nullptr), (guint64*) (amount ? &amount_o : nullptr), (gdouble*) (rate ? &rate_o : nullptr), (gboolean*) (flush ? &flush_o : nullptr), (gboolean*) (intermediate ? &intermediate_o : nullptr));
  if (intermediate) *intermediate = intermediate_o;
  if (flush) *flush = flush_o;
  if (rate) *rate = rate_o;
  if (amount) *amount = amount_o;
  if (format) *format = gi::wrap (format_o);
}
std::tuple<Gst::Format, guint64, gdouble, bool, bool> base::EventBase::parse_step () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_step;
  gboolean intermediate_o {};
  gboolean flush_o {};
  gdouble rate_o {};
  guint64 amount_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstFormat*) (&format_o), (guint64*) (&amount_o), (gdouble*) (&rate_o), (gboolean*) (&flush_o), (gboolean*) (&intermediate_o));
  return std::make_tuple (gi::wrap (format_o), amount_o, rate_o, flush_o, intermediate_o);
}

// void gst_event_parse_stream (GstEvent* event, GstStream** stream);
// void gst_event_parse_stream (::GstEvent* event, ::GstStream** stream);
void base::EventBase::parse_stream (Gst::Stream & stream) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstStream** stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_stream;
  ::GstStream* stream_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstStream**) (&stream_o));
  stream = gi::wrap (stream_o, gi::transfer_full, gi::direction_out);
}
Gst::Stream base::EventBase::parse_stream () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstStream** stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_stream;
  ::GstStream* stream_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstStream**) (&stream_o));
  return gi::wrap (stream_o, gi::transfer_full, gi::direction_out);
}

// void gst_event_parse_stream_collection (GstEvent* event, GstStreamCollection** collection);
// void gst_event_parse_stream_collection (::GstEvent* event, ::GstStreamCollection** collection);
void base::EventBase::parse_stream_collection (Gst::StreamCollection & collection) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstStreamCollection** collection);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_stream_collection;
  ::GstStreamCollection* collection_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstStreamCollection**) (&collection_o));
  collection = gi::wrap (collection_o, gi::transfer_full, gi::direction_out);
}
Gst::StreamCollection base::EventBase::parse_stream_collection () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstStreamCollection** collection);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_stream_collection;
  ::GstStreamCollection* collection_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstStreamCollection**) (&collection_o));
  return gi::wrap (collection_o, gi::transfer_full, gi::direction_out);
}

// void gst_event_parse_stream_flags (GstEvent* event, GstStreamFlags* flags);
// void gst_event_parse_stream_flags (::GstEvent* event, ::GstStreamFlags* flags);
void base::EventBase::parse_stream_flags (Gst::StreamFlags & flags) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstStreamFlags* flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_stream_flags;
  ::GstStreamFlags flags_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstStreamFlags*) (&flags_o));
  flags = gi::wrap (flags_o);
}
Gst::StreamFlags base::EventBase::parse_stream_flags () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstStreamFlags* flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_stream_flags;
  ::GstStreamFlags flags_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstStreamFlags*) (&flags_o));
  return gi::wrap (flags_o);
}

// void gst_event_parse_stream_group_done (GstEvent* event, guint* group_id);
// void gst_event_parse_stream_group_done (::GstEvent* event, guint* group_id);
void base::EventBase::parse_stream_group_done (guint & group_id) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, guint* group_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_stream_group_done;
  guint group_id_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (guint*) (&group_id_o));
  group_id = group_id_o;
}
guint base::EventBase::parse_stream_group_done () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, guint* group_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_stream_group_done;
  guint group_id_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (guint*) (&group_id_o));
  return group_id_o;
}

// void gst_event_parse_stream_start (GstEvent* event, const gchar** stream_id);
// void gst_event_parse_stream_start (::GstEvent* event, const char** stream_id);
void base::EventBase::parse_stream_start (std::string & stream_id) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, const char** stream_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_stream_start;
  const char* stream_id_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (const char**) (&stream_id_o));
  stream_id = gi::wrap (stream_id_o, gi::transfer_none, gi::direction_out);
}
std::string base::EventBase::parse_stream_start () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, const char** stream_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_stream_start;
  const char* stream_id_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (const char**) (&stream_id_o));
  return gi::wrap (stream_id_o, gi::transfer_none, gi::direction_out);
}

// void gst_event_parse_tag (GstEvent* event, GstTagList** taglist);
// void gst_event_parse_tag (::GstEvent* event, ::GstTagList** taglist);
void base::EventBase::parse_tag (Gst::TagList & taglist) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstTagList** taglist);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_tag;
  ::GstTagList* taglist_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstTagList**) (&taglist_o));
  taglist = gi::wrap (taglist_o, gi::transfer_none, gi::direction_out);
}
Gst::TagList base::EventBase::parse_tag () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstTagList** taglist);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_tag;
  ::GstTagList* taglist_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstTagList**) (&taglist_o));
  return gi::wrap (taglist_o, gi::transfer_none, gi::direction_out);
}

// void gst_event_parse_toc (GstEvent* event, GstToc** toc, gboolean* updated);
// void gst_event_parse_toc (::GstEvent* event, ::GstToc** toc, gboolean* updated);
void base::EventBase::parse_toc (Gst::Toc & toc, bool & updated) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstToc** toc, gboolean* updated);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_toc;
  gboolean updated_o {};
  ::GstToc* toc_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstToc**) (&toc_o), (gboolean*) (&updated_o));
  updated = updated_o;
  toc = gi::wrap (toc_o, gi::transfer_full, gi::direction_out);
}
std::tuple<Gst::Toc, bool> base::EventBase::parse_toc () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstToc** toc, gboolean* updated);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_toc;
  gboolean updated_o {};
  ::GstToc* toc_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstToc**) (&toc_o), (gboolean*) (&updated_o));
  return std::make_tuple (gi::wrap (toc_o, gi::transfer_full, gi::direction_out), updated_o);
}

// void gst_event_parse_toc_select (GstEvent* event, gchar** uid);
// void gst_event_parse_toc_select (::GstEvent* event, char** uid);
void base::EventBase::parse_toc_select (std::string * uid) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, char** uid);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_toc_select;
  char* uid_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (char**) (uid ? &uid_o : nullptr));
  if (uid) *uid = gi::wrap (uid_o, gi::transfer_full, gi::direction_out);
}
std::string base::EventBase::parse_toc_select () noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, char** uid);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_parse_toc_select;
  char* uid_o {};
  call_wrap_v ((::GstEvent*) (gobj_()), (char**) (&uid_o));
  return gi::wrap (uid_o, gi::transfer_full, gi::direction_out);
}

// void gst_event_set_gap_flags (GstEvent* event, GstGapFlags flags);
// void gst_event_set_gap_flags (::GstEvent* event, ::GstGapFlags flags);
void base::EventBase::set_gap_flags (Gst::GapFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstGapFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_set_gap_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstGapFlags) (flags_to_c));
}

// void gst_event_set_group_id (GstEvent* event, guint group_id);
// void gst_event_set_group_id (::GstEvent* event, guint group_id);
void base::EventBase::set_group_id (guint group_id) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, guint group_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_set_group_id;
  auto group_id_to_c = group_id;
  call_wrap_v ((::GstEvent*) (gobj_()), (guint) (group_id_to_c));
}

// void gst_event_set_running_time_offset (GstEvent* event, gint64 offset);
// void gst_event_set_running_time_offset (::GstEvent* event, gint64 offset);
void base::EventBase::set_running_time_offset (gint64 offset) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, gint64 offset);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_set_running_time_offset;
  auto offset_to_c = offset;
  call_wrap_v ((::GstEvent*) (gobj_()), (gint64) (offset_to_c));
}

// void gst_event_set_seek_trickmode_interval (GstEvent* event, GstClockTime interval);
// void gst_event_set_seek_trickmode_interval (::GstEvent* event, ::GstClockTime interval);
void base::EventBase::set_seek_trickmode_interval (::GstClockTime interval) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstClockTime interval);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_set_seek_trickmode_interval;
  auto interval_to_c = interval;
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstClockTime) (interval_to_c));
}

// void gst_event_set_seqnum (GstEvent* event, guint32 seqnum);
// void gst_event_set_seqnum (::GstEvent* event, guint32 seqnum);
void base::EventBase::set_seqnum (guint32 seqnum) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, guint32 seqnum);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_set_seqnum;
  auto seqnum_to_c = seqnum;
  call_wrap_v ((::GstEvent*) (gobj_()), (guint32) (seqnum_to_c));
}

// void gst_event_set_stream (GstEvent* event, GstStream* stream);
// void gst_event_set_stream (::GstEvent* event, ::GstStream* stream);
void base::EventBase::set_stream (Gst::Stream stream) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_set_stream;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstStream*) (stream_to_c));
}

// void gst_event_set_stream_flags (GstEvent* event, GstStreamFlags flags);
// void gst_event_set_stream_flags (::GstEvent* event, ::GstStreamFlags flags);
void base::EventBase::set_stream_flags (Gst::StreamFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GstEvent* event, ::GstStreamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_set_stream_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GstEvent*) (gobj_()), (::GstStreamFlags) (flags_to_c));
}

// GstStructure* gst_event_writable_structure (GstEvent* event);
// ::GstStructure* gst_event_writable_structure (::GstEvent* event);
Gst::Structure base::EventBase::writable_structure () noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (::GstEvent* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_event_writable_structure;
  auto _temp_ret = call_wrap_v ((::GstEvent*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/event_extra_def_impl.hpp>)
#include <gst/event_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/event_extra_impl.hpp>)
#include <gst/event_extra_impl.hpp>
#endif
#endif

#endif
