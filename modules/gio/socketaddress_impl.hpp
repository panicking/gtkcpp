// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETADDRESS_IMPL_HPP_
#define _GI_GIO_SOCKETADDRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::SocketConnectable SocketAddressBase::interface_ (gi::interface_tag<Gio::SocketConnectable>)
{ return gi::wrap ((Gio::SocketConnectable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SocketAddressBase::operator Gio::SocketConnectable ()
{ return interface_ (gi::interface_tag<Gio::SocketConnectable>()); }

// GSocketAddress* g_socket_address_new_from_native (gpointer native, gsize len);
// ::GSocketAddress* g_socket_address_new_from_native (void* native, gsize len);
Gio::SocketAddress base::SocketAddressBase::new_from_native (void* native, gsize len) noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (void* native, gsize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_new_from_native;
  auto len_to_c = len;
  auto native_to_c = native;
  auto _temp_ret = call_wrap_v ((void*) (native_to_c), (gsize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocketFamily g_socket_address_get_family (GSocketAddress* address);
// ::GSocketFamily g_socket_address_get_family (::GSocketAddress* address);
Gio::SocketFamily base::SocketAddressBase::get_family () noexcept
{
  typedef ::GSocketFamily (*call_wrap_t) (::GSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_get_family;
  auto _temp_ret = call_wrap_v ((::GSocketAddress*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gssize g_socket_address_get_native_size (GSocketAddress* address);
// gssize g_socket_address_get_native_size (::GSocketAddress* address);
gssize base::SocketAddressBase::get_native_size () noexcept
{
  typedef gssize (*call_wrap_t) (::GSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_get_native_size;
  auto _temp_ret = call_wrap_v ((::GSocketAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean g_socket_address_to_native (GSocketAddress* address, gpointer dest, gsize destlen, GError ** error);
// gboolean g_socket_address_to_native (::GSocketAddress* address, void* dest, gsize destlen, GError ** error);
bool base::SocketAddressBase::to_native (void* dest, gsize destlen)
{
  typedef gboolean (*call_wrap_t) (::GSocketAddress* address, void* dest, gsize destlen, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_to_native;
  auto destlen_to_c = destlen;
  auto dest_to_c = dest;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketAddress*) (gobj_()), (void*) (dest_to_c), (gsize) (destlen_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketAddressBase::to_native (void* dest, gsize destlen, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketAddress* address, void* dest, gsize destlen, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_address_to_native;
  auto destlen_to_c = destlen;
  auto dest_to_c = dest;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketAddress*) (gobj_()), (void*) (dest_to_c), (gsize) (destlen_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketaddress_extra_def_impl.hpp>)
#include <gio/socketaddress_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketaddress_extra_impl.hpp>)
#include <gio/socketaddress_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketAddressClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GSocketAddressClass *methods = (::GSocketAddressClass *) class_struct;
  (void) methods;

  methods->get_family = (decltype (methods->get_family)) detail::method_wrapper<self, Gio::SocketFamily (*) (), gi::transfer_none_t>::wrapper<&self::get_family_>;
  methods->get_native_size = (decltype (methods->get_native_size)) detail::method_wrapper<self, gssize (*) (), gi::transfer_none_t>::wrapper<&self::get_native_size_>;
}

// GSocketFamily SocketAddress::get_family (GSocketAddress* address);
// ::GSocketFamily SocketAddress::get_family (::GSocketAddress* address);
Gio::SocketFamily SocketAddressClass::get_family_ () noexcept
{
  if (!get_struct_()->get_family) return Gio::SocketFamily{};
  typedef ::GSocketFamily (*call_wrap_t) (::GSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_family;
  auto _temp_ret = call_wrap_v ((::GSocketAddress*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gssize SocketAddress::get_native_size (GSocketAddress* address);
// gssize SocketAddress::get_native_size (::GSocketAddress* address);
gssize SocketAddressClass::get_native_size_ () noexcept
{
  if (!get_struct_()->get_native_size) return gssize{};
  typedef gssize (*call_wrap_t) (::GSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_native_size;
  auto _temp_ret = call_wrap_v ((::GSocketAddress*) (gobj_()));
  return _temp_ret;
}

// gboolean SocketAddress::to_native (GSocketAddress* address, gpointer dest, gsize destlen, GError ** error);
// gboolean SocketAddress::to_native (::GSocketAddress* address, void* dest, gsize destlen, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
