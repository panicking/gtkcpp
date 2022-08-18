// AUTO-GENERATED

#ifndef _GI_GLIB_SCANNER_IMPL_HPP_
#define _GI_GLIB_SCANNER_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static guint _field_max_parse_errors_get (const ::GScanner* obj) { return (guint) obj->max_parse_errors; }
// guint Scanner::max_parse_errors (const ::GScanner* obj);
// guint Scanner::max_parse_errors (const ::GScanner* obj);
guint base::ScannerBase::max_parse_errors_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScanner* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_max_parse_errors_get;
  auto _temp_ret = call_wrap_v ((const ::GScanner*) (gobj_()));
  return _temp_ret;
}

static void _field_max_parse_errors_set (::GScanner* obj, guint _value) { obj->max_parse_errors = (decltype(obj->max_parse_errors)) _value; }
//  Scanner::max_parse_errors (::GScanner* obj, guint _value);
// void Scanner::max_parse_errors (::GScanner* obj, guint _value);
void base::ScannerBase::max_parse_errors_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_max_parse_errors_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScanner*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_parse_errors_get (const ::GScanner* obj) { return (guint) obj->parse_errors; }
// guint Scanner::parse_errors (const ::GScanner* obj);
// guint Scanner::parse_errors (const ::GScanner* obj);
guint base::ScannerBase::parse_errors_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScanner* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_parse_errors_get;
  auto _temp_ret = call_wrap_v ((const ::GScanner*) (gobj_()));
  return _temp_ret;
}

static void _field_parse_errors_set (::GScanner* obj, guint _value) { obj->parse_errors = (decltype(obj->parse_errors)) _value; }
//  Scanner::parse_errors (::GScanner* obj, guint _value);
// void Scanner::parse_errors (::GScanner* obj, guint _value);
void base::ScannerBase::parse_errors_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_parse_errors_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScanner*) (gobj_()), (guint) (_value_to_c));
}

static const char* _field_input_name_get (const ::GScanner* obj) { return (const char*) obj->input_name; }
// const char* Scanner::input_name (const ::GScanner* obj);
// const char* Scanner::input_name (const ::GScanner* obj);
std::string base::ScannerBase::input_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GScanner* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_input_name_get;
  auto _temp_ret = call_wrap_v ((const ::GScanner*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GScannerConfig* _field_config_get (const ::GScanner* obj) { return (::GScannerConfig*) obj->config; }
// ::GScannerConfig* Scanner::config (const ::GScanner* obj);
// ::GScannerConfig* Scanner::config (const ::GScanner* obj);
GLib::ScannerConfig base::ScannerBase::config_ () const noexcept
{
  typedef ::GScannerConfig* (*call_wrap_t) (const ::GScanner* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_config_get;
  auto _temp_ret = call_wrap_v ((const ::GScanner*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GTokenType _field_token_get (const ::GScanner* obj) { return (::GTokenType) obj->token; }
// ::GTokenType Scanner::token (const ::GScanner* obj);
// ::GTokenType Scanner::token (const ::GScanner* obj);
GLib::TokenType base::ScannerBase::token_ () const noexcept
{
  typedef ::GTokenType (*call_wrap_t) (const ::GScanner* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_token_get;
  auto _temp_ret = call_wrap_v ((const ::GScanner*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_token_set (::GScanner* obj, ::GTokenType _value) { obj->token = (decltype(obj->token)) _value; }
//  Scanner::token (::GScanner* obj, ::GTokenType _value);
// void Scanner::token (::GScanner* obj, ::GTokenType _value);
void base::ScannerBase::token_ (GLib::TokenType _value) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* obj, ::GTokenType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_token_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GScanner*) (gobj_()), (::GTokenType) (_value_to_c));
}

static guint _field_line_get (const ::GScanner* obj) { return (guint) obj->line; }
// guint Scanner::line (const ::GScanner* obj);
// guint Scanner::line (const ::GScanner* obj);
guint base::ScannerBase::line_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScanner* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_line_get;
  auto _temp_ret = call_wrap_v ((const ::GScanner*) (gobj_()));
  return _temp_ret;
}

static void _field_line_set (::GScanner* obj, guint _value) { obj->line = (decltype(obj->line)) _value; }
//  Scanner::line (::GScanner* obj, guint _value);
// void Scanner::line (::GScanner* obj, guint _value);
void base::ScannerBase::line_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_line_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScanner*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_position_get (const ::GScanner* obj) { return (guint) obj->position; }
// guint Scanner::position (const ::GScanner* obj);
// guint Scanner::position (const ::GScanner* obj);
guint base::ScannerBase::position_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScanner* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_position_get;
  auto _temp_ret = call_wrap_v ((const ::GScanner*) (gobj_()));
  return _temp_ret;
}

static void _field_position_set (::GScanner* obj, guint _value) { obj->position = (decltype(obj->position)) _value; }
//  Scanner::position (::GScanner* obj, guint _value);
// void Scanner::position (::GScanner* obj, guint _value);
void base::ScannerBase::position_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_position_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScanner*) (gobj_()), (guint) (_value_to_c));
}

static ::GTokenType _field_next_token_get (const ::GScanner* obj) { return (::GTokenType) obj->next_token; }
// ::GTokenType Scanner::next_token (const ::GScanner* obj);
// ::GTokenType Scanner::next_token (const ::GScanner* obj);
GLib::TokenType base::ScannerBase::next_token_ () const noexcept
{
  typedef ::GTokenType (*call_wrap_t) (const ::GScanner* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_next_token_get;
  auto _temp_ret = call_wrap_v ((const ::GScanner*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_next_token_set (::GScanner* obj, ::GTokenType _value) { obj->next_token = (decltype(obj->next_token)) _value; }
//  Scanner::next_token (::GScanner* obj, ::GTokenType _value);
// void Scanner::next_token (::GScanner* obj, ::GTokenType _value);
void base::ScannerBase::next_token_ (GLib::TokenType _value) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* obj, ::GTokenType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_next_token_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GScanner*) (gobj_()), (::GTokenType) (_value_to_c));
}

static guint _field_next_line_get (const ::GScanner* obj) { return (guint) obj->next_line; }
// guint Scanner::next_line (const ::GScanner* obj);
// guint Scanner::next_line (const ::GScanner* obj);
guint base::ScannerBase::next_line_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScanner* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_next_line_get;
  auto _temp_ret = call_wrap_v ((const ::GScanner*) (gobj_()));
  return _temp_ret;
}

static void _field_next_line_set (::GScanner* obj, guint _value) { obj->next_line = (decltype(obj->next_line)) _value; }
//  Scanner::next_line (::GScanner* obj, guint _value);
// void Scanner::next_line (::GScanner* obj, guint _value);
void base::ScannerBase::next_line_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_next_line_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScanner*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_next_position_get (const ::GScanner* obj) { return (guint) obj->next_position; }
// guint Scanner::next_position (const ::GScanner* obj);
// guint Scanner::next_position (const ::GScanner* obj);
guint base::ScannerBase::next_position_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScanner* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_next_position_get;
  auto _temp_ret = call_wrap_v ((const ::GScanner*) (gobj_()));
  return _temp_ret;
}

static void _field_next_position_set (::GScanner* obj, guint _value) { obj->next_position = (decltype(obj->next_position)) _value; }
//  Scanner::next_position (::GScanner* obj, guint _value);
// void Scanner::next_position (::GScanner* obj, guint _value);
void base::ScannerBase::next_position_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_next_position_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScanner*) (gobj_()), (guint) (_value_to_c));
}

// guint g_scanner_cur_line (GScanner* scanner);
// guint g_scanner_cur_line (::GScanner* scanner);
guint base::ScannerBase::cur_line () noexcept
{
  typedef guint (*call_wrap_t) (::GScanner* scanner);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_cur_line;
  auto _temp_ret = call_wrap_v ((::GScanner*) (gobj_()));
  return _temp_ret;
}

// guint g_scanner_cur_position (GScanner* scanner);
// guint g_scanner_cur_position (::GScanner* scanner);
guint base::ScannerBase::cur_position () noexcept
{
  typedef guint (*call_wrap_t) (::GScanner* scanner);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_cur_position;
  auto _temp_ret = call_wrap_v ((::GScanner*) (gobj_()));
  return _temp_ret;
}

// GTokenType g_scanner_cur_token (GScanner* scanner);
// ::GTokenType g_scanner_cur_token (::GScanner* scanner);
GLib::TokenType base::ScannerBase::cur_token () noexcept
{
  typedef ::GTokenType (*call_wrap_t) (::GScanner* scanner);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_cur_token;
  auto _temp_ret = call_wrap_v ((::GScanner*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// FAILURE on g_scanner_cur_value; No such node (<xmlattr>.transfer-ownership)
// void g_scanner_destroy (GScanner* scanner);
// void g_scanner_destroy (::GScanner* scanner);
void base::ScannerBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::GScanner* scanner);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_destroy;
  call_wrap_v ((::GScanner*) (gobj_()));
}

// gboolean g_scanner_eof (GScanner* scanner);
// gboolean g_scanner_eof (::GScanner* scanner);
bool base::ScannerBase::eof () noexcept
{
  typedef gboolean (*call_wrap_t) (::GScanner* scanner);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_eof;
  auto _temp_ret = call_wrap_v ((::GScanner*) (gobj_()));
  return _temp_ret;
}

// void g_scanner_error (GScanner* scanner, const gchar* format);
// void g_scanner_error (::GScanner* scanner, const char* format);
// IGNORE; not introspectable, varargs not supported

// GTokenType g_scanner_get_next_token (GScanner* scanner);
// ::GTokenType g_scanner_get_next_token (::GScanner* scanner);
GLib::TokenType base::ScannerBase::get_next_token () noexcept
{
  typedef ::GTokenType (*call_wrap_t) (::GScanner* scanner);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_get_next_token;
  auto _temp_ret = call_wrap_v ((::GScanner*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void g_scanner_input_file (GScanner* scanner, gint input_fd);
// void g_scanner_input_file (::GScanner* scanner, gint input_fd);
void base::ScannerBase::input_file (gint input_fd) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* scanner, gint input_fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_input_file;
  auto input_fd_to_c = input_fd;
  call_wrap_v ((::GScanner*) (gobj_()), (gint) (input_fd_to_c));
}

// void g_scanner_input_text (GScanner* scanner, const gchar* text, guint text_len);
// void g_scanner_input_text (::GScanner* scanner, const char* text, guint text_len);
void base::ScannerBase::input_text (const std::string & text, guint text_len) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* scanner, const char* text, guint text_len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_input_text;
  auto text_len_to_c = text_len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GScanner*) (gobj_()), (const char*) (text_to_c), (guint) (text_len_to_c));
}

// gpointer g_scanner_lookup_symbol (GScanner* scanner, const gchar* symbol);
// void* g_scanner_lookup_symbol (::GScanner* scanner, const char* symbol);
gpointer base::ScannerBase::lookup_symbol (const std::string & symbol) noexcept
{
  typedef void* (*call_wrap_t) (::GScanner* scanner, const char* symbol);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_lookup_symbol;
  auto symbol_to_c = gi::unwrap (symbol, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GScanner*) (gobj_()), (const char*) (symbol_to_c));
  return _temp_ret;
}

// GTokenType g_scanner_peek_next_token (GScanner* scanner);
// ::GTokenType g_scanner_peek_next_token (::GScanner* scanner);
GLib::TokenType base::ScannerBase::peek_next_token () noexcept
{
  typedef ::GTokenType (*call_wrap_t) (::GScanner* scanner);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_peek_next_token;
  auto _temp_ret = call_wrap_v ((::GScanner*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void g_scanner_scope_add_symbol (GScanner* scanner, guint scope_id, const gchar* symbol, gpointer value);
// void g_scanner_scope_add_symbol (::GScanner* scanner, guint scope_id, const char* symbol, void* value);
void base::ScannerBase::scope_add_symbol (guint scope_id, const std::string & symbol, void* value) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* scanner, guint scope_id, const char* symbol, void* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_scope_add_symbol;
  auto value_to_c = value;
  auto symbol_to_c = gi::unwrap (symbol, gi::transfer_none, gi::direction_in);
  auto scope_id_to_c = scope_id;
  call_wrap_v ((::GScanner*) (gobj_()), (guint) (scope_id_to_c), (const char*) (symbol_to_c), (void*) (value_to_c));
}

// void g_scanner_scope_foreach_symbol (GScanner* scanner, guint scope_id, GHFunc func, gpointer user_data);
// void g_scanner_scope_foreach_symbol (::GScanner* scanner, guint scope_id, GLib::HFunc::cfunction_type func, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// gpointer g_scanner_scope_lookup_symbol (GScanner* scanner, guint scope_id, const gchar* symbol);
// void* g_scanner_scope_lookup_symbol (::GScanner* scanner, guint scope_id, const char* symbol);
gpointer base::ScannerBase::scope_lookup_symbol (guint scope_id, const std::string & symbol) noexcept
{
  typedef void* (*call_wrap_t) (::GScanner* scanner, guint scope_id, const char* symbol);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_scope_lookup_symbol;
  auto symbol_to_c = gi::unwrap (symbol, gi::transfer_none, gi::direction_in);
  auto scope_id_to_c = scope_id;
  auto _temp_ret = call_wrap_v ((::GScanner*) (gobj_()), (guint) (scope_id_to_c), (const char*) (symbol_to_c));
  return _temp_ret;
}

// void g_scanner_scope_remove_symbol (GScanner* scanner, guint scope_id, const gchar* symbol);
// void g_scanner_scope_remove_symbol (::GScanner* scanner, guint scope_id, const char* symbol);
void base::ScannerBase::scope_remove_symbol (guint scope_id, const std::string & symbol) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* scanner, guint scope_id, const char* symbol);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_scope_remove_symbol;
  auto symbol_to_c = gi::unwrap (symbol, gi::transfer_none, gi::direction_in);
  auto scope_id_to_c = scope_id;
  call_wrap_v ((::GScanner*) (gobj_()), (guint) (scope_id_to_c), (const char*) (symbol_to_c));
}

// guint g_scanner_set_scope (GScanner* scanner, guint scope_id);
// guint g_scanner_set_scope (::GScanner* scanner, guint scope_id);
guint base::ScannerBase::set_scope (guint scope_id) noexcept
{
  typedef guint (*call_wrap_t) (::GScanner* scanner, guint scope_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_set_scope;
  auto scope_id_to_c = scope_id;
  auto _temp_ret = call_wrap_v ((::GScanner*) (gobj_()), (guint) (scope_id_to_c));
  return _temp_ret;
}

// void g_scanner_sync_file_offset (GScanner* scanner);
// void g_scanner_sync_file_offset (::GScanner* scanner);
void base::ScannerBase::sync_file_offset () noexcept
{
  typedef void (*call_wrap_t) (::GScanner* scanner);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_sync_file_offset;
  call_wrap_v ((::GScanner*) (gobj_()));
}

// void g_scanner_unexp_token (GScanner* scanner, GTokenType expected_token, const gchar* identifier_spec, const gchar* symbol_spec, const gchar* symbol_name, const gchar* message, gint is_error);
// void g_scanner_unexp_token (::GScanner* scanner, ::GTokenType expected_token, const char* identifier_spec, const char* symbol_spec, const char* symbol_name, const char* message, gint is_error);
void base::ScannerBase::unexp_token (GLib::TokenType expected_token, const std::string & identifier_spec, const std::string & symbol_spec, const std::string & symbol_name, const std::string & message, gint is_error) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* scanner, ::GTokenType expected_token, const char* identifier_spec, const char* symbol_spec, const char* symbol_name, const char* message, gint is_error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_scanner_unexp_token;
  auto is_error_to_c = is_error;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto symbol_name_to_c = gi::unwrap (symbol_name, gi::transfer_none, gi::direction_in);
  auto symbol_spec_to_c = gi::unwrap (symbol_spec, gi::transfer_none, gi::direction_in);
  auto identifier_spec_to_c = gi::unwrap (identifier_spec, gi::transfer_none, gi::direction_in);
  auto expected_token_to_c = gi::unwrap (expected_token);
  call_wrap_v ((::GScanner*) (gobj_()), (::GTokenType) (expected_token_to_c), (const char*) (identifier_spec_to_c), (const char*) (symbol_spec_to_c), (const char*) (symbol_name_to_c), (const char*) (message_to_c), (gint) (is_error_to_c));
}

// void g_scanner_warn (GScanner* scanner, const gchar* format);
// void g_scanner_warn (::GScanner* scanner, const char* format);
// IGNORE; not introspectable, varargs not supported

// FAILURE on g_scanner_new; No such node (<xmlattr>.transfer-ownership)

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/scanner_extra_def_impl.hpp>)
#include <glib/scanner_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/scanner_extra_impl.hpp>)
#include <glib/scanner_extra_impl.hpp>
#endif
#endif

#endif
