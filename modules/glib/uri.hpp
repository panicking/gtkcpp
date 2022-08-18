// AUTO-GENERATED

#ifndef _GI_GLIB_URI_HPP_
#define _GI_GLIB_URI_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Bytes;

class Uri;

namespace base {


#define GI_GLIB_URI_BASE base::UriBase
class UriBase : public gi::detail::GBoxedWrapper<UriBase, ::GUri>
{
typedef gi::detail::GBoxedWrapper<UriBase, ::GUri> super_type;
public:

UriBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_uri_get_type(); } 

// const gchar* g_uri_get_auth_params (GUri* uri);
// const char* g_uri_get_auth_params (::GUri* uri);
GI_INLINE_DECL std::string get_auth_params () noexcept;

// GUriFlags g_uri_get_flags (GUri* uri);
// ::GUriFlags g_uri_get_flags (::GUri* uri);
GI_INLINE_DECL GLib::UriFlags get_flags () noexcept;

// const gchar* g_uri_get_fragment (GUri* uri);
// const char* g_uri_get_fragment (::GUri* uri);
GI_INLINE_DECL std::string get_fragment () noexcept;

// const gchar* g_uri_get_host (GUri* uri);
// const char* g_uri_get_host (::GUri* uri);
GI_INLINE_DECL std::string get_host () noexcept;

// const gchar* g_uri_get_password (GUri* uri);
// const char* g_uri_get_password (::GUri* uri);
GI_INLINE_DECL std::string get_password () noexcept;

// const gchar* g_uri_get_path (GUri* uri);
// const char* g_uri_get_path (::GUri* uri);
GI_INLINE_DECL std::string get_path () noexcept;

// gint g_uri_get_port (GUri* uri);
// gint g_uri_get_port (::GUri* uri);
GI_INLINE_DECL gint get_port () noexcept;

// const gchar* g_uri_get_query (GUri* uri);
// const char* g_uri_get_query (::GUri* uri);
GI_INLINE_DECL std::string get_query () noexcept;

// const gchar* g_uri_get_scheme (GUri* uri);
// const char* g_uri_get_scheme (::GUri* uri);
GI_INLINE_DECL std::string get_scheme () noexcept;

// const gchar* g_uri_get_user (GUri* uri);
// const char* g_uri_get_user (::GUri* uri);
GI_INLINE_DECL std::string get_user () noexcept;

// const gchar* g_uri_get_userinfo (GUri* uri);
// const char* g_uri_get_userinfo (::GUri* uri);
GI_INLINE_DECL std::string get_userinfo () noexcept;

// GUri* g_uri_parse_relative (GUri* base_uri, const gchar* uri_ref, GUriFlags flags, GError ** error);
// ::GUri* g_uri_parse_relative (::GUri* base_uri, const char* uri_ref, ::GUriFlags flags, GError ** error);
GI_INLINE_DECL GLib::Uri parse_relative (const std::string & uri_ref, GLib::UriFlags flags);
GI_INLINE_DECL GLib::Uri parse_relative (const std::string & uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// GUri* g_uri_ref (GUri* uri);
// ::GUri* g_uri_ref (::GUri* uri);
// IGNORE; marked ignore

// char* g_uri_to_string (GUri* uri);
// char* g_uri_to_string (::GUri* uri);
GI_INLINE_DECL std::string to_string () noexcept;

// char* g_uri_to_string_partial (GUri* uri, GUriHideFlags flags);
// char* g_uri_to_string_partial (::GUri* uri, ::GUriHideFlags flags);
GI_INLINE_DECL std::string to_string_partial (GLib::UriHideFlags flags) noexcept;

// void g_uri_unref (GUri* uri);
// void g_uri_unref (::GUri* uri);
// IGNORE; marked ignore

// GUri* g_uri_build (GUriFlags flags, const gchar* scheme, const gchar* userinfo, const gchar* host, gint port, const gchar* path, const gchar* query, const gchar* fragment);
// ::GUri* g_uri_build (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
static GI_INLINE_DECL GLib::Uri build (GLib::UriFlags flags, const std::string & scheme, const std::string & userinfo, const std::string & host, gint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept;
static GI_INLINE_DECL GLib::Uri build (GLib::UriFlags flags, const std::string & scheme, gint port, const std::string & path) noexcept;

// GUri* g_uri_build_with_user (GUriFlags flags, const gchar* scheme, const gchar* user, const gchar* password, const gchar* auth_params, const gchar* host, gint port, const gchar* path, const gchar* query, const gchar* fragment);
// ::GUri* g_uri_build_with_user (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
static GI_INLINE_DECL GLib::Uri build_with_user (GLib::UriFlags flags, const std::string & scheme, const std::string & user, const std::string & password, const std::string & auth_params, const std::string & host, gint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept;
static GI_INLINE_DECL GLib::Uri build_with_user (GLib::UriFlags flags, const std::string & scheme, gint port, const std::string & path) noexcept;

// GQuark g_uri_error_quark ();
// ::GQuark g_uri_error_quark ();
static GI_INLINE_DECL GLib::Quark error_quark () noexcept;

// char* g_uri_escape_bytes (const guint8* unescaped, gsize length, const char* reserved_chars_allowed);
// char* g_uri_escape_bytes (const guint8* unescaped, gsize length, const char* reserved_chars_allowed);
static GI_INLINE_DECL std::string escape_bytes (guint8 * unescaped, gsize length, const std::string & reserved_chars_allowed) noexcept;
static GI_INLINE_DECL std::string escape_bytes (guint8 * unescaped, gsize length) noexcept;

// char* g_uri_escape_string (const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
// char* g_uri_escape_string (const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
static GI_INLINE_DECL std::string escape_string (const std::string & unescaped, const std::string & reserved_chars_allowed, gboolean allow_utf8) noexcept;
static GI_INLINE_DECL std::string escape_string (const std::string & unescaped, gboolean allow_utf8) noexcept;

// gboolean g_uri_is_valid (const gchar* uri_string, GUriFlags flags, GError ** error);
// gboolean g_uri_is_valid (const char* uri_string, ::GUriFlags flags, GError ** error);
static GI_INLINE_DECL bool is_valid (const std::string & uri_string, GLib::UriFlags flags);
static GI_INLINE_DECL bool is_valid (const std::string & uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// gchar* g_uri_join (GUriFlags flags, const gchar* scheme, const gchar* userinfo, const gchar* host, gint port, const gchar* path, const gchar* query, const gchar* fragment);
// char* g_uri_join (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
static GI_INLINE_DECL std::string join (GLib::UriFlags flags, const std::string & scheme, const std::string & userinfo, const std::string & host, gint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept;
static GI_INLINE_DECL std::string join (GLib::UriFlags flags, gint port, const std::string & path) noexcept;

// gchar* g_uri_join_with_user (GUriFlags flags, const gchar* scheme, const gchar* user, const gchar* password, const gchar* auth_params, const gchar* host, gint port, const gchar* path, const gchar* query, const gchar* fragment);
// char* g_uri_join_with_user (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
static GI_INLINE_DECL std::string join_with_user (GLib::UriFlags flags, const std::string & scheme, const std::string & user, const std::string & password, const std::string & auth_params, const std::string & host, gint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept;
static GI_INLINE_DECL std::string join_with_user (GLib::UriFlags flags, gint port, const std::string & path) noexcept;

// gchar** g_uri_list_extract_uris (const gchar* uri_list);
// char** g_uri_list_extract_uris (const char* uri_list);
static GI_INLINE_DECL std::vector<std::string> list_extract_uris (const std::string & uri_list) noexcept;

// GUri* g_uri_parse (const gchar* uri_string, GUriFlags flags, GError ** error);
// ::GUri* g_uri_parse (const char* uri_string, ::GUriFlags flags, GError ** error);
static GI_INLINE_DECL GLib::Uri parse (const std::string & uri_string, GLib::UriFlags flags);
static GI_INLINE_DECL GLib::Uri parse (const std::string & uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// GHashTable* g_uri_parse_params (const gchar* params, gssize length, const gchar* separators, GUriParamsFlags flags, GError ** error);
// ::GHashTable* g_uri_parse_params (const char* params, gssize length, const char* separators, ::GUriParamsFlags flags, GError ** error);
static GI_INLINE_DECL std::map<std::string, std::string> parse_params (const std::string & params, gssize length, const std::string & separators, GLib::UriParamsFlags flags);
static GI_INLINE_DECL std::map<std::string, std::string> parse_params (const std::string & params, gssize length, const std::string & separators, GLib::UriParamsFlags flags, GLib::Error * _error) noexcept;

// char* g_uri_parse_scheme (const char* uri);
// char* g_uri_parse_scheme (const char* uri);
static GI_INLINE_DECL std::string parse_scheme (const std::string & uri) noexcept;

// const char* g_uri_peek_scheme (const char* uri);
// const char* g_uri_peek_scheme (const char* uri);
static GI_INLINE_DECL std::string peek_scheme (const std::string & uri) noexcept;

// gchar* g_uri_resolve_relative (const gchar* base_uri_string, const gchar* uri_ref, GUriFlags flags, GError ** error);
// char* g_uri_resolve_relative (const char* base_uri_string, const char* uri_ref, ::GUriFlags flags, GError ** error);
static GI_INLINE_DECL std::string resolve_relative (const std::string & base_uri_string, const std::string & uri_ref, GLib::UriFlags flags);
static GI_INLINE_DECL std::string resolve_relative (const std::string & uri_ref, GLib::UriFlags flags);
static GI_INLINE_DECL std::string resolve_relative (const std::string & base_uri_string, const std::string & uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::string resolve_relative (const std::string & uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// gboolean g_uri_split (const gchar* uri_ref, GUriFlags flags, gchar** scheme, gchar** userinfo, gchar** host, gint* port, gchar** path, gchar** query, gchar** fragment, GError ** error);
// gboolean g_uri_split (const char* uri_ref, ::GUriFlags flags, char** scheme, char** userinfo, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
static GI_INLINE_DECL bool split (const std::string & uri_ref, GLib::UriFlags flags, std::string * scheme = nullptr, std::string * userinfo = nullptr, std::string * host = nullptr, gint * port = nullptr, std::string * path = nullptr, std::string * query = nullptr, std::string * fragment = nullptr);
static GI_INLINE_DECL bool split (const std::string & uri_ref, GLib::UriFlags flags, std::string * scheme, std::string * userinfo, std::string * host, gint * port, std::string * path, std::string * query, std::string * fragment, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<bool, std::string, std::string, std::string, gint, std::string, std::string, std::string> split (const std::string & uri_ref, GLib::UriFlags flags);
static GI_INLINE_DECL std::tuple<bool, std::string, std::string, std::string, gint, std::string, std::string, std::string> split (const std::string & uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// gboolean g_uri_split_network (const gchar* uri_string, GUriFlags flags, gchar** scheme, gchar** host, gint* port, GError ** error);
// gboolean g_uri_split_network (const char* uri_string, ::GUriFlags flags, char** scheme, char** host, gint* port, GError ** error);
static GI_INLINE_DECL bool split_network (const std::string & uri_string, GLib::UriFlags flags, std::string * scheme = nullptr, std::string * host = nullptr, gint * port = nullptr);
static GI_INLINE_DECL bool split_network (const std::string & uri_string, GLib::UriFlags flags, std::string * scheme, std::string * host, gint * port, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<bool, std::string, std::string, gint> split_network (const std::string & uri_string, GLib::UriFlags flags);
static GI_INLINE_DECL std::tuple<bool, std::string, std::string, gint> split_network (const std::string & uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// gboolean g_uri_split_with_user (const gchar* uri_ref, GUriFlags flags, gchar** scheme, gchar** user, gchar** password, gchar** auth_params, gchar** host, gint* port, gchar** path, gchar** query, gchar** fragment, GError ** error);
// gboolean g_uri_split_with_user (const char* uri_ref, ::GUriFlags flags, char** scheme, char** user, char** password, char** auth_params, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
static GI_INLINE_DECL bool split_with_user (const std::string & uri_ref, GLib::UriFlags flags, std::string * scheme = nullptr, std::string * user = nullptr, std::string * password = nullptr, std::string * auth_params = nullptr, std::string * host = nullptr, gint * port = nullptr, std::string * path = nullptr, std::string * query = nullptr, std::string * fragment = nullptr);
static GI_INLINE_DECL bool split_with_user (const std::string & uri_ref, GLib::UriFlags flags, std::string * scheme, std::string * user, std::string * password, std::string * auth_params, std::string * host, gint * port, std::string * path, std::string * query, std::string * fragment, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<bool, std::string, std::string, std::string, std::string, std::string, gint, std::string, std::string, std::string> split_with_user (const std::string & uri_ref, GLib::UriFlags flags);
static GI_INLINE_DECL std::tuple<bool, std::string, std::string, std::string, std::string, std::string, gint, std::string, std::string, std::string> split_with_user (const std::string & uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept;

// GBytes* g_uri_unescape_bytes (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
// ::GBytes* g_uri_unescape_bytes (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
static GI_INLINE_DECL GLib::Bytes unescape_bytes (const std::string & escaped_string, gssize length, const std::string & illegal_characters);
static GI_INLINE_DECL GLib::Bytes unescape_bytes (const std::string & escaped_string, gssize length);
static GI_INLINE_DECL GLib::Bytes unescape_bytes (const std::string & escaped_string, gssize length, const std::string & illegal_characters, GLib::Error * _error) noexcept;
static GI_INLINE_DECL GLib::Bytes unescape_bytes (const std::string & escaped_string, gssize length, GLib::Error * _error) noexcept;

// char* g_uri_unescape_segment (const char* escaped_string, const char* escaped_string_end, const char* illegal_characters);
// char* g_uri_unescape_segment (const char* escaped_string, const char* escaped_string_end, const char* illegal_characters);
static GI_INLINE_DECL std::string unescape_segment (const std::string & escaped_string, const std::string & escaped_string_end, const std::string & illegal_characters) noexcept;
static GI_INLINE_DECL std::string unescape_segment () noexcept;

// char* g_uri_unescape_string (const char* escaped_string, const char* illegal_characters);
// char* g_uri_unescape_string (const char* escaped_string, const char* illegal_characters);
static GI_INLINE_DECL std::string unescape_string (const std::string & escaped_string, const std::string & illegal_characters) noexcept;
static GI_INLINE_DECL std::string unescape_string (const std::string & escaped_string) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/uri_extra_def.hpp>)
#include <glib/uri_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/uri_extra.hpp>)
#include <glib/uri_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Uri : public GI_GLIB_URI_BASE
{ typedef GI_GLIB_URI_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GUri>
{ typedef GLib::Uri type; }; 

} // namespace repository

} // namespace gi

#endif
