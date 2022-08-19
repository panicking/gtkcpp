// AUTO-GENERATED

#ifndef _GI_SOUP_URI_IMPL_HPP_
#define _GI_SOUP_URI_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

static const char* _field_scheme_get (const ::SoupURI* obj) { return (const char*) obj->scheme; }
// const char* URI::scheme (const ::SoupURI* obj);
// const char* URI::scheme (const ::SoupURI* obj);
std::string base::URIBase::scheme_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::SoupURI* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scheme_get;
  auto _temp_ret = call_wrap_v ((const ::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_user_get (const ::SoupURI* obj) { return (char*) obj->user; }
// char* URI::user (const ::SoupURI* obj);
// char* URI::user (const ::SoupURI* obj);
std::string base::URIBase::user_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupURI* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_user_get;
  auto _temp_ret = call_wrap_v ((const ::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_password_get (const ::SoupURI* obj) { return (char*) obj->password; }
// char* URI::password (const ::SoupURI* obj);
// char* URI::password (const ::SoupURI* obj);
std::string base::URIBase::password_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupURI* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_password_get;
  auto _temp_ret = call_wrap_v ((const ::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_host_get (const ::SoupURI* obj) { return (char*) obj->host; }
// char* URI::host (const ::SoupURI* obj);
// char* URI::host (const ::SoupURI* obj);
std::string base::URIBase::host_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupURI* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_host_get;
  auto _temp_ret = call_wrap_v ((const ::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint _field_port_get (const ::SoupURI* obj) { return (guint) obj->port; }
// guint URI::port (const ::SoupURI* obj);
// guint URI::port (const ::SoupURI* obj);
guint base::URIBase::port_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::SoupURI* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_port_get;
  auto _temp_ret = call_wrap_v ((const ::SoupURI*) (gobj_()));
  return _temp_ret;
}

static void _field_port_set (::SoupURI* obj, guint _value) { obj->port = (decltype(obj->port)) _value; }
//  URI::port (::SoupURI* obj, guint _value);
// void URI::port (::SoupURI* obj, guint _value);
void base::URIBase::port_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_port_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupURI*) (gobj_()), (guint) (_value_to_c));
}

static char* _field_path_get (const ::SoupURI* obj) { return (char*) obj->path; }
// char* URI::path (const ::SoupURI* obj);
// char* URI::path (const ::SoupURI* obj);
std::string base::URIBase::path_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupURI* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_path_get;
  auto _temp_ret = call_wrap_v ((const ::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_query_get (const ::SoupURI* obj) { return (char*) obj->query; }
// char* URI::query (const ::SoupURI* obj);
// char* URI::query (const ::SoupURI* obj);
std::string base::URIBase::query_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupURI* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_query_get;
  auto _temp_ret = call_wrap_v ((const ::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_fragment_get (const ::SoupURI* obj) { return (char*) obj->fragment; }
// char* URI::fragment (const ::SoupURI* obj);
// char* URI::fragment (const ::SoupURI* obj);
std::string base::URIBase::fragment_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupURI* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_fragment_get;
  auto _temp_ret = call_wrap_v ((const ::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupURI* soup_uri_new (const char* uri_string);
// ::SoupURI* soup_uri_new (const char* uri_string);
Soup::URI base::URIBase::new_ (const std::string & uri_string) noexcept
{
  typedef ::SoupURI* (*call_wrap_t) (const char* uri_string);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_new;
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::URI base::URIBase::new_ () noexcept
{
  typedef ::SoupURI* (*call_wrap_t) (const char* uri_string);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_new;
  auto uri_string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (uri_string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupURI* soup_uri_new_with_base (SoupURI* base, const char* uri_string);
// ::SoupURI* soup_uri_new_with_base (::SoupURI* base, const char* uri_string);
Soup::URI base::URIBase::new_with_base (Soup::URI base, const std::string & uri_string) noexcept
{
  typedef ::SoupURI* (*call_wrap_t) (::SoupURI* base, const char* uri_string);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_new_with_base;
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  auto base_to_c = gi::unwrap (base, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupURI*) (base_to_c), (const char*) (uri_string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupURI* soup_uri_copy (SoupURI* uri);
// ::SoupURI* soup_uri_copy (::SoupURI* uri);
Soup::URI base::URIBase::copy () noexcept
{
  typedef ::SoupURI* (*call_wrap_t) (::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_copy;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupURI* soup_uri_copy_host (SoupURI* uri);
// ::SoupURI* soup_uri_copy_host (::SoupURI* uri);
Soup::URI base::URIBase::copy_host () noexcept
{
  typedef ::SoupURI* (*call_wrap_t) (::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_copy_host;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean soup_uri_equal (SoupURI* uri1, SoupURI* uri2);
// gboolean soup_uri_equal (::SoupURI* uri1, ::SoupURI* uri2);
bool base::URIBase::equal (Soup::URI uri2) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupURI* uri1, ::SoupURI* uri2);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_equal;
  auto uri2_to_c = gi::unwrap (uri2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()), (::SoupURI*) (uri2_to_c));
  return _temp_ret;
}

// void soup_uri_free (SoupURI* uri);
// void soup_uri_free (::SoupURI* uri);
// IGNORE; marked ignore

// const char* soup_uri_get_fragment (SoupURI* uri);
// const char* soup_uri_get_fragment (::SoupURI* uri);
std::string base::URIBase::get_fragment () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_get_fragment;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_uri_get_host (SoupURI* uri);
// const char* soup_uri_get_host (::SoupURI* uri);
std::string base::URIBase::get_host () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_get_host;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_uri_get_password (SoupURI* uri);
// const char* soup_uri_get_password (::SoupURI* uri);
std::string base::URIBase::get_password () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_get_password;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_uri_get_path (SoupURI* uri);
// const char* soup_uri_get_path (::SoupURI* uri);
std::string base::URIBase::get_path () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_get_path;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint soup_uri_get_port (SoupURI* uri);
// guint soup_uri_get_port (::SoupURI* uri);
guint base::URIBase::get_port () noexcept
{
  typedef guint (*call_wrap_t) (::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_get_port;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()));
  return _temp_ret;
}

// const char* soup_uri_get_query (SoupURI* uri);
// const char* soup_uri_get_query (::SoupURI* uri);
std::string base::URIBase::get_query () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_get_query;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_uri_get_scheme (SoupURI* uri);
// const char* soup_uri_get_scheme (::SoupURI* uri);
std::string base::URIBase::get_scheme () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_get_scheme;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_uri_get_user (SoupURI* uri);
// const char* soup_uri_get_user (::SoupURI* uri);
std::string base::URIBase::get_user () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_get_user;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean soup_uri_host_equal (gconstpointer v1, gconstpointer v2);
// gboolean soup_uri_host_equal (const ::SoupURI* v1, const ::SoupURI* v2);
bool base::URIBase::host_equal (const Soup::URI & v2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::SoupURI* v1, const ::SoupURI* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_host_equal;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::SoupURI*) (gobj_()), (const ::SoupURI*) (v2_to_c));
  return _temp_ret;
}

// guint soup_uri_host_hash (gconstpointer key);
// guint soup_uri_host_hash (const ::SoupURI* key);
guint base::URIBase::host_hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::SoupURI* key);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_host_hash;
  auto _temp_ret = call_wrap_v ((const ::SoupURI*) (gobj_()));
  return _temp_ret;
}

// void soup_uri_set_fragment (SoupURI* uri, const char* fragment);
// void soup_uri_set_fragment (::SoupURI* uri, const char* fragment);
void base::URIBase::set_fragment (const std::string & fragment) noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_fragment;
  auto fragment_to_c = gi::unwrap (fragment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (fragment_to_c));
}
void base::URIBase::set_fragment () noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* fragment);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_fragment;
  auto fragment_to_c = nullptr;
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (fragment_to_c));
}

// void soup_uri_set_host (SoupURI* uri, const char* host);
// void soup_uri_set_host (::SoupURI* uri, const char* host);
void base::URIBase::set_host (const std::string & host) noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* host);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_host;
  auto host_to_c = gi::unwrap (host, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (host_to_c));
}
void base::URIBase::set_host () noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* host);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_host;
  auto host_to_c = nullptr;
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (host_to_c));
}

// void soup_uri_set_password (SoupURI* uri, const char* password);
// void soup_uri_set_password (::SoupURI* uri, const char* password);
void base::URIBase::set_password (const std::string & password) noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_password;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (password_to_c));
}
void base::URIBase::set_password () noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_password;
  auto password_to_c = nullptr;
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (password_to_c));
}

// void soup_uri_set_path (SoupURI* uri, const char* path);
// void soup_uri_set_path (::SoupURI* uri, const char* path);
void base::URIBase::set_path (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (path_to_c));
}

// void soup_uri_set_port (SoupURI* uri, guint port);
// void soup_uri_set_port (::SoupURI* uri, guint port);
void base::URIBase::set_port (guint port) noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, guint port);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_port;
  auto port_to_c = port;
  call_wrap_v ((::SoupURI*) (gobj_()), (guint) (port_to_c));
}

// void soup_uri_set_query (SoupURI* uri, const char* query);
// void soup_uri_set_query (::SoupURI* uri, const char* query);
void base::URIBase::set_query (const std::string & query) noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* query);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_query;
  auto query_to_c = gi::unwrap (query, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (query_to_c));
}
void base::URIBase::set_query () noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* query);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_query;
  auto query_to_c = nullptr;
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (query_to_c));
}

// void soup_uri_set_query_from_fields (SoupURI* uri, const char* first_field);
// void soup_uri_set_query_from_fields (::SoupURI* uri, const char* first_field);
// IGNORE; not introspectable, varargs not supported

// void soup_uri_set_query_from_form (SoupURI* uri, GHashTable* form);
// void soup_uri_set_query_from_form (::SoupURI* uri, ::GHashTable* form);
void base::URIBase::set_query_from_form (const std::map<std::string, std::string> & form) noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, ::GHashTable* form);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_query_from_form;
  auto & form_i = form;
  auto form_w = unwrap (form_i, gi::transfer_none, direction_in);
  auto form_to_c = form_w.gobj_(false);
  call_wrap_v ((::SoupURI*) (gobj_()), (::GHashTable*) (form_to_c));
}

// void soup_uri_set_scheme (SoupURI* uri, const char* scheme);
// void soup_uri_set_scheme (::SoupURI* uri, const char* scheme);
void base::URIBase::set_scheme (const std::string & scheme) noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_scheme;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (scheme_to_c));
}

// void soup_uri_set_user (SoupURI* uri, const char* user);
// void soup_uri_set_user (::SoupURI* uri, const char* user);
void base::URIBase::set_user (const std::string & user) noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* user);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_user;
  auto user_to_c = gi::unwrap (user, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (user_to_c));
}
void base::URIBase::set_user () noexcept
{
  typedef void (*call_wrap_t) (::SoupURI* uri, const char* user);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_set_user;
  auto user_to_c = nullptr;
  call_wrap_v ((::SoupURI*) (gobj_()), (const char*) (user_to_c));
}

// char* soup_uri_to_string (SoupURI* uri, gboolean just_path_and_query);
// char* soup_uri_to_string (::SoupURI* uri, gboolean just_path_and_query);
std::string base::URIBase::to_string (gboolean just_path_and_query) noexcept
{
  typedef char* (*call_wrap_t) (::SoupURI* uri, gboolean just_path_and_query);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_to_string;
  auto just_path_and_query_to_c = just_path_and_query;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()), (gboolean) (just_path_and_query_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean soup_uri_uses_default_port (SoupURI* uri);
// gboolean soup_uri_uses_default_port (::SoupURI* uri);
bool base::URIBase::uses_default_port () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_uses_default_port;
  auto _temp_ret = call_wrap_v ((::SoupURI*) (gobj_()));
  return _temp_ret;
}

// char* soup_uri_decode (const char* part);
// char* soup_uri_decode (const char* part);
std::string base::URIBase::decode (const std::string & part) noexcept
{
  typedef char* (*call_wrap_t) (const char* part);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_decode;
  auto part_to_c = gi::unwrap (part, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (part_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* soup_uri_encode (const char* part, const char* escape_extra);
// char* soup_uri_encode (const char* part, const char* escape_extra);
std::string base::URIBase::encode (const std::string & part, const std::string & escape_extra) noexcept
{
  typedef char* (*call_wrap_t) (const char* part, const char* escape_extra);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_encode;
  auto escape_extra_to_c = gi::unwrap (escape_extra, gi::transfer_none, gi::direction_in);
  auto part_to_c = gi::unwrap (part, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (part_to_c), (const char*) (escape_extra_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::URIBase::encode (const std::string & part) noexcept
{
  typedef char* (*call_wrap_t) (const char* part, const char* escape_extra);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_encode;
  auto escape_extra_to_c = nullptr;
  auto part_to_c = gi::unwrap (part, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (part_to_c), (const char*) (escape_extra_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* soup_uri_normalize (const char* part, const char* unescape_extra);
// char* soup_uri_normalize (const char* part, const char* unescape_extra);
std::string base::URIBase::normalize (const std::string & part, const std::string & unescape_extra) noexcept
{
  typedef char* (*call_wrap_t) (const char* part, const char* unescape_extra);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_normalize;
  auto unescape_extra_to_c = gi::unwrap (unescape_extra, gi::transfer_none, gi::direction_in);
  auto part_to_c = gi::unwrap (part, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (part_to_c), (const char*) (unescape_extra_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::URIBase::normalize (const std::string & part) noexcept
{
  typedef char* (*call_wrap_t) (const char* part, const char* unescape_extra);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_uri_normalize;
  auto unescape_extra_to_c = nullptr;
  auto part_to_c = gi::unwrap (part, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (part_to_c), (const char*) (unescape_extra_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/uri_extra_def_impl.hpp>)
#include <soup/uri_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/uri_extra_impl.hpp>)
#include <soup/uri_extra_impl.hpp>
#endif
#endif

#endif
