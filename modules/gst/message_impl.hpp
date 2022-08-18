// AUTO-GENERATED

#ifndef _GI_GST_MESSAGE_IMPL_HPP_
#define _GI_GST_MESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstMessageType _field_type_get (const ::GstMessage* obj) { return (::GstMessageType) obj->type; }
// ::GstMessageType Message::type (const ::GstMessage* obj);
// ::GstMessageType Message::type (const ::GstMessage* obj);
Gst::MessageType base::MessageBase::type_ () const noexcept
{
  typedef ::GstMessageType (*call_wrap_t) (const ::GstMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GstMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GstMessage* obj, ::GstMessageType _value) { obj->type = (decltype(obj->type)) _value; }
//  Message::type (::GstMessage* obj, ::GstMessageType _value);
// void Message::type (::GstMessage* obj, ::GstMessageType _value);
void base::MessageBase::type_ (Gst::MessageType _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* obj, ::GstMessageType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstMessageType) (_value_to_c));
}

static guint64 _field_timestamp_get (const ::GstMessage* obj) { return (guint64) obj->timestamp; }
// guint64 Message::timestamp (const ::GstMessage* obj);
// guint64 Message::timestamp (const ::GstMessage* obj);
guint64 base::MessageBase::timestamp_ () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_timestamp_get;
  auto _temp_ret = call_wrap_v ((const ::GstMessage*) (gobj_()));
  return _temp_ret;
}

static void _field_timestamp_set (::GstMessage* obj, guint64 _value) { obj->timestamp = (decltype(obj->timestamp)) _value; }
//  Message::timestamp (::GstMessage* obj, guint64 _value);
// void Message::timestamp (::GstMessage* obj, guint64 _value);
void base::MessageBase::timestamp_ (guint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* obj, guint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_timestamp_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMessage*) (gobj_()), (guint64) (_value_to_c));
}

static ::GstObject* _field_src_get (const ::GstMessage* obj) { return (::GstObject*) obj->src; }
// ::GstObject* Message::src (const ::GstMessage* obj);
// ::GstObject* Message::src (const ::GstMessage* obj);
Gst::Object base::MessageBase::src_ () const noexcept
{
  typedef ::GstObject* (*call_wrap_t) (const ::GstMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_src_get;
  auto _temp_ret = call_wrap_v ((const ::GstMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint32 _field_seqnum_get (const ::GstMessage* obj) { return (guint32) obj->seqnum; }
// guint32 Message::seqnum (const ::GstMessage* obj);
// guint32 Message::seqnum (const ::GstMessage* obj);
guint32 base::MessageBase::seqnum_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GstMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_seqnum_get;
  auto _temp_ret = call_wrap_v ((const ::GstMessage*) (gobj_()));
  return _temp_ret;
}

static void _field_seqnum_set (::GstMessage* obj, guint32 _value) { obj->seqnum = (decltype(obj->seqnum)) _value; }
//  Message::seqnum (::GstMessage* obj, guint32 _value);
// void Message::seqnum (::GstMessage* obj, guint32 _value);
void base::MessageBase::seqnum_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_seqnum_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMessage*) (gobj_()), (guint32) (_value_to_c));
}

// GstMessage* gst_message_new_application (GstObject* src, GstStructure* structure);
// ::GstMessage* gst_message_new_application (::GstObject* src, ::GstStructure* structure);
Gst::Message base::MessageBase::new_application (Gst::Object src, Gst::Structure structure) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_application;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstStructure*) (structure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_application (Gst::Structure structure) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_application;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstStructure*) (structure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_async_done (GstObject* src, GstClockTime running_time);
// ::GstMessage* gst_message_new_async_done (::GstObject* src, ::GstClockTime running_time);
Gst::Message base::MessageBase::new_async_done (Gst::Object src, ::GstClockTime running_time) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstClockTime running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_async_done;
  auto running_time_to_c = running_time;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstClockTime) (running_time_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_async_done (::GstClockTime running_time) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstClockTime running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_async_done;
  auto running_time_to_c = running_time;
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstClockTime) (running_time_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_async_start (GstObject* src);
// ::GstMessage* gst_message_new_async_start (::GstObject* src);
Gst::Message base::MessageBase::new_async_start (Gst::Object src) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_async_start;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_async_start () noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_async_start;
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_buffering (GstObject* src, gint percent);
// ::GstMessage* gst_message_new_buffering (::GstObject* src, gint percent);
Gst::Message base::MessageBase::new_buffering (Gst::Object src, gint percent) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, gint percent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_buffering;
  auto percent_to_c = percent;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (gint) (percent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_buffering (gint percent) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, gint percent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_buffering;
  auto percent_to_c = percent;
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (gint) (percent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_clock_lost (GstObject* src, GstClock* clock);
// ::GstMessage* gst_message_new_clock_lost (::GstObject* src, ::GstClock* clock);
Gst::Message base::MessageBase::new_clock_lost (Gst::Object src, Gst::Clock clock) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_clock_lost;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstClock*) (clock_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_clock_lost (Gst::Clock clock) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_clock_lost;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstClock*) (clock_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_clock_provide (GstObject* src, GstClock* clock, gboolean ready);
// ::GstMessage* gst_message_new_clock_provide (::GstObject* src, ::GstClock* clock, gboolean ready);
Gst::Message base::MessageBase::new_clock_provide (Gst::Object src, Gst::Clock clock, gboolean ready) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstClock* clock, gboolean ready);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_clock_provide;
  auto ready_to_c = ready;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstClock*) (clock_to_c), (gboolean) (ready_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_clock_provide (Gst::Clock clock, gboolean ready) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstClock* clock, gboolean ready);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_clock_provide;
  auto ready_to_c = ready;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstClock*) (clock_to_c), (gboolean) (ready_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_custom (GstMessageType type, GstObject* src, GstStructure* structure);
// ::GstMessage* gst_message_new_custom (::GstMessageType type, ::GstObject* src, ::GstStructure* structure);
Gst::Message base::MessageBase::new_custom (Gst::MessageType type, Gst::Object src, Gst::Structure structure) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstMessageType type, ::GstObject* src, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_custom;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstMessageType) (type_to_c), (::GstObject*) (src_to_c), (::GstStructure*) (structure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_custom (Gst::MessageType type) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstMessageType type, ::GstObject* src, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_custom;
  auto structure_to_c = nullptr;
  auto src_to_c = nullptr;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstMessageType) (type_to_c), (::GstObject*) (src_to_c), (::GstStructure*) (structure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_device_added (GstObject* src, GstDevice* device);
// ::GstMessage* gst_message_new_device_added (::GstObject* src, ::GstDevice* device);
Gst::Message base::MessageBase::new_device_added (Gst::Object src, Gst::Device device) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_device_added;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstDevice*) (device_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_device_changed (GstObject* src, GstDevice* device, GstDevice* changed_device);
// ::GstMessage* gst_message_new_device_changed (::GstObject* src, ::GstDevice* device, ::GstDevice* changed_device);
Gst::Message base::MessageBase::new_device_changed (Gst::Object src, Gst::Device device, Gst::Device changed_device) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstDevice* device, ::GstDevice* changed_device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_device_changed;
  auto changed_device_to_c = gi::unwrap (changed_device, gi::transfer_none, gi::direction_in);
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstDevice*) (device_to_c), (::GstDevice*) (changed_device_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_device_removed (GstObject* src, GstDevice* device);
// ::GstMessage* gst_message_new_device_removed (::GstObject* src, ::GstDevice* device);
Gst::Message base::MessageBase::new_device_removed (Gst::Object src, Gst::Device device) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_device_removed;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstDevice*) (device_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_duration_changed (GstObject* src);
// ::GstMessage* gst_message_new_duration_changed (::GstObject* src);
Gst::Message base::MessageBase::new_duration_changed (Gst::Object src) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_duration_changed;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_duration_changed () noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_duration_changed;
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_element (GstObject* src, GstStructure* structure);
// ::GstMessage* gst_message_new_element (::GstObject* src, ::GstStructure* structure);
Gst::Message base::MessageBase::new_element (Gst::Object src, Gst::Structure structure) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_element;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstStructure*) (structure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_element (Gst::Structure structure) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_element;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstStructure*) (structure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_eos (GstObject* src);
// ::GstMessage* gst_message_new_eos (::GstObject* src);
Gst::Message base::MessageBase::new_eos (Gst::Object src) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_eos;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_eos () noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_eos;
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_error (GstObject* src, GError* error, const gchar* debug);
// ::GstMessage* gst_message_new_error (::GstObject* src, ::GError* error, const char* debug);
Gst::Message base::MessageBase::new_error (Gst::Object src, GLib::Error error, const std::string & debug) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_error;
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_error (GLib::Error error, const std::string & debug) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_error;
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_error_with_details (GstObject* src, GError* error, const gchar* debug, GstStructure* details);
// ::GstMessage* gst_message_new_error_with_details (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
Gst::Message base::MessageBase::new_error_with_details (Gst::Object src, GLib::Error error, const std::string & debug, Gst::Structure details) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_error_with_details;
  auto details_to_c = gi::unwrap (details, gi::transfer_full, gi::direction_in);
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c), (::GstStructure*) (details_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_error_with_details (GLib::Error error, const std::string & debug) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_error_with_details;
  auto details_to_c = nullptr;
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c), (::GstStructure*) (details_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_have_context (GstObject* src, GstContext* context);
// ::GstMessage* gst_message_new_have_context (::GstObject* src, ::GstContext* context);
Gst::Message base::MessageBase::new_have_context (Gst::Object src, Gst::Context context) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_have_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_full, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_have_context (Gst::Context context) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_have_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_full, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_info (GstObject* src, GError* error, const gchar* debug);
// ::GstMessage* gst_message_new_info (::GstObject* src, ::GError* error, const char* debug);
Gst::Message base::MessageBase::new_info (Gst::Object src, GLib::Error error, const std::string & debug) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_info;
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_info (GLib::Error error, const std::string & debug) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_info;
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_info_with_details (GstObject* src, GError* error, const gchar* debug, GstStructure* details);
// ::GstMessage* gst_message_new_info_with_details (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
Gst::Message base::MessageBase::new_info_with_details (Gst::Object src, GLib::Error error, const std::string & debug, Gst::Structure details) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_info_with_details;
  auto details_to_c = gi::unwrap (details, gi::transfer_full, gi::direction_in);
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c), (::GstStructure*) (details_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_info_with_details (GLib::Error error, const std::string & debug) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_info_with_details;
  auto details_to_c = nullptr;
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c), (::GstStructure*) (details_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_instant_rate_request (GstObject* src, gdouble rate_multiplier);
// ::GstMessage* gst_message_new_instant_rate_request (::GstObject* src, gdouble rate_multiplier);
Gst::Message base::MessageBase::new_instant_rate_request (Gst::Object src, gdouble rate_multiplier) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, gdouble rate_multiplier);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_instant_rate_request;
  auto rate_multiplier_to_c = rate_multiplier;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (gdouble) (rate_multiplier_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_latency (GstObject* src);
// ::GstMessage* gst_message_new_latency (::GstObject* src);
Gst::Message base::MessageBase::new_latency (Gst::Object src) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_latency;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_latency () noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_latency;
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_need_context (GstObject* src, const gchar* context_type);
// ::GstMessage* gst_message_new_need_context (::GstObject* src, const char* context_type);
Gst::Message base::MessageBase::new_need_context (Gst::Object src, const std::string & context_type) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, const char* context_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_need_context;
  auto context_type_to_c = gi::unwrap (context_type, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (const char*) (context_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_need_context (const std::string & context_type) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, const char* context_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_need_context;
  auto context_type_to_c = gi::unwrap (context_type, gi::transfer_none, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (const char*) (context_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_new_clock (GstObject* src, GstClock* clock);
// ::GstMessage* gst_message_new_new_clock (::GstObject* src, ::GstClock* clock);
Gst::Message base::MessageBase::new_new_clock (Gst::Object src, Gst::Clock clock) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_new_clock;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstClock*) (clock_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_new_clock (Gst::Clock clock) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_new_clock;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstClock*) (clock_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_progress (GstObject* src, GstProgressType type, const gchar* code, const gchar* text);
// ::GstMessage* gst_message_new_progress (::GstObject* src, ::GstProgressType type, const char* code, const char* text);
Gst::Message base::MessageBase::new_progress (Gst::Object src, Gst::ProgressType type, const std::string & code, const std::string & text) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstProgressType type, const char* code, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_progress;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto code_to_c = gi::unwrap (code, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstProgressType) (type_to_c), (const char*) (code_to_c), (const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_property_notify (GstObject* src, const gchar* property_name, GValue* val);
// ::GstMessage* gst_message_new_property_notify (::GstObject* src, const char* property_name, ::GValue* val);
Gst::Message base::MessageBase::new_property_notify (Gst::Object src, const std::string & property_name, GObject::Value val) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, const char* property_name, ::GValue* val);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_property_notify;
  auto val_to_c = gi::unwrap (val, gi::transfer_full, gi::direction_in);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (const char*) (property_name_to_c), (::GValue*) (val_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_property_notify (Gst::Object src, const std::string & property_name) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, const char* property_name, ::GValue* val);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_property_notify;
  auto val_to_c = nullptr;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (const char*) (property_name_to_c), (::GValue*) (val_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_qos (GstObject* src, gboolean live, guint64 running_time, guint64 stream_time, guint64 timestamp, guint64 duration);
// ::GstMessage* gst_message_new_qos (::GstObject* src, gboolean live, guint64 running_time, guint64 stream_time, guint64 timestamp, guint64 duration);
Gst::Message base::MessageBase::new_qos (Gst::Object src, gboolean live, guint64 running_time, guint64 stream_time, guint64 timestamp, guint64 duration) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, gboolean live, guint64 running_time, guint64 stream_time, guint64 timestamp, guint64 duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_qos;
  auto duration_to_c = duration;
  auto timestamp_to_c = timestamp;
  auto stream_time_to_c = stream_time;
  auto running_time_to_c = running_time;
  auto live_to_c = live;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (gboolean) (live_to_c), (guint64) (running_time_to_c), (guint64) (stream_time_to_c), (guint64) (timestamp_to_c), (guint64) (duration_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_redirect (GstObject* src, const gchar* location, GstTagList* tag_list, const GstStructure* entry_struct);
// ::GstMessage* gst_message_new_redirect (::GstObject* src, const char* location, ::GstTagList* tag_list, const ::GstStructure* entry_struct);
Gst::Message base::MessageBase::new_redirect (Gst::Object src, const std::string & location, Gst::TagList tag_list, const Gst::Structure & entry_struct) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, const char* location, ::GstTagList* tag_list, const ::GstStructure* entry_struct);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_redirect;
  auto entry_struct_to_c = gi::unwrap (entry_struct, gi::transfer_full, gi::direction_in);
  auto tag_list_to_c = gi::unwrap (tag_list, gi::transfer_full, gi::direction_in);
  auto location_to_c = gi::unwrap (location, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (const char*) (location_to_c), (::GstTagList*) (tag_list_to_c), (const ::GstStructure*) (entry_struct_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_redirect (Gst::Object src, const std::string & location) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, const char* location, ::GstTagList* tag_list, const ::GstStructure* entry_struct);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_redirect;
  auto entry_struct_to_c = nullptr;
  auto tag_list_to_c = nullptr;
  auto location_to_c = gi::unwrap (location, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (const char*) (location_to_c), (::GstTagList*) (tag_list_to_c), (const ::GstStructure*) (entry_struct_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_request_state (GstObject* src, GstState state);
// ::GstMessage* gst_message_new_request_state (::GstObject* src, ::GstState state);
Gst::Message base::MessageBase::new_request_state (Gst::Object src, Gst::State state) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstState state);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_request_state;
  auto state_to_c = gi::unwrap (state);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstState) (state_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_request_state (Gst::State state) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstState state);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_request_state;
  auto state_to_c = gi::unwrap (state);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstState) (state_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_reset_time (GstObject* src, GstClockTime running_time);
// ::GstMessage* gst_message_new_reset_time (::GstObject* src, ::GstClockTime running_time);
Gst::Message base::MessageBase::new_reset_time (Gst::Object src, ::GstClockTime running_time) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstClockTime running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_reset_time;
  auto running_time_to_c = running_time;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstClockTime) (running_time_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_reset_time (::GstClockTime running_time) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstClockTime running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_reset_time;
  auto running_time_to_c = running_time;
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstClockTime) (running_time_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_segment_done (GstObject* src, GstFormat format, gint64 position);
// ::GstMessage* gst_message_new_segment_done (::GstObject* src, ::GstFormat format, gint64 position);
Gst::Message base::MessageBase::new_segment_done (Gst::Object src, Gst::Format format, gint64 position) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstFormat format, gint64 position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_segment_done;
  auto position_to_c = position;
  auto format_to_c = gi::unwrap (format);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstFormat) (format_to_c), (gint64) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_segment_done (Gst::Format format, gint64 position) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstFormat format, gint64 position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_segment_done;
  auto position_to_c = position;
  auto format_to_c = gi::unwrap (format);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstFormat) (format_to_c), (gint64) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_segment_start (GstObject* src, GstFormat format, gint64 position);
// ::GstMessage* gst_message_new_segment_start (::GstObject* src, ::GstFormat format, gint64 position);
Gst::Message base::MessageBase::new_segment_start (Gst::Object src, Gst::Format format, gint64 position) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstFormat format, gint64 position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_segment_start;
  auto position_to_c = position;
  auto format_to_c = gi::unwrap (format);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstFormat) (format_to_c), (gint64) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_segment_start (Gst::Format format, gint64 position) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstFormat format, gint64 position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_segment_start;
  auto position_to_c = position;
  auto format_to_c = gi::unwrap (format);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstFormat) (format_to_c), (gint64) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_state_changed (GstObject* src, GstState oldstate, GstState newstate, GstState pending);
// ::GstMessage* gst_message_new_state_changed (::GstObject* src, ::GstState oldstate, ::GstState newstate, ::GstState pending);
Gst::Message base::MessageBase::new_state_changed (Gst::Object src, Gst::State oldstate, Gst::State newstate, Gst::State pending) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstState oldstate, ::GstState newstate, ::GstState pending);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_state_changed;
  auto pending_to_c = gi::unwrap (pending);
  auto newstate_to_c = gi::unwrap (newstate);
  auto oldstate_to_c = gi::unwrap (oldstate);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstState) (oldstate_to_c), (::GstState) (newstate_to_c), (::GstState) (pending_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_state_changed (Gst::State oldstate, Gst::State newstate, Gst::State pending) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstState oldstate, ::GstState newstate, ::GstState pending);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_state_changed;
  auto pending_to_c = gi::unwrap (pending);
  auto newstate_to_c = gi::unwrap (newstate);
  auto oldstate_to_c = gi::unwrap (oldstate);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstState) (oldstate_to_c), (::GstState) (newstate_to_c), (::GstState) (pending_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_state_dirty (GstObject* src);
// ::GstMessage* gst_message_new_state_dirty (::GstObject* src);
Gst::Message base::MessageBase::new_state_dirty (Gst::Object src) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_state_dirty;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_state_dirty () noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_state_dirty;
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_step_done (GstObject* src, GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate, guint64 duration, gboolean eos);
// ::GstMessage* gst_message_new_step_done (::GstObject* src, ::GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate, guint64 duration, gboolean eos);
Gst::Message base::MessageBase::new_step_done (Gst::Object src, Gst::Format format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate, guint64 duration, gboolean eos) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate, guint64 duration, gboolean eos);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_step_done;
  auto eos_to_c = eos;
  auto duration_to_c = duration;
  auto intermediate_to_c = intermediate;
  auto flush_to_c = flush;
  auto rate_to_c = rate;
  auto amount_to_c = amount;
  auto format_to_c = gi::unwrap (format);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstFormat) (format_to_c), (guint64) (amount_to_c), (gdouble) (rate_to_c), (gboolean) (flush_to_c), (gboolean) (intermediate_to_c), (guint64) (duration_to_c), (gboolean) (eos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_step_start (GstObject* src, gboolean active, GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate);
// ::GstMessage* gst_message_new_step_start (::GstObject* src, gboolean active, ::GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate);
Gst::Message base::MessageBase::new_step_start (Gst::Object src, gboolean active, Gst::Format format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, gboolean active, ::GstFormat format, guint64 amount, gdouble rate, gboolean flush, gboolean intermediate);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_step_start;
  auto intermediate_to_c = intermediate;
  auto flush_to_c = flush;
  auto rate_to_c = rate;
  auto amount_to_c = amount;
  auto format_to_c = gi::unwrap (format);
  auto active_to_c = active;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (gboolean) (active_to_c), (::GstFormat) (format_to_c), (guint64) (amount_to_c), (gdouble) (rate_to_c), (gboolean) (flush_to_c), (gboolean) (intermediate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_stream_collection (GstObject* src, GstStreamCollection* collection);
// ::GstMessage* gst_message_new_stream_collection (::GstObject* src, ::GstStreamCollection* collection);
Gst::Message base::MessageBase::new_stream_collection (Gst::Object src, Gst::StreamCollection collection) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstStreamCollection* collection);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_stream_collection;
  auto collection_to_c = gi::unwrap (collection, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstStreamCollection*) (collection_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_stream_start (GstObject* src);
// ::GstMessage* gst_message_new_stream_start (::GstObject* src);
Gst::Message base::MessageBase::new_stream_start (Gst::Object src) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_stream_start;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_stream_start () noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_stream_start;
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_stream_status (GstObject* src, GstStreamStatusType type, GstElement* owner);
// ::GstMessage* gst_message_new_stream_status (::GstObject* src, ::GstStreamStatusType type, ::GstElement* owner);
Gst::Message base::MessageBase::new_stream_status (Gst::Object src, Gst::StreamStatusType type, Gst::Element owner) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstStreamStatusType type, ::GstElement* owner);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_stream_status;
  auto owner_to_c = gi::unwrap (owner, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstStreamStatusType) (type_to_c), (::GstElement*) (owner_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_streams_selected (GstObject* src, GstStreamCollection* collection);
// ::GstMessage* gst_message_new_streams_selected (::GstObject* src, ::GstStreamCollection* collection);
Gst::Message base::MessageBase::new_streams_selected (Gst::Object src, Gst::StreamCollection collection) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstStreamCollection* collection);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_streams_selected;
  auto collection_to_c = gi::unwrap (collection, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstStreamCollection*) (collection_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_structure_change (GstObject* src, GstStructureChangeType type, GstElement* owner, gboolean busy);
// ::GstMessage* gst_message_new_structure_change (::GstObject* src, ::GstStructureChangeType type, ::GstElement* owner, gboolean busy);
Gst::Message base::MessageBase::new_structure_change (Gst::Object src, Gst::StructureChangeType type, Gst::Element owner, gboolean busy) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstStructureChangeType type, ::GstElement* owner, gboolean busy);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_structure_change;
  auto busy_to_c = busy;
  auto owner_to_c = gi::unwrap (owner, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstStructureChangeType) (type_to_c), (::GstElement*) (owner_to_c), (gboolean) (busy_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_structure_change (Gst::StructureChangeType type, Gst::Element owner, gboolean busy) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstStructureChangeType type, ::GstElement* owner, gboolean busy);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_structure_change;
  auto busy_to_c = busy;
  auto owner_to_c = gi::unwrap (owner, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstStructureChangeType) (type_to_c), (::GstElement*) (owner_to_c), (gboolean) (busy_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_tag (GstObject* src, GstTagList* tag_list);
// ::GstMessage* gst_message_new_tag (::GstObject* src, ::GstTagList* tag_list);
Gst::Message base::MessageBase::new_tag (Gst::Object src, Gst::TagList tag_list) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstTagList* tag_list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_tag;
  auto tag_list_to_c = gi::unwrap (tag_list, gi::transfer_full, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstTagList*) (tag_list_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_tag (Gst::TagList tag_list) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstTagList* tag_list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_tag;
  auto tag_list_to_c = gi::unwrap (tag_list, gi::transfer_full, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstTagList*) (tag_list_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_toc (GstObject* src, GstToc* toc, gboolean updated);
// ::GstMessage* gst_message_new_toc (::GstObject* src, ::GstToc* toc, gboolean updated);
Gst::Message base::MessageBase::new_toc (Gst::Object src, Gst::Toc toc, gboolean updated) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GstToc* toc, gboolean updated);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_toc;
  auto updated_to_c = updated;
  auto toc_to_c = gi::unwrap (toc, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GstToc*) (toc_to_c), (gboolean) (updated_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_warning (GstObject* src, GError* error, const gchar* debug);
// ::GstMessage* gst_message_new_warning (::GstObject* src, ::GError* error, const char* debug);
Gst::Message base::MessageBase::new_warning (Gst::Object src, GLib::Error error, const std::string & debug) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_warning;
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_warning (GLib::Error error, const std::string & debug) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_warning;
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_message_new_warning_with_details (GstObject* src, GError* error, const gchar* debug, GstStructure* details);
// ::GstMessage* gst_message_new_warning_with_details (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
Gst::Message base::MessageBase::new_warning_with_details (Gst::Object src, GLib::Error error, const std::string & debug, Gst::Structure details) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_warning_with_details;
  auto details_to_c = gi::unwrap (details, gi::transfer_full, gi::direction_in);
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c), (::GstStructure*) (details_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Message base::MessageBase::new_warning_with_details (GLib::Error error, const std::string & debug) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstObject* src, ::GError* error, const char* debug, ::GstStructure* details);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_new_warning_with_details;
  auto details_to_c = nullptr;
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto src_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (src_to_c), (::GError*) (error_to_c), (const char*) (debug_to_c), (::GstStructure*) (details_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_message_add_redirect_entry (GstMessage* message, const gchar* location, GstTagList* tag_list, const GstStructure* entry_struct);
// void gst_message_add_redirect_entry (::GstMessage* message, const char* location, ::GstTagList* tag_list, const ::GstStructure* entry_struct);
void base::MessageBase::add_redirect_entry (const std::string & location, Gst::TagList tag_list, const Gst::Structure & entry_struct) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, const char* location, ::GstTagList* tag_list, const ::GstStructure* entry_struct);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_add_redirect_entry;
  auto entry_struct_to_c = gi::unwrap (entry_struct, gi::transfer_full, gi::direction_in);
  auto tag_list_to_c = gi::unwrap (tag_list, gi::transfer_full, gi::direction_in);
  auto location_to_c = gi::unwrap (location, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstMessage*) (gobj_()), (const char*) (location_to_c), (::GstTagList*) (tag_list_to_c), (const ::GstStructure*) (entry_struct_to_c));
}
void base::MessageBase::add_redirect_entry (const std::string & location) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, const char* location, ::GstTagList* tag_list, const ::GstStructure* entry_struct);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_add_redirect_entry;
  auto entry_struct_to_c = nullptr;
  auto tag_list_to_c = nullptr;
  auto location_to_c = gi::unwrap (location, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstMessage*) (gobj_()), (const char*) (location_to_c), (::GstTagList*) (tag_list_to_c), (const ::GstStructure*) (entry_struct_to_c));
}

// GstMessage* gst_message_copy (const GstMessage* msg);
// ::GstMessage* gst_message_copy (const ::GstMessage* msg);
Gst::Message base::MessageBase::copy () const noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (const ::GstMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_copy;
  auto _temp_ret = call_wrap_v ((const ::GstMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gsize gst_message_get_num_redirect_entries (GstMessage* message);
// gsize gst_message_get_num_redirect_entries (::GstMessage* message);
gsize base::MessageBase::get_num_redirect_entries () noexcept
{
  typedef gsize (*call_wrap_t) (::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_get_num_redirect_entries;
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()));
  return _temp_ret;
}

// guint32 gst_message_get_seqnum (GstMessage* message);
// guint32 gst_message_get_seqnum (::GstMessage* message);
guint32 base::MessageBase::get_seqnum () noexcept
{
  typedef guint32 (*call_wrap_t) (::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_get_seqnum;
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()));
  return _temp_ret;
}

// const GValue* gst_message_get_stream_status_object (GstMessage* message);
// const ::GValue* gst_message_get_stream_status_object (::GstMessage* message);
GObject::Value base::MessageBase::get_stream_status_object () noexcept
{
  typedef const ::GValue* (*call_wrap_t) (::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_get_stream_status_object;
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GstStructure* gst_message_get_structure (GstMessage* message);
// const ::GstStructure* gst_message_get_structure (::GstMessage* message);
Gst::Structure base::MessageBase::get_structure () noexcept
{
  typedef const ::GstStructure* (*call_wrap_t) (::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_get_structure;
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_message_has_name (GstMessage* message, const gchar* name);
// gboolean gst_message_has_name (::GstMessage* message, const char* name);
bool base::MessageBase::has_name (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMessage* message, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_has_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// void gst_message_parse_async_done (GstMessage* message, GstClockTime* running_time);
// void gst_message_parse_async_done (::GstMessage* message, ::GstClockTime* running_time);
void base::MessageBase::parse_async_done (Gst::ClockTime * running_time) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstClockTime* running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_async_done;
  ::GstClockTime running_time_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstClockTime*) (running_time ? &running_time_o : nullptr));
  if (running_time) *running_time = running_time_o;
}
Gst::ClockTime base::MessageBase::parse_async_done () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstClockTime* running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_async_done;
  ::GstClockTime running_time_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstClockTime*) (&running_time_o));
  return running_time_o;
}

// void gst_message_parse_buffering (GstMessage* message, gint* percent);
// void gst_message_parse_buffering (::GstMessage* message, gint* percent);
void base::MessageBase::parse_buffering (gint * percent) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gint* percent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_buffering;
  gint percent_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (gint*) (percent ? &percent_o : nullptr));
  if (percent) *percent = percent_o;
}
gint base::MessageBase::parse_buffering () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gint* percent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_buffering;
  gint percent_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (gint*) (&percent_o));
  return percent_o;
}

// void gst_message_parse_buffering_stats (GstMessage* message, GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
// void gst_message_parse_buffering_stats (::GstMessage* message, ::GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
void base::MessageBase::parse_buffering_stats (Gst::BufferingMode * mode, gint * avg_in, gint * avg_out, gint64 * buffering_left) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_buffering_stats;
  gint64 buffering_left_o {};
  gint avg_out_o {};
  gint avg_in_o {};
  ::GstBufferingMode mode_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstBufferingMode*) (mode ? &mode_o : nullptr), (gint*) (avg_in ? &avg_in_o : nullptr), (gint*) (avg_out ? &avg_out_o : nullptr), (gint64*) (buffering_left ? &buffering_left_o : nullptr));
  if (buffering_left) *buffering_left = buffering_left_o;
  if (avg_out) *avg_out = avg_out_o;
  if (avg_in) *avg_in = avg_in_o;
  if (mode) *mode = gi::wrap (mode_o);
}
std::tuple<Gst::BufferingMode, gint, gint, gint64> base::MessageBase::parse_buffering_stats () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstBufferingMode* mode, gint* avg_in, gint* avg_out, gint64* buffering_left);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_buffering_stats;
  gint64 buffering_left_o {};
  gint avg_out_o {};
  gint avg_in_o {};
  ::GstBufferingMode mode_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstBufferingMode*) (&mode_o), (gint*) (&avg_in_o), (gint*) (&avg_out_o), (gint64*) (&buffering_left_o));
  return std::make_tuple (gi::wrap (mode_o), avg_in_o, avg_out_o, buffering_left_o);
}

// void gst_message_parse_clock_lost (GstMessage* message, GstClock** clock);
// void gst_message_parse_clock_lost (::GstMessage* message, ::GstClock** clock);
void base::MessageBase::parse_clock_lost (Gst::Clock * clock) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstClock** clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_clock_lost;
  ::GstClock* clock_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstClock**) (clock ? &clock_o : nullptr));
  if (clock) *clock = gi::wrap (clock_o, gi::transfer_none, gi::direction_out);
}
Gst::Clock base::MessageBase::parse_clock_lost () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstClock** clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_clock_lost;
  ::GstClock* clock_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstClock**) (&clock_o));
  return gi::wrap (clock_o, gi::transfer_none, gi::direction_out);
}

// void gst_message_parse_clock_provide (GstMessage* message, GstClock** clock, gboolean* ready);
// void gst_message_parse_clock_provide (::GstMessage* message, ::GstClock** clock, gboolean* ready);
void base::MessageBase::parse_clock_provide (Gst::Clock * clock, bool * ready) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstClock** clock, gboolean* ready);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_clock_provide;
  gboolean ready_o {};
  ::GstClock* clock_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstClock**) (clock ? &clock_o : nullptr), (gboolean*) (ready ? &ready_o : nullptr));
  if (ready) *ready = ready_o;
  if (clock) *clock = gi::wrap (clock_o, gi::transfer_none, gi::direction_out);
}
std::tuple<Gst::Clock, bool> base::MessageBase::parse_clock_provide () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstClock** clock, gboolean* ready);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_clock_provide;
  gboolean ready_o {};
  ::GstClock* clock_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstClock**) (&clock_o), (gboolean*) (&ready_o));
  return std::make_tuple (gi::wrap (clock_o, gi::transfer_none, gi::direction_out), ready_o);
}

// gboolean gst_message_parse_context_type (GstMessage* message, const gchar** context_type);
// gboolean gst_message_parse_context_type (::GstMessage* message, const char** context_type);
bool base::MessageBase::parse_context_type (std::string * context_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMessage* message, const char** context_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_context_type;
  const char* context_type_o {};
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()), (const char**) (context_type ? &context_type_o : nullptr));
  if (context_type) *context_type = gi::wrap (context_type_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::MessageBase::parse_context_type () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMessage* message, const char** context_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_context_type;
  const char* context_type_o {};
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()), (const char**) (&context_type_o));
  return std::make_tuple (_temp_ret, gi::wrap (context_type_o, gi::transfer_none, gi::direction_out));
}

// void gst_message_parse_device_added (GstMessage* message, GstDevice** device);
// void gst_message_parse_device_added (::GstMessage* message, ::GstDevice** device);
void base::MessageBase::parse_device_added (Gst::Device * device) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstDevice** device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_device_added;
  ::GstDevice* device_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstDevice**) (device ? &device_o : nullptr));
  if (device) *device = gi::wrap (device_o, gi::transfer_full, gi::direction_out);
}
Gst::Device base::MessageBase::parse_device_added () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstDevice** device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_device_added;
  ::GstDevice* device_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstDevice**) (&device_o));
  return gi::wrap (device_o, gi::transfer_full, gi::direction_out);
}

// void gst_message_parse_device_changed (GstMessage* message, GstDevice** device, GstDevice** changed_device);
// void gst_message_parse_device_changed (::GstMessage* message, ::GstDevice** device, ::GstDevice** changed_device);
void base::MessageBase::parse_device_changed (Gst::Device * device, Gst::Device * changed_device) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstDevice** device, ::GstDevice** changed_device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_device_changed;
  ::GstDevice* changed_device_o {};
  ::GstDevice* device_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstDevice**) (device ? &device_o : nullptr), (::GstDevice**) (changed_device ? &changed_device_o : nullptr));
  if (changed_device) *changed_device = gi::wrap (changed_device_o, gi::transfer_full, gi::direction_out);
  if (device) *device = gi::wrap (device_o, gi::transfer_full, gi::direction_out);
}
std::tuple<Gst::Device, Gst::Device> base::MessageBase::parse_device_changed () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstDevice** device, ::GstDevice** changed_device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_device_changed;
  ::GstDevice* changed_device_o {};
  ::GstDevice* device_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstDevice**) (&device_o), (::GstDevice**) (&changed_device_o));
  return std::make_tuple (gi::wrap (device_o, gi::transfer_full, gi::direction_out), gi::wrap (changed_device_o, gi::transfer_full, gi::direction_out));
}

// void gst_message_parse_device_removed (GstMessage* message, GstDevice** device);
// void gst_message_parse_device_removed (::GstMessage* message, ::GstDevice** device);
void base::MessageBase::parse_device_removed (Gst::Device * device) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstDevice** device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_device_removed;
  ::GstDevice* device_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstDevice**) (device ? &device_o : nullptr));
  if (device) *device = gi::wrap (device_o, gi::transfer_full, gi::direction_out);
}
Gst::Device base::MessageBase::parse_device_removed () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstDevice** device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_device_removed;
  ::GstDevice* device_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstDevice**) (&device_o));
  return gi::wrap (device_o, gi::transfer_full, gi::direction_out);
}

// void gst_message_parse_error (GstMessage* message, GError** gerror, gchar** debug);
// void gst_message_parse_error (::GstMessage* message, ::GError** gerror, char** debug);
void base::MessageBase::parse_error (GLib::Error * gerror, std::string * debug) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GError** gerror, char** debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_error;
  char* debug_o {};
  ::GError* gerror_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GError**) (gerror ? &gerror_o : nullptr), (char**) (debug ? &debug_o : nullptr));
  if (debug) *debug = gi::wrap (debug_o, gi::transfer_full, gi::direction_out);
  if (gerror) *gerror = gi::wrap (gerror_o, gi::transfer_full, gi::direction_out);
}
std::tuple<GLib::Error, std::string> base::MessageBase::parse_error () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GError** gerror, char** debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_error;
  char* debug_o {};
  ::GError* gerror_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GError**) (&gerror_o), (char**) (&debug_o));
  return std::make_tuple (gi::wrap (gerror_o, gi::transfer_full, gi::direction_out), gi::wrap (debug_o, gi::transfer_full, gi::direction_out));
}

// void gst_message_parse_error_details (GstMessage* message, const GstStructure** structure);
// void gst_message_parse_error_details (::GstMessage* message, const ::GstStructure** structure);
void base::MessageBase::parse_error_details (Gst::Structure & structure) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, const ::GstStructure** structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_error_details;
  const ::GstStructure* structure_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (const ::GstStructure**) (&structure_o));
  structure = gi::wrap (structure_o, gi::transfer_none, gi::direction_out);
}
Gst::Structure base::MessageBase::parse_error_details () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, const ::GstStructure** structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_error_details;
  const ::GstStructure* structure_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (const ::GstStructure**) (&structure_o));
  return gi::wrap (structure_o, gi::transfer_none, gi::direction_out);
}

// gboolean gst_message_parse_group_id (GstMessage* message, guint* group_id);
// gboolean gst_message_parse_group_id (::GstMessage* message, guint* group_id);
bool base::MessageBase::parse_group_id (guint * group_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMessage* message, guint* group_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_group_id;
  guint group_id_o {};
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()), (guint*) (group_id ? &group_id_o : nullptr));
  if (group_id) *group_id = group_id_o;
  return _temp_ret;
}
std::tuple<bool, guint> base::MessageBase::parse_group_id () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMessage* message, guint* group_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_group_id;
  guint group_id_o {};
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()), (guint*) (&group_id_o));
  return std::make_tuple (_temp_ret, group_id_o);
}

// void gst_message_parse_have_context (GstMessage* message, GstContext** context);
// void gst_message_parse_have_context (::GstMessage* message, ::GstContext** context);
void base::MessageBase::parse_have_context (Gst::Context * context) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstContext** context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_have_context;
  ::GstContext* context_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstContext**) (context ? &context_o : nullptr));
  if (context) *context = gi::wrap (context_o, gi::transfer_full, gi::direction_out);
}
Gst::Context base::MessageBase::parse_have_context () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstContext** context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_have_context;
  ::GstContext* context_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstContext**) (&context_o));
  return gi::wrap (context_o, gi::transfer_full, gi::direction_out);
}

// void gst_message_parse_info (GstMessage* message, GError** gerror, gchar** debug);
// void gst_message_parse_info (::GstMessage* message, ::GError** gerror, char** debug);
void base::MessageBase::parse_info (GLib::Error * gerror, std::string * debug) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GError** gerror, char** debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_info;
  char* debug_o {};
  ::GError* gerror_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GError**) (gerror ? &gerror_o : nullptr), (char**) (debug ? &debug_o : nullptr));
  if (debug) *debug = gi::wrap (debug_o, gi::transfer_full, gi::direction_out);
  if (gerror) *gerror = gi::wrap (gerror_o, gi::transfer_full, gi::direction_out);
}
std::tuple<GLib::Error, std::string> base::MessageBase::parse_info () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GError** gerror, char** debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_info;
  char* debug_o {};
  ::GError* gerror_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GError**) (&gerror_o), (char**) (&debug_o));
  return std::make_tuple (gi::wrap (gerror_o, gi::transfer_full, gi::direction_out), gi::wrap (debug_o, gi::transfer_full, gi::direction_out));
}

// void gst_message_parse_info_details (GstMessage* message, const GstStructure** structure);
// void gst_message_parse_info_details (::GstMessage* message, const ::GstStructure** structure);
void base::MessageBase::parse_info_details (Gst::Structure & structure) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, const ::GstStructure** structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_info_details;
  const ::GstStructure* structure_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (const ::GstStructure**) (&structure_o));
  structure = gi::wrap (structure_o, gi::transfer_none, gi::direction_out);
}
Gst::Structure base::MessageBase::parse_info_details () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, const ::GstStructure** structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_info_details;
  const ::GstStructure* structure_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (const ::GstStructure**) (&structure_o));
  return gi::wrap (structure_o, gi::transfer_none, gi::direction_out);
}

// void gst_message_parse_instant_rate_request (GstMessage* message, gdouble* rate_multiplier);
// void gst_message_parse_instant_rate_request (::GstMessage* message, gdouble* rate_multiplier);
void base::MessageBase::parse_instant_rate_request (gdouble * rate_multiplier) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gdouble* rate_multiplier);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_instant_rate_request;
  gdouble rate_multiplier_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (gdouble*) (rate_multiplier ? &rate_multiplier_o : nullptr));
  if (rate_multiplier) *rate_multiplier = rate_multiplier_o;
}
gdouble base::MessageBase::parse_instant_rate_request () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gdouble* rate_multiplier);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_instant_rate_request;
  gdouble rate_multiplier_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (gdouble*) (&rate_multiplier_o));
  return rate_multiplier_o;
}

// void gst_message_parse_new_clock (GstMessage* message, GstClock** clock);
// void gst_message_parse_new_clock (::GstMessage* message, ::GstClock** clock);
void base::MessageBase::parse_new_clock (Gst::Clock * clock) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstClock** clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_new_clock;
  ::GstClock* clock_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstClock**) (clock ? &clock_o : nullptr));
  if (clock) *clock = gi::wrap (clock_o, gi::transfer_none, gi::direction_out);
}
Gst::Clock base::MessageBase::parse_new_clock () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstClock** clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_new_clock;
  ::GstClock* clock_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstClock**) (&clock_o));
  return gi::wrap (clock_o, gi::transfer_none, gi::direction_out);
}

// void gst_message_parse_progress (GstMessage* message, GstProgressType* type, gchar** code, gchar** text);
// void gst_message_parse_progress (::GstMessage* message, ::GstProgressType* type, char** code, char** text);
void base::MessageBase::parse_progress (Gst::ProgressType * type, std::string * code, std::string * text) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstProgressType* type, char** code, char** text);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_progress;
  char* text_o {};
  char* code_o {};
  ::GstProgressType type_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstProgressType*) (type ? &type_o : nullptr), (char**) (code ? &code_o : nullptr), (char**) (text ? &text_o : nullptr));
  if (text) *text = gi::wrap (text_o, gi::transfer_full, gi::direction_out);
  if (code) *code = gi::wrap (code_o, gi::transfer_full, gi::direction_out);
  if (type) *type = gi::wrap (type_o);
}
std::tuple<Gst::ProgressType, std::string, std::string> base::MessageBase::parse_progress () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstProgressType* type, char** code, char** text);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_progress;
  char* text_o {};
  char* code_o {};
  ::GstProgressType type_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstProgressType*) (&type_o), (char**) (&code_o), (char**) (&text_o));
  return std::make_tuple (gi::wrap (type_o), gi::wrap (code_o, gi::transfer_full, gi::direction_out), gi::wrap (text_o, gi::transfer_full, gi::direction_out));
}

// void gst_message_parse_property_notify (GstMessage* message, GstObject** object, const gchar** property_name, const GValue** property_value);
// void gst_message_parse_property_notify (::GstMessage* message, ::GstObject** object, const char** property_name, const ::GValue** property_value);
void base::MessageBase::parse_property_notify (Gst::Object * object, std::string * property_name, GObject::Value * property_value) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstObject** object, const char** property_name, const ::GValue** property_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_property_notify;
  const ::GValue* property_value_o {};
  const char* property_name_o {};
  ::GstObject* object_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstObject**) (object ? &object_o : nullptr), (const char**) (property_name ? &property_name_o : nullptr), (const ::GValue**) (property_value ? &property_value_o : nullptr));
  if (property_value) *property_value = gi::wrap (property_value_o, gi::transfer_none, gi::direction_out);
  if (property_name) *property_name = gi::wrap (property_name_o, gi::transfer_none, gi::direction_out);
  if (object) *object = gi::wrap (object_o, gi::transfer_none, gi::direction_out);
}
std::tuple<Gst::Object, std::string, GObject::Value> base::MessageBase::parse_property_notify () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstObject** object, const char** property_name, const ::GValue** property_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_property_notify;
  const ::GValue* property_value_o {};
  const char* property_name_o {};
  ::GstObject* object_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstObject**) (&object_o), (const char**) (&property_name_o), (const ::GValue**) (&property_value_o));
  return std::make_tuple (gi::wrap (object_o, gi::transfer_none, gi::direction_out), gi::wrap (property_name_o, gi::transfer_none, gi::direction_out), gi::wrap (property_value_o, gi::transfer_none, gi::direction_out));
}

// void gst_message_parse_qos (GstMessage* message, gboolean* live, guint64* running_time, guint64* stream_time, guint64* timestamp, guint64* duration);
// void gst_message_parse_qos (::GstMessage* message, gboolean* live, guint64* running_time, guint64* stream_time, guint64* timestamp, guint64* duration);
void base::MessageBase::parse_qos (bool * live, guint64 * running_time, guint64 * stream_time, guint64 * timestamp, guint64 * duration) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gboolean* live, guint64* running_time, guint64* stream_time, guint64* timestamp, guint64* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_qos;
  guint64 duration_o {};
  guint64 timestamp_o {};
  guint64 stream_time_o {};
  guint64 running_time_o {};
  gboolean live_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (gboolean*) (live ? &live_o : nullptr), (guint64*) (running_time ? &running_time_o : nullptr), (guint64*) (stream_time ? &stream_time_o : nullptr), (guint64*) (timestamp ? &timestamp_o : nullptr), (guint64*) (duration ? &duration_o : nullptr));
  if (duration) *duration = duration_o;
  if (timestamp) *timestamp = timestamp_o;
  if (stream_time) *stream_time = stream_time_o;
  if (running_time) *running_time = running_time_o;
  if (live) *live = live_o;
}
std::tuple<bool, guint64, guint64, guint64, guint64> base::MessageBase::parse_qos () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gboolean* live, guint64* running_time, guint64* stream_time, guint64* timestamp, guint64* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_qos;
  guint64 duration_o {};
  guint64 timestamp_o {};
  guint64 stream_time_o {};
  guint64 running_time_o {};
  gboolean live_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (gboolean*) (&live_o), (guint64*) (&running_time_o), (guint64*) (&stream_time_o), (guint64*) (&timestamp_o), (guint64*) (&duration_o));
  return std::make_tuple (live_o, running_time_o, stream_time_o, timestamp_o, duration_o);
}

// void gst_message_parse_qos_stats (GstMessage* message, GstFormat* format, guint64* processed, guint64* dropped);
// void gst_message_parse_qos_stats (::GstMessage* message, ::GstFormat* format, guint64* processed, guint64* dropped);
void base::MessageBase::parse_qos_stats (Gst::Format * format, guint64 * processed, guint64 * dropped) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstFormat* format, guint64* processed, guint64* dropped);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_qos_stats;
  guint64 dropped_o {};
  guint64 processed_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstFormat*) (format ? &format_o : nullptr), (guint64*) (processed ? &processed_o : nullptr), (guint64*) (dropped ? &dropped_o : nullptr));
  if (dropped) *dropped = dropped_o;
  if (processed) *processed = processed_o;
  if (format) *format = gi::wrap (format_o);
}
std::tuple<Gst::Format, guint64, guint64> base::MessageBase::parse_qos_stats () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstFormat* format, guint64* processed, guint64* dropped);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_qos_stats;
  guint64 dropped_o {};
  guint64 processed_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstFormat*) (&format_o), (guint64*) (&processed_o), (guint64*) (&dropped_o));
  return std::make_tuple (gi::wrap (format_o), processed_o, dropped_o);
}

// void gst_message_parse_qos_values (GstMessage* message, gint64* jitter, gdouble* proportion, gint* quality);
// void gst_message_parse_qos_values (::GstMessage* message, gint64* jitter, gdouble* proportion, gint* quality);
void base::MessageBase::parse_qos_values (gint64 * jitter, gdouble * proportion, gint * quality) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gint64* jitter, gdouble* proportion, gint* quality);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_qos_values;
  gint quality_o {};
  gdouble proportion_o {};
  gint64 jitter_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (gint64*) (jitter ? &jitter_o : nullptr), (gdouble*) (proportion ? &proportion_o : nullptr), (gint*) (quality ? &quality_o : nullptr));
  if (quality) *quality = quality_o;
  if (proportion) *proportion = proportion_o;
  if (jitter) *jitter = jitter_o;
}
std::tuple<gint64, gdouble, gint> base::MessageBase::parse_qos_values () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gint64* jitter, gdouble* proportion, gint* quality);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_qos_values;
  gint quality_o {};
  gdouble proportion_o {};
  gint64 jitter_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (gint64*) (&jitter_o), (gdouble*) (&proportion_o), (gint*) (&quality_o));
  return std::make_tuple (jitter_o, proportion_o, quality_o);
}

// void gst_message_parse_redirect_entry (GstMessage* message, gsize entry_index, const gchar** location, GstTagList** tag_list, const GstStructure** entry_struct);
// void gst_message_parse_redirect_entry (::GstMessage* message, gsize entry_index, const char** location, ::GstTagList** tag_list, const ::GstStructure** entry_struct);
void base::MessageBase::parse_redirect_entry (gsize entry_index, std::string * location, Gst::TagList * tag_list, Gst::Structure * entry_struct) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gsize entry_index, const char** location, ::GstTagList** tag_list, const ::GstStructure** entry_struct);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_redirect_entry;
  const ::GstStructure* entry_struct_o {};
  ::GstTagList* tag_list_o {};
  const char* location_o {};
  auto entry_index_to_c = entry_index;
  call_wrap_v ((::GstMessage*) (gobj_()), (gsize) (entry_index_to_c), (const char**) (location ? &location_o : nullptr), (::GstTagList**) (tag_list ? &tag_list_o : nullptr), (const ::GstStructure**) (entry_struct ? &entry_struct_o : nullptr));
  if (entry_struct) *entry_struct = gi::wrap (entry_struct_o, gi::transfer_none, gi::direction_out);
  if (tag_list) *tag_list = gi::wrap (tag_list_o, gi::transfer_none, gi::direction_out);
  if (location) *location = gi::wrap (location_o, gi::transfer_none, gi::direction_out);
}
std::tuple<std::string, Gst::TagList, Gst::Structure> base::MessageBase::parse_redirect_entry (gsize entry_index) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gsize entry_index, const char** location, ::GstTagList** tag_list, const ::GstStructure** entry_struct);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_redirect_entry;
  const ::GstStructure* entry_struct_o {};
  ::GstTagList* tag_list_o {};
  const char* location_o {};
  auto entry_index_to_c = entry_index;
  call_wrap_v ((::GstMessage*) (gobj_()), (gsize) (entry_index_to_c), (const char**) (&location_o), (::GstTagList**) (&tag_list_o), (const ::GstStructure**) (&entry_struct_o));
  return std::make_tuple (gi::wrap (location_o, gi::transfer_none, gi::direction_out), gi::wrap (tag_list_o, gi::transfer_none, gi::direction_out), gi::wrap (entry_struct_o, gi::transfer_none, gi::direction_out));
}

// void gst_message_parse_request_state (GstMessage* message, GstState* state);
// void gst_message_parse_request_state (::GstMessage* message, ::GstState* state);
void base::MessageBase::parse_request_state (Gst::State * state) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstState* state);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_request_state;
  ::GstState state_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstState*) (state ? &state_o : nullptr));
  if (state) *state = gi::wrap (state_o);
}
Gst::State base::MessageBase::parse_request_state () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstState* state);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_request_state;
  ::GstState state_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstState*) (&state_o));
  return gi::wrap (state_o);
}

// void gst_message_parse_reset_time (GstMessage* message, GstClockTime* running_time);
// void gst_message_parse_reset_time (::GstMessage* message, ::GstClockTime* running_time);
void base::MessageBase::parse_reset_time (Gst::ClockTime * running_time) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstClockTime* running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_reset_time;
  ::GstClockTime running_time_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstClockTime*) (running_time ? &running_time_o : nullptr));
  if (running_time) *running_time = running_time_o;
}
Gst::ClockTime base::MessageBase::parse_reset_time () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstClockTime* running_time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_reset_time;
  ::GstClockTime running_time_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstClockTime*) (&running_time_o));
  return running_time_o;
}

// void gst_message_parse_segment_done (GstMessage* message, GstFormat* format, gint64* position);
// void gst_message_parse_segment_done (::GstMessage* message, ::GstFormat* format, gint64* position);
void base::MessageBase::parse_segment_done (Gst::Format * format, gint64 * position) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstFormat* format, gint64* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_segment_done;
  gint64 position_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstFormat*) (format ? &format_o : nullptr), (gint64*) (position ? &position_o : nullptr));
  if (position) *position = position_o;
  if (format) *format = gi::wrap (format_o);
}
std::tuple<Gst::Format, gint64> base::MessageBase::parse_segment_done () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstFormat* format, gint64* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_segment_done;
  gint64 position_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstFormat*) (&format_o), (gint64*) (&position_o));
  return std::make_tuple (gi::wrap (format_o), position_o);
}

// void gst_message_parse_segment_start (GstMessage* message, GstFormat* format, gint64* position);
// void gst_message_parse_segment_start (::GstMessage* message, ::GstFormat* format, gint64* position);
void base::MessageBase::parse_segment_start (Gst::Format * format, gint64 * position) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstFormat* format, gint64* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_segment_start;
  gint64 position_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstFormat*) (format ? &format_o : nullptr), (gint64*) (position ? &position_o : nullptr));
  if (position) *position = position_o;
  if (format) *format = gi::wrap (format_o);
}
std::tuple<Gst::Format, gint64> base::MessageBase::parse_segment_start () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstFormat* format, gint64* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_segment_start;
  gint64 position_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstFormat*) (&format_o), (gint64*) (&position_o));
  return std::make_tuple (gi::wrap (format_o), position_o);
}

// void gst_message_parse_state_changed (GstMessage* message, GstState* oldstate, GstState* newstate, GstState* pending);
// void gst_message_parse_state_changed (::GstMessage* message, ::GstState* oldstate, ::GstState* newstate, ::GstState* pending);
void base::MessageBase::parse_state_changed (Gst::State * oldstate, Gst::State * newstate, Gst::State * pending) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstState* oldstate, ::GstState* newstate, ::GstState* pending);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_state_changed;
  ::GstState pending_o {};
  ::GstState newstate_o {};
  ::GstState oldstate_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstState*) (oldstate ? &oldstate_o : nullptr), (::GstState*) (newstate ? &newstate_o : nullptr), (::GstState*) (pending ? &pending_o : nullptr));
  if (pending) *pending = gi::wrap (pending_o);
  if (newstate) *newstate = gi::wrap (newstate_o);
  if (oldstate) *oldstate = gi::wrap (oldstate_o);
}
std::tuple<Gst::State, Gst::State, Gst::State> base::MessageBase::parse_state_changed () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstState* oldstate, ::GstState* newstate, ::GstState* pending);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_state_changed;
  ::GstState pending_o {};
  ::GstState newstate_o {};
  ::GstState oldstate_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstState*) (&oldstate_o), (::GstState*) (&newstate_o), (::GstState*) (&pending_o));
  return std::make_tuple (gi::wrap (oldstate_o), gi::wrap (newstate_o), gi::wrap (pending_o));
}

// void gst_message_parse_step_done (GstMessage* message, GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate, guint64* duration, gboolean* eos);
// void gst_message_parse_step_done (::GstMessage* message, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate, guint64* duration, gboolean* eos);
void base::MessageBase::parse_step_done (Gst::Format * format, guint64 * amount, gdouble * rate, bool * flush, bool * intermediate, guint64 * duration, bool * eos) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate, guint64* duration, gboolean* eos);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_step_done;
  gboolean eos_o {};
  guint64 duration_o {};
  gboolean intermediate_o {};
  gboolean flush_o {};
  gdouble rate_o {};
  guint64 amount_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstFormat*) (format ? &format_o : nullptr), (guint64*) (amount ? &amount_o : nullptr), (gdouble*) (rate ? &rate_o : nullptr), (gboolean*) (flush ? &flush_o : nullptr), (gboolean*) (intermediate ? &intermediate_o : nullptr), (guint64*) (duration ? &duration_o : nullptr), (gboolean*) (eos ? &eos_o : nullptr));
  if (eos) *eos = eos_o;
  if (duration) *duration = duration_o;
  if (intermediate) *intermediate = intermediate_o;
  if (flush) *flush = flush_o;
  if (rate) *rate = rate_o;
  if (amount) *amount = amount_o;
  if (format) *format = gi::wrap (format_o);
}
std::tuple<Gst::Format, guint64, gdouble, bool, bool, guint64, bool> base::MessageBase::parse_step_done () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate, guint64* duration, gboolean* eos);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_step_done;
  gboolean eos_o {};
  guint64 duration_o {};
  gboolean intermediate_o {};
  gboolean flush_o {};
  gdouble rate_o {};
  guint64 amount_o {};
  ::GstFormat format_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstFormat*) (&format_o), (guint64*) (&amount_o), (gdouble*) (&rate_o), (gboolean*) (&flush_o), (gboolean*) (&intermediate_o), (guint64*) (&duration_o), (gboolean*) (&eos_o));
  return std::make_tuple (gi::wrap (format_o), amount_o, rate_o, flush_o, intermediate_o, duration_o, eos_o);
}

// void gst_message_parse_step_start (GstMessage* message, gboolean* active, GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
// void gst_message_parse_step_start (::GstMessage* message, gboolean* active, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
void base::MessageBase::parse_step_start (bool * active, Gst::Format * format, guint64 * amount, gdouble * rate, bool * flush, bool * intermediate) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gboolean* active, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_step_start;
  gboolean intermediate_o {};
  gboolean flush_o {};
  gdouble rate_o {};
  guint64 amount_o {};
  ::GstFormat format_o {};
  gboolean active_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (gboolean*) (active ? &active_o : nullptr), (::GstFormat*) (format ? &format_o : nullptr), (guint64*) (amount ? &amount_o : nullptr), (gdouble*) (rate ? &rate_o : nullptr), (gboolean*) (flush ? &flush_o : nullptr), (gboolean*) (intermediate ? &intermediate_o : nullptr));
  if (intermediate) *intermediate = intermediate_o;
  if (flush) *flush = flush_o;
  if (rate) *rate = rate_o;
  if (amount) *amount = amount_o;
  if (format) *format = gi::wrap (format_o);
  if (active) *active = active_o;
}
std::tuple<bool, Gst::Format, guint64, gdouble, bool, bool> base::MessageBase::parse_step_start () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gboolean* active, ::GstFormat* format, guint64* amount, gdouble* rate, gboolean* flush, gboolean* intermediate);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_step_start;
  gboolean intermediate_o {};
  gboolean flush_o {};
  gdouble rate_o {};
  guint64 amount_o {};
  ::GstFormat format_o {};
  gboolean active_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (gboolean*) (&active_o), (::GstFormat*) (&format_o), (guint64*) (&amount_o), (gdouble*) (&rate_o), (gboolean*) (&flush_o), (gboolean*) (&intermediate_o));
  return std::make_tuple (active_o, gi::wrap (format_o), amount_o, rate_o, flush_o, intermediate_o);
}

// void gst_message_parse_stream_collection (GstMessage* message, GstStreamCollection** collection);
// void gst_message_parse_stream_collection (::GstMessage* message, ::GstStreamCollection** collection);
void base::MessageBase::parse_stream_collection (Gst::StreamCollection * collection) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstStreamCollection** collection);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_stream_collection;
  ::GstStreamCollection* collection_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstStreamCollection**) (collection ? &collection_o : nullptr));
  if (collection) *collection = gi::wrap (collection_o, gi::transfer_full, gi::direction_out);
}
Gst::StreamCollection base::MessageBase::parse_stream_collection () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstStreamCollection** collection);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_stream_collection;
  ::GstStreamCollection* collection_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstStreamCollection**) (&collection_o));
  return gi::wrap (collection_o, gi::transfer_full, gi::direction_out);
}

// void gst_message_parse_stream_status (GstMessage* message, GstStreamStatusType* type, GstElement** owner);
// void gst_message_parse_stream_status (::GstMessage* message, ::GstStreamStatusType* type, ::GstElement** owner);
void base::MessageBase::parse_stream_status (Gst::StreamStatusType & type, Gst::Element & owner) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstStreamStatusType* type, ::GstElement** owner);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_stream_status;
  ::GstElement* owner_o {};
  ::GstStreamStatusType type_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstStreamStatusType*) (&type_o), (::GstElement**) (&owner_o));
  owner = gi::wrap (owner_o, gi::transfer_none, gi::direction_out);
  type = gi::wrap (type_o);
}
std::tuple<Gst::StreamStatusType, Gst::Element> base::MessageBase::parse_stream_status () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstStreamStatusType* type, ::GstElement** owner);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_stream_status;
  ::GstElement* owner_o {};
  ::GstStreamStatusType type_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstStreamStatusType*) (&type_o), (::GstElement**) (&owner_o));
  return std::make_tuple (gi::wrap (type_o), gi::wrap (owner_o, gi::transfer_none, gi::direction_out));
}

// void gst_message_parse_streams_selected (GstMessage* message, GstStreamCollection** collection);
// void gst_message_parse_streams_selected (::GstMessage* message, ::GstStreamCollection** collection);
void base::MessageBase::parse_streams_selected (Gst::StreamCollection * collection) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstStreamCollection** collection);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_streams_selected;
  ::GstStreamCollection* collection_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstStreamCollection**) (collection ? &collection_o : nullptr));
  if (collection) *collection = gi::wrap (collection_o, gi::transfer_full, gi::direction_out);
}
Gst::StreamCollection base::MessageBase::parse_streams_selected () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstStreamCollection** collection);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_streams_selected;
  ::GstStreamCollection* collection_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstStreamCollection**) (&collection_o));
  return gi::wrap (collection_o, gi::transfer_full, gi::direction_out);
}

// void gst_message_parse_structure_change (GstMessage* message, GstStructureChangeType* type, GstElement** owner, gboolean* busy);
// void gst_message_parse_structure_change (::GstMessage* message, ::GstStructureChangeType* type, ::GstElement** owner, gboolean* busy);
void base::MessageBase::parse_structure_change (Gst::StructureChangeType & type, Gst::Element * owner, bool * busy) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstStructureChangeType* type, ::GstElement** owner, gboolean* busy);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_structure_change;
  gboolean busy_o {};
  ::GstElement* owner_o {};
  ::GstStructureChangeType type_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstStructureChangeType*) (&type_o), (::GstElement**) (owner ? &owner_o : nullptr), (gboolean*) (busy ? &busy_o : nullptr));
  if (busy) *busy = busy_o;
  if (owner) *owner = gi::wrap (owner_o, gi::transfer_none, gi::direction_out);
  type = gi::wrap (type_o);
}
std::tuple<Gst::StructureChangeType, Gst::Element, bool> base::MessageBase::parse_structure_change () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstStructureChangeType* type, ::GstElement** owner, gboolean* busy);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_structure_change;
  gboolean busy_o {};
  ::GstElement* owner_o {};
  ::GstStructureChangeType type_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstStructureChangeType*) (&type_o), (::GstElement**) (&owner_o), (gboolean*) (&busy_o));
  return std::make_tuple (gi::wrap (type_o), gi::wrap (owner_o, gi::transfer_none, gi::direction_out), busy_o);
}

// void gst_message_parse_tag (GstMessage* message, GstTagList** tag_list);
// void gst_message_parse_tag (::GstMessage* message, ::GstTagList** tag_list);
void base::MessageBase::parse_tag (Gst::TagList & tag_list) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstTagList** tag_list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_tag;
  ::GstTagList* tag_list_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstTagList**) (&tag_list_o));
  tag_list = gi::wrap (tag_list_o, gi::transfer_full, gi::direction_out);
}
Gst::TagList base::MessageBase::parse_tag () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstTagList** tag_list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_tag;
  ::GstTagList* tag_list_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstTagList**) (&tag_list_o));
  return gi::wrap (tag_list_o, gi::transfer_full, gi::direction_out);
}

// void gst_message_parse_toc (GstMessage* message, GstToc** toc, gboolean* updated);
// void gst_message_parse_toc (::GstMessage* message, ::GstToc** toc, gboolean* updated);
void base::MessageBase::parse_toc (Gst::Toc & toc, bool & updated) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstToc** toc, gboolean* updated);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_toc;
  gboolean updated_o {};
  ::GstToc* toc_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstToc**) (&toc_o), (gboolean*) (&updated_o));
  updated = updated_o;
  toc = gi::wrap (toc_o, gi::transfer_full, gi::direction_out);
}
std::tuple<Gst::Toc, bool> base::MessageBase::parse_toc () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstToc** toc, gboolean* updated);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_toc;
  gboolean updated_o {};
  ::GstToc* toc_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstToc**) (&toc_o), (gboolean*) (&updated_o));
  return std::make_tuple (gi::wrap (toc_o, gi::transfer_full, gi::direction_out), updated_o);
}

// void gst_message_parse_warning (GstMessage* message, GError** gerror, gchar** debug);
// void gst_message_parse_warning (::GstMessage* message, ::GError** gerror, char** debug);
void base::MessageBase::parse_warning (GLib::Error * gerror, std::string * debug) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GError** gerror, char** debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_warning;
  char* debug_o {};
  ::GError* gerror_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GError**) (gerror ? &gerror_o : nullptr), (char**) (debug ? &debug_o : nullptr));
  if (debug) *debug = gi::wrap (debug_o, gi::transfer_full, gi::direction_out);
  if (gerror) *gerror = gi::wrap (gerror_o, gi::transfer_full, gi::direction_out);
}
std::tuple<GLib::Error, std::string> base::MessageBase::parse_warning () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GError** gerror, char** debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_warning;
  char* debug_o {};
  ::GError* gerror_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (::GError**) (&gerror_o), (char**) (&debug_o));
  return std::make_tuple (gi::wrap (gerror_o, gi::transfer_full, gi::direction_out), gi::wrap (debug_o, gi::transfer_full, gi::direction_out));
}

// void gst_message_parse_warning_details (GstMessage* message, const GstStructure** structure);
// void gst_message_parse_warning_details (::GstMessage* message, const ::GstStructure** structure);
void base::MessageBase::parse_warning_details (Gst::Structure & structure) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, const ::GstStructure** structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_warning_details;
  const ::GstStructure* structure_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (const ::GstStructure**) (&structure_o));
  structure = gi::wrap (structure_o, gi::transfer_none, gi::direction_out);
}
Gst::Structure base::MessageBase::parse_warning_details () noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, const ::GstStructure** structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_parse_warning_details;
  const ::GstStructure* structure_o {};
  call_wrap_v ((::GstMessage*) (gobj_()), (const ::GstStructure**) (&structure_o));
  return gi::wrap (structure_o, gi::transfer_none, gi::direction_out);
}

// void gst_message_set_buffering_stats (GstMessage* message, GstBufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left);
// void gst_message_set_buffering_stats (::GstMessage* message, ::GstBufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left);
void base::MessageBase::set_buffering_stats (Gst::BufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstBufferingMode mode, gint avg_in, gint avg_out, gint64 buffering_left);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_set_buffering_stats;
  auto buffering_left_to_c = buffering_left;
  auto avg_out_to_c = avg_out;
  auto avg_in_to_c = avg_in;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstBufferingMode) (mode_to_c), (gint) (avg_in_to_c), (gint) (avg_out_to_c), (gint64) (buffering_left_to_c));
}

// void gst_message_set_group_id (GstMessage* message, guint group_id);
// void gst_message_set_group_id (::GstMessage* message, guint group_id);
void base::MessageBase::set_group_id (guint group_id) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, guint group_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_set_group_id;
  auto group_id_to_c = group_id;
  call_wrap_v ((::GstMessage*) (gobj_()), (guint) (group_id_to_c));
}

// void gst_message_set_qos_stats (GstMessage* message, GstFormat format, guint64 processed, guint64 dropped);
// void gst_message_set_qos_stats (::GstMessage* message, ::GstFormat format, guint64 processed, guint64 dropped);
void base::MessageBase::set_qos_stats (Gst::Format format, guint64 processed, guint64 dropped) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstFormat format, guint64 processed, guint64 dropped);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_set_qos_stats;
  auto dropped_to_c = dropped;
  auto processed_to_c = processed;
  auto format_to_c = gi::unwrap (format);
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstFormat) (format_to_c), (guint64) (processed_to_c), (guint64) (dropped_to_c));
}

// void gst_message_set_qos_values (GstMessage* message, gint64 jitter, gdouble proportion, gint quality);
// void gst_message_set_qos_values (::GstMessage* message, gint64 jitter, gdouble proportion, gint quality);
void base::MessageBase::set_qos_values (gint64 jitter, gdouble proportion, gint quality) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, gint64 jitter, gdouble proportion, gint quality);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_set_qos_values;
  auto quality_to_c = quality;
  auto proportion_to_c = proportion;
  auto jitter_to_c = jitter;
  call_wrap_v ((::GstMessage*) (gobj_()), (gint64) (jitter_to_c), (gdouble) (proportion_to_c), (gint) (quality_to_c));
}

// void gst_message_set_seqnum (GstMessage* message, guint32 seqnum);
// void gst_message_set_seqnum (::GstMessage* message, guint32 seqnum);
void base::MessageBase::set_seqnum (guint32 seqnum) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, guint32 seqnum);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_set_seqnum;
  auto seqnum_to_c = seqnum;
  call_wrap_v ((::GstMessage*) (gobj_()), (guint32) (seqnum_to_c));
}

// void gst_message_set_stream_status_object (GstMessage* message, const GValue* object);
// void gst_message_set_stream_status_object (::GstMessage* message, const ::GValue* object);
void base::MessageBase::set_stream_status_object (const GObject::Value & object) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, const ::GValue* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_set_stream_status_object;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstMessage*) (gobj_()), (const ::GValue*) (object_to_c));
}

// void gst_message_streams_selected_add (GstMessage* message, GstStream* stream);
// void gst_message_streams_selected_add (::GstMessage* message, ::GstStream* stream);
void base::MessageBase::streams_selected_add (Gst::Stream stream) noexcept
{
  typedef void (*call_wrap_t) (::GstMessage* message, ::GstStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_streams_selected_add;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstMessage*) (gobj_()), (::GstStream*) (stream_to_c));
}

// guint gst_message_streams_selected_get_size (GstMessage* message);
// guint gst_message_streams_selected_get_size (::GstMessage* message);
guint base::MessageBase::streams_selected_get_size () noexcept
{
  typedef guint (*call_wrap_t) (::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_streams_selected_get_size;
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()));
  return _temp_ret;
}

// GstStream* gst_message_streams_selected_get_stream (GstMessage* message, guint idx);
// ::GstStream* gst_message_streams_selected_get_stream (::GstMessage* message, guint idx);
Gst::Stream base::MessageBase::streams_selected_get_stream (guint idx) noexcept
{
  typedef ::GstStream* (*call_wrap_t) (::GstMessage* message, guint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_streams_selected_get_stream;
  auto idx_to_c = idx;
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()), (guint) (idx_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstStructure* gst_message_writable_structure (GstMessage* message);
// ::GstStructure* gst_message_writable_structure (::GstMessage* message);
Gst::Structure base::MessageBase::writable_structure () noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_writable_structure;
  auto _temp_ret = call_wrap_v ((::GstMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_message_replace (GstMessage** old_message, GstMessage* new_message);
// gboolean gst_message_replace (::GstMessage** old_message, ::GstMessage* new_message);
bool base::MessageBase::replace (Gst::Message * old_message, Gst::Message new_message) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMessage** old_message, ::GstMessage* new_message);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_replace;
  auto new_message_to_c = gi::unwrap (new_message, gi::transfer_none, gi::direction_in);
  auto old_message_to_c = gi::unwrap (*old_message, gi::transfer_full, gi::direction_in);
  ::GstMessage* old_message_o = old_message_to_c;
  auto _temp_ret = call_wrap_v ((::GstMessage**) (old_message ? &old_message_o : nullptr), (::GstMessage*) (new_message_to_c));
  if (old_message) *old_message = gi::wrap (old_message_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::MessageBase::replace (Gst::Message * old_message) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMessage** old_message, ::GstMessage* new_message);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_message_replace;
  auto new_message_to_c = nullptr;
  auto old_message_to_c = nullptr;
  ::GstMessage* old_message_o = old_message_to_c;
  auto _temp_ret = call_wrap_v ((::GstMessage**) (old_message ? &old_message_o : nullptr), (::GstMessage*) (new_message_to_c));
  if (old_message) *old_message = gi::wrap (old_message_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/message_extra_def_impl.hpp>)
#include <gst/message_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/message_extra_impl.hpp>)
#include <gst/message_extra_impl.hpp>
#endif
#endif

#endif
