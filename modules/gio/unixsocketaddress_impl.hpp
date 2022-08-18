// AUTO-GENERATED

#ifndef _GI_GIO_UNIXSOCKETADDRESS_IMPL_HPP_
#define _GI_GIO_UNIXSOCKETADDRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketAddress* g_unix_socket_address_new (const gchar* path);
// ::GUnixSocketAddress* g_unix_socket_address_new (const char* path);
Gio::UnixSocketAddress base::UnixSocketAddressBase::new_ (const std::string & path) noexcept
{
  typedef ::GUnixSocketAddress* (*call_wrap_t) (const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_socket_address_new;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocketAddress* g_unix_socket_address_new_abstract (const gchar* path, gint path_len);
// ::GUnixSocketAddress* g_unix_socket_address_new_abstract (const gchar* path, gint path_len);
// IGNORE; deprecated

// GSocketAddress* g_unix_socket_address_new_with_type (const gchar* path, gint path_len, GUnixSocketAddressType type);
// ::GUnixSocketAddress* g_unix_socket_address_new_with_type (const gchar* path, gint path_len, ::GUnixSocketAddressType type);
Gio::UnixSocketAddress base::UnixSocketAddressBase::new_with_type (gchar * path, gint path_len, Gio::UnixSocketAddressType type) noexcept
{
  typedef ::GUnixSocketAddress* (*call_wrap_t) (const gchar* path, gint path_len, ::GUnixSocketAddressType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_socket_address_new_with_type;
  auto type_to_c = gi::unwrap (type);
  auto path_i = detail::make_list_unwrap_range (path, path_len, false);
  auto path_w = unwrap (path_i, gi::transfer_none, direction_in);
  auto path_to_c = path_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const gchar*) (path_to_c), (gint) (path_w.size()), (::GUnixSocketAddressType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_unix_socket_address_abstract_names_supported ();
// gboolean g_unix_socket_address_abstract_names_supported ();
bool base::UnixSocketAddressBase::abstract_names_supported () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_socket_address_abstract_names_supported;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GUnixSocketAddressType g_unix_socket_address_get_address_type (GUnixSocketAddress* address);
// ::GUnixSocketAddressType g_unix_socket_address_get_address_type (::GUnixSocketAddress* address);
Gio::UnixSocketAddressType base::UnixSocketAddressBase::get_address_type () noexcept
{
  typedef ::GUnixSocketAddressType (*call_wrap_t) (::GUnixSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_socket_address_get_address_type;
  auto _temp_ret = call_wrap_v ((::GUnixSocketAddress*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean g_unix_socket_address_get_is_abstract (GUnixSocketAddress* address);
// gboolean g_unix_socket_address_get_is_abstract (::GUnixSocketAddress* address);
// IGNORE; deprecated

// const char* g_unix_socket_address_get_path (GUnixSocketAddress* address);
// const char* g_unix_socket_address_get_path (::GUnixSocketAddress* address);
std::string base::UnixSocketAddressBase::get_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_socket_address_get_path;
  auto _temp_ret = call_wrap_v ((::GUnixSocketAddress*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gsize g_unix_socket_address_get_path_len (GUnixSocketAddress* address);
// gsize g_unix_socket_address_get_path_len (::GUnixSocketAddress* address);
gsize base::UnixSocketAddressBase::get_path_len () noexcept
{
  typedef gsize (*call_wrap_t) (::GUnixSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_socket_address_get_path_len;
  auto _temp_ret = call_wrap_v ((::GUnixSocketAddress*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixsocketaddress_extra_def_impl.hpp>)
#include <gio/unixsocketaddress_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixsocketaddress_extra_impl.hpp>)
#include <gio/unixsocketaddress_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void UnixSocketAddressClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GUnixSocketAddressClass *methods = (::GUnixSocketAddressClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
