// AUTO-GENERATED

#ifndef _GI_GIO_DATAGRAMBASED_IMPL_HPP_
#define _GI_GIO_DATAGRAMBASED_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GIOCondition g_datagram_based_condition_check (GDatagramBased* datagram_based, GIOCondition condition);
// ::GIOCondition g_datagram_based_condition_check (::GDatagramBased* datagram_based, ::GIOCondition condition);
GLib::IOCondition base::DatagramBasedBase::condition_check (GLib::IOCondition condition) noexcept
{
  typedef ::GIOCondition (*call_wrap_t) (::GDatagramBased* datagram_based, ::GIOCondition condition);
  call_wrap_t call_wrap_v = (call_wrap_t) g_datagram_based_condition_check;
  auto condition_to_c = gi::unwrap (condition);
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (gobj_()), (::GIOCondition) (condition_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean g_datagram_based_condition_wait (GDatagramBased* datagram_based, GIOCondition condition, gint64 timeout, GCancellable* cancellable, GError ** error);
// gboolean g_datagram_based_condition_wait (::GDatagramBased* datagram_based, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable, GError ** error);
bool base::DatagramBasedBase::condition_wait (GLib::IOCondition condition, gint64 timeout, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDatagramBased* datagram_based, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_datagram_based_condition_wait;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto timeout_to_c = timeout;
  auto condition_to_c = gi::unwrap (condition);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (gobj_()), (::GIOCondition) (condition_to_c), (gint64) (timeout_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DatagramBasedBase::condition_wait (GLib::IOCondition condition, gint64 timeout)
{
  typedef gboolean (*call_wrap_t) (::GDatagramBased* datagram_based, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_datagram_based_condition_wait;
  auto cancellable_to_c = nullptr;
  auto timeout_to_c = timeout;
  auto condition_to_c = gi::unwrap (condition);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (gobj_()), (::GIOCondition) (condition_to_c), (gint64) (timeout_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DatagramBasedBase::condition_wait (GLib::IOCondition condition, gint64 timeout, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDatagramBased* datagram_based, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_datagram_based_condition_wait;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto timeout_to_c = timeout;
  auto condition_to_c = gi::unwrap (condition);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (gobj_()), (::GIOCondition) (condition_to_c), (gint64) (timeout_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DatagramBasedBase::condition_wait (GLib::IOCondition condition, gint64 timeout, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDatagramBased* datagram_based, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_datagram_based_condition_wait;
  auto cancellable_to_c = nullptr;
  auto timeout_to_c = timeout;
  auto condition_to_c = gi::unwrap (condition);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (gobj_()), (::GIOCondition) (condition_to_c), (gint64) (timeout_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GSource* g_datagram_based_create_source (GDatagramBased* datagram_based, GIOCondition condition, GCancellable* cancellable);
// ::GSource* g_datagram_based_create_source (::GDatagramBased* datagram_based, ::GIOCondition condition, ::GCancellable* cancellable);
GLib::Source base::DatagramBasedBase::create_source (GLib::IOCondition condition, Gio::Cancellable cancellable) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GDatagramBased* datagram_based, ::GIOCondition condition, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_datagram_based_create_source;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto condition_to_c = gi::unwrap (condition);
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (gobj_()), (::GIOCondition) (condition_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Source base::DatagramBasedBase::create_source (GLib::IOCondition condition) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GDatagramBased* datagram_based, ::GIOCondition condition, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_datagram_based_create_source;
  auto cancellable_to_c = nullptr;
  auto condition_to_c = gi::unwrap (condition);
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (gobj_()), (::GIOCondition) (condition_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint g_datagram_based_receive_messages (GDatagramBased* datagram_based, GInputMessage* messages, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable, GError ** error);
// gint g_datagram_based_receive_messages (::GDatagramBased* datagram_based, ::GInputMessage** messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; inconsistent in messages pointer depth (1 vs 2)

// gint g_datagram_based_send_messages (GDatagramBased* datagram_based, GOutputMessage* messages, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable, GError ** error);
// gint g_datagram_based_send_messages (::GDatagramBased* datagram_based, ::GOutputMessage** messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; inconsistent in messages pointer depth (1 vs 2)


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/datagrambased_extra_def_impl.hpp>)
#include <gio/datagrambased_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/datagrambased_extra_impl.hpp>)
#include <gio/datagrambased_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DatagramBasedInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GDatagramBasedInterface *methods = (::GDatagramBasedInterface *) interface_struct;
  (void) methods;

  methods->condition_check = (decltype (methods->condition_check)) detail::method_wrapper<self, GLib::IOCondition (*) (GLib::IOCondition condition), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::condition_check_>;
  methods->create_source = (decltype (methods->create_source)) detail::method_wrapper<self, GLib::Source (*) (GLib::IOCondition condition, Gio::Cancellable cancellable), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::create_source_>;
}

// GIOCondition DatagramBased::condition_check (GDatagramBased* datagram_based, GIOCondition condition);
// ::GIOCondition DatagramBased::condition_check (::GDatagramBased* datagram_based, ::GIOCondition condition);
GLib::IOCondition DatagramBasedInterfaceClassImpl::condition_check_ (GLib::IOCondition condition) noexcept
{
  if (!get_struct_()->condition_check) return GLib::IOCondition{};
  typedef ::GIOCondition (*call_wrap_t) (::GDatagramBased* datagram_based, ::GIOCondition condition);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->condition_check;
  auto condition_to_c = gi::unwrap (condition);
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (gobj_()), (::GIOCondition) (condition_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean DatagramBased::condition_wait (GDatagramBased* datagram_based, GIOCondition condition, gint64 timeout, GCancellable* cancellable, GError ** error);
// gboolean DatagramBased::condition_wait (::GDatagramBased* datagram_based, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GSource* DatagramBased::create_source (GDatagramBased* datagram_based, GIOCondition condition, GCancellable* cancellable);
// ::GSource* DatagramBased::create_source (::GDatagramBased* datagram_based, ::GIOCondition condition, ::GCancellable* cancellable);
GLib::Source DatagramBasedInterfaceClassImpl::create_source_ (GLib::IOCondition condition, Gio::Cancellable cancellable) noexcept
{
  if (!get_struct_()->create_source) return GLib::Source{};
  typedef ::GSource* (*call_wrap_t) (::GDatagramBased* datagram_based, ::GIOCondition condition, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_source;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto condition_to_c = gi::unwrap (condition);
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (gobj_()), (::GIOCondition) (condition_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint DatagramBased::receive_messages (GDatagramBased* datagram_based, GInputMessage* messages, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable, GError ** error);
// gint DatagramBased::receive_messages (::GDatagramBased* datagram_based, ::GInputMessage** messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// gint DatagramBased::send_messages (GDatagramBased* datagram_based, GOutputMessage* messages, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable, GError ** error);
// gint DatagramBased::send_messages (::GDatagramBased* datagram_based, ::GOutputMessage** messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
