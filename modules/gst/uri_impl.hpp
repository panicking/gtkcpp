// AUTO-GENERATED

#ifndef _GI_GST_URI_IMPL_HPP_
#define _GI_GST_URI_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstUri* gst_uri_new (const gchar* scheme, const gchar* userinfo, const gchar* host, guint port, const gchar* path, const gchar* query, const gchar* fragment);
// ::GstUri* gst_uri_new (const char* scheme, const char* userinfo, const char* host, guint port, const char* path, const char* query, const char* fragment);
Gst::Uri base::UriBase::new_ (const std::string & scheme, const std::string & userinfo, const std::string & host, guint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept
{
  typedef ::GstUri* (*call_wrap_t) (const char* scheme, const char* userinfo, const char* host, guint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_new;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none, gi::direction_in);
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto host_to_c = gi::unwrap (host, gi::transfer_none, gi::direction_in);
  auto userinfo_to_c = gi::unwrap (userinfo, gi::transfer_none, gi::direction_in);
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (guint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Uri base::UriBase::new_ (guint port) noexcept
{
  typedef ::GstUri* (*call_wrap_t) (const char* scheme, const char* userinfo, const char* host, guint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_new;
  auto fragment_to_c = nullptr;
  auto query_to_c = nullptr;
  auto path_to_c = nullptr;
  auto port_to_c = port;
  auto host_to_c = nullptr;
  auto userinfo_to_c = nullptr;
  auto scheme_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (guint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_uri_append_path (GstUri* uri, const gchar* relative_path);
// gboolean gst_uri_append_path (::GstUri* uri, const char* relative_path);
bool base::UriBase::append_path (const std::string & relative_path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* relative_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_append_path;
  auto relative_path_to_c = gi::unwrap (relative_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (relative_path_to_c));
  return _temp_ret;
}

// gboolean gst_uri_append_path_segment (GstUri* uri, const gchar* path_segment);
// gboolean gst_uri_append_path_segment (::GstUri* uri, const char* path_segment);
bool base::UriBase::append_path_segment (const std::string & path_segment) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* path_segment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_append_path_segment;
  auto path_segment_to_c = gi::unwrap (path_segment, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (path_segment_to_c));
  return _temp_ret;
}

// gboolean gst_uri_equal (const GstUri* first, const GstUri* second);
// gboolean gst_uri_equal (const ::GstUri* first, const ::GstUri* second);
bool base::UriBase::equal (const Gst::Uri & second) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstUri* first, const ::GstUri* second);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_equal;
  auto second_to_c = gi::unwrap (second, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()), (const ::GstUri*) (second_to_c));
  return _temp_ret;
}

// GstUri* gst_uri_from_string_with_base (GstUri* base, const gchar* uri);
// ::GstUri* gst_uri_from_string_with_base (::GstUri* base, const char* uri);
Gst::Uri base::UriBase::from_string_with_base (const std::string & uri) noexcept
{
  typedef ::GstUri* (*call_wrap_t) (::GstUri* base, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_from_string_with_base;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* gst_uri_get_fragment (const GstUri* uri);
// const char* gst_uri_get_fragment (const ::GstUri* uri);
std::string base::UriBase::get_fragment () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_fragment;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_uri_get_host (const GstUri* uri);
// const char* gst_uri_get_host (const ::GstUri* uri);
std::string base::UriBase::get_host () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_host;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GHashTable* gst_uri_get_media_fragment_table (const GstUri* uri);
// ::GHashTable* gst_uri_get_media_fragment_table (const ::GstUri* uri);
std::map<std::string, std::string> base::UriBase::get_media_fragment_table () const noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_media_fragment_table;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_full);
}

// gchar* gst_uri_get_path (const GstUri* uri);
// char* gst_uri_get_path (const ::GstUri* uri);
std::string base::UriBase::get_path () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_path;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* gst_uri_get_path_segments (const GstUri* uri);
// ::GList* gst_uri_get_path_segments (const ::GstUri* uri);
std::vector<std::string> base::UriBase::get_path_segments () const noexcept
{
  typedef ::GList* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_path_segments;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gchar* gst_uri_get_path_string (const GstUri* uri);
// char* gst_uri_get_path_string (const ::GstUri* uri);
std::string base::UriBase::get_path_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_path_string;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint gst_uri_get_port (const GstUri* uri);
// guint gst_uri_get_port (const ::GstUri* uri);
guint base::UriBase::get_port () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_port;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return _temp_ret;
}

// GList* gst_uri_get_query_keys (const GstUri* uri);
// ::GList* gst_uri_get_query_keys (const ::GstUri* uri);
std::vector<std::string> base::UriBase::get_query_keys () const noexcept
{
  typedef ::GList* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_query_keys;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_container);
}

// gchar* gst_uri_get_query_string (const GstUri* uri);
// char* gst_uri_get_query_string (const ::GstUri* uri);
std::string base::UriBase::get_query_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_query_string;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GHashTable* gst_uri_get_query_table (const GstUri* uri);
// ::GHashTable* gst_uri_get_query_table (const ::GstUri* uri);
std::map<std::string, std::string> base::UriBase::get_query_table () const noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_query_table;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_full);
}

// const gchar* gst_uri_get_query_value (const GstUri* uri, const gchar* query_key);
// const char* gst_uri_get_query_value (const ::GstUri* uri, const char* query_key);
std::string base::UriBase::get_query_value (const std::string & query_key) const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstUri* uri, const char* query_key);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_query_value;
  auto query_key_to_c = gi::unwrap (query_key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()), (const char*) (query_key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_uri_get_scheme (const GstUri* uri);
// const char* gst_uri_get_scheme (const ::GstUri* uri);
std::string base::UriBase::get_scheme () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_scheme;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_uri_get_userinfo (const GstUri* uri);
// const char* gst_uri_get_userinfo (const ::GstUri* uri);
std::string base::UriBase::get_userinfo () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_userinfo;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_uri_is_normalized (const GstUri* uri);
// gboolean gst_uri_is_normalized (const ::GstUri* uri);
bool base::UriBase::is_normalized () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_is_normalized;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_uri_is_writable (const GstUri* uri);
// gboolean gst_uri_is_writable (const ::GstUri* uri);
bool base::UriBase::is_writable () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_is_writable;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return _temp_ret;
}

// GstUri* gst_uri_join (GstUri* base_uri, GstUri* ref_uri);
// ::GstUri* gst_uri_join (::GstUri* base_uri, ::GstUri* ref_uri);
Gst::Uri base::UriBase::join (Gst::Uri ref_uri) noexcept
{
  typedef ::GstUri* (*call_wrap_t) (::GstUri* base_uri, ::GstUri* ref_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_join;
  auto ref_uri_to_c = gi::unwrap (ref_uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (::GstUri*) (ref_uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Uri base::UriBase::join () noexcept
{
  typedef ::GstUri* (*call_wrap_t) (::GstUri* base_uri, ::GstUri* ref_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_join;
  auto ref_uri_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (::GstUri*) (ref_uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstUri* gst_uri_make_writable (GstUri* uri);
// ::GstUri* gst_uri_make_writable (::GstUri* uri);
Gst::Uri base::UriBase::make_writable () noexcept
{
  typedef ::GstUri* (*call_wrap_t) (::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_make_writable;
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstUri* gst_uri_new_with_base (GstUri* base, const gchar* scheme, const gchar* userinfo, const gchar* host, guint port, const gchar* path, const gchar* query, const gchar* fragment);
// ::GstUri* gst_uri_new_with_base (::GstUri* base, const char* scheme, const char* userinfo, const char* host, guint port, const char* path, const char* query, const char* fragment);
Gst::Uri base::UriBase::new_with_base (const std::string & scheme, const std::string & userinfo, const std::string & host, guint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept
{
  typedef ::GstUri* (*call_wrap_t) (::GstUri* base, const char* scheme, const char* userinfo, const char* host, guint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_new_with_base;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none, gi::direction_in);
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto host_to_c = gi::unwrap (host, gi::transfer_none, gi::direction_in);
  auto userinfo_to_c = gi::unwrap (userinfo, gi::transfer_none, gi::direction_in);
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (guint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Uri base::UriBase::new_with_base (guint port) noexcept
{
  typedef ::GstUri* (*call_wrap_t) (::GstUri* base, const char* scheme, const char* userinfo, const char* host, guint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_new_with_base;
  auto fragment_to_c = nullptr;
  auto query_to_c = nullptr;
  auto path_to_c = nullptr;
  auto port_to_c = port;
  auto host_to_c = nullptr;
  auto userinfo_to_c = nullptr;
  auto scheme_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (guint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_uri_normalize (GstUri* uri);
// gboolean gst_uri_normalize (::GstUri* uri);
bool base::UriBase::normalize () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_normalize;
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_uri_query_has_key (const GstUri* uri, const gchar* query_key);
// gboolean gst_uri_query_has_key (const ::GstUri* uri, const char* query_key);
bool base::UriBase::query_has_key (const std::string & query_key) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstUri* uri, const char* query_key);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_query_has_key;
  auto query_key_to_c = gi::unwrap (query_key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()), (const char*) (query_key_to_c));
  return _temp_ret;
}

// gboolean gst_uri_remove_query_key (GstUri* uri, const gchar* query_key);
// gboolean gst_uri_remove_query_key (::GstUri* uri, const char* query_key);
bool base::UriBase::remove_query_key (const std::string & query_key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* query_key);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_remove_query_key;
  auto query_key_to_c = gi::unwrap (query_key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (query_key_to_c));
  return _temp_ret;
}

// gboolean gst_uri_set_fragment (GstUri* uri, const gchar* fragment);
// gboolean gst_uri_set_fragment (::GstUri* uri, const char* fragment);
bool base::UriBase::set_fragment (const std::string & fragment) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_fragment;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (fragment_to_c));
  return _temp_ret;
}
bool base::UriBase::set_fragment () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_fragment;
  auto fragment_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (fragment_to_c));
  return _temp_ret;
}

// gboolean gst_uri_set_host (GstUri* uri, const gchar* host);
// gboolean gst_uri_set_host (::GstUri* uri, const char* host);
bool base::UriBase::set_host (const std::string & host) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* host);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_host;
  auto host_to_c = gi::unwrap (host, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (host_to_c));
  return _temp_ret;
}

// gboolean gst_uri_set_path (GstUri* uri, const gchar* path);
// gboolean gst_uri_set_path (::GstUri* uri, const char* path);
bool base::UriBase::set_path (const std::string & path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (path_to_c));
  return _temp_ret;
}

// gboolean gst_uri_set_path_segments (GstUri* uri, GList* path_segments);
// gboolean gst_uri_set_path_segments (::GstUri* uri, ::GList* path_segments);
bool base::UriBase::set_path_segments (const std::vector<std::string> & path_segments) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, ::GList* path_segments);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_path_segments;
  auto path_segments_i = detail::make_list_unwrap_range<::GList> (path_segments);
  auto path_segments_w = unwrap (path_segments_i, gi::transfer_full, direction_in);
  auto path_segments_to_c = path_segments_w.gobj_(true);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (::GList*) (path_segments_to_c));
  return _temp_ret;
}

// gboolean gst_uri_set_path_string (GstUri* uri, const gchar* path);
// gboolean gst_uri_set_path_string (::GstUri* uri, const char* path);
bool base::UriBase::set_path_string (const std::string & path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_path_string;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (path_to_c));
  return _temp_ret;
}

// gboolean gst_uri_set_port (GstUri* uri, guint port);
// gboolean gst_uri_set_port (::GstUri* uri, guint port);
bool base::UriBase::set_port (guint port) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, guint port);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_port;
  auto port_to_c = port;
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (guint) (port_to_c));
  return _temp_ret;
}

// gboolean gst_uri_set_query_string (GstUri* uri, const gchar* query);
// gboolean gst_uri_set_query_string (::GstUri* uri, const char* query);
bool base::UriBase::set_query_string (const std::string & query) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* query);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_query_string;
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (query_to_c));
  return _temp_ret;
}

// gboolean gst_uri_set_query_table (GstUri* uri, GHashTable* query_table);
// gboolean gst_uri_set_query_table (::GstUri* uri, ::GHashTable* query_table);
bool base::UriBase::set_query_table (const std::map<std::string, std::string> & query_table) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, ::GHashTable* query_table);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_query_table;
  auto & query_table_i = query_table;
  auto query_table_w = unwrap (query_table_i, gi::transfer_none, direction_in);
  auto query_table_to_c = query_table_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (::GHashTable*) (query_table_to_c));
  return _temp_ret;
}

// gboolean gst_uri_set_query_value (GstUri* uri, const gchar* query_key, const gchar* query_value);
// gboolean gst_uri_set_query_value (::GstUri* uri, const char* query_key, const char* query_value);
bool base::UriBase::set_query_value (const std::string & query_key, const std::string & query_value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* query_key, const char* query_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_query_value;
  auto query_value_to_c = gi::unwrap (query_value, gi::transfer_none, gi::direction_in);
  auto query_key_to_c = gi::unwrap (query_key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (query_key_to_c), (const char*) (query_value_to_c));
  return _temp_ret;
}
bool base::UriBase::set_query_value (const std::string & query_key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* query_key, const char* query_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_query_value;
  auto query_value_to_c = nullptr;
  auto query_key_to_c = gi::unwrap (query_key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (query_key_to_c), (const char*) (query_value_to_c));
  return _temp_ret;
}

// gboolean gst_uri_set_scheme (GstUri* uri, const gchar* scheme);
// gboolean gst_uri_set_scheme (::GstUri* uri, const char* scheme);
bool base::UriBase::set_scheme (const std::string & scheme) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_scheme;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (scheme_to_c));
  return _temp_ret;
}

// gboolean gst_uri_set_userinfo (GstUri* uri, const gchar* userinfo);
// gboolean gst_uri_set_userinfo (::GstUri* uri, const char* userinfo);
bool base::UriBase::set_userinfo (const std::string & userinfo) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstUri* uri, const char* userinfo);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_set_userinfo;
  auto userinfo_to_c = gi::unwrap (userinfo, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstUri*) (gobj_()), (const char*) (userinfo_to_c));
  return _temp_ret;
}

// gchar* gst_uri_to_string (const GstUri* uri);
// char* gst_uri_to_string (const ::GstUri* uri);
std::string base::UriBase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_to_string;
  auto _temp_ret = call_wrap_v ((const ::GstUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gst_uri_construct (const gchar* protocol, const gchar* location);
// char* gst_uri_construct (const char* protocol, const char* location);
// IGNORE; deprecated

// GstUri* gst_uri_from_string (const gchar* uri);
// ::GstUri* gst_uri_from_string (const char* uri);
Gst::Uri base::UriBase::from_string (const std::string & uri) noexcept
{
  typedef ::GstUri* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_from_string;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstUri* gst_uri_from_string_escaped (const gchar* uri);
// ::GstUri* gst_uri_from_string_escaped (const char* uri);
Gst::Uri base::UriBase::from_string_escaped (const std::string & uri) noexcept
{
  typedef ::GstUri* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_from_string_escaped;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gst_uri_get_location (const gchar* uri);
// char* gst_uri_get_location (const char* uri);
std::string base::UriBase::get_location (const std::string & uri) noexcept
{
  typedef char* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_location;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gst_uri_get_protocol (const gchar* uri);
// char* gst_uri_get_protocol (const char* uri);
std::string base::UriBase::get_protocol (const std::string & uri) noexcept
{
  typedef char* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_get_protocol;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_uri_has_protocol (const gchar* uri, const gchar* protocol);
// gboolean gst_uri_has_protocol (const char* uri, const char* protocol);
bool base::UriBase::has_protocol (const std::string & uri, const std::string & protocol) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri, const char* protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_has_protocol;
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (const char*) (protocol_to_c));
  return _temp_ret;
}

// gboolean gst_uri_is_valid (const gchar* uri);
// gboolean gst_uri_is_valid (const char* uri);
bool base::UriBase::is_valid (const std::string & uri) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_is_valid;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return _temp_ret;
}

// gchar* gst_uri_join_strings (const gchar* base_uri, const gchar* ref_uri);
// char* gst_uri_join_strings (const char* base_uri, const char* ref_uri);
std::string base::UriBase::join_strings (const std::string & base_uri, const std::string & ref_uri) noexcept
{
  typedef char* (*call_wrap_t) (const char* base_uri, const char* ref_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_join_strings;
  auto ref_uri_to_c = gi::unwrap (ref_uri, gi::transfer_none, gi::direction_in);
  auto base_uri_to_c = gi::unwrap (base_uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (base_uri_to_c), (const char*) (ref_uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_uri_protocol_is_supported (const GstURIType type, const gchar* protocol);
// gboolean gst_uri_protocol_is_supported (const ::GstURIType type, const char* protocol);
bool base::UriBase::protocol_is_supported (Gst::URIType type, const std::string & protocol) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstURIType type, const char* protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_protocol_is_supported;
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((const ::GstURIType) (type_to_c), (const char*) (protocol_to_c));
  return _temp_ret;
}

// gboolean gst_uri_protocol_is_valid (const gchar* protocol);
// gboolean gst_uri_protocol_is_valid (const char* protocol);
bool base::UriBase::protocol_is_valid (const std::string & protocol) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_protocol_is_valid;
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (protocol_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/uri_extra_def_impl.hpp>)
#include <gst/uri_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/uri_extra_impl.hpp>)
#include <gst/uri_extra_impl.hpp>
#endif
#endif

#endif
