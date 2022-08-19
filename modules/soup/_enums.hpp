// AUTO-GENERATED

#ifndef _GI_SOUP__ENUMS_HPP_
#define _GI_SOUP__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Soup {

enum class AddressFamily {
  INVALID_ = SOUP_ADDRESS_FAMILY_INVALID,
  IPV4_ = SOUP_ADDRESS_FAMILY_IPV4,
  IPV6_ = SOUP_ADDRESS_FAMILY_IPV6,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::AddressFamily>
{ typedef SoupAddressFamily type; }; 
template<> struct declare_cpptype_of<SoupAddressFamily>
{ typedef Soup::AddressFamily type; }; 

template<> struct declare_gtype_of<Soup::AddressFamily>
{ static GType get_type() { return soup_address_family_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class CacheResponse {
  FRESH_ = SOUP_CACHE_RESPONSE_FRESH,
  NEEDS_VALIDATION_ = SOUP_CACHE_RESPONSE_NEEDS_VALIDATION,
  STALE_ = SOUP_CACHE_RESPONSE_STALE,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::CacheResponse>
{ typedef SoupCacheResponse type; }; 
template<> struct declare_cpptype_of<SoupCacheResponse>
{ typedef Soup::CacheResponse type; }; 

template<> struct declare_gtype_of<Soup::CacheResponse>
{ static GType get_type() { return soup_cache_response_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class CacheType {
  SINGLE_USER_ = SOUP_CACHE_SINGLE_USER,
  SHARED_ = SOUP_CACHE_SHARED,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::CacheType>
{ typedef SoupCacheType type; }; 
template<> struct declare_cpptype_of<SoupCacheType>
{ typedef Soup::CacheType type; }; 

template<> struct declare_gtype_of<Soup::CacheType>
{ static GType get_type() { return soup_cache_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class ConnectionState {
  NEW_ = SOUP_CONNECTION_NEW,
  CONNECTING_ = SOUP_CONNECTION_CONNECTING,
  IDLE_ = SOUP_CONNECTION_IDLE,
  IN_USE_ = SOUP_CONNECTION_IN_USE,
  REMOTE_DISCONNECTED_ = SOUP_CONNECTION_REMOTE_DISCONNECTED,
  DISCONNECTED_ = SOUP_CONNECTION_DISCONNECTED,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::ConnectionState>
{ typedef SoupConnectionState type; }; 
template<> struct declare_cpptype_of<SoupConnectionState>
{ typedef Soup::ConnectionState type; }; 

template<> struct declare_gtype_of<Soup::ConnectionState>
{ static GType get_type() { return soup_connection_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class CookieJarAcceptPolicy {
  ALWAYS_ = SOUP_COOKIE_JAR_ACCEPT_ALWAYS,
  NEVER_ = SOUP_COOKIE_JAR_ACCEPT_NEVER,
  NO_THIRD_PARTY_ = SOUP_COOKIE_JAR_ACCEPT_NO_THIRD_PARTY,
  GRANDFATHERED_THIRD_PARTY_ = SOUP_COOKIE_JAR_ACCEPT_GRANDFATHERED_THIRD_PARTY,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::CookieJarAcceptPolicy>
{ typedef SoupCookieJarAcceptPolicy type; }; 
template<> struct declare_cpptype_of<SoupCookieJarAcceptPolicy>
{ typedef Soup::CookieJarAcceptPolicy type; }; 

template<> struct declare_gtype_of<Soup::CookieJarAcceptPolicy>
{ static GType get_type() { return soup_cookie_jar_accept_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class DateFormat {
  HTTP_ = SOUP_DATE_HTTP,
  COOKIE_ = SOUP_DATE_COOKIE,
  RFC2822_ = SOUP_DATE_RFC2822,
  ISO8601_COMPACT_ = SOUP_DATE_ISO8601_COMPACT,
  ISO8601_FULL_ = SOUP_DATE_ISO8601_FULL,
  ISO8601_ = SOUP_DATE_ISO8601,
  ISO8601_XMLRPC_ = SOUP_DATE_ISO8601_XMLRPC,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::DateFormat>
{ typedef SoupDateFormat type; }; 
template<> struct declare_cpptype_of<SoupDateFormat>
{ typedef Soup::DateFormat type; }; 

template<> struct declare_gtype_of<Soup::DateFormat>
{ static GType get_type() { return soup_date_format_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class Encoding {
  UNRECOGNIZED_ = SOUP_ENCODING_UNRECOGNIZED,
  NONE_ = SOUP_ENCODING_NONE,
  CONTENT_LENGTH_ = SOUP_ENCODING_CONTENT_LENGTH,
  EOF_ = SOUP_ENCODING_EOF,
  CHUNKED_ = SOUP_ENCODING_CHUNKED,
  BYTERANGES_ = SOUP_ENCODING_BYTERANGES,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::Encoding>
{ typedef SoupEncoding type; }; 
template<> struct declare_cpptype_of<SoupEncoding>
{ typedef Soup::Encoding type; }; 

template<> struct declare_gtype_of<Soup::Encoding>
{ static GType get_type() { return soup_encoding_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class HTTPVersion {
  HTTP_1_0_ = SOUP_HTTP_1_0,
  HTTP_1_1_ = SOUP_HTTP_1_1,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::HTTPVersion>
{ typedef SoupHTTPVersion type; }; 
template<> struct declare_cpptype_of<SoupHTTPVersion>
{ typedef Soup::HTTPVersion type; }; 

template<> struct declare_gtype_of<Soup::HTTPVersion>
{ static GType get_type() { return soup_http_version_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class KnownStatusCode {
  NONE_ = SOUP_KNOWN_STATUS_CODE_NONE,
  CANCELLED_ = SOUP_KNOWN_STATUS_CODE_CANCELLED,
  CANT_RESOLVE_ = SOUP_KNOWN_STATUS_CODE_CANT_RESOLVE,
  CANT_RESOLVE_PROXY_ = SOUP_KNOWN_STATUS_CODE_CANT_RESOLVE_PROXY,
  CANT_CONNECT_ = SOUP_KNOWN_STATUS_CODE_CANT_CONNECT,
  CANT_CONNECT_PROXY_ = SOUP_KNOWN_STATUS_CODE_CANT_CONNECT_PROXY,
  SSL_FAILED_ = SOUP_KNOWN_STATUS_CODE_SSL_FAILED,
  IO_ERROR_ = SOUP_KNOWN_STATUS_CODE_IO_ERROR,
  MALFORMED_ = SOUP_KNOWN_STATUS_CODE_MALFORMED,
  TRY_AGAIN_ = SOUP_KNOWN_STATUS_CODE_TRY_AGAIN,
  TOO_MANY_REDIRECTS_ = SOUP_KNOWN_STATUS_CODE_TOO_MANY_REDIRECTS,
  TLS_FAILED_ = SOUP_KNOWN_STATUS_CODE_TLS_FAILED,
  CONTINUE_ = SOUP_KNOWN_STATUS_CODE_CONTINUE,
  SWITCHING_PROTOCOLS_ = SOUP_KNOWN_STATUS_CODE_SWITCHING_PROTOCOLS,
  PROCESSING_ = SOUP_KNOWN_STATUS_CODE_PROCESSING,
  OK_ = SOUP_KNOWN_STATUS_CODE_OK,
  CREATED_ = SOUP_KNOWN_STATUS_CODE_CREATED,
  ACCEPTED_ = SOUP_KNOWN_STATUS_CODE_ACCEPTED,
  NON_AUTHORITATIVE_ = SOUP_KNOWN_STATUS_CODE_NON_AUTHORITATIVE,
  NO_CONTENT_ = SOUP_KNOWN_STATUS_CODE_NO_CONTENT,
  RESET_CONTENT_ = SOUP_KNOWN_STATUS_CODE_RESET_CONTENT,
  PARTIAL_CONTENT_ = SOUP_KNOWN_STATUS_CODE_PARTIAL_CONTENT,
  MULTI_STATUS_ = SOUP_KNOWN_STATUS_CODE_MULTI_STATUS,
  MULTIPLE_CHOICES_ = SOUP_KNOWN_STATUS_CODE_MULTIPLE_CHOICES,
  MOVED_PERMANENTLY_ = SOUP_KNOWN_STATUS_CODE_MOVED_PERMANENTLY,
  FOUND_ = SOUP_KNOWN_STATUS_CODE_FOUND,
  MOVED_TEMPORARILY_ = SOUP_KNOWN_STATUS_CODE_MOVED_TEMPORARILY,
  SEE_OTHER_ = SOUP_KNOWN_STATUS_CODE_SEE_OTHER,
  NOT_MODIFIED_ = SOUP_KNOWN_STATUS_CODE_NOT_MODIFIED,
  USE_PROXY_ = SOUP_KNOWN_STATUS_CODE_USE_PROXY,
  NOT_APPEARING_IN_THIS_PROTOCOL_ = SOUP_KNOWN_STATUS_CODE_NOT_APPEARING_IN_THIS_PROTOCOL,
  TEMPORARY_REDIRECT_ = SOUP_KNOWN_STATUS_CODE_TEMPORARY_REDIRECT,
  BAD_REQUEST_ = SOUP_KNOWN_STATUS_CODE_BAD_REQUEST,
  UNAUTHORIZED_ = SOUP_KNOWN_STATUS_CODE_UNAUTHORIZED,
  PAYMENT_REQUIRED_ = SOUP_KNOWN_STATUS_CODE_PAYMENT_REQUIRED,
  FORBIDDEN_ = SOUP_KNOWN_STATUS_CODE_FORBIDDEN,
  NOT_FOUND_ = SOUP_KNOWN_STATUS_CODE_NOT_FOUND,
  METHOD_NOT_ALLOWED_ = SOUP_KNOWN_STATUS_CODE_METHOD_NOT_ALLOWED,
  NOT_ACCEPTABLE_ = SOUP_KNOWN_STATUS_CODE_NOT_ACCEPTABLE,
  PROXY_AUTHENTICATION_REQUIRED_ = SOUP_KNOWN_STATUS_CODE_PROXY_AUTHENTICATION_REQUIRED,
  PROXY_UNAUTHORIZED_ = SOUP_KNOWN_STATUS_CODE_PROXY_UNAUTHORIZED,
  REQUEST_TIMEOUT_ = SOUP_KNOWN_STATUS_CODE_REQUEST_TIMEOUT,
  CONFLICT_ = SOUP_KNOWN_STATUS_CODE_CONFLICT,
  GONE_ = SOUP_KNOWN_STATUS_CODE_GONE,
  LENGTH_REQUIRED_ = SOUP_KNOWN_STATUS_CODE_LENGTH_REQUIRED,
  PRECONDITION_FAILED_ = SOUP_KNOWN_STATUS_CODE_PRECONDITION_FAILED,
  REQUEST_ENTITY_TOO_LARGE_ = SOUP_KNOWN_STATUS_CODE_REQUEST_ENTITY_TOO_LARGE,
  REQUEST_URI_TOO_LONG_ = SOUP_KNOWN_STATUS_CODE_REQUEST_URI_TOO_LONG,
  UNSUPPORTED_MEDIA_TYPE_ = SOUP_KNOWN_STATUS_CODE_UNSUPPORTED_MEDIA_TYPE,
  REQUESTED_RANGE_NOT_SATISFIABLE_ = SOUP_KNOWN_STATUS_CODE_REQUESTED_RANGE_NOT_SATISFIABLE,
  INVALID_RANGE_ = SOUP_KNOWN_STATUS_CODE_INVALID_RANGE,
  EXPECTATION_FAILED_ = SOUP_KNOWN_STATUS_CODE_EXPECTATION_FAILED,
  UNPROCESSABLE_ENTITY_ = SOUP_KNOWN_STATUS_CODE_UNPROCESSABLE_ENTITY,
  LOCKED_ = SOUP_KNOWN_STATUS_CODE_LOCKED,
  FAILED_DEPENDENCY_ = SOUP_KNOWN_STATUS_CODE_FAILED_DEPENDENCY,
  INTERNAL_SERVER_ERROR_ = SOUP_KNOWN_STATUS_CODE_INTERNAL_SERVER_ERROR,
  NOT_IMPLEMENTED_ = SOUP_KNOWN_STATUS_CODE_NOT_IMPLEMENTED,
  BAD_GATEWAY_ = SOUP_KNOWN_STATUS_CODE_BAD_GATEWAY,
  SERVICE_UNAVAILABLE_ = SOUP_KNOWN_STATUS_CODE_SERVICE_UNAVAILABLE,
  GATEWAY_TIMEOUT_ = SOUP_KNOWN_STATUS_CODE_GATEWAY_TIMEOUT,
  HTTP_VERSION_NOT_SUPPORTED_ = SOUP_KNOWN_STATUS_CODE_HTTP_VERSION_NOT_SUPPORTED,
  INSUFFICIENT_STORAGE_ = SOUP_KNOWN_STATUS_CODE_INSUFFICIENT_STORAGE,
  NOT_EXTENDED_ = SOUP_KNOWN_STATUS_CODE_NOT_EXTENDED,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::KnownStatusCode>
{ typedef SoupKnownStatusCode type; }; 
template<> struct declare_cpptype_of<SoupKnownStatusCode>
{ typedef Soup::KnownStatusCode type; }; 

template<> struct declare_gtype_of<Soup::KnownStatusCode>
{ static GType get_type() { return soup_known_status_code_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class LoggerLogLevel {
  NONE_ = SOUP_LOGGER_LOG_NONE,
  MINIMAL_ = SOUP_LOGGER_LOG_MINIMAL,
  HEADERS_ = SOUP_LOGGER_LOG_HEADERS,
  BODY_ = SOUP_LOGGER_LOG_BODY,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::LoggerLogLevel>
{ typedef SoupLoggerLogLevel type; }; 
template<> struct declare_cpptype_of<SoupLoggerLogLevel>
{ typedef Soup::LoggerLogLevel type; }; 

template<> struct declare_gtype_of<Soup::LoggerLogLevel>
{ static GType get_type() { return soup_logger_log_level_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class MemoryUse {
  STATIC_ = SOUP_MEMORY_STATIC,
  TAKE_ = SOUP_MEMORY_TAKE,
  COPY_ = SOUP_MEMORY_COPY,
  TEMPORARY_ = SOUP_MEMORY_TEMPORARY,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::MemoryUse>
{ typedef SoupMemoryUse type; }; 
template<> struct declare_cpptype_of<SoupMemoryUse>
{ typedef Soup::MemoryUse type; }; 

template<> struct declare_gtype_of<Soup::MemoryUse>
{ static GType get_type() { return soup_memory_use_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class MessageHeadersType {
  REQUEST_ = SOUP_MESSAGE_HEADERS_REQUEST,
  RESPONSE_ = SOUP_MESSAGE_HEADERS_RESPONSE,
  MULTIPART_ = SOUP_MESSAGE_HEADERS_MULTIPART,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::MessageHeadersType>
{ typedef SoupMessageHeadersType type; }; 
template<> struct declare_cpptype_of<SoupMessageHeadersType>
{ typedef Soup::MessageHeadersType type; }; 

template<> struct declare_gtype_of<Soup::MessageHeadersType>
{ static GType get_type() { return soup_message_headers_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class MessagePriority {
  VERY_LOW_ = SOUP_MESSAGE_PRIORITY_VERY_LOW,
  LOW_ = SOUP_MESSAGE_PRIORITY_LOW,
  NORMAL_ = SOUP_MESSAGE_PRIORITY_NORMAL,
  HIGH_ = SOUP_MESSAGE_PRIORITY_HIGH,
  VERY_HIGH_ = SOUP_MESSAGE_PRIORITY_VERY_HIGH,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::MessagePriority>
{ typedef SoupMessagePriority type; }; 
template<> struct declare_cpptype_of<SoupMessagePriority>
{ typedef Soup::MessagePriority type; }; 

template<> struct declare_gtype_of<Soup::MessagePriority>
{ static GType get_type() { return soup_message_priority_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class RequestError {
  BAD_URI_ = SOUP_REQUEST_ERROR_BAD_URI,
  UNSUPPORTED_URI_SCHEME_ = SOUP_REQUEST_ERROR_UNSUPPORTED_URI_SCHEME,
  PARSING_ = SOUP_REQUEST_ERROR_PARSING,
  ENCODING_ = SOUP_REQUEST_ERROR_ENCODING,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::RequestError>
{ typedef SoupRequestError type; }; 
template<> struct declare_cpptype_of<SoupRequestError>
{ typedef Soup::RequestError type; }; 

template<> struct declare_gtype_of<Soup::RequestError>
{ static GType get_type() { return soup_request_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class RequesterError {
  BAD_URI_ = SOUP_REQUESTER_ERROR_BAD_URI,
  UNSUPPORTED_URI_SCHEME_ = SOUP_REQUESTER_ERROR_UNSUPPORTED_URI_SCHEME,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::RequesterError>
{ typedef SoupRequesterError type; }; 
template<> struct declare_cpptype_of<SoupRequesterError>
{ typedef Soup::RequesterError type; }; 

template<> struct declare_gtype_of<Soup::RequesterError>
{ static GType get_type() { return soup_requester_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class SameSitePolicy {
  NONE_ = SOUP_SAME_SITE_POLICY_NONE,
  LAX_ = SOUP_SAME_SITE_POLICY_LAX,
  STRICT_ = SOUP_SAME_SITE_POLICY_STRICT,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::SameSitePolicy>
{ typedef SoupSameSitePolicy type; }; 
template<> struct declare_cpptype_of<SoupSameSitePolicy>
{ typedef Soup::SameSitePolicy type; }; 

template<> struct declare_gtype_of<Soup::SameSitePolicy>
{ static GType get_type() { return soup_same_site_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class SocketIOStatus {
  OK_ = SOUP_SOCKET_OK,
  WOULD_BLOCK_ = SOUP_SOCKET_WOULD_BLOCK,
  EOF_ = SOUP_SOCKET_EOF,
  ERROR_ = SOUP_SOCKET_ERROR,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::SocketIOStatus>
{ typedef SoupSocketIOStatus type; }; 
template<> struct declare_cpptype_of<SoupSocketIOStatus>
{ typedef Soup::SocketIOStatus type; }; 

template<> struct declare_gtype_of<Soup::SocketIOStatus>
{ static GType get_type() { return soup_socket_io_status_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class Soup_status {
  NONE_ = SOUP_STATUS_NONE,
  CANCELLED_ = SOUP_STATUS_CANCELLED,
  CANT_RESOLVE_ = SOUP_STATUS_CANT_RESOLVE,
  CANT_RESOLVE_PROXY_ = SOUP_STATUS_CANT_RESOLVE_PROXY,
  CANT_CONNECT_ = SOUP_STATUS_CANT_CONNECT,
  CANT_CONNECT_PROXY_ = SOUP_STATUS_CANT_CONNECT_PROXY,
  SSL_FAILED_ = SOUP_STATUS_SSL_FAILED,
  IO_ERROR_ = SOUP_STATUS_IO_ERROR,
  MALFORMED_ = SOUP_STATUS_MALFORMED,
  TRY_AGAIN_ = SOUP_STATUS_TRY_AGAIN,
  TOO_MANY_REDIRECTS_ = SOUP_STATUS_TOO_MANY_REDIRECTS,
  TLS_FAILED_ = SOUP_STATUS_TLS_FAILED,
  CONTINUE_ = SOUP_STATUS_CONTINUE,
  SWITCHING_PROTOCOLS_ = SOUP_STATUS_SWITCHING_PROTOCOLS,
  PROCESSING_ = SOUP_STATUS_PROCESSING,
  OK_ = SOUP_STATUS_OK,
  CREATED_ = SOUP_STATUS_CREATED,
  ACCEPTED_ = SOUP_STATUS_ACCEPTED,
  NON_AUTHORITATIVE_ = SOUP_STATUS_NON_AUTHORITATIVE,
  NO_CONTENT_ = SOUP_STATUS_NO_CONTENT,
  RESET_CONTENT_ = SOUP_STATUS_RESET_CONTENT,
  PARTIAL_CONTENT_ = SOUP_STATUS_PARTIAL_CONTENT,
  MULTI_STATUS_ = SOUP_STATUS_MULTI_STATUS,
  MULTIPLE_CHOICES_ = SOUP_STATUS_MULTIPLE_CHOICES,
  MOVED_PERMANENTLY_ = SOUP_STATUS_MOVED_PERMANENTLY,
  FOUND_ = SOUP_STATUS_FOUND,
  MOVED_TEMPORARILY_ = SOUP_STATUS_MOVED_TEMPORARILY,
  SEE_OTHER_ = SOUP_STATUS_SEE_OTHER,
  NOT_MODIFIED_ = SOUP_STATUS_NOT_MODIFIED,
  USE_PROXY_ = SOUP_STATUS_USE_PROXY,
  NOT_APPEARING_IN_THIS_PROTOCOL_ = SOUP_STATUS_NOT_APPEARING_IN_THIS_PROTOCOL,
  TEMPORARY_REDIRECT_ = SOUP_STATUS_TEMPORARY_REDIRECT,
  PERMANENT_REDIRECT_ = SOUP_STATUS_PERMANENT_REDIRECT,
  BAD_REQUEST_ = SOUP_STATUS_BAD_REQUEST,
  UNAUTHORIZED_ = SOUP_STATUS_UNAUTHORIZED,
  PAYMENT_REQUIRED_ = SOUP_STATUS_PAYMENT_REQUIRED,
  FORBIDDEN_ = SOUP_STATUS_FORBIDDEN,
  NOT_FOUND_ = SOUP_STATUS_NOT_FOUND,
  METHOD_NOT_ALLOWED_ = SOUP_STATUS_METHOD_NOT_ALLOWED,
  NOT_ACCEPTABLE_ = SOUP_STATUS_NOT_ACCEPTABLE,
  PROXY_AUTHENTICATION_REQUIRED_ = SOUP_STATUS_PROXY_AUTHENTICATION_REQUIRED,
  PROXY_UNAUTHORIZED_ = SOUP_STATUS_PROXY_UNAUTHORIZED,
  REQUEST_TIMEOUT_ = SOUP_STATUS_REQUEST_TIMEOUT,
  CONFLICT_ = SOUP_STATUS_CONFLICT,
  GONE_ = SOUP_STATUS_GONE,
  LENGTH_REQUIRED_ = SOUP_STATUS_LENGTH_REQUIRED,
  PRECONDITION_FAILED_ = SOUP_STATUS_PRECONDITION_FAILED,
  REQUEST_ENTITY_TOO_LARGE_ = SOUP_STATUS_REQUEST_ENTITY_TOO_LARGE,
  REQUEST_URI_TOO_LONG_ = SOUP_STATUS_REQUEST_URI_TOO_LONG,
  UNSUPPORTED_MEDIA_TYPE_ = SOUP_STATUS_UNSUPPORTED_MEDIA_TYPE,
  REQUESTED_RANGE_NOT_SATISFIABLE_ = SOUP_STATUS_REQUESTED_RANGE_NOT_SATISFIABLE,
  INVALID_RANGE_ = SOUP_STATUS_INVALID_RANGE,
  EXPECTATION_FAILED_ = SOUP_STATUS_EXPECTATION_FAILED,
  UNPROCESSABLE_ENTITY_ = SOUP_STATUS_UNPROCESSABLE_ENTITY,
  LOCKED_ = SOUP_STATUS_LOCKED,
  FAILED_DEPENDENCY_ = SOUP_STATUS_FAILED_DEPENDENCY,
  INTERNAL_SERVER_ERROR_ = SOUP_STATUS_INTERNAL_SERVER_ERROR,
  NOT_IMPLEMENTED_ = SOUP_STATUS_NOT_IMPLEMENTED,
  BAD_GATEWAY_ = SOUP_STATUS_BAD_GATEWAY,
  SERVICE_UNAVAILABLE_ = SOUP_STATUS_SERVICE_UNAVAILABLE,
  GATEWAY_TIMEOUT_ = SOUP_STATUS_GATEWAY_TIMEOUT,
  HTTP_VERSION_NOT_SUPPORTED_ = SOUP_STATUS_HTTP_VERSION_NOT_SUPPORTED,
  INSUFFICIENT_STORAGE_ = SOUP_STATUS_INSUFFICIENT_STORAGE,
  NOT_EXTENDED_ = SOUP_STATUS_NOT_EXTENDED,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::Soup_status>
{ typedef SoupStatus type; }; 
template<> struct declare_cpptype_of<SoupStatus>
{ typedef Soup::Soup_status type; }; 

template<> struct declare_gtype_of<Soup::Soup_status>
{ static GType get_type() { return soup_status_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class TLDError {
  INVALID_HOSTNAME_ = SOUP_TLD_ERROR_INVALID_HOSTNAME,
  IS_IP_ADDRESS_ = SOUP_TLD_ERROR_IS_IP_ADDRESS,
  NOT_ENOUGH_DOMAINS_ = SOUP_TLD_ERROR_NOT_ENOUGH_DOMAINS,
  NO_BASE_DOMAIN_ = SOUP_TLD_ERROR_NO_BASE_DOMAIN,
  NO_PSL_DATA_ = SOUP_TLD_ERROR_NO_PSL_DATA,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::TLDError>
{ typedef SoupTLDError type; }; 
template<> struct declare_cpptype_of<SoupTLDError>
{ typedef Soup::TLDError type; }; 

template<> struct declare_gtype_of<Soup::TLDError>
{ static GType get_type() { return soup_tld_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class WebsocketCloseCode {
  NORMAL_ = SOUP_WEBSOCKET_CLOSE_NORMAL,
  GOING_AWAY_ = SOUP_WEBSOCKET_CLOSE_GOING_AWAY,
  PROTOCOL_ERROR_ = SOUP_WEBSOCKET_CLOSE_PROTOCOL_ERROR,
  UNSUPPORTED_DATA_ = SOUP_WEBSOCKET_CLOSE_UNSUPPORTED_DATA,
  NO_STATUS_ = SOUP_WEBSOCKET_CLOSE_NO_STATUS,
  ABNORMAL_ = SOUP_WEBSOCKET_CLOSE_ABNORMAL,
  BAD_DATA_ = SOUP_WEBSOCKET_CLOSE_BAD_DATA,
  POLICY_VIOLATION_ = SOUP_WEBSOCKET_CLOSE_POLICY_VIOLATION,
  TOO_BIG_ = SOUP_WEBSOCKET_CLOSE_TOO_BIG,
  NO_EXTENSION_ = SOUP_WEBSOCKET_CLOSE_NO_EXTENSION,
  SERVER_ERROR_ = SOUP_WEBSOCKET_CLOSE_SERVER_ERROR,
  TLS_HANDSHAKE_ = SOUP_WEBSOCKET_CLOSE_TLS_HANDSHAKE,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::WebsocketCloseCode>
{ typedef SoupWebsocketCloseCode type; }; 
template<> struct declare_cpptype_of<SoupWebsocketCloseCode>
{ typedef Soup::WebsocketCloseCode type; }; 

template<> struct declare_gtype_of<Soup::WebsocketCloseCode>
{ static GType get_type() { return soup_websocket_close_code_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class WebsocketConnectionType {
  UNKNOWN_ = SOUP_WEBSOCKET_CONNECTION_UNKNOWN,
  CLIENT_ = SOUP_WEBSOCKET_CONNECTION_CLIENT,
  SERVER_ = SOUP_WEBSOCKET_CONNECTION_SERVER,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::WebsocketConnectionType>
{ typedef SoupWebsocketConnectionType type; }; 
template<> struct declare_cpptype_of<SoupWebsocketConnectionType>
{ typedef Soup::WebsocketConnectionType type; }; 

template<> struct declare_gtype_of<Soup::WebsocketConnectionType>
{ static GType get_type() { return soup_websocket_connection_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class WebsocketDataType {
  TEXT_ = SOUP_WEBSOCKET_DATA_TEXT,
  BINARY_ = SOUP_WEBSOCKET_DATA_BINARY,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::WebsocketDataType>
{ typedef SoupWebsocketDataType type; }; 
template<> struct declare_cpptype_of<SoupWebsocketDataType>
{ typedef Soup::WebsocketDataType type; }; 

template<> struct declare_gtype_of<Soup::WebsocketDataType>
{ static GType get_type() { return soup_websocket_data_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class WebsocketError {
  FAILED_ = SOUP_WEBSOCKET_ERROR_FAILED,
  NOT_WEBSOCKET_ = SOUP_WEBSOCKET_ERROR_NOT_WEBSOCKET,
  BAD_HANDSHAKE_ = SOUP_WEBSOCKET_ERROR_BAD_HANDSHAKE,
  BAD_ORIGIN_ = SOUP_WEBSOCKET_ERROR_BAD_ORIGIN,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::WebsocketError>
{ typedef SoupWebsocketError type; }; 
template<> struct declare_cpptype_of<SoupWebsocketError>
{ typedef Soup::WebsocketError type; }; 

template<> struct declare_gtype_of<Soup::WebsocketError>
{ static GType get_type() { return soup_websocket_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class WebsocketState {
  OPEN_ = SOUP_WEBSOCKET_STATE_OPEN,
  CLOSING_ = SOUP_WEBSOCKET_STATE_CLOSING,
  CLOSED_ = SOUP_WEBSOCKET_STATE_CLOSED,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::WebsocketState>
{ typedef SoupWebsocketState type; }; 
template<> struct declare_cpptype_of<SoupWebsocketState>
{ typedef Soup::WebsocketState type; }; 

template<> struct declare_gtype_of<Soup::WebsocketState>
{ static GType get_type() { return soup_websocket_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class XMLRPCError {
  ARGUMENTS_ = SOUP_XMLRPC_ERROR_ARGUMENTS,
  RETVAL_ = SOUP_XMLRPC_ERROR_RETVAL,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::XMLRPCError>
{ typedef SoupXMLRPCError type; }; 
template<> struct declare_cpptype_of<SoupXMLRPCError>
{ typedef Soup::XMLRPCError type; }; 

template<> struct declare_gtype_of<Soup::XMLRPCError>
{ static GType get_type() { return soup_xmlrpc_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class XMLRPCFault {
  PARSE_ERROR_NOT_WELL_FORMED_ = SOUP_XMLRPC_FAULT_PARSE_ERROR_NOT_WELL_FORMED,
  PARSE_ERROR_UNSUPPORTED_ENCODING_ = SOUP_XMLRPC_FAULT_PARSE_ERROR_UNSUPPORTED_ENCODING,
  PARSE_ERROR_INVALID_CHARACTER_FOR_ENCODING_ = SOUP_XMLRPC_FAULT_PARSE_ERROR_INVALID_CHARACTER_FOR_ENCODING,
  SERVER_ERROR_INVALID_XML_RPC_ = SOUP_XMLRPC_FAULT_SERVER_ERROR_INVALID_XML_RPC,
  SERVER_ERROR_REQUESTED_METHOD_NOT_FOUND_ = SOUP_XMLRPC_FAULT_SERVER_ERROR_REQUESTED_METHOD_NOT_FOUND,
  SERVER_ERROR_INVALID_METHOD_PARAMETERS_ = SOUP_XMLRPC_FAULT_SERVER_ERROR_INVALID_METHOD_PARAMETERS,
  SERVER_ERROR_INTERNAL_XML_RPC_ERROR_ = SOUP_XMLRPC_FAULT_SERVER_ERROR_INTERNAL_XML_RPC_ERROR,
  APPLICATION_ERROR_ = SOUP_XMLRPC_FAULT_APPLICATION_ERROR,
  SYSTEM_ERROR_ = SOUP_XMLRPC_FAULT_SYSTEM_ERROR,
  TRANSPORT_ERROR_ = SOUP_XMLRPC_FAULT_TRANSPORT_ERROR,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::XMLRPCFault>
{ typedef SoupXMLRPCFault type; }; 
template<> struct declare_cpptype_of<SoupXMLRPCFault>
{ typedef Soup::XMLRPCFault type; }; 

template<> struct declare_gtype_of<Soup::XMLRPCFault>
{ static GType get_type() { return soup_xmlrpc_fault_get_type(); } };


} // namespace repository

} // namespace gi


#endif
