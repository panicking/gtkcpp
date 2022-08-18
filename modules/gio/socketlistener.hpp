// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETLISTENER_HPP_
#define _GI_GIO_SOCKETLISTENER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class Socket;
class SocketAddress;
class SocketConnection;

class SocketListener;

namespace base {


#define GI_GIO_SOCKETLISTENER_BASE base::SocketListenerBase
class SocketListenerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSocketListener BaseObjectType;

SocketListenerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_socket_listener_get_type(); } 

// GSocketListener* g_socket_listener_new ();
// ::GSocketListener* g_socket_listener_new ();
static GI_INLINE_DECL Gio::SocketListener new_ () noexcept;

// GSocketConnection* g_socket_listener_accept (GSocketListener* listener, GObject** source_object, GCancellable* cancellable, GError ** error);
// ::GSocketConnection* g_socket_listener_accept (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::SocketConnection accept (GObject::Object * source_object, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::SocketConnection accept (GObject::Object * source_object = nullptr);
GI_INLINE_DECL Gio::SocketConnection accept (GObject::Object * source_object, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::SocketConnection accept (GObject::Object * source_object, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::SocketConnection, GObject::Object> accept (Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<Gio::SocketConnection, GObject::Object> accept ();
GI_INLINE_DECL std::tuple<Gio::SocketConnection, GObject::Object> accept (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::SocketConnection, GObject::Object> accept (GLib::Error * _error) noexcept;

// void g_socket_listener_accept_async (GSocketListener* listener, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_listener_accept_async (::GSocketListener* listener, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void accept_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void accept_async (Gio::AsyncReadyCallback callback) noexcept;

// GSocketConnection* g_socket_listener_accept_finish (GSocketListener* listener, GAsyncResult* result, GObject** source_object, GError ** error);
// ::GSocketConnection* g_socket_listener_accept_finish (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
GI_INLINE_DECL Gio::SocketConnection accept_finish (Gio::AsyncResult result, GObject::Object * source_object = nullptr);
GI_INLINE_DECL Gio::SocketConnection accept_finish (Gio::AsyncResult result, GObject::Object * source_object, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::SocketConnection, GObject::Object> accept_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<Gio::SocketConnection, GObject::Object> accept_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GSocket* g_socket_listener_accept_socket (GSocketListener* listener, GObject** source_object, GCancellable* cancellable, GError ** error);
// ::GSocket* g_socket_listener_accept_socket (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::Socket accept_socket (GObject::Object * source_object, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::Socket accept_socket (GObject::Object * source_object = nullptr);
GI_INLINE_DECL Gio::Socket accept_socket (GObject::Object * source_object, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::Socket accept_socket (GObject::Object * source_object, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::Socket, GObject::Object> accept_socket (Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<Gio::Socket, GObject::Object> accept_socket ();
GI_INLINE_DECL std::tuple<Gio::Socket, GObject::Object> accept_socket (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::Socket, GObject::Object> accept_socket (GLib::Error * _error) noexcept;

// void g_socket_listener_accept_socket_async (GSocketListener* listener, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_listener_accept_socket_async (::GSocketListener* listener, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void accept_socket_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void accept_socket_async (Gio::AsyncReadyCallback callback) noexcept;

// GSocket* g_socket_listener_accept_socket_finish (GSocketListener* listener, GAsyncResult* result, GObject** source_object, GError ** error);
// ::GSocket* g_socket_listener_accept_socket_finish (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
GI_INLINE_DECL Gio::Socket accept_socket_finish (Gio::AsyncResult result, GObject::Object * source_object = nullptr);
GI_INLINE_DECL Gio::Socket accept_socket_finish (Gio::AsyncResult result, GObject::Object * source_object, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::Socket, GObject::Object> accept_socket_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<Gio::Socket, GObject::Object> accept_socket_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_socket_listener_add_address (GSocketListener* listener, GSocketAddress* address, GSocketType type, GSocketProtocol protocol, GObject* source_object, GSocketAddress** effective_address, GError ** error);
// gboolean g_socket_listener_add_address (::GSocketListener* listener, ::GSocketAddress* address, ::GSocketType type, ::GSocketProtocol protocol, ::GObject* source_object, ::GSocketAddress** effective_address, GError ** error);
GI_INLINE_DECL bool add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, GObject::Object source_object, Gio::SocketAddress * effective_address = nullptr);
GI_INLINE_DECL bool add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, Gio::SocketAddress * effective_address = nullptr);
GI_INLINE_DECL bool add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, GObject::Object source_object, Gio::SocketAddress * effective_address, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, Gio::SocketAddress * effective_address, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::SocketAddress> add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, GObject::Object source_object);
GI_INLINE_DECL std::tuple<bool, Gio::SocketAddress> add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol);
GI_INLINE_DECL std::tuple<bool, Gio::SocketAddress> add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, GObject::Object source_object, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::SocketAddress> add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, GLib::Error * _error) noexcept;

// guint16 g_socket_listener_add_any_inet_port (GSocketListener* listener, GObject* source_object, GError ** error);
// guint16 g_socket_listener_add_any_inet_port (::GSocketListener* listener, ::GObject* source_object, GError ** error);
GI_INLINE_DECL guint16 add_any_inet_port (GObject::Object source_object);
GI_INLINE_DECL guint16 add_any_inet_port ();
GI_INLINE_DECL guint16 add_any_inet_port (GObject::Object source_object, GLib::Error * _error) noexcept;
GI_INLINE_DECL guint16 add_any_inet_port (GLib::Error * _error) noexcept;

// gboolean g_socket_listener_add_inet_port (GSocketListener* listener, guint16 port, GObject* source_object, GError ** error);
// gboolean g_socket_listener_add_inet_port (::GSocketListener* listener, guint16 port, ::GObject* source_object, GError ** error);
GI_INLINE_DECL bool add_inet_port (guint16 port, GObject::Object source_object);
GI_INLINE_DECL bool add_inet_port (guint16 port);
GI_INLINE_DECL bool add_inet_port (guint16 port, GObject::Object source_object, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool add_inet_port (guint16 port, GLib::Error * _error) noexcept;

// gboolean g_socket_listener_add_socket (GSocketListener* listener, GSocket* socket, GObject* source_object, GError ** error);
// gboolean g_socket_listener_add_socket (::GSocketListener* listener, ::GSocket* socket, ::GObject* source_object, GError ** error);
GI_INLINE_DECL bool add_socket (Gio::Socket socket, GObject::Object source_object);
GI_INLINE_DECL bool add_socket (Gio::Socket socket);
GI_INLINE_DECL bool add_socket (Gio::Socket socket, GObject::Object source_object, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool add_socket (Gio::Socket socket, GLib::Error * _error) noexcept;

// void g_socket_listener_close (GSocketListener* listener);
// void g_socket_listener_close (::GSocketListener* listener);
GI_INLINE_DECL void close () noexcept;

// void g_socket_listener_set_backlog (GSocketListener* listener, int listen_backlog);
// void g_socket_listener_set_backlog (::GSocketListener* listener, gint listen_backlog);
GI_INLINE_DECL void set_backlog (gint listen_backlog) noexcept;

gi::property_proxy<gint, base::SocketListenerBase> property_listen_backlog()
{ return gi::property_proxy<gint, base::SocketListenerBase> (*this, "listen-backlog"); }
const gi::property_proxy<gint, base::SocketListenerBase> property_listen_backlog() const
{ return gi::property_proxy<gint, base::SocketListenerBase> (*this, "listen-backlog"); }

// signal event
gi::signal_proxy<void(Gio::SocketListener, Gio::SocketListenerEvent event, Gio::Socket socket)> signal_event()
{ return gi::signal_proxy<void(Gio::SocketListener, Gio::SocketListenerEvent event, Gio::Socket socket)> (*this, "event"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketlistener_extra_def.hpp>)
#include <gio/socketlistener_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketlistener_extra.hpp>)
#include <gio/socketlistener_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SocketListener : public GI_GIO_SOCKETLISTENER_BASE
{ typedef GI_GIO_SOCKETLISTENER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSocketListener>
{ typedef Gio::SocketListener type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SocketListenerClassDef
{
typedef SocketListenerClassDef self;
public:
typedef Gio::SocketListener instance_type;
typedef ::GSocketListenerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void SocketListener::changed (GSocketListener* listener);
// void SocketListener::changed (::GSocketListener* listener);
virtual void changed_ () noexcept = 0;

// void SocketListener::event (GSocketListener* listener, GSocketListenerEvent event, GSocket* socket);
// void SocketListener::event (::GSocketListener* listener, ::GSocketListenerEvent event, ::GSocket* socket);
virtual void event_ (Gio::SocketListenerEvent event, Gio::Socket socket) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SocketListenerClass: public detail::ClassTemplate<Gio::impl::internal::SocketListenerClassDef, GObject::impl::internal::ObjectClass>
{
typedef SocketListenerClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SocketListenerClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void SocketListener::changed (GSocketListener* listener);
// void SocketListener::changed (::GSocketListener* listener);
GI_INLINE_DECL void changed_ () noexcept override;

// void SocketListener::event (GSocketListener* listener, GSocketListenerEvent event, GSocket* socket);
// void SocketListener::event (::GSocketListener* listener, ::GSocketListenerEvent event, ::GSocket* socket);
GI_INLINE_DECL void event_ (Gio::SocketListenerEvent event, Gio::Socket socket) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using SocketListenerImpl = detail::ObjectImpl<SocketListener, internal::SocketListenerClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
