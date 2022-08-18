// AUTO-GENERATED

#ifndef _GI_GLIB_URI_IMPL_HPP_
#define _GI_GLIB_URI_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// const gchar* g_uri_get_auth_params (GUri* uri);
// const char* g_uri_get_auth_params (::GUri* uri);
std::string base::UriBase::get_auth_params () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_get_auth_params;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GUriFlags g_uri_get_flags (GUri* uri);
// ::GUriFlags g_uri_get_flags (::GUri* uri);
GLib::UriFlags base::UriBase::get_flags () noexcept
{
  typedef ::GUriFlags (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_get_flags;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* g_uri_get_fragment (GUri* uri);
// const char* g_uri_get_fragment (::GUri* uri);
std::string base::UriBase::get_fragment () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_get_fragment;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_uri_get_host (GUri* uri);
// const char* g_uri_get_host (::GUri* uri);
std::string base::UriBase::get_host () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_get_host;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_uri_get_password (GUri* uri);
// const char* g_uri_get_password (::GUri* uri);
std::string base::UriBase::get_password () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_get_password;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_uri_get_path (GUri* uri);
// const char* g_uri_get_path (::GUri* uri);
std::string base::UriBase::get_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_get_path;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint g_uri_get_port (GUri* uri);
// gint g_uri_get_port (::GUri* uri);
gint base::UriBase::get_port () noexcept
{
  typedef gint (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_get_port;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_uri_get_query (GUri* uri);
// const char* g_uri_get_query (::GUri* uri);
std::string base::UriBase::get_query () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_get_query;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_uri_get_scheme (GUri* uri);
// const char* g_uri_get_scheme (::GUri* uri);
std::string base::UriBase::get_scheme () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_get_scheme;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_uri_get_user (GUri* uri);
// const char* g_uri_get_user (::GUri* uri);
std::string base::UriBase::get_user () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_get_user;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_uri_get_userinfo (GUri* uri);
// const char* g_uri_get_userinfo (::GUri* uri);
std::string base::UriBase::get_userinfo () noexcept
{
  typedef const char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_get_userinfo;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GUri* g_uri_parse_relative (GUri* base_uri, const gchar* uri_ref, GUriFlags flags, GError ** error);
// ::GUri* g_uri_parse_relative (::GUri* base_uri, const char* uri_ref, ::GUriFlags flags, GError ** error);
GLib::Uri base::UriBase::parse_relative (const std::string & uri_ref, GLib::UriFlags flags)
{
  typedef ::GUri* (*call_wrap_t) (::GUri* base_uri, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_parse_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Uri base::UriBase::parse_relative (const std::string & uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GUri* (*call_wrap_t) (::GUri* base_uri, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_parse_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GUri* g_uri_ref (GUri* uri);
// ::GUri* g_uri_ref (::GUri* uri);
// IGNORE; marked ignore

// char* g_uri_to_string (GUri* uri);
// char* g_uri_to_string (::GUri* uri);
std::string base::UriBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GUri* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_to_string;
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_uri_to_string_partial (GUri* uri, GUriHideFlags flags);
// char* g_uri_to_string_partial (::GUri* uri, ::GUriHideFlags flags);
std::string base::UriBase::to_string_partial (GLib::UriHideFlags flags) noexcept
{
  typedef char* (*call_wrap_t) (::GUri* uri, ::GUriHideFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_to_string_partial;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUri*) (gobj_()), (::GUriHideFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_uri_unref (GUri* uri);
// void g_uri_unref (::GUri* uri);
// IGNORE; marked ignore

// GUri* g_uri_build (GUriFlags flags, const gchar* scheme, const gchar* userinfo, const gchar* host, gint port, const gchar* path, const gchar* query, const gchar* fragment);
// ::GUri* g_uri_build (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
GLib::Uri base::UriBase::build (GLib::UriFlags flags, const std::string & scheme, const std::string & userinfo, const std::string & host, gint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept
{
  typedef ::GUri* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_build;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none, gi::direction_in);
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto host_to_c = gi::unwrap (host, gi::transfer_none, gi::direction_in);
  auto userinfo_to_c = gi::unwrap (userinfo, gi::transfer_none, gi::direction_in);
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Uri base::UriBase::build (GLib::UriFlags flags, const std::string & scheme, gint port, const std::string & path) noexcept
{
  typedef ::GUri* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_build;
  auto fragment_to_c = nullptr;
  auto query_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto host_to_c = nullptr;
  auto userinfo_to_c = nullptr;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GUri* g_uri_build_with_user (GUriFlags flags, const gchar* scheme, const gchar* user, const gchar* password, const gchar* auth_params, const gchar* host, gint port, const gchar* path, const gchar* query, const gchar* fragment);
// ::GUri* g_uri_build_with_user (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
GLib::Uri base::UriBase::build_with_user (GLib::UriFlags flags, const std::string & scheme, const std::string & user, const std::string & password, const std::string & auth_params, const std::string & host, gint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept
{
  typedef ::GUri* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_build_with_user;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none, gi::direction_in);
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto host_to_c = gi::unwrap (host, gi::transfer_none, gi::direction_in);
  auto auth_params_to_c = gi::unwrap (auth_params, gi::transfer_none, gi::direction_in);
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  auto user_to_c = gi::unwrap (user, gi::transfer_none, gi::direction_in);
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (user_to_c), (const char*) (password_to_c), (const char*) (auth_params_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Uri base::UriBase::build_with_user (GLib::UriFlags flags, const std::string & scheme, gint port, const std::string & path) noexcept
{
  typedef ::GUri* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_build_with_user;
  auto fragment_to_c = nullptr;
  auto query_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto host_to_c = nullptr;
  auto auth_params_to_c = nullptr;
  auto password_to_c = nullptr;
  auto user_to_c = nullptr;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (user_to_c), (const char*) (password_to_c), (const char*) (auth_params_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GQuark g_uri_error_quark ();
// ::GQuark g_uri_error_quark ();
GLib::Quark base::UriBase::error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// char* g_uri_escape_bytes (const guint8* unescaped, gsize length, const char* reserved_chars_allowed);
// char* g_uri_escape_bytes (const guint8* unescaped, gsize length, const char* reserved_chars_allowed);
std::string base::UriBase::escape_bytes (guint8 * unescaped, gsize length, const std::string & reserved_chars_allowed) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* unescaped, gsize length, const char* reserved_chars_allowed);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_escape_bytes;
  auto reserved_chars_allowed_to_c = gi::unwrap (reserved_chars_allowed, gi::transfer_none, gi::direction_in);
  auto unescaped_i = detail::make_list_unwrap_range (unescaped, length, false);
  auto unescaped_w = unwrap (unescaped_i, gi::transfer_none, direction_in);
  auto unescaped_to_c = unescaped_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (unescaped_to_c), (gsize) (unescaped_w.size()), (const char*) (reserved_chars_allowed_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::UriBase::escape_bytes (guint8 * unescaped, gsize length) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* unescaped, gsize length, const char* reserved_chars_allowed);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_escape_bytes;
  auto reserved_chars_allowed_to_c = nullptr;
  auto unescaped_i = detail::make_list_unwrap_range (unescaped, length, false);
  auto unescaped_w = unwrap (unescaped_i, gi::transfer_none, direction_in);
  auto unescaped_to_c = unescaped_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (unescaped_to_c), (gsize) (unescaped_w.size()), (const char*) (reserved_chars_allowed_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_uri_escape_string (const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
// char* g_uri_escape_string (const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
std::string base::UriBase::escape_string (const std::string & unescaped, const std::string & reserved_chars_allowed, gboolean allow_utf8) noexcept
{
  typedef char* (*call_wrap_t) (const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_escape_string;
  auto allow_utf8_to_c = allow_utf8;
  auto reserved_chars_allowed_to_c = gi::unwrap (reserved_chars_allowed, gi::transfer_none, gi::direction_in);
  auto unescaped_to_c = gi::unwrap (unescaped, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (unescaped_to_c), (const char*) (reserved_chars_allowed_to_c), (gboolean) (allow_utf8_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::UriBase::escape_string (const std::string & unescaped, gboolean allow_utf8) noexcept
{
  typedef char* (*call_wrap_t) (const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_escape_string;
  auto allow_utf8_to_c = allow_utf8;
  auto reserved_chars_allowed_to_c = nullptr;
  auto unescaped_to_c = gi::unwrap (unescaped, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (unescaped_to_c), (const char*) (reserved_chars_allowed_to_c), (gboolean) (allow_utf8_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_uri_is_valid (const gchar* uri_string, GUriFlags flags, GError ** error);
// gboolean g_uri_is_valid (const char* uri_string, ::GUriFlags flags, GError ** error);
bool base::UriBase::is_valid (const std::string & uri_string, GLib::UriFlags flags)
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_is_valid;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UriBase::is_valid (const std::string & uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_is_valid;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gchar* g_uri_join (GUriFlags flags, const gchar* scheme, const gchar* userinfo, const gchar* host, gint port, const gchar* path, const gchar* query, const gchar* fragment);
// char* g_uri_join (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
std::string base::UriBase::join (GLib::UriFlags flags, const std::string & scheme, const std::string & userinfo, const std::string & host, gint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept
{
  typedef char* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_join;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none, gi::direction_in);
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto host_to_c = gi::unwrap (host, gi::transfer_none, gi::direction_in);
  auto userinfo_to_c = gi::unwrap (userinfo, gi::transfer_none, gi::direction_in);
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::UriBase::join (GLib::UriFlags flags, gint port, const std::string & path) noexcept
{
  typedef char* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* userinfo, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_join;
  auto fragment_to_c = nullptr;
  auto query_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto host_to_c = nullptr;
  auto userinfo_to_c = nullptr;
  auto scheme_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (userinfo_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_uri_join_with_user (GUriFlags flags, const gchar* scheme, const gchar* user, const gchar* password, const gchar* auth_params, const gchar* host, gint port, const gchar* path, const gchar* query, const gchar* fragment);
// char* g_uri_join_with_user (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
std::string base::UriBase::join_with_user (GLib::UriFlags flags, const std::string & scheme, const std::string & user, const std::string & password, const std::string & auth_params, const std::string & host, gint port, const std::string & path, const std::string & query, const std::string & fragment) noexcept
{
  typedef char* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_join_with_user;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none, gi::direction_in);
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto host_to_c = gi::unwrap (host, gi::transfer_none, gi::direction_in);
  auto auth_params_to_c = gi::unwrap (auth_params, gi::transfer_none, gi::direction_in);
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  auto user_to_c = gi::unwrap (user, gi::transfer_none, gi::direction_in);
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (user_to_c), (const char*) (password_to_c), (const char*) (auth_params_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::UriBase::join_with_user (GLib::UriFlags flags, gint port, const std::string & path) noexcept
{
  typedef char* (*call_wrap_t) (::GUriFlags flags, const char* scheme, const char* user, const char* password, const char* auth_params, const char* host, gint port, const char* path, const char* query, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_join_with_user;
  auto fragment_to_c = nullptr;
  auto query_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  auto host_to_c = nullptr;
  auto auth_params_to_c = nullptr;
  auto password_to_c = nullptr;
  auto user_to_c = nullptr;
  auto scheme_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GUriFlags) (flags_to_c), (const char*) (scheme_to_c), (const char*) (user_to_c), (const char*) (password_to_c), (const char*) (auth_params_to_c), (const char*) (host_to_c), (gint) (port_to_c), (const char*) (path_to_c), (const char*) (query_to_c), (const char*) (fragment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** g_uri_list_extract_uris (const gchar* uri_list);
// char** g_uri_list_extract_uris (const char* uri_list);
std::vector<std::string> base::UriBase::list_extract_uris (const std::string & uri_list) noexcept
{
  typedef char** (*call_wrap_t) (const char* uri_list);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_list_extract_uris;
  auto uri_list_to_c = gi::unwrap (uri_list, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_list_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GUri* g_uri_parse (const gchar* uri_string, GUriFlags flags, GError ** error);
// ::GUri* g_uri_parse (const char* uri_string, ::GUriFlags flags, GError ** error);
GLib::Uri base::UriBase::parse (const std::string & uri_string, GLib::UriFlags flags)
{
  typedef ::GUri* (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_parse;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Uri base::UriBase::parse (const std::string & uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GUri* (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_parse;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GHashTable* g_uri_parse_params (const gchar* params, gssize length, const gchar* separators, GUriParamsFlags flags, GError ** error);
// ::GHashTable* g_uri_parse_params (const char* params, gssize length, const char* separators, ::GUriParamsFlags flags, GError ** error);
std::map<std::string, std::string> base::UriBase::parse_params (const std::string & params, gssize length, const std::string & separators, GLib::UriParamsFlags flags)
{
  typedef ::GHashTable* (*call_wrap_t) (const char* params, gssize length, const char* separators, ::GUriParamsFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_parse_params;
  auto flags_to_c = gi::unwrap (flags);
  auto separators_to_c = gi::unwrap (separators, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (params_to_c), (gssize) (length_to_c), (const char*) (separators_to_c), (::GUriParamsFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_full);
}
std::map<std::string, std::string> base::UriBase::parse_params (const std::string & params, gssize length, const std::string & separators, GLib::UriParamsFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (const char* params, gssize length, const char* separators, ::GUriParamsFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_parse_params;
  auto flags_to_c = gi::unwrap (flags);
  auto separators_to_c = gi::unwrap (separators, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (params_to_c), (gssize) (length_to_c), (const char*) (separators_to_c), (::GUriParamsFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_full);
}

// char* g_uri_parse_scheme (const char* uri);
// char* g_uri_parse_scheme (const char* uri);
std::string base::UriBase::parse_scheme (const std::string & uri) noexcept
{
  typedef char* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_parse_scheme;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const char* g_uri_peek_scheme (const char* uri);
// const char* g_uri_peek_scheme (const char* uri);
std::string base::UriBase::peek_scheme (const std::string & uri) noexcept
{
  typedef const char* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_peek_scheme;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* g_uri_resolve_relative (const gchar* base_uri_string, const gchar* uri_ref, GUriFlags flags, GError ** error);
// char* g_uri_resolve_relative (const char* base_uri_string, const char* uri_ref, ::GUriFlags flags, GError ** error);
std::string base::UriBase::resolve_relative (const std::string & base_uri_string, const std::string & uri_ref, GLib::UriFlags flags)
{
  typedef char* (*call_wrap_t) (const char* base_uri_string, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_resolve_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  auto base_uri_string_to_c = gi::unwrap (base_uri_string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (base_uri_string_to_c), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::UriBase::resolve_relative (const std::string & uri_ref, GLib::UriFlags flags)
{
  typedef char* (*call_wrap_t) (const char* base_uri_string, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_resolve_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  auto base_uri_string_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (base_uri_string_to_c), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::UriBase::resolve_relative (const std::string & base_uri_string, const std::string & uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* base_uri_string, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_resolve_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  auto base_uri_string_to_c = gi::unwrap (base_uri_string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (base_uri_string_to_c), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::UriBase::resolve_relative (const std::string & uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* base_uri_string, const char* uri_ref, ::GUriFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_resolve_relative;
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  auto base_uri_string_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (base_uri_string_to_c), (const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_uri_split (const gchar* uri_ref, GUriFlags flags, gchar** scheme, gchar** userinfo, gchar** host, gint* port, gchar** path, gchar** query, gchar** fragment, GError ** error);
// gboolean g_uri_split (const char* uri_ref, ::GUriFlags flags, char** scheme, char** userinfo, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
bool base::UriBase::split (const std::string & uri_ref, GLib::UriFlags flags, std::string * scheme, std::string * userinfo, std::string * host, gint * port, std::string * path, std::string * query, std::string * fragment)
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** userinfo, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* userinfo_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (userinfo ? &userinfo_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), (char**) (path ? &path_o : nullptr), (char**) (query ? &query_o : nullptr), (char**) (fragment ? &fragment_o : nullptr), &error);
  if (fragment) *fragment = gi::wrap (fragment_o, gi::transfer_full, gi::direction_out);
  if (query) *query = gi::wrap (query_o, gi::transfer_full, gi::direction_out);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full, gi::direction_out);
  if (userinfo) *userinfo = gi::wrap (userinfo_o, gi::transfer_full, gi::direction_out);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UriBase::split (const std::string & uri_ref, GLib::UriFlags flags, std::string * scheme, std::string * userinfo, std::string * host, gint * port, std::string * path, std::string * query, std::string * fragment, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** userinfo, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* userinfo_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (userinfo ? &userinfo_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), (char**) (path ? &path_o : nullptr), (char**) (query ? &query_o : nullptr), (char**) (fragment ? &fragment_o : nullptr), _error ? &_error_o : nullptr);
  if (fragment) *fragment = gi::wrap (fragment_o, gi::transfer_full, gi::direction_out);
  if (query) *query = gi::wrap (query_o, gi::transfer_full, gi::direction_out);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full, gi::direction_out);
  if (userinfo) *userinfo = gi::wrap (userinfo_o, gi::transfer_full, gi::direction_out);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, std::string, std::string, gint, std::string, std::string, std::string> base::UriBase::split (const std::string & uri_ref, GLib::UriFlags flags)
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** userinfo, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* userinfo_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&userinfo_o), (char**) (&host_o), (gint*) (&port_o), (char**) (&path_o), (char**) (&query_o), (char**) (&fragment_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (scheme_o, gi::transfer_full, gi::direction_out), gi::wrap (userinfo_o, gi::transfer_full, gi::direction_out), gi::wrap (host_o, gi::transfer_full, gi::direction_out), port_o, gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (query_o, gi::transfer_full, gi::direction_out), gi::wrap (fragment_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string, std::string, std::string, gint, std::string, std::string, std::string> base::UriBase::split (const std::string & uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** userinfo, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* userinfo_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&userinfo_o), (char**) (&host_o), (gint*) (&port_o), (char**) (&path_o), (char**) (&query_o), (char**) (&fragment_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (scheme_o, gi::transfer_full, gi::direction_out), gi::wrap (userinfo_o, gi::transfer_full, gi::direction_out), gi::wrap (host_o, gi::transfer_full, gi::direction_out), port_o, gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (query_o, gi::transfer_full, gi::direction_out), gi::wrap (fragment_o, gi::transfer_full, gi::direction_out));
}

// gboolean g_uri_split_network (const gchar* uri_string, GUriFlags flags, gchar** scheme, gchar** host, gint* port, GError ** error);
// gboolean g_uri_split_network (const char* uri_string, ::GUriFlags flags, char** scheme, char** host, gint* port, GError ** error);
bool base::UriBase::split_network (const std::string & uri_string, GLib::UriFlags flags, std::string * scheme, std::string * host, gint * port)
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, char** scheme, char** host, gint* port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split_network;
  gint port_o {};
  char* host_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), &error);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full, gi::direction_out);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UriBase::split_network (const std::string & uri_string, GLib::UriFlags flags, std::string * scheme, std::string * host, gint * port, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, char** scheme, char** host, gint* port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split_network;
  gint port_o {};
  char* host_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), _error ? &_error_o : nullptr);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full, gi::direction_out);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, std::string, gint> base::UriBase::split_network (const std::string & uri_string, GLib::UriFlags flags)
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, char** scheme, char** host, gint* port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split_network;
  gint port_o {};
  char* host_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&host_o), (gint*) (&port_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (scheme_o, gi::transfer_full, gi::direction_out), gi::wrap (host_o, gi::transfer_full, gi::direction_out), port_o);
}
std::tuple<bool, std::string, std::string, gint> base::UriBase::split_network (const std::string & uri_string, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_string, ::GUriFlags flags, char** scheme, char** host, gint* port, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split_network;
  gint port_o {};
  char* host_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&host_o), (gint*) (&port_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (scheme_o, gi::transfer_full, gi::direction_out), gi::wrap (host_o, gi::transfer_full, gi::direction_out), port_o);
}

// gboolean g_uri_split_with_user (const gchar* uri_ref, GUriFlags flags, gchar** scheme, gchar** user, gchar** password, gchar** auth_params, gchar** host, gint* port, gchar** path, gchar** query, gchar** fragment, GError ** error);
// gboolean g_uri_split_with_user (const char* uri_ref, ::GUriFlags flags, char** scheme, char** user, char** password, char** auth_params, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
bool base::UriBase::split_with_user (const std::string & uri_ref, GLib::UriFlags flags, std::string * scheme, std::string * user, std::string * password, std::string * auth_params, std::string * host, gint * port, std::string * path, std::string * query, std::string * fragment)
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** user, char** password, char** auth_params, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split_with_user;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* auth_params_o {};
  char* password_o {};
  char* user_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (user ? &user_o : nullptr), (char**) (password ? &password_o : nullptr), (char**) (auth_params ? &auth_params_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), (char**) (path ? &path_o : nullptr), (char**) (query ? &query_o : nullptr), (char**) (fragment ? &fragment_o : nullptr), &error);
  if (fragment) *fragment = gi::wrap (fragment_o, gi::transfer_full, gi::direction_out);
  if (query) *query = gi::wrap (query_o, gi::transfer_full, gi::direction_out);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full, gi::direction_out);
  if (auth_params) *auth_params = gi::wrap (auth_params_o, gi::transfer_full, gi::direction_out);
  if (password) *password = gi::wrap (password_o, gi::transfer_full, gi::direction_out);
  if (user) *user = gi::wrap (user_o, gi::transfer_full, gi::direction_out);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UriBase::split_with_user (const std::string & uri_ref, GLib::UriFlags flags, std::string * scheme, std::string * user, std::string * password, std::string * auth_params, std::string * host, gint * port, std::string * path, std::string * query, std::string * fragment, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** user, char** password, char** auth_params, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split_with_user;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* auth_params_o {};
  char* password_o {};
  char* user_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (scheme ? &scheme_o : nullptr), (char**) (user ? &user_o : nullptr), (char**) (password ? &password_o : nullptr), (char**) (auth_params ? &auth_params_o : nullptr), (char**) (host ? &host_o : nullptr), (gint*) (port ? &port_o : nullptr), (char**) (path ? &path_o : nullptr), (char**) (query ? &query_o : nullptr), (char**) (fragment ? &fragment_o : nullptr), _error ? &_error_o : nullptr);
  if (fragment) *fragment = gi::wrap (fragment_o, gi::transfer_full, gi::direction_out);
  if (query) *query = gi::wrap (query_o, gi::transfer_full, gi::direction_out);
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  if (port) *port = port_o;
  if (host) *host = gi::wrap (host_o, gi::transfer_full, gi::direction_out);
  if (auth_params) *auth_params = gi::wrap (auth_params_o, gi::transfer_full, gi::direction_out);
  if (password) *password = gi::wrap (password_o, gi::transfer_full, gi::direction_out);
  if (user) *user = gi::wrap (user_o, gi::transfer_full, gi::direction_out);
  if (scheme) *scheme = gi::wrap (scheme_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, std::string, std::string, std::string, std::string, gint, std::string, std::string, std::string> base::UriBase::split_with_user (const std::string & uri_ref, GLib::UriFlags flags)
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** user, char** password, char** auth_params, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split_with_user;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* auth_params_o {};
  char* password_o {};
  char* user_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&user_o), (char**) (&password_o), (char**) (&auth_params_o), (char**) (&host_o), (gint*) (&port_o), (char**) (&path_o), (char**) (&query_o), (char**) (&fragment_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (scheme_o, gi::transfer_full, gi::direction_out), gi::wrap (user_o, gi::transfer_full, gi::direction_out), gi::wrap (password_o, gi::transfer_full, gi::direction_out), gi::wrap (auth_params_o, gi::transfer_full, gi::direction_out), gi::wrap (host_o, gi::transfer_full, gi::direction_out), port_o, gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (query_o, gi::transfer_full, gi::direction_out), gi::wrap (fragment_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string, std::string, std::string, std::string, std::string, gint, std::string, std::string, std::string> base::UriBase::split_with_user (const std::string & uri_ref, GLib::UriFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* uri_ref, ::GUriFlags flags, char** scheme, char** user, char** password, char** auth_params, char** host, gint* port, char** path, char** query, char** fragment, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_split_with_user;
  char* fragment_o {};
  char* query_o {};
  char* path_o {};
  gint port_o {};
  char* host_o {};
  char* auth_params_o {};
  char* password_o {};
  char* user_o {};
  char* scheme_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto uri_ref_to_c = gi::unwrap (uri_ref, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_ref_to_c), (::GUriFlags) (flags_to_c), (char**) (&scheme_o), (char**) (&user_o), (char**) (&password_o), (char**) (&auth_params_o), (char**) (&host_o), (gint*) (&port_o), (char**) (&path_o), (char**) (&query_o), (char**) (&fragment_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (scheme_o, gi::transfer_full, gi::direction_out), gi::wrap (user_o, gi::transfer_full, gi::direction_out), gi::wrap (password_o, gi::transfer_full, gi::direction_out), gi::wrap (auth_params_o, gi::transfer_full, gi::direction_out), gi::wrap (host_o, gi::transfer_full, gi::direction_out), port_o, gi::wrap (path_o, gi::transfer_full, gi::direction_out), gi::wrap (query_o, gi::transfer_full, gi::direction_out), gi::wrap (fragment_o, gi::transfer_full, gi::direction_out));
}

// GBytes* g_uri_unescape_bytes (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
// ::GBytes* g_uri_unescape_bytes (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
GLib::Bytes base::UriBase::unescape_bytes (const std::string & escaped_string, gssize length, const std::string & illegal_characters)
{
  typedef ::GBytes* (*call_wrap_t) (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_unescape_bytes;
  auto illegal_characters_to_c = gi::unwrap (illegal_characters, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (gssize) (length_to_c), (const char*) (illegal_characters_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::UriBase::unescape_bytes (const std::string & escaped_string, gssize length)
{
  typedef ::GBytes* (*call_wrap_t) (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_unescape_bytes;
  auto illegal_characters_to_c = nullptr;
  auto length_to_c = length;
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (gssize) (length_to_c), (const char*) (illegal_characters_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::UriBase::unescape_bytes (const std::string & escaped_string, gssize length, const std::string & illegal_characters, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_unescape_bytes;
  auto illegal_characters_to_c = gi::unwrap (illegal_characters, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (gssize) (length_to_c), (const char*) (illegal_characters_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::UriBase::unescape_bytes (const std::string & escaped_string, gssize length, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (const char* escaped_string, gssize length, const char* illegal_characters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_unescape_bytes;
  auto illegal_characters_to_c = nullptr;
  auto length_to_c = length;
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (gssize) (length_to_c), (const char*) (illegal_characters_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_uri_unescape_segment (const char* escaped_string, const char* escaped_string_end, const char* illegal_characters);
// char* g_uri_unescape_segment (const char* escaped_string, const char* escaped_string_end, const char* illegal_characters);
std::string base::UriBase::unescape_segment (const std::string & escaped_string, const std::string & escaped_string_end, const std::string & illegal_characters) noexcept
{
  typedef char* (*call_wrap_t) (const char* escaped_string, const char* escaped_string_end, const char* illegal_characters);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_unescape_segment;
  auto illegal_characters_to_c = gi::unwrap (illegal_characters, gi::transfer_none, gi::direction_in);
  auto escaped_string_end_to_c = gi::unwrap (escaped_string_end, gi::transfer_none, gi::direction_in);
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (const char*) (escaped_string_end_to_c), (const char*) (illegal_characters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::UriBase::unescape_segment () noexcept
{
  typedef char* (*call_wrap_t) (const char* escaped_string, const char* escaped_string_end, const char* illegal_characters);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_unescape_segment;
  auto illegal_characters_to_c = nullptr;
  auto escaped_string_end_to_c = nullptr;
  auto escaped_string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (const char*) (escaped_string_end_to_c), (const char*) (illegal_characters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_uri_unescape_string (const char* escaped_string, const char* illegal_characters);
// char* g_uri_unescape_string (const char* escaped_string, const char* illegal_characters);
std::string base::UriBase::unescape_string (const std::string & escaped_string, const std::string & illegal_characters) noexcept
{
  typedef char* (*call_wrap_t) (const char* escaped_string, const char* illegal_characters);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_unescape_string;
  auto illegal_characters_to_c = gi::unwrap (illegal_characters, gi::transfer_none, gi::direction_in);
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (const char*) (illegal_characters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::UriBase::unescape_string (const std::string & escaped_string) noexcept
{
  typedef char* (*call_wrap_t) (const char* escaped_string, const char* illegal_characters);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_unescape_string;
  auto illegal_characters_to_c = nullptr;
  auto escaped_string_to_c = gi::unwrap (escaped_string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (escaped_string_to_c), (const char*) (illegal_characters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/uri_extra_def_impl.hpp>)
#include <glib/uri_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/uri_extra_impl.hpp>)
#include <glib/uri_extra_impl.hpp>
#endif
#endif

#endif
