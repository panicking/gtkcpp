// AUTO-GENERATED

#ifndef _GI_GIO_PROXYADDRESS_IMPL_HPP_
#define _GI_GIO_PROXYADDRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketAddress* g_proxy_address_new (GInetAddress* inetaddr, guint16 port, const gchar* protocol, const gchar* dest_hostname, guint16 dest_port, const gchar* username, const gchar* password);
// ::GProxyAddress* g_proxy_address_new (::GInetAddress* inetaddr, guint16 port, const char* protocol, const char* dest_hostname, guint16 dest_port, const char* username, const char* password);
Gio::ProxyAddress base::ProxyAddressBase::new_ (Gio::InetAddress inetaddr, guint16 port, const std::string & protocol, const std::string & dest_hostname, guint16 dest_port, const std::string & username, const std::string & password) noexcept
{
  typedef ::GProxyAddress* (*call_wrap_t) (::GInetAddress* inetaddr, guint16 port, const char* protocol, const char* dest_hostname, guint16 dest_port, const char* username, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_address_new;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  auto username_to_c = gi::unwrap (username, gi::transfer_none, gi::direction_in);
  auto dest_port_to_c = dest_port;
  auto dest_hostname_to_c = gi::unwrap (dest_hostname, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto inetaddr_to_c = gi::unwrap (inetaddr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (inetaddr_to_c), (guint16) (port_to_c), (const char*) (protocol_to_c), (const char*) (dest_hostname_to_c), (guint16) (dest_port_to_c), (const char*) (username_to_c), (const char*) (password_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::ProxyAddress base::ProxyAddressBase::new_ (Gio::InetAddress inetaddr, guint16 port, const std::string & protocol, const std::string & dest_hostname, guint16 dest_port) noexcept
{
  typedef ::GProxyAddress* (*call_wrap_t) (::GInetAddress* inetaddr, guint16 port, const char* protocol, const char* dest_hostname, guint16 dest_port, const char* username, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_address_new;
  auto password_to_c = nullptr;
  auto username_to_c = nullptr;
  auto dest_port_to_c = dest_port;
  auto dest_hostname_to_c = gi::unwrap (dest_hostname, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto inetaddr_to_c = gi::unwrap (inetaddr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GInetAddress*) (inetaddr_to_c), (guint16) (port_to_c), (const char*) (protocol_to_c), (const char*) (dest_hostname_to_c), (guint16) (dest_port_to_c), (const char*) (username_to_c), (const char*) (password_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_proxy_address_get_destination_hostname (GProxyAddress* proxy);
// const char* g_proxy_address_get_destination_hostname (::GProxyAddress* proxy);
std::string base::ProxyAddressBase::get_destination_hostname () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_address_get_destination_hostname;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint16 g_proxy_address_get_destination_port (GProxyAddress* proxy);
// guint16 g_proxy_address_get_destination_port (::GProxyAddress* proxy);
guint16 base::ProxyAddressBase::get_destination_port () noexcept
{
  typedef guint16 (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_address_get_destination_port;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_proxy_address_get_destination_protocol (GProxyAddress* proxy);
// const char* g_proxy_address_get_destination_protocol (::GProxyAddress* proxy);
std::string base::ProxyAddressBase::get_destination_protocol () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_address_get_destination_protocol;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_proxy_address_get_password (GProxyAddress* proxy);
// const char* g_proxy_address_get_password (::GProxyAddress* proxy);
std::string base::ProxyAddressBase::get_password () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_address_get_password;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_proxy_address_get_protocol (GProxyAddress* proxy);
// const char* g_proxy_address_get_protocol (::GProxyAddress* proxy);
std::string base::ProxyAddressBase::get_protocol () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_address_get_protocol;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_proxy_address_get_uri (GProxyAddress* proxy);
// const char* g_proxy_address_get_uri (::GProxyAddress* proxy);
std::string base::ProxyAddressBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_address_get_uri;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_proxy_address_get_username (GProxyAddress* proxy);
// const char* g_proxy_address_get_username (::GProxyAddress* proxy);
std::string base::ProxyAddressBase::get_username () noexcept
{
  typedef const char* (*call_wrap_t) (::GProxyAddress* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_proxy_address_get_username;
  auto _temp_ret = call_wrap_v ((::GProxyAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxyaddress_extra_def_impl.hpp>)
#include <gio/proxyaddress_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxyaddress_extra_impl.hpp>)
#include <gio/proxyaddress_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ProxyAddressClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GProxyAddressClass *methods = (::GProxyAddressClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
