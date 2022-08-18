// AUTO-GENERATED

#ifndef _GI_GIO_TCPWRAPPERCONNECTION_IMPL_HPP_
#define _GI_GIO_TCPWRAPPERCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketConnection* g_tcp_wrapper_connection_new (GIOStream* base_io_stream, GSocket* socket);
// ::GTcpWrapperConnection* g_tcp_wrapper_connection_new (::GIOStream* base_io_stream, ::GSocket* socket);
Gio::TcpWrapperConnection base::TcpWrapperConnectionBase::new_ (Gio::IOStream base_io_stream, Gio::Socket socket) noexcept
{
  typedef ::GTcpWrapperConnection* (*call_wrap_t) (::GIOStream* base_io_stream, ::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tcp_wrapper_connection_new;
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none, gi::direction_in);
  auto base_io_stream_to_c = gi::unwrap (base_io_stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIOStream*) (base_io_stream_to_c), (::GSocket*) (socket_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIOStream* g_tcp_wrapper_connection_get_base_io_stream (GTcpWrapperConnection* conn);
// ::GIOStream* g_tcp_wrapper_connection_get_base_io_stream (::GTcpWrapperConnection* conn);
Gio::IOStream base::TcpWrapperConnectionBase::get_base_io_stream () noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GTcpWrapperConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tcp_wrapper_connection_get_base_io_stream;
  auto _temp_ret = call_wrap_v ((::GTcpWrapperConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tcpwrapperconnection_extra_def_impl.hpp>)
#include <gio/tcpwrapperconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tcpwrapperconnection_extra_impl.hpp>)
#include <gio/tcpwrapperconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TcpWrapperConnectionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GTcpWrapperConnectionClass *methods = (::GTcpWrapperConnectionClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
