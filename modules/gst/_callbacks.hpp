// AUTO-GENERATED

#ifndef _GI_GST__CALLBACKS_HPP_
#define _GI_GST__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Gst {

class Buffer;
class BufferList;
class Bus;
class CapsFeatures;
class Clock;
class ControlBinding;
class ControlSource;
class CustomMeta;
class DebugCategory;
class Element;
class Event;
class Iterator;
class MapInfo;
class Memory;
class Message;
class Meta;
class MiniObject;
class Object;
class Pad;
class PadProbeInfo;
class Plugin;
class PluginFeature;
class Promise;
class Query;
class Structure;
class TagList;
class Task;
class TypeFind;

// typedef gboolean (*GstBufferForeachMetaFunc) (GstBuffer* buffer, GstMeta** meta, gpointer user_data);
// typedef gboolean (*GstBufferForeachMetaFunc) (::GstBuffer* buffer, ::GstMeta** meta, void* user_data);
// SKIP; callback out parameter not supported

// typedef gboolean (*GstBufferListFunc) (GstBuffer** buffer, guint idx, gpointer user_data);
// typedef gboolean (*GstBufferListFunc) (::GstBuffer** buffer, guint idx, void* user_data);
// SKIP; callback out parameter not supported

// typedef gboolean (*GstBusFunc) (GstBus* bus, GstMessage* message, gpointer user_data);
// typedef gboolean (*GstBusFunc) (::GstBus* bus, ::GstMessage* message, void* user_data);
typedef gi::detail::callback<bool(Gst::Bus bus, Gst::Message message), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> BusFunc;

// typedef GstBusSyncReply (*GstBusSyncHandler) (GstBus* bus, GstMessage* message, gpointer user_data);
// typedef ::GstBusSyncReply (*GstBusSyncHandler) (::GstBus* bus, ::GstMessage* message, void* user_data);
typedef gi::detail::callback<Gst::BusSyncReply(Gst::Bus bus, Gst::Message message), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> BusSyncHandler;

// typedef gboolean (*GstCapsFilterMapFunc) (GstCapsFeatures* features, GstStructure* structure, gpointer user_data);
// typedef gboolean (*GstCapsFilterMapFunc) (::GstCapsFeatures* features, ::GstStructure* structure, void* user_data);
typedef gi::detail::callback<bool(Gst::CapsFeatures features, Gst::Structure structure), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> CapsFilterMapFunc;

// typedef gboolean (*GstCapsForeachFunc) (GstCapsFeatures* features, GstStructure* structure, gpointer user_data);
// typedef gboolean (*GstCapsForeachFunc) (::GstCapsFeatures* features, ::GstStructure* structure, void* user_data);
typedef gi::detail::callback<bool(Gst::CapsFeatures features, Gst::Structure structure), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> CapsForeachFunc;

// typedef gboolean (*GstCapsMapFunc) (GstCapsFeatures* features, GstStructure* structure, gpointer user_data);
// typedef gboolean (*GstCapsMapFunc) (::GstCapsFeatures* features, ::GstStructure* structure, void* user_data);
typedef gi::detail::callback<bool(Gst::CapsFeatures features, Gst::Structure structure), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> CapsMapFunc;

// typedef gboolean (*GstClockCallback) (GstClock* clock, GstClockTime time, GstClockID id, gpointer user_data);
// typedef gboolean (*GstClockCallback) (::GstClock* clock, ::GstClockTime time, ::GstClockID id, void* user_data);
typedef gi::detail::callback<bool(Gst::Clock clock, ::GstClockTime time, ::GstClockID id), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> ClockCallback;

// typedef void (*GstControlBindingConvert) (GstControlBinding* binding, gdouble src_value, GValue* dest_value);
// typedef void (*GstControlBindingConvert) (::GstControlBinding* binding, gdouble src_value, ::GValue* dest_value);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstControlSourceGetValue) (GstControlSource* self, GstClockTime timestamp, gdouble* value);
// typedef gboolean (*GstControlSourceGetValue) (::GstControlSource* self, ::GstClockTime timestamp, gdouble value);
// SKIP; inconsistent in value pointer depth (1 vs 0), not a callback since no user_data

// typedef gboolean (*GstControlSourceGetValueArray) (GstControlSource* self, GstClockTime timestamp, GstClockTime interval, guint n_values, gdouble* values);
// typedef gboolean (*GstControlSourceGetValueArray) (::GstControlSource* self, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, gdouble values);
// SKIP; inconsistent in values pointer depth (1 vs 0), not a callback since no user_data

// typedef gboolean (*GstCustomMetaTransformFunction) (GstBuffer* transbuf, GstCustomMeta* meta, GstBuffer* buffer, GQuark type, gpointer data, gpointer user_data);
// typedef gboolean (*GstCustomMetaTransformFunction) (::GstBuffer* transbuf, ::GstCustomMeta* meta, ::GstBuffer* buffer, ::GQuark type, void* data, void* user_data);
typedef gi::detail::callback<bool(Gst::Buffer transbuf, Gst::CustomMeta meta, Gst::Buffer buffer, ::GQuark type, void* data), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> CustomMetaTransformFunction;

// typedef void (*GstElementCallAsyncFunc) (GstElement* element, gpointer user_data);
// typedef void (*GstElementCallAsyncFunc) (::GstElement* element, void* user_data);
typedef gi::detail::callback<void(Gst::Element element), gi::transfer_full_t, gi::transfer_none_t> ElementCallAsyncFunc;

// typedef gboolean (*GstElementForeachPadFunc) (GstElement* element, GstPad* pad, gpointer user_data);
// typedef gboolean (*GstElementForeachPadFunc) (::GstElement* element, ::GstPad* pad, void* user_data);
typedef gi::detail::callback<bool(Gst::Element element, Gst::Pad pad), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> ElementForeachPadFunc;

// typedef void (*GstIteratorCopyFunction) (const GstIterator* it, GstIterator* copy);
// typedef void (*GstIteratorCopyFunction) (const ::GstIterator* it, ::GstIterator* copy);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstIteratorFoldFunction) (const GValue* item, GValue* ret, gpointer user_data);
// typedef gboolean (*GstIteratorFoldFunction) (const ::GValue* item, ::GValue* ret, void* user_data);
typedef gi::detail::callback<bool(const GObject::Value & item, GObject::Value ret), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> IteratorFoldFunction;

// typedef void (*GstIteratorForeachFunction) (const GValue* item, gpointer user_data);
// typedef void (*GstIteratorForeachFunction) (const ::GValue* item, void* user_data);
typedef gi::detail::callback<void(const GObject::Value & item), gi::transfer_full_t, gi::transfer_none_t> IteratorForeachFunction;

// typedef void (*GstIteratorFreeFunction) (GstIterator* it);
// typedef void (*GstIteratorFreeFunction) (::GstIterator* it);
// SKIP; not a callback since no user_data

// typedef GstIteratorItem (*GstIteratorItemFunction) (GstIterator* it, const GValue* item);
// typedef ::GstIteratorItem (*GstIteratorItemFunction) (::GstIterator* it, const ::GValue* item);
// SKIP; not a callback since no user_data

// typedef GstIteratorResult (*GstIteratorNextFunction) (GstIterator* it, GValue* result);
// typedef ::GstIteratorResult (*GstIteratorNextFunction) (::GstIterator* it, ::GValue* result);
// SKIP; not a callback since no user_data

// typedef void (*GstIteratorResyncFunction) (GstIterator* it);
// typedef void (*GstIteratorResyncFunction) (::GstIterator* it);
// SKIP; not a callback since no user_data

// typedef void (*GstLogFunction) (GstDebugCategory* category, GstDebugLevel level, const gchar* file, const gchar* function, gint line, GObject* object, GstDebugMessage* message, gpointer user_data);
// typedef void (*GstLogFunction) (::GstDebugCategory* category, ::GstDebugLevel level, const char* file, const char* function, gint line, ::GObject* object,  message, void* user_data);
// SKIP; message type  not supported

// typedef GstMemory* (*GstMemoryCopyFunction) (GstMemory* mem, gssize offset, gssize size);
// typedef ::GstMemory* (*GstMemoryCopyFunction) (::GstMemory* mem, gssize offset, gssize size);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstMemoryIsSpanFunction) (GstMemory* mem1, GstMemory* mem2, gsize* offset);
// typedef gboolean (*GstMemoryIsSpanFunction) (::GstMemory* mem1, ::GstMemory* mem2, gsize offset);
// SKIP; inconsistent in offset pointer depth (1 vs 0), not a callback since no user_data

// typedef gpointer (*GstMemoryMapFullFunction) (GstMemory* mem, GstMapInfo* info, gsize maxsize);
// typedef void* (*GstMemoryMapFullFunction) (::GstMemory* mem, ::GstMapInfo* info, gsize maxsize);
// SKIP; not a callback since no user_data

// typedef gpointer (*GstMemoryMapFunction) (GstMemory* mem, gsize maxsize, GstMapFlags flags);
// typedef void* (*GstMemoryMapFunction) (::GstMemory* mem, gsize maxsize, ::GstMapFlags flags);
// SKIP; not a callback since no user_data

// typedef GstMemory* (*GstMemoryShareFunction) (GstMemory* mem, gssize offset, gssize size);
// typedef ::GstMemory* (*GstMemoryShareFunction) (::GstMemory* mem, gssize offset, gssize size);
// SKIP; not a callback since no user_data

// typedef void (*GstMemoryUnmapFullFunction) (GstMemory* mem, GstMapInfo* info);
// typedef void (*GstMemoryUnmapFullFunction) (::GstMemory* mem, ::GstMapInfo* info);
// SKIP; not a callback since no user_data

// typedef void (*GstMemoryUnmapFunction) (GstMemory* mem);
// typedef void (*GstMemoryUnmapFunction) (::GstMemory* mem);
// SKIP; not a callback since no user_data

// typedef void (*GstMetaFreeFunction) (GstMeta* meta, GstBuffer* buffer);
// typedef void (*GstMetaFreeFunction) (::GstMeta* meta, ::GstBuffer* buffer);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstMetaInitFunction) (GstMeta* meta, gpointer params, GstBuffer* buffer);
// typedef gboolean (*GstMetaInitFunction) (::GstMeta* meta, void* params, ::GstBuffer* buffer);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstMetaTransformFunction) (GstBuffer* transbuf, GstMeta* meta, GstBuffer* buffer, GQuark type, gpointer data);
// typedef gboolean (*GstMetaTransformFunction) (::GstBuffer* transbuf, ::GstMeta* meta, ::GstBuffer* buffer, ::GQuark type, void* data);
// SKIP; not a callback since no user_data

// typedef GstMiniObject* (*GstMiniObjectCopyFunction) (const GstMiniObject* obj);
// typedef ::GstMiniObject* (*GstMiniObjectCopyFunction) (const ::GstMiniObject* obj);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstMiniObjectDisposeFunction) (GstMiniObject* obj);
// typedef gboolean (*GstMiniObjectDisposeFunction) (::GstMiniObject* obj);
// SKIP; not a callback since no user_data

// typedef void (*GstMiniObjectFreeFunction) (GstMiniObject* obj);
// typedef void (*GstMiniObjectFreeFunction) (::GstMiniObject* obj);
// SKIP; not a callback since no user_data

// typedef void (*GstMiniObjectNotify) (gpointer user_data, GstMiniObject* obj);
// typedef void (*GstMiniObjectNotify) (void* user_data, ::GstMiniObject* obj);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstPadActivateFunction) (GstPad* pad, GstObject* parent);
// typedef gboolean (*GstPadActivateFunction) (::GstPad* pad, ::GstObject* parent);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstPadActivateModeFunction) (GstPad* pad, GstObject* parent, GstPadMode mode, gboolean active);
// typedef gboolean (*GstPadActivateModeFunction) (::GstPad* pad, ::GstObject* parent, ::GstPadMode mode, gboolean active);
// SKIP; not a callback since no user_data

// typedef GstFlowReturn (*GstPadChainFunction) (GstPad* pad, GstObject* parent, GstBuffer* buffer);
// typedef ::GstFlowReturn (*GstPadChainFunction) (::GstPad* pad, ::GstObject* parent, ::GstBuffer* buffer);
// SKIP; not a callback since no user_data

// typedef GstFlowReturn (*GstPadChainListFunction) (GstPad* pad, GstObject* parent, GstBufferList* list);
// typedef ::GstFlowReturn (*GstPadChainListFunction) (::GstPad* pad, ::GstObject* parent, ::GstBufferList* list);
// SKIP; not a callback since no user_data

// typedef GstFlowReturn (*GstPadEventFullFunction) (GstPad* pad, GstObject* parent, GstEvent* event);
// typedef ::GstFlowReturn (*GstPadEventFullFunction) (::GstPad* pad, ::GstObject* parent, ::GstEvent* event);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstPadEventFunction) (GstPad* pad, GstObject* parent, GstEvent* event);
// typedef gboolean (*GstPadEventFunction) (::GstPad* pad, ::GstObject* parent, ::GstEvent* event);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstPadForwardFunction) (GstPad* pad, gpointer user_data);
// typedef gboolean (*GstPadForwardFunction) (::GstPad* pad, void* user_data);
typedef gi::detail::callback<bool(Gst::Pad pad), gi::transfer_none_t, gi::transfer_none_t> PadForwardFunction;

// typedef GstFlowReturn (*GstPadGetRangeFunction) (GstPad* pad, GstObject* parent, guint64 offset, guint length, GstBuffer** buffer);
// typedef ::GstFlowReturn (*GstPadGetRangeFunction) (::GstPad* pad, ::GstObject* parent, guint64 offset, guint length, ::GstBuffer* buffer);
// SKIP; inconsistent in buffer pointer depth (2 vs 1), not a callback since no user_data

// typedef GstIterator* (*GstPadIterIntLinkFunction) (GstPad* pad, GstObject* parent);
// typedef ::GstIterator* (*GstPadIterIntLinkFunction) (::GstPad* pad, ::GstObject* parent);
// SKIP; not a callback since no user_data

// typedef GstPadLinkReturn (*GstPadLinkFunction) (GstPad* pad, GstObject* parent, GstPad* peer);
// typedef ::GstPadLinkReturn (*GstPadLinkFunction) (::GstPad* pad, ::GstObject* parent, ::GstPad* peer);
// SKIP; not a callback since no user_data

// typedef GstPadProbeReturn (*GstPadProbeCallback) (GstPad* pad, GstPadProbeInfo* info, gpointer user_data);
// typedef ::GstPadProbeReturn (*GstPadProbeCallback) (::GstPad* pad, ::GstPadProbeInfo* info, void* user_data);
typedef gi::detail::callback<Gst::PadProbeReturn(Gst::Pad pad, Gst::PadProbeInfo info), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> PadProbeCallback;

// typedef gboolean (*GstPadQueryFunction) (GstPad* pad, GstObject* parent, GstQuery* query);
// typedef gboolean (*GstPadQueryFunction) (::GstPad* pad, ::GstObject* parent, ::GstQuery* query);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstPadStickyEventsForeachFunction) (GstPad* pad, GstEvent** event, gpointer user_data);
// typedef gboolean (*GstPadStickyEventsForeachFunction) (::GstPad* pad, ::GstEvent* event, void* user_data);
// SKIP; inconsistent in event pointer depth (2 vs 1)

// typedef void (*GstPadUnlinkFunction) (GstPad* pad, GstObject* parent);
// typedef void (*GstPadUnlinkFunction) (::GstPad* pad, ::GstObject* parent);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstPluginFeatureFilter) (GstPluginFeature* feature, gpointer user_data);
// typedef gboolean (*GstPluginFeatureFilter) (::GstPluginFeature* feature, void* user_data);
typedef gi::detail::callback<bool(Gst::PluginFeature feature), gi::transfer_none_t, gi::transfer_none_t> PluginFeatureFilter;

// typedef gboolean (*GstPluginFilter) (GstPlugin* plugin, gpointer user_data);
// typedef gboolean (*GstPluginFilter) (::GstPlugin* plugin, void* user_data);
typedef gi::detail::callback<bool(Gst::Plugin plugin), gi::transfer_none_t, gi::transfer_none_t> PluginFilter;

// typedef gboolean (*GstPluginInitFullFunc) (GstPlugin* plugin, gpointer user_data);
// typedef gboolean (*GstPluginInitFullFunc) (::GstPlugin* plugin, void* user_data);
typedef gi::detail::callback<bool(Gst::Plugin plugin), gi::transfer_none_t, gi::transfer_none_t> PluginInitFullFunc;

// typedef gboolean (*GstPluginInitFunc) (GstPlugin* plugin);
// typedef gboolean (*GstPluginInitFunc) (::GstPlugin* plugin);
// SKIP; not a callback since no user_data

// typedef void (*GstPromiseChangeFunc) (GstPromise* promise, gpointer user_data);
// typedef void (*GstPromiseChangeFunc) (::GstPromise* promise, void* user_data);
typedef gi::detail::callback<void(Gst::Promise promise), gi::transfer_full_t, gi::transfer_none_t> PromiseChangeFunc;

// typedef gboolean (*GstStructureFilterMapFunc) (GQuark field_id, GValue* value, gpointer user_data);
// typedef gboolean (*GstStructureFilterMapFunc) (::GQuark field_id, ::GValue* value, void* user_data);
typedef gi::detail::callback<bool(::GQuark field_id, GObject::Value value), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> StructureFilterMapFunc;

// typedef gboolean (*GstStructureForeachFunc) (GQuark field_id, const GValue* value, gpointer user_data);
// typedef gboolean (*GstStructureForeachFunc) (::GQuark field_id, const ::GValue* value, void* user_data);
typedef gi::detail::callback<bool(::GQuark field_id, const GObject::Value & value), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> StructureForeachFunc;

// typedef gboolean (*GstStructureMapFunc) (GQuark field_id, GValue* value, gpointer user_data);
// typedef gboolean (*GstStructureMapFunc) (::GQuark field_id, ::GValue* value, void* user_data);
typedef gi::detail::callback<bool(::GQuark field_id, GObject::Value value), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> StructureMapFunc;

// typedef void (*GstTagForeachFunc) (const GstTagList* list, const gchar* tag, gpointer user_data);
// typedef void (*GstTagForeachFunc) (const ::GstTagList* list, const char* tag, void* user_data);
typedef gi::detail::callback<void(const Gst::TagList & list, const std::string & tag), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> TagForeachFunc;

// typedef void (*GstTagMergeFunc) (GValue* dest, const GValue* src);
// typedef void (*GstTagMergeFunc) (::GValue* dest, const ::GValue* src);
// SKIP; not a callback since no user_data

// typedef void (*GstTaskFunction) (gpointer user_data);
// typedef void (*GstTaskFunction) (void* user_data);
typedef gi::detail::callback<void(), gi::transfer_full_t> TaskFunction;

// typedef void (*GstTaskPoolFunction) (void* user_data);
// typedef void (*GstTaskPoolFunction) (void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef void (*GstTaskThreadFunc) (GstTask* task, GThread* thread, gpointer user_data);
// typedef void (*GstTaskThreadFunc) (::GstTask* task, ::GThread* thread, void* user_data);
typedef gi::detail::callback<void(Gst::Task task, GLib::Thread thread), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> TaskThreadFunc;

// typedef void (*GstTypeFindFunction) (GstTypeFind* find, gpointer user_data);
// typedef void (*GstTypeFindFunction) (::GstTypeFind* find, void* user_data);
typedef gi::detail::callback<void(Gst::TypeFind find), gi::transfer_full_t, gi::transfer_none_t> TypeFindFunction;

// typedef gint (*GstValueCompareFunc) (const GValue* value1, const GValue* value2);
// typedef gint (*GstValueCompareFunc) (const ::GValue* value1, const ::GValue* value2);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstValueDeserializeFunc) (GValue* dest, const gchar* s);
// typedef gboolean (*GstValueDeserializeFunc) (::GValue* dest, const char* s);
// SKIP; not a callback since no user_data

// typedef gboolean (*GstValueDeserializeWithPSpecFunc) (GValue* dest, const gchar* s, GParamSpec* pspec);
// typedef gboolean (*GstValueDeserializeWithPSpecFunc) (::GValue* dest, const char* s, ::GParamSpec* pspec);
// SKIP; not a callback since no user_data

// typedef gchar* (*GstValueSerializeFunc) (const GValue* value1);
// typedef char* (*GstValueSerializeFunc) (const ::GValue* value1);
// SKIP; not a callback since no user_data

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
