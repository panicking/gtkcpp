// AUTO-GENERATED

#ifndef _GI_GST_ELEMENT_IMPL_HPP_
#define _GI_GST_ELEMENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstElement* gst_element_make_from_uri (const GstURIType type, const gchar* uri, const gchar* elementname, GError ** error);
// ::GstElement* gst_element_make_from_uri (const ::GstURIType type, const char* uri, const char* elementname, GError ** error);
Gst::Element base::ElementBase::make_from_uri (Gst::URIType type, const std::string & uri, const std::string & elementname)
{
  typedef ::GstElement* (*call_wrap_t) (const ::GstURIType type, const char* uri, const char* elementname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_make_from_uri;
  auto elementname_to_c = gi::unwrap (elementname, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GstURIType) (type_to_c), (const char*) (uri_to_c), (const char*) (elementname_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element base::ElementBase::make_from_uri (Gst::URIType type, const std::string & uri)
{
  typedef ::GstElement* (*call_wrap_t) (const ::GstURIType type, const char* uri, const char* elementname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_make_from_uri;
  auto elementname_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GstURIType) (type_to_c), (const char*) (uri_to_c), (const char*) (elementname_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element base::ElementBase::make_from_uri (Gst::URIType type, const std::string & uri, const std::string & elementname, GLib::Error * _error) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const ::GstURIType type, const char* uri, const char* elementname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_make_from_uri;
  auto elementname_to_c = gi::unwrap (elementname, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GstURIType) (type_to_c), (const char*) (uri_to_c), (const char*) (elementname_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element base::ElementBase::make_from_uri (Gst::URIType type, const std::string & uri, GLib::Error * _error) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const ::GstURIType type, const char* uri, const char* elementname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_make_from_uri;
  auto elementname_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GstURIType) (type_to_c), (const char*) (uri_to_c), (const char*) (elementname_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_element_register (GstPlugin* plugin, const gchar* name, guint rank, GType type);
// gboolean gst_element_register (::GstPlugin* plugin, const char* name, guint rank, GType type);
bool base::ElementBase::register_ (Gst::Plugin plugin, const std::string & name, guint rank, GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPlugin* plugin, const char* name, guint rank, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_register;
  auto type_to_c = type;
  auto rank_to_c = rank;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto plugin_to_c = gi::unwrap (plugin, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (plugin_to_c), (const char*) (name_to_c), (guint) (rank_to_c), (GType) (type_to_c));
  return _temp_ret;
}
bool base::ElementBase::register_ (const std::string & name, guint rank, GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPlugin* plugin, const char* name, guint rank, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_register;
  auto type_to_c = type;
  auto rank_to_c = rank;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto plugin_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (plugin_to_c), (const char*) (name_to_c), (guint) (rank_to_c), (GType) (type_to_c));
  return _temp_ret;
}

// const gchar* gst_element_state_change_return_get_name (GstStateChangeReturn state_ret);
// const char* gst_element_state_change_return_get_name (::GstStateChangeReturn state_ret);
std::string base::ElementBase::state_change_return_get_name (Gst::StateChangeReturn state_ret) noexcept
{
  typedef const char* (*call_wrap_t) (::GstStateChangeReturn state_ret);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_state_change_return_get_name;
  auto state_ret_to_c = gi::unwrap (state_ret);
  auto _temp_ret = call_wrap_v ((::GstStateChangeReturn) (state_ret_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_element_state_get_name (GstState state);
// const char* gst_element_state_get_name (::GstState state);
std::string base::ElementBase::state_get_name (Gst::State state) noexcept
{
  typedef const char* (*call_wrap_t) (::GstState state);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_state_get_name;
  auto state_to_c = gi::unwrap (state);
  auto _temp_ret = call_wrap_v ((::GstState) (state_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_element_type_set_skip_documentation (GType type);
// void gst_element_type_set_skip_documentation (GType type);
void base::ElementBase::type_set_skip_documentation (GType type) noexcept
{
  typedef void (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_type_set_skip_documentation;
  auto type_to_c = type;
  call_wrap_v ((GType) (type_to_c));
}

// void gst_element_abort_state (GstElement* element);
// void gst_element_abort_state (::GstElement* element);
void base::ElementBase::abort_state () noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_abort_state;
  call_wrap_v ((::GstElement*) (gobj_()));
}

// gboolean gst_element_add_pad (GstElement* element, GstPad* pad);
// gboolean gst_element_add_pad (::GstElement* element, ::GstPad* pad);
bool base::ElementBase::add_pad (Gst::Pad pad) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_add_pad;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstPad*) (pad_to_c));
  return _temp_ret;
}

// gulong gst_element_add_property_deep_notify_watch (GstElement* element, const gchar* property_name, gboolean include_value);
// gulong gst_element_add_property_deep_notify_watch (::GstElement* element, const char* property_name, gboolean include_value);
gulong base::ElementBase::add_property_deep_notify_watch (const std::string & property_name, gboolean include_value) noexcept
{
  typedef gulong (*call_wrap_t) (::GstElement* element, const char* property_name, gboolean include_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_add_property_deep_notify_watch;
  auto include_value_to_c = include_value;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (property_name_to_c), (gboolean) (include_value_to_c));
  return _temp_ret;
}
gulong base::ElementBase::add_property_deep_notify_watch (gboolean include_value) noexcept
{
  typedef gulong (*call_wrap_t) (::GstElement* element, const char* property_name, gboolean include_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_add_property_deep_notify_watch;
  auto include_value_to_c = include_value;
  auto property_name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (property_name_to_c), (gboolean) (include_value_to_c));
  return _temp_ret;
}

// gulong gst_element_add_property_notify_watch (GstElement* element, const gchar* property_name, gboolean include_value);
// gulong gst_element_add_property_notify_watch (::GstElement* element, const char* property_name, gboolean include_value);
gulong base::ElementBase::add_property_notify_watch (const std::string & property_name, gboolean include_value) noexcept
{
  typedef gulong (*call_wrap_t) (::GstElement* element, const char* property_name, gboolean include_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_add_property_notify_watch;
  auto include_value_to_c = include_value;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (property_name_to_c), (gboolean) (include_value_to_c));
  return _temp_ret;
}
gulong base::ElementBase::add_property_notify_watch (gboolean include_value) noexcept
{
  typedef gulong (*call_wrap_t) (::GstElement* element, const char* property_name, gboolean include_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_add_property_notify_watch;
  auto include_value_to_c = include_value;
  auto property_name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (property_name_to_c), (gboolean) (include_value_to_c));
  return _temp_ret;
}

// void gst_element_call_async (GstElement* element, GstElementCallAsyncFunc func, gpointer user_data, GDestroyNotify destroy_notify);
// void gst_element_call_async (::GstElement* element, Gst::ElementCallAsyncFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
void base::ElementBase::call_async (Gst::ElementCallAsyncFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, Gst::ElementCallAsyncFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_call_async;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GstElement*) (gobj_()), (Gst::ElementCallAsyncFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// GstStateChangeReturn gst_element_change_state (GstElement* element, GstStateChange transition);
// ::GstStateChangeReturn gst_element_change_state (::GstElement* element, ::GstStateChange transition);
Gst::StateChangeReturn base::ElementBase::change_state (Gst::StateChange transition) noexcept
{
  typedef ::GstStateChangeReturn (*call_wrap_t) (::GstElement* element, ::GstStateChange transition);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_change_state;
  auto transition_to_c = gi::unwrap (transition);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstStateChange) (transition_to_c));
  return gi::wrap (_temp_ret);
}

// GstStateChangeReturn gst_element_continue_state (GstElement* element, GstStateChangeReturn ret);
// ::GstStateChangeReturn gst_element_continue_state (::GstElement* element, ::GstStateChangeReturn ret);
Gst::StateChangeReturn base::ElementBase::continue_state (Gst::StateChangeReturn ret) noexcept
{
  typedef ::GstStateChangeReturn (*call_wrap_t) (::GstElement* element, ::GstStateChangeReturn ret);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_continue_state;
  auto ret_to_c = gi::unwrap (ret);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstStateChangeReturn) (ret_to_c));
  return gi::wrap (_temp_ret);
}

// void gst_element_create_all_pads (GstElement* element);
// void gst_element_create_all_pads (::GstElement* element);
void base::ElementBase::create_all_pads () noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_create_all_pads;
  call_wrap_v ((::GstElement*) (gobj_()));
}

// gboolean gst_element_foreach_pad (GstElement* element, GstElementForeachPadFunc func, gpointer user_data);
// gboolean gst_element_foreach_pad (::GstElement* element, Gst::ElementForeachPadFunc::cfunction_type func, void* user_data);
bool base::ElementBase::foreach_pad (Gst::ElementForeachPadFunc func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, Gst::ElementForeachPadFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_foreach_pad;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (Gst::ElementForeachPadFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return _temp_ret;
}

// gboolean gst_element_foreach_sink_pad (GstElement* element, GstElementForeachPadFunc func, gpointer user_data);
// gboolean gst_element_foreach_sink_pad (::GstElement* element, Gst::ElementForeachPadFunc::cfunction_type func, void* user_data);
bool base::ElementBase::foreach_sink_pad (Gst::ElementForeachPadFunc func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, Gst::ElementForeachPadFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_foreach_sink_pad;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (Gst::ElementForeachPadFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return _temp_ret;
}

// gboolean gst_element_foreach_src_pad (GstElement* element, GstElementForeachPadFunc func, gpointer user_data);
// gboolean gst_element_foreach_src_pad (::GstElement* element, Gst::ElementForeachPadFunc::cfunction_type func, void* user_data);
bool base::ElementBase::foreach_src_pad (Gst::ElementForeachPadFunc func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, Gst::ElementForeachPadFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_foreach_src_pad;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (Gst::ElementForeachPadFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return _temp_ret;
}

// GstClockTime gst_element_get_base_time (GstElement* element);
// ::GstClockTime gst_element_get_base_time (::GstElement* element);
Gst::ClockTime base::ElementBase::get_base_time () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_base_time;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return _temp_ret;
}

// GstBus* gst_element_get_bus (GstElement* element);
// ::GstBus* gst_element_get_bus (::GstElement* element);
Gst::Bus base::ElementBase::get_bus () noexcept
{
  typedef ::GstBus* (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_bus;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstClock* gst_element_get_clock (GstElement* element);
// ::GstClock* gst_element_get_clock (::GstElement* element);
Gst::Clock base::ElementBase::get_clock () noexcept
{
  typedef ::GstClock* (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_clock;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstPad* gst_element_get_compatible_pad (GstElement* element, GstPad* pad, GstCaps* caps);
// ::GstPad* gst_element_get_compatible_pad (::GstElement* element, ::GstPad* pad, ::GstCaps* caps);
Gst::Pad base::ElementBase::get_compatible_pad (Gst::Pad pad, Gst::Caps caps) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstElement* element, ::GstPad* pad, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_compatible_pad;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstPad*) (pad_to_c), (::GstCaps*) (caps_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Pad base::ElementBase::get_compatible_pad (Gst::Pad pad) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstElement* element, ::GstPad* pad, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_compatible_pad;
  auto caps_to_c = nullptr;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstPad*) (pad_to_c), (::GstCaps*) (caps_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstPadTemplate* gst_element_get_compatible_pad_template (GstElement* element, GstPadTemplate* compattempl);
// ::GstPadTemplate* gst_element_get_compatible_pad_template (::GstElement* element, ::GstPadTemplate* compattempl);
Gst::PadTemplate base::ElementBase::get_compatible_pad_template (Gst::PadTemplate compattempl) noexcept
{
  typedef ::GstPadTemplate* (*call_wrap_t) (::GstElement* element, ::GstPadTemplate* compattempl);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_compatible_pad_template;
  auto compattempl_to_c = gi::unwrap (compattempl, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstPadTemplate*) (compattempl_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstContext* gst_element_get_context (GstElement* element, const gchar* context_type);
// ::GstContext* gst_element_get_context (::GstElement* element, const char* context_type);
Gst::Context base::ElementBase::get_context (const std::string & context_type) noexcept
{
  typedef ::GstContext* (*call_wrap_t) (::GstElement* element, const char* context_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_context;
  auto context_type_to_c = gi::unwrap (context_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (context_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstContext* gst_element_get_context_unlocked (GstElement* element, const gchar* context_type);
// ::GstContext* gst_element_get_context_unlocked (::GstElement* element, const char* context_type);
Gst::Context base::ElementBase::get_context_unlocked (const std::string & context_type) noexcept
{
  typedef ::GstContext* (*call_wrap_t) (::GstElement* element, const char* context_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_context_unlocked;
  auto context_type_to_c = gi::unwrap (context_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (context_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* gst_element_get_contexts (GstElement* element);
// ::GList* gst_element_get_contexts (::GstElement* element);
std::vector<Gst::Context> base::ElementBase::get_contexts () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_contexts;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return gi::detail::wrap_list<Gst::Context> (_temp_ret, gi::transfer_full);
}

// GstClockTime gst_element_get_current_clock_time (GstElement* element);
// ::GstClockTime gst_element_get_current_clock_time (::GstElement* element);
Gst::ClockTime base::ElementBase::get_current_clock_time () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_current_clock_time;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return _temp_ret;
}

// GstClockTime gst_element_get_current_running_time (GstElement* element);
// ::GstClockTime gst_element_get_current_running_time (::GstElement* element);
Gst::ClockTime base::ElementBase::get_current_running_time () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_current_running_time;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return _temp_ret;
}

// GstElementFactory* gst_element_get_factory (GstElement* element);
// ::GstElementFactory* gst_element_get_factory (::GstElement* element);
Gst::ElementFactory base::ElementBase::get_factory () noexcept
{
  typedef ::GstElementFactory* (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_factory;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_element_get_metadata (GstElement* element, const gchar* key);
// const char* gst_element_get_metadata (::GstElement* element, const char* key);
std::string base::ElementBase::get_metadata (const std::string & key) noexcept
{
  typedef const char* (*call_wrap_t) (::GstElement* element, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_metadata;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstPadTemplate* gst_element_get_pad_template (GstElement* element, const gchar* name);
// ::GstPadTemplate* gst_element_get_pad_template (::GstElement* element, const char* name);
Gst::PadTemplate base::ElementBase::get_pad_template (const std::string & name) noexcept
{
  typedef ::GstPadTemplate* (*call_wrap_t) (::GstElement* element, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_pad_template;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gst_element_get_pad_template_list (GstElement* element);
// ::GList* gst_element_get_pad_template_list (::GstElement* element);
std::vector<Gst::PadTemplate> base::ElementBase::get_pad_template_list () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_pad_template_list;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return gi::detail::wrap_list<Gst::PadTemplate> (_temp_ret, gi::transfer_none);
}

// GstPad* gst_element_get_request_pad (GstElement* element, const gchar* name);
// ::GstPad* gst_element_get_request_pad (::GstElement* element, const char* name);
// IGNORE; deprecated

// GstClockTime gst_element_get_start_time (GstElement* element);
// ::GstClockTime gst_element_get_start_time (::GstElement* element);
Gst::ClockTime base::ElementBase::get_start_time () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_start_time;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return _temp_ret;
}

// GstStateChangeReturn gst_element_get_state (GstElement* element, GstState* state, GstState* pending, GstClockTime timeout);
// ::GstStateChangeReturn gst_element_get_state (::GstElement* element, ::GstState* state, ::GstState* pending, ::GstClockTime timeout);
Gst::StateChangeReturn base::ElementBase::get_state (Gst::State * state, Gst::State * pending, ::GstClockTime timeout) noexcept
{
  typedef ::GstStateChangeReturn (*call_wrap_t) (::GstElement* element, ::GstState* state, ::GstState* pending, ::GstClockTime timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_state;
  auto timeout_to_c = timeout;
  ::GstState pending_o {};
  ::GstState state_o {};
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstState*) (state ? &state_o : nullptr), (::GstState*) (pending ? &pending_o : nullptr), (::GstClockTime) (timeout_to_c));
  if (pending) *pending = gi::wrap (pending_o);
  if (state) *state = gi::wrap (state_o);
  return gi::wrap (_temp_ret);
}
std::tuple<Gst::StateChangeReturn, Gst::State, Gst::State> base::ElementBase::get_state (::GstClockTime timeout) noexcept
{
  typedef ::GstStateChangeReturn (*call_wrap_t) (::GstElement* element, ::GstState* state, ::GstState* pending, ::GstClockTime timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_state;
  auto timeout_to_c = timeout;
  ::GstState pending_o {};
  ::GstState state_o {};
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstState*) (&state_o), (::GstState*) (&pending_o), (::GstClockTime) (timeout_to_c));
  return std::make_tuple (gi::wrap (_temp_ret), gi::wrap (state_o), gi::wrap (pending_o));
}

// GstPad* gst_element_get_static_pad (GstElement* element, const gchar* name);
// ::GstPad* gst_element_get_static_pad (::GstElement* element, const char* name);
Gst::Pad base::ElementBase::get_static_pad (const std::string & name) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstElement* element, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_get_static_pad;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_element_is_locked_state (GstElement* element);
// gboolean gst_element_is_locked_state (::GstElement* element);
bool base::ElementBase::is_locked_state () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_is_locked_state;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return _temp_ret;
}

// GstIterator* gst_element_iterate_pads (GstElement* element);
// ::GstIterator* gst_element_iterate_pads (::GstElement* element);
Gst::Iterator base::ElementBase::iterate_pads () noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_iterate_pads;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstIterator* gst_element_iterate_sink_pads (GstElement* element);
// ::GstIterator* gst_element_iterate_sink_pads (::GstElement* element);
Gst::Iterator base::ElementBase::iterate_sink_pads () noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_iterate_sink_pads;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstIterator* gst_element_iterate_src_pads (GstElement* element);
// ::GstIterator* gst_element_iterate_src_pads (::GstElement* element);
Gst::Iterator base::ElementBase::iterate_src_pads () noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_iterate_src_pads;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_element_link (GstElement* src, GstElement* dest);
// gboolean gst_element_link (::GstElement* src, ::GstElement* dest);
bool base::ElementBase::link (Gst::Element dest) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* src, ::GstElement* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_link;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstElement*) (dest_to_c));
  return _temp_ret;
}

// gboolean gst_element_link_filtered (GstElement* src, GstElement* dest, GstCaps* filter);
// gboolean gst_element_link_filtered (::GstElement* src, ::GstElement* dest, ::GstCaps* filter);
bool base::ElementBase::link_filtered (Gst::Element dest, Gst::Caps filter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* src, ::GstElement* dest, ::GstCaps* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_link_filtered;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstElement*) (dest_to_c), (::GstCaps*) (filter_to_c));
  return _temp_ret;
}
bool base::ElementBase::link_filtered (Gst::Element dest) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* src, ::GstElement* dest, ::GstCaps* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_link_filtered;
  auto filter_to_c = nullptr;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstElement*) (dest_to_c), (::GstCaps*) (filter_to_c));
  return _temp_ret;
}

// gboolean gst_element_link_many (GstElement* element_1, GstElement* element_2);
// gboolean gst_element_link_many (::GstElement* element_1, ::GstElement* element_2);
// IGNORE; not introspectable, varargs not supported

// gboolean gst_element_link_pads (GstElement* src, const gchar* srcpadname, GstElement* dest, const gchar* destpadname);
// gboolean gst_element_link_pads (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname);
bool base::ElementBase::link_pads (const std::string & srcpadname, Gst::Element dest, const std::string & destpadname) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_link_pads;
  auto destpadname_to_c = gi::unwrap (destpadname, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto srcpadname_to_c = gi::unwrap (srcpadname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (srcpadname_to_c), (::GstElement*) (dest_to_c), (const char*) (destpadname_to_c));
  return _temp_ret;
}
bool base::ElementBase::link_pads (Gst::Element dest) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_link_pads;
  auto destpadname_to_c = nullptr;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto srcpadname_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (srcpadname_to_c), (::GstElement*) (dest_to_c), (const char*) (destpadname_to_c));
  return _temp_ret;
}

// gboolean gst_element_link_pads_filtered (GstElement* src, const gchar* srcpadname, GstElement* dest, const gchar* destpadname, GstCaps* filter);
// gboolean gst_element_link_pads_filtered (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname, ::GstCaps* filter);
bool base::ElementBase::link_pads_filtered (const std::string & srcpadname, Gst::Element dest, const std::string & destpadname, Gst::Caps filter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname, ::GstCaps* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_link_pads_filtered;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  auto destpadname_to_c = gi::unwrap (destpadname, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto srcpadname_to_c = gi::unwrap (srcpadname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (srcpadname_to_c), (::GstElement*) (dest_to_c), (const char*) (destpadname_to_c), (::GstCaps*) (filter_to_c));
  return _temp_ret;
}
bool base::ElementBase::link_pads_filtered (Gst::Element dest) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname, ::GstCaps* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_link_pads_filtered;
  auto filter_to_c = nullptr;
  auto destpadname_to_c = nullptr;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto srcpadname_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (srcpadname_to_c), (::GstElement*) (dest_to_c), (const char*) (destpadname_to_c), (::GstCaps*) (filter_to_c));
  return _temp_ret;
}

// gboolean gst_element_link_pads_full (GstElement* src, const gchar* srcpadname, GstElement* dest, const gchar* destpadname, GstPadLinkCheck flags);
// gboolean gst_element_link_pads_full (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname, ::GstPadLinkCheck flags);
bool base::ElementBase::link_pads_full (const std::string & srcpadname, Gst::Element dest, const std::string & destpadname, Gst::PadLinkCheck flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname, ::GstPadLinkCheck flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_link_pads_full;
  auto flags_to_c = gi::unwrap (flags);
  auto destpadname_to_c = gi::unwrap (destpadname, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto srcpadname_to_c = gi::unwrap (srcpadname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (srcpadname_to_c), (::GstElement*) (dest_to_c), (const char*) (destpadname_to_c), (::GstPadLinkCheck) (flags_to_c));
  return _temp_ret;
}
bool base::ElementBase::link_pads_full (Gst::Element dest, Gst::PadLinkCheck flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname, ::GstPadLinkCheck flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_link_pads_full;
  auto flags_to_c = gi::unwrap (flags);
  auto destpadname_to_c = nullptr;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto srcpadname_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (srcpadname_to_c), (::GstElement*) (dest_to_c), (const char*) (destpadname_to_c), (::GstPadLinkCheck) (flags_to_c));
  return _temp_ret;
}

// void gst_element_lost_state (GstElement* element);
// void gst_element_lost_state (::GstElement* element);
void base::ElementBase::lost_state () noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_lost_state;
  call_wrap_v ((::GstElement*) (gobj_()));
}

// void gst_element_message_full (GstElement* element, GstMessageType type, GQuark domain, gint code, gchar* text, gchar* debug, const gchar* file, const gchar* function, gint line);
// void gst_element_message_full (::GstElement* element, ::GstMessageType type, ::GQuark domain, gint code, char* text, char* debug, const char* file, const char* function, gint line);
void base::ElementBase::message_full (Gst::MessageType type, ::GQuark domain, gint code, const std::string & text, const std::string & debug, const std::string & file, const std::string & function, gint line) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, ::GstMessageType type, ::GQuark domain, gint code, char* text, char* debug, const char* file, const char* function, gint line);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_message_full;
  auto line_to_c = line;
  auto function_to_c = gi::unwrap (function, gi::transfer_none, gi::direction_in);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto debug_to_c = gi::unwrap (debug, gi::transfer_full, gi::direction_in);
  auto text_to_c = gi::unwrap (text, gi::transfer_full, gi::direction_in);
  auto code_to_c = code;
  auto domain_to_c = domain;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstMessageType) (type_to_c), (::GQuark) (domain_to_c), (gint) (code_to_c), (char*) (text_to_c), (char*) (debug_to_c), (const char*) (file_to_c), (const char*) (function_to_c), (gint) (line_to_c));
}
void base::ElementBase::message_full (Gst::MessageType type, ::GQuark domain, gint code, const std::string & file, const std::string & function, gint line) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, ::GstMessageType type, ::GQuark domain, gint code, char* text, char* debug, const char* file, const char* function, gint line);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_message_full;
  auto line_to_c = line;
  auto function_to_c = gi::unwrap (function, gi::transfer_none, gi::direction_in);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto debug_to_c = nullptr;
  auto text_to_c = nullptr;
  auto code_to_c = code;
  auto domain_to_c = domain;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstMessageType) (type_to_c), (::GQuark) (domain_to_c), (gint) (code_to_c), (char*) (text_to_c), (char*) (debug_to_c), (const char*) (file_to_c), (const char*) (function_to_c), (gint) (line_to_c));
}

// void gst_element_message_full_with_details (GstElement* element, GstMessageType type, GQuark domain, gint code, gchar* text, gchar* debug, const gchar* file, const gchar* function, gint line, GstStructure* structure);
// void gst_element_message_full_with_details (::GstElement* element, ::GstMessageType type, ::GQuark domain, gint code, char* text, char* debug, const char* file, const char* function, gint line, ::GstStructure* structure);
void base::ElementBase::message_full_with_details (Gst::MessageType type, ::GQuark domain, gint code, const std::string & text, const std::string & debug, const std::string & file, const std::string & function, gint line, Gst::Structure structure) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, ::GstMessageType type, ::GQuark domain, gint code, char* text, char* debug, const char* file, const char* function, gint line, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_message_full_with_details;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto line_to_c = line;
  auto function_to_c = gi::unwrap (function, gi::transfer_none, gi::direction_in);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto debug_to_c = gi::unwrap (debug, gi::transfer_full, gi::direction_in);
  auto text_to_c = gi::unwrap (text, gi::transfer_full, gi::direction_in);
  auto code_to_c = code;
  auto domain_to_c = domain;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstMessageType) (type_to_c), (::GQuark) (domain_to_c), (gint) (code_to_c), (char*) (text_to_c), (char*) (debug_to_c), (const char*) (file_to_c), (const char*) (function_to_c), (gint) (line_to_c), (::GstStructure*) (structure_to_c));
}
void base::ElementBase::message_full_with_details (Gst::MessageType type, ::GQuark domain, gint code, const std::string & file, const std::string & function, gint line, Gst::Structure structure) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, ::GstMessageType type, ::GQuark domain, gint code, char* text, char* debug, const char* file, const char* function, gint line, ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_message_full_with_details;
  auto structure_to_c = gi::unwrap (structure, gi::transfer_full, gi::direction_in);
  auto line_to_c = line;
  auto function_to_c = gi::unwrap (function, gi::transfer_none, gi::direction_in);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto debug_to_c = nullptr;
  auto text_to_c = nullptr;
  auto code_to_c = code;
  auto domain_to_c = domain;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstMessageType) (type_to_c), (::GQuark) (domain_to_c), (gint) (code_to_c), (char*) (text_to_c), (char*) (debug_to_c), (const char*) (file_to_c), (const char*) (function_to_c), (gint) (line_to_c), (::GstStructure*) (structure_to_c));
}

// void gst_element_no_more_pads (GstElement* element);
// void gst_element_no_more_pads (::GstElement* element);
void base::ElementBase::no_more_pads () noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_no_more_pads;
  call_wrap_v ((::GstElement*) (gobj_()));
}

// gboolean gst_element_post_message (GstElement* element, GstMessage* message);
// gboolean gst_element_post_message (::GstElement* element, ::GstMessage* message);
bool base::ElementBase::post_message (Gst::Message message) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_post_message;
  auto message_to_c = gi::unwrap (message, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstMessage*) (message_to_c));
  return _temp_ret;
}

// GstClock* gst_element_provide_clock (GstElement* element);
// ::GstClock* gst_element_provide_clock (::GstElement* element);
Gst::Clock base::ElementBase::provide_clock () noexcept
{
  typedef ::GstClock* (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_provide_clock;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_element_query (GstElement* element, GstQuery* query);
// gboolean gst_element_query (::GstElement* element, ::GstQuery* query);
bool base::ElementBase::query (Gst::Query query) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_query;
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstQuery*) (query_to_c));
  return _temp_ret;
}

// gboolean gst_element_query_convert (GstElement* element, GstFormat src_format, gint64 src_val, GstFormat dest_format, gint64* dest_val);
// gboolean gst_element_query_convert (::GstElement* element, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
bool base::ElementBase::query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format, gint64 & dest_val) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_query_convert;
  gint64 dest_val_o {};
  auto dest_format_to_c = gi::unwrap (dest_format);
  auto src_val_to_c = src_val;
  auto src_format_to_c = gi::unwrap (src_format);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstFormat) (src_format_to_c), (gint64) (src_val_to_c), (::GstFormat) (dest_format_to_c), (gint64*) (&dest_val_o));
  dest_val = dest_val_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::ElementBase::query_convert (Gst::Format src_format, gint64 src_val, Gst::Format dest_format) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstFormat src_format, gint64 src_val, ::GstFormat dest_format, gint64* dest_val);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_query_convert;
  gint64 dest_val_o {};
  auto dest_format_to_c = gi::unwrap (dest_format);
  auto src_val_to_c = src_val;
  auto src_format_to_c = gi::unwrap (src_format);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstFormat) (src_format_to_c), (gint64) (src_val_to_c), (::GstFormat) (dest_format_to_c), (gint64*) (&dest_val_o));
  return std::make_tuple (_temp_ret, dest_val_o);
}

// gboolean gst_element_query_duration (GstElement* element, GstFormat format, gint64* duration);
// gboolean gst_element_query_duration (::GstElement* element, ::GstFormat format, gint64* duration);
bool base::ElementBase::query_duration (Gst::Format format, gint64 * duration) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstFormat format, gint64* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_query_duration;
  gint64 duration_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (duration ? &duration_o : nullptr));
  if (duration) *duration = duration_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::ElementBase::query_duration (Gst::Format format) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstFormat format, gint64* duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_query_duration;
  gint64 duration_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (&duration_o));
  return std::make_tuple (_temp_ret, duration_o);
}

// gboolean gst_element_query_position (GstElement* element, GstFormat format, gint64* cur);
// gboolean gst_element_query_position (::GstElement* element, ::GstFormat format, gint64* cur);
bool base::ElementBase::query_position (Gst::Format format, gint64 * cur) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstFormat format, gint64* cur);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_query_position;
  gint64 cur_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (cur ? &cur_o : nullptr));
  if (cur) *cur = cur_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::ElementBase::query_position (Gst::Format format) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstFormat format, gint64* cur);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_query_position;
  gint64 cur_o {};
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstFormat) (format_to_c), (gint64*) (&cur_o));
  return std::make_tuple (_temp_ret, cur_o);
}

// void gst_element_release_request_pad (GstElement* element, GstPad* pad);
// void gst_element_release_request_pad (::GstElement* element, ::GstPad* pad);
void base::ElementBase::release_request_pad (Gst::Pad pad) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, ::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_release_request_pad;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstPad*) (pad_to_c));
}

// gboolean gst_element_remove_pad (GstElement* element, GstPad* pad);
// gboolean gst_element_remove_pad (::GstElement* element, ::GstPad* pad);
bool base::ElementBase::remove_pad (Gst::Pad pad) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_remove_pad;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstPad*) (pad_to_c));
  return _temp_ret;
}

// void gst_element_remove_property_notify_watch (GstElement* element, gulong watch_id);
// void gst_element_remove_property_notify_watch (::GstElement* element, gulong watch_id);
void base::ElementBase::remove_property_notify_watch (gulong watch_id) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, gulong watch_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_remove_property_notify_watch;
  auto watch_id_to_c = watch_id;
  call_wrap_v ((::GstElement*) (gobj_()), (gulong) (watch_id_to_c));
}

// GstPad* gst_element_request_pad (GstElement* element, GstPadTemplate* templ, const gchar* name, const GstCaps* caps);
// ::GstPad* gst_element_request_pad (::GstElement* element, ::GstPadTemplate* templ, const char* name, const ::GstCaps* caps);
Gst::Pad base::ElementBase::request_pad (Gst::PadTemplate templ, const std::string & name, const Gst::Caps & caps) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstElement* element, ::GstPadTemplate* templ, const char* name, const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_request_pad;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto templ_to_c = gi::unwrap (templ, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstPadTemplate*) (templ_to_c), (const char*) (name_to_c), (const ::GstCaps*) (caps_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Pad base::ElementBase::request_pad (Gst::PadTemplate templ) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstElement* element, ::GstPadTemplate* templ, const char* name, const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_request_pad;
  auto caps_to_c = nullptr;
  auto name_to_c = nullptr;
  auto templ_to_c = gi::unwrap (templ, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstPadTemplate*) (templ_to_c), (const char*) (name_to_c), (const ::GstCaps*) (caps_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstPad* gst_element_request_pad_simple (GstElement* element, const gchar* name);
// ::GstPad* gst_element_request_pad_simple (::GstElement* element, const char* name);
Gst::Pad base::ElementBase::request_pad_simple (const std::string & name) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstElement* element, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_request_pad_simple;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_element_seek (GstElement* element, gdouble rate, GstFormat format, GstSeekFlags flags, GstSeekType start_type, gint64 start, GstSeekType stop_type, gint64 stop);
// gboolean gst_element_seek (::GstElement* element, gdouble rate, ::GstFormat format, ::GstSeekFlags flags, ::GstSeekType start_type, gint64 start, ::GstSeekType stop_type, gint64 stop);
bool base::ElementBase::seek (gdouble rate, Gst::Format format, Gst::SeekFlags flags, Gst::SeekType start_type, gint64 start, Gst::SeekType stop_type, gint64 stop) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, gdouble rate, ::GstFormat format, ::GstSeekFlags flags, ::GstSeekType start_type, gint64 start, ::GstSeekType stop_type, gint64 stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_seek;
  auto stop_to_c = stop;
  auto stop_type_to_c = gi::unwrap (stop_type);
  auto start_to_c = start;
  auto start_type_to_c = gi::unwrap (start_type);
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto rate_to_c = rate;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (gdouble) (rate_to_c), (::GstFormat) (format_to_c), (::GstSeekFlags) (flags_to_c), (::GstSeekType) (start_type_to_c), (gint64) (start_to_c), (::GstSeekType) (stop_type_to_c), (gint64) (stop_to_c));
  return _temp_ret;
}

// gboolean gst_element_seek_simple (GstElement* element, GstFormat format, GstSeekFlags seek_flags, gint64 seek_pos);
// gboolean gst_element_seek_simple (::GstElement* element, ::GstFormat format, ::GstSeekFlags seek_flags, gint64 seek_pos);
bool base::ElementBase::seek_simple (Gst::Format format, Gst::SeekFlags seek_flags, gint64 seek_pos) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstFormat format, ::GstSeekFlags seek_flags, gint64 seek_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_seek_simple;
  auto seek_pos_to_c = seek_pos;
  auto seek_flags_to_c = gi::unwrap (seek_flags);
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstFormat) (format_to_c), (::GstSeekFlags) (seek_flags_to_c), (gint64) (seek_pos_to_c));
  return _temp_ret;
}

// gboolean gst_element_send_event (GstElement* element, GstEvent* event);
// gboolean gst_element_send_event (::GstElement* element, ::GstEvent* event);
bool base::ElementBase::send_event (Gst::Event event) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstEvent* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_send_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstEvent*) (event_to_c));
  return _temp_ret;
}

// void gst_element_set_base_time (GstElement* element, GstClockTime time);
// void gst_element_set_base_time (::GstElement* element, ::GstClockTime time);
void base::ElementBase::set_base_time (::GstClockTime time) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, ::GstClockTime time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_set_base_time;
  auto time_to_c = time;
  call_wrap_v ((::GstElement*) (gobj_()), (::GstClockTime) (time_to_c));
}

// void gst_element_set_bus (GstElement* element, GstBus* bus);
// void gst_element_set_bus (::GstElement* element, ::GstBus* bus);
void base::ElementBase::set_bus (Gst::Bus bus) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, ::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_set_bus;
  auto bus_to_c = gi::unwrap (bus, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstBus*) (bus_to_c));
}
void base::ElementBase::set_bus () noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, ::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_set_bus;
  auto bus_to_c = nullptr;
  call_wrap_v ((::GstElement*) (gobj_()), (::GstBus*) (bus_to_c));
}

// gboolean gst_element_set_clock (GstElement* element, GstClock* clock);
// gboolean gst_element_set_clock (::GstElement* element, ::GstClock* clock);
bool base::ElementBase::set_clock (Gst::Clock clock) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_set_clock;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstClock*) (clock_to_c));
  return _temp_ret;
}
bool base::ElementBase::set_clock () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_set_clock;
  auto clock_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstClock*) (clock_to_c));
  return _temp_ret;
}

// void gst_element_set_context (GstElement* element, GstContext* context);
// void gst_element_set_context (::GstElement* element, ::GstContext* context);
void base::ElementBase::set_context (Gst::Context context) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, ::GstContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_set_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstContext*) (context_to_c));
}

// gboolean gst_element_set_locked_state (GstElement* element, gboolean locked_state);
// gboolean gst_element_set_locked_state (::GstElement* element, gboolean locked_state);
bool base::ElementBase::set_locked_state (gboolean locked_state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element, gboolean locked_state);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_set_locked_state;
  auto locked_state_to_c = locked_state;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (gboolean) (locked_state_to_c));
  return _temp_ret;
}

// void gst_element_set_start_time (GstElement* element, GstClockTime time);
// void gst_element_set_start_time (::GstElement* element, ::GstClockTime time);
void base::ElementBase::set_start_time (::GstClockTime time) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* element, ::GstClockTime time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_set_start_time;
  auto time_to_c = time;
  call_wrap_v ((::GstElement*) (gobj_()), (::GstClockTime) (time_to_c));
}

// GstStateChangeReturn gst_element_set_state (GstElement* element, GstState state);
// ::GstStateChangeReturn gst_element_set_state (::GstElement* element, ::GstState state);
Gst::StateChangeReturn base::ElementBase::set_state (Gst::State state) noexcept
{
  typedef ::GstStateChangeReturn (*call_wrap_t) (::GstElement* element, ::GstState state);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_set_state;
  auto state_to_c = gi::unwrap (state);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstState) (state_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gst_element_sync_state_with_parent (GstElement* element);
// gboolean gst_element_sync_state_with_parent (::GstElement* element);
bool base::ElementBase::sync_state_with_parent () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_sync_state_with_parent;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return _temp_ret;
}

// void gst_element_unlink (GstElement* src, GstElement* dest);
// void gst_element_unlink (::GstElement* src, ::GstElement* dest);
void base::ElementBase::unlink (Gst::Element dest) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* src, ::GstElement* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_unlink;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstElement*) (dest_to_c));
}

// void gst_element_unlink_many (GstElement* element_1, GstElement* element_2);
// void gst_element_unlink_many (::GstElement* element_1, ::GstElement* element_2);
// IGNORE; not introspectable, varargs not supported

// void gst_element_unlink_pads (GstElement* src, const gchar* srcpadname, GstElement* dest, const gchar* destpadname);
// void gst_element_unlink_pads (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname);
void base::ElementBase::unlink_pads (const std::string & srcpadname, Gst::Element dest, const std::string & destpadname) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* src, const char* srcpadname, ::GstElement* dest, const char* destpadname);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_unlink_pads;
  auto destpadname_to_c = gi::unwrap (destpadname, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto srcpadname_to_c = gi::unwrap (srcpadname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstElement*) (gobj_()), (const char*) (srcpadname_to_c), (::GstElement*) (dest_to_c), (const char*) (destpadname_to_c));
}

static guint32 _field_state_cookie_get (const ::GstElement* obj) { return (guint32) obj->state_cookie; }
// guint32 Element::state_cookie (const ::GstElement* obj);
// guint32 Element::state_cookie (const ::GstElement* obj);
guint32 base::ElementBase::state_cookie_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_cookie_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return _temp_ret;
}

static void _field_state_cookie_set (::GstElement* obj, guint32 _value) { obj->state_cookie = (decltype(obj->state_cookie)) _value; }
//  Element::state_cookie (::GstElement* obj, guint32 _value);
// void Element::state_cookie (::GstElement* obj, guint32 _value);
void base::ElementBase::state_cookie_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_cookie_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstElement*) (gobj_()), (guint32) (_value_to_c));
}

static ::GstState _field_target_state_get (const ::GstElement* obj) { return (::GstState) obj->target_state; }
// ::GstState Element::target_state (const ::GstElement* obj);
// ::GstState Element::target_state (const ::GstElement* obj);
Gst::State base::ElementBase::target_state_ () const noexcept
{
  typedef ::GstState (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_target_state_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_target_state_set (::GstElement* obj, ::GstState _value) { obj->target_state = (decltype(obj->target_state)) _value; }
//  Element::target_state (::GstElement* obj, ::GstState _value);
// void Element::target_state (::GstElement* obj, ::GstState _value);
void base::ElementBase::target_state_ (Gst::State _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, ::GstState _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_target_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstState) (_value_to_c));
}

static ::GstState _field_current_state_get (const ::GstElement* obj) { return (::GstState) obj->current_state; }
// ::GstState Element::current_state (const ::GstElement* obj);
// ::GstState Element::current_state (const ::GstElement* obj);
Gst::State base::ElementBase::current_state_ () const noexcept
{
  typedef ::GstState (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_current_state_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_current_state_set (::GstElement* obj, ::GstState _value) { obj->current_state = (decltype(obj->current_state)) _value; }
//  Element::current_state (::GstElement* obj, ::GstState _value);
// void Element::current_state (::GstElement* obj, ::GstState _value);
void base::ElementBase::current_state_ (Gst::State _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, ::GstState _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_current_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstState) (_value_to_c));
}

static ::GstState _field_next_state_get (const ::GstElement* obj) { return (::GstState) obj->next_state; }
// ::GstState Element::next_state (const ::GstElement* obj);
// ::GstState Element::next_state (const ::GstElement* obj);
Gst::State base::ElementBase::next_state_ () const noexcept
{
  typedef ::GstState (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_next_state_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_next_state_set (::GstElement* obj, ::GstState _value) { obj->next_state = (decltype(obj->next_state)) _value; }
//  Element::next_state (::GstElement* obj, ::GstState _value);
// void Element::next_state (::GstElement* obj, ::GstState _value);
void base::ElementBase::next_state_ (Gst::State _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, ::GstState _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_next_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstState) (_value_to_c));
}

static ::GstState _field_pending_state_get (const ::GstElement* obj) { return (::GstState) obj->pending_state; }
// ::GstState Element::pending_state (const ::GstElement* obj);
// ::GstState Element::pending_state (const ::GstElement* obj);
Gst::State base::ElementBase::pending_state_ () const noexcept
{
  typedef ::GstState (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pending_state_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_pending_state_set (::GstElement* obj, ::GstState _value) { obj->pending_state = (decltype(obj->pending_state)) _value; }
//  Element::pending_state (::GstElement* obj, ::GstState _value);
// void Element::pending_state (::GstElement* obj, ::GstState _value);
void base::ElementBase::pending_state_ (Gst::State _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, ::GstState _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pending_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstState) (_value_to_c));
}

static ::GstStateChangeReturn _field_last_return_get (const ::GstElement* obj) { return (::GstStateChangeReturn) obj->last_return; }
// ::GstStateChangeReturn Element::last_return (const ::GstElement* obj);
// ::GstStateChangeReturn Element::last_return (const ::GstElement* obj);
Gst::StateChangeReturn base::ElementBase::last_return_ () const noexcept
{
  typedef ::GstStateChangeReturn (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_last_return_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_last_return_set (::GstElement* obj, ::GstStateChangeReturn _value) { obj->last_return = (decltype(obj->last_return)) _value; }
//  Element::last_return (::GstElement* obj, ::GstStateChangeReturn _value);
// void Element::last_return (::GstElement* obj, ::GstStateChangeReturn _value);
void base::ElementBase::last_return_ (Gst::StateChangeReturn _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, ::GstStateChangeReturn _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_last_return_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstStateChangeReturn) (_value_to_c));
}

static ::GstBus* _field_bus_get (const ::GstElement* obj) { return (::GstBus*) obj->bus; }
// ::GstBus* Element::bus (const ::GstElement* obj);
// ::GstBus* Element::bus (const ::GstElement* obj);
Gst::Bus base::ElementBase::bus_ () const noexcept
{
  typedef ::GstBus* (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bus_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstClock* _field_clock_get (const ::GstElement* obj) { return (::GstClock*) obj->clock; }
// ::GstClock* Element::clock (const ::GstElement* obj);
// ::GstClock* Element::clock (const ::GstElement* obj);
Gst::Clock base::ElementBase::clock_ () const noexcept
{
  typedef ::GstClock* (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_clock_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstClockTimeDiff _field_base_time_get (const ::GstElement* obj) { return (::GstClockTimeDiff) obj->base_time; }
// ::GstClockTimeDiff Element::base_time (const ::GstElement* obj);
// ::GstClockTimeDiff Element::base_time (const ::GstElement* obj);
Gst::ClockTimeDiff base::ElementBase::base_time_ () const noexcept
{
  typedef ::GstClockTimeDiff (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_base_time_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return _temp_ret;
}

static void _field_base_time_set (::GstElement* obj, ::GstClockTimeDiff _value) { obj->base_time = (decltype(obj->base_time)) _value; }
//  Element::base_time (::GstElement* obj, ::GstClockTimeDiff _value);
// void Element::base_time (::GstElement* obj, ::GstClockTimeDiff _value);
void base::ElementBase::base_time_ (::GstClockTimeDiff _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, ::GstClockTimeDiff _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_base_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstElement*) (gobj_()), (::GstClockTimeDiff) (_value_to_c));
}

static ::GstClockTime _field_start_time_get (const ::GstElement* obj) { return (::GstClockTime) obj->start_time; }
// ::GstClockTime Element::start_time (const ::GstElement* obj);
// ::GstClockTime Element::start_time (const ::GstElement* obj);
Gst::ClockTime base::ElementBase::start_time_ () const noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_time_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return _temp_ret;
}

static void _field_start_time_set (::GstElement* obj, ::GstClockTime _value) { obj->start_time = (decltype(obj->start_time)) _value; }
//  Element::start_time (::GstElement* obj, ::GstClockTime _value);
// void Element::start_time (::GstElement* obj, ::GstClockTime _value);
void base::ElementBase::start_time_ (::GstClockTime _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, ::GstClockTime _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstElement*) (gobj_()), (::GstClockTime) (_value_to_c));
}

static guint16 _field_numpads_get (const ::GstElement* obj) { return (guint16) obj->numpads; }
// guint16 Element::numpads (const ::GstElement* obj);
// guint16 Element::numpads (const ::GstElement* obj);
guint16 base::ElementBase::numpads_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_numpads_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return _temp_ret;
}

static void _field_numpads_set (::GstElement* obj, guint16 _value) { obj->numpads = (decltype(obj->numpads)) _value; }
//  Element::numpads (::GstElement* obj, guint16 _value);
// void Element::numpads (::GstElement* obj, guint16 _value);
void base::ElementBase::numpads_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_numpads_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstElement*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_numsrcpads_get (const ::GstElement* obj) { return (guint16) obj->numsrcpads; }
// guint16 Element::numsrcpads (const ::GstElement* obj);
// guint16 Element::numsrcpads (const ::GstElement* obj);
guint16 base::ElementBase::numsrcpads_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_numsrcpads_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return _temp_ret;
}

static void _field_numsrcpads_set (::GstElement* obj, guint16 _value) { obj->numsrcpads = (decltype(obj->numsrcpads)) _value; }
//  Element::numsrcpads (::GstElement* obj, guint16 _value);
// void Element::numsrcpads (::GstElement* obj, guint16 _value);
void base::ElementBase::numsrcpads_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_numsrcpads_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstElement*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_numsinkpads_get (const ::GstElement* obj) { return (guint16) obj->numsinkpads; }
// guint16 Element::numsinkpads (const ::GstElement* obj);
// guint16 Element::numsinkpads (const ::GstElement* obj);
guint16 base::ElementBase::numsinkpads_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_numsinkpads_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return _temp_ret;
}

static void _field_numsinkpads_set (::GstElement* obj, guint16 _value) { obj->numsinkpads = (decltype(obj->numsinkpads)) _value; }
//  Element::numsinkpads (::GstElement* obj, guint16 _value);
// void Element::numsinkpads (::GstElement* obj, guint16 _value);
void base::ElementBase::numsinkpads_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_numsinkpads_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstElement*) (gobj_()), (guint16) (_value_to_c));
}

static guint32 _field_pads_cookie_get (const ::GstElement* obj) { return (guint32) obj->pads_cookie; }
// guint32 Element::pads_cookie (const ::GstElement* obj);
// guint32 Element::pads_cookie (const ::GstElement* obj);
guint32 base::ElementBase::pads_cookie_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GstElement* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pads_cookie_get;
  auto _temp_ret = call_wrap_v ((const ::GstElement*) (gobj_()));
  return _temp_ret;
}

static void _field_pads_cookie_set (::GstElement* obj, guint32 _value) { obj->pads_cookie = (decltype(obj->pads_cookie)) _value; }
//  Element::pads_cookie (::GstElement* obj, guint32 _value);
// void Element::pads_cookie (::GstElement* obj, guint32 _value);
void base::ElementBase::pads_cookie_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstElement* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pads_cookie_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstElement*) (gobj_()), (guint32) (_value_to_c));
}





} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/element_extra_def_impl.hpp>)
#include <gst/element_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/element_extra_impl.hpp>)
#include <gst/element_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void ElementClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstElementClass *methods = (::GstElementClass *) class_struct;
  (void) methods;

  methods->change_state = (decltype (methods->change_state)) detail::method_wrapper<self, Gst::StateChangeReturn (*) (Gst::StateChange transition), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::change_state_>;
  methods->no_more_pads = (decltype (methods->no_more_pads)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::no_more_pads_>;
  methods->pad_added = (decltype (methods->pad_added)) detail::method_wrapper<self, void (*) (Gst::Pad pad), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::pad_added_>;
  methods->pad_removed = (decltype (methods->pad_removed)) detail::method_wrapper<self, void (*) (Gst::Pad pad), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::pad_removed_>;
  methods->post_message = (decltype (methods->post_message)) detail::method_wrapper<self, bool (*) (Gst::Message message), gi::transfer_none_t, gi::transfer_full_t>::wrapper<&self::post_message_>;
  methods->provide_clock = (decltype (methods->provide_clock)) detail::method_wrapper<self, Gst::Clock (*) (), gi::transfer_full_t>::wrapper<&self::provide_clock_>;
  methods->query = (decltype (methods->query)) detail::method_wrapper<self, bool (*) (Gst::Query query), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::query_>;
  methods->release_pad = (decltype (methods->release_pad)) detail::method_wrapper<self, void (*) (Gst::Pad pad), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::release_pad_>;
  methods->request_new_pad = (decltype (methods->request_new_pad)) detail::method_wrapper<self, Gst::Pad (*) (Gst::PadTemplate templ, const std::string & name, const Gst::Caps & caps), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::request_new_pad_>;
  methods->send_event = (decltype (methods->send_event)) detail::method_wrapper<self, bool (*) (Gst::Event event), gi::transfer_none_t, gi::transfer_full_t>::wrapper<&self::send_event_>;
  methods->set_bus = (decltype (methods->set_bus)) detail::method_wrapper<self, void (*) (Gst::Bus bus), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_bus_>;
  methods->set_clock = (decltype (methods->set_clock)) detail::method_wrapper<self, bool (*) (Gst::Clock clock), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_clock_>;
  methods->set_context = (decltype (methods->set_context)) detail::method_wrapper<self, void (*) (Gst::Context context), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_context_>;
  methods->set_state = (decltype (methods->set_state)) detail::method_wrapper<self, Gst::StateChangeReturn (*) (Gst::State state), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_state_>;
  methods->state_changed = (decltype (methods->state_changed)) detail::method_wrapper<self, void (*) (Gst::State oldstate, Gst::State newstate, Gst::State pending), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::state_changed_>;
}

// GstStateChangeReturn Element::change_state (GstElement* element, GstStateChange transition);
// ::GstStateChangeReturn Element::change_state (::GstElement* element, ::GstStateChange transition);
Gst::StateChangeReturn ElementClass::change_state_ (Gst::StateChange transition) noexcept
{
  if (!get_struct_()->change_state) return Gst::StateChangeReturn{};
  typedef ::GstStateChangeReturn (*call_wrap_t) (::GstElement* element, ::GstStateChange transition);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->change_state;
  auto transition_to_c = gi::unwrap (transition);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstStateChange) (transition_to_c));
  return gi::wrap (_temp_ret);
}

// GstStateChangeReturn Element::get_state (GstElement* element, GstState* state, GstState* pending, GstClockTime timeout);
// ::GstStateChangeReturn Element::get_state (::GstElement* element, ::GstState* state, ::GstState* pending, ::GstClockTime timeout);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Element::no_more_pads (GstElement* element);
// void Element::no_more_pads (::GstElement* element);
void ElementClass::no_more_pads_ () noexcept
{
  if (!get_struct_()->no_more_pads) return ;
  typedef void (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->no_more_pads;
  call_wrap_v ((::GstElement*) (gobj_()));
}

// void Element::pad_added (GstElement* element, GstPad* pad);
// void Element::pad_added (::GstElement* element, ::GstPad* pad);
void ElementClass::pad_added_ (Gst::Pad pad) noexcept
{
  if (!get_struct_()->pad_added) return ;
  typedef void (*call_wrap_t) (::GstElement* element, ::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->pad_added;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstPad*) (pad_to_c));
}

// void Element::pad_removed (GstElement* element, GstPad* pad);
// void Element::pad_removed (::GstElement* element, ::GstPad* pad);
void ElementClass::pad_removed_ (Gst::Pad pad) noexcept
{
  if (!get_struct_()->pad_removed) return ;
  typedef void (*call_wrap_t) (::GstElement* element, ::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->pad_removed;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstPad*) (pad_to_c));
}

// gboolean Element::post_message (GstElement* element, GstMessage* message);
// gboolean Element::post_message (::GstElement* element, ::GstMessage* message);
bool ElementClass::post_message_ (Gst::Message message) noexcept
{
  if (!get_struct_()->post_message) return bool{};
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->post_message;
  auto message_to_c = gi::unwrap (message, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstMessage*) (message_to_c));
  return _temp_ret;
}

// GstClock* Element::provide_clock (GstElement* element);
// ::GstClock* Element::provide_clock (::GstElement* element);
Gst::Clock ElementClass::provide_clock_ () noexcept
{
  if (!get_struct_()->provide_clock) return Gst::Clock{};
  typedef ::GstClock* (*call_wrap_t) (::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->provide_clock;
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean Element::query (GstElement* element, GstQuery* query);
// gboolean Element::query (::GstElement* element, ::GstQuery* query);
bool ElementClass::query_ (Gst::Query query) noexcept
{
  if (!get_struct_()->query) return bool{};
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query;
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstQuery*) (query_to_c));
  return _temp_ret;
}

// void Element::release_pad (GstElement* element, GstPad* pad);
// void Element::release_pad (::GstElement* element, ::GstPad* pad);
void ElementClass::release_pad_ (Gst::Pad pad) noexcept
{
  if (!get_struct_()->release_pad) return ;
  typedef void (*call_wrap_t) (::GstElement* element, ::GstPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->release_pad;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstPad*) (pad_to_c));
}

// GstPad* Element::request_new_pad (GstElement* element, GstPadTemplate* templ, const gchar* name, const GstCaps* caps);
// ::GstPad* Element::request_new_pad (::GstElement* element, ::GstPadTemplate* templ, const char* name, const ::GstCaps* caps);
Gst::Pad ElementClass::request_new_pad_ (Gst::PadTemplate templ, const std::string & name, const Gst::Caps & caps) noexcept
{
  if (!get_struct_()->request_new_pad) return Gst::Pad{};
  typedef ::GstPad* (*call_wrap_t) (::GstElement* element, ::GstPadTemplate* templ, const char* name, const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_new_pad;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto templ_to_c = gi::unwrap (templ, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstPadTemplate*) (templ_to_c), (const char*) (name_to_c), (const ::GstCaps*) (caps_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean Element::send_event (GstElement* element, GstEvent* event);
// gboolean Element::send_event (::GstElement* element, ::GstEvent* event);
bool ElementClass::send_event_ (Gst::Event event) noexcept
{
  if (!get_struct_()->send_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstEvent* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->send_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstEvent*) (event_to_c));
  return _temp_ret;
}

// void Element::set_bus (GstElement* element, GstBus* bus);
// void Element::set_bus (::GstElement* element, ::GstBus* bus);
void ElementClass::set_bus_ (Gst::Bus bus) noexcept
{
  if (!get_struct_()->set_bus) return ;
  typedef void (*call_wrap_t) (::GstElement* element, ::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_bus;
  auto bus_to_c = gi::unwrap (bus, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstBus*) (bus_to_c));
}

// gboolean Element::set_clock (GstElement* element, GstClock* clock);
// gboolean Element::set_clock (::GstElement* element, ::GstClock* clock);
bool ElementClass::set_clock_ (Gst::Clock clock) noexcept
{
  if (!get_struct_()->set_clock) return bool{};
  typedef gboolean (*call_wrap_t) (::GstElement* element, ::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_clock;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstClock*) (clock_to_c));
  return _temp_ret;
}

// void Element::set_context (GstElement* element, GstContext* context);
// void Element::set_context (::GstElement* element, ::GstContext* context);
void ElementClass::set_context_ (Gst::Context context) noexcept
{
  if (!get_struct_()->set_context) return ;
  typedef void (*call_wrap_t) (::GstElement* element, ::GstContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstContext*) (context_to_c));
}

// GstStateChangeReturn Element::set_state (GstElement* element, GstState state);
// ::GstStateChangeReturn Element::set_state (::GstElement* element, ::GstState state);
Gst::StateChangeReturn ElementClass::set_state_ (Gst::State state) noexcept
{
  if (!get_struct_()->set_state) return Gst::StateChangeReturn{};
  typedef ::GstStateChangeReturn (*call_wrap_t) (::GstElement* element, ::GstState state);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_state;
  auto state_to_c = gi::unwrap (state);
  auto _temp_ret = call_wrap_v ((::GstElement*) (gobj_()), (::GstState) (state_to_c));
  return gi::wrap (_temp_ret);
}

// void Element::state_changed (GstElement* element, GstState oldstate, GstState newstate, GstState pending);
// void Element::state_changed (::GstElement* element, ::GstState oldstate, ::GstState newstate, ::GstState pending);
void ElementClass::state_changed_ (Gst::State oldstate, Gst::State newstate, Gst::State pending) noexcept
{
  if (!get_struct_()->state_changed) return ;
  typedef void (*call_wrap_t) (::GstElement* element, ::GstState oldstate, ::GstState newstate, ::GstState pending);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->state_changed;
  auto pending_to_c = gi::unwrap (pending);
  auto newstate_to_c = gi::unwrap (newstate);
  auto oldstate_to_c = gi::unwrap (oldstate);
  call_wrap_v ((::GstElement*) (gobj_()), (::GstState) (oldstate_to_c), (::GstState) (newstate_to_c), (::GstState) (pending_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
