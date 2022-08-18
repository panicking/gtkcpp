// AUTO-GENERATED

#ifndef _GI_GIO_TLSPASSWORD_IMPL_HPP_
#define _GI_GIO_TLSPASSWORD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GTlsPassword* g_tls_password_new (GTlsPasswordFlags flags, const gchar* description);
// ::GTlsPassword* g_tls_password_new (::GTlsPasswordFlags flags, const char* description);
Gio::TlsPassword base::TlsPasswordBase::new_ (Gio::TlsPasswordFlags flags, const std::string & description) noexcept
{
  typedef ::GTlsPassword* (*call_wrap_t) (::GTlsPasswordFlags flags, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_password_new;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GTlsPasswordFlags) (flags_to_c), (const char*) (description_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_tls_password_get_description (GTlsPassword* password);
// const char* g_tls_password_get_description (::GTlsPassword* password);
std::string base::TlsPasswordBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GTlsPassword* password);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_password_get_description;
  auto _temp_ret = call_wrap_v ((::GTlsPassword*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GTlsPasswordFlags g_tls_password_get_flags (GTlsPassword* password);
// ::GTlsPasswordFlags g_tls_password_get_flags (::GTlsPassword* password);
Gio::TlsPasswordFlags base::TlsPasswordBase::get_flags () noexcept
{
  typedef ::GTlsPasswordFlags (*call_wrap_t) (::GTlsPassword* password);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_password_get_flags;
  auto _temp_ret = call_wrap_v ((::GTlsPassword*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const guchar* g_tls_password_get_value (GTlsPassword* password, gsize* length);
// const guint8* g_tls_password_get_value (::GTlsPassword* password, gsize* length);
std::vector<guint8> base::TlsPasswordBase::get_value () noexcept
{
  typedef const guint8* (*call_wrap_t) (::GTlsPassword* password, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_password_get_value;
  gsize length;
  std::vector<guint8> _temp_ret;
  auto _ret_o = call_wrap_v ((::GTlsPassword*) (gobj_()), (gsize*) (&length));
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_none, length, _temp_ret.data());
  return _temp_ret;
}

// const gchar* g_tls_password_get_warning (GTlsPassword* password);
// const char* g_tls_password_get_warning (::GTlsPassword* password);
std::string base::TlsPasswordBase::get_warning () noexcept
{
  typedef const char* (*call_wrap_t) (::GTlsPassword* password);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_password_get_warning;
  auto _temp_ret = call_wrap_v ((::GTlsPassword*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_tls_password_set_description (GTlsPassword* password, const gchar* description);
// void g_tls_password_set_description (::GTlsPassword* password, const char* description);
void base::TlsPasswordBase::set_description (const std::string & description) noexcept
{
  typedef void (*call_wrap_t) (::GTlsPassword* password, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_password_set_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsPassword*) (gobj_()), (const char*) (description_to_c));
}

// void g_tls_password_set_flags (GTlsPassword* password, GTlsPasswordFlags flags);
// void g_tls_password_set_flags (::GTlsPassword* password, ::GTlsPasswordFlags flags);
void base::TlsPasswordBase::set_flags (Gio::TlsPasswordFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GTlsPassword* password, ::GTlsPasswordFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_password_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GTlsPassword*) (gobj_()), (::GTlsPasswordFlags) (flags_to_c));
}

// void g_tls_password_set_value (GTlsPassword* password, const guchar* value, gssize length);
// void g_tls_password_set_value (::GTlsPassword* password, const guint8* value, gssize length);
void base::TlsPasswordBase::set_value (guint8 * value, gssize length) noexcept
{
  typedef void (*call_wrap_t) (::GTlsPassword* password, const guint8* value, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_password_set_value;
  auto value_i = detail::make_list_unwrap_range (value, length, false);
  auto value_w = unwrap (value_i, gi::transfer_none, direction_in);
  auto value_to_c = value_w.gobj_(false);
  call_wrap_v ((::GTlsPassword*) (gobj_()), (const guint8*) (value_to_c), (gssize) (value_w.size()));
}

// void g_tls_password_set_value_full (GTlsPassword* password, guchar* value, gssize length, GDestroyNotify destroy);
// void g_tls_password_set_value_full (::GTlsPassword* password, guint8* value, gssize length, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; callback misses closure info

// void g_tls_password_set_warning (GTlsPassword* password, const gchar* warning);
// void g_tls_password_set_warning (::GTlsPassword* password, const char* warning);
void base::TlsPasswordBase::set_warning (const std::string & warning) noexcept
{
  typedef void (*call_wrap_t) (::GTlsPassword* password, const char* warning);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_password_set_warning;
  auto warning_to_c = gi::unwrap (warning, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsPassword*) (gobj_()), (const char*) (warning_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlspassword_extra_def_impl.hpp>)
#include <gio/tlspassword_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlspassword_extra_impl.hpp>)
#include <gio/tlspassword_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsPasswordClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GTlsPasswordClass *methods = (::GTlsPasswordClass *) class_struct;
  (void) methods;

}

// const gchar* TlsPassword::get_default_warning (GTlsPassword* password);
// const char* TlsPassword::get_default_warning (::GTlsPassword* password);
// SKIP; invalid callback return transfer none

// const guchar* TlsPassword::get_value (GTlsPassword* password, gsize* length);
// const guint8* TlsPassword::get_value (::GTlsPassword* password, gsize* length);
// SKIP; container return not supported, virtual-method out parameter not supported

// void TlsPassword::set_value (GTlsPassword* password, guchar* value, gssize length, GDestroyNotify destroy);
// void TlsPassword::set_value (::GTlsPassword* password, guint8* value, gssize length, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method container parameter not supported, virtual-method callback parameter not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
