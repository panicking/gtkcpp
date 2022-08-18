// AUTO-GENERATED

#ifndef _GI_GIO_DTLSCLIENTCONNECTION_IMPL_HPP_
#define _GI_GIO_DTLSCLIENTCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDatagramBased* g_dtls_client_connection_new (GDatagramBased* base_socket, GSocketConnectable* server_identity, GError ** error);
// ::GDtlsClientConnection* g_dtls_client_connection_new (::GDatagramBased* base_socket, ::GSocketConnectable* server_identity, GError ** error);
Gio::DtlsClientConnection base::DtlsClientConnectionBase::new_ (Gio::DatagramBased base_socket, Gio::SocketConnectable server_identity)
{
  typedef ::GDtlsClientConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_client_connection_new;
  auto server_identity_to_c = gi::unwrap (server_identity, gi::transfer_none, gi::direction_in);
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GSocketConnectable*) (server_identity_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DtlsClientConnection base::DtlsClientConnectionBase::new_ (Gio::DatagramBased base_socket)
{
  typedef ::GDtlsClientConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_client_connection_new;
  auto server_identity_to_c = nullptr;
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GSocketConnectable*) (server_identity_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DtlsClientConnection base::DtlsClientConnectionBase::new_ (Gio::DatagramBased base_socket, Gio::SocketConnectable server_identity, GLib::Error * _error) noexcept
{
  typedef ::GDtlsClientConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_client_connection_new;
  auto server_identity_to_c = gi::unwrap (server_identity, gi::transfer_none, gi::direction_in);
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GSocketConnectable*) (server_identity_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DtlsClientConnection base::DtlsClientConnectionBase::new_ (Gio::DatagramBased base_socket, GLib::Error * _error) noexcept
{
  typedef ::GDtlsClientConnection* (*call_wrap_t) (::GDatagramBased* base_socket, ::GSocketConnectable* server_identity, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_client_connection_new;
  auto server_identity_to_c = nullptr;
  auto base_socket_to_c = gi::unwrap (base_socket, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDatagramBased*) (base_socket_to_c), (::GSocketConnectable*) (server_identity_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

//  g_dtls_client_connection_get_accepted_cas (GDtlsClientConnection* conn);
//  g_dtls_client_connection_get_accepted_cas (::GDtlsClientConnection* conn);
// SKIP; inconsistent list element info

// GSocketConnectable* g_dtls_client_connection_get_server_identity (GDtlsClientConnection* conn);
// ::GSocketConnectable* g_dtls_client_connection_get_server_identity (::GDtlsClientConnection* conn);
Gio::SocketConnectable base::DtlsClientConnectionBase::get_server_identity () noexcept
{
  typedef ::GSocketConnectable* (*call_wrap_t) (::GDtlsClientConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_client_connection_get_server_identity;
  auto _temp_ret = call_wrap_v ((::GDtlsClientConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GTlsCertificateFlags g_dtls_client_connection_get_validation_flags (GDtlsClientConnection* conn);
// ::GTlsCertificateFlags g_dtls_client_connection_get_validation_flags (::GDtlsClientConnection* conn);
Gio::TlsCertificateFlags base::DtlsClientConnectionBase::get_validation_flags () noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GDtlsClientConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_client_connection_get_validation_flags;
  auto _temp_ret = call_wrap_v ((::GDtlsClientConnection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void g_dtls_client_connection_set_server_identity (GDtlsClientConnection* conn, GSocketConnectable* identity);
// void g_dtls_client_connection_set_server_identity (::GDtlsClientConnection* conn, ::GSocketConnectable* identity);
void base::DtlsClientConnectionBase::set_server_identity (Gio::SocketConnectable identity) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsClientConnection* conn, ::GSocketConnectable* identity);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_client_connection_set_server_identity;
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDtlsClientConnection*) (gobj_()), (::GSocketConnectable*) (identity_to_c));
}

// void g_dtls_client_connection_set_validation_flags (GDtlsClientConnection* conn, GTlsCertificateFlags flags);
// void g_dtls_client_connection_set_validation_flags (::GDtlsClientConnection* conn, ::GTlsCertificateFlags flags);
void base::DtlsClientConnectionBase::set_validation_flags (Gio::TlsCertificateFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsClientConnection* conn, ::GTlsCertificateFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_client_connection_set_validation_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDtlsClientConnection*) (gobj_()), (::GTlsCertificateFlags) (flags_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dtlsclientconnection_extra_def_impl.hpp>)
#include <gio/dtlsclientconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dtlsclientconnection_extra_impl.hpp>)
#include <gio/dtlsclientconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DtlsClientConnectionInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GDtlsClientConnectionInterface *methods = (::GDtlsClientConnectionInterface *) interface_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
