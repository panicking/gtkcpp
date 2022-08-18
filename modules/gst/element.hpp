// AUTO-GENERATED

#ifndef _GI_GST_ELEMENT_HPP_
#define _GI_GST_ELEMENT_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Bus;
class Caps;
class Clock;
class Context;
class ElementFactory;
class Event;
class Iterator;
class Message;
class Pad;
class PadTemplate;
class Plugin;
class Query;
class Structure;

class Element;

namespace base {


#define GI_GST_ELEMENT_BASE base::ElementBase
class ElementBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstElement BaseObjectType;

ElementBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_element_get_type(); } 

// GstElement* gst_element_make_from_uri (const GstURIType type, const gchar* uri, const gchar* elementname, GError ** error);
// ::GstElement* gst_element_make_from_uri (const ::GstURIType type, const char* uri, const char* elementname, GError ** error);
static GI_INLINE_DECL Gst::Element make_from_uri (Gst::URIType type, const std::string & uri, const std::string & elementname);
static GI_INLINE_DECL Gst::Element make_from_uri (Gst::URIType type, const std::string & uri);
static GI_INLINE_DECL Gst::Element make_from_uri (Gst::URIType type, const std::string & uri, const std::string & elementname, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gst::Element make_from_uri (Gst::URIType type, const std::string & uri, GLib::Error * _error) noexcept;

// gboolean gst_element_register (GstPlugin* plugin, const gchar* name, guint rank, GType type);
// gboolean gst_element_register (::GstPlugin* plugin, const char* name, guint rank, GType type);
static GI_INLINE_DECL bool register_ (Gst::Plugin plugin, const std::string & name, guint rank, GType type) noexcept;
static GI_INLINE_DECL bool register_ (const std::string & name, guint rank, GType type) noexcept;

// const gchar* gst_element_state_change_return_get_name (GstStateChangeReturn state_ret);
// const char* gst_element_state_change_return_get_name (::GstStateChangeReturn state_ret);
static GI_INLINE_DECL std::string state_change_return_get_name (Gst::StateChangeReturn state_ret) noexcept;

// const gchar* gst_element_state_get_name (GstState state);
// const char* gst_element_state_get_name (::GstState state);
static GI_INLINE_DECL std::string state_get_name (Gst::State state) noexcept;

// void gst_element_type_set_skip_documentation (GType type);
// void gst_element_type_set_skip_documentation (GType type);
static GI_INLINE_DECL void type_set_skip_documentation (GType type) noexcept;

// void gst_element_abort_state (GstElement* element);
// void gst_element_abort_state (::GstElement* element);
GI_INLINE_DECL void abort_state () noexcept;

// gboolean gst_element_add_pad (GstElement* element, GstPad* pad);
// gboolean gst_element_add_pad (::GstElement* element, ::GstPad* pad);
GI_INLINE_DECL bool add_pad (Gst::Pad pad) noexcept;

// gulong gst_element_add_property_deep_notify_watch (GstElement* element, const gchar* property_name, gboolean include_value);
// gulong gst_element_add_property_deep_notify_watch (::GstElement* element, const char* property_name, gboolean include_value);
GI_INLINE_DECL gulong add_property_deep_notify_watch (const std::string & property_name, gboolean include_value) noexcept;
GI_INLINE_DECL gulong add_property_deep_notify_watch (gboolean include_value) noexcept;

// gulong gst_element_add_property_notify_watch (GstElement* element, const gchar* property_name, gboolean include_value);
// gulong gst_element_add_property_notify_watch (::GstElement* element, const char* property_name, gboolean include_value);
GI_INLINE_DECL gulong add_property_notify_watch (const std::string & property_name, gboolean include_value) noexcept;
GI_INLINE_DECL gulong add_property_notify_watch (gboolean include_value) noexcept;

// void gst_element_call_async (GstElement* element, GstElementCallAsyncFunc func, gpointer user_data, GDestroyNotify destroy_notify);
// void gst_element_call_async (::GstElement* element, Gst::ElementCallAsyncFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
GI_INLINE_DECL void call_async (Gst::ElementCallAsyncFunc func) noexcept;

// GstStateChangeReturn gst_element_change_state (GstElement* element, GstStateChange transition);
// ::GstStateChangeReturn gst_element_change_state (::GstElement* element, ::GstStateChange transition);
GI_INLINE_DECL Gst::StateChangeReturn change_state (Gst::StateChange transition) noexcept;

// GstStateChangeReturn gst_element_continue_state (GstElement* element, GstStateChangeReturn ret);
// ::GstStateChangeReturn gst_element_continue_state (::GstElement* element, ::GstStateChangeReturn ret);
GI_INLINE_DECL Gst::StateChangeReturn continue_state (Gst::StateChangeReturn ret) noexcept;

// void gst_element_create_all_pads (GstElement* element);
// void gst_element_create_all_pads (::GstElement* element);
GI_INLINE_DECL void create_all_pads () noexcept;

// gboolean gst_element_foreach_pad (GstElement* element, GstElementForeachPadFunc func, gpointer user_data);
// gboolean gst_element_foreach_pad (::GstElement* element, Gst::ElementForeachPadFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL bool foreach_pad (Gst::ElementForeachPadFunc func) noexcept;

// gboolean gst_element_foreach_sink_pad (GstElement* element, GstElementForeachPadFunc func, gpointer user_data);
// gboolean gst_element_foreach_sink_pad (::GstElement* element, Gst::ElementForeachPadFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL bool foreach_sink_pad (Gst::ElementForeachPadFunc func) noexcept;

// gboolean gst_element_foreach_src_pad (GstElement* element, GstElementForeachPadFunc func, gpointer user_data);
// gboolean gst_element_foreach_src_pad (::GstElement* element, Gst::ElementForeachPadFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL bool foreach_src_pad (Gst::ElementForeachPadFunc func) noexcept;

// GstClockTime gst_element_get_base_time (GstElement* element);
// ::GstClockTime gst_element_get_base_time (::GstElement* element);
GI_INLINE_DECL Gst::ClockTime get_base_time () noexcept;

// GstBus* gst_element_get_bus (GstElement* element);
// ::GstBus* gst_element_get_bus (::GstElement* element);
GI_INLINE_DECL Gst::Bus get_bus () noexcept;

// GstClock* gst_element_get_clock (GstElement* element);
// ::GstClock* gst_element_get_clock (::GstElement* element);
GI_INLINE_DECL Gst::Clock get_clock () noexcept;

// GstPad* gst_element_get_compatible_pad (GstElement* element, GstPad* pad, GstCaps* caps);
// ::GstPad* gst_element_get_compatible_pad (::GstElement* element, ::GstPad* pad, ::GstCaps* caps);
GI_INLINE_DECL Gst::Pad get_compatible_pad (Gst::Pad pad, Gst::Caps caps) noexcept;
GI_INLINE_DECL Gst::Pad get_compatible_pad (Gst::Pad pad) noexcept;

// GstPadTemplate* gst_element_get_compatible_pad_template (GstElement* element, GstPadTemplate* compattempl);
// ::GstPadTemplate* gst_element_get_compatible_pad_template (::GstElement* element, ::GstPadTemplate* compattempl);
GI_INLINE_DECL Gst::PadTemplate get_compatible_pad_template (Gst::PadTemplate compattempl) noexcept;

// GstContext* gst_element_get_context (GstElement* element, const gchar* context_type);
// ::GstContext* gst_element_get_context (::GstElement* element, const char* context_type);
GI_INLINE_DECL Gst::Context get_context (const std::string & context_type) noexcept;

// GstContext* gst_element_get_context_unlocked (GstElement* element, const gchar* context_type);
// ::GstContext* gst_element_get_context_unlocked (::GstElement* element, const char* context_type);
GI_INLINE_DECL Gst::Context get_context_unlocked (const std::string & context_type) noexcept;

// GList* gst_element_get_contexts (GstElement* element);
// ::GList* gst_element_get_contexts (::GstElement* element);
GI_INLINE_DECL std::vector<Gst::Context> get_contexts () noexcept;

// GstClockTime gst_element_get_current_clock_time (GstElement* element);
// ::GstClockTime gst_element_get_current_clock_time (::GstElement* element);
GI_INLINE_DECL Gst::ClockTime get_current_clock_time () noexcept;

// GstClockTime gst_element_get_current_running_time (GstElement* element);
// ::GstClockTime gst_element_get_current_running_time (::GstElement* element);
GI_INLINE_DECL Gst::ClockTime get_current_running_time () noexcept;

// GstElementFactory* gst_element_get_factory (GstElement* element);
// ::GstElementFactory* gst_element_get_factory (::GstElement* element);
GI_INLINE_DECL Gst::ElementFactory get_factory () noexcept;

// const gchar* gst_element_get_metadata (GstElement* element, const gchar* key);
// const char* gst_element_get_metadata (::GstElement* element, const char* key);
GI_INLINE_DECL std::string get_metadata (const std::string & key) noexcept;

// GstPadTemplate* gst_element_get_pad_template (GstElement* element, const gchar* name);
// ::GstPadTemplate* gst_element_get_pad_template (::GstElement* element, const char* name);
GI_INLINE_DECL Gst::PadTemplate get_pad_template (const std::string & name) noexcept;

// GList* gst_element_get_pad_template_list (GstElement* element);
// ::GList* gst_element_get_pad_template_list (::GstElement* element);
GI_INLINE_DECL std::vector<Gst::PadTemplate> get_pad_template_list () noexcept;

// GstPad* gst_element_get_request_pad (GstElement* element, const gchar* name);
// ::GstPad* gst_element_get_request_pad (::GstElement* element, const char* name);
// IGNORE; deprecated

// GstClockTime gst_element_get_start_time (GstElement* element);
// ::GstClockTime gst_element_get_start_time (::GstElement* element);
GI_INLINE_DECL Gst::ClockTime get_start_time () noexcept;

// GstStateChangeReturn gst_element_get_state (GstElement* element, GstState* state, GstState* pending, GstClockTime timeout);
// ::GstStateChangeReturn gst_element_get_state (::GstElement* element, ::GstState* state, ::GstState* pending, ::GstClockTime timeout);
GI_INLINE_DECL Gst::StateChangeReturn get_state (Gst::State * state, Gst::State * pending, ::GstClockTime timeout) noexcept;
GI_INLINE_DECL std::tuple<Gst::StateChangeReturn, Gst::State, Gst::State> get_state (::GstClockTime timeout) noexcept;

// GstPad* gst_element_get_static_pad (GstElement* element, const gchar* name);
// ::GstPad* gst_element_get_static_pad (::GstElement* element, const char* name);
GI_INLINE_DECL Gst::Pad get_static_pad (const std::string & name) noexcept;

// gboolean gst_element_is_locked_state (GstElement* element);
// gboolean gst_element_is_locked_state (::GstElement* element);
GI_INLINE_DECL bool is_locked_state () noexcept;

// GstIterator* gst_element_iterate_pads (GstElement* element);
// ::GstIterator* gst_element_iterate_pads (::GstElement* element);
GI_INLINE_DECL Gst::Iterator iterate_pads () noexcept;

// GstIterator* gst_element_iterate_sink_pads (GstElement* element);
// ::GstIterator* gst_element_iterate_sink_pads (::GstElement* element);
GI_INLINE_DECL Gst::Iterator iterate_sink_pads () noexcept;

// GstIterator* gst_element_iterate_src_pads (GstElement* element);
// ::GstIterator* gst_element_iterate_src_pads (::GstElement* element);
GI_INLINE_DECL Gst::Iterator iterate_src_pads () noexcept;

// gboolean gst_element_link (GstElement* src, GstElement* dest);
// gboolean gst_element_link (::GstElement* src, ::GstElement* dest);
GI_INLINE_DECL bool link (Gst::Element dest) noexcept;

// gboolean gst_element_link_filtered (GstElement* src, GstElement* dest, GstCaps* filter);
// gboolean gst_element_link_filtered (::GstElement* src, ::GstElement* dest, ::GstCaps* filter);
GI_INLINE_DECL bool link_filtered (Gst::Element dest, Gst::Caps filter) noexcept;
GI_INLINE_DECL bool link_filtered (Gst::Element dest) noexcept;

// gboolean gst_element_link_many (GstElement* element_1, GstElement* element_2);
// gboolean gst_element_link_many (::GstElement* element_1, ::GstElement* element_2);
// IGNORE; not introspectable, varargs not supported

// gboolean gst_element_link_pads (GstElement* src, const gchar* srcpadname, GstElement* dest, const gchar* destpadname);
// gboolean gst_element_link_pads (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname);
GI_INLINE_DECL bool link_pads (const std::string & srcpadname, Gst::Element dest, const std::string & destpadname) noexcept;
GI_INLINE_DECL bool link_pads (Gst::Element dest) noexcept;

// gboolean gst_element_link_pads_filtered (GstElement* src, const gchar* srcpadname, GstElement* dest, const gchar* destpadname, GstCaps* filter);
// gboolean gst_element_link_pads_filtered (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname, ::GstCaps* filter);
GI_INLINE_DECL bool link_pads_filtered (const std::string & srcpadname, Gst::Element dest, const std::string & destpadname, Gst::Caps filter) noexcept;
GI_INLINE_DECL bool link_pads_filtered (Gst::Element dest) noexcept;

// gboolean gst_element_link_pads_full (GstElement* src, const gchar* srcpadname, GstElement* dest, const gchar* destpadname, GstPadLinkCheck flags);
// gboolean gst_element_link_pads_full (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname, ::GstPadLinkCheck flags);
GI_INLINE_DECL bool link_pads_full (const std::string & srcpadname, Gst::Element dest, const std::string & destpadname, Gst::PadLinkCheck flags) noexcept;
GI_INLINE_DECL bool link_pads_full (Gst::Element dest, Gst::PadLinkCheck flags) noexcept;

// void gst_element_lost_state (GstElement* element);
// void gst_element_lost_state (::GstElement* element);
GI_INLINE_DECL void lost_state () noexcept;

// void gst_element_message_full (GstElement* element, GstMessageType type, GQuark domain, gint code, gchar* text, gchar* debug, const gchar* file, const gchar* function, gint line);
// void gst_element_message_full (::GstElement* element, ::GstMessageType type, ::GQuark domain, gint code, char* text, char* debug, const char* file, const char* function, gint line);
GI_INLINE_DECL void message_full (Gst::MessageType type, ::GQuark domain, gint code, const std::string & text, const std::string & debug, const std::string & file, const std::string & function, gint line) noexcept;
GI_INLINE_DECL void message_full (Gst::MessageType type, ::GQuark domain, gint code, const std::string & file, const std::string & function, gint line) noexcept;

// void gst_element_message_full_with_details (GstElement* element, GstMessageType type, GQuark domain, gint code, gchar* text, gchar* debug, const gchar* file, const gchar* function, gint line, GstStructure* structure);
// void gst_element_message_full_with_details (::GstElement* element, ::GstMessageType type, ::GQuark domain, gint code, char* text, char* debug, const char* file, const char* function, gint line, ::GstStructure* structure);
GI_INLINE_DECL void message_full_with_details (Gst::MessageType type, ::GQuark domain, gint code, const std::string & text, const std::string & debug, const std::string & file, const std::string & function, gint line, Gst::Structure structure) noexcept;
GI_INLINE_DECL void message_full_with_details (Gst::MessageType type, ::GQuark domain, gint code, const std::string & file, const std::string & function, gint line, Gst::Structure structure) noexcept;

// void gst_element_no_more_pads (GstElement* element);
// void gst_element_no_more_pads (::GstElement* element);
GI_INLINE_DECL void no_more_pads () noexcept;

// gboolean gst_element_post_message (GstElement* element, GstMessage* message);
// gboolean gst_element_post_message (::GstElement* element, ::GstMessage* message);
GI_INLINE_DECL bool post_message (Gst::Message message) noexcept;

// GstClock* gst_element_provide_clock (GstElement* element);
// ::GstClock* gst_element_provide_clock (::GstElement* element);
GI_INLINE_DECL Gst::Clock provide_clock () noexcept;

// gboolean gst_element_query (GstElement* element, GstQuery* query);
// gboolean gst_element_query (::GstElement* element, ::GstQuery* query);
GI_INLINE_DECL bool query (Gst::Query query) noexcept;

// gboolean gst_element_query_convert (GstElement* element, GstFormat src_format, gint64 src_val, GstFormat dest_format, gint64* dest_val);
// gboolean gst_element_query_convert (::GstElement* element, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
GI_INLINE_DECL bool query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format, gint64 & dest_val) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format) noexcept;

// gboolean gst_element_query_duration (GstElement* element, GstFormat format, gint64* duration);
// gboolean gst_element_query_duration (::GstElement* element, ::GstFormat format, gint64* duration);
GI_INLINE_DECL bool query_duration (Gst::Format format, gint64 * duration = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> query_duration (Gst::Format format) noexcept;

// gboolean gst_element_query_position (GstElement* element, GstFormat format, gint64* cur);
// gboolean gst_element_query_position (::GstElement* element, ::GstFormat format, gint64* cur);
GI_INLINE_DECL bool query_position (Gst::Format format, gint64 * cur = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> query_position (Gst::Format format) noexcept;

// void gst_element_release_request_pad (GstElement* element, GstPad* pad);
// void gst_element_release_request_pad (::GstElement* element, ::GstPad* pad);
GI_INLINE_DECL void release_request_pad (Gst::Pad pad) noexcept;

// gboolean gst_element_remove_pad (GstElement* element, GstPad* pad);
// gboolean gst_element_remove_pad (::GstElement* element, ::GstPad* pad);
GI_INLINE_DECL bool remove_pad (Gst::Pad pad) noexcept;

// void gst_element_remove_property_notify_watch (GstElement* element, gulong watch_id);
// void gst_element_remove_property_notify_watch (::GstElement* element, gulong watch_id);
GI_INLINE_DECL void remove_property_notify_watch (gulong watch_id) noexcept;

// GstPad* gst_element_request_pad (GstElement* element, GstPadTemplate* templ, const gchar* name, const GstCaps* caps);
// ::GstPad* gst_element_request_pad (::GstElement* element, ::GstPadTemplate* templ, const char* name, const ::GstCaps* caps);
GI_INLINE_DECL Gst::Pad request_pad (Gst::PadTemplate templ, const std::string & name, const Gst::Caps & caps) noexcept;
GI_INLINE_DECL Gst::Pad request_pad (Gst::PadTemplate templ) noexcept;

// GstPad* gst_element_request_pad_simple (GstElement* element, const gchar* name);
// ::GstPad* gst_element_request_pad_simple (::GstElement* element, const char* name);
GI_INLINE_DECL Gst::Pad request_pad_simple (const std::string & name) noexcept;

// gboolean gst_element_seek (GstElement* element, gdouble rate, GstFormat format, GstSeekFlags flags, GstSeekType start_type, gint64 start, GstSeekType stop_type, gint64 stop);
// gboolean gst_element_seek (::GstElement* element, gdouble rate, ::GstFormat format, ::GstSeekFlags flags, ::GstSeekType start_type, gint64 start, ::GstSeekType stop_type, gint64 stop);
GI_INLINE_DECL bool seek (gdouble rate, Gst::Format format, Gst::SeekFlags flags, Gst::SeekType start_type, gint64 start, Gst::SeekType stop_type, gint64 stop) noexcept;

// gboolean gst_element_seek_simple (GstElement* element, GstFormat format, GstSeekFlags seek_flags, gint64 seek_pos);
// gboolean gst_element_seek_simple (::GstElement* element, ::GstFormat format, ::GstSeekFlags seek_flags, gint64 seek_pos);
GI_INLINE_DECL bool seek_simple (Gst::Format format, Gst::SeekFlags seek_flags, gint64 seek_pos) noexcept;

// gboolean gst_element_send_event (GstElement* element, GstEvent* event);
// gboolean gst_element_send_event (::GstElement* element, ::GstEvent* event);
GI_INLINE_DECL bool send_event (Gst::Event event) noexcept;

// void gst_element_set_base_time (GstElement* element, GstClockTime time);
// void gst_element_set_base_time (::GstElement* element, ::GstClockTime time);
GI_INLINE_DECL void set_base_time (::GstClockTime time) noexcept;

// void gst_element_set_bus (GstElement* element, GstBus* bus);
// void gst_element_set_bus (::GstElement* element, ::GstBus* bus);
GI_INLINE_DECL void set_bus (Gst::Bus bus) noexcept;
GI_INLINE_DECL void set_bus () noexcept;

// gboolean gst_element_set_clock (GstElement* element, GstClock* clock);
// gboolean gst_element_set_clock (::GstElement* element, ::GstClock* clock);
GI_INLINE_DECL bool set_clock (Gst::Clock clock) noexcept;
GI_INLINE_DECL bool set_clock () noexcept;

// void gst_element_set_context (GstElement* element, GstContext* context);
// void gst_element_set_context (::GstElement* element, ::GstContext* context);
GI_INLINE_DECL void set_context (Gst::Context context) noexcept;

// gboolean gst_element_set_locked_state (GstElement* element, gboolean locked_state);
// gboolean gst_element_set_locked_state (::GstElement* element, gboolean locked_state);
GI_INLINE_DECL bool set_locked_state (gboolean locked_state) noexcept;

// void gst_element_set_start_time (GstElement* element, GstClockTime time);
// void gst_element_set_start_time (::GstElement* element, ::GstClockTime time);
GI_INLINE_DECL void set_start_time (::GstClockTime time) noexcept;

// GstStateChangeReturn gst_element_set_state (GstElement* element, GstState state);
// ::GstStateChangeReturn gst_element_set_state (::GstElement* element, ::GstState state);
GI_INLINE_DECL Gst::StateChangeReturn set_state (Gst::State state) noexcept;

// gboolean gst_element_sync_state_with_parent (GstElement* element);
// gboolean gst_element_sync_state_with_parent (::GstElement* element);
GI_INLINE_DECL bool sync_state_with_parent () noexcept;

// void gst_element_unlink (GstElement* src, GstElement* dest);
// void gst_element_unlink (::GstElement* src, ::GstElement* dest);
GI_INLINE_DECL void unlink (Gst::Element dest) noexcept;

// void gst_element_unlink_many (GstElement* element_1, GstElement* element_2);
// void gst_element_unlink_many (::GstElement* element_1, ::GstElement* element_2);
// IGNORE; not introspectable, varargs not supported

// void gst_element_unlink_pads (GstElement* src, const gchar* srcpadname, GstElement* dest, const gchar* destpadname);
// void gst_element_unlink_pads (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname);
GI_INLINE_DECL void unlink_pads (const std::string & srcpadname, Gst::Element dest, const std::string & destpadname) noexcept;

// guint32 Element::state_cookie (const ::GstElement* obj);
// guint32 Element::state_cookie (const ::GstElement* obj);
GI_INLINE_DECL guint32 state_cookie_ () const noexcept;

//  Element::state_cookie (::GstElement* obj, guint32 _value);
// void Element::state_cookie (::GstElement* obj, guint32 _value);
GI_INLINE_DECL void state_cookie_ (guint32 _value) noexcept;

// ::GstState Element::target_state (const ::GstElement* obj);
// ::GstState Element::target_state (const ::GstElement* obj);
GI_INLINE_DECL Gst::State target_state_ () const noexcept;

//  Element::target_state (::GstElement* obj, ::GstState _value);
// void Element::target_state (::GstElement* obj, ::GstState _value);
GI_INLINE_DECL void target_state_ (Gst::State _value) noexcept;

// ::GstState Element::current_state (const ::GstElement* obj);
// ::GstState Element::current_state (const ::GstElement* obj);
GI_INLINE_DECL Gst::State current_state_ () const noexcept;

//  Element::current_state (::GstElement* obj, ::GstState _value);
// void Element::current_state (::GstElement* obj, ::GstState _value);
GI_INLINE_DECL void current_state_ (Gst::State _value) noexcept;

// ::GstState Element::next_state (const ::GstElement* obj);
// ::GstState Element::next_state (const ::GstElement* obj);
GI_INLINE_DECL Gst::State next_state_ () const noexcept;

//  Element::next_state (::GstElement* obj, ::GstState _value);
// void Element::next_state (::GstElement* obj, ::GstState _value);
GI_INLINE_DECL void next_state_ (Gst::State _value) noexcept;

// ::GstState Element::pending_state (const ::GstElement* obj);
// ::GstState Element::pending_state (const ::GstElement* obj);
GI_INLINE_DECL Gst::State pending_state_ () const noexcept;

//  Element::pending_state (::GstElement* obj, ::GstState _value);
// void Element::pending_state (::GstElement* obj, ::GstState _value);
GI_INLINE_DECL void pending_state_ (Gst::State _value) noexcept;

// ::GstStateChangeReturn Element::last_return (const ::GstElement* obj);
// ::GstStateChangeReturn Element::last_return (const ::GstElement* obj);
GI_INLINE_DECL Gst::StateChangeReturn last_return_ () const noexcept;

//  Element::last_return (::GstElement* obj, ::GstStateChangeReturn _value);
// void Element::last_return (::GstElement* obj, ::GstStateChangeReturn _value);
GI_INLINE_DECL void last_return_ (Gst::StateChangeReturn _value) noexcept;

// ::GstBus* Element::bus (const ::GstElement* obj);
// ::GstBus* Element::bus (const ::GstElement* obj);
GI_INLINE_DECL Gst::Bus bus_ () const noexcept;

// ::GstClock* Element::clock (const ::GstElement* obj);
// ::GstClock* Element::clock (const ::GstElement* obj);
GI_INLINE_DECL Gst::Clock clock_ () const noexcept;

// ::GstClockTimeDiff Element::base_time (const ::GstElement* obj);
// ::GstClockTimeDiff Element::base_time (const ::GstElement* obj);
GI_INLINE_DECL Gst::ClockTimeDiff base_time_ () const noexcept;

//  Element::base_time (::GstElement* obj, ::GstClockTimeDiff _value);
// void Element::base_time (::GstElement* obj, ::GstClockTimeDiff _value);
GI_INLINE_DECL void base_time_ (::GstClockTimeDiff _value) noexcept;

// ::GstClockTime Element::start_time (const ::GstElement* obj);
// ::GstClockTime Element::start_time (const ::GstElement* obj);
GI_INLINE_DECL Gst::ClockTime start_time_ () const noexcept;

//  Element::start_time (::GstElement* obj, ::GstClockTime _value);
// void Element::start_time (::GstElement* obj, ::GstClockTime _value);
GI_INLINE_DECL void start_time_ (::GstClockTime _value) noexcept;

// guint16 Element::numpads (const ::GstElement* obj);
// guint16 Element::numpads (const ::GstElement* obj);
GI_INLINE_DECL guint16 numpads_ () const noexcept;

//  Element::numpads (::GstElement* obj, guint16 _value);
// void Element::numpads (::GstElement* obj, guint16 _value);
GI_INLINE_DECL void numpads_ (guint16 _value) noexcept;

// guint16 Element::numsrcpads (const ::GstElement* obj);
// guint16 Element::numsrcpads (const ::GstElement* obj);
GI_INLINE_DECL guint16 numsrcpads_ () const noexcept;

//  Element::numsrcpads (::GstElement* obj, guint16 _value);
// void Element::numsrcpads (::GstElement* obj, guint16 _value);
GI_INLINE_DECL void numsrcpads_ (guint16 _value) noexcept;

// guint16 Element::numsinkpads (const ::GstElement* obj);
// guint16 Element::numsinkpads (const ::GstElement* obj);
GI_INLINE_DECL guint16 numsinkpads_ () const noexcept;

//  Element::numsinkpads (::GstElement* obj, guint16 _value);
// void Element::numsinkpads (::GstElement* obj, guint16 _value);
GI_INLINE_DECL void numsinkpads_ (guint16 _value) noexcept;

// guint32 Element::pads_cookie (const ::GstElement* obj);
// guint32 Element::pads_cookie (const ::GstElement* obj);
GI_INLINE_DECL guint32 pads_cookie_ () const noexcept;

//  Element::pads_cookie (::GstElement* obj, guint32 _value);
// void Element::pads_cookie (::GstElement* obj, guint32 _value);
GI_INLINE_DECL void pads_cookie_ (guint32 _value) noexcept;

// signal no-more-pads
gi::signal_proxy<void(Gst::Element)> signal_no_more_pads()
{ return gi::signal_proxy<void(Gst::Element)> (*this, "no-more-pads"); }

// signal pad-added
gi::signal_proxy<void(Gst::Element, Gst::Pad new_pad)> signal_pad_added()
{ return gi::signal_proxy<void(Gst::Element, Gst::Pad new_pad)> (*this, "pad-added"); }

// signal pad-removed
gi::signal_proxy<void(Gst::Element, Gst::Pad old_pad)> signal_pad_removed()
{ return gi::signal_proxy<void(Gst::Element, Gst::Pad old_pad)> (*this, "pad-removed"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/element_extra_def.hpp>)
#include <gst/element_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/element_extra.hpp>)
#include <gst/element_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Element : public GI_GST_ELEMENT_BASE
{ typedef GI_GST_ELEMENT_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstElement>
{ typedef Gst::Element type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class ElementClassDef
{
typedef ElementClassDef self;
public:
typedef Gst::Element instance_type;
typedef ::GstElementClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GstStateChangeReturn Element::change_state (GstElement* element, GstStateChange transition);
// ::GstStateChangeReturn Element::change_state (::GstElement* element, ::GstStateChange transition);
virtual Gst::StateChangeReturn change_state_ (Gst::StateChange transition) noexcept = 0;

// GstStateChangeReturn Element::get_state (GstElement* element, GstState* state, GstState* pending, GstClockTime timeout);
// ::GstStateChangeReturn Element::get_state (::GstElement* element, ::GstState* state, ::GstState* pending, ::GstClockTime timeout);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Element::no_more_pads (GstElement* element);
// void Element::no_more_pads (::GstElement* element);
virtual void no_more_pads_ () noexcept = 0;

// void Element::pad_added (GstElement* element, GstPad* pad);
// void Element::pad_added (::GstElement* element, ::GstPad* pad);
virtual void pad_added_ (Gst::Pad pad) noexcept = 0;

// void Element::pad_removed (GstElement* element, GstPad* pad);
// void Element::pad_removed (::GstElement* element, ::GstPad* pad);
virtual void pad_removed_ (Gst::Pad pad) noexcept = 0;

// gboolean Element::post_message (GstElement* element, GstMessage* message);
// gboolean Element::post_message (::GstElement* element, ::GstMessage* message);
virtual bool post_message_ (Gst::Message message) noexcept = 0;

// GstClock* Element::provide_clock (GstElement* element);
// ::GstClock* Element::provide_clock (::GstElement* element);
virtual Gst::Clock provide_clock_ () noexcept = 0;

// gboolean Element::query (GstElement* element, GstQuery* query);
// gboolean Element::query (::GstElement* element, ::GstQuery* query);
virtual bool query_ (Gst::Query query) noexcept = 0;

// void Element::release_pad (GstElement* element, GstPad* pad);
// void Element::release_pad (::GstElement* element, ::GstPad* pad);
virtual void release_pad_ (Gst::Pad pad) noexcept = 0;

// GstPad* Element::request_new_pad (GstElement* element, GstPadTemplate* templ, const gchar* name, const GstCaps* caps);
// ::GstPad* Element::request_new_pad (::GstElement* element, ::GstPadTemplate* templ, const char* name, const ::GstCaps* caps);
virtual Gst::Pad request_new_pad_ (Gst::PadTemplate templ, const std::string & name, const Gst::Caps & caps) noexcept = 0;

// gboolean Element::send_event (GstElement* element, GstEvent* event);
// gboolean Element::send_event (::GstElement* element, ::GstEvent* event);
virtual bool send_event_ (Gst::Event event) noexcept = 0;

// void Element::set_bus (GstElement* element, GstBus* bus);
// void Element::set_bus (::GstElement* element, ::GstBus* bus);
virtual void set_bus_ (Gst::Bus bus) noexcept = 0;

// gboolean Element::set_clock (GstElement* element, GstClock* clock);
// gboolean Element::set_clock (::GstElement* element, ::GstClock* clock);
virtual bool set_clock_ (Gst::Clock clock) noexcept = 0;

// void Element::set_context (GstElement* element, GstContext* context);
// void Element::set_context (::GstElement* element, ::GstContext* context);
virtual void set_context_ (Gst::Context context) noexcept = 0;

// GstStateChangeReturn Element::set_state (GstElement* element, GstState state);
// ::GstStateChangeReturn Element::set_state (::GstElement* element, ::GstState state);
virtual Gst::StateChangeReturn set_state_ (Gst::State state) noexcept = 0;

// void Element::state_changed (GstElement* element, GstState oldstate, GstState newstate, GstState pending);
// void Element::state_changed (::GstElement* element, ::GstState oldstate, ::GstState newstate, ::GstState pending);
virtual void state_changed_ (Gst::State oldstate, Gst::State newstate, Gst::State pending) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ElementClass: public detail::ClassTemplate<Gst::impl::internal::ElementClassDef, Gst::impl::internal::ObjectClass>
{
typedef ElementClass self;
typedef detail::ClassTemplate<Gst::impl::internal::ElementClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GstStateChangeReturn Element::change_state (GstElement* element, GstStateChange transition);
// ::GstStateChangeReturn Element::change_state (::GstElement* element, ::GstStateChange transition);
GI_INLINE_DECL Gst::StateChangeReturn change_state_ (Gst::StateChange transition) noexcept override;

// GstStateChangeReturn Element::get_state (GstElement* element, GstState* state, GstState* pending, GstClockTime timeout);
// ::GstStateChangeReturn Element::get_state (::GstElement* element, ::GstState* state, ::GstState* pending, ::GstClockTime timeout);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Element::no_more_pads (GstElement* element);
// void Element::no_more_pads (::GstElement* element);
GI_INLINE_DECL void no_more_pads_ () noexcept override;

// void Element::pad_added (GstElement* element, GstPad* pad);
// void Element::pad_added (::GstElement* element, ::GstPad* pad);
GI_INLINE_DECL void pad_added_ (Gst::Pad pad) noexcept override;

// void Element::pad_removed (GstElement* element, GstPad* pad);
// void Element::pad_removed (::GstElement* element, ::GstPad* pad);
GI_INLINE_DECL void pad_removed_ (Gst::Pad pad) noexcept override;

// gboolean Element::post_message (GstElement* element, GstMessage* message);
// gboolean Element::post_message (::GstElement* element, ::GstMessage* message);
GI_INLINE_DECL bool post_message_ (Gst::Message message) noexcept override;

// GstClock* Element::provide_clock (GstElement* element);
// ::GstClock* Element::provide_clock (::GstElement* element);
GI_INLINE_DECL Gst::Clock provide_clock_ () noexcept override;

// gboolean Element::query (GstElement* element, GstQuery* query);
// gboolean Element::query (::GstElement* element, ::GstQuery* query);
GI_INLINE_DECL bool query_ (Gst::Query query) noexcept override;

// void Element::release_pad (GstElement* element, GstPad* pad);
// void Element::release_pad (::GstElement* element, ::GstPad* pad);
GI_INLINE_DECL void release_pad_ (Gst::Pad pad) noexcept override;

// GstPad* Element::request_new_pad (GstElement* element, GstPadTemplate* templ, const gchar* name, const GstCaps* caps);
// ::GstPad* Element::request_new_pad (::GstElement* element, ::GstPadTemplate* templ, const char* name, const ::GstCaps* caps);
GI_INLINE_DECL Gst::Pad request_new_pad_ (Gst::PadTemplate templ, const std::string & name, const Gst::Caps & caps) noexcept override;

// gboolean Element::send_event (GstElement* element, GstEvent* event);
// gboolean Element::send_event (::GstElement* element, ::GstEvent* event);
GI_INLINE_DECL bool send_event_ (Gst::Event event) noexcept override;

// void Element::set_bus (GstElement* element, GstBus* bus);
// void Element::set_bus (::GstElement* element, ::GstBus* bus);
GI_INLINE_DECL void set_bus_ (Gst::Bus bus) noexcept override;

// gboolean Element::set_clock (GstElement* element, GstClock* clock);
// gboolean Element::set_clock (::GstElement* element, ::GstClock* clock);
GI_INLINE_DECL bool set_clock_ (Gst::Clock clock) noexcept override;

// void Element::set_context (GstElement* element, GstContext* context);
// void Element::set_context (::GstElement* element, ::GstContext* context);
GI_INLINE_DECL void set_context_ (Gst::Context context) noexcept override;

// GstStateChangeReturn Element::set_state (GstElement* element, GstState state);
// ::GstStateChangeReturn Element::set_state (::GstElement* element, ::GstState state);
GI_INLINE_DECL Gst::StateChangeReturn set_state_ (Gst::State state) noexcept override;

// void Element::state_changed (GstElement* element, GstState oldstate, GstState newstate, GstState pending);
// void Element::state_changed (::GstElement* element, ::GstState oldstate, ::GstState newstate, ::GstState pending);
GI_INLINE_DECL void state_changed_ (Gst::State oldstate, Gst::State newstate, Gst::State pending) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ElementImpl = detail::ObjectImpl<Element, internal::ElementClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
