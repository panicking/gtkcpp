// AUTO-GENERATED

#ifndef _GI_GST_EVENT_HPP_
#define _GI_GST_EVENT_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Buffer;
class Caps;
class Message;
class Segment;
class Stream;
class StreamCollection;
class Structure;
class TagList;
class Toc;

class Event;

namespace base {


#define GI_GST_EVENT_BASE base::EventBase
class EventBase : public gi::detail::GBoxedWrapper<EventBase, ::GstEvent>
{
typedef gi::detail::GBoxedWrapper<EventBase, ::GstEvent> super_type;
public:

EventBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_event_get_type(); } 

// ::GstEventType Event::type (const ::GstEvent* obj);
// ::GstEventType Event::type (const ::GstEvent* obj);
GI_INLINE_DECL Gst::EventType type_ () const noexcept;

//  Event::type (::GstEvent* obj, ::GstEventType _value);
// void Event::type (::GstEvent* obj, ::GstEventType _value);
GI_INLINE_DECL void type_ (Gst::EventType _value) noexcept;

// guint64 Event::timestamp (const ::GstEvent* obj);
// guint64 Event::timestamp (const ::GstEvent* obj);
GI_INLINE_DECL guint64 timestamp_ () const noexcept;

//  Event::timestamp (::GstEvent* obj, guint64 _value);
// void Event::timestamp (::GstEvent* obj, guint64 _value);
GI_INLINE_DECL void timestamp_ (guint64 _value) noexcept;

// guint32 Event::seqnum (const ::GstEvent* obj);
// guint32 Event::seqnum (const ::GstEvent* obj);
GI_INLINE_DECL guint32 seqnum_ () const noexcept;

//  Event::seqnum (::GstEvent* obj, guint32 _value);
// void Event::seqnum (::GstEvent* obj, guint32 _value);
GI_INLINE_DECL void seqnum_ (guint32 _value) noexcept;

// GstEvent* gst_event_new_buffer_size (GstFormat format, gint64 minsize, gint64 maxsize, gboolean async);
// ::GstEvent* gst_event_new_buffer_size (::GstFormat format, gint64 minsize, gint64 maxsize, gboolean async);
static GI_INLINE_DECL Gst::Event new_buffer_size (Gst::Format format, gint64 minsize, gint64 maxsize, gboolean async) noexcept;

// GstEvent* gst_event_new_caps (GstCaps* caps);
// ::GstEvent* gst_event_new_caps (::GstCaps* caps);
static GI_INLINE_DECL Gst::Event new_caps (Gst::Caps caps) noexcept;

// GstEvent* gst_event_new_custom (GstEventType type, GstStructure* structure);
// ::GstEvent* gst_event_new_custom (::GstEventType type, ::GstStructure* structure);
static GI_INLINE_DECL Gst::Event new_custom (Gst::EventType type, Gst::Structure structure) noexcept;

// GstEvent* gst_event_new_eos ();
// ::GstEvent* gst_event_new_eos ();
static GI_INLINE_DECL Gst::Event new_eos () noexcept;

// GstEvent* gst_event_new_flush_start ();
// ::GstEvent* gst_event_new_flush_start ();
static GI_INLINE_DECL Gst::Event new_flush_start () noexcept;

// GstEvent* gst_event_new_flush_stop (gboolean reset_time);
// ::GstEvent* gst_event_new_flush_stop (gboolean reset_time);
static GI_INLINE_DECL Gst::Event new_flush_stop (gboolean reset_time) noexcept;

// GstEvent* gst_event_new_gap (GstClockTime timestamp, GstClockTime duration);
// ::GstEvent* gst_event_new_gap (::GstClockTime timestamp, ::GstClockTime duration);
static GI_INLINE_DECL Gst::Event new_gap (::GstClockTime timestamp, ::GstClockTime duration) noexcept;

// GstEvent* gst_event_new_instant_rate_change (gdouble rate_multiplier, GstSegmentFlags new_flags);
// ::GstEvent* gst_event_new_instant_rate_change (gdouble rate_multiplier, ::GstSegmentFlags new_flags);
static GI_INLINE_DECL Gst::Event new_instant_rate_change (gdouble rate_multiplier, Gst::SegmentFlags new_flags) noexcept;

// GstEvent* gst_event_new_instant_rate_sync_time (gdouble rate_multiplier, GstClockTime running_time, GstClockTime upstream_running_time);
// ::GstEvent* gst_event_new_instant_rate_sync_time (gdouble rate_multiplier, ::GstClockTime running_time, ::GstClockTime upstream_running_time);
static GI_INLINE_DECL Gst::Event new_instant_rate_sync_time (gdouble rate_multiplier, ::GstClockTime running_time, ::GstClockTime upstream_running_time) noexcept;

// GstEvent* gst_event_new_latency (GstClockTime latency);
// ::GstEvent* gst_event_new_latency (::GstClockTime latency);
static GI_INLINE_DECL Gst::Event new_latency (::GstClockTime latency) noexcept;

// GstEvent* gst_event_new_navigation (GstStructure* structure);
// ::GstEvent* gst_event_new_navigation (::GstStructure* structure);
static GI_INLINE_DECL Gst::Event new_navigation (Gst::Structure structure) noexcept;

// GstEvent* gst_event_new_protection (const gchar* system_id, GstBuffer* data, const gchar* origin);
// ::GstEvent* gst_event_new_protection (const char* system_id, ::GstBuffer* data, const char* origin);
static GI_INLINE_DECL Gst::Event new_protection (const std::string & system_id, Gst::Buffer data, const std::string & origin) noexcept;

// GstEvent* gst_event_new_qos (GstQOSType type, gdouble proportion, GstClockTimeDiff diff, GstClockTime timestamp);
// ::GstEvent* gst_event_new_qos (::GstQOSType type, gdouble proportion, ::GstClockTimeDiff diff, ::GstClockTime timestamp);
static GI_INLINE_DECL Gst::Event new_qos (Gst::QOSType type, gdouble proportion, ::GstClockTimeDiff diff, ::GstClockTime timestamp) noexcept;

// GstEvent* gst_event_new_reconfigure ();
// ::GstEvent* gst_event_new_reconfigure ();
static GI_INLINE_DECL Gst::Event new_reconfigure () noexcept;

// GstEvent* gst_event_new_seek (gdouble rate, GstFormat format, GstSeekFlags flags, GstSeekType start_type, gint64 start, GstSeekType stop_type, gint64 stop);
// ::GstEvent* gst_event_new_seek (gdouble rate, ::GstFormat format, ::GstSeekFlags flags, ::GstSeekType start_type, gint64 start, ::GstSeekType stop_type, gint64 stop);
static GI_INLINE_DECL Gst::Event new_seek (gdouble rate, Gst::Format format, Gst::SeekFlags flags, Gst::SeekType start_type, gint64 start, Gst::SeekType stop_type, gint64 stop) noexcept;

// GstEvent* gst_event_new_segment (const GstSegment* segment);
// ::GstEvent* gst_event_new_segment (const ::GstSegment* segment);
static GI_INLINE_DECL Gst::Event new_segment (const Gst::Segment & segment) noexcept;

// GstEvent* gst_event_new_segment_done (GstFormat format, gint64 position);
// ::GstEvent* gst_event_new_segment_done (::GstFormat format, gint64 position);
static GI_INLINE_DECL Gst::Event new_segment_done (Gst::Format format, gint64 position) noexcept;

// GstEvent* gst_event_new_select_streams (GList* streams);
// ::GstEvent* gst_event_new_select_streams (::GList* streams);
static GI_INLINE_DECL Gst::Event new_select_streams (const std::vector<std::string> & streams) noexcept;

// GstEvent* gst_event_new_sink_message (const gchar* name, GstMessage* msg);
// ::GstEvent* gst_event_new_sink_message (const char* name, ::GstMessage* msg);
static GI_INLINE_DECL Gst::Event new_sink_message (const std::string & name, Gst::Message msg) noexcept;

// GstEvent* gst_event_new_step (GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate);
// ::GstEvent* gst_event_new_step (::GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate);
static GI_INLINE_DECL Gst::Event new_step (Gst::Format format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate) noexcept;

// GstEvent* gst_event_new_stream_collection (GstStreamCollection* collection);
// ::GstEvent* gst_event_new_stream_collection (::GstStreamCollection* collection);
static GI_INLINE_DECL Gst::Event new_stream_collection (Gst::StreamCollection collection) noexcept;

// GstEvent* gst_event_new_stream_group_done (guint group_id);
// ::GstEvent* gst_event_new_stream_group_done (guint group_id);
static GI_INLINE_DECL Gst::Event new_stream_group_done (guint group_id) noexcept;

// GstEvent* gst_event_new_stream_start (const gchar* stream_id);
// ::GstEvent* gst_event_new_stream_start (const char* stream_id);
static GI_INLINE_DECL Gst::Event new_stream_start (const std::string & stream_id) noexcept;

// GstEvent* gst_event_new_tag (GstTagList* taglist);
// ::GstEvent* gst_event_new_tag (::GstTagList* taglist);
static GI_INLINE_DECL Gst::Event new_tag (Gst::TagList taglist) noexcept;

// GstEvent* gst_event_new_toc (GstToc* toc, gboolean updated);
// ::GstEvent* gst_event_new_toc (::GstToc* toc, gboolean updated);
static GI_INLINE_DECL Gst::Event new_toc (Gst::Toc toc, gboolean updated) noexcept;

// GstEvent* gst_event_new_toc_select (const gchar* uid);
// ::GstEvent* gst_event_new_toc_select (const char* uid);
static GI_INLINE_DECL Gst::Event new_toc_select (const std::string & uid) noexcept;

// void gst_event_copy_segment (GstEvent* event, GstSegment* segment);
// void gst_event_copy_segment (::GstEvent* event, ::GstSegment* segment);
GI_INLINE_DECL void copy_segment (Gst::Segment segment) noexcept;

// gint64 gst_event_get_running_time_offset (GstEvent* event);
// gint64 gst_event_get_running_time_offset (::GstEvent* event);
GI_INLINE_DECL gint64 get_running_time_offset () noexcept;

// guint32 gst_event_get_seqnum (GstEvent* event);
// guint32 gst_event_get_seqnum (::GstEvent* event);
GI_INLINE_DECL guint32 get_seqnum () noexcept;

// const GstStructure* gst_event_get_structure (GstEvent* event);
// const ::GstStructure* gst_event_get_structure (::GstEvent* event);
GI_INLINE_DECL Gst::Structure get_structure () noexcept;

// gboolean gst_event_has_name (GstEvent* event, const gchar* name);
// gboolean gst_event_has_name (::GstEvent* event, const char* name);
GI_INLINE_DECL bool has_name (const std::string & name) noexcept;

// gboolean gst_event_has_name_id (GstEvent* event, GQuark name);
// gboolean gst_event_has_name_id (::GstEvent* event, ::GQuark name);
GI_INLINE_DECL bool has_name_id (::GQuark name) noexcept;

// void gst_event_parse_buffer_size (GstEvent* event, GstFormat* format, gint64* minsize, gint64* maxsize, gboolean* async);
// void gst_event_parse_buffer_size (::GstEvent* event, ::GstFormat* format, gint64* minsize, gint64* maxsize, gboolean* async);
GI_INLINE_DECL void parse_buffer_size (Gst::Format & format, gint64 & minsize, gint64 & maxsize, bool & async) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, gint64, gint64, bool> parse_buffer_size () noexcept;

// void gst_event_parse_caps (GstEvent* event, GstCaps** caps);
// void gst_event_parse_caps (::GstEvent* event, ::GstCaps** caps);
GI_INLINE_DECL void parse_caps (Gst::Caps & caps) noexcept;
GI_INLINE_DECL Gst::Caps parse_caps () noexcept;

// void gst_event_parse_flush_stop (GstEvent* event, gboolean* reset_time);
// void gst_event_parse_flush_stop (::GstEvent* event, gboolean* reset_time);
GI_INLINE_DECL void parse_flush_stop (bool & reset_time) noexcept;
GI_INLINE_DECL bool parse_flush_stop () noexcept;

// void gst_event_parse_gap (GstEvent* event, GstClockTime* timestamp, GstClockTime* duration);
// void gst_event_parse_gap (::GstEvent* event, ::GstClockTime* timestamp, ::GstClockTime* duration);
GI_INLINE_DECL void parse_gap (Gst::ClockTime * timestamp = nullptr, Gst::ClockTime * duration = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::ClockTime, Gst::ClockTime> parse_gap () noexcept;

// void gst_event_parse_gap_flags (GstEvent* event, GstGapFlags* flags);
// void gst_event_parse_gap_flags (::GstEvent* event, ::GstGapFlags* flags);
GI_INLINE_DECL void parse_gap_flags (Gst::GapFlags & flags) noexcept;
GI_INLINE_DECL Gst::GapFlags parse_gap_flags () noexcept;

// gboolean gst_event_parse_group_id (GstEvent* event, guint* group_id);
// gboolean gst_event_parse_group_id (::GstEvent* event, guint* group_id);
GI_INLINE_DECL bool parse_group_id (guint & group_id) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> parse_group_id () noexcept;

// void gst_event_parse_instant_rate_change (GstEvent* event, gdouble* rate_multiplier, GstSegmentFlags* new_flags);
// void gst_event_parse_instant_rate_change (::GstEvent* event, gdouble* rate_multiplier, ::GstSegmentFlags* new_flags);
GI_INLINE_DECL void parse_instant_rate_change (gdouble * rate_multiplier = nullptr, Gst::SegmentFlags * new_flags = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, Gst::SegmentFlags> parse_instant_rate_change () noexcept;

// void gst_event_parse_instant_rate_sync_time (GstEvent* event, gdouble* rate_multiplier, GstClockTime* running_time, GstClockTime* upstream_running_time);
// void gst_event_parse_instant_rate_sync_time (::GstEvent* event, gdouble* rate_multiplier, ::GstClockTime* running_time, ::GstClockTime* upstream_running_time);
GI_INLINE_DECL void parse_instant_rate_sync_time (gdouble * rate_multiplier = nullptr, Gst::ClockTime * running_time = nullptr, Gst::ClockTime * upstream_running_time = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, Gst::ClockTime, Gst::ClockTime> parse_instant_rate_sync_time () noexcept;

// void gst_event_parse_latency (GstEvent* event, GstClockTime* latency);
// void gst_event_parse_latency (::GstEvent* event, ::GstClockTime* latency);
GI_INLINE_DECL void parse_latency (Gst::ClockTime & latency) noexcept;
GI_INLINE_DECL Gst::ClockTime parse_latency () noexcept;

// void gst_event_parse_protection (GstEvent* event, const gchar** system_id, GstBuffer** data, const gchar** origin);
// void gst_event_parse_protection (::GstEvent* event, const char** system_id, ::GstBuffer** data, const char** origin);
GI_INLINE_DECL void parse_protection (std::string * system_id = nullptr, Gst::Buffer * data = nullptr, std::string * origin = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::string, Gst::Buffer, std::string> parse_protection () noexcept;

// void gst_event_parse_qos (GstEvent* event, GstQOSType* type, gdouble* proportion, GstClockTimeDiff* diff, GstClockTime* timestamp);
// void gst_event_parse_qos (::GstEvent* event, ::GstQOSType* type, gdouble* proportion, ::GstClockTimeDiff* diff, ::GstClockTime* timestamp);
GI_INLINE_DECL void parse_qos (Gst::QOSType & type, gdouble & proportion, Gst::ClockTimeDiff & diff, Gst::ClockTime & timestamp) noexcept;
GI_INLINE_DECL std::tuple<Gst::QOSType, gdouble, Gst::ClockTimeDiff, Gst::ClockTime> parse_qos () noexcept;

// void gst_event_parse_seek (GstEvent* event, gdouble* rate, GstFormat* format, GstSeekFlags* flags, GstSeekType* start_type, gint64* start, GstSeekType* stop_type, gint64* stop);
// void gst_event_parse_seek (::GstEvent* event, gdouble* rate, ::GstFormat* format, ::GstSeekFlags* flags, ::GstSeekType* start_type, gint64* start, ::GstSeekType* stop_type, gint64* stop);
GI_INLINE_DECL void parse_seek (gdouble & rate, Gst::Format & format, Gst::SeekFlags & flags, Gst::SeekType & start_type, gint64 & start, Gst::SeekType & stop_type, gint64 & stop) noexcept;
GI_INLINE_DECL std::tuple<gdouble, Gst::Format, Gst::SeekFlags, Gst::SeekType, gint64, Gst::SeekType, gint64> parse_seek () noexcept;

// void gst_event_parse_seek_trickmode_interval (GstEvent* event, GstClockTime* interval);
// void gst_event_parse_seek_trickmode_interval (::GstEvent* event, ::GstClockTime* interval);
GI_INLINE_DECL void parse_seek_trickmode_interval (Gst::ClockTime & interval) noexcept;
GI_INLINE_DECL Gst::ClockTime parse_seek_trickmode_interval () noexcept;

// void gst_event_parse_segment (GstEvent* event, const GstSegment** segment);
// void gst_event_parse_segment (::GstEvent* event, const ::GstSegment** segment);
GI_INLINE_DECL void parse_segment (Gst::Segment & segment) noexcept;
GI_INLINE_DECL Gst::Segment parse_segment () noexcept;

// void gst_event_parse_segment_done (GstEvent* event, GstFormat* format, gint64* position);
// void gst_event_parse_segment_done (::GstEvent* event, ::GstFormat* format, gint64* position);
GI_INLINE_DECL void parse_segment_done (Gst::Format * format = nullptr, gint64 * position = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, gint64> parse_segment_done () noexcept;

// void gst_event_parse_select_streams (GstEvent* event, GList** streams);
// void gst_event_parse_select_streams (::GstEvent* event, ::GList** streams);
GI_INLINE_DECL void parse_select_streams (std::vector<std::string> & streams) noexcept;
GI_INLINE_DECL std::vector<std::string> parse_select_streams () noexcept;

// void gst_event_parse_sink_message (GstEvent* event, GstMessage** msg);
// void gst_event_parse_sink_message (::GstEvent* event, ::GstMessage** msg);
GI_INLINE_DECL void parse_sink_message (Gst::Message & msg) noexcept;
GI_INLINE_DECL Gst::Message parse_sink_message () noexcept;

// void gst_event_parse_step (GstEvent* event, GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
// void gst_event_parse_step (::GstEvent* event, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
GI_INLINE_DECL void parse_step (Gst::Format * format = nullptr, guint64 * amount = nullptr, gdouble * rate = nullptr, bool * flush = nullptr, bool * intermediate = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, guint64, gdouble, bool, bool> parse_step () noexcept;

// void gst_event_parse_stream (GstEvent* event, GstStream** stream);
// void gst_event_parse_stream (::GstEvent* event, ::GstStream** stream);
GI_INLINE_DECL void parse_stream (Gst::Stream & stream) noexcept;
GI_INLINE_DECL Gst::Stream parse_stream () noexcept;

// void gst_event_parse_stream_collection (GstEvent* event, GstStreamCollection** collection);
// void gst_event_parse_stream_collection (::GstEvent* event, ::GstStreamCollection** collection);
GI_INLINE_DECL void parse_stream_collection (Gst::StreamCollection & collection) noexcept;
GI_INLINE_DECL Gst::StreamCollection parse_stream_collection () noexcept;

// void gst_event_parse_stream_flags (GstEvent* event, GstStreamFlags* flags);
// void gst_event_parse_stream_flags (::GstEvent* event, ::GstStreamFlags* flags);
GI_INLINE_DECL void parse_stream_flags (Gst::StreamFlags & flags) noexcept;
GI_INLINE_DECL Gst::StreamFlags parse_stream_flags () noexcept;

// void gst_event_parse_stream_group_done (GstEvent* event, guint* group_id);
// void gst_event_parse_stream_group_done (::GstEvent* event, guint* group_id);
GI_INLINE_DECL void parse_stream_group_done (guint & group_id) noexcept;
GI_INLINE_DECL guint parse_stream_group_done () noexcept;

// void gst_event_parse_stream_start (GstEvent* event, const gchar** stream_id);
// void gst_event_parse_stream_start (::GstEvent* event, const char** stream_id);
GI_INLINE_DECL void parse_stream_start (std::string & stream_id) noexcept;
GI_INLINE_DECL std::string parse_stream_start () noexcept;

// void gst_event_parse_tag (GstEvent* event, GstTagList** taglist);
// void gst_event_parse_tag (::GstEvent* event, ::GstTagList** taglist);
GI_INLINE_DECL void parse_tag (Gst::TagList & taglist) noexcept;
GI_INLINE_DECL Gst::TagList parse_tag () noexcept;

// void gst_event_parse_toc (GstEvent* event, GstToc** toc, gboolean* updated);
// void gst_event_parse_toc (::GstEvent* event, ::GstToc** toc, gboolean* updated);
GI_INLINE_DECL void parse_toc (Gst::Toc & toc, bool & updated) noexcept;
GI_INLINE_DECL std::tuple<Gst::Toc, bool> parse_toc () noexcept;

// void gst_event_parse_toc_select (GstEvent* event, gchar** uid);
// void gst_event_parse_toc_select (::GstEvent* event, char** uid);
GI_INLINE_DECL void parse_toc_select (std::string * uid = nullptr) noexcept;
GI_INLINE_DECL std::string parse_toc_select () noexcept;

// void gst_event_set_gap_flags (GstEvent* event, GstGapFlags flags);
// void gst_event_set_gap_flags (::GstEvent* event, ::GstGapFlags flags);
GI_INLINE_DECL void set_gap_flags (Gst::GapFlags flags) noexcept;

// void gst_event_set_group_id (GstEvent* event, guint group_id);
// void gst_event_set_group_id (::GstEvent* event, guint group_id);
GI_INLINE_DECL void set_group_id (guint group_id) noexcept;

// void gst_event_set_running_time_offset (GstEvent* event, gint64 offset);
// void gst_event_set_running_time_offset (::GstEvent* event, gint64 offset);
GI_INLINE_DECL void set_running_time_offset (gint64 offset) noexcept;

// void gst_event_set_seek_trickmode_interval (GstEvent* event, GstClockTime interval);
// void gst_event_set_seek_trickmode_interval (::GstEvent* event, ::GstClockTime interval);
GI_INLINE_DECL void set_seek_trickmode_interval (::GstClockTime interval) noexcept;

// void gst_event_set_seqnum (GstEvent* event, guint32 seqnum);
// void gst_event_set_seqnum (::GstEvent* event, guint32 seqnum);
GI_INLINE_DECL void set_seqnum (guint32 seqnum) noexcept;

// void gst_event_set_stream (GstEvent* event, GstStream* stream);
// void gst_event_set_stream (::GstEvent* event, ::GstStream* stream);
GI_INLINE_DECL void set_stream (Gst::Stream stream) noexcept;

// void gst_event_set_stream_flags (GstEvent* event, GstStreamFlags flags);
// void gst_event_set_stream_flags (::GstEvent* event, ::GstStreamFlags flags);
GI_INLINE_DECL void set_stream_flags (Gst::StreamFlags flags) noexcept;

// GstStructure* gst_event_writable_structure (GstEvent* event);
// ::GstStructure* gst_event_writable_structure (::GstEvent* event);
GI_INLINE_DECL Gst::Structure writable_structure () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/event_extra_def.hpp>)
#include <gst/event_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/event_extra.hpp>)
#include <gst/event_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Event : public GI_GST_EVENT_BASE
{ typedef GI_GST_EVENT_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstEvent>
{ typedef Gst::Event type; }; 

} // namespace repository

} // namespace gi

#endif
