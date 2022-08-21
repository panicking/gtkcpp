// AUTO-GENERATED

#ifndef _GI_GST__FLAGS_HPP_
#define _GI_GST__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Gst {

#if defined(AllocatorFlags)
#undef AllocatorFlags
#endif
enum class AllocatorFlags {
  CUSTOM_ALLOC_ = GST_ALLOCATOR_FLAG_CUSTOM_ALLOC,
  LAST_ = GST_ALLOCATOR_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::AllocatorFlags>
{ typedef GstAllocatorFlags type; }; 
template<> struct declare_cpptype_of<GstAllocatorFlags>
{ typedef Gst::AllocatorFlags type; }; 

template<> struct declare_gtype_of<Gst::AllocatorFlags>
{ static GType get_type() { return gst_allocator_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(BinFlags)
#undef BinFlags
#endif
enum class BinFlags {
  NO_RESYNC_ = GST_BIN_FLAG_NO_RESYNC,
  STREAMS_AWARE_ = GST_BIN_FLAG_STREAMS_AWARE,
  LAST_ = GST_BIN_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::BinFlags>
{ typedef GstBinFlags type; }; 
template<> struct declare_cpptype_of<GstBinFlags>
{ typedef Gst::BinFlags type; }; 

template<> struct declare_gtype_of<Gst::BinFlags>
{ static GType get_type() { return gst_bin_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(BufferCopyFlags)
#undef BufferCopyFlags
#endif
enum class BufferCopyFlags {
  NONE_ = GST_BUFFER_COPY_NONE,
  FLAGS_ = GST_BUFFER_COPY_FLAGS,
  TIMESTAMPS_ = GST_BUFFER_COPY_TIMESTAMPS,
  META_ = GST_BUFFER_COPY_META,
  MEMORY_ = GST_BUFFER_COPY_MEMORY,
  MERGE_ = GST_BUFFER_COPY_MERGE,
  DEEP_ = GST_BUFFER_COPY_DEEP,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::BufferCopyFlags>
{ typedef GstBufferCopyFlags type; }; 
template<> struct declare_cpptype_of<GstBufferCopyFlags>
{ typedef Gst::BufferCopyFlags type; }; 

template<> struct declare_gtype_of<Gst::BufferCopyFlags>
{ static GType get_type() { return gst_buffer_copy_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(BufferFlags)
#undef BufferFlags
#endif
enum class BufferFlags {
  LIVE_ = GST_BUFFER_FLAG_LIVE,
  DECODE_ONLY_ = GST_BUFFER_FLAG_DECODE_ONLY,
  DISCONT_ = GST_BUFFER_FLAG_DISCONT,
  RESYNC_ = GST_BUFFER_FLAG_RESYNC,
  CORRUPTED_ = GST_BUFFER_FLAG_CORRUPTED,
  MARKER_ = GST_BUFFER_FLAG_MARKER,
  HEADER_ = GST_BUFFER_FLAG_HEADER,
  GAP_ = GST_BUFFER_FLAG_GAP,
  DROPPABLE_ = GST_BUFFER_FLAG_DROPPABLE,
  DELTA_UNIT_ = GST_BUFFER_FLAG_DELTA_UNIT,
  TAG_MEMORY_ = GST_BUFFER_FLAG_TAG_MEMORY,
  SYNC_AFTER_ = GST_BUFFER_FLAG_SYNC_AFTER,
  NON_DROPPABLE_ = GST_BUFFER_FLAG_NON_DROPPABLE,
  LAST_ = GST_BUFFER_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::BufferFlags>
{ typedef GstBufferFlags type; }; 
template<> struct declare_cpptype_of<GstBufferFlags>
{ typedef Gst::BufferFlags type; }; 

template<> struct declare_gtype_of<Gst::BufferFlags>
{ static GType get_type() { return gst_buffer_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(BufferPoolAcquireFlags)
#undef BufferPoolAcquireFlags
#endif
enum class BufferPoolAcquireFlags {
  NONE_ = GST_BUFFER_POOL_ACQUIRE_FLAG_NONE,
  KEY_UNIT_ = GST_BUFFER_POOL_ACQUIRE_FLAG_KEY_UNIT,
  DONTWAIT_ = GST_BUFFER_POOL_ACQUIRE_FLAG_DONTWAIT,
  DISCONT_ = GST_BUFFER_POOL_ACQUIRE_FLAG_DISCONT,
  LAST_ = GST_BUFFER_POOL_ACQUIRE_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::BufferPoolAcquireFlags>
{ typedef GstBufferPoolAcquireFlags type; }; 
template<> struct declare_cpptype_of<GstBufferPoolAcquireFlags>
{ typedef Gst::BufferPoolAcquireFlags type; }; 

template<> struct declare_gtype_of<Gst::BufferPoolAcquireFlags>
{ static GType get_type() { return gst_buffer_pool_acquire_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(BusFlags)
#undef BusFlags
#endif
enum class BusFlags {
  FLUSHING_ = GST_BUS_FLUSHING,
  FLAG_LAST_ = GST_BUS_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::BusFlags>
{ typedef GstBusFlags type; }; 
template<> struct declare_cpptype_of<GstBusFlags>
{ typedef Gst::BusFlags type; }; 

template<> struct declare_gtype_of<Gst::BusFlags>
{ static GType get_type() { return gst_bus_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(CapsFlags)
#undef CapsFlags
#endif
enum class CapsFlags {
  ANY_ = GST_CAPS_FLAG_ANY,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::CapsFlags>
{ typedef GstCapsFlags type; }; 
template<> struct declare_cpptype_of<GstCapsFlags>
{ typedef Gst::CapsFlags type; }; 

template<> struct declare_gtype_of<Gst::CapsFlags>
{ static GType get_type() { return gst_caps_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(ClockFlags)
#undef ClockFlags
#endif
enum class ClockFlags {
  CAN_DO_SINGLE_SYNC_ = GST_CLOCK_FLAG_CAN_DO_SINGLE_SYNC,
  CAN_DO_SINGLE_ASYNC_ = GST_CLOCK_FLAG_CAN_DO_SINGLE_ASYNC,
  CAN_DO_PERIODIC_SYNC_ = GST_CLOCK_FLAG_CAN_DO_PERIODIC_SYNC,
  CAN_DO_PERIODIC_ASYNC_ = GST_CLOCK_FLAG_CAN_DO_PERIODIC_ASYNC,
  CAN_SET_RESOLUTION_ = GST_CLOCK_FLAG_CAN_SET_RESOLUTION,
  CAN_SET_MASTER_ = GST_CLOCK_FLAG_CAN_SET_MASTER,
  NEEDS_STARTUP_SYNC_ = GST_CLOCK_FLAG_NEEDS_STARTUP_SYNC,
  LAST_ = GST_CLOCK_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::ClockFlags>
{ typedef GstClockFlags type; }; 
template<> struct declare_cpptype_of<GstClockFlags>
{ typedef Gst::ClockFlags type; }; 

template<> struct declare_gtype_of<Gst::ClockFlags>
{ static GType get_type() { return gst_clock_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(DebugColorFlags)
#undef DebugColorFlags
#endif
enum class DebugColorFlags {
  FG_BLACK_ = GST_DEBUG_FG_BLACK,
  FG_RED_ = GST_DEBUG_FG_RED,
  FG_GREEN_ = GST_DEBUG_FG_GREEN,
  FG_YELLOW_ = GST_DEBUG_FG_YELLOW,
  FG_BLUE_ = GST_DEBUG_FG_BLUE,
  FG_MAGENTA_ = GST_DEBUG_FG_MAGENTA,
  FG_CYAN_ = GST_DEBUG_FG_CYAN,
  FG_WHITE_ = GST_DEBUG_FG_WHITE,
  BG_BLACK_ = GST_DEBUG_BG_BLACK,
  BG_RED_ = GST_DEBUG_BG_RED,
  BG_GREEN_ = GST_DEBUG_BG_GREEN,
  BG_YELLOW_ = GST_DEBUG_BG_YELLOW,
  BG_BLUE_ = GST_DEBUG_BG_BLUE,
  BG_MAGENTA_ = GST_DEBUG_BG_MAGENTA,
  BG_CYAN_ = GST_DEBUG_BG_CYAN,
  BG_WHITE_ = GST_DEBUG_BG_WHITE,
  BOLD_ = GST_DEBUG_BOLD,
  UNDERLINE_ = GST_DEBUG_UNDERLINE,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::DebugColorFlags>
{ typedef GstDebugColorFlags type; }; 
template<> struct declare_cpptype_of<GstDebugColorFlags>
{ typedef Gst::DebugColorFlags type; }; 

template<> struct declare_gtype_of<Gst::DebugColorFlags>
{ static GType get_type() { return gst_debug_color_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(DebugGraphDetails)
#undef DebugGraphDetails
#endif
enum class DebugGraphDetails {
  MEDIA_TYPE_ = GST_DEBUG_GRAPH_SHOW_MEDIA_TYPE,
  CAPS_DETAILS_ = GST_DEBUG_GRAPH_SHOW_CAPS_DETAILS,
  NON_DEFAULT_PARAMS_ = GST_DEBUG_GRAPH_SHOW_NON_DEFAULT_PARAMS,
  STATES_ = GST_DEBUG_GRAPH_SHOW_STATES,
  FULL_PARAMS_ = GST_DEBUG_GRAPH_SHOW_FULL_PARAMS,
  ALL_ = GST_DEBUG_GRAPH_SHOW_ALL,
  VERBOSE_ = GST_DEBUG_GRAPH_SHOW_VERBOSE,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::DebugGraphDetails>
{ typedef GstDebugGraphDetails type; }; 
template<> struct declare_cpptype_of<GstDebugGraphDetails>
{ typedef Gst::DebugGraphDetails type; }; 

template<> struct declare_gtype_of<Gst::DebugGraphDetails>
{ static GType get_type() { return gst_debug_graph_details_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(ElementFlags)
#undef ElementFlags
#endif
enum class ElementFlags {
  LOCKED_STATE_ = GST_ELEMENT_FLAG_LOCKED_STATE,
  SINK_ = GST_ELEMENT_FLAG_SINK,
  SOURCE_ = GST_ELEMENT_FLAG_SOURCE,
  PROVIDE_CLOCK_ = GST_ELEMENT_FLAG_PROVIDE_CLOCK,
  REQUIRE_CLOCK_ = GST_ELEMENT_FLAG_REQUIRE_CLOCK,
  INDEXABLE_ = GST_ELEMENT_FLAG_INDEXABLE,
  LAST_ = GST_ELEMENT_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::ElementFlags>
{ typedef GstElementFlags type; }; 
template<> struct declare_cpptype_of<GstElementFlags>
{ typedef Gst::ElementFlags type; }; 

template<> struct declare_gtype_of<Gst::ElementFlags>
{ static GType get_type() { return gst_element_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(EventTypeFlags)
#undef EventTypeFlags
#endif
enum class EventTypeFlags {
  UPSTREAM_ = GST_EVENT_TYPE_UPSTREAM,
  DOWNSTREAM_ = GST_EVENT_TYPE_DOWNSTREAM,
  SERIALIZED_ = GST_EVENT_TYPE_SERIALIZED,
  STICKY_ = GST_EVENT_TYPE_STICKY,
  STICKY_MULTI_ = GST_EVENT_TYPE_STICKY_MULTI,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::EventTypeFlags>
{ typedef GstEventTypeFlags type; }; 
template<> struct declare_cpptype_of<GstEventTypeFlags>
{ typedef Gst::EventTypeFlags type; }; 

template<> struct declare_gtype_of<Gst::EventTypeFlags>
{ static GType get_type() { return gst_event_type_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(GapFlags)
#undef GapFlags
#endif
enum class GapFlags {
  DATA_ = GST_GAP_FLAG_MISSING_DATA,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::GapFlags>
{ typedef GstGapFlags type; }; 
template<> struct declare_cpptype_of<GstGapFlags>
{ typedef Gst::GapFlags type; }; 

template<> struct declare_gtype_of<Gst::GapFlags>
{ static GType get_type() { return gst_gap_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(LockFlags)
#undef LockFlags
#endif
enum class LockFlags {
  READ_ = GST_LOCK_FLAG_READ,
  WRITE_ = GST_LOCK_FLAG_WRITE,
  EXCLUSIVE_ = GST_LOCK_FLAG_EXCLUSIVE,
  LAST_ = GST_LOCK_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::LockFlags>
{ typedef GstLockFlags type; }; 
template<> struct declare_cpptype_of<GstLockFlags>
{ typedef Gst::LockFlags type; }; 

template<> struct declare_gtype_of<Gst::LockFlags>
{ static GType get_type() { return gst_lock_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(MapFlags)
#undef MapFlags
#endif
enum class MapFlags {
  READ_ = GST_MAP_READ,
  WRITE_ = GST_MAP_WRITE,
  FLAG_LAST_ = GST_MAP_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::MapFlags>
{ typedef GstMapFlags type; }; 
template<> struct declare_cpptype_of<GstMapFlags>
{ typedef Gst::MapFlags type; }; 

template<> struct declare_gtype_of<Gst::MapFlags>
{ static GType get_type() { return gst_map_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(MemoryFlags)
#undef MemoryFlags
#endif
enum class MemoryFlags {
  READONLY_ = GST_MEMORY_FLAG_READONLY,
  NO_SHARE_ = GST_MEMORY_FLAG_NO_SHARE,
  ZERO_PREFIXED_ = GST_MEMORY_FLAG_ZERO_PREFIXED,
  ZERO_PADDED_ = GST_MEMORY_FLAG_ZERO_PADDED,
  PHYSICALLY_CONTIGUOUS_ = GST_MEMORY_FLAG_PHYSICALLY_CONTIGUOUS,
  NOT_MAPPABLE_ = GST_MEMORY_FLAG_NOT_MAPPABLE,
  LAST_ = GST_MEMORY_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::MemoryFlags>
{ typedef GstMemoryFlags type; }; 
template<> struct declare_cpptype_of<GstMemoryFlags>
{ typedef Gst::MemoryFlags type; }; 

template<> struct declare_gtype_of<Gst::MemoryFlags>
{ static GType get_type() { return gst_memory_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(MessageType)
#undef MessageType
#endif
enum class MessageType {
  UNKNOWN_ = GST_MESSAGE_UNKNOWN,
  EOS_ = GST_MESSAGE_EOS,
  ERROR_ = GST_MESSAGE_ERROR,
  WARNING_ = GST_MESSAGE_WARNING,
  INFO_ = GST_MESSAGE_INFO,
  TAG_ = GST_MESSAGE_TAG,
  BUFFERING_ = GST_MESSAGE_BUFFERING,
  STATE_CHANGED_ = GST_MESSAGE_STATE_CHANGED,
  STATE_DIRTY_ = GST_MESSAGE_STATE_DIRTY,
  STEP_DONE_ = GST_MESSAGE_STEP_DONE,
  CLOCK_PROVIDE_ = GST_MESSAGE_CLOCK_PROVIDE,
  CLOCK_LOST_ = GST_MESSAGE_CLOCK_LOST,
  NEW_CLOCK_ = GST_MESSAGE_NEW_CLOCK,
  STRUCTURE_CHANGE_ = GST_MESSAGE_STRUCTURE_CHANGE,
  STREAM_STATUS_ = GST_MESSAGE_STREAM_STATUS,
  APPLICATION_ = GST_MESSAGE_APPLICATION,
  ELEMENT_ = GST_MESSAGE_ELEMENT,
  SEGMENT_START_ = GST_MESSAGE_SEGMENT_START,
  SEGMENT_DONE_ = GST_MESSAGE_SEGMENT_DONE,
  DURATION_CHANGED_ = GST_MESSAGE_DURATION_CHANGED,
  LATENCY_ = GST_MESSAGE_LATENCY,
  ASYNC_START_ = GST_MESSAGE_ASYNC_START,
  ASYNC_DONE_ = GST_MESSAGE_ASYNC_DONE,
  REQUEST_STATE_ = GST_MESSAGE_REQUEST_STATE,
  STEP_START_ = GST_MESSAGE_STEP_START,
  QOS_ = GST_MESSAGE_QOS,
  PROGRESS_ = GST_MESSAGE_PROGRESS,
  TOC_ = GST_MESSAGE_TOC,
  RESET_TIME_ = GST_MESSAGE_RESET_TIME,
  STREAM_START_ = GST_MESSAGE_STREAM_START,
  NEED_CONTEXT_ = GST_MESSAGE_NEED_CONTEXT,
  HAVE_CONTEXT_ = GST_MESSAGE_HAVE_CONTEXT,
  EXTENDED_ = GST_MESSAGE_EXTENDED,
  DEVICE_ADDED_ = GST_MESSAGE_DEVICE_ADDED,
  DEVICE_REMOVED_ = GST_MESSAGE_DEVICE_REMOVED,
  PROPERTY_NOTIFY_ = GST_MESSAGE_PROPERTY_NOTIFY,
  STREAM_COLLECTION_ = GST_MESSAGE_STREAM_COLLECTION,
  STREAMS_SELECTED_ = GST_MESSAGE_STREAMS_SELECTED,
  REDIRECT_ = GST_MESSAGE_REDIRECT,
  DEVICE_CHANGED_ = GST_MESSAGE_DEVICE_CHANGED,
  INSTANT_RATE_REQUEST_ = GST_MESSAGE_INSTANT_RATE_REQUEST,
  ANY_ = GST_MESSAGE_ANY,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::MessageType>
{ typedef GstMessageType type; }; 
template<> struct declare_cpptype_of<GstMessageType>
{ typedef Gst::MessageType type; }; 

template<> struct declare_gtype_of<Gst::MessageType>
{ static GType get_type() { return gst_message_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(MetaFlags)
#undef MetaFlags
#endif
enum class MetaFlags {
  NONE_ = GST_META_FLAG_NONE,
  READONLY_ = GST_META_FLAG_READONLY,
  POOLED_ = GST_META_FLAG_POOLED,
  LOCKED_ = GST_META_FLAG_LOCKED,
  LAST_ = GST_META_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::MetaFlags>
{ typedef GstMetaFlags type; }; 
template<> struct declare_cpptype_of<GstMetaFlags>
{ typedef Gst::MetaFlags type; }; 

template<> struct declare_gtype_of<Gst::MetaFlags>
{ static GType get_type() { return gst_meta_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(MiniObjectFlags)
#undef MiniObjectFlags
#endif
enum class MiniObjectFlags {
  LOCKABLE_ = GST_MINI_OBJECT_FLAG_LOCKABLE,
  LOCK_READONLY_ = GST_MINI_OBJECT_FLAG_LOCK_READONLY,
  MAY_BE_LEAKED_ = GST_MINI_OBJECT_FLAG_MAY_BE_LEAKED,
  LAST_ = GST_MINI_OBJECT_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::MiniObjectFlags>
{ typedef GstMiniObjectFlags type; }; 
template<> struct declare_cpptype_of<GstMiniObjectFlags>
{ typedef Gst::MiniObjectFlags type; }; 

template<> struct declare_gtype_of<Gst::MiniObjectFlags>
{ static GType get_type() { return gst_mini_object_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(ObjectFlags)
#undef ObjectFlags
#endif
enum class ObjectFlags {
  MAY_BE_LEAKED_ = GST_OBJECT_FLAG_MAY_BE_LEAKED,
  LAST_ = GST_OBJECT_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::ObjectFlags>
{ typedef GstObjectFlags type; }; 
template<> struct declare_cpptype_of<GstObjectFlags>
{ typedef Gst::ObjectFlags type; }; 

template<> struct declare_gtype_of<Gst::ObjectFlags>
{ static GType get_type() { return gst_object_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(PadFlags)
#undef PadFlags
#endif
enum class PadFlags {
  BLOCKED_ = GST_PAD_FLAG_BLOCKED,
  FLUSHING_ = GST_PAD_FLAG_FLUSHING,
  EOS_ = GST_PAD_FLAG_EOS,
  BLOCKING_ = GST_PAD_FLAG_BLOCKING,
  NEED_PARENT_ = GST_PAD_FLAG_NEED_PARENT,
  NEED_RECONFIGURE_ = GST_PAD_FLAG_NEED_RECONFIGURE,
  PENDING_EVENTS_ = GST_PAD_FLAG_PENDING_EVENTS,
  FIXED_CAPS_ = GST_PAD_FLAG_FIXED_CAPS,
  PROXY_CAPS_ = GST_PAD_FLAG_PROXY_CAPS,
  PROXY_ALLOCATION_ = GST_PAD_FLAG_PROXY_ALLOCATION,
  PROXY_SCHEDULING_ = GST_PAD_FLAG_PROXY_SCHEDULING,
  ACCEPT_INTERSECT_ = GST_PAD_FLAG_ACCEPT_INTERSECT,
  ACCEPT_TEMPLATE_ = GST_PAD_FLAG_ACCEPT_TEMPLATE,
  LAST_ = GST_PAD_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PadFlags>
{ typedef GstPadFlags type; }; 
template<> struct declare_cpptype_of<GstPadFlags>
{ typedef Gst::PadFlags type; }; 

template<> struct declare_gtype_of<Gst::PadFlags>
{ static GType get_type() { return gst_pad_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(PadLinkCheck)
#undef PadLinkCheck
#endif
enum class PadLinkCheck {
  NOTHING_ = GST_PAD_LINK_CHECK_NOTHING,
  HIERARCHY_ = GST_PAD_LINK_CHECK_HIERARCHY,
  TEMPLATE_CAPS_ = GST_PAD_LINK_CHECK_TEMPLATE_CAPS,
  CAPS_ = GST_PAD_LINK_CHECK_CAPS,
  NO_RECONFIGURE_ = GST_PAD_LINK_CHECK_NO_RECONFIGURE,
  DEFAULT_ = GST_PAD_LINK_CHECK_DEFAULT,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PadLinkCheck>
{ typedef GstPadLinkCheck type; }; 
template<> struct declare_cpptype_of<GstPadLinkCheck>
{ typedef Gst::PadLinkCheck type; }; 

template<> struct declare_gtype_of<Gst::PadLinkCheck>
{ static GType get_type() { return gst_pad_link_check_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(PadProbeType)
#undef PadProbeType
#endif
enum class PadProbeType {
  INVALID_ = GST_PAD_PROBE_TYPE_INVALID,
  IDLE_ = GST_PAD_PROBE_TYPE_IDLE,
  BLOCK_ = GST_PAD_PROBE_TYPE_BLOCK,
  BUFFER_ = GST_PAD_PROBE_TYPE_BUFFER,
  BUFFER_LIST_ = GST_PAD_PROBE_TYPE_BUFFER_LIST,
  EVENT_DOWNSTREAM_ = GST_PAD_PROBE_TYPE_EVENT_DOWNSTREAM,
  EVENT_UPSTREAM_ = GST_PAD_PROBE_TYPE_EVENT_UPSTREAM,
  EVENT_FLUSH_ = GST_PAD_PROBE_TYPE_EVENT_FLUSH,
  QUERY_DOWNSTREAM_ = GST_PAD_PROBE_TYPE_QUERY_DOWNSTREAM,
  QUERY_UPSTREAM_ = GST_PAD_PROBE_TYPE_QUERY_UPSTREAM,
  PUSH_ = GST_PAD_PROBE_TYPE_PUSH,
  PULL_ = GST_PAD_PROBE_TYPE_PULL,
  BLOCKING_ = GST_PAD_PROBE_TYPE_BLOCKING,
  DATA_DOWNSTREAM_ = GST_PAD_PROBE_TYPE_DATA_DOWNSTREAM,
  DATA_UPSTREAM_ = GST_PAD_PROBE_TYPE_DATA_UPSTREAM,
  DATA_BOTH_ = GST_PAD_PROBE_TYPE_DATA_BOTH,
  BLOCK_DOWNSTREAM_ = GST_PAD_PROBE_TYPE_BLOCK_DOWNSTREAM,
  BLOCK_UPSTREAM_ = GST_PAD_PROBE_TYPE_BLOCK_UPSTREAM,
  EVENT_BOTH_ = GST_PAD_PROBE_TYPE_EVENT_BOTH,
  QUERY_BOTH_ = GST_PAD_PROBE_TYPE_QUERY_BOTH,
  ALL_BOTH_ = GST_PAD_PROBE_TYPE_ALL_BOTH,
  SCHEDULING_ = GST_PAD_PROBE_TYPE_SCHEDULING,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PadProbeType>
{ typedef GstPadProbeType type; }; 
template<> struct declare_cpptype_of<GstPadProbeType>
{ typedef Gst::PadProbeType type; }; 

template<> struct declare_gtype_of<Gst::PadProbeType>
{ static GType get_type() { return gst_pad_probe_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(PadTemplateFlags)
#undef PadTemplateFlags
#endif
enum class PadTemplateFlags {
  LAST_ = GST_PAD_TEMPLATE_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PadTemplateFlags>
{ typedef GstPadTemplateFlags type; }; 
template<> struct declare_cpptype_of<GstPadTemplateFlags>
{ typedef Gst::PadTemplateFlags type; }; 

template<> struct declare_gtype_of<Gst::PadTemplateFlags>
{ static GType get_type() { return gst_pad_template_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(ParseFlags)
#undef ParseFlags
#endif
enum class ParseFlags {
  NONE_ = GST_PARSE_FLAG_NONE,
  FATAL_ERRORS_ = GST_PARSE_FLAG_FATAL_ERRORS,
  NO_SINGLE_ELEMENT_BINS_ = GST_PARSE_FLAG_NO_SINGLE_ELEMENT_BINS,
  PLACE_IN_BIN_ = GST_PARSE_FLAG_PLACE_IN_BIN,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::ParseFlags>
{ typedef GstParseFlags type; }; 
template<> struct declare_cpptype_of<GstParseFlags>
{ typedef Gst::ParseFlags type; }; 

template<> struct declare_gtype_of<Gst::ParseFlags>
{ static GType get_type() { return gst_parse_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(PipelineFlags)
#undef PipelineFlags
#endif
enum class PipelineFlags {
  FIXED_CLOCK_ = GST_PIPELINE_FLAG_FIXED_CLOCK,
  LAST_ = GST_PIPELINE_FLAG_LAST,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PipelineFlags>
{ typedef GstPipelineFlags type; }; 
template<> struct declare_cpptype_of<GstPipelineFlags>
{ typedef Gst::PipelineFlags type; }; 

template<> struct declare_gtype_of<Gst::PipelineFlags>
{ static GType get_type() { return gst_pipeline_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(PluginAPIFlags)
#undef PluginAPIFlags
#endif
enum class PluginAPIFlags {
  MEMBERS_ = GST_PLUGIN_API_FLAG_IGNORE_ENUM_MEMBERS,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PluginAPIFlags>
{ typedef GstPluginAPIFlags type; }; 
template<> struct declare_cpptype_of<GstPluginAPIFlags>
{ typedef Gst::PluginAPIFlags type; }; 

template<> struct declare_gtype_of<Gst::PluginAPIFlags>
{ static GType get_type() { return gst_plugin_api_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(PluginDependencyFlags)
#undef PluginDependencyFlags
#endif
enum class PluginDependencyFlags {
  NONE_ = GST_PLUGIN_DEPENDENCY_FLAG_NONE,
  RECURSE_ = GST_PLUGIN_DEPENDENCY_FLAG_RECURSE,
  PATHS_ARE_DEFAULT_ONLY_ = GST_PLUGIN_DEPENDENCY_FLAG_PATHS_ARE_DEFAULT_ONLY,
  FILE_NAME_IS_SUFFIX_ = GST_PLUGIN_DEPENDENCY_FLAG_FILE_NAME_IS_SUFFIX,
  FILE_NAME_IS_PREFIX_ = GST_PLUGIN_DEPENDENCY_FLAG_FILE_NAME_IS_PREFIX,
  PATHS_ARE_RELATIVE_TO_EXE_ = GST_PLUGIN_DEPENDENCY_FLAG_PATHS_ARE_RELATIVE_TO_EXE,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PluginDependencyFlags>
{ typedef GstPluginDependencyFlags type; }; 
template<> struct declare_cpptype_of<GstPluginDependencyFlags>
{ typedef Gst::PluginDependencyFlags type; }; 

template<> struct declare_gtype_of<Gst::PluginDependencyFlags>
{ static GType get_type() { return gst_plugin_dependency_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(PluginFlags)
#undef PluginFlags
#endif
enum class PluginFlags {
  CACHED_ = GST_PLUGIN_FLAG_CACHED,
  BLACKLISTED_ = GST_PLUGIN_FLAG_BLACKLISTED,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::PluginFlags>
{ typedef GstPluginFlags type; }; 
template<> struct declare_cpptype_of<GstPluginFlags>
{ typedef Gst::PluginFlags type; }; 

template<> struct declare_gtype_of<Gst::PluginFlags>
{ static GType get_type() { return gst_plugin_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(QueryTypeFlags)
#undef QueryTypeFlags
#endif
enum class QueryTypeFlags {
  UPSTREAM_ = GST_QUERY_TYPE_UPSTREAM,
  DOWNSTREAM_ = GST_QUERY_TYPE_DOWNSTREAM,
  SERIALIZED_ = GST_QUERY_TYPE_SERIALIZED,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::QueryTypeFlags>
{ typedef GstQueryTypeFlags type; }; 
template<> struct declare_cpptype_of<GstQueryTypeFlags>
{ typedef Gst::QueryTypeFlags type; }; 

template<> struct declare_gtype_of<Gst::QueryTypeFlags>
{ static GType get_type() { return gst_query_type_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(SchedulingFlags)
#undef SchedulingFlags
#endif
enum class SchedulingFlags {
  SEEKABLE_ = GST_SCHEDULING_FLAG_SEEKABLE,
  SEQUENTIAL_ = GST_SCHEDULING_FLAG_SEQUENTIAL,
  BANDWIDTH_LIMITED_ = GST_SCHEDULING_FLAG_BANDWIDTH_LIMITED,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::SchedulingFlags>
{ typedef GstSchedulingFlags type; }; 
template<> struct declare_cpptype_of<GstSchedulingFlags>
{ typedef Gst::SchedulingFlags type; }; 

template<> struct declare_gtype_of<Gst::SchedulingFlags>
{ static GType get_type() { return gst_scheduling_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(SeekFlags)
#undef SeekFlags
#endif
enum class SeekFlags {
  NONE_ = GST_SEEK_FLAG_NONE,
  FLUSH_ = GST_SEEK_FLAG_FLUSH,
  ACCURATE_ = GST_SEEK_FLAG_ACCURATE,
  KEY_UNIT_ = GST_SEEK_FLAG_KEY_UNIT,
  SEGMENT_ = GST_SEEK_FLAG_SEGMENT,
  TRICKMODE_ = GST_SEEK_FLAG_TRICKMODE,
  SKIP_ = GST_SEEK_FLAG_SKIP,
  SNAP_BEFORE_ = GST_SEEK_FLAG_SNAP_BEFORE,
  SNAP_AFTER_ = GST_SEEK_FLAG_SNAP_AFTER,
  SNAP_NEAREST_ = GST_SEEK_FLAG_SNAP_NEAREST,
  TRICKMODE_KEY_UNITS_ = GST_SEEK_FLAG_TRICKMODE_KEY_UNITS,
  TRICKMODE_NO_AUDIO_ = GST_SEEK_FLAG_TRICKMODE_NO_AUDIO,
  TRICKMODE_FORWARD_PREDICTED_ = GST_SEEK_FLAG_TRICKMODE_FORWARD_PREDICTED,
  INSTANT_RATE_CHANGE_ = GST_SEEK_FLAG_INSTANT_RATE_CHANGE,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::SeekFlags>
{ typedef GstSeekFlags type; }; 
template<> struct declare_cpptype_of<GstSeekFlags>
{ typedef Gst::SeekFlags type; }; 

template<> struct declare_gtype_of<Gst::SeekFlags>
{ static GType get_type() { return gst_seek_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(SegmentFlags)
#undef SegmentFlags
#endif
enum class SegmentFlags {
  NONE_ = GST_SEGMENT_FLAG_NONE,
  RESET_ = GST_SEGMENT_FLAG_RESET,
  TRICKMODE_ = GST_SEGMENT_FLAG_TRICKMODE,
  SKIP_ = GST_SEGMENT_FLAG_SKIP,
  SEGMENT_ = GST_SEGMENT_FLAG_SEGMENT,
  TRICKMODE_KEY_UNITS_ = GST_SEGMENT_FLAG_TRICKMODE_KEY_UNITS,
  TRICKMODE_FORWARD_PREDICTED_ = GST_SEGMENT_FLAG_TRICKMODE_FORWARD_PREDICTED,
  TRICKMODE_NO_AUDIO_ = GST_SEGMENT_FLAG_TRICKMODE_NO_AUDIO,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::SegmentFlags>
{ typedef GstSegmentFlags type; }; 
template<> struct declare_cpptype_of<GstSegmentFlags>
{ typedef Gst::SegmentFlags type; }; 

template<> struct declare_gtype_of<Gst::SegmentFlags>
{ static GType get_type() { return gst_segment_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(SerializeFlags)
#undef SerializeFlags
#endif
enum class SerializeFlags {
  NONE_ = GST_SERIALIZE_FLAG_NONE,
  BACKWARD_COMPAT_ = GST_SERIALIZE_FLAG_BACKWARD_COMPAT,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::SerializeFlags>
{ typedef GstSerializeFlags type; }; 
template<> struct declare_cpptype_of<GstSerializeFlags>
{ typedef Gst::SerializeFlags type; }; 

template<> struct declare_gtype_of<Gst::SerializeFlags>
{ static GType get_type() { return gst_serialize_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(StackTraceFlags)
#undef StackTraceFlags
#endif
enum class StackTraceFlags {
  NONE_ = GST_STACK_TRACE_SHOW_NONE,
  FULL_ = GST_STACK_TRACE_SHOW_FULL,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::StackTraceFlags>
{ typedef GstStackTraceFlags type; }; 
template<> struct declare_cpptype_of<GstStackTraceFlags>
{ typedef Gst::StackTraceFlags type; }; 

template<> struct declare_gtype_of<Gst::StackTraceFlags>
{ static GType get_type() { return gst_stack_trace_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(StreamFlags)
#undef StreamFlags
#endif
enum class StreamFlags {
  NONE_ = GST_STREAM_FLAG_NONE,
  SPARSE_ = GST_STREAM_FLAG_SPARSE,
  SELECT_ = GST_STREAM_FLAG_SELECT,
  UNSELECT_ = GST_STREAM_FLAG_UNSELECT,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::StreamFlags>
{ typedef GstStreamFlags type; }; 
template<> struct declare_cpptype_of<GstStreamFlags>
{ typedef Gst::StreamFlags type; }; 

template<> struct declare_gtype_of<Gst::StreamFlags>
{ static GType get_type() { return gst_stream_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(StreamType)
#undef StreamType
#endif
enum class StreamType {
  UNKNOWN_ = GST_STREAM_TYPE_UNKNOWN,
  AUDIO_ = GST_STREAM_TYPE_AUDIO,
  VIDEO_ = GST_STREAM_TYPE_VIDEO,
  CONTAINER_ = GST_STREAM_TYPE_CONTAINER,
  TEXT_ = GST_STREAM_TYPE_TEXT,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::StreamType>
{ typedef GstStreamType type; }; 
template<> struct declare_cpptype_of<GstStreamType>
{ typedef Gst::StreamType type; }; 

template<> struct declare_gtype_of<Gst::StreamType>
{ static GType get_type() { return gst_stream_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

#if defined(TracerValueFlags)
#undef TracerValueFlags
#endif
enum class TracerValueFlags {
  NONE_ = GST_TRACER_VALUE_FLAGS_NONE,
  OPTIONAL_ = GST_TRACER_VALUE_FLAGS_OPTIONAL,
  AGGREGATED_ = GST_TRACER_VALUE_FLAGS_AGGREGATED,
};

} // namespace Gst

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gst::TracerValueFlags>
{ typedef GstTracerValueFlags type; }; 
template<> struct declare_cpptype_of<GstTracerValueFlags>
{ typedef Gst::TracerValueFlags type; }; 

template<> struct declare_gtype_of<Gst::TracerValueFlags>
{ static GType get_type() { return gst_tracer_value_flags_get_type(); } };


} // namespace repository

} // namespace gi


#endif
