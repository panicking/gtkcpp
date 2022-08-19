// AUTO-GENERATED

#ifndef _GI_SOUP_SESSION_HPP_
#define _GI_SOUP_SESSION_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Address;
class Auth;
class Message;
class Request;
class RequestHTTP;
class SessionFeature;
class Socket;
class URI;
class WebsocketConnection;

class Session;

namespace base {


#define GI_SOUP_SESSION_BASE base::SessionBase
class SessionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupSession BaseObjectType;

SessionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_session_get_type(); } 

// SoupSession* soup_session_new ();
// ::SoupSession* soup_session_new ();
static GI_INLINE_DECL Soup::Session new_ () noexcept;

// SoupSession* soup_session_new_with_options (const char* optname1);
// ::SoupSession* soup_session_new_with_options (const char* optname1);
// IGNORE; not introspectable, varargs not supported

// void soup_session_abort (SoupSession* session);
// void soup_session_abort (::SoupSession* session);
GI_INLINE_DECL void abort () noexcept;

// void soup_session_add_feature (SoupSession* session, SoupSessionFeature* feature);
// void soup_session_add_feature (::SoupSession* session, ::SoupSessionFeature* feature);
GI_INLINE_DECL void add_feature (Soup::SessionFeature feature) noexcept;

// void soup_session_add_feature_by_type (SoupSession* session, GType feature_type);
// void soup_session_add_feature_by_type (::SoupSession* session, GType feature_type);
GI_INLINE_DECL void add_feature_by_type (GType feature_type) noexcept;

// void soup_session_cancel_message (SoupSession* session, SoupMessage* msg, guint status_code);
// void soup_session_cancel_message (::SoupSession* session, ::SoupMessage* msg, guint status_code);
GI_INLINE_DECL void cancel_message (Soup::Message msg, guint status_code) noexcept;

// void soup_session_connect_async (SoupSession* session, SoupURI* uri, GCancellable* cancellable, SoupSessionConnectProgressCallback progress_callback, GAsyncReadyCallback callback, gpointer user_data);
// void soup_session_connect_async (::SoupSession* session, ::SoupURI* uri, ::GCancellable* cancellable, Soup::SessionConnectProgressCallback::cfunction_type progress_callback, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; callback misses closure info

// GIOStream* soup_session_connect_finish (SoupSession* session, GAsyncResult* result, GError ** error);
// ::GIOStream* soup_session_connect_finish (::SoupSession* session, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::IOStream connect_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::IOStream connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GMainContext* soup_session_get_async_context (SoupSession* session);
// ::GMainContext* soup_session_get_async_context (::SoupSession* session);
GI_INLINE_DECL GLib::MainContext get_async_context () noexcept;

// SoupSessionFeature* soup_session_get_feature (SoupSession* session, GType feature_type);
// ::SoupSessionFeature* soup_session_get_feature (::SoupSession* session, GType feature_type);
GI_INLINE_DECL Soup::SessionFeature get_feature (GType feature_type) noexcept;

// SoupSessionFeature* soup_session_get_feature_for_message (SoupSession* session, GType feature_type, SoupMessage* msg);
// ::SoupSessionFeature* soup_session_get_feature_for_message (::SoupSession* session, GType feature_type, ::SoupMessage* msg);
GI_INLINE_DECL Soup::SessionFeature get_feature_for_message (GType feature_type, Soup::Message msg) noexcept;

// GSList* soup_session_get_features (SoupSession* session, GType feature_type);
// ::GSList* soup_session_get_features (::SoupSession* session, GType feature_type);
GI_INLINE_DECL std::vector<Soup::SessionFeature> get_features (GType feature_type) noexcept;

// gboolean soup_session_has_feature (SoupSession* session, GType feature_type);
// gboolean soup_session_has_feature (::SoupSession* session, GType feature_type);
GI_INLINE_DECL bool has_feature (GType feature_type) noexcept;

// void soup_session_pause_message (SoupSession* session, SoupMessage* msg);
// void soup_session_pause_message (::SoupSession* session, ::SoupMessage* msg);
GI_INLINE_DECL void pause_message (Soup::Message msg) noexcept;

// void soup_session_prefetch_dns (SoupSession* session, const char* hostname, GCancellable* cancellable, SoupAddressCallback callback, gpointer user_data);
// void soup_session_prefetch_dns (::SoupSession* session, const char* hostname, ::GCancellable* cancellable, Soup::AddressCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void prefetch_dns (const std::string & hostname, Gio::Cancellable cancellable, Soup::AddressCallback callback) noexcept;
GI_INLINE_DECL void prefetch_dns (const std::string & hostname, Soup::AddressCallback callback) noexcept;

// void soup_session_prepare_for_uri (SoupSession* session, SoupURI* uri);
// void soup_session_prepare_for_uri (::SoupSession* session, ::SoupURI* uri);
// IGNORE; deprecated

// void soup_session_queue_message (SoupSession* session, SoupMessage* msg, SoupSessionCallback callback, gpointer user_data);
// void soup_session_queue_message (::SoupSession* session, ::SoupMessage* msg, Soup::SessionCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void queue_message (Soup::Message msg, Soup::SessionCallback callback) noexcept;

// gboolean soup_session_redirect_message (SoupSession* session, SoupMessage* msg);
// gboolean soup_session_redirect_message (::SoupSession* session, ::SoupMessage* msg);
GI_INLINE_DECL bool redirect_message (Soup::Message msg) noexcept;

// void soup_session_remove_feature (SoupSession* session, SoupSessionFeature* feature);
// void soup_session_remove_feature (::SoupSession* session, ::SoupSessionFeature* feature);
GI_INLINE_DECL void remove_feature (Soup::SessionFeature feature) noexcept;

// void soup_session_remove_feature_by_type (SoupSession* session, GType feature_type);
// void soup_session_remove_feature_by_type (::SoupSession* session, GType feature_type);
GI_INLINE_DECL void remove_feature_by_type (GType feature_type) noexcept;

// SoupRequest* soup_session_request (SoupSession* session, const char* uri_string, GError ** error);
// ::SoupRequest* soup_session_request (::SoupSession* session, const char* uri_string, GError ** error);
GI_INLINE_DECL Soup::Request request (const std::string & uri_string);
GI_INLINE_DECL Soup::Request request (const std::string & uri_string, GLib::Error * _error) noexcept;

// SoupRequestHTTP* soup_session_request_http (SoupSession* session, const char* method, const char* uri_string, GError ** error);
// ::SoupRequestHTTP* soup_session_request_http (::SoupSession* session, const char* method, const char* uri_string, GError ** error);
GI_INLINE_DECL Soup::RequestHTTP request_http (const std::string & method, const std::string & uri_string);
GI_INLINE_DECL Soup::RequestHTTP request_http (const std::string & method, const std::string & uri_string, GLib::Error * _error) noexcept;

// SoupRequestHTTP* soup_session_request_http_uri (SoupSession* session, const char* method, SoupURI* uri, GError ** error);
// ::SoupRequestHTTP* soup_session_request_http_uri (::SoupSession* session, const char* method, ::SoupURI* uri, GError ** error);
GI_INLINE_DECL Soup::RequestHTTP request_http_uri (const std::string & method, Soup::URI uri);
GI_INLINE_DECL Soup::RequestHTTP request_http_uri (const std::string & method, Soup::URI uri, GLib::Error * _error) noexcept;

// SoupRequest* soup_session_request_uri (SoupSession* session, SoupURI* uri, GError ** error);
// ::SoupRequest* soup_session_request_uri (::SoupSession* session, ::SoupURI* uri, GError ** error);
GI_INLINE_DECL Soup::Request request_uri (Soup::URI uri);
GI_INLINE_DECL Soup::Request request_uri (Soup::URI uri, GLib::Error * _error) noexcept;

// void soup_session_requeue_message (SoupSession* session, SoupMessage* msg);
// void soup_session_requeue_message (::SoupSession* session, ::SoupMessage* msg);
GI_INLINE_DECL void requeue_message (Soup::Message msg) noexcept;

// GInputStream* soup_session_send (SoupSession* session, SoupMessage* msg, GCancellable* cancellable, GError ** error);
// ::GInputStream* soup_session_send (::SoupSession* session, ::SoupMessage* msg, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::InputStream send (Soup::Message msg, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::InputStream send (Soup::Message msg);
GI_INLINE_DECL Gio::InputStream send (Soup::Message msg, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::InputStream send (Soup::Message msg, GLib::Error * _error) noexcept;

// void soup_session_send_async (SoupSession* session, SoupMessage* msg, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void soup_session_send_async (::SoupSession* session, ::SoupMessage* msg, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void send_async (Soup::Message msg, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void send_async (Soup::Message msg, Gio::AsyncReadyCallback callback) noexcept;

// GInputStream* soup_session_send_finish (SoupSession* session, GAsyncResult* result, GError ** error);
// ::GInputStream* soup_session_send_finish (::SoupSession* session, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::InputStream send_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::InputStream send_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// guint soup_session_send_message (SoupSession* session, SoupMessage* msg);
// guint soup_session_send_message (::SoupSession* session, ::SoupMessage* msg);
GI_INLINE_DECL guint send_message (Soup::Message msg) noexcept;

// GIOStream* soup_session_steal_connection (SoupSession* session, SoupMessage* msg);
// ::GIOStream* soup_session_steal_connection (::SoupSession* session, ::SoupMessage* msg);
GI_INLINE_DECL Gio::IOStream steal_connection (Soup::Message msg) noexcept;

// void soup_session_unpause_message (SoupSession* session, SoupMessage* msg);
// void soup_session_unpause_message (::SoupSession* session, ::SoupMessage* msg);
GI_INLINE_DECL void unpause_message (Soup::Message msg) noexcept;

// void soup_session_websocket_connect_async (SoupSession* session, SoupMessage* msg, const char* origin, char** protocols, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void soup_session_websocket_connect_async (::SoupSession* session, ::SoupMessage* msg, const char* origin, char** protocols, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void websocket_connect_async (Soup::Message msg, const std::string & origin, const std::vector<std::string> & protocols, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void websocket_connect_async (Soup::Message msg, const std::vector<std::string> & protocols, Gio::AsyncReadyCallback callback) noexcept;

// SoupWebsocketConnection* soup_session_websocket_connect_finish (SoupSession* session, GAsyncResult* result, GError ** error);
// ::SoupWebsocketConnection* soup_session_websocket_connect_finish (::SoupSession* session, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Soup::WebsocketConnection websocket_connect_finish (Gio::AsyncResult result);
GI_INLINE_DECL Soup::WebsocketConnection websocket_connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean soup_session_would_redirect (SoupSession* session, SoupMessage* msg);
// gboolean soup_session_would_redirect (::SoupSession* session, ::SoupMessage* msg);
GI_INLINE_DECL bool would_redirect (Soup::Message msg) noexcept;

gi::property_proxy<std::string, base::SessionBase> property_accept_language()
{ return gi::property_proxy<std::string, base::SessionBase> (*this, "accept-language"); }
const gi::property_proxy<std::string, base::SessionBase> property_accept_language() const
{ return gi::property_proxy<std::string, base::SessionBase> (*this, "accept-language"); }

gi::property_proxy<bool, base::SessionBase> property_accept_language_auto()
{ return gi::property_proxy<bool, base::SessionBase> (*this, "accept-language-auto"); }
const gi::property_proxy<bool, base::SessionBase> property_accept_language_auto() const
{ return gi::property_proxy<bool, base::SessionBase> (*this, "accept-language-auto"); }

gi::property_proxy<gpointer, base::SessionBase> property_async_context()
{ return gi::property_proxy<gpointer, base::SessionBase> (*this, "async-context"); }
const gi::property_proxy<gpointer, base::SessionBase> property_async_context() const
{ return gi::property_proxy<gpointer, base::SessionBase> (*this, "async-context"); }

gi::property_proxy<guint, base::SessionBase> property_idle_timeout()
{ return gi::property_proxy<guint, base::SessionBase> (*this, "idle-timeout"); }
const gi::property_proxy<guint, base::SessionBase> property_idle_timeout() const
{ return gi::property_proxy<guint, base::SessionBase> (*this, "idle-timeout"); }

gi::property_proxy<Soup::Address, base::SessionBase> property_local_address()
{ return gi::property_proxy<Soup::Address, base::SessionBase> (*this, "local-address"); }
const gi::property_proxy<Soup::Address, base::SessionBase> property_local_address() const
{ return gi::property_proxy<Soup::Address, base::SessionBase> (*this, "local-address"); }

gi::property_proxy<gint, base::SessionBase> property_max_conns()
{ return gi::property_proxy<gint, base::SessionBase> (*this, "max-conns"); }
const gi::property_proxy<gint, base::SessionBase> property_max_conns() const
{ return gi::property_proxy<gint, base::SessionBase> (*this, "max-conns"); }

gi::property_proxy<gint, base::SessionBase> property_max_conns_per_host()
{ return gi::property_proxy<gint, base::SessionBase> (*this, "max-conns-per-host"); }
const gi::property_proxy<gint, base::SessionBase> property_max_conns_per_host() const
{ return gi::property_proxy<gint, base::SessionBase> (*this, "max-conns-per-host"); }

gi::property_proxy<Gio::ProxyResolver, base::SessionBase> property_proxy_resolver()
{ return gi::property_proxy<Gio::ProxyResolver, base::SessionBase> (*this, "proxy-resolver"); }
const gi::property_proxy<Gio::ProxyResolver, base::SessionBase> property_proxy_resolver() const
{ return gi::property_proxy<Gio::ProxyResolver, base::SessionBase> (*this, "proxy-resolver"); }

gi::property_proxy<Soup::URI, base::SessionBase> property_proxy_uri()
{ return gi::property_proxy<Soup::URI, base::SessionBase> (*this, "proxy-uri"); }
const gi::property_proxy<Soup::URI, base::SessionBase> property_proxy_uri() const
{ return gi::property_proxy<Soup::URI, base::SessionBase> (*this, "proxy-uri"); }

gi::property_proxy<std::string, base::SessionBase> property_ssl_ca_file()
{ return gi::property_proxy<std::string, base::SessionBase> (*this, "ssl-ca-file"); }
const gi::property_proxy<std::string, base::SessionBase> property_ssl_ca_file() const
{ return gi::property_proxy<std::string, base::SessionBase> (*this, "ssl-ca-file"); }

gi::property_proxy<bool, base::SessionBase> property_ssl_strict()
{ return gi::property_proxy<bool, base::SessionBase> (*this, "ssl-strict"); }
const gi::property_proxy<bool, base::SessionBase> property_ssl_strict() const
{ return gi::property_proxy<bool, base::SessionBase> (*this, "ssl-strict"); }

gi::property_proxy<bool, base::SessionBase> property_ssl_use_system_ca_file()
{ return gi::property_proxy<bool, base::SessionBase> (*this, "ssl-use-system-ca-file"); }
const gi::property_proxy<bool, base::SessionBase> property_ssl_use_system_ca_file() const
{ return gi::property_proxy<bool, base::SessionBase> (*this, "ssl-use-system-ca-file"); }

gi::property_proxy<guint, base::SessionBase> property_timeout()
{ return gi::property_proxy<guint, base::SessionBase> (*this, "timeout"); }
const gi::property_proxy<guint, base::SessionBase> property_timeout() const
{ return gi::property_proxy<guint, base::SessionBase> (*this, "timeout"); }

gi::property_proxy<Gio::TlsDatabase, base::SessionBase> property_tls_database()
{ return gi::property_proxy<Gio::TlsDatabase, base::SessionBase> (*this, "tls-database"); }
const gi::property_proxy<Gio::TlsDatabase, base::SessionBase> property_tls_database() const
{ return gi::property_proxy<Gio::TlsDatabase, base::SessionBase> (*this, "tls-database"); }

gi::property_proxy<Gio::TlsInteraction, base::SessionBase> property_tls_interaction()
{ return gi::property_proxy<Gio::TlsInteraction, base::SessionBase> (*this, "tls-interaction"); }
const gi::property_proxy<Gio::TlsInteraction, base::SessionBase> property_tls_interaction() const
{ return gi::property_proxy<Gio::TlsInteraction, base::SessionBase> (*this, "tls-interaction"); }

gi::property_proxy<bool, base::SessionBase> property_use_ntlm()
{ return gi::property_proxy<bool, base::SessionBase> (*this, "use-ntlm"); }
const gi::property_proxy<bool, base::SessionBase> property_use_ntlm() const
{ return gi::property_proxy<bool, base::SessionBase> (*this, "use-ntlm"); }

gi::property_proxy<bool, base::SessionBase> property_use_thread_context()
{ return gi::property_proxy<bool, base::SessionBase> (*this, "use-thread-context"); }
const gi::property_proxy<bool, base::SessionBase> property_use_thread_context() const
{ return gi::property_proxy<bool, base::SessionBase> (*this, "use-thread-context"); }

gi::property_proxy<std::string, base::SessionBase> property_user_agent()
{ return gi::property_proxy<std::string, base::SessionBase> (*this, "user-agent"); }
const gi::property_proxy<std::string, base::SessionBase> property_user_agent() const
{ return gi::property_proxy<std::string, base::SessionBase> (*this, "user-agent"); }

// signal authenticate
gi::signal_proxy<void(Soup::Session, Soup::Message msg, Soup::Auth auth, gboolean retrying)> signal_authenticate()
{ return gi::signal_proxy<void(Soup::Session, Soup::Message msg, Soup::Auth auth, gboolean retrying)> (*this, "authenticate"); }

// signal connection-created
gi::signal_proxy<void(Soup::Session, GObject::Object connection)> signal_connection_created()
{ return gi::signal_proxy<void(Soup::Session, GObject::Object connection)> (*this, "connection-created"); }

// signal request-queued
gi::signal_proxy<void(Soup::Session, Soup::Message msg)> signal_request_queued()
{ return gi::signal_proxy<void(Soup::Session, Soup::Message msg)> (*this, "request-queued"); }

// signal request-started
// IGNORE; deprecated

// signal request-unqueued
gi::signal_proxy<void(Soup::Session, Soup::Message msg)> signal_request_unqueued()
{ return gi::signal_proxy<void(Soup::Session, Soup::Message msg)> (*this, "request-unqueued"); }

// signal tunneling
gi::signal_proxy<void(Soup::Session, GObject::Object connection)> signal_tunneling()
{ return gi::signal_proxy<void(Soup::Session, GObject::Object connection)> (*this, "tunneling"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/session_extra_def.hpp>)
#include <soup/session_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/session_extra.hpp>)
#include <soup/session_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Session : public GI_SOUP_SESSION_BASE
{ typedef GI_SOUP_SESSION_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupSession>
{ typedef Soup::Session type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class SessionClassDef
{
typedef SessionClassDef self;
public:
typedef Soup::Session instance_type;
typedef ::SoupSessionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Session::auth_required (SoupSession* session, SoupMessage* msg, SoupAuth* auth, gboolean retrying);
// void Session::auth_required (::SoupSession* session, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
virtual void auth_required_ (Soup::Message msg, Soup::Auth auth, gboolean retrying) noexcept = 0;

// void Session::authenticate (SoupSession* session, SoupMessage* msg, SoupAuth* auth, gboolean retrying);
// void Session::authenticate (::SoupSession* session, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
virtual void authenticate_ (Soup::Message msg, Soup::Auth auth, gboolean retrying) noexcept = 0;

// void Session::cancel_message (SoupSession* session, SoupMessage* msg, guint status_code);
// void Session::cancel_message (::SoupSession* session, ::SoupMessage* msg, guint status_code);
virtual void cancel_message_ (Soup::Message msg, guint status_code) noexcept = 0;

// void Session::flush_queue (SoupSession* session);
// void Session::flush_queue (::SoupSession* session);
virtual void flush_queue_ () noexcept = 0;

// void Session::kick (SoupSession* session);
// void Session::kick (::SoupSession* session);
virtual void kick_ () noexcept = 0;

// void Session::queue_message (SoupSession* session, SoupMessage* msg, SoupSessionCallback callback, gpointer user_data);
// void Session::queue_message (::SoupSession* session, ::SoupMessage* msg, Soup::SessionCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// void Session::request_started (SoupSession* session, SoupMessage* msg, SoupSocket* socket);
// void Session::request_started (::SoupSession* session, ::SoupMessage* msg, ::SoupSocket* socket);
virtual void request_started_ (Soup::Message msg, Soup::Socket socket) noexcept = 0;

// void Session::requeue_message (SoupSession* session, SoupMessage* msg);
// void Session::requeue_message (::SoupSession* session, ::SoupMessage* msg);
virtual void requeue_message_ (Soup::Message msg) noexcept = 0;

// guint Session::send_message (SoupSession* session, SoupMessage* msg);
// guint Session::send_message (::SoupSession* session, ::SoupMessage* msg);
virtual guint send_message_ (Soup::Message msg) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SessionClass: public detail::ClassTemplate<Soup::impl::internal::SessionClassDef, GObject::impl::internal::ObjectClass>
{
typedef SessionClass self;
typedef detail::ClassTemplate<Soup::impl::internal::SessionClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Session::auth_required (SoupSession* session, SoupMessage* msg, SoupAuth* auth, gboolean retrying);
// void Session::auth_required (::SoupSession* session, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
GI_INLINE_DECL void auth_required_ (Soup::Message msg, Soup::Auth auth, gboolean retrying) noexcept override;

// void Session::authenticate (SoupSession* session, SoupMessage* msg, SoupAuth* auth, gboolean retrying);
// void Session::authenticate (::SoupSession* session, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
GI_INLINE_DECL void authenticate_ (Soup::Message msg, Soup::Auth auth, gboolean retrying) noexcept override;

// void Session::cancel_message (SoupSession* session, SoupMessage* msg, guint status_code);
// void Session::cancel_message (::SoupSession* session, ::SoupMessage* msg, guint status_code);
GI_INLINE_DECL void cancel_message_ (Soup::Message msg, guint status_code) noexcept override;

// void Session::flush_queue (SoupSession* session);
// void Session::flush_queue (::SoupSession* session);
GI_INLINE_DECL void flush_queue_ () noexcept override;

// void Session::kick (SoupSession* session);
// void Session::kick (::SoupSession* session);
GI_INLINE_DECL void kick_ () noexcept override;

// void Session::queue_message (SoupSession* session, SoupMessage* msg, SoupSessionCallback callback, gpointer user_data);
// void Session::queue_message (::SoupSession* session, ::SoupMessage* msg, Soup::SessionCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// void Session::request_started (SoupSession* session, SoupMessage* msg, SoupSocket* socket);
// void Session::request_started (::SoupSession* session, ::SoupMessage* msg, ::SoupSocket* socket);
GI_INLINE_DECL void request_started_ (Soup::Message msg, Soup::Socket socket) noexcept override;

// void Session::requeue_message (SoupSession* session, SoupMessage* msg);
// void Session::requeue_message (::SoupSession* session, ::SoupMessage* msg);
GI_INLINE_DECL void requeue_message_ (Soup::Message msg) noexcept override;

// guint Session::send_message (SoupSession* session, SoupMessage* msg);
// guint Session::send_message (::SoupSession* session, ::SoupMessage* msg);
GI_INLINE_DECL guint send_message_ (Soup::Message msg) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using SessionImpl = detail::ObjectImpl<Session, internal::SessionClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
