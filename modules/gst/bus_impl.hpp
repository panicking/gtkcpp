// AUTO-GENERATED

#ifndef _GI_GST_BUS_IMPL_HPP_
#define _GI_GST_BUS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstBus* gst_bus_new ();
// ::GstBus* gst_bus_new ();
Gst::Bus base::BusBase::new_ () noexcept
{
  typedef ::GstBus* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_bus_add_signal_watch (GstBus* bus);
// void gst_bus_add_signal_watch (::GstBus* bus);
void base::BusBase::add_signal_watch () noexcept
{
  typedef void (*call_wrap_t) (::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_add_signal_watch;
  call_wrap_v ((::GstBus*) (gobj_()));
}

// void gst_bus_add_signal_watch_full (GstBus* bus, gint priority);
// void gst_bus_add_signal_watch_full (::GstBus* bus, gint priority);
void base::BusBase::add_signal_watch_full (gint priority) noexcept
{
  typedef void (*call_wrap_t) (::GstBus* bus, gint priority);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_add_signal_watch_full;
  auto priority_to_c = priority;
  call_wrap_v ((::GstBus*) (gobj_()), (gint) (priority_to_c));
}

// guint gst_bus_add_watch (GstBus* bus, GstBusFunc func, gpointer user_data);
// guint gst_bus_add_watch (::GstBus* bus, Gst::BusFunc::cfunction_type func, void* user_data);
// IGNORE; not introspectable; shadowed-by add_watch_full

// guint gst_bus_add_watch_full (GstBus* bus, gint priority, GstBusFunc func, gpointer user_data, GDestroyNotify notify);
// guint gst_bus_add_watch_full (::GstBus* bus, gint priority, Gst::BusFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
guint base::BusBase::add_watch (gint priority, Gst::BusFunc func) noexcept
{
  typedef guint (*call_wrap_t) (::GstBus* bus, gint priority, Gst::BusFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_add_watch_full;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()), (gint) (priority_to_c), (Gst::BusFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
  return _temp_ret;
}

// gboolean gst_bus_async_signal_func (GstBus* bus, GstMessage* message, gpointer data);
// gboolean gst_bus_async_signal_func (::GstBus* bus, ::GstMessage* message, void* data);
bool base::BusBase::async_signal_func (Gst::Message message, void* data) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBus* bus, ::GstMessage* message, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_async_signal_func;
  auto data_to_c = data;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()), (::GstMessage*) (message_to_c), (void*) (data_to_c));
  return _temp_ret;
}

// GSource* gst_bus_create_watch (GstBus* bus);
// ::GSource* gst_bus_create_watch (::GstBus* bus);
GLib::Source base::BusBase::create_watch () noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_create_watch;
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_bus_disable_sync_message_emission (GstBus* bus);
// void gst_bus_disable_sync_message_emission (::GstBus* bus);
void base::BusBase::disable_sync_message_emission () noexcept
{
  typedef void (*call_wrap_t) (::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_disable_sync_message_emission;
  call_wrap_v ((::GstBus*) (gobj_()));
}

// void gst_bus_enable_sync_message_emission (GstBus* bus);
// void gst_bus_enable_sync_message_emission (::GstBus* bus);
void base::BusBase::enable_sync_message_emission () noexcept
{
  typedef void (*call_wrap_t) (::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_enable_sync_message_emission;
  call_wrap_v ((::GstBus*) (gobj_()));
}

// void gst_bus_get_pollfd (GstBus* bus, GPollFD* fd);
// void gst_bus_get_pollfd (::GstBus* bus, ::GPollFD* fd);
void base::BusBase::get_pollfd (GLib::PollFD & fd) noexcept
{
  typedef void (*call_wrap_t) (::GstBus* bus, ::GPollFD* fd);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_get_pollfd;
  traits::unset_wrapper<::GPollFD>::type fd_c;
  call_wrap_v ((::GstBus*) (gobj_()), (::GPollFD*) ((::GPollFD*) &fd_c));
  fd = gi::wrap ((::GPollFD*) &fd_c, gi::transfer_none, gi::direction_out);
}
GLib::PollFD base::BusBase::get_pollfd () noexcept
{
  typedef void (*call_wrap_t) (::GstBus* bus, ::GPollFD* fd);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_get_pollfd;
  traits::unset_wrapper<::GPollFD>::type fd_c;
  call_wrap_v ((::GstBus*) (gobj_()), (::GPollFD*) ((::GPollFD*) &fd_c));
  return gi::wrap ((::GPollFD*) &fd_c, gi::transfer_none, gi::direction_out);
}

// gboolean gst_bus_have_pending (GstBus* bus);
// gboolean gst_bus_have_pending (::GstBus* bus);
bool base::BusBase::have_pending () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_have_pending;
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()));
  return _temp_ret;
}

// GstMessage* gst_bus_peek (GstBus* bus);
// ::GstMessage* gst_bus_peek (::GstBus* bus);
Gst::Message base::BusBase::peek () noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_peek;
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_bus_poll (GstBus* bus, GstMessageType events, GstClockTime timeout);
// ::GstMessage* gst_bus_poll (::GstBus* bus, ::GstMessageType events, ::GstClockTime timeout);
Gst::Message base::BusBase::poll (Gst::MessageType events, ::GstClockTime timeout) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstBus* bus, ::GstMessageType events, ::GstClockTime timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_poll;
  auto timeout_to_c = timeout;
  auto events_to_c = gi::unwrap (events);
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()), (::GstMessageType) (events_to_c), (::GstClockTime) (timeout_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_bus_pop (GstBus* bus);
// ::GstMessage* gst_bus_pop (::GstBus* bus);
Gst::Message base::BusBase::pop () noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_pop;
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_bus_pop_filtered (GstBus* bus, GstMessageType types);
// ::GstMessage* gst_bus_pop_filtered (::GstBus* bus, ::GstMessageType types);
Gst::Message base::BusBase::pop_filtered (Gst::MessageType types) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstBus* bus, ::GstMessageType types);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_pop_filtered;
  auto types_to_c = gi::unwrap (types);
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()), (::GstMessageType) (types_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_bus_post (GstBus* bus, GstMessage* message);
// gboolean gst_bus_post (::GstBus* bus, ::GstMessage* message);
bool base::BusBase::post (Gst::Message message) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBus* bus, ::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_post;
  auto message_to_c = gi::unwrap (message, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()), (::GstMessage*) (message_to_c));
  return _temp_ret;
}

// void gst_bus_remove_signal_watch (GstBus* bus);
// void gst_bus_remove_signal_watch (::GstBus* bus);
void base::BusBase::remove_signal_watch () noexcept
{
  typedef void (*call_wrap_t) (::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_remove_signal_watch;
  call_wrap_v ((::GstBus*) (gobj_()));
}

// gboolean gst_bus_remove_watch (GstBus* bus);
// gboolean gst_bus_remove_watch (::GstBus* bus);
bool base::BusBase::remove_watch () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBus* bus);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_remove_watch;
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()));
  return _temp_ret;
}

// void gst_bus_set_flushing (GstBus* bus, gboolean flushing);
// void gst_bus_set_flushing (::GstBus* bus, gboolean flushing);
void base::BusBase::set_flushing (gboolean flushing) noexcept
{
  typedef void (*call_wrap_t) (::GstBus* bus, gboolean flushing);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_set_flushing;
  auto flushing_to_c = flushing;
  call_wrap_v ((::GstBus*) (gobj_()), (gboolean) (flushing_to_c));
}

// void gst_bus_set_sync_handler (GstBus* bus, GstBusSyncHandler func, gpointer user_data, GDestroyNotify notify);
// void gst_bus_set_sync_handler (::GstBus* bus, Gst::BusSyncHandler::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
void base::BusBase::set_sync_handler (Gst::BusSyncHandler func) noexcept
{
  typedef void (*call_wrap_t) (::GstBus* bus, Gst::BusSyncHandler::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_set_sync_handler;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GstBus*) (gobj_()), (Gst::BusSyncHandler::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// GstBusSyncReply gst_bus_sync_signal_handler (GstBus* bus, GstMessage* message, gpointer data);
// ::GstBusSyncReply gst_bus_sync_signal_handler (::GstBus* bus, ::GstMessage* message, void* data);
Gst::BusSyncReply base::BusBase::sync_signal_handler (Gst::Message message, void* data) noexcept
{
  typedef ::GstBusSyncReply (*call_wrap_t) (::GstBus* bus, ::GstMessage* message, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_sync_signal_handler;
  auto data_to_c = data;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()), (::GstMessage*) (message_to_c), (void*) (data_to_c));
  return gi::wrap (_temp_ret);
}

// GstMessage* gst_bus_timed_pop (GstBus* bus, GstClockTime timeout);
// ::GstMessage* gst_bus_timed_pop (::GstBus* bus, ::GstClockTime timeout);
Gst::Message base::BusBase::timed_pop (::GstClockTime timeout) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstBus* bus, ::GstClockTime timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_timed_pop;
  auto timeout_to_c = timeout;
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()), (::GstClockTime) (timeout_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMessage* gst_bus_timed_pop_filtered (GstBus* bus, GstClockTime timeout, GstMessageType types);
// ::GstMessage* gst_bus_timed_pop_filtered (::GstBus* bus, ::GstClockTime timeout, ::GstMessageType types);
Gst::Message base::BusBase::timed_pop_filtered (::GstClockTime timeout, Gst::MessageType types) noexcept
{
  typedef ::GstMessage* (*call_wrap_t) (::GstBus* bus, ::GstClockTime timeout, ::GstMessageType types);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bus_timed_pop_filtered;
  auto types_to_c = gi::unwrap (types);
  auto timeout_to_c = timeout;
  auto _temp_ret = call_wrap_v ((::GstBus*) (gobj_()), (::GstClockTime) (timeout_to_c), (::GstMessageType) (types_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}




} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/bus_extra_def_impl.hpp>)
#include <gst/bus_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/bus_extra_impl.hpp>)
#include <gst/bus_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void BusClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstBusClass *methods = (::GstBusClass *) class_struct;
  (void) methods;

  methods->message = (decltype (methods->message)) detail::method_wrapper<self, void (*) (Gst::Message message), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::message_>;
  methods->sync_message = (decltype (methods->sync_message)) detail::method_wrapper<self, void (*) (Gst::Message message), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::sync_message_>;
}

// void Bus::message (GstBus* bus, GstMessage* message);
// void Bus::message (::GstBus* bus, ::GstMessage* message);
void BusClass::message_ (Gst::Message message) noexcept
{
  if (!get_struct_()->message) return ;
  typedef void (*call_wrap_t) (::GstBus* bus, ::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->message;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBus*) (gobj_()), (::GstMessage*) (message_to_c));
}

// void Bus::sync_message (GstBus* bus, GstMessage* message);
// void Bus::sync_message (::GstBus* bus, ::GstMessage* message);
void BusClass::sync_message_ (Gst::Message message) noexcept
{
  if (!get_struct_()->sync_message) return ;
  typedef void (*call_wrap_t) (::GstBus* bus, ::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->sync_message;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBus*) (gobj_()), (::GstMessage*) (message_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
