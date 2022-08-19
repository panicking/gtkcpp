// AUTO-GENERATED

#ifndef _GI_SOUP_URI_HPP_
#define _GI_SOUP_URI_HPP_


namespace gi {

namespace repository {

namespace Soup {


class URI;

namespace base {


#define GI_SOUP_URI_BASE base::URIBase
class URIBase : public gi::detail::GBoxedWrapper<URIBase, ::SoupURI>
{
typedef gi::detail::GBoxedWrapper<URIBase, ::SoupURI> super_type;
public:

URIBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return soup_uri_get_type(); } 

// const char* URI::scheme (const ::SoupURI* obj);
// const char* URI::scheme (const ::SoupURI* obj);
GI_INLINE_DECL std::string scheme_ () const noexcept;

// char* URI::user (const ::SoupURI* obj);
// char* URI::user (const ::SoupURI* obj);
GI_INLINE_DECL std::string user_ () const noexcept;

// char* URI::password (const ::SoupURI* obj);
// char* URI::password (const ::SoupURI* obj);
GI_INLINE_DECL std::string password_ () const noexcept;

// char* URI::host (const ::SoupURI* obj);
// char* URI::host (const ::SoupURI* obj);
GI_INLINE_DECL std::string host_ () const noexcept;

// guint URI::port (const ::SoupURI* obj);
// guint URI::port (const ::SoupURI* obj);
GI_INLINE_DECL guint port_ () const noexcept;

//  URI::port (::SoupURI* obj, guint _value);
// void URI::port (::SoupURI* obj, guint _value);
GI_INLINE_DECL void port_ (guint _value) noexcept;

// char* URI::path (const ::SoupURI* obj);
// char* URI::path (const ::SoupURI* obj);
GI_INLINE_DECL std::string path_ () const noexcept;

// char* URI::query (const ::SoupURI* obj);
// char* URI::query (const ::SoupURI* obj);
GI_INLINE_DECL std::string query_ () const noexcept;

// char* URI::fragment (const ::SoupURI* obj);
// char* URI::fragment (const ::SoupURI* obj);
GI_INLINE_DECL std::string fragment_ () const noexcept;

// SoupURI* soup_uri_new (const char* uri_string);
// ::SoupURI* soup_uri_new (const char* uri_string);
static GI_INLINE_DECL Soup::URI new_ (const std::string & uri_string) noexcept;
static GI_INLINE_DECL Soup::URI new_ () noexcept;

// SoupURI* soup_uri_new_with_base (SoupURI* base, const char* uri_string);
// ::SoupURI* soup_uri_new_with_base (::SoupURI* base, const char* uri_string);
static GI_INLINE_DECL Soup::URI new_with_base (Soup::URI base, const std::string & uri_string) noexcept;

// SoupURI* soup_uri_copy (SoupURI* uri);
// ::SoupURI* soup_uri_copy (::SoupURI* uri);
GI_INLINE_DECL Soup::URI copy () noexcept;

// SoupURI* soup_uri_copy_host (SoupURI* uri);
// ::SoupURI* soup_uri_copy_host (::SoupURI* uri);
GI_INLINE_DECL Soup::URI copy_host () noexcept;

// gboolean soup_uri_equal (SoupURI* uri1, SoupURI* uri2);
// gboolean soup_uri_equal (::SoupURI* uri1, ::SoupURI* uri2);
GI_INLINE_DECL bool equal (Soup::URI uri2) noexcept;

// void soup_uri_free (SoupURI* uri);
// void soup_uri_free (::SoupURI* uri);
// IGNORE; marked ignore

// const char* soup_uri_get_fragment (SoupURI* uri);
// const char* soup_uri_get_fragment (::SoupURI* uri);
GI_INLINE_DECL std::string get_fragment () noexcept;

// const char* soup_uri_get_host (SoupURI* uri);
// const char* soup_uri_get_host (::SoupURI* uri);
GI_INLINE_DECL std::string get_host () noexcept;

// const char* soup_uri_get_password (SoupURI* uri);
// const char* soup_uri_get_password (::SoupURI* uri);
GI_INLINE_DECL std::string get_password () noexcept;

// const char* soup_uri_get_path (SoupURI* uri);
// const char* soup_uri_get_path (::SoupURI* uri);
GI_INLINE_DECL std::string get_path () noexcept;

// guint soup_uri_get_port (SoupURI* uri);
// guint soup_uri_get_port (::SoupURI* uri);
GI_INLINE_DECL guint get_port () noexcept;

// const char* soup_uri_get_query (SoupURI* uri);
// const char* soup_uri_get_query (::SoupURI* uri);
GI_INLINE_DECL std::string get_query () noexcept;

// const char* soup_uri_get_scheme (SoupURI* uri);
// const char* soup_uri_get_scheme (::SoupURI* uri);
GI_INLINE_DECL std::string get_scheme () noexcept;

// const char* soup_uri_get_user (SoupURI* uri);
// const char* soup_uri_get_user (::SoupURI* uri);
GI_INLINE_DECL std::string get_user () noexcept;

// gboolean soup_uri_host_equal (gconstpointer v1, gconstpointer v2);
// gboolean soup_uri_host_equal (const ::SoupURI* v1, const ::SoupURI* v2);
GI_INLINE_DECL bool host_equal (const Soup::URI & v2) const noexcept;

// guint soup_uri_host_hash (gconstpointer key);
// guint soup_uri_host_hash (const ::SoupURI* key);
GI_INLINE_DECL guint host_hash () const noexcept;

// void soup_uri_set_fragment (SoupURI* uri, const char* fragment);
// void soup_uri_set_fragment (::SoupURI* uri, const char* fragment);
GI_INLINE_DECL void set_fragment (const std::string & fragment) noexcept;
GI_INLINE_DECL void set_fragment () noexcept;

// void soup_uri_set_host (SoupURI* uri, const char* host);
// void soup_uri_set_host (::SoupURI* uri, const char* host);
GI_INLINE_DECL void set_host (const std::string & host) noexcept;
GI_INLINE_DECL void set_host () noexcept;

// void soup_uri_set_password (SoupURI* uri, const char* password);
// void soup_uri_set_password (::SoupURI* uri, const char* password);
GI_INLINE_DECL void set_password (const std::string & password) noexcept;
GI_INLINE_DECL void set_password () noexcept;

// void soup_uri_set_path (SoupURI* uri, const char* path);
// void soup_uri_set_path (::SoupURI* uri, const char* path);
GI_INLINE_DECL void set_path (const std::string & path) noexcept;

// void soup_uri_set_port (SoupURI* uri, guint port);
// void soup_uri_set_port (::SoupURI* uri, guint port);
GI_INLINE_DECL void set_port (guint port) noexcept;

// void soup_uri_set_query (SoupURI* uri, const char* query);
// void soup_uri_set_query (::SoupURI* uri, const char* query);
GI_INLINE_DECL void set_query (const std::string & query) noexcept;
GI_INLINE_DECL void set_query () noexcept;

// void soup_uri_set_query_from_fields (SoupURI* uri, const char* first_field);
// void soup_uri_set_query_from_fields (::SoupURI* uri, const char* first_field);
// IGNORE; not introspectable, varargs not supported

// void soup_uri_set_query_from_form (SoupURI* uri, GHashTable* form);
// void soup_uri_set_query_from_form (::SoupURI* uri, ::GHashTable* form);
GI_INLINE_DECL void set_query_from_form (const std::map<std::string, std::string> & form) noexcept;

// void soup_uri_set_scheme (SoupURI* uri, const char* scheme);
// void soup_uri_set_scheme (::SoupURI* uri, const char* scheme);
GI_INLINE_DECL void set_scheme (const std::string & scheme) noexcept;

// void soup_uri_set_user (SoupURI* uri, const char* user);
// void soup_uri_set_user (::SoupURI* uri, const char* user);
GI_INLINE_DECL void set_user (const std::string & user) noexcept;
GI_INLINE_DECL void set_user () noexcept;

// char* soup_uri_to_string (SoupURI* uri, gboolean just_path_and_query);
// char* soup_uri_to_string (::SoupURI* uri, gboolean just_path_and_query);
GI_INLINE_DECL std::string to_string (gboolean just_path_and_query) noexcept;

// gboolean soup_uri_uses_default_port (SoupURI* uri);
// gboolean soup_uri_uses_default_port (::SoupURI* uri);
GI_INLINE_DECL bool uses_default_port () noexcept;

// char* soup_uri_decode (const char* part);
// char* soup_uri_decode (const char* part);
static GI_INLINE_DECL std::string decode (const std::string & part) noexcept;

// char* soup_uri_encode (const char* part, const char* escape_extra);
// char* soup_uri_encode (const char* part, const char* escape_extra);
static GI_INLINE_DECL std::string encode (const std::string & part, const std::string & escape_extra) noexcept;
static GI_INLINE_DECL std::string encode (const std::string & part) noexcept;

// char* soup_uri_normalize (const char* part, const char* unescape_extra);
// char* soup_uri_normalize (const char* part, const char* unescape_extra);
static GI_INLINE_DECL std::string normalize (const std::string & part, const std::string & unescape_extra) noexcept;
static GI_INLINE_DECL std::string normalize (const std::string & part) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/uri_extra_def.hpp>)
#include <soup/uri_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/uri_extra.hpp>)
#include <soup/uri_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class URI : public GI_SOUP_URI_BASE
{ typedef GI_SOUP_URI_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupURI>
{ typedef Soup::URI type; }; 

} // namespace repository

} // namespace gi

#endif
