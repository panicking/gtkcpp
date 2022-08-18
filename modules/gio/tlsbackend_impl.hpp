// AUTO-GENERATED

#ifndef _GI_GIO_TLSBACKEND_IMPL_HPP_
#define _GI_GIO_TLSBACKEND_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GTlsBackend* g_tls_backend_get_default ();
// ::GTlsBackend* g_tls_backend_get_default ();
Gio::TlsBackend base::TlsBackendBase::get_default () noexcept
{
  typedef ::GTlsBackend* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GType g_tls_backend_get_certificate_type (GTlsBackend* backend);
// GType g_tls_backend_get_certificate_type (::GTlsBackend* backend);
GType base::TlsBackendBase::get_certificate_type () noexcept
{
  typedef GType (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_get_certificate_type;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return _temp_ret;
}

// GType g_tls_backend_get_client_connection_type (GTlsBackend* backend);
// GType g_tls_backend_get_client_connection_type (::GTlsBackend* backend);
GType base::TlsBackendBase::get_client_connection_type () noexcept
{
  typedef GType (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_get_client_connection_type;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return _temp_ret;
}

// GTlsDatabase* g_tls_backend_get_default_database (GTlsBackend* backend);
// ::GTlsDatabase* g_tls_backend_get_default_database (::GTlsBackend* backend);
Gio::TlsDatabase base::TlsBackendBase::get_default_database () noexcept
{
  typedef ::GTlsDatabase* (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_get_default_database;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GType g_tls_backend_get_dtls_client_connection_type (GTlsBackend* backend);
// GType g_tls_backend_get_dtls_client_connection_type (::GTlsBackend* backend);
GType base::TlsBackendBase::get_dtls_client_connection_type () noexcept
{
  typedef GType (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_get_dtls_client_connection_type;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return _temp_ret;
}

// GType g_tls_backend_get_dtls_server_connection_type (GTlsBackend* backend);
// GType g_tls_backend_get_dtls_server_connection_type (::GTlsBackend* backend);
GType base::TlsBackendBase::get_dtls_server_connection_type () noexcept
{
  typedef GType (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_get_dtls_server_connection_type;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return _temp_ret;
}

// GType g_tls_backend_get_file_database_type (GTlsBackend* backend);
// GType g_tls_backend_get_file_database_type (::GTlsBackend* backend);
GType base::TlsBackendBase::get_file_database_type () noexcept
{
  typedef GType (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_get_file_database_type;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return _temp_ret;
}

// GType g_tls_backend_get_server_connection_type (GTlsBackend* backend);
// GType g_tls_backend_get_server_connection_type (::GTlsBackend* backend);
GType base::TlsBackendBase::get_server_connection_type () noexcept
{
  typedef GType (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_get_server_connection_type;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return _temp_ret;
}

// void g_tls_backend_set_default_database (GTlsBackend* backend, GTlsDatabase* database);
// void g_tls_backend_set_default_database (::GTlsBackend* backend, ::GTlsDatabase* database);
void base::TlsBackendBase::set_default_database (Gio::TlsDatabase database) noexcept
{
  typedef void (*call_wrap_t) (::GTlsBackend* backend, ::GTlsDatabase* database);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_set_default_database;
  auto database_to_c = gi::unwrap (database, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsBackend*) (gobj_()), (::GTlsDatabase*) (database_to_c));
}
void base::TlsBackendBase::set_default_database () noexcept
{
  typedef void (*call_wrap_t) (::GTlsBackend* backend, ::GTlsDatabase* database);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_set_default_database;
  auto database_to_c = nullptr;
  call_wrap_v ((::GTlsBackend*) (gobj_()), (::GTlsDatabase*) (database_to_c));
}

// gboolean g_tls_backend_supports_dtls (GTlsBackend* backend);
// gboolean g_tls_backend_supports_dtls (::GTlsBackend* backend);
bool base::TlsBackendBase::supports_dtls () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_supports_dtls;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return _temp_ret;
}

// gboolean g_tls_backend_supports_tls (GTlsBackend* backend);
// gboolean g_tls_backend_supports_tls (::GTlsBackend* backend);
bool base::TlsBackendBase::supports_tls () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_backend_supports_tls;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsbackend_extra_def_impl.hpp>)
#include <gio/tlsbackend_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsbackend_extra_impl.hpp>)
#include <gio/tlsbackend_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsBackendInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GTlsBackendInterface *methods = (::GTlsBackendInterface *) interface_struct;
  (void) methods;

  methods->get_default_database = (decltype (methods->get_default_database)) detail::method_wrapper<self, Gio::TlsDatabase (*) (), gi::transfer_full_t>::wrapper<&self::get_default_database_>;
  methods->supports_dtls = (decltype (methods->supports_dtls)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::supports_dtls_>;
  methods->supports_tls = (decltype (methods->supports_tls)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::supports_tls_>;
}

// GTlsDatabase* TlsBackend::get_default_database (GTlsBackend* backend);
// ::GTlsDatabase* TlsBackend::get_default_database (::GTlsBackend* backend);
Gio::TlsDatabase TlsBackendInterfaceClassImpl::get_default_database_ () noexcept
{
  if (!get_struct_()->get_default_database) return Gio::TlsDatabase{};
  typedef ::GTlsDatabase* (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_default_database;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean TlsBackend::supports_dtls (GTlsBackend* backend);
// gboolean TlsBackend::supports_dtls (::GTlsBackend* backend);
bool TlsBackendInterfaceClassImpl::supports_dtls_ () noexcept
{
  if (!get_struct_()->supports_dtls) return bool{};
  typedef gboolean (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->supports_dtls;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return _temp_ret;
}

// gboolean TlsBackend::supports_tls (GTlsBackend* backend);
// gboolean TlsBackend::supports_tls (::GTlsBackend* backend);
bool TlsBackendInterfaceClassImpl::supports_tls_ () noexcept
{
  if (!get_struct_()->supports_tls) return bool{};
  typedef gboolean (*call_wrap_t) (::GTlsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->supports_tls;
  auto _temp_ret = call_wrap_v ((::GTlsBackend*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
