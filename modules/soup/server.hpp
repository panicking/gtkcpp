// AUTO-GENERATED

#ifndef _GI_SOUP_SERVER_HPP_
#define _GI_SOUP_SERVER_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Address;
class AuthDomain;
class ClientContext;
class Message;
class Socket;
class URI;

class Server;

namespace base {


#define GI_SOUP_SERVER_BASE base::ServerBase
class ServerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupServer BaseObjectType;

ServerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_server_get_type(); } 

// SoupServer* soup_server_new (const char* optname1);
// ::SoupServer* soup_server_new (const char* optname1);
// IGNORE; not introspectable, varargs not supported

// gboolean soup_server_accept_iostream (SoupServer* server, GIOStream* stream, GSocketAddress* local_addr, GSocketAddress* remote_addr, GError ** error);
// gboolean soup_server_accept_iostream (::SoupServer* server, ::GIOStream* stream, ::GSocketAddress* local_addr, ::GSocketAddress* remote_addr, GError ** error);
GI_INLINE_DECL bool accept_iostream (Gio::IOStream stream, Gio::SocketAddress local_addr, Gio::SocketAddress remote_addr);
GI_INLINE_DECL bool accept_iostream (Gio::IOStream stream);
GI_INLINE_DECL bool accept_iostream (Gio::IOStream stream, Gio::SocketAddress local_addr, Gio::SocketAddress remote_addr, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool accept_iostream (Gio::IOStream stream, GLib::Error * _error) noexcept;

// void soup_server_add_auth_domain (SoupServer* server, SoupAuthDomain* auth_domain);
// void soup_server_add_auth_domain (::SoupServer* server, ::SoupAuthDomain* auth_domain);
GI_INLINE_DECL void add_auth_domain (Soup::AuthDomain auth_domain) noexcept;

// void soup_server_add_early_handler (SoupServer* server, const char* path, SoupServerCallback callback, gpointer user_data, GDestroyNotify destroy);
// void soup_server_add_early_handler (::SoupServer* server, const char* path,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; callback type  not supported

// void soup_server_add_handler (SoupServer* server, const char* path, SoupServerCallback callback, gpointer user_data, GDestroyNotify destroy);
// void soup_server_add_handler (::SoupServer* server, const char* path,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; callback type  not supported

// void soup_server_add_websocket_extension (SoupServer* server, GType extension_type);
// void soup_server_add_websocket_extension (::SoupServer* server, GType extension_type);
GI_INLINE_DECL void add_websocket_extension (GType extension_type) noexcept;

// void soup_server_add_websocket_handler (SoupServer* server, const char* path, const char* origin, char** protocols, SoupServerWebsocketCallback callback, gpointer user_data, GDestroyNotify destroy);
// void soup_server_add_websocket_handler (::SoupServer* server, const char* path, const char* origin, char** protocols, Soup::ServerWebsocketCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void add_websocket_handler (const std::string & path, const std::string & origin, const std::vector<std::string> & protocols, Soup::ServerWebsocketCallback callback) noexcept;
GI_INLINE_DECL void add_websocket_handler (const std::vector<std::string> & protocols, Soup::ServerWebsocketCallback callback) noexcept;

// void soup_server_disconnect (SoupServer* server);
// void soup_server_disconnect (::SoupServer* server);
GI_INLINE_DECL void disconnect () noexcept;

// GMainContext* soup_server_get_async_context (SoupServer* server);
// ::GMainContext* soup_server_get_async_context (::SoupServer* server);
// IGNORE; deprecated

// SoupSocket* soup_server_get_listener (SoupServer* server);
// ::SoupSocket* soup_server_get_listener (::SoupServer* server);
// IGNORE; deprecated

// GSList* soup_server_get_listeners (SoupServer* server);
// ::GSList* soup_server_get_listeners (::SoupServer* server);
GI_INLINE_DECL std::vector<Gio::Socket> get_listeners () noexcept;

// guint soup_server_get_port (SoupServer* server);
// guint soup_server_get_port (::SoupServer* server);
// IGNORE; deprecated

// GSList* soup_server_get_uris (SoupServer* server);
// ::GSList* soup_server_get_uris (::SoupServer* server);
GI_INLINE_DECL std::vector<Soup::URI> get_uris () noexcept;

// gboolean soup_server_is_https (SoupServer* server);
// gboolean soup_server_is_https (::SoupServer* server);
GI_INLINE_DECL bool is_https () noexcept;

// gboolean soup_server_listen (SoupServer* server, GSocketAddress* address, SoupServerListenOptions options, GError ** error);
// gboolean soup_server_listen (::SoupServer* server, ::GSocketAddress* address, ::SoupServerListenOptions options, GError ** error);
GI_INLINE_DECL bool listen (Gio::SocketAddress address, Soup::ServerListenOptions options);
GI_INLINE_DECL bool listen (Gio::SocketAddress address, Soup::ServerListenOptions options, GLib::Error * _error) noexcept;

// gboolean soup_server_listen_all (SoupServer* server, guint port, SoupServerListenOptions options, GError ** error);
// gboolean soup_server_listen_all (::SoupServer* server, guint port, ::SoupServerListenOptions options, GError ** error);
GI_INLINE_DECL bool listen_all (guint port, Soup::ServerListenOptions options);
GI_INLINE_DECL bool listen_all (guint port, Soup::ServerListenOptions options, GLib::Error * _error) noexcept;

// gboolean soup_server_listen_fd (SoupServer* server, int fd, SoupServerListenOptions options, GError ** error);
// gboolean soup_server_listen_fd (::SoupServer* server, gint fd, ::SoupServerListenOptions options, GError ** error);
GI_INLINE_DECL bool listen_fd (gint fd, Soup::ServerListenOptions options);
GI_INLINE_DECL bool listen_fd (gint fd, Soup::ServerListenOptions options, GLib::Error * _error) noexcept;

// gboolean soup_server_listen_local (SoupServer* server, guint port, SoupServerListenOptions options, GError ** error);
// gboolean soup_server_listen_local (::SoupServer* server, guint port, ::SoupServerListenOptions options, GError ** error);
GI_INLINE_DECL bool listen_local (guint port, Soup::ServerListenOptions options);
GI_INLINE_DECL bool listen_local (guint port, Soup::ServerListenOptions options, GLib::Error * _error) noexcept;

// gboolean soup_server_listen_socket (SoupServer* server, GSocket* socket, SoupServerListenOptions options, GError ** error);
// gboolean soup_server_listen_socket (::SoupServer* server, ::GSocket* socket, ::SoupServerListenOptions options, GError ** error);
GI_INLINE_DECL bool listen_socket (Gio::Socket socket, Soup::ServerListenOptions options);
GI_INLINE_DECL bool listen_socket (Gio::Socket socket, Soup::ServerListenOptions options, GLib::Error * _error) noexcept;

// void soup_server_pause_message (SoupServer* server, SoupMessage* msg);
// void soup_server_pause_message (::SoupServer* server, ::SoupMessage* msg);
GI_INLINE_DECL void pause_message (Soup::Message msg) noexcept;

// void soup_server_quit (SoupServer* server);
// void soup_server_quit (::SoupServer* server);
// IGNORE; deprecated

// void soup_server_remove_auth_domain (SoupServer* server, SoupAuthDomain* auth_domain);
// void soup_server_remove_auth_domain (::SoupServer* server, ::SoupAuthDomain* auth_domain);
GI_INLINE_DECL void remove_auth_domain (Soup::AuthDomain auth_domain) noexcept;

// void soup_server_remove_handler (SoupServer* server, const char* path);
// void soup_server_remove_handler (::SoupServer* server, const char* path);
GI_INLINE_DECL void remove_handler (const std::string & path) noexcept;

// void soup_server_remove_websocket_extension (SoupServer* server, GType extension_type);
// void soup_server_remove_websocket_extension (::SoupServer* server, GType extension_type);
GI_INLINE_DECL void remove_websocket_extension (GType extension_type) noexcept;

// void soup_server_run (SoupServer* server);
// void soup_server_run (::SoupServer* server);
// IGNORE; deprecated

// void soup_server_run_async (SoupServer* server);
// void soup_server_run_async (::SoupServer* server);
// IGNORE; deprecated

// gboolean soup_server_set_ssl_cert_file (SoupServer* server, const char* ssl_cert_file, const char* ssl_key_file, GError ** error);
// gboolean soup_server_set_ssl_cert_file (::SoupServer* server, const char* ssl_cert_file, const char* ssl_key_file, GError ** error);
GI_INLINE_DECL bool set_ssl_cert_file (const std::string & ssl_cert_file, const std::string & ssl_key_file);
GI_INLINE_DECL bool set_ssl_cert_file (const std::string & ssl_cert_file, const std::string & ssl_key_file, GLib::Error * _error) noexcept;

// void soup_server_unpause_message (SoupServer* server, SoupMessage* msg);
// void soup_server_unpause_message (::SoupServer* server, ::SoupMessage* msg);
GI_INLINE_DECL void unpause_message (Soup::Message msg) noexcept;

gi::property_proxy<gpointer, base::ServerBase> property_async_context()
{ return gi::property_proxy<gpointer, base::ServerBase> (*this, "async-context"); }
const gi::property_proxy<gpointer, base::ServerBase> property_async_context() const
{ return gi::property_proxy<gpointer, base::ServerBase> (*this, "async-context"); }

gi::property_proxy<Soup::Address, base::ServerBase> property_interface()
{ return gi::property_proxy<Soup::Address, base::ServerBase> (*this, "interface"); }
const gi::property_proxy<Soup::Address, base::ServerBase> property_interface() const
{ return gi::property_proxy<Soup::Address, base::ServerBase> (*this, "interface"); }

gi::property_proxy<guint, base::ServerBase> property_port()
{ return gi::property_proxy<guint, base::ServerBase> (*this, "port"); }
const gi::property_proxy<guint, base::ServerBase> property_port() const
{ return gi::property_proxy<guint, base::ServerBase> (*this, "port"); }

gi::property_proxy<bool, base::ServerBase> property_raw_paths()
{ return gi::property_proxy<bool, base::ServerBase> (*this, "raw-paths"); }
const gi::property_proxy<bool, base::ServerBase> property_raw_paths() const
{ return gi::property_proxy<bool, base::ServerBase> (*this, "raw-paths"); }

gi::property_proxy<std::string, base::ServerBase> property_server_header()
{ return gi::property_proxy<std::string, base::ServerBase> (*this, "server-header"); }
const gi::property_proxy<std::string, base::ServerBase> property_server_header() const
{ return gi::property_proxy<std::string, base::ServerBase> (*this, "server-header"); }

gi::property_proxy<std::string, base::ServerBase> property_ssl_cert_file()
{ return gi::property_proxy<std::string, base::ServerBase> (*this, "ssl-cert-file"); }
const gi::property_proxy<std::string, base::ServerBase> property_ssl_cert_file() const
{ return gi::property_proxy<std::string, base::ServerBase> (*this, "ssl-cert-file"); }

gi::property_proxy<std::string, base::ServerBase> property_ssl_key_file()
{ return gi::property_proxy<std::string, base::ServerBase> (*this, "ssl-key-file"); }
const gi::property_proxy<std::string, base::ServerBase> property_ssl_key_file() const
{ return gi::property_proxy<std::string, base::ServerBase> (*this, "ssl-key-file"); }

gi::property_proxy<Gio::TlsCertificate, base::ServerBase> property_tls_certificate()
{ return gi::property_proxy<Gio::TlsCertificate, base::ServerBase> (*this, "tls-certificate"); }
const gi::property_proxy<Gio::TlsCertificate, base::ServerBase> property_tls_certificate() const
{ return gi::property_proxy<Gio::TlsCertificate, base::ServerBase> (*this, "tls-certificate"); }

// signal request-aborted
gi::signal_proxy<void(Soup::Server, Soup::Message message, Soup::ClientContext client)> signal_request_aborted()
{ return gi::signal_proxy<void(Soup::Server, Soup::Message message, Soup::ClientContext client)> (*this, "request-aborted"); }

// signal request-finished
gi::signal_proxy<void(Soup::Server, Soup::Message message, Soup::ClientContext client)> signal_request_finished()
{ return gi::signal_proxy<void(Soup::Server, Soup::Message message, Soup::ClientContext client)> (*this, "request-finished"); }

// signal request-read
gi::signal_proxy<void(Soup::Server, Soup::Message message, Soup::ClientContext client)> signal_request_read()
{ return gi::signal_proxy<void(Soup::Server, Soup::Message message, Soup::ClientContext client)> (*this, "request-read"); }

// signal request-started
gi::signal_proxy<void(Soup::Server, Soup::Message message, Soup::ClientContext client)> signal_request_started()
{ return gi::signal_proxy<void(Soup::Server, Soup::Message message, Soup::ClientContext client)> (*this, "request-started"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/server_extra_def.hpp>)
#include <soup/server_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/server_extra.hpp>)
#include <soup/server_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Server : public GI_SOUP_SERVER_BASE
{ typedef GI_SOUP_SERVER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupServer>
{ typedef Soup::Server type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class ServerClassDef
{
typedef ServerClassDef self;
public:
typedef Soup::Server instance_type;
typedef ::SoupServerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Server::request_aborted (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_aborted (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
virtual void request_aborted_ (Soup::Message msg, Soup::ClientContext client) noexcept = 0;

// void Server::request_finished (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_finished (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
virtual void request_finished_ (Soup::Message msg, Soup::ClientContext client) noexcept = 0;

// void Server::request_read (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_read (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
virtual void request_read_ (Soup::Message msg, Soup::ClientContext client) noexcept = 0;

// void Server::request_started (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_started (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
virtual void request_started_ (Soup::Message msg, Soup::ClientContext client) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ServerClass: public detail::ClassTemplate<Soup::impl::internal::ServerClassDef, GObject::impl::internal::ObjectClass>
{
typedef ServerClass self;
typedef detail::ClassTemplate<Soup::impl::internal::ServerClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Server::request_aborted (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_aborted (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
GI_INLINE_DECL void request_aborted_ (Soup::Message msg, Soup::ClientContext client) noexcept override;

// void Server::request_finished (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_finished (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
GI_INLINE_DECL void request_finished_ (Soup::Message msg, Soup::ClientContext client) noexcept override;

// void Server::request_read (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_read (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
GI_INLINE_DECL void request_read_ (Soup::Message msg, Soup::ClientContext client) noexcept override;

// void Server::request_started (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_started (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
GI_INLINE_DECL void request_started_ (Soup::Message msg, Soup::ClientContext client) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ServerImpl = detail::ObjectImpl<Server, internal::ServerClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
