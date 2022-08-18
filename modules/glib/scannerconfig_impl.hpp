// AUTO-GENERATED

#ifndef _GI_GLIB_SCANNERCONFIG_IMPL_HPP_
#define _GI_GLIB_SCANNERCONFIG_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static char* _field_cset_skip_characters_get (const ::GScannerConfig* obj) { return (char*) obj->cset_skip_characters; }
// char* ScannerConfig::cset_skip_characters (const ::GScannerConfig* obj);
// char* ScannerConfig::cset_skip_characters (const ::GScannerConfig* obj);
std::string base::ScannerConfigBase::cset_skip_characters_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_cset_skip_characters_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_cset_identifier_first_get (const ::GScannerConfig* obj) { return (char*) obj->cset_identifier_first; }
// char* ScannerConfig::cset_identifier_first (const ::GScannerConfig* obj);
// char* ScannerConfig::cset_identifier_first (const ::GScannerConfig* obj);
std::string base::ScannerConfigBase::cset_identifier_first_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_cset_identifier_first_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_cset_identifier_nth_get (const ::GScannerConfig* obj) { return (char*) obj->cset_identifier_nth; }
// char* ScannerConfig::cset_identifier_nth (const ::GScannerConfig* obj);
// char* ScannerConfig::cset_identifier_nth (const ::GScannerConfig* obj);
std::string base::ScannerConfigBase::cset_identifier_nth_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_cset_identifier_nth_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_cpair_comment_single_get (const ::GScannerConfig* obj) { return (char*) obj->cpair_comment_single; }
// char* ScannerConfig::cpair_comment_single (const ::GScannerConfig* obj);
// char* ScannerConfig::cpair_comment_single (const ::GScannerConfig* obj);
std::string base::ScannerConfigBase::cpair_comment_single_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_cpair_comment_single_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint _field_case_sensitive_get (const ::GScannerConfig* obj) { return (guint) obj->case_sensitive; }
// guint ScannerConfig::case_sensitive (const ::GScannerConfig* obj);
// guint ScannerConfig::case_sensitive (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::case_sensitive_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_case_sensitive_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_case_sensitive_set (::GScannerConfig* obj, guint _value) { obj->case_sensitive = (decltype(obj->case_sensitive)) _value; }
//  ScannerConfig::case_sensitive (::GScannerConfig* obj, guint _value);
// void ScannerConfig::case_sensitive (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::case_sensitive_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_case_sensitive_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_skip_comment_multi_get (const ::GScannerConfig* obj) { return (guint) obj->skip_comment_multi; }
// guint ScannerConfig::skip_comment_multi (const ::GScannerConfig* obj);
// guint ScannerConfig::skip_comment_multi (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::skip_comment_multi_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_skip_comment_multi_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_skip_comment_multi_set (::GScannerConfig* obj, guint _value) { obj->skip_comment_multi = (decltype(obj->skip_comment_multi)) _value; }
//  ScannerConfig::skip_comment_multi (::GScannerConfig* obj, guint _value);
// void ScannerConfig::skip_comment_multi (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::skip_comment_multi_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_skip_comment_multi_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_skip_comment_single_get (const ::GScannerConfig* obj) { return (guint) obj->skip_comment_single; }
// guint ScannerConfig::skip_comment_single (const ::GScannerConfig* obj);
// guint ScannerConfig::skip_comment_single (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::skip_comment_single_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_skip_comment_single_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_skip_comment_single_set (::GScannerConfig* obj, guint _value) { obj->skip_comment_single = (decltype(obj->skip_comment_single)) _value; }
//  ScannerConfig::skip_comment_single (::GScannerConfig* obj, guint _value);
// void ScannerConfig::skip_comment_single (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::skip_comment_single_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_skip_comment_single_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_comment_multi_get (const ::GScannerConfig* obj) { return (guint) obj->scan_comment_multi; }
// guint ScannerConfig::scan_comment_multi (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_comment_multi (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_comment_multi_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_comment_multi_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_comment_multi_set (::GScannerConfig* obj, guint _value) { obj->scan_comment_multi = (decltype(obj->scan_comment_multi)) _value; }
//  ScannerConfig::scan_comment_multi (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_comment_multi (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_comment_multi_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_comment_multi_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_identifier_get (const ::GScannerConfig* obj) { return (guint) obj->scan_identifier; }
// guint ScannerConfig::scan_identifier (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_identifier (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_identifier_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_identifier_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_identifier_set (::GScannerConfig* obj, guint _value) { obj->scan_identifier = (decltype(obj->scan_identifier)) _value; }
//  ScannerConfig::scan_identifier (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_identifier (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_identifier_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_identifier_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_identifier_1char_get (const ::GScannerConfig* obj) { return (guint) obj->scan_identifier_1char; }
// guint ScannerConfig::scan_identifier_1char (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_identifier_1char (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_identifier_1char_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_identifier_1char_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_identifier_1char_set (::GScannerConfig* obj, guint _value) { obj->scan_identifier_1char = (decltype(obj->scan_identifier_1char)) _value; }
//  ScannerConfig::scan_identifier_1char (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_identifier_1char (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_identifier_1char_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_identifier_1char_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_identifier_NULL_get (const ::GScannerConfig* obj) { return (guint) obj->scan_identifier_NULL; }
// guint ScannerConfig::scan_identifier_NULL (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_identifier_NULL (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_identifier_NULL_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_identifier_NULL_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_identifier_NULL_set (::GScannerConfig* obj, guint _value) { obj->scan_identifier_NULL = (decltype(obj->scan_identifier_NULL)) _value; }
//  ScannerConfig::scan_identifier_NULL (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_identifier_NULL (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_identifier_NULL_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_identifier_NULL_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_symbols_get (const ::GScannerConfig* obj) { return (guint) obj->scan_symbols; }
// guint ScannerConfig::scan_symbols (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_symbols (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_symbols_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_symbols_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_symbols_set (::GScannerConfig* obj, guint _value) { obj->scan_symbols = (decltype(obj->scan_symbols)) _value; }
//  ScannerConfig::scan_symbols (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_symbols (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_symbols_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_symbols_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_binary_get (const ::GScannerConfig* obj) { return (guint) obj->scan_binary; }
// guint ScannerConfig::scan_binary (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_binary (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_binary_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_binary_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_binary_set (::GScannerConfig* obj, guint _value) { obj->scan_binary = (decltype(obj->scan_binary)) _value; }
//  ScannerConfig::scan_binary (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_binary (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_binary_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_binary_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_octal_get (const ::GScannerConfig* obj) { return (guint) obj->scan_octal; }
// guint ScannerConfig::scan_octal (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_octal (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_octal_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_octal_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_octal_set (::GScannerConfig* obj, guint _value) { obj->scan_octal = (decltype(obj->scan_octal)) _value; }
//  ScannerConfig::scan_octal (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_octal (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_octal_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_octal_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_float_get (const ::GScannerConfig* obj) { return (guint) obj->scan_float; }
// guint ScannerConfig::scan_float (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_float (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_float_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_float_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_float_set (::GScannerConfig* obj, guint _value) { obj->scan_float = (decltype(obj->scan_float)) _value; }
//  ScannerConfig::scan_float (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_float (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_float_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_float_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_hex_get (const ::GScannerConfig* obj) { return (guint) obj->scan_hex; }
// guint ScannerConfig::scan_hex (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_hex (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_hex_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_hex_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_hex_set (::GScannerConfig* obj, guint _value) { obj->scan_hex = (decltype(obj->scan_hex)) _value; }
//  ScannerConfig::scan_hex (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_hex (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_hex_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_hex_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_hex_dollar_get (const ::GScannerConfig* obj) { return (guint) obj->scan_hex_dollar; }
// guint ScannerConfig::scan_hex_dollar (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_hex_dollar (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_hex_dollar_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_hex_dollar_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_hex_dollar_set (::GScannerConfig* obj, guint _value) { obj->scan_hex_dollar = (decltype(obj->scan_hex_dollar)) _value; }
//  ScannerConfig::scan_hex_dollar (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_hex_dollar (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_hex_dollar_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_hex_dollar_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_string_sq_get (const ::GScannerConfig* obj) { return (guint) obj->scan_string_sq; }
// guint ScannerConfig::scan_string_sq (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_string_sq (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_string_sq_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_string_sq_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_string_sq_set (::GScannerConfig* obj, guint _value) { obj->scan_string_sq = (decltype(obj->scan_string_sq)) _value; }
//  ScannerConfig::scan_string_sq (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_string_sq (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_string_sq_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_string_sq_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scan_string_dq_get (const ::GScannerConfig* obj) { return (guint) obj->scan_string_dq; }
// guint ScannerConfig::scan_string_dq (const ::GScannerConfig* obj);
// guint ScannerConfig::scan_string_dq (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scan_string_dq_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_string_dq_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scan_string_dq_set (::GScannerConfig* obj, guint _value) { obj->scan_string_dq = (decltype(obj->scan_string_dq)) _value; }
//  ScannerConfig::scan_string_dq (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scan_string_dq (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scan_string_dq_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scan_string_dq_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_numbers_2_int_get (const ::GScannerConfig* obj) { return (guint) obj->numbers_2_int; }
// guint ScannerConfig::numbers_2_int (const ::GScannerConfig* obj);
// guint ScannerConfig::numbers_2_int (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::numbers_2_int_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_numbers_2_int_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_numbers_2_int_set (::GScannerConfig* obj, guint _value) { obj->numbers_2_int = (decltype(obj->numbers_2_int)) _value; }
//  ScannerConfig::numbers_2_int (::GScannerConfig* obj, guint _value);
// void ScannerConfig::numbers_2_int (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::numbers_2_int_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_numbers_2_int_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_int_2_float_get (const ::GScannerConfig* obj) { return (guint) obj->int_2_float; }
// guint ScannerConfig::int_2_float (const ::GScannerConfig* obj);
// guint ScannerConfig::int_2_float (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::int_2_float_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_int_2_float_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_int_2_float_set (::GScannerConfig* obj, guint _value) { obj->int_2_float = (decltype(obj->int_2_float)) _value; }
//  ScannerConfig::int_2_float (::GScannerConfig* obj, guint _value);
// void ScannerConfig::int_2_float (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::int_2_float_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_int_2_float_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_identifier_2_string_get (const ::GScannerConfig* obj) { return (guint) obj->identifier_2_string; }
// guint ScannerConfig::identifier_2_string (const ::GScannerConfig* obj);
// guint ScannerConfig::identifier_2_string (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::identifier_2_string_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_identifier_2_string_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_identifier_2_string_set (::GScannerConfig* obj, guint _value) { obj->identifier_2_string = (decltype(obj->identifier_2_string)) _value; }
//  ScannerConfig::identifier_2_string (::GScannerConfig* obj, guint _value);
// void ScannerConfig::identifier_2_string (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::identifier_2_string_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_identifier_2_string_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_char_2_token_get (const ::GScannerConfig* obj) { return (guint) obj->char_2_token; }
// guint ScannerConfig::char_2_token (const ::GScannerConfig* obj);
// guint ScannerConfig::char_2_token (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::char_2_token_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_char_2_token_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_char_2_token_set (::GScannerConfig* obj, guint _value) { obj->char_2_token = (decltype(obj->char_2_token)) _value; }
//  ScannerConfig::char_2_token (::GScannerConfig* obj, guint _value);
// void ScannerConfig::char_2_token (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::char_2_token_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_char_2_token_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_symbol_2_token_get (const ::GScannerConfig* obj) { return (guint) obj->symbol_2_token; }
// guint ScannerConfig::symbol_2_token (const ::GScannerConfig* obj);
// guint ScannerConfig::symbol_2_token (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::symbol_2_token_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_symbol_2_token_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_symbol_2_token_set (::GScannerConfig* obj, guint _value) { obj->symbol_2_token = (decltype(obj->symbol_2_token)) _value; }
//  ScannerConfig::symbol_2_token (::GScannerConfig* obj, guint _value);
// void ScannerConfig::symbol_2_token (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::symbol_2_token_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_symbol_2_token_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_scope_0_fallback_get (const ::GScannerConfig* obj) { return (guint) obj->scope_0_fallback; }
// guint ScannerConfig::scope_0_fallback (const ::GScannerConfig* obj);
// guint ScannerConfig::scope_0_fallback (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::scope_0_fallback_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scope_0_fallback_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_scope_0_fallback_set (::GScannerConfig* obj, guint _value) { obj->scope_0_fallback = (decltype(obj->scope_0_fallback)) _value; }
//  ScannerConfig::scope_0_fallback (::GScannerConfig* obj, guint _value);
// void ScannerConfig::scope_0_fallback (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::scope_0_fallback_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scope_0_fallback_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_store_int64_get (const ::GScannerConfig* obj) { return (guint) obj->store_int64; }
// guint ScannerConfig::store_int64 (const ::GScannerConfig* obj);
// guint ScannerConfig::store_int64 (const ::GScannerConfig* obj);
guint base::ScannerConfigBase::store_int64_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GScannerConfig* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_store_int64_get;
  auto _temp_ret = call_wrap_v ((const ::GScannerConfig*) (gobj_()));
  return _temp_ret;
}

static void _field_store_int64_set (::GScannerConfig* obj, guint _value) { obj->store_int64 = (decltype(obj->store_int64)) _value; }
//  ScannerConfig::store_int64 (::GScannerConfig* obj, guint _value);
// void ScannerConfig::store_int64 (::GScannerConfig* obj, guint _value);
void base::ScannerConfigBase::store_int64_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GScannerConfig* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_store_int64_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GScannerConfig*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/scannerconfig_extra_def_impl.hpp>)
#include <glib/scannerconfig_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/scannerconfig_extra_impl.hpp>)
#include <glib/scannerconfig_extra_impl.hpp>
#endif
#endif

#endif
