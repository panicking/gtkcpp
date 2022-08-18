// AUTO-GENERATED

#ifndef _GI_GIO_NETWORKSERVICE_IMPL_HPP_
#define _GI_GIO_NETWORKSERVICE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::SocketConnectable NetworkServiceBase::interface_ (gi::interface_tag<Gio::SocketConnectable>)
{ return gi::wrap ((Gio::SocketConnectable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NetworkServiceBase::operator Gio::SocketConnectable ()
{ return interface_ (gi::interface_tag<Gio::SocketConnectable>()); }

// GSocketConnectable* g_network_service_new (const gchar* service, const gchar* protocol, const gchar* domain);
// ::GNetworkService* g_network_service_new (const char* service, const char* protocol, const char* domain);
Gio::NetworkService base::NetworkServiceBase::new_ (const std::string & service, const std::string & protocol, const std::string & domain) noexcept
{
  typedef ::GNetworkService* (*call_wrap_t) (const char* service, const char* protocol, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) g_network_service_new;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (service_to_c), (const char*) (protocol_to_c), (const char*) (domain_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_network_service_get_domain (GNetworkService* srv);
// const char* g_network_service_get_domain (::GNetworkService* srv);
std::string base::NetworkServiceBase::get_domain () noexcept
{
  typedef const char* (*call_wrap_t) (::GNetworkService* srv);
  call_wrap_t call_wrap_v = (call_wrap_t) g_network_service_get_domain;
  auto _temp_ret = call_wrap_v ((::GNetworkService*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_network_service_get_protocol (GNetworkService* srv);
// const char* g_network_service_get_protocol (::GNetworkService* srv);
std::string base::NetworkServiceBase::get_protocol () noexcept
{
  typedef const char* (*call_wrap_t) (::GNetworkService* srv);
  call_wrap_t call_wrap_v = (call_wrap_t) g_network_service_get_protocol;
  auto _temp_ret = call_wrap_v ((::GNetworkService*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_network_service_get_scheme (GNetworkService* srv);
// const char* g_network_service_get_scheme (::GNetworkService* srv);
std::string base::NetworkServiceBase::get_scheme () noexcept
{
  typedef const char* (*call_wrap_t) (::GNetworkService* srv);
  call_wrap_t call_wrap_v = (call_wrap_t) g_network_service_get_scheme;
  auto _temp_ret = call_wrap_v ((::GNetworkService*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_network_service_get_service (GNetworkService* srv);
// const char* g_network_service_get_service (::GNetworkService* srv);
std::string base::NetworkServiceBase::get_service () noexcept
{
  typedef const char* (*call_wrap_t) (::GNetworkService* srv);
  call_wrap_t call_wrap_v = (call_wrap_t) g_network_service_get_service;
  auto _temp_ret = call_wrap_v ((::GNetworkService*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_network_service_set_scheme (GNetworkService* srv, const gchar* scheme);
// void g_network_service_set_scheme (::GNetworkService* srv, const char* scheme);
void base::NetworkServiceBase::set_scheme (const std::string & scheme) noexcept
{
  typedef void (*call_wrap_t) (::GNetworkService* srv, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) g_network_service_set_scheme;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GNetworkService*) (gobj_()), (const char*) (scheme_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/networkservice_extra_def_impl.hpp>)
#include <gio/networkservice_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/networkservice_extra_impl.hpp>)
#include <gio/networkservice_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void NetworkServiceClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GNetworkServiceClass *methods = (::GNetworkServiceClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
