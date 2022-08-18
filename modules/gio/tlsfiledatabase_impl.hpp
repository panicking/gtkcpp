// AUTO-GENERATED

#ifndef _GI_GIO_TLSFILEDATABASE_IMPL_HPP_
#define _GI_GIO_TLSFILEDATABASE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GTlsDatabase* g_tls_file_database_new (const gchar* anchors, GError ** error);
// ::GTlsFileDatabase* g_tls_file_database_new (const char* anchors, GError ** error);
Gio::TlsFileDatabase base::TlsFileDatabaseBase::new_ (const std::string & anchors)
{
  typedef ::GTlsFileDatabase* (*call_wrap_t) (const char* anchors, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_file_database_new;
  auto anchors_to_c = gi::unwrap (anchors, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (anchors_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::TlsFileDatabase base::TlsFileDatabaseBase::new_ (const std::string & anchors, GLib::Error * _error) noexcept
{
  typedef ::GTlsFileDatabase* (*call_wrap_t) (const char* anchors, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_file_database_new;
  auto anchors_to_c = gi::unwrap (anchors, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (anchors_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsfiledatabase_extra_def_impl.hpp>)
#include <gio/tlsfiledatabase_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsfiledatabase_extra_impl.hpp>)
#include <gio/tlsfiledatabase_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsFileDatabaseInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GTlsFileDatabaseInterface *methods = (::GTlsFileDatabaseInterface *) interface_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
