// AUTO-GENERATED

#ifndef _GI_GIO_PROXY_IMPL_HPP_
#define _GI_GIO_PROXY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GProxy* g_proxy_get_default_for_protocol (const gchar* protocol);
// ::GProxy* g_proxy_get_default_for_protocol (const char* protocol);
Gio::Proxy base::ProxyBase::get_default_for_protocol (const std::string & protocol) noexcept
{
  typedef ::GProxy* (*call_wrap_t) (const char* protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_get_default_for_protocol;
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (protocol_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIOStream* g_proxy_connect (GProxy* proxy, GIOStream* connection, GProxyAddress* proxy_address, GCancellable* cancellable, GError ** error);
// ::GIOStream* g_proxy_connect (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
Gio::IOStream base::ProxyBase::connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable)
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_connect;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::IOStream base::ProxyBase::connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address)
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_connect;
  auto cancellable_to_c = nullptr;
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::IOStream base::ProxyBase::connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_connect;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::IOStream base::ProxyBase::connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_connect;
  auto cancellable_to_c = nullptr;
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_proxy_connect_async (GProxy* proxy, GIOStream* connection, GProxyAddress* proxy_address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_proxy_connect_async (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::ProxyBase::connect_async (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ProxyBase::connect_async (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto proxy_address_to_c = gi::unwrap (proxy_address, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GProxy*) (gobj_()), (::GIOStream*) (connection_to_c), (::GProxyAddress*) (proxy_address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GIOStream* g_proxy_connect_finish (GProxy* proxy, GAsyncResult* result, GError ** error);
// ::GIOStream* g_proxy_connect_finish (::GProxy* proxy, ::GAsyncResult* result, GError ** error);
Gio::IOStream base::ProxyBase::connect_finish (Gio::AsyncResult result)
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::IOStream base::ProxyBase::connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GProxy* proxy, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_proxy_supports_hostname (GProxy* proxy);
// gboolean g_proxy_supports_hostname (::GProxy* proxy);
bool base::ProxyBase::supports_hostname () noexcept
{
  typedef gboolean (*call_wrap_t) (::GProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_supports_hostname;
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxy_extra_def_impl.hpp>)
#include <gio/proxy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxy_extra_impl.hpp>)
#include <gio/proxy_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ProxyInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GProxyInterface *methods = (::GProxyInterface *) interface_struct;
  (void) methods;

  methods->supports_hostname = (decltype (methods->supports_hostname)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::supports_hostname_>;
}

// GIOStream* Proxy::connect (GProxy* proxy, GIOStream* connection, GProxyAddress* proxy_address, GCancellable* cancellable, GError ** error);
// ::GIOStream* Proxy::connect (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void Proxy::connect_async (GProxy* proxy, GIOStream* connection, GProxyAddress* proxy_address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Proxy::connect_async (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GIOStream* Proxy::connect_finish (GProxy* proxy, GAsyncResult* result, GError ** error);
// ::GIOStream* Proxy::connect_finish (::GProxy* proxy, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean Proxy::supports_hostname (GProxy* proxy);
// gboolean Proxy::supports_hostname (::GProxy* proxy);
bool ProxyInterfaceClassImpl::supports_hostname_ () noexcept
{
  if (!get_struct_()->supports_hostname) return bool{};
  typedef gboolean (*call_wrap_t) (::GProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->supports_hostname;
  auto _temp_ret = call_wrap_v ((::GProxy*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
