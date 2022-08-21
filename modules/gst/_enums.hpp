// AUTO-GENERATED

#ifndef _GI_GST__ENUMS_HPP_
#define _GI_GST__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Gst {

enum class BufferingMode {
  STREAM_ = GST_BUFFERING_STREAM,
  DOWNLOAD_ = GST_BUFFERING_DOWNLOAD,
  TIMESHIFT_ = GST_BUFFERING_TIMESHIFT,
  LIVE_ = GST_BUFFERING_LIVE,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::BufferingMode>
{ typedef GstBufferingMode type; }; 
template<> struct declare_cpptype_of<GstBufferingMode>
{ typedef Gst::BufferingMode type; }; 

template<> struct declare_gtype_of<Gst::BufferingMode>
{ static GType get_type() { return gst_buffering_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class BusSyncReply {
  DROP_ = GST_BUS_DROP,
  PASS_ = GST_BUS_PASS,
  ASYNC_ = GST_BUS_ASYNC,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::BusSyncReply>
{ typedef GstBusSyncReply type; }; 
template<> struct declare_cpptype_of<GstBusSyncReply>
{ typedef Gst::BusSyncReply type; }; 

template<> struct declare_gtype_of<Gst::BusSyncReply>
{ static GType get_type() { return gst_bus_sync_reply_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class CapsIntersectMode {
  ZIG_ZAG_ = GST_CAPS_INTERSECT_ZIG_ZAG,
  FIRST_ = GST_CAPS_INTERSECT_FIRST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::CapsIntersectMode>
{ typedef GstCapsIntersectMode type; }; 
template<> struct declare_cpptype_of<GstCapsIntersectMode>
{ typedef Gst::CapsIntersectMode type; }; 

template<> struct declare_gtype_of<Gst::CapsIntersectMode>
{ static GType get_type() { return gst_caps_intersect_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class ClockEntryType {
  SINGLE_ = GST_CLOCK_ENTRY_SINGLE,
  PERIODIC_ = GST_CLOCK_ENTRY_PERIODIC,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::ClockEntryType>
{ typedef GstClockEntryType type; }; 
template<> struct declare_cpptype_of<GstClockEntryType>
{ typedef Gst::ClockEntryType type; }; 

template<> struct declare_gtype_of<Gst::ClockEntryType>
{ static GType get_type() { return gst_clock_entry_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class ClockReturn {
  OK_ = GST_CLOCK_OK,
  EARLY_ = GST_CLOCK_EARLY,
  UNSCHEDULED_ = GST_CLOCK_UNSCHEDULED,
  BUSY_ = GST_CLOCK_BUSY,
  BADTIME_ = GST_CLOCK_BADTIME,
  ERROR_ = GST_CLOCK_ERROR,
  UNSUPPORTED_ = GST_CLOCK_UNSUPPORTED,
  DONE_ = GST_CLOCK_DONE,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::ClockReturn>
{ typedef GstClockReturn type; }; 
template<> struct declare_cpptype_of<GstClockReturn>
{ typedef Gst::ClockReturn type; }; 

template<> struct declare_gtype_of<Gst::ClockReturn>
{ static GType get_type() { return gst_clock_return_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class ClockType {
  REALTIME_ = GST_CLOCK_TYPE_REALTIME,
  MONOTONIC_ = GST_CLOCK_TYPE_MONOTONIC,
  OTHER_ = GST_CLOCK_TYPE_OTHER,
  TAI_ = GST_CLOCK_TYPE_TAI,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::ClockType>
{ typedef GstClockType type; }; 
template<> struct declare_cpptype_of<GstClockType>
{ typedef Gst::ClockType type; }; 

template<> struct declare_gtype_of<Gst::ClockType>
{ static GType get_type() { return gst_clock_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class CoreError {
  FAILED_ = GST_CORE_ERROR_FAILED,
  TOO_LAZY_ = GST_CORE_ERROR_TOO_LAZY,
  NOT_IMPLEMENTED_ = GST_CORE_ERROR_NOT_IMPLEMENTED,
  STATE_CHANGE_ = GST_CORE_ERROR_STATE_CHANGE,
  PAD_ = GST_CORE_ERROR_PAD,
  THREAD_ = GST_CORE_ERROR_THREAD,
  NEGOTIATION_ = GST_CORE_ERROR_NEGOTIATION,
  EVENT_ = GST_CORE_ERROR_EVENT,
  SEEK_ = GST_CORE_ERROR_SEEK,
  CAPS_ = GST_CORE_ERROR_CAPS,
  TAG_ = GST_CORE_ERROR_TAG,
  MISSING_PLUGIN_ = GST_CORE_ERROR_MISSING_PLUGIN,
  CLOCK_ = GST_CORE_ERROR_CLOCK,
  DISABLED_ = GST_CORE_ERROR_DISABLED,
  NUM_ERRORS_ = GST_CORE_ERROR_NUM_ERRORS,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::CoreError>
{ typedef GstCoreError type; }; 
template<> struct declare_cpptype_of<GstCoreError>
{ typedef Gst::CoreError type; }; 

template<> struct declare_gtype_of<Gst::CoreError>
{ static GType get_type() { return gst_core_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class DebugColorMode {
  OFF_ = GST_DEBUG_COLOR_MODE_OFF,
  ON_ = GST_DEBUG_COLOR_MODE_ON,
  UNIX_ = GST_DEBUG_COLOR_MODE_UNIX,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::DebugColorMode>
{ typedef GstDebugColorMode type; }; 
template<> struct declare_cpptype_of<GstDebugColorMode>
{ typedef Gst::DebugColorMode type; }; 

template<> struct declare_gtype_of<Gst::DebugColorMode>
{ static GType get_type() { return gst_debug_color_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class DebugLevel {
  NONE_ = GST_LEVEL_NONE,
  ERROR_ = GST_LEVEL_ERROR,
  WARNING_ = GST_LEVEL_WARNING,
  FIXME_ = GST_LEVEL_FIXME,
  INFO_ = GST_LEVEL_INFO,
  DEBUG_ = GST_LEVEL_DEBUG,
  LOG_ = GST_LEVEL_LOG,
  TRACE_ = GST_LEVEL_TRACE,
  MEMDUMP_ = GST_LEVEL_MEMDUMP,
  COUNT_ = GST_LEVEL_COUNT,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::DebugLevel>
{ typedef GstDebugLevel type; }; 
template<> struct declare_cpptype_of<GstDebugLevel>
{ typedef Gst::DebugLevel type; }; 

template<> struct declare_gtype_of<Gst::DebugLevel>
{ static GType get_type() { return gst_debug_level_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class EventType {
  UNKNOWN_ = GST_EVENT_UNKNOWN,
  FLUSH_START_ = GST_EVENT_FLUSH_START,
  FLUSH_STOP_ = GST_EVENT_FLUSH_STOP,
  STREAM_START_ = GST_EVENT_STREAM_START,
  CAPS_ = GST_EVENT_CAPS,
  SEGMENT_ = GST_EVENT_SEGMENT,
  STREAM_COLLECTION_ = GST_EVENT_STREAM_COLLECTION,
  TAG_ = GST_EVENT_TAG,
  BUFFERSIZE_ = GST_EVENT_BUFFERSIZE,
  SINK_MESSAGE_ = GST_EVENT_SINK_MESSAGE,
  STREAM_GROUP_DONE_ = GST_EVENT_STREAM_GROUP_DONE,
  EOS_ = GST_EVENT_EOS,
  TOC_ = GST_EVENT_TOC,
  PROTECTION_ = GST_EVENT_PROTECTION,
  SEGMENT_DONE_ = GST_EVENT_SEGMENT_DONE,
  GAP_ = GST_EVENT_GAP,
  INSTANT_RATE_CHANGE_ = GST_EVENT_INSTANT_RATE_CHANGE,
  QOS_ = GST_EVENT_QOS,
  SEEK_ = GST_EVENT_SEEK,
  NAVIGATION_ = GST_EVENT_NAVIGATION,
  LATENCY_ = GST_EVENT_LATENCY,
  STEP_ = GST_EVENT_STEP,
  RECONFIGURE_ = GST_EVENT_RECONFIGURE,
  TOC_SELECT_ = GST_EVENT_TOC_SELECT,
  SELECT_STREAMS_ = GST_EVENT_SELECT_STREAMS,
  INSTANT_RATE_SYNC_TIME_ = GST_EVENT_INSTANT_RATE_SYNC_TIME,
  CUSTOM_UPSTREAM_ = GST_EVENT_CUSTOM_UPSTREAM,
  CUSTOM_DOWNSTREAM_ = GST_EVENT_CUSTOM_DOWNSTREAM,
  CUSTOM_DOWNSTREAM_OOB_ = GST_EVENT_CUSTOM_DOWNSTREAM_OOB,
  CUSTOM_DOWNSTREAM_STICKY_ = GST_EVENT_CUSTOM_DOWNSTREAM_STICKY,
  CUSTOM_BOTH_ = GST_EVENT_CUSTOM_BOTH,
  CUSTOM_BOTH_OOB_ = GST_EVENT_CUSTOM_BOTH_OOB,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::EventType>
{ typedef GstEventType type; }; 
template<> struct declare_cpptype_of<GstEventType>
{ typedef Gst::EventType type; }; 

template<> struct declare_gtype_of<Gst::EventType>
{ static GType get_type() { return gst_event_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class FlowReturn {
  CUSTOM_SUCCESS_2_ = GST_FLOW_CUSTOM_SUCCESS_2,
  CUSTOM_SUCCESS_1_ = GST_FLOW_CUSTOM_SUCCESS_1,
  CUSTOM_SUCCESS_ = GST_FLOW_CUSTOM_SUCCESS,
  OK_ = GST_FLOW_OK,
  NOT_LINKED_ = GST_FLOW_NOT_LINKED,
  FLUSHING_ = GST_FLOW_FLUSHING,
  EOS_ = GST_FLOW_EOS,
  NOT_NEGOTIATED_ = GST_FLOW_NOT_NEGOTIATED,
  ERROR_ = GST_FLOW_ERROR,
  NOT_SUPPORTED_ = GST_FLOW_NOT_SUPPORTED,
  CUSTOM_ERROR_ = GST_FLOW_CUSTOM_ERROR,
  CUSTOM_ERROR_1_ = GST_FLOW_CUSTOM_ERROR_1,
  CUSTOM_ERROR_2_ = GST_FLOW_CUSTOM_ERROR_2,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::FlowReturn>
{ typedef GstFlowReturn type; }; 
template<> struct declare_cpptype_of<GstFlowReturn>
{ typedef Gst::FlowReturn type; }; 

template<> struct declare_gtype_of<Gst::FlowReturn>
{ static GType get_type() { return gst_flow_return_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class Format {
  UNDEFINED_ = GST_FORMAT_UNDEFINED,
  DEFAULT_ = GST_FORMAT_DEFAULT,
  BYTES_ = GST_FORMAT_BYTES,
  TIME_ = GST_FORMAT_TIME,
  BUFFERS_ = GST_FORMAT_BUFFERS,
  PERCENT_ = GST_FORMAT_PERCENT,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::Format>
{ typedef GstFormat type; }; 
template<> struct declare_cpptype_of<GstFormat>
{ typedef Gst::Format type; }; 

template<> struct declare_gtype_of<Gst::Format>
{ static GType get_type() { return gst_format_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class IteratorItem {
  SKIP_ = GST_ITERATOR_ITEM_SKIP,
  PASS_ = GST_ITERATOR_ITEM_PASS,
  END_ = GST_ITERATOR_ITEM_END,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::IteratorItem>
{ typedef GstIteratorItem type; }; 
template<> struct declare_cpptype_of<GstIteratorItem>
{ typedef Gst::IteratorItem type; }; 

template<> struct declare_gtype_of<Gst::IteratorItem>
{ static GType get_type() { return gst_iterator_item_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class IteratorResult {
  DONE_ = GST_ITERATOR_DONE,
  OK_ = GST_ITERATOR_OK,
  RESYNC_ = GST_ITERATOR_RESYNC,
  ERROR_ = GST_ITERATOR_ERROR,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::IteratorResult>
{ typedef GstIteratorResult type; }; 
template<> struct declare_cpptype_of<GstIteratorResult>
{ typedef Gst::IteratorResult type; }; 

template<> struct declare_gtype_of<Gst::IteratorResult>
{ static GType get_type() { return gst_iterator_result_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class LibraryError {
  FAILED_ = GST_LIBRARY_ERROR_FAILED,
  TOO_LAZY_ = GST_LIBRARY_ERROR_TOO_LAZY,
  INIT_ = GST_LIBRARY_ERROR_INIT,
  SHUTDOWN_ = GST_LIBRARY_ERROR_SHUTDOWN,
  SETTINGS_ = GST_LIBRARY_ERROR_SETTINGS,
  ENCODE_ = GST_LIBRARY_ERROR_ENCODE,
  NUM_ERRORS_ = GST_LIBRARY_ERROR_NUM_ERRORS,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::LibraryError>
{ typedef GstLibraryError type; }; 
template<> struct declare_cpptype_of<GstLibraryError>
{ typedef Gst::LibraryError type; }; 

template<> struct declare_gtype_of<Gst::LibraryError>
{ static GType get_type() { return gst_library_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class PadDirection {
  UNKNOWN_ = GST_PAD_UNKNOWN,
  SRC_ = GST_PAD_SRC,
  SINK_ = GST_PAD_SINK,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PadDirection>
{ typedef GstPadDirection type; }; 
template<> struct declare_cpptype_of<GstPadDirection>
{ typedef Gst::PadDirection type; }; 

template<> struct declare_gtype_of<Gst::PadDirection>
{ static GType get_type() { return gst_pad_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class PadLinkReturn {
  OK_ = GST_PAD_LINK_OK,
  WRONG_HIERARCHY_ = GST_PAD_LINK_WRONG_HIERARCHY,
  WAS_LINKED_ = GST_PAD_LINK_WAS_LINKED,
  WRONG_DIRECTION_ = GST_PAD_LINK_WRONG_DIRECTION,
  NOFORMAT_ = GST_PAD_LINK_NOFORMAT,
  NOSCHED_ = GST_PAD_LINK_NOSCHED,
  REFUSED_ = GST_PAD_LINK_REFUSED,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PadLinkReturn>
{ typedef GstPadLinkReturn type; }; 
template<> struct declare_cpptype_of<GstPadLinkReturn>
{ typedef Gst::PadLinkReturn type; }; 

template<> struct declare_gtype_of<Gst::PadLinkReturn>
{ static GType get_type() { return gst_pad_link_return_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class PadMode {
  NONE_ = GST_PAD_MODE_NONE,
  PUSH_ = GST_PAD_MODE_PUSH,
  PULL_ = GST_PAD_MODE_PULL,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PadMode>
{ typedef GstPadMode type; }; 
template<> struct declare_cpptype_of<GstPadMode>
{ typedef Gst::PadMode type; }; 

template<> struct declare_gtype_of<Gst::PadMode>
{ static GType get_type() { return gst_pad_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class PadPresence {
  ALWAYS_ = GST_PAD_ALWAYS,
  SOMETIMES_ = GST_PAD_SOMETIMES,
  REQUEST_ = GST_PAD_REQUEST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PadPresence>
{ typedef GstPadPresence type; }; 
template<> struct declare_cpptype_of<GstPadPresence>
{ typedef Gst::PadPresence type; }; 

template<> struct declare_gtype_of<Gst::PadPresence>
{ static GType get_type() { return gst_pad_presence_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class PadProbeReturn {
  DROP_ = GST_PAD_PROBE_DROP,
  OK_ = GST_PAD_PROBE_OK,
  REMOVE_ = GST_PAD_PROBE_REMOVE,
  PASS_ = GST_PAD_PROBE_PASS,
  HANDLED_ = GST_PAD_PROBE_HANDLED,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PadProbeReturn>
{ typedef GstPadProbeReturn type; }; 
template<> struct declare_cpptype_of<GstPadProbeReturn>
{ typedef Gst::PadProbeReturn type; }; 

template<> struct declare_gtype_of<Gst::PadProbeReturn>
{ static GType get_type() { return gst_pad_probe_return_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class ParseError {
  SYNTAX_ = GST_PARSE_ERROR_SYNTAX,
  NO_SUCH_ELEMENT_ = GST_PARSE_ERROR_NO_SUCH_ELEMENT,
  NO_SUCH_PROPERTY_ = GST_PARSE_ERROR_NO_SUCH_PROPERTY,
  LINK_ = GST_PARSE_ERROR_LINK,
  COULD_NOT_SET_PROPERTY_ = GST_PARSE_ERROR_COULD_NOT_SET_PROPERTY,
  EMPTY_BIN_ = GST_PARSE_ERROR_EMPTY_BIN,
  EMPTY_ = GST_PARSE_ERROR_EMPTY,
  DELAYED_LINK_ = GST_PARSE_ERROR_DELAYED_LINK,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::ParseError>
{ typedef GstParseError type; }; 
template<> struct declare_cpptype_of<GstParseError>
{ typedef Gst::ParseError type; }; 

template<> struct declare_gtype_of<Gst::ParseError>
{ static GType get_type() { return gst_parse_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class PluginError {
  MODULE_ = GST_PLUGIN_ERROR_MODULE,
  DEPENDENCIES_ = GST_PLUGIN_ERROR_DEPENDENCIES,
  NAME_MISMATCH_ = GST_PLUGIN_ERROR_NAME_MISMATCH,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PluginError>
{ typedef GstPluginError type; }; 
template<> struct declare_cpptype_of<GstPluginError>
{ typedef Gst::PluginError type; }; 

template<> struct declare_gtype_of<Gst::PluginError>
{ static GType get_type() { return gst_plugin_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class ProgressType {
  START_ = GST_PROGRESS_TYPE_START,
  CONTINUE_ = GST_PROGRESS_TYPE_CONTINUE,
  COMPLETE_ = GST_PROGRESS_TYPE_COMPLETE,
  CANCELED_ = GST_PROGRESS_TYPE_CANCELED,
  ERROR_ = GST_PROGRESS_TYPE_ERROR,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::ProgressType>
{ typedef GstProgressType type; }; 
template<> struct declare_cpptype_of<GstProgressType>
{ typedef Gst::ProgressType type; }; 

template<> struct declare_gtype_of<Gst::ProgressType>
{ static GType get_type() { return gst_progress_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class PromiseResult {
  PENDING_ = GST_PROMISE_RESULT_PENDING,
  INTERRUPTED_ = GST_PROMISE_RESULT_INTERRUPTED,
  REPLIED_ = GST_PROMISE_RESULT_REPLIED,
  EXPIRED_ = GST_PROMISE_RESULT_EXPIRED,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PromiseResult>
{ typedef GstPromiseResult type; }; 
template<> struct declare_cpptype_of<GstPromiseResult>
{ typedef Gst::PromiseResult type; }; 

template<> struct declare_gtype_of<Gst::PromiseResult>
{ static GType get_type() { return gst_promise_result_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class QOSType {
  OVERFLOW_ = GST_QOS_TYPE_OVERFLOW,
  UNDERFLOW_ = GST_QOS_TYPE_UNDERFLOW,
  THROTTLE_ = GST_QOS_TYPE_THROTTLE,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::QOSType>
{ typedef GstQOSType type; }; 
template<> struct declare_cpptype_of<GstQOSType>
{ typedef Gst::QOSType type; }; 

template<> struct declare_gtype_of<Gst::QOSType>
{ static GType get_type() { return gst_qos_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class QueryType {
  UNKNOWN_ = GST_QUERY_UNKNOWN,
  POSITION_ = GST_QUERY_POSITION,
  DURATION_ = GST_QUERY_DURATION,
  LATENCY_ = GST_QUERY_LATENCY,
  JITTER_ = GST_QUERY_JITTER,
  RATE_ = GST_QUERY_RATE,
  SEEKING_ = GST_QUERY_SEEKING,
  SEGMENT_ = GST_QUERY_SEGMENT,
  CONVERT_ = GST_QUERY_CONVERT,
  FORMATS_ = GST_QUERY_FORMATS,
  BUFFERING_ = GST_QUERY_BUFFERING,
  CUSTOM_ = GST_QUERY_CUSTOM,
  URI_ = GST_QUERY_URI,
  ALLOCATION_ = GST_QUERY_ALLOCATION,
  SCHEDULING_ = GST_QUERY_SCHEDULING,
  ACCEPT_CAPS_ = GST_QUERY_ACCEPT_CAPS,
  CAPS_ = GST_QUERY_CAPS,
  DRAIN_ = GST_QUERY_DRAIN,
  CONTEXT_ = GST_QUERY_CONTEXT,
  BITRATE_ = GST_QUERY_BITRATE,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::QueryType>
{ typedef GstQueryType type; }; 
template<> struct declare_cpptype_of<GstQueryType>
{ typedef Gst::QueryType type; }; 

template<> struct declare_gtype_of<Gst::QueryType>
{ static GType get_type() { return gst_query_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class Rank {
  NONE_ = GST_RANK_NONE,
  MARGINAL_ = GST_RANK_MARGINAL,
  SECONDARY_ = GST_RANK_SECONDARY,
  PRIMARY_ = GST_RANK_PRIMARY,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::Rank>
{ typedef GstRank type; }; 
template<> struct declare_cpptype_of<GstRank>
{ typedef Gst::Rank type; }; 

template<> struct declare_gtype_of<Gst::Rank>
{ static GType get_type() { return gst_rank_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class ResourceError {
  FAILED_ = GST_RESOURCE_ERROR_FAILED,
  TOO_LAZY_ = GST_RESOURCE_ERROR_TOO_LAZY,
  NOT_FOUND_ = GST_RESOURCE_ERROR_NOT_FOUND,
  BUSY_ = GST_RESOURCE_ERROR_BUSY,
  OPEN_READ_ = GST_RESOURCE_ERROR_OPEN_READ,
  OPEN_WRITE_ = GST_RESOURCE_ERROR_OPEN_WRITE,
  OPEN_READ_WRITE_ = GST_RESOURCE_ERROR_OPEN_READ_WRITE,
  CLOSE_ = GST_RESOURCE_ERROR_CLOSE,
  READ_ = GST_RESOURCE_ERROR_READ,
  WRITE_ = GST_RESOURCE_ERROR_WRITE,
  SEEK_ = GST_RESOURCE_ERROR_SEEK,
  SYNC_ = GST_RESOURCE_ERROR_SYNC,
  SETTINGS_ = GST_RESOURCE_ERROR_SETTINGS,
  NO_SPACE_LEFT_ = GST_RESOURCE_ERROR_NO_SPACE_LEFT,
  NOT_AUTHORIZED_ = GST_RESOURCE_ERROR_NOT_AUTHORIZED,
  NUM_ERRORS_ = GST_RESOURCE_ERROR_NUM_ERRORS,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::ResourceError>
{ typedef GstResourceError type; }; 
template<> struct declare_cpptype_of<GstResourceError>
{ typedef Gst::ResourceError type; }; 

template<> struct declare_gtype_of<Gst::ResourceError>
{ static GType get_type() { return gst_resource_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class SearchMode {
  EXACT_ = GST_SEARCH_MODE_EXACT,
  BEFORE_ = GST_SEARCH_MODE_BEFORE,
  AFTER_ = GST_SEARCH_MODE_AFTER,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::SearchMode>
{ typedef GstSearchMode type; }; 
template<> struct declare_cpptype_of<GstSearchMode>
{ typedef Gst::SearchMode type; }; 

template<> struct declare_gtype_of<Gst::SearchMode>
{ static GType get_type() { return gst_search_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class SeekType {
  NONE_ = GST_SEEK_TYPE_NONE,
  SET_ = GST_SEEK_TYPE_SET,
  END_ = GST_SEEK_TYPE_END,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::SeekType>
{ typedef GstSeekType type; }; 
template<> struct declare_cpptype_of<GstSeekType>
{ typedef Gst::SeekType type; }; 

template<> struct declare_gtype_of<Gst::SeekType>
{ static GType get_type() { return gst_seek_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class State {
  VOID_PENDING_ = GST_STATE_VOID_PENDING,
  NULL_ = GST_STATE_NULL,
  READY_ = GST_STATE_READY,
  PAUSED_ = GST_STATE_PAUSED,
  PLAYING_ = GST_STATE_PLAYING,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::State>
{ typedef GstState type; }; 
template<> struct declare_cpptype_of<GstState>
{ typedef Gst::State type; }; 

template<> struct declare_gtype_of<Gst::State>
{ static GType get_type() { return gst_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class StateChange {
  NULL_TO_READY_ = GST_STATE_CHANGE_NULL_TO_READY,
  READY_TO_PAUSED_ = GST_STATE_CHANGE_READY_TO_PAUSED,
  PAUSED_TO_PLAYING_ = GST_STATE_CHANGE_PAUSED_TO_PLAYING,
  PLAYING_TO_PAUSED_ = GST_STATE_CHANGE_PLAYING_TO_PAUSED,
  PAUSED_TO_READY_ = GST_STATE_CHANGE_PAUSED_TO_READY,
  READY_TO_NULL_ = GST_STATE_CHANGE_READY_TO_NULL,
  NULL_TO_NULL_ = GST_STATE_CHANGE_NULL_TO_NULL,
  READY_TO_READY_ = GST_STATE_CHANGE_READY_TO_READY,
  PAUSED_TO_PAUSED_ = GST_STATE_CHANGE_PAUSED_TO_PAUSED,
  PLAYING_TO_PLAYING_ = GST_STATE_CHANGE_PLAYING_TO_PLAYING,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::StateChange>
{ typedef GstStateChange type; }; 
template<> struct declare_cpptype_of<GstStateChange>
{ typedef Gst::StateChange type; }; 

template<> struct declare_gtype_of<Gst::StateChange>
{ static GType get_type() { return gst_state_change_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class StateChangeReturn {
  FAILURE_ = GST_STATE_CHANGE_FAILURE,
  SUCCESS_ = GST_STATE_CHANGE_SUCCESS,
  ASYNC_ = GST_STATE_CHANGE_ASYNC,
  NO_PREROLL_ = GST_STATE_CHANGE_NO_PREROLL,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::StateChangeReturn>
{ typedef GstStateChangeReturn type; }; 
template<> struct declare_cpptype_of<GstStateChangeReturn>
{ typedef Gst::StateChangeReturn type; }; 

template<> struct declare_gtype_of<Gst::StateChangeReturn>
{ static GType get_type() { return gst_state_change_return_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class StreamError {
  FAILED_ = GST_STREAM_ERROR_FAILED,
  TOO_LAZY_ = GST_STREAM_ERROR_TOO_LAZY,
  NOT_IMPLEMENTED_ = GST_STREAM_ERROR_NOT_IMPLEMENTED,
  TYPE_NOT_FOUND_ = GST_STREAM_ERROR_TYPE_NOT_FOUND,
  WRONG_TYPE_ = GST_STREAM_ERROR_WRONG_TYPE,
  CODEC_NOT_FOUND_ = GST_STREAM_ERROR_CODEC_NOT_FOUND,
  DECODE_ = GST_STREAM_ERROR_DECODE,
  ENCODE_ = GST_STREAM_ERROR_ENCODE,
  DEMUX_ = GST_STREAM_ERROR_DEMUX,
  MUX_ = GST_STREAM_ERROR_MUX,
  FORMAT_ = GST_STREAM_ERROR_FORMAT,
  DECRYPT_ = GST_STREAM_ERROR_DECRYPT,
  DECRYPT_NOKEY_ = GST_STREAM_ERROR_DECRYPT_NOKEY,
  NUM_ERRORS_ = GST_STREAM_ERROR_NUM_ERRORS,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::StreamError>
{ typedef GstStreamError type; }; 
template<> struct declare_cpptype_of<GstStreamError>
{ typedef Gst::StreamError type; }; 

template<> struct declare_gtype_of<Gst::StreamError>
{ static GType get_type() { return gst_stream_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class StreamStatusType {
  CREATE_ = GST_STREAM_STATUS_TYPE_CREATE,
  ENTER_ = GST_STREAM_STATUS_TYPE_ENTER,
  LEAVE_ = GST_STREAM_STATUS_TYPE_LEAVE,
  DESTROY_ = GST_STREAM_STATUS_TYPE_DESTROY,
  START_ = GST_STREAM_STATUS_TYPE_START,
  PAUSE_ = GST_STREAM_STATUS_TYPE_PAUSE,
  STOP_ = GST_STREAM_STATUS_TYPE_STOP,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::StreamStatusType>
{ typedef GstStreamStatusType type; }; 
template<> struct declare_cpptype_of<GstStreamStatusType>
{ typedef Gst::StreamStatusType type; }; 

template<> struct declare_gtype_of<Gst::StreamStatusType>
{ static GType get_type() { return gst_stream_status_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class StructureChangeType {
  LINK_ = GST_STRUCTURE_CHANGE_TYPE_PAD_LINK,
  UNLINK_ = GST_STRUCTURE_CHANGE_TYPE_PAD_UNLINK,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::StructureChangeType>
{ typedef GstStructureChangeType type; }; 
template<> struct declare_cpptype_of<GstStructureChangeType>
{ typedef Gst::StructureChangeType type; }; 

template<> struct declare_gtype_of<Gst::StructureChangeType>
{ static GType get_type() { return gst_structure_change_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class TagFlag {
  UNDEFINED_ = GST_TAG_FLAG_UNDEFINED,
  META_ = GST_TAG_FLAG_META,
  ENCODED_ = GST_TAG_FLAG_ENCODED,
  DECODED_ = GST_TAG_FLAG_DECODED,
  COUNT_ = GST_TAG_FLAG_COUNT,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::TagFlag>
{ typedef GstTagFlag type; }; 
template<> struct declare_cpptype_of<GstTagFlag>
{ typedef Gst::TagFlag type; }; 

template<> struct declare_gtype_of<Gst::TagFlag>
{ static GType get_type() { return gst_tag_flag_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class TagMergeMode {
  UNDEFINED_ = GST_TAG_MERGE_UNDEFINED,
  REPLACE_ALL_ = GST_TAG_MERGE_REPLACE_ALL,
  REPLACE_ = GST_TAG_MERGE_REPLACE,
  APPEND_ = GST_TAG_MERGE_APPEND,
  PREPEND_ = GST_TAG_MERGE_PREPEND,
  KEEP_ = GST_TAG_MERGE_KEEP,
  KEEP_ALL_ = GST_TAG_MERGE_KEEP_ALL,
  COUNT_ = GST_TAG_MERGE_COUNT,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::TagMergeMode>
{ typedef GstTagMergeMode type; }; 
template<> struct declare_cpptype_of<GstTagMergeMode>
{ typedef Gst::TagMergeMode type; }; 

template<> struct declare_gtype_of<Gst::TagMergeMode>
{ static GType get_type() { return gst_tag_merge_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class TagScope {
  STREAM_ = GST_TAG_SCOPE_STREAM,
  GLOBAL_ = GST_TAG_SCOPE_GLOBAL,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::TagScope>
{ typedef GstTagScope type; }; 
template<> struct declare_cpptype_of<GstTagScope>
{ typedef Gst::TagScope type; }; 

template<> struct declare_gtype_of<Gst::TagScope>
{ static GType get_type() { return gst_tag_scope_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class TaskState {
  STARTED_ = GST_TASK_STARTED,
  STOPPED_ = GST_TASK_STOPPED,
  PAUSED_ = GST_TASK_PAUSED,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::TaskState>
{ typedef GstTaskState type; }; 
template<> struct declare_cpptype_of<GstTaskState>
{ typedef Gst::TaskState type; }; 

template<> struct declare_gtype_of<Gst::TaskState>
{ static GType get_type() { return gst_task_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class TocEntryType {
  ANGLE_ = GST_TOC_ENTRY_TYPE_ANGLE,
  VERSION_ = GST_TOC_ENTRY_TYPE_VERSION,
  EDITION_ = GST_TOC_ENTRY_TYPE_EDITION,
  INVALID_ = GST_TOC_ENTRY_TYPE_INVALID,
  TITLE_ = GST_TOC_ENTRY_TYPE_TITLE,
  TRACK_ = GST_TOC_ENTRY_TYPE_TRACK,
  CHAPTER_ = GST_TOC_ENTRY_TYPE_CHAPTER,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::TocEntryType>
{ typedef GstTocEntryType type; }; 
template<> struct declare_cpptype_of<GstTocEntryType>
{ typedef Gst::TocEntryType type; }; 

template<> struct declare_gtype_of<Gst::TocEntryType>
{ static GType get_type() { return gst_toc_entry_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class TocLoopType {
  NONE_ = GST_TOC_LOOP_NONE,
  FORWARD_ = GST_TOC_LOOP_FORWARD,
  REVERSE_ = GST_TOC_LOOP_REVERSE,
  PING_PONG_ = GST_TOC_LOOP_PING_PONG,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::TocLoopType>
{ typedef GstTocLoopType type; }; 
template<> struct declare_cpptype_of<GstTocLoopType>
{ typedef Gst::TocLoopType type; }; 

template<> struct declare_gtype_of<Gst::TocLoopType>
{ static GType get_type() { return gst_toc_loop_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class TocScope {
  GLOBAL_ = GST_TOC_SCOPE_GLOBAL,
  CURRENT_ = GST_TOC_SCOPE_CURRENT,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::TocScope>
{ typedef GstTocScope type; }; 
template<> struct declare_cpptype_of<GstTocScope>
{ typedef Gst::TocScope type; }; 

template<> struct declare_gtype_of<Gst::TocScope>
{ static GType get_type() { return gst_toc_scope_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class TracerValueScope {
  PROCESS_ = GST_TRACER_VALUE_SCOPE_PROCESS,
  THREAD_ = GST_TRACER_VALUE_SCOPE_THREAD,
  ELEMENT_ = GST_TRACER_VALUE_SCOPE_ELEMENT,
  PAD_ = GST_TRACER_VALUE_SCOPE_PAD,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::TracerValueScope>
{ typedef GstTracerValueScope type; }; 
template<> struct declare_cpptype_of<GstTracerValueScope>
{ typedef Gst::TracerValueScope type; }; 

template<> struct declare_gtype_of<Gst::TracerValueScope>
{ static GType get_type() { return gst_tracer_value_scope_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class TypeFindProbability {
  NONE_ = GST_TYPE_FIND_NONE,
  MINIMUM_ = GST_TYPE_FIND_MINIMUM,
  POSSIBLE_ = GST_TYPE_FIND_POSSIBLE,
  LIKELY_ = GST_TYPE_FIND_LIKELY,
  NEARLY_CERTAIN_ = GST_TYPE_FIND_NEARLY_CERTAIN,
  MAXIMUM_ = GST_TYPE_FIND_MAXIMUM,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::TypeFindProbability>
{ typedef GstTypeFindProbability type; }; 
template<> struct declare_cpptype_of<GstTypeFindProbability>
{ typedef Gst::TypeFindProbability type; }; 

template<> struct declare_gtype_of<Gst::TypeFindProbability>
{ static GType get_type() { return gst_type_find_probability_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class URIError {
  UNSUPPORTED_PROTOCOL_ = GST_URI_ERROR_UNSUPPORTED_PROTOCOL,
  BAD_URI_ = GST_URI_ERROR_BAD_URI,
  BAD_STATE_ = GST_URI_ERROR_BAD_STATE,
  BAD_REFERENCE_ = GST_URI_ERROR_BAD_REFERENCE,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::URIError>
{ typedef GstURIError type; }; 
template<> struct declare_cpptype_of<GstURIError>
{ typedef Gst::URIError type; }; 

template<> struct declare_gtype_of<Gst::URIError>
{ static GType get_type() { return gst_uri_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

enum class URIType {
  UNKNOWN_ = GST_URI_UNKNOWN,
  SINK_ = GST_URI_SINK,
  SRC_ = GST_URI_SRC,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::URIType>
{ typedef GstURIType type; }; 
template<> struct declare_cpptype_of<GstURIType>
{ typedef Gst::URIType type; }; 

template<> struct declare_gtype_of<Gst::URIType>
{ static GType get_type() { return gst_uri_type_get_type(); } };


} // namespace repository

} // namespace gi


#endif
