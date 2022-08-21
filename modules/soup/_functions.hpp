// AUTO-GENERATED

#ifndef _GI_SOUP__FUNCTIONS_HPP_
#define _GI_SOUP__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace RequestErrorNS_ {

// GQuark soup_request_error_quark ();
// ::GQuark soup_request_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace RequestErrorNS_

namespace RequesterErrorNS_ {

// GQuark soup_requester_error_quark ();
// ::GQuark soup_requester_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace RequesterErrorNS_

namespace StatusNS_ {

// const char* soup_status_get_phrase (guint status_code);
// const char* soup_status_get_phrase (guint status_code);
GI_INLINE_DECL std::string get_phrase (guint status_code) noexcept;

// guint soup_status_proxify (guint status_code);
// guint soup_status_proxify (guint status_code);
GI_INLINE_DECL guint proxify (guint status_code) noexcept;

} // namespace StatusNS_

namespace TLDErrorNS_ {

// GQuark soup_tld_error_quark ();
// ::GQuark soup_tld_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace TLDErrorNS_

namespace WebsocketErrorNS_ {

// GQuark soup_websocket_error_get_quark ();
// ::GQuark soup_websocket_error_get_quark ();
GI_INLINE_DECL GLib::Quark get_quark () noexcept;

} // namespace WebsocketErrorNS_

namespace XMLRPCErrorNS_ {

// GQuark soup_xmlrpc_error_quark ();
// ::GQuark soup_xmlrpc_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace XMLRPCErrorNS_

namespace XMLRPCFaultNS_ {

// GQuark soup_xmlrpc_fault_quark ();
// ::GQuark soup_xmlrpc_fault_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

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
GI_INLINE_DECL bool check_version (guint major, guint minor, guint micro) noexcept;

// GSList* soup_cookies_from_request (SoupMessage* msg);
// ::GSList* soup_cookies_from_request (::SoupMessage* msg);
GI_INLINE_DECL std::vector<Soup::Cookie> cookies_from_request (Soup::Message msg) noexcept;

// GSList* soup_cookies_from_response (SoupMessage* msg);
// ::GSList* soup_cookies_from_response (::SoupMessage* msg);
GI_INLINE_DECL std::vector<Soup::Cookie> cookies_from_response (Soup::Message msg) noexcept;

// char* soup_cookies_to_cookie_header (GSList* cookies);
// char* soup_cookies_to_cookie_header (::GSList* cookies);
GI_INLINE_DECL std::string cookies_to_cookie_header (const std::vector<Soup::Cookie> & cookies) noexcept;

// void soup_cookies_to_request (GSList* cookies, SoupMessage* msg);
// void soup_cookies_to_request (::GSList* cookies, ::SoupMessage* msg);
GI_INLINE_DECL void cookies_to_request (const std::vector<Soup::Cookie> & cookies, Soup::Message msg) noexcept;

// void soup_cookies_to_response (GSList* cookies, SoupMessage* msg);
// void soup_cookies_to_response (::GSList* cookies, ::SoupMessage* msg);
GI_INLINE_DECL void cookies_to_response (const std::vector<Soup::Cookie> & cookies, Soup::Message msg) noexcept;

// GHashTable* soup_form_decode (const char* encoded_form);
// ::GHashTable* soup_form_decode (const char* encoded_form);
GI_INLINE_DECL std::map<std::string, std::string> form_decode (const std::string & encoded_form) noexcept;

// GHashTable* soup_form_decode_multipart (SoupMessage* msg, const char* file_control_name, char** filename, char** content_type, SoupBuffer** file);
// ::GHashTable* soup_form_decode_multipart (::SoupMessage* msg, const char* file_control_name, char** filename, char** content_type, ::SoupBuffer** file);
GI_INLINE_DECL std::map<std::string, std::string> form_decode_multipart (Soup::Message msg, const std::string & file_control_name, std::string * filename = nullptr, std::string * content_type = nullptr, Soup::Buffer * file = nullptr) noexcept;
GI_INLINE_DECL std::map<std::string, std::string> form_decode_multipart (Soup::Message msg, std::string * filename = nullptr, std::string * content_type = nullptr, Soup::Buffer * file = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::map<std::string, std::string>, std::string, std::string, Soup::Buffer> form_decode_multipart (Soup::Message msg, const std::string & file_control_name) noexcept;
GI_INLINE_DECL std::tuple<std::map<std::string, std::string>, std::string, std::string, Soup::Buffer> form_decode_multipart (Soup::Message msg) noexcept;

// char* soup_form_encode (const char* first_field);
// char* soup_form_encode (const char* first_field);
// IGNORE; not introspectable, varargs not supported

// char* soup_form_encode_datalist (GData** form_data_set);
// char* soup_form_encode_datalist ( form_data_set);
// SKIP; form_data_set type  not supported

// char* soup_form_encode_hash (GHashTable* form_data_set);
// char* soup_form_encode_hash (::GHashTable* form_data_set);
GI_INLINE_DECL std::string form_encode_hash (const std::map<std::string, std::string> & form_data_set) noexcept;

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
GI_INLINE_DECL Soup::Message form_request_new_from_hash (const std::string & method, const std::string & uri, const std::map<std::string, std::string> & form_data_set) noexcept;

// SoupMessage* soup_form_request_new_from_multipart (const char* uri, SoupMultipart* multipart);
// ::SoupMessage* soup_form_request_new_from_multipart (const char* uri, ::SoupMultipart* multipart);
GI_INLINE_DECL Soup::Message form_request_new_from_multipart (const std::string & uri, Soup::Multipart multipart) noexcept;

// guint soup_get_major_version ();
// guint soup_get_major_version ();
GI_INLINE_DECL guint get_major_version () noexcept;

// guint soup_get_micro_version ();
// guint soup_get_micro_version ();
GI_INLINE_DECL guint get_micro_version () noexcept;

// guint soup_get_minor_version ();
// guint soup_get_minor_version ();
GI_INLINE_DECL guint get_minor_version () noexcept;

// GResource* soup_get_resource ();
// ::GResource* soup_get_resource ();
// IGNORE; marked ignore

// gboolean soup_header_contains (const char* header, const char* token);
// gboolean soup_header_contains (const char* header, const char* token);
GI_INLINE_DECL bool header_contains (const std::string & header, const std::string & token) noexcept;

// void soup_header_free_list (GSList* list);
// void soup_header_free_list (::GSList* list);
GI_INLINE_DECL void header_free_list (const std::vector<gpointer> & list) noexcept;

// void soup_header_free_param_list (GHashTable* param_list);
// void soup_header_free_param_list (::GHashTable* param_list);
GI_INLINE_DECL void header_free_param_list (const std::map<std::string, std::string> & param_list) noexcept;

// void soup_header_g_string_append_param (GString* string, const char* name, const char* value);
// void soup_header_g_string_append_param (::GString* string, const char* name, const char* value);
GI_INLINE_DECL void header_g_string_append_param (GLib::String string, const std::string & name, const std::string & value) noexcept;

// void soup_header_g_string_append_param_quoted (GString* string, const char* name, const char* value);
// void soup_header_g_string_append_param_quoted (::GString* string, const char* name, const char* value);
GI_INLINE_DECL void header_g_string_append_param_quoted (GLib::String string, const std::string & name, const std::string & value) noexcept;

// GSList* soup_header_parse_list (const char* header);
// ::GSList* soup_header_parse_list (const char* header);
GI_INLINE_DECL std::vector<std::string> header_parse_list (const std::string & header) noexcept;

// GHashTable* soup_header_parse_param_list (const char* header);
// ::GHashTable* soup_header_parse_param_list (const char* header);
GI_INLINE_DECL std::map<std::string, std::string> header_parse_param_list (const std::string & header) noexcept;

// GHashTable* soup_header_parse_param_list_strict (const char* header);
// ::GHashTable* soup_header_parse_param_list_strict (const char* header);
GI_INLINE_DECL std::map<std::string, std::string> header_parse_param_list_strict (const std::string & header) noexcept;

// GSList* soup_header_parse_quality_list (const char* header, GSList** unacceptable);
// ::GSList* soup_header_parse_quality_list (const char* header, ::GSList** unacceptable);
GI_INLINE_DECL std::vector<std::string> header_parse_quality_list (const std::string & header, std::vector<std::string> * unacceptable = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, std::vector<std::string>> header_parse_quality_list (const std::string & header) noexcept;

// GHashTable* soup_header_parse_semi_param_list (const char* header);
// ::GHashTable* soup_header_parse_semi_param_list (const char* header);
GI_INLINE_DECL std::map<std::string, std::string> header_parse_semi_param_list (const std::string & header) noexcept;

// GHashTable* soup_header_parse_semi_param_list_strict (const char* header);
// ::GHashTable* soup_header_parse_semi_param_list_strict (const char* header);
GI_INLINE_DECL std::map<std::string, std::string> header_parse_semi_param_list_strict (const std::string & header) noexcept;

// gboolean soup_headers_parse (const char* str, int len, SoupMessageHeaders* dest);
// gboolean soup_headers_parse (const char* str, gint len, ::SoupMessageHeaders* dest);
GI_INLINE_DECL bool headers_parse (const std::string & str, gint len, Soup::MessageHeaders dest) noexcept;

// guint soup_headers_parse_request (const char* str, int len, SoupMessageHeaders* req_headers, char** req_method, char** req_path, SoupHTTPVersion* ver);
// guint soup_headers_parse_request (const char* str, gint len, ::SoupMessageHeaders* req_headers, char** req_method, char** req_path, ::SoupHTTPVersion* ver);
GI_INLINE_DECL guint headers_parse_request (const std::string & str, gint len, Soup::MessageHeaders req_headers, std::string * req_method = nullptr, std::string * req_path = nullptr, Soup::HTTPVersion * ver = nullptr) noexcept;
GI_INLINE_DECL std::tuple<guint, std::string, std::string, Soup::HTTPVersion> headers_parse_request (const std::string & str, gint len, Soup::MessageHeaders req_headers) noexcept;

// gboolean soup_headers_parse_response (const char* str, int len, SoupMessageHeaders* headers, SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
// gboolean soup_headers_parse_response (const char* str, gint len, ::SoupMessageHeaders* headers, ::SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
GI_INLINE_DECL bool headers_parse_response (const std::string & str, gint len, Soup::MessageHeaders headers, Soup::HTTPVersion * ver = nullptr, guint * status_code = nullptr, std::string * reason_phrase = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Soup::HTTPVersion, guint, std::string> headers_parse_response (const std::string & str, gint len, Soup::MessageHeaders headers) noexcept;

// gboolean soup_headers_parse_status_line (const char* status_line, SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
// gboolean soup_headers_parse_status_line (const char* status_line, ::SoupHTTPVersion* ver, guint* status_code, char** reason_phrase);
GI_INLINE_DECL bool headers_parse_status_line (const std::string & status_line, Soup::HTTPVersion * ver = nullptr, guint * status_code = nullptr, std::string * reason_phrase = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Soup::HTTPVersion, guint, std::string> headers_parse_status_line (const std::string & status_line) noexcept;

// GQuark soup_http_error_quark ();
// ::GQuark soup_http_error_quark ();
GI_INLINE_DECL GLib::Quark http_error_quark () noexcept;

// gboolean soup_str_case_equal (gconstpointer v1, gconstpointer v2);
// gboolean soup_str_case_equal (const void* v1, const void* v2);
GI_INLINE_DECL bool str_case_equal (const void* v1, const void* v2) noexcept;

// guint soup_str_case_hash (gconstpointer key);
// guint soup_str_case_hash (const void* key);
GI_INLINE_DECL guint str_case_hash (const void* key) noexcept;

// gboolean soup_tld_domain_is_public_suffix (const char* domain);
// gboolean soup_tld_domain_is_public_suffix (const char* domain);
GI_INLINE_DECL bool tld_domain_is_public_suffix (const std::string & domain) noexcept;

// const char* soup_tld_get_base_domain (const char* hostname, GError ** error);
// const char* soup_tld_get_base_domain (const char* hostname, GError ** error);
GI_INLINE_DECL std::string tld_get_base_domain (const std::string & hostname);
GI_INLINE_DECL std::string tld_get_base_domain (const std::string & hostname, GLib::Error * _error) noexcept;

// void soup_websocket_client_prepare_handshake (SoupMessage* msg, const char* origin, char** protocols);
// void soup_websocket_client_prepare_handshake (::SoupMessage* msg, const char* origin, char** protocols);
GI_INLINE_DECL void websocket_client_prepare_handshake (Soup::Message msg, const std::string & origin, const std::vector<std::string> & protocols) noexcept;
GI_INLINE_DECL void websocket_client_prepare_handshake (Soup::Message msg, const std::vector<std::string> & protocols) noexcept;

// void soup_websocket_client_prepare_handshake_with_extensions (SoupMessage* msg, const char* origin, char** protocols, GPtrArray* supported_extensions);
// void soup_websocket_client_prepare_handshake_with_extensions (::SoupMessage* msg, const char* origin, char** protocols,  supported_extensions);
// SKIP; supported_extensions type  not supported

// gboolean soup_websocket_client_verify_handshake (SoupMessage* msg, GError ** error);
// gboolean soup_websocket_client_verify_handshake (::SoupMessage* msg, GError ** error);
GI_INLINE_DECL bool websocket_client_verify_handshake (Soup::Message msg);
GI_INLINE_DECL bool websocket_client_verify_handshake (Soup::Message msg, GLib::Error * _error) noexcept;

// gboolean soup_websocket_client_verify_handshake_with_extensions (SoupMessage* msg, GPtrArray* supported_extensions, GList** accepted_extensions, GError ** error);
// gboolean soup_websocket_client_verify_handshake_with_extensions (::SoupMessage* msg,  supported_extensions, ::GList** accepted_extensions, GError ** error);
// SKIP; supported_extensions type  not supported

// gboolean soup_websocket_server_check_handshake (SoupMessage* msg, const char* origin, char** protocols, GError ** error);
// gboolean soup_websocket_server_check_handshake (::SoupMessage* msg, const char* origin, char** protocols, GError ** error);
GI_INLINE_DECL bool websocket_server_check_handshake (Soup::Message msg, const std::string & origin, const std::vector<std::string> & protocols);
GI_INLINE_DECL bool websocket_server_check_handshake (Soup::Message msg, const std::vector<std::string> & protocols);
GI_INLINE_DECL bool websocket_server_check_handshake (Soup::Message msg, const std::string & origin, const std::vector<std::string> & protocols, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool websocket_server_check_handshake (Soup::Message msg, const std::vector<std::string> & protocols, GLib::Error * _error) noexcept;

// gboolean soup_websocket_server_check_handshake_with_extensions (SoupMessage* msg, const char* origin, char** protocols, GPtrArray* supported_extensions, GError ** error);
// gboolean soup_websocket_server_check_handshake_with_extensions (::SoupMessage* msg, const char* origin, char** protocols,  supported_extensions, GError ** error);
// SKIP; supported_extensions type  not supported

// gboolean soup_websocket_server_process_handshake (SoupMessage* msg, const char* expected_origin, char** protocols);
// gboolean soup_websocket_server_process_handshake (::SoupMessage* msg, const char* expected_origin, char** protocols);
GI_INLINE_DECL bool websocket_server_process_handshake (Soup::Message msg, const std::string & expected_origin, const std::vector<std::string> & protocols) noexcept;
GI_INLINE_DECL bool websocket_server_process_handshake (Soup::Message msg, const std::vector<std::string> & protocols) noexcept;

// gboolean soup_websocket_server_process_handshake_with_extensions (SoupMessage* msg, const char* expected_origin, char** protocols, GPtrArray* supported_extensions, GList** accepted_extensions);
// gboolean soup_websocket_server_process_handshake_with_extensions (::SoupMessage* msg, const char* expected_origin, char** protocols,  supported_extensions, ::GList** accepted_extensions);
// SKIP; supported_extensions type  not supported

// char* soup_xmlrpc_build_fault (int fault_code, const char* fault_format);
// char* soup_xmlrpc_build_fault (gint fault_code, const char* fault_format);
// IGNORE; not introspectable, varargs not supported

// char* soup_xmlrpc_build_request (const char* method_name, GVariant* params, GError ** error);
// char* soup_xmlrpc_build_request (const char* method_name, ::GVariant* params, GError ** error);
GI_INLINE_DECL std::string xmlrpc_build_request (const std::string & method_name, GLib::Variant params);
GI_INLINE_DECL std::string xmlrpc_build_request (const std::string & method_name, GLib::Variant params, GLib::Error * _error) noexcept;

// char* soup_xmlrpc_build_response (GVariant* value, GError ** error);
// char* soup_xmlrpc_build_response (::GVariant* value, GError ** error);
GI_INLINE_DECL std::string xmlrpc_build_response (GLib::Variant value);
GI_INLINE_DECL std::string xmlrpc_build_response (GLib::Variant value, GLib::Error * _error) noexcept;

// SoupMessage* soup_xmlrpc_message_new (const char* uri, const char* method_name, GVariant* params, GError ** error);
// ::SoupMessage* soup_xmlrpc_message_new (const char* uri, const char* method_name, ::GVariant* params, GError ** error);
GI_INLINE_DECL Soup::Message xmlrpc_message_new (const std::string & uri, const std::string & method_name, GLib::Variant params);
GI_INLINE_DECL Soup::Message xmlrpc_message_new (const std::string & uri, const std::string & method_name, GLib::Variant params, GLib::Error * _error) noexcept;

// void soup_xmlrpc_message_set_fault (SoupMessage* msg, int fault_code, const char* fault_format);
// void soup_xmlrpc_message_set_fault (::SoupMessage* msg, gint fault_code, const char* fault_format);
// IGNORE; not introspectable, varargs not supported

// gboolean soup_xmlrpc_message_set_response (SoupMessage* msg, GVariant* value, GError ** error);
// gboolean soup_xmlrpc_message_set_response (::SoupMessage* msg, ::GVariant* value, GError ** error);
GI_INLINE_DECL bool xmlrpc_message_set_response (Soup::Message msg, GLib::Variant value);
GI_INLINE_DECL bool xmlrpc_message_set_response (Soup::Message msg, GLib::Variant value, GLib::Error * _error) noexcept;

// char* soup_xmlrpc_parse_request (const char* method_call, int length, SoupXMLRPCParams** params, GError ** error);
// char* soup_xmlrpc_parse_request (const char* method_call, gint length, * params, GError ** error);
// SKIP; params type  not supported

// GVariant* soup_xmlrpc_parse_response (const char* method_response, int length, const char* signature, GError ** error);
// ::GVariant* soup_xmlrpc_parse_response (const char* method_response, gint length, const char* signature, GError ** error);
GI_INLINE_DECL GLib::Variant xmlrpc_parse_response (const std::string & method_response, gint length, const std::string & signature);
GI_INLINE_DECL GLib::Variant xmlrpc_parse_response (const std::string & method_response, gint length);
GI_INLINE_DECL GLib::Variant xmlrpc_parse_response (const std::string & method_response, gint length, const std::string & signature, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Variant xmlrpc_parse_response (const std::string & method_response, gint length, GLib::Error * _error) noexcept;

// SoupDate* soup_xmlrpc_variant_get_datetime (GVariant* variant, GError ** error);
// ::SoupDate* soup_xmlrpc_variant_get_datetime (::GVariant* variant, GError ** error);
GI_INLINE_DECL Soup::Date xmlrpc_variant_get_datetime (GLib::Variant variant);
GI_INLINE_DECL Soup::Date xmlrpc_variant_get_datetime (GLib::Variant variant, GLib::Error * _error) noexcept;

// GVariant* soup_xmlrpc_variant_new_datetime (SoupDate* date);
// ::GVariant* soup_xmlrpc_variant_new_datetime (::SoupDate* date);
GI_INLINE_DECL GLib::Variant xmlrpc_variant_new_datetime (Soup::Date date) noexcept;

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
