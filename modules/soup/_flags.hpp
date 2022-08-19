// AUTO-GENERATED

#ifndef _GI_SOUP__FLAGS_HPP_
#define _GI_SOUP__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Soup {

enum class Cacheability {
  CACHEABLE_ = SOUP_CACHE_CACHEABLE,
  UNCACHEABLE_ = SOUP_CACHE_UNCACHEABLE,
  INVALIDATES_ = SOUP_CACHE_INVALIDATES,
  VALIDATES_ = SOUP_CACHE_VALIDATES,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::Cacheability>
{ typedef SoupCacheability type; }; 
template<> struct declare_cpptype_of<SoupCacheability>
{ typedef Soup::Cacheability type; }; 

template<> struct declare_gtype_of<Soup::Cacheability>
{ static GType get_type() { return soup_cacheability_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class Expectation {
  UNRECOGNIZED_ = SOUP_EXPECTATION_UNRECOGNIZED,
  CONTINUE_ = SOUP_EXPECTATION_CONTINUE,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::Expectation>
{ typedef SoupExpectation type; }; 
template<> struct declare_cpptype_of<SoupExpectation>
{ typedef Soup::Expectation type; }; 

template<> struct declare_gtype_of<Soup::Expectation>
{ static GType get_type() { return soup_expectation_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class MessageFlags {
  NO_REDIRECT_ = SOUP_MESSAGE_NO_REDIRECT,
  CAN_REBUILD_ = SOUP_MESSAGE_CAN_REBUILD,
  OVERWRITE_CHUNKS_ = SOUP_MESSAGE_OVERWRITE_CHUNKS,
  CONTENT_DECODED_ = SOUP_MESSAGE_CONTENT_DECODED,
  CERTIFICATE_TRUSTED_ = SOUP_MESSAGE_CERTIFICATE_TRUSTED,
  NEW_CONNECTION_ = SOUP_MESSAGE_NEW_CONNECTION,
  IDEMPOTENT_ = SOUP_MESSAGE_IDEMPOTENT,
  IGNORE_CONNECTION_LIMITS_ = SOUP_MESSAGE_IGNORE_CONNECTION_LIMITS,
  DO_NOT_USE_AUTH_CACHE_ = SOUP_MESSAGE_DO_NOT_USE_AUTH_CACHE,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::MessageFlags>
{ typedef SoupMessageFlags type; }; 
template<> struct declare_cpptype_of<SoupMessageFlags>
{ typedef Soup::MessageFlags type; }; 

template<> struct declare_gtype_of<Soup::MessageFlags>
{ static GType get_type() { return soup_message_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

enum class ServerListenOptions {
  HTTPS_ = SOUP_SERVER_LISTEN_HTTPS,
  IPV4_ONLY_ = SOUP_SERVER_LISTEN_IPV4_ONLY,
  IPV6_ONLY_ = SOUP_SERVER_LISTEN_IPV6_ONLY,
};

} // namespace Soup

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Soup::ServerListenOptions>
{ typedef SoupServerListenOptions type; }; 
template<> struct declare_cpptype_of<SoupServerListenOptions>
{ typedef Soup::ServerListenOptions type; }; 

template<> struct declare_gtype_of<Soup::ServerListenOptions>
{ static GType get_type() { return soup_server_listen_options_get_type(); } };


} // namespace repository

} // namespace gi


#endif
