// AUTO-GENERATED

#ifndef _GI_SOUP__FUNCTIONS_IMPL_HPP_
#define _GI_SOUP__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace RequestErrorNS_ {

// GQuark soup_request_error_quark ();
// ::GQuark soup_request_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace RequestErrorNS_

namespace RequesterErrorNS_ {

// GQuark soup_requester_error_quark ();
// ::GQuark soup_requester_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_requester_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace RequesterErrorNS_

namespace StatusNS_ {

// const char* soup_status_get_phrase (guint status_code);
// const char* soup_status_get_phrase (guint status_code);
std::string get_phrase (guint status_code) noexcept
{
  typedef const char* (*call_wrap_t) (guint status_code);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_status_get_phrase;
  auto status_code_to_c = status_code;
  auto _temp_ret = call_wrap_v ((guint) (status_code_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint soup_status_proxify (guint status_code);
// guint soup_status_proxify (guint status_code);
guint proxify (guint status_code) noexcept
{
  typedef guint (*call_wrap_t) (guint status_code);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_status_proxify;
  auto status_code_to_c = status_code;
  auto _temp_ret = call_wrap_v ((guint) (status_code_to_c));
  return _temp_ret;
}

} // namespace StatusNS_

namespace TLDErrorNS_ {

// GQuark soup_tld_error_quark ();
// ::GQuark soup_tld_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_tld_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace TLDErrorNS_

namespace WebsocketErrorNS_ {

// GQuark soup_websocket_error_get_quark ();
// ::GQuark soup_websocket_error_get_quark ();
GLib::Quark get_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_error_get_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace WebsocketErrorNS_

namespace XMLRPCErrorNS_ {

// GQuark soup_xmlrpc_error_quark ();
// ::GQuark soup_xmlrpc_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace XMLRPCErrorNS_

namespace XMLRPCFaultNS_ {

// GQuark soup_xmlrpc_fault_quark ();
// ::GQuark soup_xmlrpc_fault_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_fault_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace XMLRPCFaultNS_

// GSource* soup_add_completion (GMainContext* async_context, GSourceFunc function, gpointer data);
// ::GSource* soup_add_completion (::GMainContext* async_context, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable, callback misses scope info

// GSource* soup_add_idle (GMainContext* async_context, GSourceFunc function, gpointer data);
// ::GSource* soup_add_idle (::GMainContext* async_context, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable, callback misses scope info

// GSource* soup_add_io_watch (GMainContext* async_context, GIOChannel* chan, GIOCondition condition, GIOFunc function, gpointer data);
// ::GSource* soup_add_io_watch (::GMainContext* async_context, ::GIOChannel* chan, ::GIOCondition condition,  function, void* data);
// IGNORE; not introspectable, function type  not supported

// GSource* soup_add_timeout (GMainContext* async_context, guint interval, GSourceFunc function, gpointer data);
// ::GSource* soup_add_timeout (::GMainContext* async_context, guint interval, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable, callback misses scope info

// gboolean soup_check_version (guint major, guint minor, guint micro);
// gboolean soup_check_version (guint major, guint minor, guint micro);
bool check_version (guint major, guint minor, guint micro) noexcept
{
  typedef gboolean (*call_wrap_t) (guint major, guint minor, guint micro);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_check_version;
  auto micro_to_c = micro;
  auto minor_to_c = minor;
  auto major_to_c = major;
  auto _temp_ret = call_wrap_v ((guint) (major_to_c), (guint) (minor_to_c), (guint) (micro_to_c));
  return _temp_ret;
}

// GSList* soup_cookies_from_request (SoupMessage* msg);
// ::GSList* soup_cookies_from_request (::SoupMessage* msg);
std::vector<Soup::Cookie> cookies_from_request (Soup::Message msg) noexcept
{
  typedef ::GSList* (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookies_from_request;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c));
  return gi::detail::wrap_list<Soup::Cookie> (_temp_ret, gi::transfer_full);
}

// GSList* soup_cookies_from_response (SoupMessage* msg);
// ::GSList* soup_cookies_from_response (::SoupMessage* msg);
std::vector<Soup::Cookie> cookies_from_response (Soup::Message msg) noexcept
{
  typedef ::GSList* (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookies_from_response;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c));
  return gi::detail::wrap_list<Soup::Cookie> (_temp_ret, gi::transfer_full);
}

// char* soup_cookies_to_cookie_header (GSList* cookies);
// char* soup_cookies_to_cookie_header (::GSList* cookies);
std::string cookies_to_cookie_header (const std::vector<Soup::Cookie> & cookies) noexcept
{
  typedef char* (*call_wrap_t) (::GSList* cookies);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookies_to_cookie_header;
  auto cookies_i = detail::make_list_unwrap_range<::GSList> (cookies);
  auto cookies_w = unwrap (cookies_i, gi::transfer_none, direction_in);
  auto cookies_to_c = cookies_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GSList*) (cookies_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_cookies_to_request (GSList* cookies, SoupMessage* msg);
// void soup_cookies_to_request (::GSList* cookies, ::SoupMessage* msg);
void cookies_to_request (const std::vector<Soup::Cookie> & cookies, Soup::Message msg) noexcept
{
  typedef void (*call_wrap_t) (::GSList* cookies, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookies_to_request;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto cookies_i = detail::make_list_unwrap_range<::GSList> (cookies);
  auto cookies_w = unwrap (cookies_i, gi::transfer_none, direction_in);
  auto cookies_to_c = cookies_w.gobj_(false);
  call_wrap_v ((::GSList*) (cookies_to_c), (::SoupMessage*) (msg_to_c));
}

// void soup_cookies_to_response (GSList* cookies, SoupMessage* msg);
// void soup_cookies_to_response (::GSList* cookies, ::SoupMessage* msg);
void cookies_to_response (const std::vector<Soup::Cookie> & cookies, Soup::Message msg) noexcept
{
  typedef void (*call_wrap_t) (::GSList* cookies, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookies_to_response;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto cookies_i = detail::make_list_unwrap_range<::GSList> (cookies);
  auto cookies_w = unwrap (cookies_i, gi::transfer_none, direction_in);
  auto cookies_to_c = cookies_w.gobj_(false);
  call_wrap_v ((::GSList*) (cookies_to_c), (::SoupMessage*) (msg_to_c));
}

// GHashTable* soup_form_decode (const char* encoded_form);
// ::GHashTable* soup_form_decode (const char* encoded_form);
std::map<std::string, std::string> form_decode (const std::string & encoded_form) noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (const char* encoded_form);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_form_decode;
  auto encoded_form_to_c = gi::unwrap (encoded_form, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (encoded_form_to_c));
  return gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_container);
}

// GHashTable* soup_form_decode_multipart (SoupMessage* msg, const char* file_control_name, char** filename, char** content_type, SoupBuffer** file);
// ::GHashTable* soup_form_decode_multipart (::SoupMessage* msg, const char* file_control_name, char** filename, char** content_type, ::SoupBuffer** file);
std::map<std::string, std::string> form_decode_multipart (Soup::Message msg, const std::string & file_control_name, std::string * filename, std::string * content_type, Soup::Buffer * file) noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (::SoupMessage* msg, const char* file_control_name, char** filename, char** content_type, ::SoupBuffer** file);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_form_decode_multipart;
  ::SoupBuffer* file_o {};
  char* content_type_o {};
  char* filename_o {};
  auto file_control_name_to_c = gi::unwrap (file_control_name, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (file_control_name_to_c), (char**) (filename ? &filename_o : nullptr), (char**) (content_type ? &content_type_o : nullptr), (::SoupBuffer**) (file ? &file_o : nullptr));
  if (file) *file = gi::wrap (file_o, gi::transfer_full, gi::direction_out);
  if (content_type) *content_type = gi::wrap (content_type_o, gi::transfer_full, gi::direction_out);
  if (filename) *filename = gi::wrap (filename_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_container);
}
std::map<std::string, std::string> form_decode_multipart (Soup::Message msg, std::string * filename, std::string * content_type, Soup::Buffer * file) noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (::SoupMessage* msg, const char* file_control_name, char** filename, char** content_type, ::SoupBuffer** file);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_form_decode_multipart;
  ::SoupBuffer* file_o {};
  char* content_type_o {};
  char* filename_o {};
  auto file_control_name_to_c = nullptr;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (file_control_name_to_c), (char**) (filename ? &filename_o : nullptr), (char**) (content_type ? &content_type_o : nullptr), (::SoupBuffer**) (file ? &file_o : nullptr));
  if (file) *file = gi::wrap (file_o, gi::transfer_full, gi::direction_out);
  if (content_type) *content_type = gi::wrap (content_type_o, gi::transfer_full, gi::direction_out);
  if (filename) *filename = gi::wrap (filename_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_container);
}
std::tuple<std::map<std::string, std::string>, std::string, std::string, Soup::Buffer> form_decode_multipart (Soup::Message msg, const std::string & file_control_name) noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (::SoupMessage* msg, const char* file_control_name, char** filename, char** content_type, ::SoupBuffer** file);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_form_decode_multipart;
  ::SoupBuffer* file_o {};
  char* content_type_o {};
  char* filename_o {};
  auto file_control_name_to_c = gi::unwrap (file_control_name, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (file_control_name_to_c), (char**) (&filename_o), (char**) (&content_type_o), (::SoupBuffer**) (&file_o));
  return std::make_tuple (gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_container), gi::wrap (filename_o, gi::transfer_full, gi::direction_out), gi::wrap (content_type_o, gi::transfer_full, gi::direction_out), gi::wrap (file_o, gi::transfer_full, gi::direction_out));
}
std::tuple<std::map<std::string, std::string>, std::string, std::string, Soup::Buffer> form_decode_multipart (Soup::Message msg) noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (::SoupMessage* msg, const char* file_control_name, char** filename, char** content_type, ::SoupBuffer** file);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_form_decode_multipart;
  ::SoupBuffer* file_o {};
  char* content_type_o {};
  char* filename_o {};
  auto file_control_name_to_c = nullptr;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (file_control_name_to_c), (char**) (&filename_o), (char**) (&content_type_o), (::SoupBuffer**) (&file_o));
  return std::make_tuple (gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_container), gi::wrap (filename_o, gi::transfer_full, gi::direction_out), gi::wrap (content_type_o, gi::transfer_full, gi::direction_out), gi::wrap (file_o, gi::transfer_full, gi::direction_out));
}

// char* soup_form_encode (const char* first_field);
// char* soup_form_encode (const char* first_field);
// IGNORE; not introspectable, varargs not supported

// char* soup_form_encode_datalist (GData** form_data_set);
// char* soup_form_encode_datalist ( form_data_set);
// SKIP; form_data_set type  not supported

// char* soup_form_encode_hash (GHashTable* form_data_set);
// char* soup_form_encode_hash (::GHashTable* form_data_set);
std::string form_encode_hash (const std::map<std::string, std::string> & form_data_set) noexcept
{
  typedef char* (*call_wrap_t) (::GHashTable* form_data_set);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_form_encode_hash;
  auto & form_data_set_i = form_data_set;
  auto form_data_set_w = unwrap (form_data_set_i, gi::transfer_none, direction_in);
  auto form_data_set_to_c = form_data_set_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GHashTable*) (form_data_set_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* soup_form_encode_valist (const char* first_field, va_list args);
// char* soup_form_encode_valist (const char* first_field,  args);
// IGNORE; not introspectable, args type  not supported

// SoupMessage* soup_form_request_new (const char* method, const char* uri, const char* first_field);
// ::SoupMessage* soup_form_request_new (const char* method, const char* uri, const char* first_field);
// IGNORE; not introspectable, varargs not supported

// SoupMessage* soup_form_request_new_from_datalist (const char* method, const char* uri, GData** form_data_set);
// ::SoupMessage* soup_form_request_new_from_datalist (const char* method, const char* uri,  form_data_set);
// SKIP; form_data_set type  not supported

// SoupMessage* soup_form_request_new_from_hash (const char* method, const char* uri, GHashTable* form_data_set);
// ::SoupMessage* soup_form_request_new_from_hash (const char* method, const char* uri, ::GHashTable* form_data_set);
Soup::Message form_request_new_from_hash (const std::string & method, const std::string & uri, const std::map<std::string, std::string> & form_data_set) noexcept
{
  typedef ::SoupMessage* (*call_wrap_t) (const char* method, const char* uri, ::GHashTable* form_data_set);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_form_request_new_from_hash;
  auto & form_data_set_i = form_data_set;
  auto form_data_set_w = unwrap (form_data_set_i, gi::transfer_none, direction_in);
  auto form_data_set_to_c = form_data_set_w.gobj_(false);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto method_to_c = gi::unwrap (method, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (method_to_c), (const char*) (uri_to_c), (::GHashTable*) (form_data_set_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupMessage* soup_form_request_new_from_multipart (const char* uri, SoupMultipart* multipart);
// ::SoupMessage* soup_form_request_new_from_multipart (const char* uri, ::SoupMultipart* multipart);
Soup::Message form_request_new_from_multipart (const std::string & uri, Soup::Multipart multipart) noexcept
{
  typedef ::SoupMessage* (*call_wrap_t) (const char* uri, ::SoupMultipart* multipart);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_form_request_new_from_multipart;
  auto multipart_to_c = gi::unwrap (multipart, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (::SoupMultipart*) (multipart_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint soup_get_major_version ();
// guint soup_get_major_version ();
guint get_major_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_get_major_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint soup_get_micro_version ();
// guint soup_get_micro_version ();
guint get_micro_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_get_micro_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint soup_get_minor_version ();
// guint soup_get_minor_version ();
guint get_minor_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_get_minor_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean soup_header_contains (const char* header, const char* token);
// gboolean soup_header_contains (const char* header, const char* token);
bool header_contains (const std::string & header, const std::string & token) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* header, const char* token);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_contains;
  auto token_to_c = gi::unwrap (token, gi::transfer_none, gi::direction_in);
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (header_to_c), (const char*) (token_to_c));
  return _temp_ret;
}

// void soup_header_free_list (GSList* list);
// void soup_header_free_list (::GSList* list);
void header_free_list (const std::vector<gpointer> & list) noexcept
{
  typedef void (*call_wrap_t) (::GSList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_free_list;
  auto list_i = detail::make_list_unwrap_range<::GSList> (list);
  auto list_w = unwrap (list_i, gi::transfer_none, direction_in);
  auto list_to_c = list_w.gobj_(false);
  call_wrap_v ((::GSList*) (list_to_c));
}

// void soup_header_free_param_list (GHashTable* param_list);
// void soup_header_free_param_list (::GHashTable* param_list);
void header_free_param_list (const std::map<std::string, std::string> & param_list) noexcept
{
  typedef void (*call_wrap_t) (::GHashTable* param_list);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_free_param_list;
  auto & param_list_i = param_list;
  auto param_list_w = unwrap (param_list_i, gi::transfer_none, direction_in);
  auto param_list_to_c = param_list_w.gobj_(false);
  call_wrap_v ((::GHashTable*) (param_list_to_c));
}

// void soup_header_g_string_append_param (GString* string, const char* name, const char* value);
// void soup_header_g_string_append_param (::GString* string, const char* name, const char* value);
void header_g_string_append_param (GLib::String string, const std::string & name, const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GString* string, const char* name, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_g_string_append_param;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GString*) (string_to_c), (const char*) (name_to_c), (const char*) (value_to_c));
}

// void soup_header_g_string_append_param_quoted (GString* string, const char* name, const char* value);
// void soup_header_g_string_append_param_quoted (::GString* string, const char* name, const char* value);
void header_g_string_append_param_quoted (GLib::String string, const std::string & name, const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GString* string, const char* name, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_g_string_append_param_quoted;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GString*) (string_to_c), (const char*) (name_to_c), (const char*) (value_to_c));
}

// GSList* soup_header_parse_list (const char* header);
// ::GSList* soup_header_parse_list (const char* header);
std::vector<std::string> header_parse_list (const std::string & header) noexcept
{
  typedef ::GSList* (*call_wrap_t) (const char* header);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_parse_list;
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (header_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GHashTable* soup_header_parse_param_list (const char* header);
// ::GHashTable* soup_header_parse_param_list (const char* header);
std::map<std::string, std::string> header_parse_param_list (const std::string & header) noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (const char* header);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_parse_param_list;
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (header_to_c));
  return gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_full);
}

// GHashTable* soup_header_parse_param_list_strict (const char* header);
// ::GHashTable* soup_header_parse_param_list_strict (const char* header);
std::map<std::string, std::string> header_parse_param_list_strict (const std::string & header) noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (const char* header);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_parse_param_list_strict;
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (header_to_c));
  return gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_full);
}

// GSList* soup_header_parse_quality_list (const char* header, GSList** unacceptable);
// ::GSList* soup_header_parse_quality_list (const char* header, ::GSList** unacceptable);
std::vector<std::string> header_parse_quality_list (const std::string & header, std::vector<std::string> * unacceptable) noexcept
{
  typedef ::GSList* (*call_wrap_t) (const char* header, ::GSList** unacceptable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_parse_quality_list;
  ::GSList* unacceptable_o {};
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (header_to_c), (::GSList**) (unacceptable ? &unacceptable_o : nullptr));
  if (unacceptable) *unacceptable = gi::detail::wrap_list<std::string> (unacceptable_o, gi::transfer_full);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<std::string>, std::vector<std::string>> header_parse_quality_list (const std::string & header) noexcept
{
  typedef ::GSList* (*call_wrap_t) (const char* header, ::GSList** unacceptable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_parse_quality_list;
  ::GSList* unacceptable_o {};
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (header_to_c), (::GSList**) (&unacceptable_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), gi::detail::wrap_list<std::string> (unacceptable_o, gi::transfer_full));
}

// GHashTable* soup_header_parse_semi_param_list (const char* header);
// ::GHashTable* soup_header_parse_semi_param_list (const char* header);
std::map<std::string, std::string> header_parse_semi_param_list (const std::string & header) noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (const char* header);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_parse_semi_param_list;
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (header_to_c));
  return gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_full);
}

// GHashTable* soup_header_parse_semi_param_list_strict (const char* header);
// ::GHashTable* soup_header_parse_semi_param_list_strict (const char* header);
std::map<std::string, std::string> header_parse_semi_param_list_strict (const std::string & header) noexcept
{
  typedef ::GHashTable* (*call_wrap_t) (const char* header);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_header_parse_semi_param_list_strict;
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (header_to_c));
  return gi::detail::wrap_map<std::string, std::string> (_temp_ret, gi::transfer_full);
}

// gboolean soup_headers_parse (const char* str, int len, SoupMessageHeaders* dest);
// gboolean soup_headers_parse (const char* str, gint len, ::SoupMessageHeaders* dest);
bool headers_parse (const std::string & str, gint len, Soup::MessageHeaders dest) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, gint len, ::SoupMessageHeaders* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_headers_parse;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gint) (len_to_c), (::SoupMessageHeaders*) (dest_to_c));
  return _temp_ret;
}

// guint soup_headers_parse_request (const char* str, int len, SoupMessageHeaders* req_headers, char** req_method, char** req_path, SoupHTTPVersion* ver);
// guint soup_headers_parse_request (const char* str, gint len, ::SoupMessageHeaders* req_headers, char** req_method, char** req_path, ::SoupHTTPVersion* ver);
guint headers_parse_request (const std::string & str, gint len, Soup::MessageHeaders req_headers, std::string * req_method, std::string * req_path, Soup::HTTPVersion * ver) noexcept
{
  typedef guint (*call_wrap_t) (const char* str, gint len, ::SoupMessageHeaders* req_headers, char** req_method, char** req_path, ::SoupHTTPVersion* ver);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_headers_parse_request;
  ::SoupHTTPVersion ver_o {};
  char* req_path_o {};
  char* req_method_o {};
  auto req_headers_to_c = gi::unwrap (req_headers, gi::transfer_none, gi::direction_in);
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gint) (len_to_c), (::SoupMessageHeaders*) (req_headers_to_c), (char**) (req_method ? &req_method_o : nullptr), (char**) (req_path ? &req_path_o : nullptr), (::SoupHTTPVersion*) (ver ? &ver_o : nullptr));
  if (ver) *ver = gi::wrap (ver_o);
  if (req_path) *req_path = gi::wrap (req_path_o, gi::transfer_full, gi::direction_out);
  if (req_method) *req_method = gi::wrap (req_method_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<guint, std::string, std::string, Soup::HTTPVersion> headers_parse_request (const std::string & str, gint len, Soup::MessageHeaders req_headers) noexcept
{
  typedef guint (*call_wrap_t) (const char* str, gint len, ::SoupMessageHeaders* req_headers, char** req_method, char** req_path, ::SoupHTTPVersion* ver);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_headers_parse_request;
  ::SoupHTTPVersion ver_o {};
  char* req_path_o {};
  char* req_method_o {};
  auto req_headers_to_c = gi::unwrap (req_headers, gi::transfer_none, gi::direction_in);
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gint) (len_to_c), (::SoupMessageHeaders*) (req_headers_to_c), (char**) (&req_method_o), (char**) (&req_path_o), (::SoupHTTPVersion*) (&ver_o));
  return std::make_tuple (_temp_ret, gi::wrap (req_method_o, gi::transfer_full, gi::direction_out), gi::wrap (req_path_o, gi::transfer_full, gi::direction_out), gi::wrap (ver_o));
}

// gboolean soup_headers_parse_response (const char* str, int len, SoupMessageHeaders* headers, SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
// gboolean soup_headers_parse_response (const char* str, gint len, ::SoupMessageHeaders* headers, ::SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
bool headers_parse_response (const std::string & str, gint len, Soup::MessageHeaders headers, Soup::HTTPVersion * ver, guint * status_code, std::string * reason_phrase) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, gint len, ::SoupMessageHeaders* headers, ::SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_headers_parse_response;
  char* reason_phrase_o {};
  guint status_code_o {};
  ::SoupHTTPVersion ver_o {};
  auto headers_to_c = gi::unwrap (headers, gi::transfer_none, gi::direction_in);
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gint) (len_to_c), (::SoupMessageHeaders*) (headers_to_c), (::SoupHTTPVersion*) (ver ? &ver_o : nullptr), (guint*) (status_code ? &status_code_o : nullptr), (char**) (reason_phrase ? &reason_phrase_o : nullptr));
  if (reason_phrase) *reason_phrase = gi::wrap (reason_phrase_o, gi::transfer_full, gi::direction_out);
  if (status_code) *status_code = status_code_o;
  if (ver) *ver = gi::wrap (ver_o);
  return _temp_ret;
}
std::tuple<bool, Soup::HTTPVersion, guint, std::string> headers_parse_response (const std::string & str, gint len, Soup::MessageHeaders headers) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, gint len, ::SoupMessageHeaders* headers, ::SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_headers_parse_response;
  char* reason_phrase_o {};
  guint status_code_o {};
  ::SoupHTTPVersion ver_o {};
  auto headers_to_c = gi::unwrap (headers, gi::transfer_none, gi::direction_in);
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gint) (len_to_c), (::SoupMessageHeaders*) (headers_to_c), (::SoupHTTPVersion*) (&ver_o), (guint*) (&status_code_o), (char**) (&reason_phrase_o));
  return std::make_tuple (_temp_ret, gi::wrap (ver_o), status_code_o, gi::wrap (reason_phrase_o, gi::transfer_full, gi::direction_out));
}

// gboolean soup_headers_parse_status_line (const char* status_line, SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
// gboolean soup_headers_parse_status_line (const char* status_line, ::SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
bool headers_parse_status_line (const std::string & status_line, Soup::HTTPVersion * ver, guint * status_code, std::string * reason_phrase) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* status_line, ::SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_headers_parse_status_line;
  char* reason_phrase_o {};
  guint status_code_o {};
  ::SoupHTTPVersion ver_o {};
  auto status_line_to_c = gi::unwrap (status_line, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (status_line_to_c), (::SoupHTTPVersion*) (ver ? &ver_o : nullptr), (guint*) (status_code ? &status_code_o : nullptr), (char**) (reason_phrase ? &reason_phrase_o : nullptr));
  if (reason_phrase) *reason_phrase = gi::wrap (reason_phrase_o, gi::transfer_full, gi::direction_out);
  if (status_code) *status_code = status_code_o;
  if (ver) *ver = gi::wrap (ver_o);
  return _temp_ret;
}
std::tuple<bool, Soup::HTTPVersion, guint, std::string> headers_parse_status_line (const std::string & status_line) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* status_line, ::SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_headers_parse_status_line;
  char* reason_phrase_o {};
  guint status_code_o {};
  ::SoupHTTPVersion ver_o {};
  auto status_line_to_c = gi::unwrap (status_line, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (status_line_to_c), (::SoupHTTPVersion*) (&ver_o), (guint*) (&status_code_o), (char**) (&reason_phrase_o));
  return std::make_tuple (_temp_ret, gi::wrap (ver_o), status_code_o, gi::wrap (reason_phrase_o, gi::transfer_full, gi::direction_out));
}

// GQuark soup_http_error_quark ();
// ::GQuark soup_http_error_quark ();
GLib::Quark http_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_http_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean soup_str_case_equal (gconstpointer v1, gconstpointer v2);
// gboolean soup_str_case_equal (const void* v1, const void* v2);
bool str_case_equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_str_case_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// guint soup_str_case_hash (gconstpointer key);
// guint soup_str_case_hash (const void* key);
guint str_case_hash (const void* key) noexcept
{
  typedef guint (*call_wrap_t) (const void* key);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_str_case_hash;
  auto key_to_c = key;
  auto _temp_ret = call_wrap_v ((const void*) (key_to_c));
  return _temp_ret;
}

// gboolean soup_tld_domain_is_public_suffix (const char* domain);
// gboolean soup_tld_domain_is_public_suffix (const char* domain);
bool tld_domain_is_public_suffix (const std::string & domain) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_tld_domain_is_public_suffix;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c));
  return _temp_ret;
}

// const char* soup_tld_get_base_domain (const char* hostname, GError ** error);
// const char* soup_tld_get_base_domain (const char* hostname, GError ** error);
std::string tld_get_base_domain (const std::string & hostname)
{
  typedef const char* (*call_wrap_t) (const char* hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_tld_get_base_domain;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::string tld_get_base_domain (const std::string & hostname, GLib::Error * _error) noexcept
{
  typedef const char* (*call_wrap_t) (const char* hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_tld_get_base_domain;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void soup_websocket_client_prepare_handshake (SoupMessage* msg, const char* origin, char** protocols);
// void soup_websocket_client_prepare_handshake (::SoupMessage* msg, const char* origin, char** protocols);
void websocket_client_prepare_handshake (Soup::Message msg, const std::string & origin, const std::vector<std::string> & protocols) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, const char* origin, char** protocols);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_client_prepare_handshake;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (origin_to_c), (char**) (protocols_to_c));
}
void websocket_client_prepare_handshake (Soup::Message msg, const std::vector<std::string> & protocols) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessage* msg, const char* origin, char** protocols);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_client_prepare_handshake;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto origin_to_c = nullptr;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (origin_to_c), (char**) (protocols_to_c));
}

// void soup_websocket_client_prepare_handshake_with_extensions (SoupMessage* msg, const char* origin, char** protocols, GPtrArray* supported_extensions);
// void soup_websocket_client_prepare_handshake_with_extensions (::SoupMessage* msg, const char* origin, char** protocols,  supported_extensions);
// SKIP; supported_extensions type  not supported

// gboolean soup_websocket_client_verify_handshake (SoupMessage* msg, GError ** error);
// gboolean soup_websocket_client_verify_handshake (::SoupMessage* msg, GError ** error);
bool websocket_client_verify_handshake (Soup::Message msg)
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_client_verify_handshake;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool websocket_client_verify_handshake (Soup::Message msg, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_client_verify_handshake;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean soup_websocket_client_verify_handshake_with_extensions (SoupMessage* msg, GPtrArray* supported_extensions, GList** accepted_extensions, GError ** error);
// gboolean soup_websocket_client_verify_handshake_with_extensions (::SoupMessage* msg,  supported_extensions, ::GList** accepted_extensions, GError ** error);
// SKIP; supported_extensions type  not supported

// gboolean soup_websocket_server_check_handshake (SoupMessage* msg, const char* origin, char** protocols, GError ** error);
// gboolean soup_websocket_server_check_handshake (::SoupMessage* msg, const char* origin, char** protocols, GError ** error);
bool websocket_server_check_handshake (Soup::Message msg, const std::string & origin, const std::vector<std::string> & protocols)
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, const char* origin, char** protocols, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_server_check_handshake;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (origin_to_c), (char**) (protocols_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool websocket_server_check_handshake (Soup::Message msg, const std::vector<std::string> & protocols)
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, const char* origin, char** protocols, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_server_check_handshake;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto origin_to_c = nullptr;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (origin_to_c), (char**) (protocols_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool websocket_server_check_handshake (Soup::Message msg, const std::string & origin, const std::vector<std::string> & protocols, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, const char* origin, char** protocols, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_server_check_handshake;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (origin_to_c), (char**) (protocols_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool websocket_server_check_handshake (Soup::Message msg, const std::vector<std::string> & protocols, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, const char* origin, char** protocols, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_server_check_handshake;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto origin_to_c = nullptr;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (origin_to_c), (char**) (protocols_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean soup_websocket_server_check_handshake_with_extensions (SoupMessage* msg, const char* origin, char** protocols, GPtrArray* supported_extensions, GError ** error);
// gboolean soup_websocket_server_check_handshake_with_extensions (::SoupMessage* msg, const char* origin, char** protocols,  supported_extensions, GError ** error);
// SKIP; supported_extensions type  not supported

// gboolean soup_websocket_server_process_handshake (SoupMessage* msg, const char* expected_origin, char** protocols);
// gboolean soup_websocket_server_process_handshake (::SoupMessage* msg, const char* expected_origin, char** protocols);
bool websocket_server_process_handshake (Soup::Message msg, const std::string & expected_origin, const std::vector<std::string> & protocols) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, const char* expected_origin, char** protocols);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_server_process_handshake;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto expected_origin_to_c = gi::unwrap (expected_origin, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (expected_origin_to_c), (char**) (protocols_to_c));
  return _temp_ret;
}
bool websocket_server_process_handshake (Soup::Message msg, const std::vector<std::string> & protocols) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, const char* expected_origin, char** protocols);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_server_process_handshake;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto expected_origin_to_c = nullptr;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (const char*) (expected_origin_to_c), (char**) (protocols_to_c));
  return _temp_ret;
}

// gboolean soup_websocket_server_process_handshake_with_extensions (SoupMessage* msg, const char* expected_origin, char** protocols, GPtrArray* supported_extensions, GList** accepted_extensions);
// gboolean soup_websocket_server_process_handshake_with_extensions (::SoupMessage* msg, const char* expected_origin, char** protocols,  supported_extensions, ::GList** accepted_extensions);
// SKIP; supported_extensions type  not supported

// char* soup_xmlrpc_build_fault (int fault_code, const char* fault_format);
// char* soup_xmlrpc_build_fault (gint fault_code, const char* fault_format);
// IGNORE; not introspectable, varargs not supported

// char* soup_xmlrpc_build_request (const char* method_name, GVariant* params, GError ** error);
// char* soup_xmlrpc_build_request (const char* method_name, ::GVariant* params, GError ** error);
std::string xmlrpc_build_request (const std::string & method_name, GLib::Variant params)
{
  typedef char* (*call_wrap_t) (const char* method_name, ::GVariant* params, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_build_request;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (method_name_to_c), (::GVariant*) (params_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string xmlrpc_build_request (const std::string & method_name, GLib::Variant params, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* method_name, ::GVariant* params, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_build_request;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (method_name_to_c), (::GVariant*) (params_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* soup_xmlrpc_build_response (GVariant* value, GError ** error);
// char* soup_xmlrpc_build_response (::GVariant* value, GError ** error);
std::string xmlrpc_build_response (GLib::Variant value)
{
  typedef char* (*call_wrap_t) (::GVariant* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_build_response;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GVariant*) (value_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string xmlrpc_build_response (GLib::Variant value, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GVariant* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_build_response;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (value_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupMessage* soup_xmlrpc_message_new (const char* uri, const char* method_name, GVariant* params, GError ** error);
// ::SoupMessage* soup_xmlrpc_message_new (const char* uri, const char* method_name, ::GVariant* params, GError ** error);
Soup::Message xmlrpc_message_new (const std::string & uri, const std::string & method_name, GLib::Variant params)
{
  typedef ::SoupMessage* (*call_wrap_t) (const char* uri, const char* method_name, ::GVariant* params, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_message_new;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (const char*) (method_name_to_c), (::GVariant*) (params_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::Message xmlrpc_message_new (const std::string & uri, const std::string & method_name, GLib::Variant params, GLib::Error * _error) noexcept
{
  typedef ::SoupMessage* (*call_wrap_t) (const char* uri, const char* method_name, ::GVariant* params, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_message_new;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (const char*) (method_name_to_c), (::GVariant*) (params_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_xmlrpc_message_set_fault (SoupMessage* msg, int fault_code, const char* fault_format);
// void soup_xmlrpc_message_set_fault (::SoupMessage* msg, gint fault_code, const char* fault_format);
// IGNORE; not introspectable, varargs not supported

// gboolean soup_xmlrpc_message_set_response (SoupMessage* msg, GVariant* value, GError ** error);
// gboolean soup_xmlrpc_message_set_response (::SoupMessage* msg, ::GVariant* value, GError ** error);
bool xmlrpc_message_set_response (Soup::Message msg, GLib::Variant value)
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, ::GVariant* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_message_set_response;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (::GVariant*) (value_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool xmlrpc_message_set_response (Soup::Message msg, GLib::Variant value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessage* msg, ::GVariant* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_message_set_response;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c), (::GVariant*) (value_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// char* soup_xmlrpc_parse_request (const char* method_call, int length, SoupXMLRPCParams** params, GError ** error);
// char* soup_xmlrpc_parse_request (const char* method_call, gint length, * params, GError ** error);
// SKIP; params type  not supported

// GVariant* soup_xmlrpc_parse_response (const char* method_response, int length, const char* signature, GError ** error);
// ::GVariant* soup_xmlrpc_parse_response (const char* method_response, gint length, const char* signature, GError ** error);
GLib::Variant xmlrpc_parse_response (const std::string & method_response, gint length, const std::string & signature)
{
  typedef ::GVariant* (*call_wrap_t) (const char* method_response, gint length, const char* signature, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_parse_response;
  auto signature_to_c = gi::unwrap (signature, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto method_response_to_c = gi::unwrap (method_response, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (method_response_to_c), (gint) (length_to_c), (const char*) (signature_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant xmlrpc_parse_response (const std::string & method_response, gint length)
{
  typedef ::GVariant* (*call_wrap_t) (const char* method_response, gint length, const char* signature, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_parse_response;
  auto signature_to_c = nullptr;
  auto length_to_c = length;
  auto method_response_to_c = gi::unwrap (method_response, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (method_response_to_c), (gint) (length_to_c), (const char*) (signature_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant xmlrpc_parse_response (const std::string & method_response, gint length, const std::string & signature, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char* method_response, gint length, const char* signature, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_parse_response;
  auto signature_to_c = gi::unwrap (signature, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto method_response_to_c = gi::unwrap (method_response, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (method_response_to_c), (gint) (length_to_c), (const char*) (signature_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant xmlrpc_parse_response (const std::string & method_response, gint length, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char* method_response, gint length, const char* signature, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_parse_response;
  auto signature_to_c = nullptr;
  auto length_to_c = length;
  auto method_response_to_c = gi::unwrap (method_response, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (method_response_to_c), (gint) (length_to_c), (const char*) (signature_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupDate* soup_xmlrpc_variant_get_datetime (GVariant* variant, GError ** error);
// ::SoupDate* soup_xmlrpc_variant_get_datetime (::GVariant* variant, GError ** error);
Soup::Date xmlrpc_variant_get_datetime (GLib::Variant variant)
{
  typedef ::SoupDate* (*call_wrap_t) (::GVariant* variant, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_variant_get_datetime;
  auto variant_to_c = gi::unwrap (variant, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GVariant*) (variant_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::Date xmlrpc_variant_get_datetime (GLib::Variant variant, GLib::Error * _error) noexcept
{
  typedef ::SoupDate* (*call_wrap_t) (::GVariant* variant, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_variant_get_datetime;
  auto variant_to_c = gi::unwrap (variant, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (variant_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* soup_xmlrpc_variant_new_datetime (SoupDate* date);
// ::GVariant* soup_xmlrpc_variant_new_datetime (::SoupDate* date);
GLib::Variant xmlrpc_variant_new_datetime (Soup::Date date) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::SoupDate* date);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_xmlrpc_variant_new_datetime;
  auto date_to_c = gi::unwrap (date, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupDate*) (date_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
