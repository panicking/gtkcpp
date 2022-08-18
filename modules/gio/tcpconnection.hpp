// AUTO-GENERATED

#ifndef _GI_GIO_TCPCONNECTION_HPP_
#define _GI_GIO_TCPCONNECTION_HPP_

#include "socketconnection.hpp"

namespace gi {

namespace repository {

namespace Gio {


class TcpConnection;

namespace base {


#define GI_GIO_TCPCONNECTION_BASE base::TcpConnectionBase
class TcpConnectionBase : public Gio::SocketConnection
{
typedef Gio::SocketConnection super_type;
public:
typedef ::GTcpConnection BaseObjectType;

TcpConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tcp_connection_get_type(); } 

// gboolean g_tcp_connection_get_graceful_disconnect (GTcpConnection* connection);
// gboolean g_tcp_connection_get_graceful_disconnect (::GTcpConnection* connection);
GI_INLINE_DECL bool get_graceful_disconnect () noexcept;

// void g_tcp_connection_set_graceful_disconnect (GTcpConnection* connection, gboolean graceful_disconnect);
// void g_tcp_connection_set_graceful_disconnect (::GTcpConnection* connection, gboolean graceful_disconnect);
GI_INLINE_DECL void set_graceful_disconnect (gboolean graceful_disconnect) noexcept;

gi::property_proxy<bool, base::TcpConnectionBase> property_graceful_disconnect()
{ return gi::property_proxy<bool, base::TcpConnectionBase> (*this, "graceful-disconnect"); }
const gi::property_proxy<bool, base::TcpConnectionBase> property_graceful_disconnect() const
{ return gi::property_proxy<bool, base::TcpConnectionBase> (*this, "graceful-disconnect"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tcpconnection_extra_def.hpp>)
#include <gio/tcpconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tcpconnection_extra.hpp>)
#include <gio/tcpconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TcpConnection : public GI_GIO_TCPCONNECTION_BASE
{ typedef GI_GIO_TCPCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTcpConnection>
{ typedef Gio::TcpConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TcpConnectionClassDef
{
typedef TcpConnectionClassDef self;
public:
typedef Gio::TcpConnection instance_type;
typedef ::GTcpConnectionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TcpConnectionClass: public detail::ClassTemplate<Gio::impl::internal::TcpConnectionClassDef, Gio::impl::internal::SocketConnectionClass>
{
typedef TcpConnectionClass self;
typedef detail::ClassTemplate<Gio::impl::internal::TcpConnectionClassDef, Gio::impl::internal::SocketConnectionClass> super;

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

using TcpConnectionImpl = detail::ObjectImpl<TcpConnection, internal::TcpConnectionClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
