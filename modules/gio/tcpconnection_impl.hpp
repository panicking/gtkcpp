// AUTO-GENERATED

#ifndef _GI_GIO_TCPCONNECTION_IMPL_HPP_
#define _GI_GIO_TCPCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_tcp_connection_get_graceful_disconnect (GTcpConnection* connection);
// gboolean g_tcp_connection_get_graceful_disconnect (::GTcpConnection* connection);
bool base::TcpConnectionBase::get_graceful_disconnect () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTcpConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tcp_connection_get_graceful_disconnect;
  auto _temp_ret = call_wrap_v ((::GTcpConnection*) (gobj_()));
  return _temp_ret;
}

// void g_tcp_connection_set_graceful_disconnect (GTcpConnection* connection, gboolean graceful_disconnect);
// void g_tcp_connection_set_graceful_disconnect (::GTcpConnection* connection, gboolean graceful_disconnect);
void base::TcpConnectionBase::set_graceful_disconnect (gboolean graceful_disconnect) noexcept
{
  typedef void (*call_wrap_t) (::GTcpConnection* connection, gboolean graceful_disconnect);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tcp_connection_set_graceful_disconnect;
  auto graceful_disconnect_to_c = graceful_disconnect;
  call_wrap_v ((::GTcpConnection*) (gobj_()), (gboolean) (graceful_disconnect_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tcpconnection_extra_def_impl.hpp>)
#include <gio/tcpconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tcpconnection_extra_impl.hpp>)
#include <gio/tcpconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TcpConnectionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GTcpConnectionClass *methods = (::GTcpConnectionClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
