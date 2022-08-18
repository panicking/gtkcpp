// AUTO-GENERATED

#ifndef _GI_GST_MESSAGE_HPP_
#define _GI_GST_MESSAGE_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Clock;
class Context;
class Device;
class Element;
class Object;
class Stream;
class StreamCollection;
class Structure;
class TagList;
class Toc;

class Message;

namespace base {


#define GI_GST_MESSAGE_BASE base::MessageBase
class MessageBase : public gi::detail::GBoxedWrapper<MessageBase, ::GstMessage>
{
typedef gi::detail::GBoxedWrapper<MessageBase, ::GstMessage> super_type;
public:

MessageBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_message_get_type(); } 

// ::GstMessageType Message::type (const ::GstMessage* obj);
// ::GstMessageType Message::type (const ::GstMessage* obj);
GI_INLINE_DECL Gst::MessageType type_ () const noexcept;

//  Message::type (::GstMessage* obj, ::GstMessageType _value);
// void Message::type (::GstMessage* obj, ::GstMessageType _value);
GI_INLINE_DECL void type_ (Gst::MessageType _value) noexcept;

// guint64 Message::timestamp (const ::GstMessage* obj);
// guint64 Message::timestamp (const ::GstMessage* obj);
GI_INLINE_DECL guint64 timestamp_ () const noexcept;

//  Message::timestamp (::GstMessage* obj, guint64 _value);
// void Message::timestamp (::GstMessage* obj, guint64 _value);
GI_INLINE_DECL void timestamp_ (guint64 _value) noexcept;

// ::GstObject* Message::src (const ::GstMessage* obj);
// ::GstObject* Message::src (const ::GstMessage* obj);
GI_INLINE_DECL Gst::Object src_ () const noexcept;

// guint32 Message::seqnum (const ::GstMessage* obj);
// guint32 Message::seqnum (const ::GstMessage* obj);
GI_INLINE_DECL guint32 seqnum_ () const noexcept;

//  Message::seqnum (::GstMessage* obj, guint32 _value);
// void Message::seqnum (::GstMessage* obj, guint32 _value);
GI_INLINE_DECL void seqnum_ (guint32 _value) noexcept;

// GstMessage* gst_message_new_application (GstObject* src, GstStructure* structure);
// ::GstMessage* gst_message_new_application (::GstObject* src, ::GstStructure* structure);
static GI_INLINE_DECL Gst::Message new_application (Gst::Object src, Gst::Structure structure) noexcept;
static GI_INLINE_DECL Gst::Message new_application (Gst::Structure structure) noexcept;

// GstMessage* gst_message_new_async_done (GstObject* src, GstClockTime running_time);
// ::GstMessage* gst_message_new_async_done (::GstObject* src, ::GstClockTime running_time);
static GI_INLINE_DECL Gst::Message new_async_done (Gst::Object src, ::GstClockTime running_time) noexcept;
static GI_INLINE_DECL Gst::Message new_async_done (::GstClockTime running_time) noexcept;

// GstMessage* gst_message_new_async_start (GstObject* src);
// ::GstMessage* gst_message_new_async_start (::GstObject* src);
static GI_INLINE_DECL Gst::Message new_async_start (Gst::Object src) noexcept;
static GI_INLINE_DECL Gst::Message new_async_start () noexcept;

// GstMessage* gst_message_new_buffering (GstObject* src, gint percent);
// ::GstMessage* gst_message_new_buffering (::GstObject* src, gint percent);
static GI_INLINE_DECL Gst::Message new_buffering (Gst::Object src, gint percent) noexcept;
static GI_INLINE_DECL Gst::Message new_buffering (gint percent) noexcept;

// GstMessage* gst_message_new_clock_lost (GstObject* src, GstClock* clock);
// ::GstMessage* gst_message_new_clock_lost (::GstObject* src, ::GstClock* clock);
static GI_INLINE_DECL Gst::Message new_clock_lost (Gst::Object src, Gst::Clock clock) noexcept;
static GI_INLINE_DECL Gst::Message new_clock_lost (Gst::Clock clock) noexcept;

// GstMessage* gst_message_new_clock_provide (GstObject* src, GstClock* clock, gboolean ready);
// ::GstMessage* gst_message_new_clock_provide (::GstObject* src, ::GstClock* clock, gboolean ready);
static GI_INLINE_DECL Gst::Message new_clock_provide (Gst::Object src, Gst::Clock clock, gboolean ready) noexcept;
static GI_INLINE_DECL Gst::Message new_clock_provide (Gst::Clock clock, gboolean ready) noexcept;

// GstMessage* gst_message_new_custom (GstMessageType type, GstObject* src, GstStructure* structure);
// ::GstMessage* gst_message_new_custom (::GstMessageType type, ::GstObject* src, ::GstStructure* structure);
static GI_INLINE_DECL Gst::Message new_custom (Gst::MessageType type, Gst::Object src, Gst::Structure structure) noexcept;
static GI_INLINE_DECL Gst::Message new_custom (Gst::MessageType type) noexcept;

// GstMessage* gst_message_new_device_added (GstObject* src, GstDevice* device);
// ::GstMessage* gst_message_new_device_added (::GstObject* src, ::GstDevice* device);
static GI_INLINE_DECL Gst::Message new_device_added (Gst::Object src, Gst::Device device) noexcept;

// GstMessage* gst_message_new_device_changed (GstObject* src, GstDevice* device, GstDevice* changed_device);
// ::GstMessage* gst_message_new_device_changed (::GstObject* src, ::GstDevice* device, ::GstDevice* changed_device);
static GI_INLINE_DECL Gst::Message new_device_changed (Gst::Object src, Gst::Device device, Gst::Device changed_device) noexcept;

// GstMessage* gst_message_new_device_removed (GstObject* src, GstDevice* device);
// ::GstMessage* gst_message_new_device_removed (::GstObject* src, ::GstDevice* device);
static GI_INLINE_DECL Gst::Message new_device_removed (Gst::Object src, Gst::Device device) noexcept;

// GstMessage* gst_message_new_duration_changed (GstObject* src);
// ::GstMessage* gst_message_new_duration_changed (::GstObject* src);
static GI_INLINE_DECL Gst::Message new_duration_changed (Gst::Object src) noexcept;
static GI_INLINE_DECL Gst::Message new_duration_changed () noexcept;

// GstMessage* gst_message_new_element (GstObject* src, GstStructure* structure);
// ::GstMessage* gst_message_new_element (::GstObject* src, ::GstStructure* structure);
static GI_INLINE_DECL Gst::Message new_element (Gst::Object src, Gst::Structure structure) noexcept;
static GI_INLINE_DECL Gst::Message new_element (Gst::Structure structure) noexcept;

// GstMessage* gst_message_new_eos (GstObject* src);
// ::GstMessage* gst_message_new_eos (::GstObject* src);
static GI_INLINE_DECL Gst::Message new_eos (Gst::Object src) noexcept;
static GI_INLINE_DECL Gst::Message new_eos () noexcept;

// GstMessage* gst_message_new_error (GstObject* src, GError* error, const gchar* debug);
// ::GstMessage* gst_message_new_error (::GstObject* src, ::GError* error, const char* debug);
static GI_INLINE_DECL Gst::Message new_error (Gst::Object src, GLib::Error error, const std::string & debug) noexcept;
static GI_INLINE_DECL Gst::Message new_error (GLib::Error error, const std::string & debug) noexcept;

// GstMessage* gst_message_new_error_with_details (GstObject* src, GError* error, const gchar* debug, GstStructure* details);
// ::GstMessage* gst_message_new_error_with_details (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
static GI_INLINE_DECL Gst::Message new_error_with_details (Gst::Object src, GLib::Error error, const std::string & debug, Gst::Structure details) noexcept;
static GI_INLINE_DECL Gst::Message new_error_with_details (GLib::Error error, const std::string & debug) noexcept;

// GstMessage* gst_message_new_have_context (GstObject* src, GstContext* context);
// ::GstMessage* gst_message_new_have_context (::GstObject* src, ::GstContext* context);
static GI_INLINE_DECL Gst::Message new_have_context (Gst::Object src, Gst::Context context) noexcept;
static GI_INLINE_DECL Gst::Message new_have_context (Gst::Context context) noexcept;

// GstMessage* gst_message_new_info (GstObject* src, GError* error, const gchar* debug);
// ::GstMessage* gst_message_new_info (::GstObject* src, ::GError* error, const char* debug);
static GI_INLINE_DECL Gst::Message new_info (Gst::Object src, GLib::Error error, const std::string & debug) noexcept;
static GI_INLINE_DECL Gst::Message new_info (GLib::Error error, const std::string & debug) noexcept;

// GstMessage* gst_message_new_info_with_details (GstObject* src, GError* error, const gchar* debug, GstStructure* details);
// ::GstMessage* gst_message_new_info_with_details (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
static GI_INLINE_DECL Gst::Message new_info_with_details (Gst::Object src, GLib::Error error, const std::string & debug, Gst::Structure details) noexcept;
static GI_INLINE_DECL Gst::Message new_info_with_details (GLib::Error error, const std::string & debug) noexcept;

// GstMessage* gst_message_new_instant_rate_request (GstObject* src, gdouble rate_multiplier);
// ::GstMessage* gst_message_new_instant_rate_request (::GstObject* src, gdouble rate_multiplier);
static GI_INLINE_DECL Gst::Message new_instant_rate_request (Gst::Object src, gdouble rate_multiplier) noexcept;

// GstMessage* gst_message_new_latency (GstObject* src);
// ::GstMessage* gst_message_new_latency (::GstObject* src);
static GI_INLINE_DECL Gst::Message new_latency (Gst::Object src) noexcept;
static GI_INLINE_DECL Gst::Message new_latency () noexcept;

// GstMessage* gst_message_new_need_context (GstObject* src, const gchar* context_type);
// ::GstMessage* gst_message_new_need_context (::GstObject* src, const char* context_type);
static GI_INLINE_DECL Gst::Message new_need_context (Gst::Object src, const std::string & context_type) noexcept;
static GI_INLINE_DECL Gst::Message new_need_context (const std::string & context_type) noexcept;

// GstMessage* gst_message_new_new_clock (GstObject* src, GstClock* clock);
// ::GstMessage* gst_message_new_new_clock (::GstObject* src, ::GstClock* clock);
static GI_INLINE_DECL Gst::Message new_new_clock (Gst::Object src, Gst::Clock clock) noexcept;
static GI_INLINE_DECL Gst::Message new_new_clock (Gst::Clock clock) noexcept;

// GstMessage* gst_message_new_progress (GstObject* src, GstProgressType type, const gchar* code, const gchar* text);
// ::GstMessage* gst_message_new_progress (::GstObject* src, ::GstProgressType type, const char* code, const char* text);
static GI_INLINE_DECL Gst::Message new_progress (Gst::Object src, Gst::ProgressType type, const std::string & code, const std::string & text) noexcept;

// GstMessage* gst_message_new_property_notify (GstObject* src, const gchar* property_name, GValue* val);
// ::GstMessage* gst_message_new_property_notify (::GstObject* src, const char* property_name, ::GValue* val);
static GI_INLINE_DECL Gst::Message new_property_notify (Gst::Object src, const std::string & property_name, GObject::Value val) noexcept;
static GI_INLINE_DECL Gst::Message new_property_notify (Gst::Object src, const std::string & property_name) noexcept;

// GstMessage* gst_message_new_qos (GstObject* src, gboolean live, guint64 running_time, guint64 stream_time, guint64 timestamp, guint64 duration);
// ::GstMessage* gst_message_new_qos (::GstObject* src, gboolean live, guint64 running_time, guint64 stream_time, guint64 timestamp, guint64 duration);
static GI_INLINE_DECL Gst::Message new_qos (Gst::Object src, gboolean live, guint64 running_time, guint64 stream_time, guint64 timestamp, guint64 duration) noexcept;

// GstMessage* gst_message_new_redirect (GstObject* src, const gchar* location, GstTagList* tag_list, const GstStructure* entry_struct);
// ::GstMessage* gst_message_new_redirect (::GstObject* src, const char* location, ::GstTagList* tag_list, const ::GstStructure* entry_struct);
static GI_INLINE_DECL Gst::Message new_redirect (Gst::Object src, const std::string & location, Gst::TagList tag_list, const Gst::Structure & entry_struct) noexcept;
static GI_INLINE_DECL Gst::Message new_redirect (Gst::Object src, const std::string & location) noexcept;

// GstMessage* gst_message_new_request_state (GstObject* src, GstState state);
// ::GstMessage* gst_message_new_request_state (::GstObject* src, ::GstState state);
static GI_INLINE_DECL Gst::Message new_request_state (Gst::Object src, Gst::State state) noexcept;
static GI_INLINE_DECL Gst::Message new_request_state (Gst::State state) noexcept;

// GstMessage* gst_message_new_reset_time (GstObject* src, GstClockTime running_time);
// ::GstMessage* gst_message_new_reset_time (::GstObject* src, ::GstClockTime running_time);
static GI_INLINE_DECL Gst::Message new_reset_time (Gst::Object src, ::GstClockTime running_time) noexcept;
static GI_INLINE_DECL Gst::Message new_reset_time (::GstClockTime running_time) noexcept;

// GstMessage* gst_message_new_segment_done (GstObject* src, GstFormat format, gint64 position);
// ::GstMessage* gst_message_new_segment_done (::GstObject* src, ::GstFormat format, gint64 position);
static GI_INLINE_DECL Gst::Message new_segment_done (Gst::Object src, Gst::Format format, gint64 position) noexcept;
static GI_INLINE_DECL Gst::Message new_segment_done (Gst::Format format, gint64 position) noexcept;

// GstMessage* gst_message_new_segment_start (GstObject* src, GstFormat format, gint64 position);
// ::GstMessage* gst_message_new_segment_start (::GstObject* src, ::GstFormat format, gint64 position);
static GI_INLINE_DECL Gst::Message new_segment_start (Gst::Object src, Gst::Format format, gint64 position) noexcept;
static GI_INLINE_DECL Gst::Message new_segment_start (Gst::Format format, gint64 position) noexcept;

// GstMessage* gst_message_new_state_changed (GstObject* src, GstState oldstate, GstState newstate, GstState pending);
// ::GstMessage* gst_message_new_state_changed (::GstObject* src, ::GstState oldstate, ::GstState newstate, ::GstState pending);
static GI_INLINE_DECL Gst::Message new_state_changed (Gst::Object src, Gst::State oldstate, Gst::State newstate, Gst::State pending) noexcept;
static GI_INLINE_DECL Gst::Message new_state_changed (Gst::State oldstate, Gst::State newstate, Gst::State pending) noexcept;

// GstMessage* gst_message_new_state_dirty (GstObject* src);
// ::GstMessage* gst_message_new_state_dirty (::GstObject* src);
static GI_INLINE_DECL Gst::Message new_state_dirty (Gst::Object src) noexcept;
static GI_INLINE_DECL Gst::Message new_state_dirty () noexcept;

// GstMessage* gst_message_new_step_done (GstObject* src, GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate, guint64 duration, gboolean eos);
// ::GstMessage* gst_message_new_step_done (::GstObject* src, ::GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate, guint64 duration, gboolean eos);
static GI_INLINE_DECL Gst::Message new_step_done (Gst::Object src, Gst::Format format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate, guint64 duration, gboolean eos) noexcept;

// GstMessage* gst_message_new_step_start (GstObject* src, gboolean active, GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate);
// ::GstMessage* gst_message_new_step_start (::GstObject* src, gboolean active, ::GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate);
static GI_INLINE_DECL Gst::Message new_step_start (Gst::Object src, gboolean active, Gst::Format format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate) noexcept;

// GstMessage* gst_message_new_stream_collection (GstObject* src, GstStreamCollection* collection);
// ::GstMessage* gst_message_new_stream_collection (::GstObject* src, ::GstStreamCollection* collection);
static GI_INLINE_DECL Gst::Message new_stream_collection (Gst::Object src, Gst::StreamCollection collection) noexcept;

// GstMessage* gst_message_new_stream_start (GstObject* src);
// ::GstMessage* gst_message_new_stream_start (::GstObject* src);
static GI_INLINE_DECL Gst::Message new_stream_start (Gst::Object src) noexcept;
static GI_INLINE_DECL Gst::Message new_stream_start () noexcept;

// GstMessage* gst_message_new_stream_status (GstObject* src, GstStreamStatusType type, GstElement* owner);
// ::GstMessage* gst_message_new_stream_status (::GstObject* src, ::GstStreamStatusType type, ::GstElement* owner);
static GI_INLINE_DECL Gst::Message new_stream_status (Gst::Object src, Gst::StreamStatusType type, Gst::Element owner) noexcept;

// GstMessage* gst_message_new_streams_selected (GstObject* src, GstStreamCollection* collection);
// ::GstMessage* gst_message_new_streams_selected (::GstObject* src, ::GstStreamCollection* collection);
static GI_INLINE_DECL Gst::Message new_streams_selected (Gst::Object src, Gst::StreamCollection collection) noexcept;

// GstMessage* gst_message_new_structure_change (GstObject* src, GstStructureChangeType type, GstElement* owner, gboolean busy);
// ::GstMessage* gst_message_new_structure_change (::GstObject* src, ::GstStructureChangeType type, ::GstElement* owner, gboolean busy);
static GI_INLINE_DECL Gst::Message new_structure_change (Gst::Object src, Gst::StructureChangeType type, Gst::Element owner, gboolean busy) noexcept;
static GI_INLINE_DECL Gst::Message new_structure_change (Gst::StructureChangeType type, Gst::Element owner, gboolean busy) noexcept;

// GstMessage* gst_message_new_tag (GstObject* src, GstTagList* tag_list);
// ::GstMessage* gst_message_new_tag (::GstObject* src, ::GstTagList* tag_list);
static GI_INLINE_DECL Gst::Message new_tag (Gst::Object src, Gst::TagList tag_list) noexcept;
static GI_INLINE_DECL Gst::Message new_tag (Gst::TagList tag_list) noexcept;

// GstMessage* gst_message_new_toc (GstObject* src, GstToc* toc, gboolean updated);
// ::GstMessage* gst_message_new_toc (::GstObject* src, ::GstToc* toc, gboolean updated);
static GI_INLINE_DECL Gst::Message new_toc (Gst::Object src, Gst::Toc toc, gboolean updated) noexcept;

// GstMessage* gst_message_new_warning (GstObject* src, GError* error, const gchar* debug);
// ::GstMessage* gst_message_new_warning (::GstObject* src, ::GError* error, const char* debug);
static GI_INLINE_DECL Gst::Message new_warning (Gst::Object src, GLib::Error error, const std::string & debug) noexcept;
static GI_INLINE_DECL Gst::Message new_warning (GLib::Error error, const std::string & debug) noexcept;

// GstMessage* gst_message_new_warning_with_details (GstObject* src, GError* error, const gchar* debug, GstStructure* details);
// ::GstMessage* gst_message_new_warning_with_details (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
static GI_INLINE_DECL Gst::Message new_warning_with_details (Gst::Object src, GLib::Error error, const std::string & debug, Gst::Structure details) noexcept;
static GI_INLINE_DECL Gst::Message new_warning_with_details (GLib::Error error, const std::string & debug) noexcept;

// void gst_message_add_redirect_entry (GstMessage* message, const gchar* location, GstTagList* tag_list, const GstStructure* entry_struct);
// void gst_message_add_redirect_entry (::GstMessage* message, const char* location, ::GstTagList* tag_list, const ::GstStructure* entry_struct);
GI_INLINE_DECL void add_redirect_entry (const std::string & location, Gst::TagList tag_list, const Gst::Structure & entry_struct) noexcept;
GI_INLINE_DECL void add_redirect_entry (const std::string & location) noexcept;

// GstMessage* gst_message_copy (const GstMessage* msg);
// ::GstMessage* gst_message_copy (const ::GstMessage* msg);
GI_INLINE_DECL Gst::Message copy () const noexcept;

// gsize gst_message_get_num_redirect_entries (GstMessage* message);
// gsize gst_message_get_num_redirect_entries (::GstMessage* message);
GI_INLINE_DECL gsize get_num_redirect_entries () noexcept;

// guint32 gst_message_get_seqnum (GstMessage* message);
// guint32 gst_message_get_seqnum (::GstMessage* message);
GI_INLINE_DECL guint32 get_seqnum () noexcept;

// const GValue* gst_message_get_stream_status_object (GstMessage* message);
// const ::GValue* gst_message_get_stream_status_object (::GstMessage* message);
GI_INLINE_DECL GObject::Value get_stream_status_object () noexcept;

// const GstStructure* gst_message_get_structure (GstMessage* message);
// const ::GstStructure* gst_message_get_structure (::GstMessage* message);
GI_INLINE_DECL Gst::Structure get_structure () noexcept;

// gboolean gst_message_has_name (GstMessage* message, const gchar* name);
// gboolean gst_message_has_name (::GstMessage* message, const char* name);
GI_INLINE_DECL bool has_name (const std::string & name) noexcept;

// void gst_message_parse_async_done (GstMessage* message, GstClockTime* running_time);
// void gst_message_parse_async_done (::GstMessage* message, ::GstClockTime* running_time);
GI_INLINE_DECL void parse_async_done (Gst::ClockTime * running_time = nullptr) noexcept;
GI_INLINE_DECL Gst::ClockTime parse_async_done () noexcept;

// void gst_message_parse_buffering (GstMessage* message, gint* percent);
// void gst_message_parse_buffering (::GstMessage* message, gint* percent);
GI_INLINE_DECL void parse_buffering (gint * percent = nullptr) noexcept;
GI_INLINE_DECL gint parse_buffering () noexcept;

// void gst_message_parse_buffering_stats (GstMessage* message, GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
// void gst_message_parse_buffering_stats (::GstMessage* message, ::GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
GI_INLINE_DECL void parse_buffering_stats (Gst::BufferingMode * mode = nullptr, gint * avg_in = nullptr, gint * avg_out = nullptr, gint64 * buffering_left = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::BufferingMode, gint, gint, gint64> parse_buffering_stats () noexcept;

// void gst_message_parse_clock_lost (GstMessage* message, GstClock** clock);
// void gst_message_parse_clock_lost (::GstMessage* message, ::GstClock** clock);
GI_INLINE_DECL void parse_clock_lost (Gst::Clock * clock = nullptr) noexcept;
GI_INLINE_DECL Gst::Clock parse_clock_lost () noexcept;

// void gst_message_parse_clock_provide (GstMessage* message, GstClock** clock, gboolean* ready);
// void gst_message_parse_clock_provide (::GstMessage* message, ::GstClock** clock, gboolean* ready);
GI_INLINE_DECL void parse_clock_provide (Gst::Clock * clock = nullptr, bool * ready = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Clock, bool> parse_clock_provide () noexcept;

// gboolean gst_message_parse_context_type (GstMessage* message, const gchar** context_type);
// gboolean gst_message_parse_context_type (::GstMessage* message, const char** context_type);
GI_INLINE_DECL bool parse_context_type (std::string * context_type = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> parse_context_type () noexcept;

// void gst_message_parse_device_added (GstMessage* message, GstDevice** device);
// void gst_message_parse_device_added (::GstMessage* message, ::GstDevice** device);
GI_INLINE_DECL void parse_device_added (Gst::Device * device = nullptr) noexcept;
GI_INLINE_DECL Gst::Device parse_device_added () noexcept;

// void gst_message_parse_device_changed (GstMessage* message, GstDevice** device, GstDevice** changed_device);
// void gst_message_parse_device_changed (::GstMessage* message, ::GstDevice** device, ::GstDevice** changed_device);
GI_INLINE_DECL void parse_device_changed (Gst::Device * device = nullptr, Gst::Device * changed_device = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Device, Gst::Device> parse_device_changed () noexcept;

// void gst_message_parse_device_removed (GstMessage* message, GstDevice** device);
// void gst_message_parse_device_removed (::GstMessage* message, ::GstDevice** device);
GI_INLINE_DECL void parse_device_removed (Gst::Device * device = nullptr) noexcept;
GI_INLINE_DECL Gst::Device parse_device_removed () noexcept;

// void gst_message_parse_error (GstMessage* message, GError** gerror, gchar** debug);
// void gst_message_parse_error (::GstMessage* message, ::GError** gerror, char** debug);
GI_INLINE_DECL void parse_error (GLib::Error * gerror = nullptr, std::string * debug = nullptr) noexcept;
GI_INLINE_DECL std::tuple<GLib::Error, std::string> parse_error () noexcept;

// void gst_message_parse_error_details (GstMessage* message, const GstStructure** structure);
// void gst_message_parse_error_details (::GstMessage* message, const ::GstStructure** structure);
GI_INLINE_DECL void parse_error_details (Gst::Structure & structure) noexcept;
GI_INLINE_DECL Gst::Structure parse_error_details () noexcept;

// gboolean gst_message_parse_group_id (GstMessage* message, guint* group_id);
// gboolean gst_message_parse_group_id (::GstMessage* message, guint* group_id);
GI_INLINE_DECL bool parse_group_id (guint * group_id = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> parse_group_id () noexcept;

// void gst_message_parse_have_context (GstMessage* message, GstContext** context);
// void gst_message_parse_have_context (::GstMessage* message, ::GstContext** context);
GI_INLINE_DECL void parse_have_context (Gst::Context * context = nullptr) noexcept;
GI_INLINE_DECL Gst::Context parse_have_context () noexcept;

// void gst_message_parse_info (GstMessage* message, GError** gerror, gchar** debug);
// void gst_message_parse_info (::GstMessage* message, ::GError** gerror, char** debug);
GI_INLINE_DECL void parse_info (GLib::Error * gerror = nullptr, std::string * debug = nullptr) noexcept;
GI_INLINE_DECL std::tuple<GLib::Error, std::string> parse_info () noexcept;

// void gst_message_parse_info_details (GstMessage* message, const GstStructure** structure);
// void gst_message_parse_info_details (::GstMessage* message, const ::GstStructure** structure);
GI_INLINE_DECL void parse_info_details (Gst::Structure & structure) noexcept;
GI_INLINE_DECL Gst::Structure parse_info_details () noexcept;

// void gst_message_parse_instant_rate_request (GstMessage* message, gdouble* rate_multiplier);
// void gst_message_parse_instant_rate_request (::GstMessage* message, gdouble* rate_multiplier);
GI_INLINE_DECL void parse_instant_rate_request (gdouble * rate_multiplier = nullptr) noexcept;
GI_INLINE_DECL gdouble parse_instant_rate_request () noexcept;

// void gst_message_parse_new_clock (GstMessage* message, GstClock** clock);
// void gst_message_parse_new_clock (::GstMessage* message, ::GstClock** clock);
GI_INLINE_DECL void parse_new_clock (Gst::Clock * clock = nullptr) noexcept;
GI_INLINE_DECL Gst::Clock parse_new_clock () noexcept;

// void gst_message_parse_progress (GstMessage* message, GstProgressType* type, gchar** code, gchar** text);
// void gst_message_parse_progress (::GstMessage* message, ::GstProgressType* type, char** code, char** text);
GI_INLINE_DECL void parse_progress (Gst::ProgressType * type = nullptr, std::string * code = nullptr, std::string * text = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::ProgressType, std::string, std::string> parse_progress () noexcept;

// void gst_message_parse_property_notify (GstMessage* message, GstObject** object, const gchar** property_name, const GValue** property_value);
// void gst_message_parse_property_notify (::GstMessage* message, ::GstObject** object, const char** property_name, const ::GValue** property_value);
GI_INLINE_DECL void parse_property_notify (Gst::Object * object = nullptr, std::string * property_name = nullptr, GObject::Value * property_value = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Object, std::string, GObject::Value> parse_property_notify () noexcept;

// void gst_message_parse_qos (GstMessage* message, gboolean* live, guint64* running_time, guint64* stream_time, guint64* timestamp, guint64* duration);
// void gst_message_parse_qos (::GstMessage* message, gboolean* live, guint64* running_time, guint64* stream_time, guint64* timestamp, guint64* duration);
GI_INLINE_DECL void parse_qos (bool * live = nullptr, guint64 * running_time = nullptr, guint64 * stream_time = nullptr, guint64 * timestamp = nullptr, guint64 * duration = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, guint64, guint64, guint64, guint64> parse_qos () noexcept;

// void gst_message_parse_qos_stats (GstMessage* message, GstFormat* format, guint64* processed, guint64* dropped);
// void gst_message_parse_qos_stats (::GstMessage* message, ::GstFormat* format, guint64* processed, guint64* dropped);
GI_INLINE_DECL void parse_qos_stats (Gst::Format * format = nullptr, guint64 * processed = nullptr, guint64 * dropped = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, guint64, guint64> parse_qos_stats () noexcept;

// void gst_message_parse_qos_values (GstMessage* message, gint64* jitter, gdouble* proportion, gint* quality);
// void gst_message_parse_qos_values (::GstMessage* message, gint64* jitter, gdouble* proportion, gint* quality);
GI_INLINE_DECL void parse_qos_values (gint64 * jitter = nullptr, gdouble * proportion = nullptr, gint * quality = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint64, gdouble, gint> parse_qos_values () noexcept;

// void gst_message_parse_redirect_entry (GstMessage* message, gsize entry_index, const gchar** location, GstTagList** tag_list, const GstStructure** entry_struct);
// void gst_message_parse_redirect_entry (::GstMessage* message, gsize entry_index, const char** location, ::GstTagList** tag_list, const ::GstStructure** entry_struct);
GI_INLINE_DECL void parse_redirect_entry (gsize entry_index, std::string * location = nullptr, Gst::TagList * tag_list = nullptr, Gst::Structure * entry_struct = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::string, Gst::TagList, Gst::Structure> parse_redirect_entry (gsize entry_index) noexcept;

// void gst_message_parse_request_state (GstMessage* message, GstState* state);
// void gst_message_parse_request_state (::GstMessage* message, ::GstState* state);
GI_INLINE_DECL void parse_request_state (Gst::State * state = nullptr) noexcept;
GI_INLINE_DECL Gst::State parse_request_state () noexcept;

// void gst_message_parse_reset_time (GstMessage* message, GstClockTime* running_time);
// void gst_message_parse_reset_time (::GstMessage* message, ::GstClockTime* running_time);
GI_INLINE_DECL void parse_reset_time (Gst::ClockTime * running_time = nullptr) noexcept;
GI_INLINE_DECL Gst::ClockTime parse_reset_time () noexcept;

// void gst_message_parse_segment_done (GstMessage* message, GstFormat* format, gint64* position);
// void gst_message_parse_segment_done (::GstMessage* message, ::GstFormat* format, gint64* position);
GI_INLINE_DECL void parse_segment_done (Gst::Format * format = nullptr, gint64 * position = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, gint64> parse_segment_done () noexcept;

// void gst_message_parse_segment_start (GstMessage* message, GstFormat* format, gint64* position);
// void gst_message_parse_segment_start (::GstMessage* message, ::GstFormat* format, gint64* position);
GI_INLINE_DECL void parse_segment_start (Gst::Format * format = nullptr, gint64 * position = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, gint64> parse_segment_start () noexcept;

// void gst_message_parse_state_changed (GstMessage* message, GstState* oldstate, GstState* newstate, GstState* pending);
// void gst_message_parse_state_changed (::GstMessage* message, ::GstState* oldstate, ::GstState* newstate, ::GstState* pending);
GI_INLINE_DECL void parse_state_changed (Gst::State * oldstate = nullptr, Gst::State * newstate = nullptr, Gst::State * pending = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::State, Gst::State, Gst::State> parse_state_changed () noexcept;

// void gst_message_parse_step_done (GstMessage* message, GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate, guint64* duration, gboolean* eos);
// void gst_message_parse_step_done (::GstMessage* message, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate, guint64* duration, gboolean* eos);
GI_INLINE_DECL void parse_step_done (Gst::Format * format = nullptr, guint64 * amount = nullptr, gdouble * rate = nullptr, bool * flush = nullptr, bool * intermediate = nullptr, guint64 * duration = nullptr, bool * eos = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::Format, guint64, gdouble, bool, bool, guint64, bool> parse_step_done () noexcept;

// void gst_message_parse_step_start (GstMessage* message, gboolean* active, GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
// void gst_message_parse_step_start (::GstMessage* message, gboolean* active, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
GI_INLINE_DECL void parse_step_start (bool * active = nullptr, Gst::Format * format = nullptr, guint64 * amount = nullptr, gdouble * rate = nullptr, bool * flush = nullptr, bool * intermediate = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::Format, guint64, gdouble, bool, bool> parse_step_start () noexcept;

// void gst_message_parse_stream_collection (GstMessage* message, GstStreamCollection** collection);
// void gst_message_parse_stream_collection (::GstMessage* message, ::GstStreamCollection** collection);
GI_INLINE_DECL void parse_stream_collection (Gst::StreamCollection * collection = nullptr) noexcept;
GI_INLINE_DECL Gst::StreamCollection parse_stream_collection () noexcept;

// void gst_message_parse_stream_status (GstMessage* message, GstStreamStatusType* type, GstElement** owner);
// void gst_message_parse_stream_status (::GstMessage* message, ::GstStreamStatusType* type, ::GstElement** owner);
GI_INLINE_DECL void parse_stream_status (Gst::StreamStatusType & type, Gst::Element & owner) noexcept;
GI_INLINE_DECL std::tuple<Gst::StreamStatusType, Gst::Element> parse_stream_status () noexcept;

// void gst_message_parse_streams_selected (GstMessage* message, GstStreamCollection** collection);
// void gst_message_parse_streams_selected (::GstMessage* message, ::GstStreamCollection** collection);
GI_INLINE_DECL void parse_streams_selected (Gst::StreamCollection * collection = nullptr) noexcept;
GI_INLINE_DECL Gst::StreamCollection parse_streams_selected () noexcept;

// void gst_message_parse_structure_change (GstMessage* message, GstStructureChangeType* type, GstElement** owner, gboolean* busy);
// void gst_message_parse_structure_change (::GstMessage* message, ::GstStructureChangeType* type, ::GstElement** owner, gboolean* busy);
GI_INLINE_DECL void parse_structure_change (Gst::StructureChangeType & type, Gst::Element * owner = nullptr, bool * busy = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::StructureChangeType, Gst::Element, bool> parse_structure_change () noexcept;

// void gst_message_parse_tag (GstMessage* message, GstTagList** tag_list);
// void gst_message_parse_tag (::GstMessage* message, ::GstTagList** tag_list);
GI_INLINE_DECL void parse_tag (Gst::TagList & tag_list) noexcept;
GI_INLINE_DECL Gst::TagList parse_tag () noexcept;

// void gst_message_parse_toc (GstMessage* message, GstToc** toc, gboolean* updated);
// void gst_message_parse_toc (::GstMessage* message, ::GstToc** toc, gboolean* updated);
GI_INLINE_DECL void parse_toc (Gst::Toc & toc, bool & updated) noexcept;
GI_INLINE_DECL std::tuple<Gst::Toc, bool> parse_toc () noexcept;

// void gst_message_parse_warning (GstMessage* message, GError** gerror, gchar** debug);
// void gst_message_parse_warning (::GstMessage* message, ::GError** gerror, char** debug);
GI_INLINE_DECL void parse_warning (GLib::Error * gerror = nullptr, std::string * debug = nullptr) noexcept;
GI_INLINE_DECL std::tuple<GLib::Error, std::string> parse_warning () noexcept;

// void gst_message_parse_warning_details (GstMessage* message, const GstStructure** structure);
// void gst_message_parse_warning_details (::GstMessage* message, const ::GstStructure** structure);
GI_INLINE_DECL void parse_warning_details (Gst::Structure & structure) noexcept;
GI_INLINE_DECL Gst::Structure parse_warning_details () noexcept;

// void gst_message_set_buffering_stats (GstMessage* message, GstBufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left);
// void gst_message_set_buffering_stats (::GstMessage* message, ::GstBufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left);
GI_INLINE_DECL void set_buffering_stats (Gst::BufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left) noexcept;

// void gst_message_set_group_id (GstMessage* message, guint group_id);
// void gst_message_set_group_id (::GstMessage* message, guint group_id);
GI_INLINE_DECL void set_group_id (guint group_id) noexcept;

// void gst_message_set_qos_stats (GstMessage* message, GstFormat format, guint64 processed, guint64 dropped);
// void gst_message_set_qos_stats (::GstMessage* message, ::GstFormat format, guint64 processed, guint64 dropped);
GI_INLINE_DECL void set_qos_stats (Gst::Format format, guint64 processed, guint64 dropped) noexcept;

// void gst_message_set_qos_values (GstMessage* message, gint64 jitter, gdouble proportion, gint quality);
// void gst_message_set_qos_values (::GstMessage* message, gint64 jitter, gdouble proportion, gint quality);
GI_INLINE_DECL void set_qos_values (gint64 jitter, gdouble proportion, gint quality) noexcept;

// void gst_message_set_seqnum (GstMessage* message, guint32 seqnum);
// void gst_message_set_seqnum (::GstMessage* message, guint32 seqnum);
GI_INLINE_DECL void set_seqnum (guint32 seqnum) noexcept;

// void gst_message_set_stream_status_object (GstMessage* message, const GValue* object);
// void gst_message_set_stream_status_object (::GstMessage* message, const ::GValue* object);
GI_INLINE_DECL void set_stream_status_object (const GObject::Value & object) noexcept;

// void gst_message_streams_selected_add (GstMessage* message, GstStream* stream);
// void gst_message_streams_selected_add (::GstMessage* message, ::GstStream* stream);
GI_INLINE_DECL void streams_selected_add (Gst::Stream stream) noexcept;

// guint gst_message_streams_selected_get_size (GstMessage* message);
// guint gst_message_streams_selected_get_size (::GstMessage* message);
GI_INLINE_DECL guint streams_selected_get_size () noexcept;

// GstStream* gst_message_streams_selected_get_stream (GstMessage* message, guint idx);
// ::GstStream* gst_message_streams_selected_get_stream (::GstMessage* message, guint idx);
GI_INLINE_DECL Gst::Stream streams_selected_get_stream (guint idx) noexcept;

// GstStructure* gst_message_writable_structure (GstMessage* message);
// ::GstStructure* gst_message_writable_structure (::GstMessage* message);
GI_INLINE_DECL Gst::Structure writable_structure () noexcept;

// gboolean gst_message_replace (GstMessage** old_message, GstMessage* new_message);
// gboolean gst_message_replace (::GstMessage** old_message, ::GstMessage* new_message);
static GI_INLINE_DECL bool replace (Gst::Message * old_message, Gst::Message new_message) noexcept;
static GI_INLINE_DECL bool replace (Gst::Message * old_message = nullptr) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/message_extra_def.hpp>)
#include <gst/message_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/message_extra.hpp>)
#include <gst/message_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Message : public GI_GST_MESSAGE_BASE
{ typedef GI_GST_MESSAGE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstMessage>
{ typedef Gst::Message type; }; 

} // namespace repository

} // namespace gi

#endif
