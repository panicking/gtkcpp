// AUTO-GENERATED

#ifndef _GI_GST_PAD_IMPL_HPP_
#define _GI_GST_PAD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstPad* gst_pad_new (const gchar* name, GstPadDirection direction);
// ::GstPad* gst_pad_new (const char* name, ::GstPadDirection direction);
Gst::Pad base::PadBase::new_ (const std::string & name, Gst::PadDirection direction) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (const char* name, ::GstPadDirection direction);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_new;
  auto direction_to_c = gi::unwrap (direction);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GstPadDirection) (direction_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Pad base::PadBase::new_ (Gst::PadDirection direction) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (const char* name, ::GstPadDirection direction);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_new;
  auto direction_to_c = gi::unwrap (direction);
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GstPadDirection) (direction_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstPad* gst_pad_new_from_static_template (GstStaticPadTemplate* templ, const gchar* name);
// ::GstPad* gst_pad_new_from_static_template (::GstStaticPadTemplate* templ, const char* name);
Gst::Pad base::PadBase::new_from_static_template (Gst::StaticPadTemplate templ, const std::string & name) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstStaticPadTemplate* templ, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_new_from_static_template;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto templ_to_c = gi::unwrap (templ, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStaticPadTemplate*) (templ_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstPad* gst_pad_new_from_template (GstPadTemplate* templ, const gchar* name);
// ::GstPad* gst_pad_new_from_template (::GstPadTemplate* templ, const char* name);
Gst::Pad base::PadBase::new_from_template (Gst::PadTemplate templ, const std::string & name) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstPadTemplate* templ, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_new_from_template;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto templ_to_c = gi::unwrap (templ, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPadTemplate*) (templ_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Pad base::PadBase::new_from_template (Gst::PadTemplate templ) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstPadTemplate* templ, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_new_from_template;
  auto name_to_c = nullptr;
  auto templ_to_c = gi::unwrap (templ, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPadTemplate*) (templ_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_pad_link_get_name (GstPadLinkReturn ret);
// const char* gst_pad_link_get_name (::GstPadLinkReturn ret);
std::string base::PadBase::link_get_name (Gst::PadLinkReturn ret) noexcept
{
  typedef const char* (*call_wrap_t) (::GstPadLinkReturn ret);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_link_get_name;
  auto ret_to_c = gi::unwrap (ret);
  auto _temp_ret = call_wrap_v ((::GstPadLinkReturn) (ret_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_pad_activate_mode (GstPad* pad, GstPadMode mode, gboolean active);
// gboolean gst_pad_activate_mode (::GstPad* pad, ::GstPadMode mode, gboolean active);
bool base::PadBase::activate_mode (Gst::PadMode mode, gboolean active) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstPadMode mode, gboolean active);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_activate_mode;
  auto active_to_c = active;
  auto mode_to_c = gi::unwrap (mode);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstPadMode) (mode_to_c), (gboolean) (active_to_c));
  return _temp_ret;
}

// gulong gst_pad_add_probe (GstPad* pad, GstPadProbeType mask, GstPadProbeCallback callback, gpointer user_data, GDestroyNotify destroy_data);
// gulong gst_pad_add_probe (::GstPad* pad, ::GstPadProbeType mask, Gst::PadProbeCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_data);
gulong base::PadBase::add_probe (Gst::PadProbeType mask, Gst::PadProbeCallback callback) noexcept
{
  typedef gulong (*call_wrap_t) (::GstPad* pad, ::GstPadProbeType mask, Gst::PadProbeCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_add_probe;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  auto mask_to_c = gi::unwrap (mask);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstPadProbeType) (mask_to_c), (Gst::PadProbeCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
  return _temp_ret;
}

// gboolean gst_pad_can_link (GstPad* srcpad, GstPad* sinkpad);
// gboolean gst_pad_can_link (::GstPad* srcpad, ::GstPad* sinkpad);
bool base::PadBase::can_link (Gst::Pad sinkpad) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* srcpad, ::GstPad* sinkpad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_can_link;
  auto sinkpad_to_c = gi::unwrap (sinkpad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstPad*) (sinkpad_to_c));
  return _temp_ret;
}

// GstFlowReturn gst_pad_chain (GstPad* pad, GstBuffer* buffer);
// ::GstFlowReturn gst_pad_chain (::GstPad* pad, ::GstBuffer* buffer);
Gst::FlowReturn base::PadBase::chain (Gst::Buffer buffer) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, ::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_chain;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstBuffer*) (buffer_to_c));
  return gi::wrap (_temp_ret);
}

// GstFlowReturn gst_pad_chain_list (GstPad* pad, GstBufferList* list);
// ::GstFlowReturn gst_pad_chain_list (::GstPad* pad, ::GstBufferList* list);
Gst::FlowReturn base::PadBase::chain_list (Gst::BufferList list) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, ::GstBufferList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_chain_list;
  auto list_to_c = gi::unwrap (list, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstBufferList*) (list_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gst_pad_check_reconfigure (GstPad* pad);
// gboolean gst_pad_check_reconfigure (::GstPad* pad);
bool base::PadBase::check_reconfigure () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_check_reconfigure;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return _temp_ret;
}

// gchar* gst_pad_create_stream_id (GstPad* pad, GstElement* parent, const gchar* stream_id);
// char* gst_pad_create_stream_id (::GstPad* pad, ::GstElement* parent, const char* stream_id);
std::string base::PadBase::create_stream_id (Gst::Element parent, const std::string & stream_id) noexcept
{
  typedef char* (*call_wrap_t) (::GstPad* pad, ::GstElement* parent, const char* stream_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_create_stream_id;
  auto stream_id_to_c = gi::unwrap (stream_id, gi::transfer_none, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstElement*) (parent_to_c), (const char*) (stream_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::PadBase::create_stream_id (Gst::Element parent) noexcept
{
  typedef char* (*call_wrap_t) (::GstPad* pad, ::GstElement* parent, const char* stream_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_create_stream_id;
  auto stream_id_to_c = nullptr;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstElement*) (parent_to_c), (const char*) (stream_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gst_pad_create_stream_id_printf (GstPad* pad, GstElement* parent, const gchar* stream_id);
// char* gst_pad_create_stream_id_printf (::GstPad* pad, ::GstElement* parent, const char* stream_id);
// IGNORE; not introspectable, varargs not supported

// gchar* gst_pad_create_stream_id_printf_valist (GstPad* pad, GstElement* parent, const gchar* stream_id, va_list var_args);
// char* gst_pad_create_stream_id_printf_valist (::GstPad* pad, ::GstElement* parent, const char* stream_id,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// gboolean gst_pad_event_default (GstPad* pad, GstObject* parent, GstEvent* event);
// gboolean gst_pad_event_default (::GstPad* pad, ::GstObject* parent, ::GstEvent* event);
bool base::PadBase::event_default (Gst::Object parent, Gst::Event event) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstEvent* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_event_default;
  auto event_to_c = gi::unwrap (event, gi::transfer_full, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstObject*) (parent_to_c), (::GstEvent*) (event_to_c));
  return _temp_ret;
}
bool base::PadBase::event_default (Gst::Event event) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstEvent* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_event_default;
  auto event_to_c = gi::unwrap (event, gi::transfer_full, gi::direction_in);
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstObject*) (parent_to_c), (::GstEvent*) (event_to_c));
  return _temp_ret;
}

// gboolean gst_pad_forward (GstPad* pad, GstPadForwardFunction forward, gpointer user_data);
// gboolean gst_pad_forward (::GstPad* pad, Gst::PadForwardFunction::cfunction_type forward, void* user_data);
bool base::PadBase::forward (Gst::PadForwardFunction forward) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, Gst::PadForwardFunction::cfunction_type forward, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_forward;
  auto forward_wrap_ = forward ? unwrap (std::move (forward), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(forward_wrap_)>::type> forward_wrap__sp (forward_wrap_);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (Gst::PadForwardFunction::cfunction_type) (forward_wrap_ ? &forward_wrap_->wrapper : nullptr), (void*) (forward_wrap_));
  return _temp_ret;
}

// GstCaps* gst_pad_get_allowed_caps (GstPad* pad);
// ::GstCaps* gst_pad_get_allowed_caps (::GstPad* pad);
Gst::Caps base::PadBase::get_allowed_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_allowed_caps;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_pad_get_current_caps (GstPad* pad);
// ::GstCaps* gst_pad_get_current_caps (::GstPad* pad);
Gst::Caps base::PadBase::get_current_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_current_caps;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstPadDirection gst_pad_get_direction (GstPad* pad);
// ::GstPadDirection gst_pad_get_direction (::GstPad* pad);
Gst::PadDirection base::PadBase::get_direction () noexcept
{
  typedef ::GstPadDirection (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_direction;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gpointer gst_pad_get_element_private (GstPad* pad);
// void* gst_pad_get_element_private (::GstPad* pad);
gpointer base::PadBase::get_element_private () noexcept
{
  typedef void* (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_element_private;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return _temp_ret;
}

// GstFlowReturn gst_pad_get_last_flow_return (GstPad* pad);
// ::GstFlowReturn gst_pad_get_last_flow_return (::GstPad* pad);
Gst::FlowReturn base::PadBase::get_last_flow_return () noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_last_flow_return;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint64 gst_pad_get_offset (GstPad* pad);
// gint64 gst_pad_get_offset (::GstPad* pad);
gint64 base::PadBase::get_offset () noexcept
{
  typedef gint64 (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_offset;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return _temp_ret;
}

// GstPadTemplate* gst_pad_get_pad_template (GstPad* pad);
// ::GstPadTemplate* gst_pad_get_pad_template (::GstPad* pad);
Gst::PadTemplate base::PadBase::get_pad_template () noexcept
{
  typedef ::GstPadTemplate* (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_pad_template;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstCaps* gst_pad_get_pad_template_caps (GstPad* pad);
// ::GstCaps* gst_pad_get_pad_template_caps (::GstPad* pad);
Gst::Caps base::PadBase::get_pad_template_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_pad_template_caps;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstElement* gst_pad_get_parent_element (GstPad* pad);
// ::GstElement* gst_pad_get_parent_element (::GstPad* pad);
Gst::Element base::PadBase::get_parent_element () noexcept
{
  typedef ::GstElement* (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_parent_element;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstPad* gst_pad_get_peer (GstPad* pad);
// ::GstPad* gst_pad_get_peer (::GstPad* pad);
Gst::Pad base::PadBase::get_peer () noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_peer;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstFlowReturn gst_pad_get_range (GstPad* pad, guint64 offset, guint size, GstBuffer** buffer);
// ::GstFlowReturn gst_pad_get_range (::GstPad* pad, guint64 offset, guint size, ::GstBuffer** buffer);
Gst::FlowReturn base::PadBase::get_range (guint64 offset, guint size, Gst::Buffer & buffer) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, guint64 offset, guint size, ::GstBuffer** buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_range;
  ::GstBuffer* buffer_o {};
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (guint64) (offset_to_c), (guint) (size_to_c), (::GstBuffer**) (&buffer_o));
  buffer = gi::wrap (buffer_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<Gst::FlowReturn, Gst::Buffer> base::PadBase::get_range (guint64 offset, guint size) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, guint64 offset, guint size, ::GstBuffer** buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_range;
  ::GstBuffer* buffer_o {};
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (guint64) (offset_to_c), (guint) (size_to_c), (::GstBuffer**) (&buffer_o));
  return std::make_tuple (gi::wrap (_temp_ret), gi::wrap (buffer_o, gi::transfer_full, gi::direction_out));
}

// GstPad* gst_pad_get_single_internal_link (GstPad* pad);
// ::GstPad* gst_pad_get_single_internal_link (::GstPad* pad);
Gst::Pad base::PadBase::get_single_internal_link () noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_single_internal_link;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstEvent* gst_pad_get_sticky_event (GstPad* pad, GstEventType event_type, guint idx);
// ::GstEvent* gst_pad_get_sticky_event (::GstPad* pad, ::GstEventType event_type, guint idx);
Gst::Event base::PadBase::get_sticky_event (Gst::EventType event_type, guint idx) noexcept
{
  typedef ::GstEvent* (*call_wrap_t) (::GstPad* pad, ::GstEventType event_type, guint idx);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_sticky_event;
  auto idx_to_c = idx;
  auto event_type_to_c = gi::unwrap (event_type);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstEventType) (event_type_to_c), (guint) (idx_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstStream* gst_pad_get_stream (GstPad* pad);
// ::GstStream* gst_pad_get_stream (::GstPad* pad);
Gst::Stream base::PadBase::get_stream () noexcept
{
  typedef ::GstStream* (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_stream;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gst_pad_get_stream_id (GstPad* pad);
// char* gst_pad_get_stream_id (::GstPad* pad);
std::string base::PadBase::get_stream_id () noexcept
{
  typedef char* (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_stream_id;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstTaskState gst_pad_get_task_state (GstPad* pad);
// ::GstTaskState gst_pad_get_task_state (::GstPad* pad);
Gst::TaskState base::PadBase::get_task_state () noexcept
{
  typedef ::GstTaskState (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_get_task_state;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gst_pad_has_current_caps (GstPad* pad);
// gboolean gst_pad_has_current_caps (::GstPad* pad);
bool base::PadBase::has_current_caps () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_has_current_caps;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_pad_is_active (GstPad* pad);
// gboolean gst_pad_is_active (::GstPad* pad);
bool base::PadBase::is_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_is_active;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_pad_is_blocked (GstPad* pad);
// gboolean gst_pad_is_blocked (::GstPad* pad);
bool base::PadBase::is_blocked () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_is_blocked;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_pad_is_blocking (GstPad* pad);
// gboolean gst_pad_is_blocking (::GstPad* pad);
bool base::PadBase::is_blocking () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_is_blocking;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_pad_is_linked (GstPad* pad);
// gboolean gst_pad_is_linked (::GstPad* pad);
bool base::PadBase::is_linked () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_is_linked;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return _temp_ret;
}

// GstIterator* gst_pad_iterate_internal_links (GstPad* pad);
// ::GstIterator* gst_pad_iterate_internal_links (::GstPad* pad);
Gst::Iterator base::PadBase::iterate_internal_links () noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_iterate_internal_links;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstIterator* gst_pad_iterate_internal_links_default (GstPad* pad, GstObject* parent);
// ::GstIterator* gst_pad_iterate_internal_links_default (::GstPad* pad, ::GstObject* parent);
Gst::Iterator base::PadBase::iterate_internal_links_default (Gst::Object parent) noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstPad* pad, ::GstObject* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_iterate_internal_links_default;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstObject*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Iterator base::PadBase::iterate_internal_links_default () noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstPad* pad, ::GstObject* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_iterate_internal_links_default;
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstObject*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstPadLinkReturn gst_pad_link (GstPad* srcpad, GstPad* sinkpad);
// ::GstPadLinkReturn gst_pad_link (::GstPad* srcpad, ::GstPad* sinkpad);
Gst::PadLinkReturn base::PadBase::link (Gst::Pad sinkpad) noexcept
{
  typedef ::GstPadLinkReturn (*call_wrap_t) (::GstPad* srcpad, ::GstPad* sinkpad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_link;
  auto sinkpad_to_c = gi::unwrap (sinkpad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstPad*) (sinkpad_to_c));
  return gi::wrap (_temp_ret);
}

// GstPadLinkReturn gst_pad_link_full (GstPad* srcpad, GstPad* sinkpad, GstPadLinkCheck flags);
// ::GstPadLinkReturn gst_pad_link_full (::GstPad* srcpad, ::GstPad* sinkpad, ::GstPadLinkCheck flags);
Gst::PadLinkReturn base::PadBase::link_full (Gst::Pad sinkpad, Gst::PadLinkCheck flags) noexcept
{
  typedef ::GstPadLinkReturn (*call_wrap_t) (::GstPad* srcpad, ::GstPad* sinkpad, ::GstPadLinkCheck flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_link_full;
  auto flags_to_c = gi::unwrap (flags);
  auto sinkpad_to_c = gi::unwrap (sinkpad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstPad*) (sinkpad_to_c), (::GstPadLinkCheck) (flags_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gst_pad_link_maybe_ghosting (GstPad* src, GstPad* sink);
// gboolean gst_pad_link_maybe_ghosting (::GstPad* src, ::GstPad* sink);
bool base::PadBase::link_maybe_ghosting (Gst::Pad sink) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* src, ::GstPad* sink);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_link_maybe_ghosting;
  auto sink_to_c = gi::unwrap (sink, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstPad*) (sink_to_c));
  return _temp_ret;
}

// gboolean gst_pad_link_maybe_ghosting_full (GstPad* src, GstPad* sink, GstPadLinkCheck flags);
// gboolean gst_pad_link_maybe_ghosting_full (::GstPad* src, ::GstPad* sink, ::GstPadLinkCheck flags);
bool base::PadBase::link_maybe_ghosting_full (Gst::Pad sink, Gst::PadLinkCheck flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* src, ::GstPad* sink, ::GstPadLinkCheck flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_link_maybe_ghosting_full;
  auto flags_to_c = gi::unwrap (flags);
  auto sink_to_c = gi::unwrap (sink, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstPad*) (sink_to_c), (::GstPadLinkCheck) (flags_to_c));
  return _temp_ret;
}

// void gst_pad_mark_reconfigure (GstPad* pad);
// void gst_pad_mark_reconfigure (::GstPad* pad);
void base::PadBase::mark_reconfigure () noexcept
{
  typedef void (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_mark_reconfigure;
  call_wrap_v ((::GstPad*) (gobj_()));
}

// gboolean gst_pad_needs_reconfigure (GstPad* pad);
// gboolean gst_pad_needs_reconfigure (::GstPad* pad);
bool base::PadBase::needs_reconfigure () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_needs_reconfigure;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_pad_pause_task (GstPad* pad);
// gboolean gst_pad_pause_task (::GstPad* pad);
bool base::PadBase::pause_task () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_pause_task;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_pad_peer_query (GstPad* pad, GstQuery* query);
// gboolean gst_pad_peer_query (::GstPad* pad, ::GstQuery* query);
bool base::PadBase::peer_query (Gst::Query query) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_peer_query;
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstQuery*) (query_to_c));
  return _temp_ret;
}

// gboolean gst_pad_peer_query_accept_caps (GstPad* pad, GstCaps* caps);
// gboolean gst_pad_peer_query_accept_caps (::GstPad* pad, ::GstCaps* caps);
bool base::PadBase::peer_query_accept_caps (Gst::Caps caps) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_peer_query_accept_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstCaps*) (caps_to_c));
  return _temp_ret;
}

// GstCaps* gst_pad_peer_query_caps (GstPad* pad, GstCaps* filter);
// ::GstCaps* gst_pad_peer_query_caps (::GstPad* pad, ::GstCaps* filter);
Gst::Caps base::PadBase::peer_query_caps (Gst::Caps filter) noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstPad* pad, ::GstCaps* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_peer_query_caps;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstCaps*) (filter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Caps base::PadBase::peer_query_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstPad* pad, ::GstCaps* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_peer_query_caps;
  auto filter_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstCaps*) (filter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_pad_peer_query_convert (GstPad* pad, GstFormat src_format, gint64 src_val, GstFormat dest_format, gint64* dest_val);
// gboolean gst_pad_peer_query_convert (::GstPad* pad, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
bool base::PadBase::peer_query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format, gint64 & dest_val) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_peer_query_convert;
  gint64 dest_val_o {};
  auto dest_format_to_c = gi::unwrap (dest_format);
  auto src_val_to_c = src_val;
  auto src_format_to_c = gi::unwrap (src_format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (src_format_to_c), (gint64) (src_val_to_c), (::GstFormat) (dest_format_to_c), (gint64*) (&dest_val_o));
  dest_val = dest_val_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::PadBase::peer_query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_peer_query_convert;
  gint64 dest_val_o {};
  auto dest_format_to_c = gi::unwrap (dest_format);
  auto src_val_to_c = src_val;
  auto src_format_to_c = gi::unwrap (src_format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (src_format_to_c), (gint64) (src_val_to_c), (::GstFormat) (dest_format_to_c), (gint64*) (&dest_val_o));
  return std::make_tuple (_temp_ret, dest_val_o);
}

// gboolean gst_pad_peer_query_duration (GstPad* pad, GstFormat format, gint64* duration);
// gboolean gst_pad_peer_query_duration (::GstPad* pad, ::GstFormat format, gint64* duration);
bool base::PadBase::peer_query_duration (Gst::Format format, gint64 * duration) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat format, gint64* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_peer_query_duration;
  gint64 duration_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (duration ? &duration_o : nullptr));
  if (duration) *duration = duration_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::PadBase::peer_query_duration (Gst::Format format) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat format, gint64* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_peer_query_duration;
  gint64 duration_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (&duration_o));
  return std::make_tuple (_temp_ret, duration_o);
}

// gboolean gst_pad_peer_query_position (GstPad* pad, GstFormat format, gint64* cur);
// gboolean gst_pad_peer_query_position (::GstPad* pad, ::GstFormat format, gint64* cur);
bool base::PadBase::peer_query_position (Gst::Format format, gint64 * cur) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat format, gint64* cur);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_peer_query_position;
  gint64 cur_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (cur ? &cur_o : nullptr));
  if (cur) *cur = cur_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::PadBase::peer_query_position (Gst::Format format) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat format, gint64* cur);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_peer_query_position;
  gint64 cur_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (&cur_o));
  return std::make_tuple (_temp_ret, cur_o);
}

// gboolean gst_pad_proxy_query_accept_caps (GstPad* pad, GstQuery* query);
// gboolean gst_pad_proxy_query_accept_caps (::GstPad* pad, ::GstQuery* query);
bool base::PadBase::proxy_query_accept_caps (Gst::Query query) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_proxy_query_accept_caps;
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstQuery*) (query_to_c));
  return _temp_ret;
}

// gboolean gst_pad_proxy_query_caps (GstPad* pad, GstQuery* query);
// gboolean gst_pad_proxy_query_caps (::GstPad* pad, ::GstQuery* query);
bool base::PadBase::proxy_query_caps (Gst::Query query) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_proxy_query_caps;
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstQuery*) (query_to_c));
  return _temp_ret;
}

// GstFlowReturn gst_pad_pull_range (GstPad* pad, guint64 offset, guint size, GstBuffer** buffer);
// ::GstFlowReturn gst_pad_pull_range (::GstPad* pad, guint64 offset, guint size, ::GstBuffer** buffer);
Gst::FlowReturn base::PadBase::pull_range (guint64 offset, guint size, Gst::Buffer & buffer) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, guint64 offset, guint size, ::GstBuffer** buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_pull_range;
  ::GstBuffer* buffer_o {};
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (guint64) (offset_to_c), (guint) (size_to_c), (::GstBuffer**) (&buffer_o));
  buffer = gi::wrap (buffer_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<Gst::FlowReturn, Gst::Buffer> base::PadBase::pull_range (guint64 offset, guint size) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, guint64 offset, guint size, ::GstBuffer** buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_pull_range;
  ::GstBuffer* buffer_o {};
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (guint64) (offset_to_c), (guint) (size_to_c), (::GstBuffer**) (&buffer_o));
  return std::make_tuple (gi::wrap (_temp_ret), gi::wrap (buffer_o, gi::transfer_full, gi::direction_out));
}

// GstFlowReturn gst_pad_push (GstPad* pad, GstBuffer* buffer);
// ::GstFlowReturn gst_pad_push (::GstPad* pad, ::GstBuffer* buffer);
Gst::FlowReturn base::PadBase::push (Gst::Buffer buffer) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, ::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_push;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstBuffer*) (buffer_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gst_pad_push_event (GstPad* pad, GstEvent* event);
// gboolean gst_pad_push_event (::GstPad* pad, ::GstEvent* event);
bool base::PadBase::push_event (Gst::Event event) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstEvent* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_push_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstEvent*) (event_to_c));
  return _temp_ret;
}

// GstFlowReturn gst_pad_push_list (GstPad* pad, GstBufferList* list);
// ::GstFlowReturn gst_pad_push_list (::GstPad* pad, ::GstBufferList* list);
Gst::FlowReturn base::PadBase::push_list (Gst::BufferList list) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, ::GstBufferList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_push_list;
  auto list_to_c = gi::unwrap (list, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstBufferList*) (list_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gst_pad_query (GstPad* pad, GstQuery* query);
// gboolean gst_pad_query (::GstPad* pad, ::GstQuery* query);
bool base::PadBase::query (Gst::Query query) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query;
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstQuery*) (query_to_c));
  return _temp_ret;
}

// gboolean gst_pad_query_accept_caps (GstPad* pad, GstCaps* caps);
// gboolean gst_pad_query_accept_caps (::GstPad* pad, ::GstCaps* caps);
bool base::PadBase::query_accept_caps (Gst::Caps caps) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query_accept_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstCaps*) (caps_to_c));
  return _temp_ret;
}

// GstCaps* gst_pad_query_caps (GstPad* pad, GstCaps* filter);
// ::GstCaps* gst_pad_query_caps (::GstPad* pad, ::GstCaps* filter);
Gst::Caps base::PadBase::query_caps (Gst::Caps filter) noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstPad* pad, ::GstCaps* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query_caps;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstCaps*) (filter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Caps base::PadBase::query_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstPad* pad, ::GstCaps* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query_caps;
  auto filter_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstCaps*) (filter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_pad_query_convert (GstPad* pad, GstFormat src_format, gint64 src_val, GstFormat dest_format, gint64* dest_val);
// gboolean gst_pad_query_convert (::GstPad* pad, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
bool base::PadBase::query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format, gint64 & dest_val) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query_convert;
  gint64 dest_val_o {};
  auto dest_format_to_c = gi::unwrap (dest_format);
  auto src_val_to_c = src_val;
  auto src_format_to_c = gi::unwrap (src_format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (src_format_to_c), (gint64) (src_val_to_c), (::GstFormat) (dest_format_to_c), (gint64*) (&dest_val_o));
  dest_val = dest_val_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::PadBase::query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query_convert;
  gint64 dest_val_o {};
  auto dest_format_to_c = gi::unwrap (dest_format);
  auto src_val_to_c = src_val;
  auto src_format_to_c = gi::unwrap (src_format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (src_format_to_c), (gint64) (src_val_to_c), (::GstFormat) (dest_format_to_c), (gint64*) (&dest_val_o));
  return std::make_tuple (_temp_ret, dest_val_o);
}

// gboolean gst_pad_query_default (GstPad* pad, GstObject* parent, GstQuery* query);
// gboolean gst_pad_query_default (::GstPad* pad, ::GstObject* parent, ::GstQuery* query);
bool base::PadBase::query_default (Gst::Object parent, Gst::Query query) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query_default;
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstObject*) (parent_to_c), (::GstQuery*) (query_to_c));
  return _temp_ret;
}
bool base::PadBase::query_default (Gst::Query query) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query_default;
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstObject*) (parent_to_c), (::GstQuery*) (query_to_c));
  return _temp_ret;
}

// gboolean gst_pad_query_duration (GstPad* pad, GstFormat format, gint64* duration);
// gboolean gst_pad_query_duration (::GstPad* pad, ::GstFormat format, gint64* duration);
bool base::PadBase::query_duration (Gst::Format format, gint64 * duration) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat format, gint64* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query_duration;
  gint64 duration_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (duration ? &duration_o : nullptr));
  if (duration) *duration = duration_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::PadBase::query_duration (Gst::Format format) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat format, gint64* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query_duration;
  gint64 duration_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (&duration_o));
  return std::make_tuple (_temp_ret, duration_o);
}

// gboolean gst_pad_query_position (GstPad* pad, GstFormat format, gint64* cur);
// gboolean gst_pad_query_position (::GstPad* pad, ::GstFormat format, gint64* cur);
bool base::PadBase::query_position (Gst::Format format, gint64 * cur) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat format, gint64* cur);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query_position;
  gint64 cur_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (cur ? &cur_o : nullptr));
  if (cur) *cur = cur_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::PadBase::query_position (Gst::Format format) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstFormat format, gint64* cur);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_query_position;
  gint64 cur_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (&cur_o));
  return std::make_tuple (_temp_ret, cur_o);
}

// void gst_pad_remove_probe (GstPad* pad, gulong id);
// void gst_pad_remove_probe (::GstPad* pad, gulong id);
void base::PadBase::remove_probe (gulong id) noexcept
{
  typedef void (*call_wrap_t) (::GstPad* pad, gulong id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_remove_probe;
  auto id_to_c = id;
  call_wrap_v ((::GstPad*) (gobj_()), (gulong) (id_to_c));
}

// gboolean gst_pad_send_event (GstPad* pad, GstEvent* event);
// gboolean gst_pad_send_event (::GstPad* pad, ::GstEvent* event);
bool base::PadBase::send_event (Gst::Event event) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, ::GstEvent* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_send_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstEvent*) (event_to_c));
  return _temp_ret;
}

// void gst_pad_set_activate_function_full (GstPad* pad, GstPadActivateFunction activate, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_activate_function_full (::GstPad* pad,  activate, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; activate type  not supported

// void gst_pad_set_activatemode_function_full (GstPad* pad, GstPadActivateModeFunction activatemode, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_activatemode_function_full (::GstPad* pad,  activatemode, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; activatemode type  not supported

// gboolean gst_pad_set_active (GstPad* pad, gboolean active);
// gboolean gst_pad_set_active (::GstPad* pad, gboolean active);
bool base::PadBase::set_active (gboolean active) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, gboolean active);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_set_active;
  auto active_to_c = active;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (gboolean) (active_to_c));
  return _temp_ret;
}

// void gst_pad_set_chain_function_full (GstPad* pad, GstPadChainFunction chain, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_chain_function_full (::GstPad* pad,  chain, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; chain type  not supported

// void gst_pad_set_chain_list_function_full (GstPad* pad, GstPadChainListFunction chainlist, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_chain_list_function_full (::GstPad* pad,  chainlist, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; chainlist type  not supported

// void gst_pad_set_element_private (GstPad* pad, gpointer priv);
// void gst_pad_set_element_private (::GstPad* pad, void* priv);
void base::PadBase::set_element_private (void* priv) noexcept
{
  typedef void (*call_wrap_t) (::GstPad* pad, void* priv);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_set_element_private;
  auto priv_to_c = priv;
  call_wrap_v ((::GstPad*) (gobj_()), (void*) (priv_to_c));
}

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
void base::PadBase::set_offset (gint64 offset) noexcept
{
  typedef void (*call_wrap_t) (::GstPad* pad, gint64 offset);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_set_offset;
  auto offset_to_c = offset;
  call_wrap_v ((::GstPad*) (gobj_()), (gint64) (offset_to_c));
}

// void gst_pad_set_query_function_full (GstPad* pad, GstPadQueryFunction query, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_query_function_full (::GstPad* pad,  query, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; query type  not supported

// void gst_pad_set_unlink_function_full (GstPad* pad, GstPadUnlinkFunction unlink, gpointer user_data, GDestroyNotify notify);
// void gst_pad_set_unlink_function_full (::GstPad* pad,  unlink, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; unlink type  not supported

// gboolean gst_pad_start_task (GstPad* pad, GstTaskFunction func, gpointer user_data, GDestroyNotify notify);
// gboolean gst_pad_start_task (::GstPad* pad, Gst::TaskFunction::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
bool base::PadBase::start_task (Gst::TaskFunction func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad, Gst::TaskFunction::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_start_task;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (Gst::TaskFunction::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
  return _temp_ret;
}

// void gst_pad_sticky_events_foreach (GstPad* pad, GstPadStickyEventsForeachFunction foreach_func, gpointer user_data);
// void gst_pad_sticky_events_foreach (::GstPad* pad,  foreach_func, void* user_data);
// SKIP; foreach_func type  not supported

// gboolean gst_pad_stop_task (GstPad* pad);
// gboolean gst_pad_stop_task (::GstPad* pad);
bool base::PadBase::stop_task () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_stop_task;
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()));
  return _temp_ret;
}

// GstFlowReturn gst_pad_store_sticky_event (GstPad* pad, GstEvent* event);
// ::GstFlowReturn gst_pad_store_sticky_event (::GstPad* pad, ::GstEvent* event);
Gst::FlowReturn base::PadBase::store_sticky_event (Gst::Event event) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, ::GstEvent* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_store_sticky_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstEvent*) (event_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gst_pad_unlink (GstPad* srcpad, GstPad* sinkpad);
// gboolean gst_pad_unlink (::GstPad* srcpad, ::GstPad* sinkpad);
bool base::PadBase::unlink (Gst::Pad sinkpad) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPad* srcpad, ::GstPad* sinkpad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_unlink;
  auto sinkpad_to_c = gi::unwrap (sinkpad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (gobj_()), (::GstPad*) (sinkpad_to_c));
  return _temp_ret;
}

// void gst_pad_use_fixed_caps (GstPad* pad);
// void gst_pad_use_fixed_caps (::GstPad* pad);
void base::PadBase::use_fixed_caps () noexcept
{
  typedef void (*call_wrap_t) (::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pad_use_fixed_caps;
  call_wrap_v ((::GstPad*) (gobj_()));
}

static ::GstPadTemplate* _field_padtemplate_get (const ::GstPad* obj) { return (::GstPadTemplate*) obj->padtemplate; }
// ::GstPadTemplate* Pad::padtemplate (const ::GstPad* obj);
// ::GstPadTemplate* Pad::padtemplate (const ::GstPad* obj);
Gst::PadTemplate base::PadBase::padtemplate_ () const noexcept
{
  typedef ::GstPadTemplate* (*call_wrap_t) (const ::GstPad* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_padtemplate_get;
  auto _temp_ret = call_wrap_v ((const ::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstPadDirection _field_direction_get (const ::GstPad* obj) { return (::GstPadDirection) obj->direction; }
// ::GstPadDirection Pad::direction (const ::GstPad* obj);
// ::GstPadDirection Pad::direction (const ::GstPad* obj);
Gst::PadDirection base::PadBase::direction_ () const noexcept
{
  typedef ::GstPadDirection (*call_wrap_t) (const ::GstPad* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_get;
  auto _temp_ret = call_wrap_v ((const ::GstPad*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_direction_set (::GstPad* obj, ::GstPadDirection _value) { obj->direction = (decltype(obj->direction)) _value; }
//  Pad::direction (::GstPad* obj, ::GstPadDirection _value);
// void Pad::direction (::GstPad* obj, ::GstPadDirection _value);
void base::PadBase::direction_ (Gst::PadDirection _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPad* obj, ::GstPadDirection _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstPad*) (gobj_()), (::GstPadDirection) (_value_to_c));
}




} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/pad_extra_def_impl.hpp>)
#include <gst/pad_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/pad_extra_impl.hpp>)
#include <gst/pad_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void PadClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstPadClass *methods = (::GstPadClass *) class_struct;
  (void) methods;

  methods->linked = (decltype (methods->linked)) detail::method_wrapper<self, void (*) (Gst::Pad peer), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::linked_>;
  methods->unlinked = (decltype (methods->unlinked)) detail::method_wrapper<self, void (*) (Gst::Pad peer), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::unlinked_>;
}

// void Pad::linked (GstPad* pad, GstPad* peer);
// void Pad::linked (::GstPad* pad, ::GstPad* peer);
void PadClass::linked_ (Gst::Pad peer) noexcept
{
  if (!get_struct_()->linked) return ;
  typedef void (*call_wrap_t) (::GstPad* pad, ::GstPad* peer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->linked;
  auto peer_to_c = gi::unwrap (peer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstPad*) (gobj_()), (::GstPad*) (peer_to_c));
}

// void Pad::unlinked (GstPad* pad, GstPad* peer);
// void Pad::unlinked (::GstPad* pad, ::GstPad* peer);
void PadClass::unlinked_ (Gst::Pad peer) noexcept
{
  if (!get_struct_()->unlinked) return ;
  typedef void (*call_wrap_t) (::GstPad* pad, ::GstPad* peer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unlinked;
  auto peer_to_c = gi::unwrap (peer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstPad*) (gobj_()), (::GstPad*) (peer_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
