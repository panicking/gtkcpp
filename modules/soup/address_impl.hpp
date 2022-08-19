// AUTO-GENERATED

#ifndef _GI_SOUP_ADDRESS_IMPL_HPP_
#define _GI_SOUP_ADDRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Gio::SocketConnectable AddressBase::interface_ (gi::interface_tag<Gio::SocketConnectable>)
{ return gi::wrap ((Gio::SocketConnectable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

AddressBase::operator Gio::SocketConnectable ()
{ return interface_ (gi::interface_tag<Gio::SocketConnectable>()); }

// SoupAddress* soup_address_new (const char* name, guint port);
// ::SoupAddress* soup_address_new (const char* name, guint port);
Soup::Address base::AddressBase::new_ (const std::string & name, guint port) noexcept
{
  typedef ::SoupAddress* (*call_wrap_t) (const char* name, guint port);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_new;
  auto port_to_c = port;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (guint) (port_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupAddress* soup_address_new_any (SoupAddressFamily family, guint port);
// ::SoupAddress* soup_address_new_any (::SoupAddressFamily family, guint port);
Soup::Address base::AddressBase::new_any (Soup::AddressFamily family, guint port) noexcept
{
  typedef ::SoupAddress* (*call_wrap_t) (::SoupAddressFamily family, guint port);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_new_any;
  auto port_to_c = port;
  auto family_to_c = gi::unwrap (family);
  auto _temp_ret = call_wrap_v ((::SoupAddressFamily) (family_to_c), (guint) (port_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupAddress* soup_address_new_from_sockaddr (sockaddr* sa, int len);
// ::SoupAddress* soup_address_new_from_sockaddr (void* sa, gint len);
Soup::Address base::AddressBase::new_from_sockaddr (void* sa, gint len) noexcept
{
  typedef ::SoupAddress* (*call_wrap_t) (void* sa, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_new_from_sockaddr;
  auto len_to_c = len;
  auto sa_to_c = sa;
  auto _temp_ret = call_wrap_v ((void*) (sa_to_c), (gint) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean soup_address_equal_by_ip (gconstpointer addr1, gconstpointer addr2);
// gboolean soup_address_equal_by_ip (const ::SoupAddress* addr1, const ::SoupAddress* addr2);
bool base::AddressBase::equal_by_ip (const Soup::Address & addr2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::SoupAddress* addr1, const ::SoupAddress* addr2);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_equal_by_ip;
  auto addr2_to_c = gi::unwrap (addr2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::SoupAddress*) (gobj_()), (const ::SoupAddress*) (addr2_to_c));
  return _temp_ret;
}

// gboolean soup_address_equal_by_name (gconstpointer addr1, gconstpointer addr2);
// gboolean soup_address_equal_by_name (const ::SoupAddress* addr1, const ::SoupAddress* addr2);
bool base::AddressBase::equal_by_name (const Soup::Address & addr2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::SoupAddress* addr1, const ::SoupAddress* addr2);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_equal_by_name;
  auto addr2_to_c = gi::unwrap (addr2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::SoupAddress*) (gobj_()), (const ::SoupAddress*) (addr2_to_c));
  return _temp_ret;
}

// GSocketAddress* soup_address_get_gsockaddr (SoupAddress* addr);
// ::GSocketAddress* soup_address_get_gsockaddr (::SoupAddress* addr);
Gio::SocketAddress base::AddressBase::get_gsockaddr () noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::SoupAddress* addr);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_get_gsockaddr;
  auto _temp_ret = call_wrap_v ((::SoupAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const char* soup_address_get_name (SoupAddress* addr);
// const char* soup_address_get_name (::SoupAddress* addr);
std::string base::AddressBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupAddress* addr);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_get_name;
  auto _temp_ret = call_wrap_v ((::SoupAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_address_get_physical (SoupAddress* addr);
// const char* soup_address_get_physical (::SoupAddress* addr);
std::string base::AddressBase::get_physical () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupAddress* addr);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_get_physical;
  auto _temp_ret = call_wrap_v ((::SoupAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint soup_address_get_port (SoupAddress* addr);
// guint soup_address_get_port (::SoupAddress* addr);
guint base::AddressBase::get_port () noexcept
{
  typedef guint (*call_wrap_t) (::SoupAddress* addr);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_get_port;
  auto _temp_ret = call_wrap_v ((::SoupAddress*) (gobj_()));
  return _temp_ret;
}

// sockaddr* soup_address_get_sockaddr (SoupAddress* addr, int* len);
// void* soup_address_get_sockaddr (::SoupAddress* addr, gint len);
// SKIP; inconsistent in len pointer depth (1 vs 0)

// guint soup_address_hash_by_ip (gconstpointer addr);
// guint soup_address_hash_by_ip (const ::SoupAddress* addr);
guint base::AddressBase::hash_by_ip () const noexcept
{
  typedef guint (*call_wrap_t) (const ::SoupAddress* addr);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_hash_by_ip;
  auto _temp_ret = call_wrap_v ((const ::SoupAddress*) (gobj_()));
  return _temp_ret;
}

// guint soup_address_hash_by_name (gconstpointer addr);
// guint soup_address_hash_by_name (const ::SoupAddress* addr);
guint base::AddressBase::hash_by_name () const noexcept
{
  typedef guint (*call_wrap_t) (const ::SoupAddress* addr);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_hash_by_name;
  auto _temp_ret = call_wrap_v ((const ::SoupAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean soup_address_is_resolved (SoupAddress* addr);
// gboolean soup_address_is_resolved (::SoupAddress* addr);
bool base::AddressBase::is_resolved () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupAddress* addr);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_is_resolved;
  auto _temp_ret = call_wrap_v ((::SoupAddress*) (gobj_()));
  return _temp_ret;
}

// void soup_address_resolve_async (SoupAddress* addr, GMainContext* async_context, GCancellable* cancellable, SoupAddressCallback callback, gpointer user_data);
// void soup_address_resolve_async (::SoupAddress* addr, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::AddressCallback::cfunction_type callback, void* user_data);
void base::AddressBase::resolve_async (GLib::MainContext async_context, Gio::Cancellable cancellable, Soup::AddressCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupAddress* addr, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::AddressCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_resolve_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto async_context_to_c = gi::unwrap (async_context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupAddress*) (gobj_()), (::GMainContext*) (async_context_to_c), (::GCancellable*) (cancellable_to_c), (Soup::AddressCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::AddressBase::resolve_async (Soup::AddressCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupAddress* addr, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::AddressCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_resolve_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto async_context_to_c = nullptr;
  call_wrap_v ((::SoupAddress*) (gobj_()), (::GMainContext*) (async_context_to_c), (::GCancellable*) (cancellable_to_c), (Soup::AddressCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// guint soup_address_resolve_sync (SoupAddress* addr, GCancellable* cancellable);
// guint soup_address_resolve_sync (::SoupAddress* addr, ::GCancellable* cancellable);
guint base::AddressBase::resolve_sync (Gio::Cancellable cancellable) noexcept
{
  typedef guint (*call_wrap_t) (::SoupAddress* addr, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_resolve_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAddress*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}
guint base::AddressBase::resolve_sync () noexcept
{
  typedef guint (*call_wrap_t) (::SoupAddress* addr, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_address_resolve_sync;
  auto cancellable_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::SoupAddress*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/address_extra_def_impl.hpp>)
#include <soup/address_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/address_extra_impl.hpp>)
#include <soup/address_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void AddressClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupAddressClass *methods = (::SoupAddressClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
