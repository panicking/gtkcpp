// AUTO-GENERATED

#ifndef _GI_GIO_NATIVESOCKETADDRESS_IMPL_HPP_
#define _GI_GIO_NATIVESOCKETADDRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketAddress* g_native_socket_address_new (gpointer native, gsize len);
// ::GNativeSocketAddress* g_native_socket_address_new (void* native, gsize len);
Gio::NativeSocketAddress base::NativeSocketAddressBase::new_ (void* native, gsize len) noexcept
{
  typedef ::GNativeSocketAddress* (*call_wrap_t) (void* native, gsize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_native_socket_address_new;
  auto len_to_c = len;
  auto native_to_c = native;
  auto _temp_ret = call_wrap_v ((void*) (native_to_c), (gsize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/nativesocketaddress_extra_def_impl.hpp>)
#include <gio/nativesocketaddress_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/nativesocketaddress_extra_impl.hpp>)
#include <gio/nativesocketaddress_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void NativeSocketAddressClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GNativeSocketAddressClass *methods = (::GNativeSocketAddressClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
