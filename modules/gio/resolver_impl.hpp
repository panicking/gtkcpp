// AUTO-GENERATED

#ifndef _GI_GIO_RESOLVER_IMPL_HPP_
#define _GI_GIO_RESOLVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_resolver_free_addresses (GList* addresses);
// void g_resolver_free_addresses (::GList* addresses);
void base::ResolverBase::free_addresses (const std::vector<gpointer> & addresses) noexcept
{
  typedef void (*call_wrap_t) (::GList* addresses);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_free_addresses;
  auto addresses_i = detail::make_list_unwrap_range<::GList> (addresses);
  auto addresses_w = unwrap (addresses_i, gi::transfer_none, direction_in);
  auto addresses_to_c = addresses_w.gobj_(false);
  call_wrap_v ((::GList*) (addresses_to_c));
}

// void g_resolver_free_targets (GList* targets);
// void g_resolver_free_targets (::GList* targets);
void base::ResolverBase::free_targets (const std::vector<gpointer> & targets) noexcept
{
  typedef void (*call_wrap_t) (::GList* targets);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_free_targets;
  auto targets_i = detail::make_list_unwrap_range<::GList> (targets);
  auto targets_w = unwrap (targets_i, gi::transfer_none, direction_in);
  auto targets_to_c = targets_w.gobj_(false);
  call_wrap_v ((::GList*) (targets_to_c));
}

// GResolver* g_resolver_get_default ();
// ::GResolver* g_resolver_get_default ();
Gio::Resolver base::ResolverBase::get_default () noexcept
{
  typedef ::GResolver* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_resolver_lookup_by_address (GResolver* resolver, GInetAddress* address, GCancellable* cancellable, GError ** error);
// char* g_resolver_lookup_by_address (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
std::string base::ResolverBase::lookup_by_address (Gio::InetAddress address, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_address;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::ResolverBase::lookup_by_address (Gio::InetAddress address)
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_address;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::ResolverBase::lookup_by_address (Gio::InetAddress address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_address;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::ResolverBase::lookup_by_address (Gio::InetAddress address, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_address;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_resolver_lookup_by_address_async (GResolver* resolver, GInetAddress* address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_resolver_lookup_by_address_async (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::ResolverBase::lookup_by_address_async (Gio::InetAddress address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_address_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ResolverBase::lookup_by_address_async (Gio::InetAddress address, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_address_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResolver*) (gobj_()), (::GInetAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gchar* g_resolver_lookup_by_address_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// char* g_resolver_lookup_by_address_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
std::string base::ResolverBase::lookup_by_address_finish (Gio::AsyncResult result)
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_address_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::ResolverBase::lookup_by_address_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_address_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* g_resolver_lookup_by_name (GResolver* resolver, const gchar* hostname, GCancellable* cancellable, GError ** error);
// ::GList* g_resolver_lookup_by_name (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name (const std::string & hostname, Gio::Cancellable cancellable)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name (const std::string & hostname)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name;
  auto cancellable_to_c = nullptr;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name (const std::string & hostname, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name (const std::string & hostname, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name;
  auto cancellable_to_c = nullptr;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}

// void g_resolver_lookup_by_name_async (GResolver* resolver, const gchar* hostname, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_resolver_lookup_by_name_async (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::ResolverBase::lookup_by_name_async (const std::string & hostname, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ResolverBase::lookup_by_name_async (const std::string & hostname, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* g_resolver_lookup_by_name_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* g_resolver_lookup_by_name_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}

// GList* g_resolver_lookup_by_name_with_flags (GResolver* resolver, const gchar* hostname, GResolverNameLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GList* g_resolver_lookup_by_name_with_flags (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name_with_flags (const std::string & hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_with_flags;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name_with_flags (const std::string & hostname, Gio::ResolverNameLookupFlags flags)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_with_flags;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name_with_flags (const std::string & hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_with_flags;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name_with_flags (const std::string & hostname, Gio::ResolverNameLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_with_flags;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}

// void g_resolver_lookup_by_name_with_flags_async (GResolver* resolver, const gchar* hostname, GResolverNameLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_resolver_lookup_by_name_with_flags_async (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::ResolverBase::lookup_by_name_with_flags_async (const std::string & hostname, Gio::ResolverNameLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_with_flags_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ResolverBase::lookup_by_name_with_flags_async (const std::string & hostname, Gio::ResolverNameLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_with_flags_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (hostname_to_c), (::GResolverNameLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* g_resolver_lookup_by_name_with_flags_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* g_resolver_lookup_by_name_with_flags_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name_with_flags_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_with_flags_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::InetAddress> base::ResolverBase::lookup_by_name_with_flags_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_by_name_with_flags_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::InetAddress> (_temp_ret, gi::transfer_full);
}

// GList* g_resolver_lookup_records (GResolver* resolver, const gchar* rrname, GResolverRecordType record_type, GCancellable* cancellable, GError ** error);
// ::GList* g_resolver_lookup_records (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
std::vector<GLib::Variant> base::ResolverBase::lookup_records (const std::string & rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_records;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<GLib::Variant> (_temp_ret, gi::transfer_full);
}
std::vector<GLib::Variant> base::ResolverBase::lookup_records (const std::string & rrname, Gio::ResolverRecordType record_type)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_records;
  auto cancellable_to_c = nullptr;
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<GLib::Variant> (_temp_ret, gi::transfer_full);
}
std::vector<GLib::Variant> base::ResolverBase::lookup_records (const std::string & rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_records;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<GLib::Variant> (_temp_ret, gi::transfer_full);
}
std::vector<GLib::Variant> base::ResolverBase::lookup_records (const std::string & rrname, Gio::ResolverRecordType record_type, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_records;
  auto cancellable_to_c = nullptr;
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<GLib::Variant> (_temp_ret, gi::transfer_full);
}

// void g_resolver_lookup_records_async (GResolver* resolver, const gchar* rrname, GResolverRecordType record_type, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_resolver_lookup_records_async (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::ResolverBase::lookup_records_async (const std::string & rrname, Gio::ResolverRecordType record_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_records_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ResolverBase::lookup_records_async (const std::string & rrname, Gio::ResolverRecordType record_type, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_records_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto record_type_to_c = gi::unwrap (record_type);
  auto rrname_to_c = gi::unwrap (rrname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (rrname_to_c), (::GResolverRecordType) (record_type_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* g_resolver_lookup_records_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* g_resolver_lookup_records_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
std::vector<GLib::Variant> base::ResolverBase::lookup_records_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_records_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<GLib::Variant> (_temp_ret, gi::transfer_full);
}
std::vector<GLib::Variant> base::ResolverBase::lookup_records_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_records_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<GLib::Variant> (_temp_ret, gi::transfer_full);
}

// GList* g_resolver_lookup_service (GResolver* resolver, const gchar* service, const gchar* protocol, const gchar* domain, GCancellable* cancellable, GError ** error);
// ::GList* g_resolver_lookup_service (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, GError ** error);
std::vector<Gio::SrvTarget> base::ResolverBase::lookup_service (const std::string & service, const std::string & protocol, const std::string & domain, Gio::Cancellable cancellable)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_service;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::SrvTarget> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::SrvTarget> base::ResolverBase::lookup_service (const std::string & service, const std::string & protocol, const std::string & domain)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_service;
  auto cancellable_to_c = nullptr;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::SrvTarget> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::SrvTarget> base::ResolverBase::lookup_service (const std::string & service, const std::string & protocol, const std::string & domain, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_service;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::SrvTarget> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::SrvTarget> base::ResolverBase::lookup_service (const std::string & service, const std::string & protocol, const std::string & domain, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_service;
  auto cancellable_to_c = nullptr;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::SrvTarget> (_temp_ret, gi::transfer_full);
}

// void g_resolver_lookup_service_async (GResolver* resolver, const gchar* service, const gchar* protocol, const gchar* domain, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_resolver_lookup_service_async (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::ResolverBase::lookup_service_async (const std::string & service, const std::string & protocol, const std::string & domain, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_service_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ResolverBase::lookup_service_async (const std::string & service, const std::string & protocol, const std::string & domain, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver, const char* service, const char* protocol, const char* domain, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_service_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResolver*) (gobj_()), (const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* g_resolver_lookup_service_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* g_resolver_lookup_service_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
std::vector<Gio::SrvTarget> base::ResolverBase::lookup_service_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_service_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::SrvTarget> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::SrvTarget> base::ResolverBase::lookup_service_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_lookup_service_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResolver*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::SrvTarget> (_temp_ret, gi::transfer_full);
}

// void g_resolver_set_default (GResolver* resolver);
// void g_resolver_set_default (::GResolver* resolver);
void base::ResolverBase::set_default () noexcept
{
  typedef void (*call_wrap_t) (::GResolver* resolver);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_set_default;
  call_wrap_v ((::GResolver*) (gobj_()));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/resolver_extra_def_impl.hpp>)
#include <gio/resolver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/resolver_extra_impl.hpp>)
#include <gio/resolver_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ResolverClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GResolverClass *methods = (::GResolverClass *) class_struct;
  (void) methods;

  methods->reload = (decltype (methods->reload)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::reload_>;
}

// gchar* Resolver::lookup_by_address (GResolver* resolver, GInetAddress* address, GCancellable* cancellable, GError ** error);
// char* Resolver::lookup_by_address (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void Resolver::lookup_by_address_async (GResolver* resolver, GInetAddress* address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_by_address_async (::GResolver* resolver, ::GInetAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gchar* Resolver::lookup_by_address_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// char* Resolver::lookup_by_address_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GList* Resolver::lookup_by_name (GResolver* resolver, const gchar* hostname, GCancellable* cancellable, GError ** error);
// ::GList* Resolver::lookup_by_name (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_by_name_async (GResolver* resolver, const gchar* hostname, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_by_name_async (::GResolver* resolver, const char* hostname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_by_name_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_by_name_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// GList* Resolver::lookup_by_name_with_flags (GResolver* resolver, const gchar* hostname, GResolverNameLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GList* Resolver::lookup_by_name_with_flags (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_by_name_with_flags_async (GResolver* resolver, const gchar* hostname, GResolverNameLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_by_name_with_flags_async (::GResolver* resolver, const char* hostname, ::GResolverNameLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_by_name_with_flags_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_by_name_with_flags_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// GList* Resolver::lookup_records (GResolver* resolver, const gchar* rrname, GResolverRecordType record_type, GCancellable* cancellable, GError ** error);
// ::GList* Resolver::lookup_records (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_records_async (GResolver* resolver, const gchar* rrname, GResolverRecordType record_type, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_records_async (::GResolver* resolver, const char* rrname, ::GResolverRecordType record_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_records_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_records_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::lookup_service_async (GResolver* resolver, const gchar* rrname, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Resolver::lookup_service_async (::GResolver* resolver, const char* rrname, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* Resolver::lookup_service_finish (GResolver* resolver, GAsyncResult* result, GError ** error);
// ::GList* Resolver::lookup_service_finish (::GResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void Resolver::reload (GResolver* resolver);
// void Resolver::reload (::GResolver* resolver);
void ResolverClass::reload_ () noexcept
{
  if (!get_struct_()->reload) return ;
  typedef void (*call_wrap_t) (::GResolver* resolver);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reload;
  call_wrap_v ((::GResolver*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
