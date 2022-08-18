// AUTO-GENERATED

#ifndef _GI_GLIB_SCANNER_HPP_
#define _GI_GLIB_SCANNER_HPP_


namespace gi {

namespace repository {

namespace GLib {

class ScannerConfig;

class Scanner;

namespace base {


#define GI_GLIB_SCANNER_BASE base::ScannerBase
class ScannerBase : public gi::detail::CBoxedWrapper<ScannerBase, ::GScanner>
{
typedef gi::detail::CBoxedWrapper<ScannerBase, ::GScanner> super_type;
public:

ScannerBase (std::nullptr_t = nullptr) : super_type() {}

// guint Scanner::max_parse_errors (const ::GScanner* obj);
// guint Scanner::max_parse_errors (const ::GScanner* obj);
GI_INLINE_DECL guint max_parse_errors_ () const noexcept;

//  Scanner::max_parse_errors (::GScanner* obj, guint _value);
// void Scanner::max_parse_errors (::GScanner* obj, guint _value);
GI_INLINE_DECL void max_parse_errors_ (guint _value) noexcept;

// guint Scanner::parse_errors (const ::GScanner* obj);
// guint Scanner::parse_errors (const ::GScanner* obj);
GI_INLINE_DECL guint parse_errors_ () const noexcept;

//  Scanner::parse_errors (::GScanner* obj, guint _value);
// void Scanner::parse_errors (::GScanner* obj, guint _value);
GI_INLINE_DECL void parse_errors_ (guint _value) noexcept;

// const char* Scanner::input_name (const ::GScanner* obj);
// const char* Scanner::input_name (const ::GScanner* obj);
GI_INLINE_DECL std::string input_name_ () const noexcept;

// ::GScannerConfig* Scanner::config (const ::GScanner* obj);
// ::GScannerConfig* Scanner::config (const ::GScanner* obj);
GI_INLINE_DECL GLib::ScannerConfig config_ () const noexcept;

// ::GTokenType Scanner::token (const ::GScanner* obj);
// ::GTokenType Scanner::token (const ::GScanner* obj);
GI_INLINE_DECL GLib::TokenType token_ () const noexcept;

//  Scanner::token (::GScanner* obj, ::GTokenType _value);
// void Scanner::token (::GScanner* obj, ::GTokenType _value);
GI_INLINE_DECL void token_ (GLib::TokenType _value) noexcept;

// guint Scanner::line (const ::GScanner* obj);
// guint Scanner::line (const ::GScanner* obj);
GI_INLINE_DECL guint line_ () const noexcept;

//  Scanner::line (::GScanner* obj, guint _value);
// void Scanner::line (::GScanner* obj, guint _value);
GI_INLINE_DECL void line_ (guint _value) noexcept;

// guint Scanner::position (const ::GScanner* obj);
// guint Scanner::position (const ::GScanner* obj);
GI_INLINE_DECL guint position_ () const noexcept;

//  Scanner::position (::GScanner* obj, guint _value);
// void Scanner::position (::GScanner* obj, guint _value);
GI_INLINE_DECL void position_ (guint _value) noexcept;

// ::GTokenType Scanner::next_token (const ::GScanner* obj);
// ::GTokenType Scanner::next_token (const ::GScanner* obj);
GI_INLINE_DECL GLib::TokenType next_token_ () const noexcept;

//  Scanner::next_token (::GScanner* obj, ::GTokenType _value);
// void Scanner::next_token (::GScanner* obj, ::GTokenType _value);
GI_INLINE_DECL void next_token_ (GLib::TokenType _value) noexcept;

// guint Scanner::next_line (const ::GScanner* obj);
// guint Scanner::next_line (const ::GScanner* obj);
GI_INLINE_DECL guint next_line_ () const noexcept;

//  Scanner::next_line (::GScanner* obj, guint _value);
// void Scanner::next_line (::GScanner* obj, guint _value);
GI_INLINE_DECL void next_line_ (guint _value) noexcept;

// guint Scanner::next_position (const ::GScanner* obj);
// guint Scanner::next_position (const ::GScanner* obj);
GI_INLINE_DECL guint next_position_ () const noexcept;

//  Scanner::next_position (::GScanner* obj, guint _value);
// void Scanner::next_position (::GScanner* obj, guint _value);
GI_INLINE_DECL void next_position_ (guint _value) noexcept;

// guint g_scanner_cur_line (GScanner* scanner);
// guint g_scanner_cur_line (::GScanner* scanner);
GI_INLINE_DECL guint cur_line () noexcept;

// guint g_scanner_cur_position (GScanner* scanner);
// guint g_scanner_cur_position (::GScanner* scanner);
GI_INLINE_DECL guint cur_position () noexcept;

// GTokenType g_scanner_cur_token (GScanner* scanner);
// ::GTokenType g_scanner_cur_token (::GScanner* scanner);
GI_INLINE_DECL GLib::TokenType cur_token () noexcept;

// FAILURE on g_scanner_cur_value; No such node (<xmlattr>.transfer-ownership)
// void g_scanner_destroy (GScanner* scanner);
// void g_scanner_destroy (::GScanner* scanner);
GI_INLINE_DECL void destroy () noexcept;

// gboolean g_scanner_eof (GScanner* scanner);
// gboolean g_scanner_eof (::GScanner* scanner);
GI_INLINE_DECL bool eof () noexcept;

// void g_scanner_error (GScanner* scanner, const gchar* format);
// void g_scanner_error (::GScanner* scanner, const char* format);
// IGNORE; not introspectable, varargs not supported

// GTokenType g_scanner_get_next_token (GScanner* scanner);
// ::GTokenType g_scanner_get_next_token (::GScanner* scanner);
GI_INLINE_DECL GLib::TokenType get_next_token () noexcept;

// void g_scanner_input_file (GScanner* scanner, gint input_fd);
// void g_scanner_input_file (::GScanner* scanner, gint input_fd);
GI_INLINE_DECL void input_file (gint input_fd) noexcept;

// void g_scanner_input_text (GScanner* scanner, const gchar* text, guint text_len);
// void g_scanner_input_text (::GScanner* scanner, const char* text, guint text_len);
GI_INLINE_DECL void input_text (const std::string & text, guint text_len) noexcept;

// gpointer g_scanner_lookup_symbol (GScanner* scanner, const gchar* symbol);
// void* g_scanner_lookup_symbol (::GScanner* scanner, const char* symbol);
GI_INLINE_DECL gpointer lookup_symbol (const std::string & symbol) noexcept;

// GTokenType g_scanner_peek_next_token (GScanner* scanner);
// ::GTokenType g_scanner_peek_next_token (::GScanner* scanner);
GI_INLINE_DECL GLib::TokenType peek_next_token () noexcept;

// void g_scanner_scope_add_symbol (GScanner* scanner, guint scope_id, const gchar* symbol, gpointer value);
// void g_scanner_scope_add_symbol (::GScanner* scanner, guint scope_id, const char* symbol, void* value);
GI_INLINE_DECL void scope_add_symbol (guint scope_id, const std::string & symbol, void* value) noexcept;

// void g_scanner_scope_foreach_symbol (GScanner* scanner, guint scope_id, GHFunc func, gpointer user_data);
// void g_scanner_scope_foreach_symbol (::GScanner* scanner, guint scope_id, GLib::HFunc::cfunction_type func, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// gpointer g_scanner_scope_lookup_symbol (GScanner* scanner, guint scope_id, const gchar* symbol);
// void* g_scanner_scope_lookup_symbol (::GScanner* scanner, guint scope_id, const char* symbol);
GI_INLINE_DECL gpointer scope_lookup_symbol (guint scope_id, const std::string & symbol) noexcept;

// void g_scanner_scope_remove_symbol (GScanner* scanner, guint scope_id, const gchar* symbol);
// void g_scanner_scope_remove_symbol (::GScanner* scanner, guint scope_id, const char* symbol);
GI_INLINE_DECL void scope_remove_symbol (guint scope_id, const std::string & symbol) noexcept;

// guint g_scanner_set_scope (GScanner* scanner, guint scope_id);
// guint g_scanner_set_scope (::GScanner* scanner, guint scope_id);
GI_INLINE_DECL guint set_scope (guint scope_id) noexcept;

// void g_scanner_sync_file_offset (GScanner* scanner);
// void g_scanner_sync_file_offset (::GScanner* scanner);
GI_INLINE_DECL void sync_file_offset () noexcept;

// void g_scanner_unexp_token (GScanner* scanner, GTokenType expected_token, const gchar* identifier_spec, const gchar* symbol_spec, const gchar* symbol_name, const gchar* message, gint is_error);
// void g_scanner_unexp_token (::GScanner* scanner, ::GTokenType expected_token, const char* identifier_spec, const char* symbol_spec, const char* symbol_name, const char* message, gint is_error);
GI_INLINE_DECL void unexp_token (GLib::TokenType expected_token, const std::string & identifier_spec, const std::string & symbol_spec, const std::string & symbol_name, const std::string & message, gint is_error) noexcept;

// void g_scanner_warn (GScanner* scanner, const gchar* format);
// void g_scanner_warn (::GScanner* scanner, const char* format);
// IGNORE; not introspectable, varargs not supported

// FAILURE on g_scanner_new; No such node (<xmlattr>.transfer-ownership)
}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/scanner_extra_def.hpp>)
#include <glib/scanner_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/scanner_extra.hpp>)
#include <glib/scanner_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Scanner : public GI_GLIB_SCANNER_BASE
{ typedef GI_GLIB_SCANNER_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GScanner>
{ typedef GLib::Scanner type; }; 

} // namespace repository

} // namespace gi

#endif
