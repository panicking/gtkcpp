// AUTO-GENERATED

#ifndef _GI_SOUP_CLIENTCONTEXT_HPP_
#define _GI_SOUP_CLIENTCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Address;
class AuthDomain;
class Socket;

class ClientContext;

namespace base {


#define GI_SOUP_CLIENTCONTEXT_BASE base::ClientContextBase
class ClientContextBase : public gi::detail::GBoxedWrapper<ClientContextBase, ::SoupClientContext>
{
typedef gi::detail::GBoxedWrapper<ClientContextBase, ::SoupClientContext> super_type;
public:

ClientContextBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return soup_client_context_get_type(); } 

// SoupAddress* soup_client_context_get_address (SoupClientContext* client);
// ::SoupAddress* soup_client_context_get_address (::SoupClientContext* client);
// IGNORE; deprecated

// SoupAuthDomain* soup_client_context_get_auth_domain (SoupClientContext* client);
// ::SoupAuthDomain* soup_client_context_get_auth_domain (::SoupClientContext* client);
GI_INLINE_DECL Soup::AuthDomain get_auth_domain () noexcept;

// const char* soup_client_context_get_auth_user (SoupClientContext* client);
// const char* soup_client_context_get_auth_user (::SoupClientContext* client);
GI_INLINE_DECL std::string get_auth_user () noexcept;

// GSocket* soup_client_context_get_gsocket (SoupClientContext* client);
// ::GSocket* soup_client_context_get_gsocket (::SoupClientContext* client);
GI_INLINE_DECL Gio::Socket get_gsocket () noexcept;

// const char* soup_client_context_get_host (SoupClientContext* client);
// const char* soup_client_context_get_host (::SoupClientContext* client);
GI_INLINE_DECL std::string get_host () noexcept;

// GSocketAddress* soup_client_context_get_local_address (SoupClientContext* client);
// ::GSocketAddress* soup_client_context_get_local_address (::SoupClientContext* client);
GI_INLINE_DECL Gio::SocketAddress get_local_address () noexcept;

// GSocketAddress* soup_client_context_get_remote_address (SoupClientContext* client);
// ::GSocketAddress* soup_client_context_get_remote_address (::SoupClientContext* client);
GI_INLINE_DECL Gio::SocketAddress get_remote_address () noexcept;

// SoupSocket* soup_client_context_get_socket (SoupClientContext* client);
// ::SoupSocket* soup_client_context_get_socket (::SoupClientContext* client);
// IGNORE; deprecated

// GIOStream* soup_client_context_steal_connection (SoupClientContext* client);
// ::GIOStream* soup_client_context_steal_connection (::SoupClientContext* client);
GI_INLINE_DECL Gio::IOStream steal_connection () noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/clientcontext_extra_def.hpp>)
#include <soup/clientcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/clientcontext_extra.hpp>)
#include <soup/clientcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class ClientContext : public GI_SOUP_CLIENTCONTEXT_BASE
{ typedef GI_SOUP_CLIENTCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupClientContext>
{ typedef Soup::ClientContext type; }; 

} // namespace repository

} // namespace gi

#endif
