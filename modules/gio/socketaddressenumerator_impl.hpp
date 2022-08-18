// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETADDRESSENUMERATOR_IMPL_HPP_
#define _GI_GIO_SOCKETADDRESSENUMERATOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketAddress* g_socket_address_enumerator_next (GSocketAddressEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// ::GSocketAddress* g_socket_address_enumerator_next (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
Gio::SocketAddress base::SocketAddressEnumeratorBase::next (Gio::Cancellable cancellable)
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_enumerator_next;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketAddress base::SocketAddressEnumeratorBase::next ()
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_enumerator_next;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketAddress base::SocketAddressEnumeratorBase::next (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_enumerator_next;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketAddress base::SocketAddressEnumeratorBase::next (GLib::Error * _error) noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_enumerator_next;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_socket_address_enumerator_next_async (GSocketAddressEnumerator* enumerator, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_address_enumerator_next_async (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SocketAddressEnumeratorBase::next_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_enumerator_next_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SocketAddressEnumeratorBase::next_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_enumerator_next_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GSocketAddress* g_socket_address_enumerator_next_finish (GSocketAddressEnumerator* enumerator, GAsyncResult* result, GError ** error);
// ::GSocketAddress* g_socket_address_enumerator_next_finish (::GSocketAddressEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
Gio::SocketAddress base::SocketAddressEnumeratorBase::next_finish (Gio::AsyncResult result)
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_enumerator_next_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketAddress base::SocketAddressEnumeratorBase::next_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketAddressEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_enumerator_next_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketAddressEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketaddressenumerator_extra_def_impl.hpp>)
#include <gio/socketaddressenumerator_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketaddressenumerator_extra_impl.hpp>)
#include <gio/socketaddressenumerator_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketAddressEnumeratorClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GSocketAddressEnumeratorClass *methods = (::GSocketAddressEnumeratorClass *) class_struct;
  (void) methods;

}

// GSocketAddress* SocketAddressEnumerator::next (GSocketAddressEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// ::GSocketAddress* SocketAddressEnumerator::next (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void SocketAddressEnumerator::next_async (GSocketAddressEnumerator* enumerator, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void SocketAddressEnumerator::next_async (::GSocketAddressEnumerator* enumerator, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GSocketAddress* SocketAddressEnumerator::next_finish (GSocketAddressEnumerator* enumerator, GAsyncResult* result, GError ** error);
// ::GSocketAddress* SocketAddressEnumerator::next_finish (::GSocketAddressEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
