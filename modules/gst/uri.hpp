// AUTO-GENERATED

#ifndef _GI_GST_URI_HPP_
#define _GI_GST_URI_HPP_


namespace gi {

namespace repository {

namespace Gst {


class Uri;

namespace base {


#define GI_GST_URI_BASE base::UriBase
class UriBase : public gi::detail::GBoxedWrapper<UriBase, ::GstUri>
{
typedef gi::detail::GBoxedWrapper<UriBase, ::GstUri> super_type;
public:

UriBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_uri_get_type(); } 

// GstUri* gst_uri_new (const gchar* scheme, const gchar* userinfo, const gchar* host, guint port, const gchar* path, const gchar* query, const gchar* fragment);
// ::GstUri* gst_uri_new (const char* scheme, const char* userinfo, const char* host, guint port, const char* path, const char* query, const char* fragment);
static GI_INLINE_DECL Gst::Uri new_ (const std::string & scheme, const std::string & userinfo, const std::string & host, guint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept;
static GI_INLINE_DECL Gst::Uri new_ (guint port) noexcept;

// gboolean gst_uri_append_path (GstUri* uri, const gchar* relative_path);
// gboolean gst_uri_append_path (::GstUri* uri, const char* relative_path);
GI_INLINE_DECL bool append_path (const std::string & relative_path) noexcept;

// gboolean gst_uri_append_path_segment (GstUri* uri, const gchar* path_segment);
// gboolean gst_uri_append_path_segment (::GstUri* uri, const char* path_segment);
GI_INLINE_DECL bool append_path_segment (const std::string & path_segment) noexcept;

// gboolean gst_uri_equal (const GstUri* first, const GstUri* second);
// gboolean gst_uri_equal (const ::GstUri* first, const ::GstUri* second);
GI_INLINE_DECL bool equal (const Gst::Uri & second) const noexcept;

// GstUri* gst_uri_from_string_with_base (GstUri* base, const gchar* uri);
// ::GstUri* gst_uri_from_string_with_base (::GstUri* base, const char* uri);
GI_INLINE_DECL Gst::Uri from_string_with_base (const std::string & uri) noexcept;

// const gchar* gst_uri_get_fragment (const GstUri* uri);
// const char* gst_uri_get_fragment (const ::GstUri* uri);
GI_INLINE_DECL std::string get_fragment () const noexcept;

// const gchar* gst_uri_get_host (const GstUri* uri);
// const char* gst_uri_get_host (const ::GstUri* uri);
GI_INLINE_DECL std::string get_host () const noexcept;

// GHashTable* gst_uri_get_media_fragment_table (const GstUri* uri);
// ::GHashTable* gst_uri_get_media_fragment_table (const ::GstUri* uri);
GI_INLINE_DECL std::map<std::string, std::string> get_media_fragment_table () const noexcept;

// gchar* gst_uri_get_path (const GstUri* uri);
// char* gst_uri_get_path (const ::GstUri* uri);
GI_INLINE_DECL std::string get_path () const noexcept;

// GList* gst_uri_get_path_segments (const GstUri* uri);
// ::GList* gst_uri_get_path_segments (const ::GstUri* uri);
GI_INLINE_DECL std::vector<std::string> get_path_segments () const noexcept;

// gchar* gst_uri_get_path_string (const GstUri* uri);
// char* gst_uri_get_path_string (const ::GstUri* uri);
GI_INLINE_DECL std::string get_path_string () const noexcept;

// guint gst_uri_get_port (const GstUri* uri);
// guint gst_uri_get_port (const ::GstUri* uri);
GI_INLINE_DECL guint get_port () const noexcept;

// GList* gst_uri_get_query_keys (const GstUri* uri);
// ::GList* gst_uri_get_query_keys (const ::GstUri* uri);
GI_INLINE_DECL std::vector<std::string> get_query_keys () const noexcept;

// gchar* gst_uri_get_query_string (const GstUri* uri);
// char* gst_uri_get_query_string (const ::GstUri* uri);
GI_INLINE_DECL std::string get_query_string () const noexcept;

// GHashTable* gst_uri_get_query_table (const GstUri* uri);
// ::GHashTable* gst_uri_get_query_table (const ::GstUri* uri);
GI_INLINE_DECL std::map<std::string, std::string> get_query_table () const noexcept;

// const gchar* gst_uri_get_query_value (const GstUri* uri, const gchar* query_key);
// const char* gst_uri_get_query_value (const ::GstUri* uri, const char* query_key);
GI_INLINE_DECL std::string get_query_value (const std::string & query_key) const noexcept;

// const gchar* gst_uri_get_scheme (const GstUri* uri);
// const char* gst_uri_get_scheme (const ::GstUri* uri);
GI_INLINE_DECL std::string get_scheme () const noexcept;

// const gchar* gst_uri_get_userinfo (const GstUri* uri);
// const char* gst_uri_get_userinfo (const ::GstUri* uri);
GI_INLINE_DECL std::string get_userinfo () const noexcept;

// gboolean gst_uri_is_normalized (const GstUri* uri);
// gboolean gst_uri_is_normalized (const ::GstUri* uri);
GI_INLINE_DECL bool is_normalized () const noexcept;

// gboolean gst_uri_is_writable (const GstUri* uri);
// gboolean gst_uri_is_writable (const ::GstUri* uri);
GI_INLINE_DECL bool is_writable () const noexcept;

// GstUri* gst_uri_join (GstUri* base_uri, GstUri* ref_uri);
// ::GstUri* gst_uri_join (::GstUri* base_uri, ::GstUri* ref_uri);
GI_INLINE_DECL Gst::Uri join (Gst::Uri ref_uri) noexcept;
GI_INLINE_DECL Gst::Uri join () noexcept;

// GstUri* gst_uri_make_writable (GstUri* uri);
// ::GstUri* gst_uri_make_writable (::GstUri* uri);
GI_INLINE_DECL Gst::Uri make_writable () noexcept;

// GstUri* gst_uri_new_with_base (GstUri* base, const gchar* scheme, const gchar* userinfo, const gchar* host, guint port, const gchar* path, const gchar* query, const gchar* fragment);
// ::GstUri* gst_uri_new_with_base (::GstUri* base, const char* scheme, const char* userinfo, const char* host, guint port, const char* path, const char* query, const char* fragment);
GI_INLINE_DECL Gst::Uri new_with_base (const std::string & scheme, const std::string & userinfo, const std::string & host, guint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept;
GI_INLINE_DECL Gst::Uri new_with_base (guint port) noexcept;

// gboolean gst_uri_normalize (GstUri* uri);
// gboolean gst_uri_normalize (::GstUri* uri);
GI_INLINE_DECL bool normalize () noexcept;

// gboolean gst_uri_query_has_key (const GstUri* uri, const gchar* query_key);
// gboolean gst_uri_query_has_key (const ::GstUri* uri, const char* query_key);
GI_INLINE_DECL bool query_has_key (const std::string & query_key) const noexcept;

// gboolean gst_uri_remove_query_key (GstUri* uri, const gchar* query_key);
// gboolean gst_uri_remove_query_key (::GstUri* uri, const char* query_key);
GI_INLINE_DECL bool remove_query_key (const std::string & query_key) noexcept;

// gboolean gst_uri_set_fragment (GstUri* uri, const gchar* fragment);
// gboolean gst_uri_set_fragment (::GstUri* uri, const char* fragment);
GI_INLINE_DECL bool set_fragment (const std::string & fragment) noexcept;
GI_INLINE_DECL bool set_fragment () noexcept;

// gboolean gst_uri_set_host (GstUri* uri, const gchar* host);
// gboolean gst_uri_set_host (::GstUri* uri, const char* host);
GI_INLINE_DECL bool set_host (const std::string & host) noexcept;

// gboolean gst_uri_set_path (GstUri* uri, const gchar* path);
// gboolean gst_uri_set_path (::GstUri* uri, const char* path);
GI_INLINE_DECL bool set_path (const std::string & path) noexcept;

// gboolean gst_uri_set_path_segments (GstUri* uri, GList* path_segments);
// gboolean gst_uri_set_path_segments (::GstUri* uri, ::GList* path_segments);
GI_INLINE_DECL bool set_path_segments (const std::vector<std::string> & path_segments) noexcept;

// gboolean gst_uri_set_path_string (GstUri* uri, const gchar* path);
// gboolean gst_uri_set_path_string (::GstUri* uri, const char* path);
GI_INLINE_DECL bool set_path_string (const std::string & path) noexcept;

// gboolean gst_uri_set_port (GstUri* uri, guint port);
// gboolean gst_uri_set_port (::GstUri* uri, guint port);
GI_INLINE_DECL bool set_port (guint port) noexcept;

// gboolean gst_uri_set_query_string (GstUri* uri, const gchar* query);
// gboolean gst_uri_set_query_string (::GstUri* uri, const char* query);
GI_INLINE_DECL bool set_query_string (const std::string & query) noexcept;

// gboolean gst_uri_set_query_table (GstUri* uri, GHashTable* query_table);
// gboolean gst_uri_set_query_table (::GstUri* uri, ::GHashTable* query_table);
GI_INLINE_DECL bool set_query_table (const std::map<std::string, std::string> & query_table) noexcept;

// gboolean gst_uri_set_query_value (GstUri* uri, const gchar* query_key, const gchar* query_value);
// gboolean gst_uri_set_query_value (::GstUri* uri, const char* query_key, const char* query_value);
GI_INLINE_DECL bool set_query_value (const std::string & query_key, const std::string & query_value) noexcept;
GI_INLINE_DECL bool set_query_value (const std::string & query_key) noexcept;

// gboolean gst_uri_set_scheme (GstUri* uri, const gchar* scheme);
// gboolean gst_uri_set_scheme (::GstUri* uri, const char* scheme);
GI_INLINE_DECL bool set_scheme (const std::string & scheme) noexcept;

// gboolean gst_uri_set_userinfo (GstUri* uri, const gchar* userinfo);
// gboolean gst_uri_set_userinfo (::GstUri* uri, const char* userinfo);
GI_INLINE_DECL bool set_userinfo (const std::string & userinfo) noexcept;

// gchar* gst_uri_to_string (const GstUri* uri);
// char* gst_uri_to_string (const ::GstUri* uri);
GI_INLINE_DECL std::string to_string () const noexcept;

// gchar* gst_uri_construct (const gchar* protocol, const gchar* location);
// char* gst_uri_construct (const char* protocol, const char* location);
// IGNORE; deprecated

// GstUri* gst_uri_from_string (const gchar* uri);
// ::GstUri* gst_uri_from_string (const char* uri);
static GI_INLINE_DECL Gst::Uri from_string (const std::string & uri) noexcept;

// GstUri* gst_uri_from_string_escaped (const gchar* uri);
// ::GstUri* gst_uri_from_string_escaped (const char* uri);
static GI_INLINE_DECL Gst::Uri from_string_escaped (const std::string & uri) noexcept;

// gchar* gst_uri_get_location (const gchar* uri);
// char* gst_uri_get_location (const char* uri);
static GI_INLINE_DECL std::string get_location (const std::string & uri) noexcept;

// gchar* gst_uri_get_protocol (const gchar* uri);
// char* gst_uri_get_protocol (const char* uri);
static GI_INLINE_DECL std::string get_protocol (const std::string & uri) noexcept;

// gboolean gst_uri_has_protocol (const gchar* uri, const gchar* protocol);
// gboolean gst_uri_has_protocol (const char* uri, const char* protocol);
static GI_INLINE_DECL bool has_protocol (const std::string & uri, const std::string & protocol) noexcept;

// gboolean gst_uri_is_valid (const gchar* uri);
// gboolean gst_uri_is_valid (const char* uri);
static GI_INLINE_DECL bool is_valid (const std::string & uri) noexcept;

// gchar* gst_uri_join_strings (const gchar* base_uri, const gchar* ref_uri);
// char* gst_uri_join_strings (const char* base_uri, const char* ref_uri);
static GI_INLINE_DECL std::string join_strings (const std::string & base_uri, const std::string & ref_uri) noexcept;

// gboolean gst_uri_protocol_is_supported (const GstURIType type, const gchar* protocol);
// gboolean gst_uri_protocol_is_supported (const ::GstURIType type, const char* protocol);
static GI_INLINE_DECL bool protocol_is_supported (Gst::URIType type, const std::string & protocol) noexcept;

// gboolean gst_uri_protocol_is_valid (const gchar* protocol);
// gboolean gst_uri_protocol_is_valid (const char* protocol);
static GI_INLINE_DECL bool protocol_is_valid (const std::string & protocol) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/uri_extra_def.hpp>)
#include <gst/uri_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/uri_extra.hpp>)
#include <gst/uri_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Uri : public GI_GST_URI_BASE
{ typedef GI_GST_URI_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstUri>
{ typedef Gst::Uri type; }; 

} // namespace repository

} // namespace gi

#endif
