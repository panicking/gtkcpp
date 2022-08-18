// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETCONNECTION_HPP_
#define _GI_GIO_SOCKETCONNECTION_HPP_

#include "iostream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class Socket;
class SocketAddress;

class SocketConnection;

namespace base {


#define GI_GIO_SOCKETCONNECTION_BASE base::SocketConnectionBase
class SocketConnectionBase : public Gio::IOStream
{
typedef Gio::IOStream super_type;
public:
typedef ::GSocketConnection BaseObjectType;

SocketConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_socket_connection_get_type(); } 

// GType g_socket_connection_factory_lookup_type (GSocketFamily family, GSocketType type, gint protocol_id);
// GType g_socket_connection_factory_lookup_type (::GSocketFamily family, ::GSocketType type, gint protocol_id);
static GI_INLINE_DECL GType factory_lookup_type (Gio::SocketFamily family, Gio::SocketType type, gint protocol_id) noexcept;

// void g_socket_connection_factory_register_type (GType g_type, GSocketFamily family, GSocketType type, gint protocol);
// void g_socket_connection_factory_register_type (GType g_type, ::GSocketFamily family, ::GSocketType type, gint protocol);
static GI_INLINE_DECL void factory_register_type (GType g_type, Gio::SocketFamily family, Gio::SocketType type, gint protocol) noexcept;

// gboolean g_socket_connection_connect (GSocketConnection* connection, GSocketAddress* address, GCancellable* cancellable, GError ** error);
// gboolean g_socket_connection_connect (::GSocketConnection* connection, ::GSocketAddress* address, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool connect (Gio::SocketAddress address, Gio::Cancellable cancellable);
GI_INLINE_DECL bool connect (Gio::SocketAddress address);
GI_INLINE_DECL bool connect (Gio::SocketAddress address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool connect (Gio::SocketAddress address, GLib::Error * _error) noexcept;

// void g_socket_connection_connect_async (GSocketConnection* connection, GSocketAddress* address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_connection_connect_async (::GSocketConnection* connection, ::GSocketAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void connect_async (Gio::SocketAddress address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void connect_async (Gio::SocketAddress address, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_socket_connection_connect_finish (GSocketConnection* connection, GAsyncResult* result, GError ** error);
// gboolean g_socket_connection_connect_finish (::GSocketConnection* connection, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool connect_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GSocketAddress* g_socket_connection_get_local_address (GSocketConnection* connection, GError ** error);
// ::GSocketAddress* g_socket_connection_get_local_address (::GSocketConnection* connection, GError ** error);
GI_INLINE_DECL Gio::SocketAddress get_local_address ();
GI_INLINE_DECL Gio::SocketAddress get_local_address (GLib::Error * _error) noexcept;

// GSocketAddress* g_socket_connection_get_remote_address (GSocketConnection* connection, GError ** error);
// ::GSocketAddress* g_socket_connection_get_remote_address (::GSocketConnection* connection, GError ** error);
GI_INLINE_DECL Gio::SocketAddress get_remote_address ();
GI_INLINE_DECL Gio::SocketAddress get_remote_address (GLib::Error * _error) noexcept;

// GSocket* g_socket_connection_get_socket (GSocketConnection* connection);
// ::GSocket* g_socket_connection_get_socket (::GSocketConnection* connection);
GI_INLINE_DECL Gio::Socket get_socket () noexcept;

// gboolean g_socket_connection_is_connected (GSocketConnection* connection);
// gboolean g_socket_connection_is_connected (::GSocketConnection* connection);
GI_INLINE_DECL bool is_connected () noexcept;

gi::property_proxy<Gio::Socket, base::SocketConnectionBase> property_socket()
{ return gi::property_proxy<Gio::Socket, base::SocketConnectionBase> (*this, "socket"); }
const gi::property_proxy<Gio::Socket, base::SocketConnectionBase> property_socket() const
{ return gi::property_proxy<Gio::Socket, base::SocketConnectionBase> (*this, "socket"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketconnection_extra_def.hpp>)
#include <gio/socketconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketconnection_extra.hpp>)
#include <gio/socketconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SocketConnection : public GI_GIO_SOCKETCONNECTION_BASE
{ typedef GI_GIO_SOCKETCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSocketConnection>
{ typedef Gio::SocketConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SocketConnectionClassDef
{
typedef SocketConnectionClassDef self;
public:
typedef Gio::SocketConnection instance_type;
typedef ::GSocketConnectionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SocketConnectionClass: public detail::ClassTemplate<Gio::impl::internal::SocketConnectionClassDef, Gio::impl::internal::IOStreamClass>
{
typedef SocketConnectionClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SocketConnectionClassDef, Gio::impl::internal::IOStreamClass> super;

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

using SocketConnectionImpl = detail::ObjectImpl<SocketConnection, internal::SocketConnectionClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
