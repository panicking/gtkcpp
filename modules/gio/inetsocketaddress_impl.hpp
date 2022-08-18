// AUTO-GENERATED

#ifndef _GI_GIO_INETSOCKETADDRESS_IMPL_HPP_
#define _GI_GIO_INETSOCKETADDRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketAddress* g_inet_socket_address_new (GInetAddress* address, guint16 port);
// ::GInetSocketAddress* g_inet_socket_address_new (::GInetAddress* address, guint16 port);
Gio::InetSocketAddress base::InetSocketAddressBase::new_ (Gio::InetAddress address, guint16 port) noexcept
{
  typedef ::GInetSocketAddress* (*call_wrap_t) (::GInetAddress* address, guint16 port);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_socket_address_new;
  auto port_to_c = port;
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (address_to_c), (guint16) (port_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocketAddress* g_inet_socket_address_new_from_string (const char* address, guint port);
// ::GInetSocketAddress* g_inet_socket_address_new_from_string (const char* address, guint port);
Gio::InetSocketAddress base::InetSocketAddressBase::new_from_string (const std::string & address, guint port) noexcept
{
  typedef ::GInetSocketAddress* (*call_wrap_t) (const char* address, guint port);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_socket_address_new_from_string;
  auto port_to_c = port;
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (guint) (port_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GInetAddress* g_inet_socket_address_get_address (GInetSocketAddress* address);
// ::GInetAddress* g_inet_socket_address_get_address (::GInetSocketAddress* address);
Gio::InetAddress base::InetSocketAddressBase::get_address () noexcept
{
  typedef ::GInetAddress* (*call_wrap_t) (::GInetSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_socket_address_get_address;
  auto _temp_ret = call_wrap_v ((::GInetSocketAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint32 g_inet_socket_address_get_flowinfo (GInetSocketAddress* address);
// guint32 g_inet_socket_address_get_flowinfo (::GInetSocketAddress* address);
guint32 base::InetSocketAddressBase::get_flowinfo () noexcept
{
  typedef guint32 (*call_wrap_t) (::GInetSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_socket_address_get_flowinfo;
  auto _temp_ret = call_wrap_v ((::GInetSocketAddress*) (gobj_()));
  return _temp_ret;
}

// guint16 g_inet_socket_address_get_port (GInetSocketAddress* address);
// guint16 g_inet_socket_address_get_port (::GInetSocketAddress* address);
guint16 base::InetSocketAddressBase::get_port () noexcept
{
  typedef guint16 (*call_wrap_t) (::GInetSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_socket_address_get_port;
  auto _temp_ret = call_wrap_v ((::GInetSocketAddress*) (gobj_()));
  return _temp_ret;
}

// guint32 g_inet_socket_address_get_scope_id (GInetSocketAddress* address);
// guint32 g_inet_socket_address_get_scope_id (::GInetSocketAddress* address);
guint32 base::InetSocketAddressBase::get_scope_id () noexcept
{
  typedef guint32 (*call_wrap_t) (::GInetSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_inet_socket_address_get_scope_id;
  auto _temp_ret = call_wrap_v ((::GInetSocketAddress*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inetsocketaddress_extra_def_impl.hpp>)
#include <gio/inetsocketaddress_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inetsocketaddress_extra_impl.hpp>)
#include <gio/inetsocketaddress_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void InetSocketAddressClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GInetSocketAddressClass *methods = (::GInetSocketAddressClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
