// AUTO-GENERATED

#ifndef _GI_GIO_PROXYRESOLVER_IMPL_HPP_
#define _GI_GIO_PROXYRESOLVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GProxyResolver* g_proxy_resolver_get_default ();
// ::GProxyResolver* g_proxy_resolver_get_default ();
Gio::ProxyResolver base::ProxyResolverBase::get_default () noexcept
{
  typedef ::GProxyResolver* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_resolver_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_proxy_resolver_is_supported (GProxyResolver* resolver);
// gboolean g_proxy_resolver_is_supported (::GProxyResolver* resolver);
bool base::ProxyResolverBase::is_supported () noexcept
{
  typedef gboolean (*call_wrap_t) (::GProxyResolver* resolver);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_resolver_is_supported;
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()));
  return _temp_ret;
}

// gchar** g_proxy_resolver_lookup (GProxyResolver* resolver, const gchar* uri, GCancellable* cancellable, GError ** error);
// char** g_proxy_resolver_lookup (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
std::vector<std::string> base::ProxyResolverBase::lookup (const std::string & uri, Gio::Cancellable cancellable)
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_resolver_lookup;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::ProxyResolverBase::lookup (const std::string & uri)
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_resolver_lookup;
  auto cancellable_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::ProxyResolverBase::lookup (const std::string & uri, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_resolver_lookup;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::ProxyResolverBase::lookup (const std::string & uri, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_resolver_lookup;
  auto cancellable_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// void g_proxy_resolver_lookup_async (GProxyResolver* resolver, const gchar* uri, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_proxy_resolver_lookup_async (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::ProxyResolverBase::lookup_async (const std::string & uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_resolver_lookup_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ProxyResolverBase::lookup_async (const std::string & uri, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_resolver_lookup_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GProxyResolver*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gchar** g_proxy_resolver_lookup_finish (GProxyResolver* resolver, GAsyncResult* result, GError ** error);
// char** g_proxy_resolver_lookup_finish (::GProxyResolver* resolver, ::GAsyncResult* result, GError ** error);
std::vector<std::string> base::ProxyResolverBase::lookup_finish (Gio::AsyncResult result)
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_resolver_lookup_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::ProxyResolverBase::lookup_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GProxyResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_resolver_lookup_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxyresolver_extra_def_impl.hpp>)
#include <gio/proxyresolver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxyresolver_extra_impl.hpp>)
#include <gio/proxyresolver_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ProxyResolverInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GProxyResolverInterface *methods = (::GProxyResolverInterface *) interface_struct;
  (void) methods;

  methods->is_supported = (decltype (methods->is_supported)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_supported_>;
}

// gboolean ProxyResolver::is_supported (GProxyResolver* resolver);
// gboolean ProxyResolver::is_supported (::GProxyResolver* resolver);
bool ProxyResolverInterfaceClassImpl::is_supported_ () noexcept
{
  if (!get_struct_()->is_supported) return bool{};
  typedef gboolean (*call_wrap_t) (::GProxyResolver* resolver);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_supported;
  auto _temp_ret = call_wrap_v ((::GProxyResolver*) (gobj_()));
  return _temp_ret;
}

// gchar** ProxyResolver::lookup (GProxyResolver* resolver, const gchar* uri, GCancellable* cancellable, GError ** error);
// char** ProxyResolver::lookup (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void ProxyResolver::lookup_async (GProxyResolver* resolver, const gchar* uri, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void ProxyResolver::lookup_async (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gchar** ProxyResolver::lookup_finish (GProxyResolver* resolver, GAsyncResult* result, GError ** error);
// char** ProxyResolver::lookup_finish (::GProxyResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
