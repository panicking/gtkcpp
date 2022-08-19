// AUTO-GENERATED

#ifndef _GI_SOUP_MESSAGEHEADERS_IMPL_HPP_
#define _GI_SOUP_MESSAGEHEADERS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupMessageHeaders* soup_message_headers_new (SoupMessageHeadersType type);
// ::SoupMessageHeaders* soup_message_headers_new (::SoupMessageHeadersType type);
Soup::MessageHeaders base::MessageHeadersBase::new_ (Soup::MessageHeadersType type) noexcept
{
  typedef ::SoupMessageHeaders* (*call_wrap_t) (::SoupMessageHeadersType type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_new;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::SoupMessageHeadersType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_message_headers_append (SoupMessageHeaders* hdrs, const char* name, const char* value);
// void soup_message_headers_append (::SoupMessageHeaders* hdrs, const char* name, const char* value);
void base::MessageHeadersBase::append (const std::string & name, const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, const char* name, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_append;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (const char*) (name_to_c), (const char*) (value_to_c));
}

// void soup_message_headers_clean_connection_headers (SoupMessageHeaders* hdrs);
// void soup_message_headers_clean_connection_headers (::SoupMessageHeaders* hdrs);
void base::MessageHeadersBase::clean_connection_headers () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_clean_connection_headers;
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()));
}

// void soup_message_headers_clear (SoupMessageHeaders* hdrs);
// void soup_message_headers_clear (::SoupMessageHeaders* hdrs);
void base::MessageHeadersBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_clear;
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()));
}

// void soup_message_headers_foreach (SoupMessageHeaders* hdrs, SoupMessageHeadersForeachFunc func, gpointer user_data);
// void soup_message_headers_foreach (::SoupMessageHeaders* hdrs, Soup::MessageHeadersForeachFunc::cfunction_type func, void* user_data);
void base::MessageHeadersBase::foreach (Soup::MessageHeadersForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, Soup::MessageHeadersForeachFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (Soup::MessageHeadersForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void soup_message_headers_free (SoupMessageHeaders* hdrs);
// void soup_message_headers_free (::SoupMessageHeaders* hdrs);
// IGNORE; marked ignore

// void soup_message_headers_free_ranges (SoupMessageHeaders* hdrs, SoupRange* ranges);
// void soup_message_headers_free_ranges (::SoupMessageHeaders* hdrs, ::SoupRange* ranges);
void base::MessageHeadersBase::free_ranges (Soup::Range ranges) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, ::SoupRange* ranges);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_free_ranges;
  auto ranges_to_c = gi::unwrap (ranges, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (::SoupRange*) (ranges_to_c));
}

// const char* soup_message_headers_get (SoupMessageHeaders* hdrs, const char* name);
// const char* soup_message_headers_get (::SoupMessageHeaders* hdrs, const char* name);
// IGNORE; deprecated

// gboolean soup_message_headers_get_content_disposition (SoupMessageHeaders* hdrs, char** disposition, GHashTable** params);
// gboolean soup_message_headers_get_content_disposition (::SoupMessageHeaders* hdrs, char** disposition, ::GHashTable** params);
bool base::MessageHeadersBase::get_content_disposition (std::string & disposition, std::map<std::string, std::string> & params) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessageHeaders* hdrs, char** disposition, ::GHashTable** params);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_content_disposition;
  ::GHashTable* params_o {};
  char* disposition_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (char**) (&disposition_o), (::GHashTable**) (&params_o));
  params = gi::detail::wrap_map<std::string, std::string> (params_o, gi::transfer_full);
  disposition = gi::wrap (disposition_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, std::map<std::string, std::string>> base::MessageHeadersBase::get_content_disposition () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessageHeaders* hdrs, char** disposition, ::GHashTable** params);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_content_disposition;
  ::GHashTable* params_o {};
  char* disposition_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (char**) (&disposition_o), (::GHashTable**) (&params_o));
  return std::make_tuple (_temp_ret, gi::wrap (disposition_o, gi::transfer_full, gi::direction_out), gi::detail::wrap_map<std::string, std::string> (params_o, gi::transfer_full));
}

// goffset soup_message_headers_get_content_length (SoupMessageHeaders* hdrs);
// gint64 soup_message_headers_get_content_length (::SoupMessageHeaders* hdrs);
gint64 base::MessageHeadersBase::get_content_length () noexcept
{
  typedef gint64 (*call_wrap_t) (::SoupMessageHeaders* hdrs);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_content_length;
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()));
  return _temp_ret;
}

// gboolean soup_message_headers_get_content_range (SoupMessageHeaders* hdrs, goffset* start, goffset* end, goffset* total_length);
// gboolean soup_message_headers_get_content_range (::SoupMessageHeaders* hdrs, gint64* start, gint64* end, gint64* total_length);
bool base::MessageHeadersBase::get_content_range (gint64 & start, gint64 & end, gint64 * total_length) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessageHeaders* hdrs, gint64* start, gint64* end, gint64* total_length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_content_range;
  gint64 total_length_o {};
  gint64 end_o {};
  gint64 start_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (gint64*) (&start_o), (gint64*) (&end_o), (gint64*) (total_length ? &total_length_o : nullptr));
  if (total_length) *total_length = total_length_o;
  end = end_o;
  start = start_o;
  return _temp_ret;
}
std::tuple<bool, gint64, gint64, gint64> base::MessageHeadersBase::get_content_range () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessageHeaders* hdrs, gint64* start, gint64* end, gint64* total_length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_content_range;
  gint64 total_length_o {};
  gint64 end_o {};
  gint64 start_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (gint64*) (&start_o), (gint64*) (&end_o), (gint64*) (&total_length_o));
  return std::make_tuple (_temp_ret, start_o, end_o, total_length_o);
}

// const char* soup_message_headers_get_content_type (SoupMessageHeaders* hdrs, GHashTable** params);
// const char* soup_message_headers_get_content_type (::SoupMessageHeaders* hdrs, ::GHashTable** params);
std::string base::MessageHeadersBase::get_content_type (std::map<std::string, std::string> * params) noexcept
{
  typedef const char* (*call_wrap_t) (::SoupMessageHeaders* hdrs, ::GHashTable** params);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_content_type;
  ::GHashTable* params_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (::GHashTable**) (params ? &params_o : nullptr));
  if (params) *params = gi::detail::wrap_map<std::string, std::string> (params_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::tuple<std::string, std::map<std::string, std::string>> base::MessageHeadersBase::get_content_type () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupMessageHeaders* hdrs, ::GHashTable** params);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_content_type;
  ::GHashTable* params_o {};
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (::GHashTable**) (&params_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out), gi::detail::wrap_map<std::string, std::string> (params_o, gi::transfer_full));
}

// SoupEncoding soup_message_headers_get_encoding (SoupMessageHeaders* hdrs);
// ::SoupEncoding soup_message_headers_get_encoding (::SoupMessageHeaders* hdrs);
Soup::Encoding base::MessageHeadersBase::get_encoding () noexcept
{
  typedef ::SoupEncoding (*call_wrap_t) (::SoupMessageHeaders* hdrs);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_encoding;
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// SoupExpectation soup_message_headers_get_expectations (SoupMessageHeaders* hdrs);
// ::SoupExpectation soup_message_headers_get_expectations (::SoupMessageHeaders* hdrs);
Soup::Expectation base::MessageHeadersBase::get_expectations () noexcept
{
  typedef ::SoupExpectation (*call_wrap_t) (::SoupMessageHeaders* hdrs);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_expectations;
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// SoupMessageHeadersType soup_message_headers_get_headers_type (SoupMessageHeaders* hdrs);
// ::SoupMessageHeadersType soup_message_headers_get_headers_type (::SoupMessageHeaders* hdrs);
Soup::MessageHeadersType base::MessageHeadersBase::get_headers_type () noexcept
{
  typedef ::SoupMessageHeadersType (*call_wrap_t) (::SoupMessageHeaders* hdrs);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_headers_type;
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* soup_message_headers_get_list (SoupMessageHeaders* hdrs, const char* name);
// const char* soup_message_headers_get_list (::SoupMessageHeaders* hdrs, const char* name);
std::string base::MessageHeadersBase::get_list (const std::string & name) noexcept
{
  typedef const char* (*call_wrap_t) (::SoupMessageHeaders* hdrs, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_list;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_message_headers_get_one (SoupMessageHeaders* hdrs, const char* name);
// const char* soup_message_headers_get_one (::SoupMessageHeaders* hdrs, const char* name);
std::string base::MessageHeadersBase::get_one (const std::string & name) noexcept
{
  typedef const char* (*call_wrap_t) (::SoupMessageHeaders* hdrs, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_get_one;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean soup_message_headers_get_ranges (SoupMessageHeaders* hdrs, goffset total_length, SoupRange** ranges, int* length);
// gboolean soup_message_headers_get_ranges (::SoupMessageHeaders* hdrs, gint64 total_length, ::SoupRange*** ranges, gint* length);
// SKIP; inconsistent out ranges pointer depth (2 vs 3)

// gboolean soup_message_headers_header_contains (SoupMessageHeaders* hdrs, const char* name, const char* token);
// gboolean soup_message_headers_header_contains (::SoupMessageHeaders* hdrs, const char* name, const char* token);
bool base::MessageHeadersBase::header_contains (const std::string & name, const std::string & token) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessageHeaders* hdrs, const char* name, const char* token);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_header_contains;
  auto token_to_c = gi::unwrap (token, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (const char*) (name_to_c), (const char*) (token_to_c));
  return _temp_ret;
}

// gboolean soup_message_headers_header_equals (SoupMessageHeaders* hdrs, const char* name, const char* value);
// gboolean soup_message_headers_header_equals (::SoupMessageHeaders* hdrs, const char* name, const char* value);
bool base::MessageHeadersBase::header_equals (const std::string & name, const std::string & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessageHeaders* hdrs, const char* name, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_header_equals;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (const char*) (name_to_c), (const char*) (value_to_c));
  return _temp_ret;
}

// void soup_message_headers_remove (SoupMessageHeaders* hdrs, const char* name);
// void soup_message_headers_remove (::SoupMessageHeaders* hdrs, const char* name);
void base::MessageHeadersBase::remove (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_remove;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (const char*) (name_to_c));
}

// void soup_message_headers_replace (SoupMessageHeaders* hdrs, const char* name, const char* value);
// void soup_message_headers_replace (::SoupMessageHeaders* hdrs, const char* name, const char* value);
void base::MessageHeadersBase::replace (const std::string & name, const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, const char* name, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_replace;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (const char*) (name_to_c), (const char*) (value_to_c));
}

// void soup_message_headers_set_content_disposition (SoupMessageHeaders* hdrs, const char* disposition, GHashTable* params);
// void soup_message_headers_set_content_disposition (::SoupMessageHeaders* hdrs, const char* disposition, ::GHashTable* params);
void base::MessageHeadersBase::set_content_disposition (const std::string & disposition, const std::map<std::string, std::string> & params) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, const char* disposition, ::GHashTable* params);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_set_content_disposition;
  auto & params_i = params;
  auto params_w = unwrap (params_i, gi::transfer_none, direction_in);
  auto params_to_c = params_w.gobj_(false);
  auto disposition_to_c = gi::unwrap (disposition, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (const char*) (disposition_to_c), (::GHashTable*) (params_to_c));
}

// void soup_message_headers_set_content_length (SoupMessageHeaders* hdrs, goffset content_length);
// void soup_message_headers_set_content_length (::SoupMessageHeaders* hdrs, gint64 content_length);
void base::MessageHeadersBase::set_content_length (gint64 content_length) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, gint64 content_length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_set_content_length;
  auto content_length_to_c = content_length;
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (gint64) (content_length_to_c));
}

// void soup_message_headers_set_content_range (SoupMessageHeaders* hdrs, goffset start, goffset end, goffset total_length);
// void soup_message_headers_set_content_range (::SoupMessageHeaders* hdrs, gint64 start, gint64 end, gint64 total_length);
void base::MessageHeadersBase::set_content_range (gint64 start, gint64 end, gint64 total_length) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, gint64 start, gint64 end, gint64 total_length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_set_content_range;
  auto total_length_to_c = total_length;
  auto end_to_c = end;
  auto start_to_c = start;
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (gint64) (start_to_c), (gint64) (end_to_c), (gint64) (total_length_to_c));
}

// void soup_message_headers_set_content_type (SoupMessageHeaders* hdrs, const char* content_type, GHashTable* params);
// void soup_message_headers_set_content_type (::SoupMessageHeaders* hdrs, const char* content_type, ::GHashTable* params);
void base::MessageHeadersBase::set_content_type (const std::string & content_type, const std::map<std::string, std::string> & params) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, const char* content_type, ::GHashTable* params);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_set_content_type;
  auto & params_i = params;
  auto params_w = unwrap (params_i, gi::transfer_none, direction_in);
  auto params_to_c = params_w.gobj_(false);
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (const char*) (content_type_to_c), (::GHashTable*) (params_to_c));
}

// void soup_message_headers_set_encoding (SoupMessageHeaders* hdrs, SoupEncoding encoding);
// void soup_message_headers_set_encoding (::SoupMessageHeaders* hdrs, ::SoupEncoding encoding);
void base::MessageHeadersBase::set_encoding (Soup::Encoding encoding) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, ::SoupEncoding encoding);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_set_encoding;
  auto encoding_to_c = gi::unwrap (encoding);
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (::SoupEncoding) (encoding_to_c));
}

// void soup_message_headers_set_expectations (SoupMessageHeaders* hdrs, SoupExpectation expectations);
// void soup_message_headers_set_expectations (::SoupMessageHeaders* hdrs, ::SoupExpectation expectations);
void base::MessageHeadersBase::set_expectations (Soup::Expectation expectations) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, ::SoupExpectation expectations);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_set_expectations;
  auto expectations_to_c = gi::unwrap (expectations);
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (::SoupExpectation) (expectations_to_c));
}

// void soup_message_headers_set_range (SoupMessageHeaders* hdrs, goffset start, goffset end);
// void soup_message_headers_set_range (::SoupMessageHeaders* hdrs, gint64 start, gint64 end);
void base::MessageHeadersBase::set_range (gint64 start, gint64 end) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, gint64 start, gint64 end);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_set_range;
  auto end_to_c = end;
  auto start_to_c = start;
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (gint64) (start_to_c), (gint64) (end_to_c));
}

// void soup_message_headers_set_ranges (SoupMessageHeaders* hdrs, SoupRange* ranges, int length);
// void soup_message_headers_set_ranges (::SoupMessageHeaders* hdrs, ::SoupRange* ranges, gint length);
void base::MessageHeadersBase::set_ranges (Soup::Range ranges, gint length) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageHeaders* hdrs, ::SoupRange* ranges, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_headers_set_ranges;
  auto length_to_c = length;
  auto ranges_to_c = gi::unwrap (ranges, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessageHeaders*) (gobj_()), (::SoupRange*) (ranges_to_c), (gint) (length_to_c));
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/messageheaders_extra_def_impl.hpp>)
#include <soup/messageheaders_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/messageheaders_extra_impl.hpp>)
#include <soup/messageheaders_extra_impl.hpp>
#endif
#endif

#endif
