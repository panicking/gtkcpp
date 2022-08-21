// AUTO-GENERATED

#ifndef _GI_SOUP__CALLBACKS_HPP_
#define _GI_SOUP__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Soup {

class Address;
class Auth;
class AuthDomain;
class AuthDomainBasic;
class AuthDomainDigest;
class ClientContext;
class Logger;
class Message;
class ProxyURIResolver;
class Server;
class Session;
class Socket;
class URI;
class WebsocketConnection;

// typedef void (*SoupAddressCallback) (SoupAddress* addr, guint status, gpointer user_data);
// typedef void (*SoupAddressCallback) (::SoupAddress* addr, guint status, void* user_data);
typedef gi::detail::callback<void(Soup::Address addr, guint status), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> AddressCallback;

// typedef gboolean (*SoupAuthDomainBasicAuthCallback) (SoupAuthDomain* domain, SoupMessage* msg, const char* username, const char* password, gpointer user_data);
// typedef gboolean (*SoupAuthDomainBasicAuthCallback) (::SoupAuthDomainBasic* domain, ::SoupMessage* msg, const char* username, const char* password, void* user_data);
typedef gi::detail::callback<bool(Soup::AuthDomainBasic domain, Soup::Message msg, const std::string & username, const std::string & password), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> AuthDomainBasicAuthCallback;

// typedef char* (*SoupAuthDomainDigestAuthCallback) (SoupAuthDomain* domain, SoupMessage* msg, const char* username, gpointer user_data);
// typedef char* (*SoupAuthDomainDigestAuthCallback) (::SoupAuthDomainDigest* domain, ::SoupMessage* msg, const char* username, void* user_data);
typedef gi::detail::callback<std::string(Soup::AuthDomainDigest domain, Soup::Message msg, const std::string & username), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> AuthDomainDigestAuthCallback;

// typedef gboolean (*SoupAuthDomainFilter) (SoupAuthDomain* domain, SoupMessage* msg, gpointer user_data);
// typedef gboolean (*SoupAuthDomainFilter) (::SoupAuthDomain* domain, ::SoupMessage* msg, void* user_data);
typedef gi::detail::callback<bool(Soup::AuthDomain domain, Soup::Message msg), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> AuthDomainFilter;

// typedef gboolean (*SoupAuthDomainGenericAuthCallback) (SoupAuthDomain* domain, SoupMessage* msg, const char* username, gpointer user_data);
// typedef gboolean (*SoupAuthDomainGenericAuthCallback) (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* username, void* user_data);
typedef gi::detail::callback<bool(Soup::AuthDomain domain, Soup::Message msg, const std::string & username), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> AuthDomainGenericAuthCallback;

// typedef SoupLoggerLogLevel (*SoupLoggerFilter) (SoupLogger* logger, SoupMessage* msg, gpointer user_data);
// typedef ::SoupLoggerLogLevel (*SoupLoggerFilter) (::SoupLogger* logger, ::SoupMessage* msg, void* user_data);
typedef gi::detail::callback<Soup::LoggerLogLevel(Soup::Logger logger, Soup::Message msg), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> LoggerFilter;

// typedef void (*SoupLoggerPrinter) (SoupLogger* logger, SoupLoggerLogLevel level, char direction, const char* data, gpointer user_data);
// typedef void (*SoupLoggerPrinter) (::SoupLogger* logger, ::SoupLoggerLogLevel level, gchar direction, const char* data, void* user_data);
typedef gi::detail::callback<void(Soup::Logger logger, Soup::LoggerLogLevel level, gchar direction, const std::string & data), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> LoggerPrinter;

// typedef void (*SoupMessageHeadersForeachFunc) (const char* name, const char* value, gpointer user_data);
// typedef void (*SoupMessageHeadersForeachFunc) (const char* name, const char* value, void* user_data);
typedef gi::detail::callback<void(const std::string & name, const std::string & value), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> MessageHeadersForeachFunc;

// typedef void (*SoupPasswordManagerCallback) (SoupPasswordManager* password_manager, SoupMessage* msg, SoupAuth* auth, gboolean retrying, gpointer user_data);
// typedef void (*SoupPasswordManagerCallback) ( password_manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying, void* user_data);
// SKIP; password_manager type  not supported

// typedef void (*SoupProxyURIResolverCallback) (SoupProxyURIResolver* resolver, guint status, SoupURI* proxy_uri, gpointer user_data);
// typedef void (*SoupProxyURIResolverCallback) (::SoupProxyURIResolver* resolver, guint status, ::SoupURI* proxy_uri, void* user_data);
typedef gi::detail::callback<void(Soup::ProxyURIResolver resolver, guint status, Soup::URI proxy_uri), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> ProxyURIResolverCallback;

// typedef void (*SoupServerCallback) (SoupServer* server, SoupMessage* msg, const char* path, GHashTable* query, SoupClientContext* client, gpointer user_data);
// typedef void (*SoupServerCallback) (::SoupServer* server, ::SoupMessage* msg, const char* path, ::GHashTable* query, ::SoupClientContext* client, void* user_data);
// SKIP; callback container parameter not supported

// typedef void (*SoupServerWebsocketCallback) (SoupServer* server, SoupWebsocketConnection* connection, const char* path, SoupClientContext* client, gpointer user_data);
// typedef void (*SoupServerWebsocketCallback) (::SoupServer* server, ::SoupWebsocketConnection* connection, const char* path, ::SoupClientContext* client, void* user_data);
typedef gi::detail::callback<void(Soup::Server server, Soup::WebsocketConnection connection, const std::string & path, Soup::ClientContext client), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> ServerWebsocketCallback;

// typedef void (*SoupSessionCallback) (SoupSession* session, SoupMessage* msg, gpointer user_data);
// typedef void (*SoupSessionCallback) (::SoupSession* session, ::SoupMessage* msg, void* user_data);
typedef gi::detail::callback<void(Soup::Session session, Soup::Message msg), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> SessionCallback;

// typedef void (*SoupSessionConnectProgressCallback) (SoupSession* session, GSocketClientEvent event, GIOStream* connection, gpointer user_data);
// typedef void (*SoupSessionConnectProgressCallback) (::SoupSession* session, ::GSocketClientEvent event, ::GIOStream* connection, void* user_data);
typedef gi::detail::callback<void(Soup::Session session, Gio::SocketClientEvent event, Gio::IOStream connection), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> SessionConnectProgressCallback;

// typedef void (*SoupSocketCallback) (SoupSocket* sock, guint status, gpointer user_data);
// typedef void (*SoupSocketCallback) (::SoupSocket* sock, guint status, void* user_data);
typedef gi::detail::callback<void(Soup::Socket sock, guint status), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> SocketCallback;

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
