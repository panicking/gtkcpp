// AUTO-GENERATED

#ifndef _GI_GST_PAD_HPP_
#define _GI_GST_PAD_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Buffer;
class BufferList;
class Caps;
class Element;
class Event;
class Iterator;
class Object;
class PadTemplate;
class Query;
class StaticPadTemplate;
class Stream;

class Pad;

namespace base {


#define GI_GST_PAD_BASE base::PadBase
class PadBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstPad BaseObjectType;

PadBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_pad_get_type(); } 

// GstPad* gst_pad_new (const gchar* name, GstPadDirection direction);
// ::GstPad* gst_pad_new (const char* name, ::GstPadDirection direction);
static GI_INLINE_DECL Gst::Pad new_ (const std::string & name, Gst::PadDirection direction) noexcept;
static GI_INLINE_DECL Gst::Pad new_ (Gst::PadDirection direction) noexcept;

// GstPad* gst_pad_new_from_static_template (GstStaticPadTemplate* templ, const gchar* name);
// ::GstPad* gst_pad_new_from_static_template (::GstStaticPadTemplate* templ, const char* name);
static GI_INLINE_DECL Gst::Pad new_from_static_template (Gst::StaticPadTemplate templ, const std::string & name) noexcept;

// GstPad* gst_pad_new_from_template (GstPadTemplate* templ, const gchar* name);
// ::GstPad* gst_pad_new_from_template (::GstPadTemplate* templ, const char* name);
static GI_INLINE_DECL Gst::Pad new_from_template (Gst::PadTemplate templ, const std::string & name) noexcept;
static GI_INLINE_DECL Gst::Pad new_from_template (Gst::PadTemplate templ) noexcept;

// const gchar* gst_pad_link_get_name (GstPadLinkReturn ret);
// const char* gst_pad_link_get_name (::GstPadLinkReturn ret);
static GI_INLINE_DECL std::string link_get_name (Gst::PadLinkReturn ret) noexcept;

// gboolean gst_pad_activate_mode (GstPad* pad, GstPadMode mode, gboolean active);
// gboolean gst_pad_activate_mode (::GstPad* pad, ::GstPadMode mode, gboolean active);
GI_INLINE_DECL bool activate_mode (Gst::PadMode mode, gboolean active) noexcept;

// gulong gst_pad_add_probe (GstPad* pad, GstPadProbeType mask, GstPadProbeCallback callback, gpointer user_data, GDestroyNotify destroy_data);
// gulong gst_pad_add_probe (::GstPad* pad, ::GstPadProbeType mask, Gst::PadProbeCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_data);
GI_INLINE_DECL gulong add_probe (Gst::PadProbeType mask, Gst::PadProbeCallback callback) noexcept;

// gboolean gst_pad_can_link (GstPad* srcpad, GstPad* sinkpad);
// gboolean gst_pad_can_link (::GstPad* srcpad, ::GstPad* sinkpad);
GI_INLINE_DECL bool can_link (Gst::Pad sinkpad) noexcept;

// GstFlowReturn gst_pad_chain (GstPad* pad, GstBuffer* buffer);
// ::GstFlowReturn gst_pad_chain (::GstPad* pad, ::GstBuffer* buffer);
GI_INLINE_DECL Gst::FlowReturn chain (Gst::Buffer buffer) noexcept;

// GstFlowReturn gst_pad_chain_list (GstPad* pad, GstBufferList* list);
// ::GstFlowReturn gst_pad_chain_list (::GstPad* pad, ::GstBufferList* list);
GI_INLINE_DECL Gst::FlowReturn chain_list (Gst::BufferList list) noexcept;

// gboolean gst_pad_check_reconfigure (GstPad* pad);
// gboolean gst_pad_check_reconfigure (::GstPad* pad);
GI_INLINE_DECL bool check_reconfigure () noexcept;

// gchar* gst_pad_create_stream_id (GstPad* pad, GstElement* parent, const gchar* stream_id);
// char* gst_pad_create_stream_id (::GstPad* pad, ::GstElement* parent, const char* stream_id);
GI_INLINE_DECL std::string create_stream_id (Gst::Element parent, const std::string & stream_id) noexcept;
GI_INLINE_DECL std::string create_stream_id (Gst::Element parent) noexcept;

// gchar* gst_pad_create_stream_id_printf (GstPad* pad, GstElement* parent, const gchar* stream_id);
// char* gst_pad_create_stream_id_printf (::GstPad* pad, ::GstElement* parent, const char* stream_id);
// IGNORE; not introspectable, varargs not supported

// gchar* gst_pad_create_stream_id_printf_valist (GstPad* pad, GstElement* parent, const gchar* stream_id, va_list var_args);
// char* gst_pad_create_stream_id_printf_valist (::GstPad* pad, ::GstElement* parent, const char* stream_id,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// gboolean gst_pad_event_default (GstPad* pad, GstObject* parent, GstEvent* event);
// gboolean gst_pad_event_default (::GstPad* pad, ::GstObject* parent, ::GstEvent* event);
GI_INLINE_DECL bool event_default (Gst::Object parent, Gst::Event event) noexcept;
GI_INLINE_DECL bool event_default (Gst::Event event) noexcept;

// gboolean gst_pad_forward (GstPad* pad, GstPadForwardFunction forward, gpointer user_data);
// gboolean gst_pad_forward (::GstPad* pad, Gst::PadForwardFunction::cfunction_type forward, void* user_data);
GI_INLINE_DECL bool forward (Gst::PadForwardFunction forward) noexcept;

// GstCaps* gst_pad_get_allowed_caps (GstPad* pad);
// ::GstCaps* gst_pad_get_allowed_caps (::GstPad* pad);
GI_INLINE_DECL Gst::Caps get_allowed_caps () noexcept;

// GstCaps* gst_pad_get_current_caps (GstPad* pad);
// ::GstCaps* gst_pad_get_current_caps (::GstPad* pad);
GI_INLINE_DECL Gst::Caps get_current_caps () noexcept;

// GstPadDirection gst_pad_get_direction (GstPad* pad);
// ::GstPadDirection gst_pad_get_direction (::GstPad* pad);
GI_INLINE_DECL Gst::PadDirection get_direction () noexcept;

// gpointer gst_pad_get_element_private (GstPad* pad);
// void* gst_pad_get_element_private (::GstPad* pad);
GI_INLINE_DECL gpointer get_element_private () noexcept;

// GstFlowReturn gst_pad_get_last_flow_return (GstPad* pad);
// ::GstFlowReturn gst_pad_get_last_flow_return (::GstPad* pad);
GI_INLINE_DECL Gst::FlowReturn get_last_flow_return () noexcept;

// gint64 gst_pad_get_offset (GstPad* pad);
// gint64 gst_pad_get_offset (::GstPad* pad);
GI_INLINE_DECL gint64 get_offset () noexcept;

// GstPadTemplate* gst_pad_get_pad_template (GstPad* pad);
// ::GstPadTemplate* gst_pad_get_pad_template (::GstPad* pad);
GI_INLINE_DECL Gst::PadTemplate get_pad_template () noexcept;

// GstCaps* gst_pad_get_pad_template_caps (GstPad* pad);
// ::GstCaps* gst_pad_get_pad_template_caps (::GstPad* pad);
GI_INLINE_DECL Gst::Caps get_pad_template_caps () noexcept;

// GstElement* gst_pad_get_parent_element (GstPad* pad);
// ::GstElement* gst_pad_get_parent_element (::GstPad* pad);
GI_INLINE_DECL Gst::Element get_parent_element () noexcept;

// GstPad* gst_pad_get_peer (GstPad* pad);
// ::GstPad* gst_pad_get_peer (::GstPad* pad);
GI_INLINE_DECL Gst::Pad get_peer () noexcept;

// GstFlowReturn gst_pad_get_range (GstPad* pad, guint64 offset, guint size, GstBuffer** buffer);
// ::GstFlowReturn gst_pad_get_range (::GstPad* pad, guint64 offset, guint size, ::GstBuffer** buffer);
GI_INLINE_DECL Gst::FlowReturn get_range (guint64 offset, guint size, Gst::Buffer & buffer) noexcept;
GI_INLINE_DECL std::tuple<Gst::FlowReturn, Gst::Buffer> get_range (guint64 offset, guint size) noexcept;

// GstPad* gst_pad_get_single_internal_link (GstPad* pad);
// ::GstPad* gst_pad_get_single_internal_link (::GstPad* pad);
GI_INLINE_DECL Gst::Pad get_single_internal_link () noexcept;

// GstEvent* gst_pad_get_sticky_event (GstPad* pad, GstEventType event_type, guint idx);
// ::GstEvent* gst_pad_get_sticky_event (::GstPad* pad, ::GstEventType event_type, guint idx);
GI_INLINE_DECL Gst::Event get_sticky_event (Gst::EventType event_type, guint idx) noexcept;

// GstStream* gst_pad_get_stream (GstPad* pad);
// ::GstStream* gst_pad_get_stream (::GstPad* pad);
GI_INLINE_DECL Gst::Stream get_stream () noexcept;

// gchar* gst_pad_get_stream_id (GstPad* pad);
// char* gst_pad_get_stream_id (::GstPad* pad);
GI_INLINE_DECL std::string get_stream_id () noexcept;

// GstTaskState gst_pad_get_task_state (GstPad* pad);
// ::GstTaskState gst_pad_get_task_state (::GstPad* pad);
GI_INLINE_DECL Gst::TaskState get_task_state () noexcept;

// gboolean gst_pad_has_current_caps (GstPad* pad);
// gboolean gst_pad_has_current_caps (::GstPad* pad);
GI_INLINE_DECL bool has_current_caps () noexcept;

// gboolean gst_pad_is_active (GstPad* pad);
// gboolean gst_pad_is_active (::GstPad* pad);
GI_INLINE_DECL bool is_active () noexcept;

// gboolean gst_pad_is_blocked (GstPad* pad);
// gboolean gst_pad_is_blocked (::GstPad* pad);
GI_INLINE_DECL bool is_blocked () noexcept;

// gboolean gst_pad_is_blocking (GstPad* pad);
// gboolean gst_pad_is_blocking (::GstPad* pad);
GI_INLINE_DECL bool is_blocking () noexcept;

// gboolean gst_pad_is_linked (GstPad* pad);
// gboolean gst_pad_is_linked (::GstPad* pad);
GI_INLINE_DECL bool is_linked () noexcept;

// GstIterator* gst_pad_iterate_internal_links (GstPad* pad);
// ::GstIterator* gst_pad_iterate_internal_links (::GstPad* pad);
GI_INLINE_DECL Gst::Iterator iterate_internal_links () noexcept;

// GstIterator* gst_pad_iterate_internal_links_default (GstPad* pad, GstObject* parent);
// ::GstIterator* gst_pad_iterate_internal_links_default (::GstPad* pad, ::GstObject* parent);
GI_INLINE_DECL Gst::Iterator iterate_internal_links_default (Gst::Object parent) noexcept;
GI_INLINE_DECL Gst::Iterator iterate_internal_links_default () noexcept;

// GstPadLinkReturn gst_pad_link (GstPad* srcpad, GstPad* sinkpad);
// ::GstPadLinkReturn gst_pad_link (::GstPad* srcpad, ::GstPad* sinkpad);
GI_INLINE_DECL Gst::PadLinkReturn link (Gst::Pad sinkpad) noexcept;

// GstPadLinkReturn gst_pad_link_full (GstPad* srcpad, GstPad* sinkpad, GstPadLinkCheck flags);
// ::GstPadLinkReturn gst_pad_link_full (::GstPad* srcpad, ::GstPad* sinkpad, ::GstPadLinkCheck flags);
GI_INLINE_DECL Gst::PadLinkReturn link_full (Gst::Pad sinkpad, Gst::PadLinkCheck flags) noexcept;

// gboolean gst_pad_link_maybe_ghosting (GstPad* src, GstPad* sink);
// gboolean gst_pad_link_maybe_ghosting (::GstPad* src, ::GstPad* sink);
GI_INLINE_DECL bool link_maybe_ghosting (Gst::Pad sink) noexcept;

// gboolean gst_pad_link_maybe_ghosting_full (GstPad* src, GstPad* sink, GstPadLinkCheck flags);
// gboolean gst_pad_link_maybe_ghosting_full (::GstPad* src, ::GstPad* sink, ::GstPadLinkCheck flags);
GI_INLINE_DECL bool link_maybe_ghosting_full (Gst::Pad sink, Gst::PadLinkCheck flags) noexcept;

// void gst_pad_mark_reconfigure (GstPad* pad);
// void gst_pad_mark_reconfigure (::GstPad* pad);
GI_INLINE_DECL void mark_reconfigure () noexcept;

// gboolean gst_pad_needs_reconfigure (GstPad* pad);
// gboolean gst_pad_needs_reconfigure (::GstPad* pad);
GI_INLINE_DECL bool needs_reconfigure () noexcept;

// gboolean gst_pad_pause_task (GstPad* pad);
// gboolean gst_pad_pause_task (::GstPad* pad);
GI_INLINE_DECL bool pause_task () noexcept;

// gboolean gst_pad_peer_query (GstPad* pad, GstQuery* query);
// gboolean gst_pad_peer_query (::GstPad* pad, ::GstQuery* query);
GI_INLINE_DECL bool peer_query (Gst::Query query) noexcept;

// gboolean gst_pad_peer_query_accept_caps (GstPad* pad, GstCaps* caps);
// gboolean gst_pad_peer_query_accept_caps (::GstPad* pad, ::GstCaps* caps);
GI_INLINE_DECL bool peer_query_accept_caps (Gst::Caps caps) noexcept;

// GstCaps* gst_pad_peer_query_caps (GstPad* pad, GstCaps* filter);
// ::GstCaps* gst_pad_peer_query_caps (::GstPad* pad, ::GstCaps* filter);
GI_INLINE_DECL Gst::Caps peer_query_caps (Gst::Caps filter) noexcept;
GI_INLINE_DECL Gst::Caps peer_query_caps () noexcept;

// gboolean gst_pad_peer_query_convert (GstPad* pad, GstFormat src_format, gint64 src_val, GstFormat dest_format, gint64* dest_val);
// gboolean gst_pad_peer_query_convert (::GstPad* pad, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
GI_INLINE_DECL bool peer_query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format, gint64 & dest_val) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> peer_query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format) noexcept;

// gboolean gst_pad_peer_query_duration (GstPad* pad, GstFormat format, gint64* duration);
// gboolean gst_pad_peer_query_duration (::GstPad* pad, ::GstFormat format, gint64* duration);
GI_INLINE_DECL bool peer_query_duration (Gst::Format format, gint64 * duration = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> peer_query_duration (Gst::Format format) noexcept;

// gboolean gst_pad_peer_query_position (GstPad* pad, GstFormat format, gint64* cur);
// gboolean gst_pad_peer_query_position (::GstPad* pad, ::GstFormat format, gint64* cur);
GI_INLINE_DECL bool peer_query_position (Gst::Format format, gint64 * cur = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> peer_query_position (Gst::Format format) noexcept;

// gboolean gst_pad_proxy_query_accept_caps (GstPad* pad, GstQuery* query);
// gboolean gst_pad_proxy_query_accept_caps (::GstPad* pad, ::GstQuery* query);
GI_INLINE_DECL bool proxy_query_accept_caps (Gst::Query query) noexcept;

// gboolean gst_pad_proxy_query_caps (GstPad* pad, GstQuery* query);
// gboolean gst_pad_proxy_query_caps (::GstPad* pad, ::GstQuery* query);
GI_INLINE_DECL bool proxy_query_caps (Gst::Query query) noexcept;

// GstFlowReturn gst_pad_pull_range (GstPad* pad, guint64 offset, guint size, GstBuffer** buffer);
// ::GstFlowReturn gst_pad_pull_range (::GstPad* pad, guint64 offset, guint size, ::GstBuffer** buffer);
GI_INLINE_DECL Gst::FlowReturn pull_range (guint64 offset, guint size, Gst::Buffer & buffer) noexcept;
GI_INLINE_DECL std::tuple<Gst::FlowReturn, Gst::Buffer> pull_range (guint64 offset, guint size) noexcept;

// GstFlowReturn gst_pad_push (GstPad* pad, GstBuffer* buffer);
// ::GstFlowReturn gst_pad_push (::GstPad* pad, ::GstBuffer* buffer);
GI_INLINE_DECL Gst::FlowReturn push (Gst::Buffer buffer) noexcept;

// gboolean gst_pad_push_event (GstPad* pad, GstEvent* event);
// gboolean gst_pad_push_event (::GstPad* pad, ::GstEvent* event);
GI_INLINE_DECL bool push_event (Gst::Event event) noexcept;

// GstFlowReturn gst_pad_push_list (GstPad* pad, GstBufferList* list);
// ::GstFlowReturn gst_pad_push_list (::GstPad* pad, ::GstBufferList* list);
GI_INLINE_DECL Gst::FlowReturn push_list (Gst::BufferList list) noexcept;

// gboolean gst_pad_query (GstPad* pad, GstQuery* query);
// gboolean gst_pad_query (::GstPad* pad, ::GstQuery* query);
GI_INLINE_DECL bool query (Gst::Query query) noexcept;

// gboolean gst_pad_query_accept_caps (GstPad* pad, GstCaps* caps);
// gboolean gst_pad_query_accept_caps (::GstPad* pad, ::GstCaps* caps);
GI_INLINE_DECL bool query_accept_caps (Gst::Caps caps) noexcept;

// GstCaps* gst_pad_query_caps (GstPad* pad, GstCaps* filter);
// ::GstCaps* gst_pad_query_caps (::GstPad* pad, ::GstCaps* filter);
GI_INLINE_DECL Gst::Caps query_caps (Gst::Caps filter) noexcept;
GI_INLINE_DECL Gst::Caps query_caps () noexcept;

// gboolean gst_pad_query_convert (GstPad* pad, GstFormat src_format, gint64 src_val, GstFormat dest_format, gint64* dest_val);
// gboolean gst_pad_query_convert (::GstPad* pad, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
GI_INLINE_DECL bool query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format, gint64 & dest_val) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format) noexcept;

// gboolean gst_pad_query_default (GstPad* pad, GstObject* parent, GstQuery* query);
// gboolean gst_pad_query_default (::GstPad* pad, ::GstObject* parent, ::GstQuery* query);
GI_INLINE_DECL bool query_default (Gst::Object parent, Gst::Query query) noexcept;
GI_INLINE_DECL bool query_default (Gst::Query query) noexcept;

// gboolean gst_pad_query_duration (GstPad* pad, GstFormat format, gint64* duration);
// gboolean gst_pad_query_duration (::GstPad* pad, ::GstFormat format, gint64* duration);
GI_INLINE_DECL bool query_duration (Gst::Format format, gint64 * duration = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> query_duration (Gst::Format format) noexcept;

// gboolean gst_pad_query_position (GstPad* pad, GstFormat format, gint64* cur);
// gboolean gst_pad_query_position (::GstPad* pad, ::GstFormat format, gint64* cur);
GI_INLINE_DECL bool query_position (Gst::Format format, gint64 * cur = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> query_position (Gst::Format format) noexcept;

// void gst_pad_remove_probe (GstPad* pad, gulong id);
// void gst_pad_remove_probe (::GstPad* pad, gulong id);
GI_INLINE_DECL void remove_probe (gulong id) noexcept;

// gboolean gst_pad_send_event (GstPad* pad, GstEvent* event);
// gboolean gst_pad_send_event (::GstPad* pad, ::GstEvent* event);
GI_INLINE_DECL bool send_event (Gst::Event event) noexcept;

// void gst_pad_set_activate_function_full (GstPad* pad, GstPadActivateFunction activate, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_activate_function_full (::GstPad* pad,  activate, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; activate type  not supported

// void gst_pad_set_activatemode_function_full (GstPad* pad, GstPadActivateModeFunction activatemode, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_activatemode_function_full (::GstPad* pad,  activatemode, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; activatemode type  not supported

// gboolean gst_pad_set_active (GstPad* pad, gboolean active);
// gboolean gst_pad_set_active (::GstPad* pad, gboolean active);
GI_INLINE_DECL bool set_active (gboolean active) noexcept;

// void gst_pad_set_chain_function_full (GstPad* pad, GstPadChainFunction chain, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_chain_function_full (::GstPad* pad,  chain, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; chain type  not supported

// void gst_pad_set_chain_list_function_full (GstPad* pad, GstPadChainListFunction chainlist, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_chain_list_function_full (::GstPad* pad,  chainlist, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; chainlist type  not supported

// void gst_pad_set_element_private (GstPad* pad, gpointer priv);
// void gst_pad_set_element_private (::GstPad* pad, void* priv);
GI_INLINE_DECL void set_element_private (void* priv) noexcept;

// void gst_pad_set_event_full_function_full (GstPad* pad, GstPadEventFullFunction event, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_event_full_function_full (::GstPad* pad,  event, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; event type  not supported

// void gst_pad_set_event_function_full (GstPad* pad, GstPadEventFunction event, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_event_function_full (::GstPad* pad,  event, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; event type  not supported

// void gst_pad_set_getrange_function_full (GstPad* pad, GstPadGetRangeFunction get, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_getrange_function_full (::GstPad* pad,  get, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; get type  not supported

// void gst_pad_set_iterate_internal_links_function_full (GstPad* pad, GstPadIterIntLinkFunction iterintlink, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_iterate_internal_links_function_full (::GstPad* pad,  iterintlink, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; iterintlink type  not supported

// void gst_pad_set_link_function_full (GstPad* pad, GstPadLinkFunction link, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_link_function_full (::GstPad* pad,  link, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; link type  not supported

// void gst_pad_set_offset (GstPad* pad, gint64 offset);
// void gst_pad_set_offset (::GstPad* pad, gint64 offset);
GI_INLINE_DECL void set_offset (gint64 offset) noexcept;

// void gst_pad_set_query_function_full (GstPad* pad, GstPadQueryFunction query, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_query_function_full (::GstPad* pad,  query, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; query type  not supported

// void gst_pad_set_unlink_function_full (GstPad* pad, GstPadUnlinkFunction unlink, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_unlink_function_full (::GstPad* pad,  unlink, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; unlink type  not supported

// gboolean gst_pad_start_task (GstPad* pad, GstTaskFunction func, gpointer user_data, GDestroyNotify notify);
// gboolean gst_pad_start_task (::GstPad* pad, Gst::TaskFunction::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL bool start_task (Gst::TaskFunction func) noexcept;

// void gst_pad_sticky_events_foreach (GstPad* pad, GstPadStickyEventsForeachFunction foreach_func, gpointer user_data);
// void gst_pad_sticky_events_foreach (::GstPad* pad,  foreach_func, void* user_data);
// SKIP; foreach_func type  not supported

// gboolean gst_pad_stop_task (GstPad* pad);
// gboolean gst_pad_stop_task (::GstPad* pad);
GI_INLINE_DECL bool stop_task () noexcept;

// GstFlowReturn gst_pad_store_sticky_event (GstPad* pad, GstEvent* event);
// ::GstFlowReturn gst_pad_store_sticky_event (::GstPad* pad, ::GstEvent* event);
GI_INLINE_DECL Gst::FlowReturn store_sticky_event (Gst::Event event) noexcept;

// gboolean gst_pad_unlink (GstPad* srcpad, GstPad* sinkpad);
// gboolean gst_pad_unlink (::GstPad* srcpad, ::GstPad* sinkpad);
GI_INLINE_DECL bool unlink (Gst::Pad sinkpad) noexcept;

// void gst_pad_use_fixed_caps (GstPad* pad);
// void gst_pad_use_fixed_caps (::GstPad* pad);
GI_INLINE_DECL void use_fixed_caps () noexcept;

gi::property_proxy<Gst::Caps, base::PadBase> property_caps()
{ return gi::property_proxy<Gst::Caps, base::PadBase> (*this, "caps"); }
const gi::property_proxy<Gst::Caps, base::PadBase> property_caps() const
{ return gi::property_proxy<Gst::Caps, base::PadBase> (*this, "caps"); }

gi::property_proxy<Gst::PadDirection, base::PadBase> property_direction()
{ return gi::property_proxy<Gst::PadDirection, base::PadBase> (*this, "direction"); }
const gi::property_proxy<Gst::PadDirection, base::PadBase> property_direction() const
{ return gi::property_proxy<Gst::PadDirection, base::PadBase> (*this, "direction"); }

gi::property_proxy<gint64, base::PadBase> property_offset()
{ return gi::property_proxy<gint64, base::PadBase> (*this, "offset"); }
const gi::property_proxy<gint64, base::PadBase> property_offset() const
{ return gi::property_proxy<gint64, base::PadBase> (*this, "offset"); }

gi::property_proxy<Gst::PadTemplate, base::PadBase> property_template()
{ return gi::property_proxy<Gst::PadTemplate, base::PadBase> (*this, "template"); }
const gi::property_proxy<Gst::PadTemplate, base::PadBase> property_template() const
{ return gi::property_proxy<Gst::PadTemplate, base::PadBase> (*this, "template"); }

// ::GstPadTemplate* Pad::padtemplate (const ::GstPad* obj);
// ::GstPadTemplate* Pad::padtemplate (const ::GstPad* obj);
GI_INLINE_DECL Gst::PadTemplate padtemplate_ () const noexcept;

// ::GstPadDirection Pad::direction (const ::GstPad* obj);
// ::GstPadDirection Pad::direction (const ::GstPad* obj);
GI_INLINE_DECL Gst::PadDirection direction_ () const noexcept;

//  Pad::direction (::GstPad* obj, ::GstPadDirection _value);
// void Pad::direction (::GstPad* obj, ::GstPadDirection _value);
GI_INLINE_DECL void direction_ (Gst::PadDirection _value) noexcept;

// signal linked
gi::signal_proxy<void(Gst::Pad, Gst::Pad peer)> signal_linked()
{ return gi::signal_proxy<void(Gst::Pad, Gst::Pad peer)> (*this, "linked"); }

// signal unlinked
gi::signal_proxy<void(Gst::Pad, Gst::Pad peer)> signal_unlinked()
{ return gi::signal_proxy<void(Gst::Pad, Gst::Pad peer)> (*this, "unlinked"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/pad_extra_def.hpp>)
#include <gst/pad_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/pad_extra.hpp>)
#include <gst/pad_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Pad : public GI_GST_PAD_BASE
{ typedef GI_GST_PAD_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstPad>
{ typedef Gst::Pad type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class PadClassDef
{
typedef PadClassDef self;
public:
typedef Gst::Pad instance_type;
typedef ::GstPadClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Pad::linked (GstPad* pad, GstPad* peer);
// void Pad::linked (::GstPad* pad, ::GstPad* peer);
virtual void linked_ (Gst::Pad peer) noexcept = 0;

// void Pad::unlinked (GstPad* pad, GstPad* peer);
// void Pad::unlinked (::GstPad* pad, ::GstPad* peer);
virtual void unlinked_ (Gst::Pad peer) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PadClass: public detail::ClassTemplate<Gst::impl::internal::PadClassDef, Gst::impl::internal::ObjectClass>
{
typedef PadClass self;
typedef detail::ClassTemplate<Gst::impl::internal::PadClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Pad::linked (GstPad* pad, GstPad* peer);
// void Pad::linked (::GstPad* pad, ::GstPad* peer);
GI_INLINE_DECL void linked_ (Gst::Pad peer) noexcept override;

// void Pad::unlinked (GstPad* pad, GstPad* peer);
// void Pad::unlinked (::GstPad* pad, ::GstPad* peer);
GI_INLINE_DECL void unlinked_ (Gst::Pad peer) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using PadImpl = detail::ObjectImpl<Pad, internal::PadClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
