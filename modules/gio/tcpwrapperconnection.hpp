// AUTO-GENERATED

#ifndef _GI_GIO_TCPWRAPPERCONNECTION_HPP_
#define _GI_GIO_TCPWRAPPERCONNECTION_HPP_

#include "tcpconnection.hpp"

namespace gi {

namespace repository {

namespace Gio {

class IOStream;
class Socket;

class TcpWrapperConnection;

namespace base {


#define GI_GIO_TCPWRAPPERCONNECTION_BASE base::TcpWrapperConnectionBase
class TcpWrapperConnectionBase : public Gio::TcpConnection
{
typedef Gio::TcpConnection super_type;
public:
typedef ::GTcpWrapperConnection BaseObjectType;

TcpWrapperConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tcp_wrapper_connection_get_type(); } 

// GSocketConnection* g_tcp_wrapper_connection_new (GIOStream* base_io_stream, GSocket* socket);
// ::GTcpWrapperConnection* g_tcp_wrapper_connection_new (::GIOStream* base_io_stream, ::GSocket* socket);
static GI_INLINE_DECL Gio::TcpWrapperConnection new_ (Gio::IOStream base_io_stream, Gio::Socket socket) noexcept;

// GIOStream* g_tcp_wrapper_connection_get_base_io_stream (GTcpWrapperConnection* conn);
// ::GIOStream* g_tcp_wrapper_connection_get_base_io_stream (::GTcpWrapperConnection* conn);
GI_INLINE_DECL Gio::IOStream get_base_io_stream () noexcept;

gi::property_proxy<Gio::IOStream, base::TcpWrapperConnectionBase> property_base_io_stream()
{ return gi::property_proxy<Gio::IOStream, base::TcpWrapperConnectionBase> (*this, "base-io-stream"); }
const gi::property_proxy<Gio::IOStream, base::TcpWrapperConnectionBase> property_base_io_stream() const
{ return gi::property_proxy<Gio::IOStream, base::TcpWrapperConnectionBase> (*this, "base-io-stream"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tcpwrapperconnection_extra_def.hpp>)
#include <gio/tcpwrapperconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tcpwrapperconnection_extra.hpp>)
#include <gio/tcpwrapperconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TcpWrapperConnection : public GI_GIO_TCPWRAPPERCONNECTION_BASE
{ typedef GI_GIO_TCPWRAPPERCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTcpWrapperConnection>
{ typedef Gio::TcpWrapperConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TcpWrapperConnectionClassDef
{
typedef TcpWrapperConnectionClassDef self;
public:
typedef Gio::TcpWrapperConnection instance_type;
typedef ::GTcpWrapperConnectionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TcpWrapperConnectionClass: public detail::ClassTemplate<Gio::impl::internal::TcpWrapperConnectionClassDef, Gio::impl::internal::TcpConnectionClass>
{
typedef TcpWrapperConnectionClass self;
typedef detail::ClassTemplate<Gio::impl::internal::TcpWrapperConnectionClassDef, Gio::impl::internal::TcpConnectionClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using TcpWrapperConnectionImpl = detail::ObjectImpl<TcpWrapperConnection, internal::TcpWrapperConnectionClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
