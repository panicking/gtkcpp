// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETCONNECTABLE_IMPL_HPP_
#define _GI_GIO_SOCKETCONNECTABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketAddressEnumerator* g_socket_connectable_enumerate (GSocketConnectable* connectable);
// ::GSocketAddressEnumerator* g_socket_connectable_enumerate (::GSocketConnectable* connectable);
Gio::SocketAddressEnumerator base::SocketConnectableBase::enumerate () noexcept
{
  typedef ::GSocketAddressEnumerator* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connectable_enumerate;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocketAddressEnumerator* g_socket_connectable_proxy_enumerate (GSocketConnectable* connectable);
// ::GSocketAddressEnumerator* g_socket_connectable_proxy_enumerate (::GSocketConnectable* connectable);
Gio::SocketAddressEnumerator base::SocketConnectableBase::proxy_enumerate () noexcept
{
  typedef ::GSocketAddressEnumerator* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connectable_proxy_enumerate;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_socket_connectable_to_string (GSocketConnectable* connectable);
// char* g_socket_connectable_to_string (::GSocketConnectable* connectable);
std::string base::SocketConnectableBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connectable_to_string;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketconnectable_extra_def_impl.hpp>)
#include <gio/socketconnectable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketconnectable_extra_impl.hpp>)
#include <gio/socketconnectable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketConnectableIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GSocketConnectableIface *methods = (::GSocketConnectableIface *) interface_struct;
  (void) methods;

  methods->enumerate = (decltype (methods->enumerate)) detail::method_wrapper<self, Gio::SocketAddressEnumerator (*) (), gi::transfer_full_t>::wrapper<&self::enumerate_>;
  methods->proxy_enumerate = (decltype (methods->proxy_enumerate)) detail::method_wrapper<self, Gio::SocketAddressEnumerator (*) (), gi::transfer_full_t>::wrapper<&self::proxy_enumerate_>;
  methods->to_string = (decltype (methods->to_string)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::to_string_>;
}

// GSocketAddressEnumerator* SocketConnectable::enumerate (GSocketConnectable* connectable);
// ::GSocketAddressEnumerator* SocketConnectable::enumerate (::GSocketConnectable* connectable);
Gio::SocketAddressEnumerator SocketConnectableIfaceClassImpl::enumerate_ () noexcept
{
  if (!get_struct_()->enumerate) return Gio::SocketAddressEnumerator{};
  typedef ::GSocketAddressEnumerator* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->enumerate;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocketAddressEnumerator* SocketConnectable::proxy_enumerate (GSocketConnectable* connectable);
// ::GSocketAddressEnumerator* SocketConnectable::proxy_enumerate (::GSocketConnectable* connectable);
Gio::SocketAddressEnumerator SocketConnectableIfaceClassImpl::proxy_enumerate_ () noexcept
{
  if (!get_struct_()->proxy_enumerate) return Gio::SocketAddressEnumerator{};
  typedef ::GSocketAddressEnumerator* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->proxy_enumerate;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* SocketConnectable::to_string (GSocketConnectable* connectable);
// char* SocketConnectable::to_string (::GSocketConnectable* connectable);
std::string SocketConnectableIfaceClassImpl::to_string_ () noexcept
{
  if (!get_struct_()->to_string) return std::string{};
  typedef char* (*call_wrap_t) (::GSocketConnectable* connectable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->to_string;
  auto _temp_ret = call_wrap_v ((::GSocketConnectable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
