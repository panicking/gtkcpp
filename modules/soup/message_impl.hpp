// AUTO-GENERATED

#ifndef _GI_SOUP_MESSAGE_IMPL_HPP_
#define _GI_SOUP_MESSAGE_IMPL_HPP_

#include <string.h>

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupMessage* soup_message_new (const char* method, const char* uri_string);
// ::SoupMessage* soup_message_new (const char* method, const char* uri_string);
Soup::Message base::MessageBase::new_ (const std::string & method, const std::string & uri_string) noexcept
{
  typedef ::SoupMessage* (*call_wrap_t) (const char* method, const char* uri_string);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_new;
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  auto method_to_c = gi::unwrap (method, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (method_to_c), (const char*) (uri_string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupMessage* soup_message_new_from_uri (const char* method, SoupURI* uri);
// ::SoupMessage* soup_message_new_from_uri (const char* method, ::SoupURI* uri);
Soup::Message base::MessageBase::new_from_uri (const std::string & method, Soup::URI uri) noexcept
{
  typedef ::SoupMessage* (*call_wrap_t) (const char* method, ::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_new_from_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto method_to_c = gi::unwrap (method, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (method_to_c), (::SoupURI*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint soup_message_add_header_handler (SoupMessage* msg, const char* signal, const char* header, GCallback callback, gpointer user_data);
// guint soup_message_add_header_handler (::SoupMessage* msg, const char* signal, const char* header,  callback, void* user_data);
// IGNORE; not introspectable, callback type  not supported

// guint soup_message_add_status_code_handler (SoupMessage* msg, const char* signal, guint status_code, GCallback callback, gpointer user_data);
// guint soup_message_add_status_code_handler (::SoupMessage* msg, const char* signal, guint status_code,  callback, void* user_data);
// IGNORE; not introspectable, callback type  not supported

// void soup_message_content_sniffed (SoupMessage* msg, const char* content_type, GHashTable* params);
// void soup_message_content_sniffed (::SoupMessage* msg, const char* content_type, ::GHashTable* params);
void base::MessageBase::content_sniffed (const std::string & content_type, const std::map<gpointer, gpointer> & params) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, const char* content_type, ::GHashTable* params);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_content_sniffed;
  auto & params_i = params;
  auto params_w = unwrap (params_i, gi::transfer_none, direction_in);
  auto params_to_c = params_w.gobj_(false);
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessage*) (gobj_()), (const char*) (content_type_to_c), (::GHashTable*) (params_to_c));
}

// void soup_message_disable_feature (SoupMessage* msg, GType feature_type);
// void soup_message_disable_feature (::SoupMessage* msg, GType feature_type);
void base::MessageBase::disable_feature (GType feature_type) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, GType feature_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_disable_feature;
  auto feature_type_to_c = feature_type;
  call_wrap_v ((::SoupMessage*) (gobj_()), (GType) (feature_type_to_c));
}

// void soup_message_finished (SoupMessage* msg);
// void soup_message_finished (::SoupMessage* msg);
void base::MessageBase::finished () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_finished;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// SoupAddress* soup_message_get_address (SoupMessage* msg);
// ::SoupAddress* soup_message_get_address (::SoupMessage* msg);
Soup::Address base::MessageBase::get_address () noexcept
{
  typedef ::SoupAddress* (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_get_address;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupURI* soup_message_get_first_party (SoupMessage* msg);
// ::SoupURI* soup_message_get_first_party (::SoupMessage* msg);
Soup::URI base::MessageBase::get_first_party () noexcept
{
  typedef ::SoupURI* (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_get_first_party;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupMessageFlags soup_message_get_flags (SoupMessage* msg);
// ::SoupMessageFlags soup_message_get_flags (::SoupMessage* msg);
Soup::MessageFlags base::MessageBase::get_flags () noexcept
{
  typedef ::SoupMessageFlags (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_get_flags;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// SoupHTTPVersion soup_message_get_http_version (SoupMessage* msg);
// ::SoupHTTPVersion soup_message_get_http_version (::SoupMessage* msg);
Soup::HTTPVersion base::MessageBase::get_http_version () noexcept
{
  typedef ::SoupHTTPVersion (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_get_http_version;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean soup_message_get_https_status (SoupMessage* msg, GTlsCertificate** certificate, GTlsCertificateFlags* errors);
// gboolean soup_message_get_https_status (::SoupMessage* msg, ::GTlsCertificate** certificate, ::GTlsCertificateFlags* errors);
bool base::MessageBase::get_https_status (Gio::TlsCertificate & certificate, Gio::TlsCertificateFlags & errors) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, ::GTlsCertificate** certificate, ::GTlsCertificateFlags* errors);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_get_https_status;
  ::GTlsCertificateFlags errors_o {};
  ::GTlsCertificate* certificate_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()), (::GTlsCertificate**) (&certificate_o), (::GTlsCertificateFlags*) (&errors_o));
  errors = gi::wrap (errors_o);
  certificate = gi::wrap (certificate_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gio::TlsCertificate, Gio::TlsCertificateFlags> base::MessageBase::get_https_status () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, ::GTlsCertificate** certificate, ::GTlsCertificateFlags* errors);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_get_https_status;
  ::GTlsCertificateFlags errors_o {};
  ::GTlsCertificate* certificate_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()), (::GTlsCertificate**) (&certificate_o), (::GTlsCertificateFlags*) (&errors_o));
  return std::make_tuple (_temp_ret, gi::wrap (certificate_o, gi::transfer_none, gi::direction_out), gi::wrap (errors_o));
}

// gboolean soup_message_get_is_top_level_navigation (SoupMessage* msg);
// gboolean soup_message_get_is_top_level_navigation (::SoupMessage* msg);
bool base::MessageBase::get_is_top_level_navigation () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_get_is_top_level_navigation;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()));
  return _temp_ret;
}

// SoupMessagePriority soup_message_get_priority (SoupMessage* msg);
// ::SoupMessagePriority soup_message_get_priority (::SoupMessage* msg);
Soup::MessagePriority base::MessageBase::get_priority () noexcept
{
  typedef ::SoupMessagePriority (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_get_priority;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// SoupURI* soup_message_get_site_for_cookies (SoupMessage* msg);
// ::SoupURI* soup_message_get_site_for_cookies (::SoupMessage* msg);
Soup::URI base::MessageBase::get_site_for_cookies () noexcept
{
  typedef ::SoupURI* (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_get_site_for_cookies;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupRequest* soup_message_get_soup_request (SoupMessage* msg);
// ::SoupRequest* soup_message_get_soup_request (::SoupMessage* msg);
Soup::Request base::MessageBase::get_soup_request () noexcept
{
  typedef ::SoupRequest* (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_get_soup_request;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupURI* soup_message_get_uri (SoupMessage* msg);
// ::SoupURI* soup_message_get_uri (::SoupMessage* msg);
Soup::URI base::MessageBase::get_uri () noexcept
{
  typedef ::SoupURI* (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_get_uri;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void soup_message_got_body (SoupMessage* msg);
// void soup_message_got_body (::SoupMessage* msg);
void base::MessageBase::got_body () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_got_body;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void soup_message_got_chunk (SoupMessage* msg, SoupBuffer* chunk);
// void soup_message_got_chunk (::SoupMessage* msg, ::SoupBuffer* chunk);
void base::MessageBase::got_chunk (Soup::Buffer chunk) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, ::SoupBuffer* chunk);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_got_chunk;
  auto chunk_to_c = gi::unwrap (chunk, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessage*) (gobj_()), (::SoupBuffer*) (chunk_to_c));
}

// void soup_message_got_headers (SoupMessage* msg);
// void soup_message_got_headers (::SoupMessage* msg);
void base::MessageBase::got_headers () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_got_headers;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void soup_message_got_informational (SoupMessage* msg);
// void soup_message_got_informational (::SoupMessage* msg);
void base::MessageBase::got_informational () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_got_informational;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// gboolean soup_message_is_feature_disabled (SoupMessage* msg, GType feature_type);
// gboolean soup_message_is_feature_disabled (::SoupMessage* msg, GType feature_type);
bool base::MessageBase::is_feature_disabled (GType feature_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, GType feature_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_is_feature_disabled;
  auto feature_type_to_c = feature_type;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()), (GType) (feature_type_to_c));
  return _temp_ret;
}

// gboolean soup_message_is_keepalive (SoupMessage* msg);
// gboolean soup_message_is_keepalive (::SoupMessage* msg);
bool base::MessageBase::is_keepalive () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_is_keepalive;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (gobj_()));
  return _temp_ret;
}

// void soup_message_restarted (SoupMessage* msg);
// void soup_message_restarted (::SoupMessage* msg);
void base::MessageBase::restarted () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_restarted;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void soup_message_set_chunk_allocator (SoupMessage* msg, SoupChunkAllocator allocator, gpointer user_data, GDestroyNotify destroy_notify);
// void soup_message_set_chunk_allocator (::SoupMessage* msg,  allocator, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
// IGNORE; deprecated

// void soup_message_set_first_party (SoupMessage* msg, SoupURI* first_party);
// void soup_message_set_first_party (::SoupMessage* msg, ::SoupURI* first_party);
void base::MessageBase::set_first_party (Soup::URI first_party) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, ::SoupURI* first_party);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_first_party;
  auto first_party_to_c = gi::unwrap (first_party, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessage*) (gobj_()), (::SoupURI*) (first_party_to_c));
}

// void soup_message_set_flags (SoupMessage* msg, SoupMessageFlags flags);
// void soup_message_set_flags (::SoupMessage* msg, ::SoupMessageFlags flags);
void base::MessageBase::set_flags (Soup::MessageFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, ::SoupMessageFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::SoupMessage*) (gobj_()), (::SoupMessageFlags) (flags_to_c));
}

// void soup_message_set_http_version (SoupMessage* msg, SoupHTTPVersion version);
// void soup_message_set_http_version (::SoupMessage* msg, ::SoupHTTPVersion version);
void base::MessageBase::set_http_version (Soup::HTTPVersion version) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, ::SoupHTTPVersion version);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_http_version;
  auto version_to_c = gi::unwrap (version);
  call_wrap_v ((::SoupMessage*) (gobj_()), (::SoupHTTPVersion) (version_to_c));
}

// void soup_message_set_is_top_level_navigation (SoupMessage* msg, gboolean is_top_level_navigation);
// void soup_message_set_is_top_level_navigation (::SoupMessage* msg, gboolean is_top_level_navigation);
void base::MessageBase::set_is_top_level_navigation (gboolean is_top_level_navigation) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, gboolean is_top_level_navigation);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_is_top_level_navigation;
  auto is_top_level_navigation_to_c = is_top_level_navigation;
  call_wrap_v ((::SoupMessage*) (gobj_()), (gboolean) (is_top_level_navigation_to_c));
}

// void soup_message_set_priority (SoupMessage* msg, SoupMessagePriority priority);
// void soup_message_set_priority (::SoupMessage* msg, ::SoupMessagePriority priority);
void base::MessageBase::set_priority (Soup::MessagePriority priority) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, ::SoupMessagePriority priority);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_priority;
  auto priority_to_c = gi::unwrap (priority);
  call_wrap_v ((::SoupMessage*) (gobj_()), (::SoupMessagePriority) (priority_to_c));
}

// void soup_message_set_redirect (SoupMessage* msg, guint status_code, const char* redirect_uri);
// void soup_message_set_redirect (::SoupMessage* msg, guint status_code, const char* redirect_uri);
void base::MessageBase::set_redirect (guint status_code, const std::string & redirect_uri) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, guint status_code, const char* redirect_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_redirect;
  auto redirect_uri_to_c = gi::unwrap (redirect_uri, gi::transfer_none, gi::direction_in);
  auto status_code_to_c = status_code;
  call_wrap_v ((::SoupMessage*) (gobj_()), (guint) (status_code_to_c), (const char*) (redirect_uri_to_c));
}

// void soup_message_set_request (SoupMessage* msg, const char* content_type, SoupMemoryUse req_use, const char* req_body, gsize req_length);
// void soup_message_set_request (::SoupMessage* msg, const char* content_type, ::SoupMemoryUse req_use, const guint8* req_body, gsize req_length);
void base::MessageBase::set_request (const std::string & content_type, Soup::MemoryUse req_use, guint8 * req_body, gsize req_length) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, const char* content_type, ::SoupMemoryUse req_use, const guint8* req_body, gsize req_length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_request;
  auto req_body_i = detail::make_list_unwrap_range (req_body, req_length, false);
  auto req_body_w = unwrap (req_body_i, gi::transfer_none, direction_in);
  auto req_body_to_c = req_body_w.gobj_(false);
  auto req_use_to_c = gi::unwrap (req_use);
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessage*) (gobj_()), (const char*) (content_type_to_c), (::SoupMemoryUse) (req_use_to_c), (const guint8*) (req_body_to_c), (gsize) (req_body_w.size()));
}
void base::MessageBase::set_request (Soup::MemoryUse req_use, guint8 * req_body, gsize req_length) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, const char* content_type, ::SoupMemoryUse req_use, const guint8* req_body, gsize req_length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_request;
  auto req_body_i = detail::make_list_unwrap_range (req_body, req_length, false);
  auto req_body_w = unwrap (req_body_i, gi::transfer_none, direction_in);
  auto req_body_to_c = req_body_w.gobj_(false);
  auto req_use_to_c = gi::unwrap (req_use);
  auto content_type_to_c = nullptr;
  call_wrap_v ((::SoupMessage*) (gobj_()), (const char*) (content_type_to_c), (::SoupMemoryUse) (req_use_to_c), (const guint8*) (req_body_to_c), (gsize) (req_body_w.size()));
}

// void soup_message_set_response (SoupMessage* msg, const char* content_type, SoupMemoryUse resp_use, const char* resp_body, gsize resp_length);
// void soup_message_set_response (::SoupMessage* msg, const char* content_type, ::SoupMemoryUse resp_use, const guint8* resp_body, gsize resp_length);
void base::MessageBase::set_response (const std::string & content_type, Soup::MemoryUse resp_use, guint8 * resp_body, gsize resp_length) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, const char* content_type, ::SoupMemoryUse resp_use, const guint8* resp_body, gsize resp_length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_response;
  auto resp_body_i = detail::make_list_unwrap_range (resp_body, resp_length, false);
  auto resp_body_w = unwrap (resp_body_i, gi::transfer_none, direction_in);
  auto resp_body_to_c = resp_body_w.gobj_(false);
  auto resp_use_to_c = gi::unwrap (resp_use);
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessage*) (gobj_()), (const char*) (content_type_to_c), (::SoupMemoryUse) (resp_use_to_c), (const guint8*) (resp_body_to_c), (gsize) (resp_body_w.size()));
}
void base::MessageBase::set_response (Soup::MemoryUse resp_use, guint8 * resp_body, gsize resp_length) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, const char* content_type, ::SoupMemoryUse resp_use, const guint8* resp_body, gsize resp_length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_response;
  auto resp_body_i = detail::make_list_unwrap_range (resp_body, resp_length, false);
  auto resp_body_w = unwrap (resp_body_i, gi::transfer_none, direction_in);
  auto resp_body_to_c = resp_body_w.gobj_(false);
  auto resp_use_to_c = gi::unwrap (resp_use);
  auto content_type_to_c = nullptr;
  call_wrap_v ((::SoupMessage*) (gobj_()), (const char*) (content_type_to_c), (::SoupMemoryUse) (resp_use_to_c), (const guint8*) (resp_body_to_c), (gsize) (resp_body_w.size()));
}

// void soup_message_set_site_for_cookies (SoupMessage* msg, SoupURI* site_for_cookies);
// void soup_message_set_site_for_cookies (::SoupMessage* msg, ::SoupURI* site_for_cookies);
void base::MessageBase::set_site_for_cookies (Soup::URI site_for_cookies) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, ::SoupURI* site_for_cookies);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_site_for_cookies;
  auto site_for_cookies_to_c = gi::unwrap (site_for_cookies, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessage*) (gobj_()), (::SoupURI*) (site_for_cookies_to_c));
}
void base::MessageBase::set_site_for_cookies () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, ::SoupURI* site_for_cookies);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_site_for_cookies;
  auto site_for_cookies_to_c = nullptr;
  call_wrap_v ((::SoupMessage*) (gobj_()), (::SoupURI*) (site_for_cookies_to_c));
}

// void soup_message_set_status (SoupMessage* msg, guint status_code);
// void soup_message_set_status (::SoupMessage* msg, guint status_code);
void base::MessageBase::set_status (guint status_code) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, guint status_code);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_status;
  auto status_code_to_c = status_code;
  call_wrap_v ((::SoupMessage*) (gobj_()), (guint) (status_code_to_c));
}

// void soup_message_set_status_full (SoupMessage* msg, guint status_code, const char* reason_phrase);
// void soup_message_set_status_full (::SoupMessage* msg, guint status_code, const char* reason_phrase);
void base::MessageBase::set_status_full (guint status_code, const std::string & reason_phrase) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, guint status_code, const char* reason_phrase);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_status_full;
  auto reason_phrase_to_c = gi::unwrap (reason_phrase, gi::transfer_none, gi::direction_in);
  auto status_code_to_c = status_code;
  call_wrap_v ((::SoupMessage*) (gobj_()), (guint) (status_code_to_c), (const char*) (reason_phrase_to_c));
}

// void soup_message_set_uri (SoupMessage* msg, SoupURI* uri);
// void soup_message_set_uri (::SoupMessage* msg, ::SoupURI* uri);
void base::MessageBase::set_uri (Soup::URI uri) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, ::SoupURI* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_set_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessage*) (gobj_()), (::SoupURI*) (uri_to_c));
}

// void soup_message_starting (SoupMessage* msg);
// void soup_message_starting (::SoupMessage* msg);
void base::MessageBase::starting () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_starting;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void soup_message_wrote_body (SoupMessage* msg);
// void soup_message_wrote_body (::SoupMessage* msg);
void base::MessageBase::wrote_body () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_wrote_body;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void soup_message_wrote_body_data (SoupMessage* msg, SoupBuffer* chunk);
// void soup_message_wrote_body_data (::SoupMessage* msg, ::SoupBuffer* chunk);
void base::MessageBase::wrote_body_data (Soup::Buffer chunk) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, ::SoupBuffer* chunk);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_wrote_body_data;
  auto chunk_to_c = gi::unwrap (chunk, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessage*) (gobj_()), (::SoupBuffer*) (chunk_to_c));
}

// void soup_message_wrote_chunk (SoupMessage* msg);
// void soup_message_wrote_chunk (::SoupMessage* msg);
void base::MessageBase::wrote_chunk () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_wrote_chunk;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void soup_message_wrote_headers (SoupMessage* msg);
// void soup_message_wrote_headers (::SoupMessage* msg);
void base::MessageBase::wrote_headers () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_wrote_headers;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void soup_message_wrote_informational (SoupMessage* msg);
// void soup_message_wrote_informational (::SoupMessage* msg);
void base::MessageBase::wrote_informational () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_wrote_informational;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

static const char* _field_method_get (const ::SoupMessage* obj) { return (const char*) obj->method; }
// const char* Message::method (const ::SoupMessage* obj);
// const char* Message::method (const ::SoupMessage* obj);
std::string base::MessageBase::method_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::SoupMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_method_get;
  auto _temp_ret = call_wrap_v ((const ::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint _field_status_code_get (const ::SoupMessage* obj) { return (guint) obj->status_code; }
// guint Message::status_code (const ::SoupMessage* obj);
// guint Message::status_code (const ::SoupMessage* obj);
guint base::MessageBase::status_code_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::SoupMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_status_code_get;
  auto _temp_ret = call_wrap_v ((const ::SoupMessage*) (gobj_()));
  return _temp_ret;
}

static void _field_status_code_set (::SoupMessage* obj, guint _value) { obj->status_code = (decltype(obj->status_code)) _value; }
//  Message::status_code (::SoupMessage* obj, guint _value);
// void Message::status_code (::SoupMessage* obj, guint _value);
void base::MessageBase::status_code_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_status_code_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupMessage*) (gobj_()), (guint) (_value_to_c));
}

static char* _field_reason_phrase_get (const ::SoupMessage* obj) { return (char*) obj->reason_phrase; }
// char* Message::reason_phrase (const ::SoupMessage* obj);
// char* Message::reason_phrase (const ::SoupMessage* obj);
std::string base::MessageBase::reason_phrase_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_reason_phrase_get;
  auto _temp_ret = call_wrap_v ((const ::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::SoupMessageBody* _field_request_body_get (const ::SoupMessage* obj) { return (::SoupMessageBody*) obj->request_body; }
// ::SoupMessageBody* Message::request_body (const ::SoupMessage* obj);
// ::SoupMessageBody* Message::request_body (const ::SoupMessage* obj);
Soup::MessageBody base::MessageBase::request_body_ () const noexcept
{
  typedef ::SoupMessageBody* (*call_wrap_t) (const ::SoupMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_request_body_get;
  auto _temp_ret = call_wrap_v ((const ::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::SoupMessageHeaders* _field_request_headers_get (const ::SoupMessage* obj) { return (::SoupMessageHeaders*) obj->request_headers; }
// ::SoupMessageHeaders* Message::request_headers (const ::SoupMessage* obj);
// ::SoupMessageHeaders* Message::request_headers (const ::SoupMessage* obj);
Soup::MessageHeaders base::MessageBase::request_headers_ () const noexcept
{
  typedef ::SoupMessageHeaders* (*call_wrap_t) (const ::SoupMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_request_headers_get;
  auto _temp_ret = call_wrap_v ((const ::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::SoupMessageBody* _field_response_body_get (const ::SoupMessage* obj) { return (::SoupMessageBody*) obj->response_body; }
// ::SoupMessageBody* Message::response_body (const ::SoupMessage* obj);
// ::SoupMessageBody* Message::response_body (const ::SoupMessage* obj);
Soup::MessageBody base::MessageBase::response_body_ () const noexcept
{
  typedef ::SoupMessageBody* (*call_wrap_t) (const ::SoupMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_response_body_get;
  auto _temp_ret = call_wrap_v ((const ::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::SoupMessageHeaders* _field_response_headers_get (const ::SoupMessage* obj) { return (::SoupMessageHeaders*) obj->response_headers; }
// ::SoupMessageHeaders* Message::response_headers (const ::SoupMessage* obj);
// ::SoupMessageHeaders* Message::response_headers (const ::SoupMessage* obj);
Soup::MessageHeaders base::MessageBase::response_headers_ () const noexcept
{
  typedef ::SoupMessageHeaders* (*call_wrap_t) (const ::SoupMessage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_response_headers_get;
  auto _temp_ret = call_wrap_v ((const ::SoupMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SKIP; glib:signal container parameter not supported















} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/message_extra_def_impl.hpp>)
#include <soup/message_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/message_extra_impl.hpp>)
#include <soup/message_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void MessageClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupMessageClass *methods = (::SoupMessageClass *) class_struct;
  (void) methods;

  methods->finished = (decltype (methods->finished)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::finished_>;
  methods->got_body = (decltype (methods->got_body)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::got_body_>;
  methods->got_chunk = (decltype (methods->got_chunk)) detail::method_wrapper<self, void (*) (Soup::Buffer chunk), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::got_chunk_>;
  methods->got_headers = (decltype (methods->got_headers)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::got_headers_>;
  methods->got_informational = (decltype (methods->got_informational)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::got_informational_>;
  methods->restarted = (decltype (methods->restarted)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::restarted_>;
  methods->starting = (decltype (methods->starting)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::starting_>;
  methods->wrote_body = (decltype (methods->wrote_body)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::wrote_body_>;
  methods->wrote_chunk = (decltype (methods->wrote_chunk)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::wrote_chunk_>;
  methods->wrote_headers = (decltype (methods->wrote_headers)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::wrote_headers_>;
  methods->wrote_informational = (decltype (methods->wrote_informational)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::wrote_informational_>;
}

// void Message::finished (SoupMessage* msg);
// void Message::finished (::SoupMessage* msg);
void MessageClass::finished_ () noexcept
{
  if (!get_struct_()->finished) return ;
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->finished;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void Message::got_body (SoupMessage* msg);
// void Message::got_body (::SoupMessage* msg);
void MessageClass::got_body_ () noexcept
{
  if (!get_struct_()->got_body) return ;
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->got_body;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void Message::got_chunk (SoupMessage* msg, SoupBuffer* chunk);
// void Message::got_chunk (::SoupMessage* msg, ::SoupBuffer* chunk);
void MessageClass::got_chunk_ (Soup::Buffer chunk) noexcept
{
  if (!get_struct_()->got_chunk) return ;
  typedef void (*call_wrap_t) (::SoupMessage* msg, ::SoupBuffer* chunk);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->got_chunk;
  auto chunk_to_c = gi::unwrap (chunk, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessage*) (gobj_()), (::SoupBuffer*) (chunk_to_c));
}

// void Message::got_headers (SoupMessage* msg);
// void Message::got_headers (::SoupMessage* msg);
void MessageClass::got_headers_ () noexcept
{
  if (!get_struct_()->got_headers) return ;
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->got_headers;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void Message::got_informational (SoupMessage* msg);
// void Message::got_informational (::SoupMessage* msg);
void MessageClass::got_informational_ () noexcept
{
  if (!get_struct_()->got_informational) return ;
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->got_informational;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void Message::restarted (SoupMessage* msg);
// void Message::restarted (::SoupMessage* msg);
void MessageClass::restarted_ () noexcept
{
  if (!get_struct_()->restarted) return ;
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->restarted;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void Message::starting (SoupMessage* msg);
// void Message::starting (::SoupMessage* msg);
void MessageClass::starting_ () noexcept
{
  if (!get_struct_()->starting) return ;
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->starting;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void Message::wrote_body (SoupMessage* msg);
// void Message::wrote_body (::SoupMessage* msg);
void MessageClass::wrote_body_ () noexcept
{
  if (!get_struct_()->wrote_body) return ;
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->wrote_body;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void Message::wrote_chunk (SoupMessage* msg);
// void Message::wrote_chunk (::SoupMessage* msg);
void MessageClass::wrote_chunk_ () noexcept
{
  if (!get_struct_()->wrote_chunk) return ;
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->wrote_chunk;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void Message::wrote_headers (SoupMessage* msg);
// void Message::wrote_headers (::SoupMessage* msg);
void MessageClass::wrote_headers_ () noexcept
{
  if (!get_struct_()->wrote_headers) return ;
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->wrote_headers;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

// void Message::wrote_informational (SoupMessage* msg);
// void Message::wrote_informational (::SoupMessage* msg);
void MessageClass::wrote_informational_ () noexcept
{
  if (!get_struct_()->wrote_informational) return ;
  typedef void (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->wrote_informational;
  call_wrap_v ((::SoupMessage*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
