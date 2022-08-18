// AUTO-GENERATED

#ifndef _GI_GLIB__FUNCTIONS_IMPL_HPP_
#define _GI_GLIB__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

// int g_access (const gchar* filename, int mode);
// gint g_access (const char* filename, gint mode);
gint access (const std::string & filename, gint mode) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) g_access;
  auto mode_to_c = mode;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gint) (mode_to_c));
  return _temp_ret;
}

// gpointer g_aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment);
// void* g_aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment);
gpointer aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes, gsize alignment);
  call_wrap_t call_wrap_v = (call_wrap_t) g_aligned_alloc;
  auto alignment_to_c = alignment;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c), (gsize) (alignment_to_c));
  return _temp_ret;
}

// gpointer g_aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment);
// void* g_aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment);
gpointer aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes, gsize alignment);
  call_wrap_t call_wrap_v = (call_wrap_t) g_aligned_alloc0;
  auto alignment_to_c = alignment;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c), (gsize) (alignment_to_c));
  return _temp_ret;
}

// gint g_ascii_digit_value (gchar c);
// gint g_ascii_digit_value (gchar c);
gint ascii_digit_value (gchar c) noexcept
{
  typedef gint (*call_wrap_t) (gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_digit_value;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gchar) (c_to_c));
  return _temp_ret;
}

// gchar* g_ascii_dtostr (gchar* buffer, gint buf_len, gdouble d);
// char* g_ascii_dtostr (char* buffer, gint buf_len, gdouble d);
std::string ascii_dtostr (const std::string & buffer, gint buf_len, gdouble d) noexcept
{
  typedef char* (*call_wrap_t) (char* buffer, gint buf_len, gdouble d);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_dtostr;
  auto d_to_c = d;
  auto buf_len_to_c = buf_len;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (buffer_to_c), (gint) (buf_len_to_c), (gdouble) (d_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_ascii_formatd (gchar* buffer, gint buf_len, const gchar* format, gdouble d);
// char* g_ascii_formatd (char* buffer, gint buf_len, const char* format, gdouble d);
std::string ascii_formatd (const std::string & buffer, gint buf_len, const std::string & format, gdouble d) noexcept
{
  typedef char* (*call_wrap_t) (char* buffer, gint buf_len, const char* format, gdouble d);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_formatd;
  auto d_to_c = d;
  auto format_to_c = gi::unwrap (format, gi::transfer_none, gi::direction_in);
  auto buf_len_to_c = buf_len;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (buffer_to_c), (gint) (buf_len_to_c), (const char*) (format_to_c), (gdouble) (d_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint g_ascii_strcasecmp (const gchar* s1, const gchar* s2);
// gint g_ascii_strcasecmp (const char* s1, const char* s2);
gint ascii_strcasecmp (const std::string & s1, const std::string & s2) noexcept
{
  typedef gint (*call_wrap_t) (const char* s1, const char* s2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_strcasecmp;
  auto s2_to_c = gi::unwrap (s2, gi::transfer_none, gi::direction_in);
  auto s1_to_c = gi::unwrap (s1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (s1_to_c), (const char*) (s2_to_c));
  return _temp_ret;
}

// gchar* g_ascii_strdown (const gchar* str, gssize len);
// char* g_ascii_strdown (const char* str, gssize len);
std::string ascii_strdown (const std::string & str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_strdown;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_ascii_string_to_signed (const gchar* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
// gboolean g_ascii_string_to_signed (const char* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
bool ascii_string_to_signed (const std::string & str, guint base, gint64 min, gint64 max, gint64 * out_num)
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_string_to_signed;
  gint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (gint64) (min_to_c), (gint64) (max_to_c), (gint64*) (out_num ? &out_num_o : nullptr), &error);
  if (out_num) *out_num = out_num_o;
  gi::check_error (error);
  return _temp_ret;
}
bool ascii_string_to_signed (const std::string & str, guint base, gint64 min, gint64 max, gint64 * out_num, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_string_to_signed;
  gint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (gint64) (min_to_c), (gint64) (max_to_c), (gint64*) (out_num ? &out_num_o : nullptr), _error ? &_error_o : nullptr);
  if (out_num) *out_num = out_num_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, gint64> ascii_string_to_signed (const std::string & str, guint base, gint64 min, gint64 max)
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_string_to_signed;
  gint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (gint64) (min_to_c), (gint64) (max_to_c), (gint64*) (&out_num_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, out_num_o);
}
std::tuple<bool, gint64> ascii_string_to_signed (const std::string & str, guint base, gint64 min, gint64 max, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_string_to_signed;
  gint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (gint64) (min_to_c), (gint64) (max_to_c), (gint64*) (&out_num_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, out_num_o);
}

// gboolean g_ascii_string_to_unsigned (const gchar* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
// gboolean g_ascii_string_to_unsigned (const char* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
bool ascii_string_to_unsigned (const std::string & str, guint base, guint64 min, guint64 max, guint64 * out_num)
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_string_to_unsigned;
  guint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (guint64) (min_to_c), (guint64) (max_to_c), (guint64*) (out_num ? &out_num_o : nullptr), &error);
  if (out_num) *out_num = out_num_o;
  gi::check_error (error);
  return _temp_ret;
}
bool ascii_string_to_unsigned (const std::string & str, guint base, guint64 min, guint64 max, guint64 * out_num, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_string_to_unsigned;
  guint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (guint64) (min_to_c), (guint64) (max_to_c), (guint64*) (out_num ? &out_num_o : nullptr), _error ? &_error_o : nullptr);
  if (out_num) *out_num = out_num_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, guint64> ascii_string_to_unsigned (const std::string & str, guint base, guint64 min, guint64 max)
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_string_to_unsigned;
  guint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (guint64) (min_to_c), (guint64) (max_to_c), (guint64*) (&out_num_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, out_num_o);
}
std::tuple<bool, guint64> ascii_string_to_unsigned (const std::string & str, guint base, guint64 min, guint64 max, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_string_to_unsigned;
  guint64 out_num_o {};
  auto max_to_c = max;
  auto min_to_c = min;
  auto base_to_c = base;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (guint) (base_to_c), (guint64) (min_to_c), (guint64) (max_to_c), (guint64*) (&out_num_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, out_num_o);
}

// gint g_ascii_strncasecmp (const gchar* s1, const gchar* s2, gsize n);
// gint g_ascii_strncasecmp (const char* s1, const char* s2, gsize n);
gint ascii_strncasecmp (const std::string & s1, const std::string & s2, gsize n) noexcept
{
  typedef gint (*call_wrap_t) (const char* s1, const char* s2, gsize n);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_strncasecmp;
  auto n_to_c = n;
  auto s2_to_c = gi::unwrap (s2, gi::transfer_none, gi::direction_in);
  auto s1_to_c = gi::unwrap (s1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (s1_to_c), (const char*) (s2_to_c), (gsize) (n_to_c));
  return _temp_ret;
}

// gdouble g_ascii_strtod (const gchar* nptr, gchar** endptr);
// gdouble g_ascii_strtod (const char* nptr, char** endptr);
gdouble ascii_strtod (const std::string & nptr, std::string * endptr) noexcept
{
  typedef gdouble (*call_wrap_t) (const char* nptr, char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_strtod;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (endptr ? &endptr_o : nullptr));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<gdouble, std::string> ascii_strtod (const std::string & nptr) noexcept
{
  typedef gdouble (*call_wrap_t) (const char* nptr, char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_strtod;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (&endptr_o));
  return std::make_tuple (_temp_ret, gi::wrap (endptr_o, gi::transfer_none, gi::direction_out));
}

// gint64 g_ascii_strtoll (const gchar* nptr, gchar** endptr, guint base);
// gint64 g_ascii_strtoll (const char* nptr, char** endptr, guint base);
gint64 ascii_strtoll (const std::string & nptr, std::string * endptr, guint base) noexcept
{
  typedef gint64 (*call_wrap_t) (const char* nptr, char** endptr, guint base);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_strtoll;
  auto base_to_c = base;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (endptr ? &endptr_o : nullptr), (guint) (base_to_c));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<gint64, std::string> ascii_strtoll (const std::string & nptr, guint base) noexcept
{
  typedef gint64 (*call_wrap_t) (const char* nptr, char** endptr, guint base);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_strtoll;
  auto base_to_c = base;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (&endptr_o), (guint) (base_to_c));
  return std::make_tuple (_temp_ret, gi::wrap (endptr_o, gi::transfer_none, gi::direction_out));
}

// guint64 g_ascii_strtoull (const gchar* nptr, gchar** endptr, guint base);
// guint64 g_ascii_strtoull (const char* nptr, char** endptr, guint base);
guint64 ascii_strtoull (const std::string & nptr, std::string * endptr, guint base) noexcept
{
  typedef guint64 (*call_wrap_t) (const char* nptr, char** endptr, guint base);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_strtoull;
  auto base_to_c = base;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (endptr ? &endptr_o : nullptr), (guint) (base_to_c));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<guint64, std::string> ascii_strtoull (const std::string & nptr, guint base) noexcept
{
  typedef guint64 (*call_wrap_t) (const char* nptr, char** endptr, guint base);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_strtoull;
  auto base_to_c = base;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (&endptr_o), (guint) (base_to_c));
  return std::make_tuple (_temp_ret, gi::wrap (endptr_o, gi::transfer_none, gi::direction_out));
}

// gchar* g_ascii_strup (const gchar* str, gssize len);
// char* g_ascii_strup (const char* str, gssize len);
std::string ascii_strup (const std::string & str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_strup;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar g_ascii_tolower (gchar c);
// gchar g_ascii_tolower (gchar c);
gchar ascii_tolower (gchar c) noexcept
{
  typedef gchar (*call_wrap_t) (gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_tolower;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gchar) (c_to_c));
  return _temp_ret;
}

// gchar g_ascii_toupper (gchar c);
// gchar g_ascii_toupper (gchar c);
gchar ascii_toupper (gchar c) noexcept
{
  typedef gchar (*call_wrap_t) (gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_toupper;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gchar) (c_to_c));
  return _temp_ret;
}

// gint g_ascii_xdigit_value (gchar c);
// gint g_ascii_xdigit_value (gchar c);
gint ascii_xdigit_value (gchar c) noexcept
{
  typedef gint (*call_wrap_t) (gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ascii_xdigit_value;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gchar) (c_to_c));
  return _temp_ret;
}

// void g_assert_warning (const char* log_domain, const char* file, const int line, const char* pretty_function, const char* expression);
// void g_assert_warning (const char* log_domain, const char* file, const gint line, const char* pretty_function, const char* expression);
// IGNORE; marked ignore

// void g_assertion_message (const char* domain, const char* file, int line, const char* func, const char* message);
// void g_assertion_message (const char* domain, const char* file, gint line, const char* func, const char* message);
void assertion_message (const std::string & domain, const std::string & file, gint line, const std::string & func, const std::string & message) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_assertion_message;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto func_to_c = gi::unwrap (func, gi::transfer_none, gi::direction_in);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (message_to_c));
}

// void g_assertion_message_cmpnum (const char* domain, const char* file, int line, const char* func, const char* expr, long double arg1, const char* cmp, long double arg2, char numtype);
// void g_assertion_message_cmpnum (const char* domain, const char* file, gint line, const char* func, const char* expr,  arg1, const char* cmp,  arg2, gchar numtype);
// IGNORE; not introspectable, arg2 type  not supported, arg1 type  not supported

// void g_assertion_message_cmpstr (const char* domain, const char* file, int line, const char* func, const char* expr, const char* arg1, const char* cmp, const char* arg2);
// void g_assertion_message_cmpstr (const char* domain, const char* file, gint line, const char* func, const char* expr, const char* arg1, const char* cmp, const char* arg2);
void assertion_message_cmpstr (const std::string & domain, const std::string & file, gint line, const std::string & func, const std::string & expr, const std::string & arg1, const std::string & cmp, const std::string & arg2) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* expr, const char* arg1, const char* cmp, const char* arg2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_assertion_message_cmpstr;
  auto arg2_to_c = gi::unwrap (arg2, gi::transfer_none, gi::direction_in);
  auto cmp_to_c = gi::unwrap (cmp, gi::transfer_none, gi::direction_in);
  auto arg1_to_c = gi::unwrap (arg1, gi::transfer_none, gi::direction_in);
  auto expr_to_c = gi::unwrap (expr, gi::transfer_none, gi::direction_in);
  auto func_to_c = gi::unwrap (func, gi::transfer_none, gi::direction_in);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (expr_to_c), (const char*) (arg1_to_c), (const char*) (cmp_to_c), (const char*) (arg2_to_c));
}

// void g_assertion_message_cmpstrv (const char* domain, const char* file, int line, const char* func, const char* expr, const char* const* arg1, const char* const* arg2, gsize first_wrong_idx);
// void g_assertion_message_cmpstrv (const char* domain, const char* file, gint line, const char* func, const char* expr, const char* arg1, const char* arg2, gsize first_wrong_idx);
// SKIP; inconsistent in arg2 pointer depth (2 vs 1), inconsistent in arg1 pointer depth (2 vs 1)

// void g_assertion_message_error (const char* domain, const char* file, int line, const char* func, const char* expr, const GError* error, GQuark error_domain, int error_code);
// void g_assertion_message_error (const char* domain, const char* file, gint line, const char* func, const char* expr, const ::GError* error, ::GQuark error_domain, gint error_code);
void assertion_message_error (const std::string & domain, const std::string & file, gint line, const std::string & func, const std::string & expr, const GLib::Error & error, ::GQuark error_domain, gint error_code) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* expr, const ::GError* error, ::GQuark error_domain, gint error_code);
  call_wrap_t call_wrap_v = (call_wrap_t) g_assertion_message_error;
  auto error_code_to_c = error_code;
  auto error_domain_to_c = error_domain;
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto expr_to_c = gi::unwrap (expr, gi::transfer_none, gi::direction_in);
  auto func_to_c = gi::unwrap (func, gi::transfer_none, gi::direction_in);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (expr_to_c), (const ::GError*) (error_to_c), (::GQuark) (error_domain_to_c), (gint) (error_code_to_c));
}

// void g_assertion_message_expr (const char* domain, const char* file, int line, const char* func, const char* expr);
// void g_assertion_message_expr (const char* domain, const char* file, gint line, const char* func, const char* expr);
void assertion_message_expr (const std::string & domain, const std::string & file, gint line, const std::string & func, const std::string & expr) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* expr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_assertion_message_expr;
  auto expr_to_c = gi::unwrap (expr, gi::transfer_none, gi::direction_in);
  auto func_to_c = gi::unwrap (func, gi::transfer_none, gi::direction_in);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (expr_to_c));
}
void assertion_message_expr (const std::string & file, gint line, const std::string & func) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* expr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_assertion_message_expr;
  auto expr_to_c = nullptr;
  auto func_to_c = gi::unwrap (func, gi::transfer_none, gi::direction_in);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto domain_to_c = nullptr;
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (expr_to_c));
}

// gint g_atomic_int_add (volatile gint* atomic, gint val);
// gint g_atomic_int_add (gint atomic, gint val);
// SKIP; inconsistent in atomic pointer depth (1 vs 0)

// guint g_atomic_int_and (volatile guint* atomic, guint val);
// guint g_atomic_int_and (guint atomic, guint val);
// SKIP; inconsistent in atomic pointer depth (1 vs 0)

// gboolean g_atomic_int_compare_and_exchange (volatile gint* atomic, gint oldval, gint newval);
// gboolean g_atomic_int_compare_and_exchange (gint atomic, gint oldval, gint newval);
// SKIP; inconsistent in atomic pointer depth (1 vs 0)

// gboolean g_atomic_int_dec_and_test (volatile gint* atomic);
// gboolean g_atomic_int_dec_and_test (gint atomic);
// SKIP; inconsistent in atomic pointer depth (1 vs 0)

// gint g_atomic_int_get (volatile const gint* atomic);
// gint g_atomic_int_get (const gint atomic);
// SKIP; inconsistent in atomic pointer depth (1 vs 0)

// void g_atomic_int_inc (volatile gint* atomic);
// void g_atomic_int_inc (gint atomic);
// SKIP; inconsistent in atomic pointer depth (1 vs 0)

// guint g_atomic_int_or (volatile guint* atomic, guint val);
// guint g_atomic_int_or (guint atomic, guint val);
// SKIP; inconsistent in atomic pointer depth (1 vs 0)

// void g_atomic_int_set (volatile gint* atomic, gint newval);
// void g_atomic_int_set (gint atomic, gint newval);
// SKIP; inconsistent in atomic pointer depth (1 vs 0)

// guint g_atomic_int_xor (volatile guint* atomic, guint val);
// guint g_atomic_int_xor (guint atomic, guint val);
// SKIP; inconsistent in atomic pointer depth (1 vs 0)

// gssize g_atomic_pointer_add (void* atomic, gssize val);
// gssize g_atomic_pointer_add (void* atomic, gssize val);
gssize atomic_pointer_add (void* atomic, gssize val) noexcept
{
  typedef gssize (*call_wrap_t) (void* atomic, gssize val);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_pointer_add;
  auto val_to_c = val;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c), (gssize) (val_to_c));
  return _temp_ret;
}

// gsize g_atomic_pointer_and (void* atomic, gsize val);
// gsize g_atomic_pointer_and (void* atomic, gsize val);
gsize atomic_pointer_and (void* atomic, gsize val) noexcept
{
  typedef gsize (*call_wrap_t) (void* atomic, gsize val);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_pointer_and;
  auto val_to_c = val;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c), (gsize) (val_to_c));
  return _temp_ret;
}

// gboolean g_atomic_pointer_compare_and_exchange (void* atomic, gpointer oldval, gpointer newval);
// gboolean g_atomic_pointer_compare_and_exchange (void* atomic, void* oldval, void* newval);
bool atomic_pointer_compare_and_exchange (void* atomic, void* oldval, void* newval) noexcept
{
  typedef gboolean (*call_wrap_t) (void* atomic, void* oldval, void* newval);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_pointer_compare_and_exchange;
  auto newval_to_c = newval;
  auto oldval_to_c = oldval;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c), (void*) (oldval_to_c), (void*) (newval_to_c));
  return _temp_ret;
}

// gpointer g_atomic_pointer_get (void* atomic);
// void* g_atomic_pointer_get (void* atomic);
gpointer atomic_pointer_get (void* atomic) noexcept
{
  typedef void* (*call_wrap_t) (void* atomic);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_pointer_get;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c));
  return _temp_ret;
}

// gsize g_atomic_pointer_or (void* atomic, gsize val);
// gsize g_atomic_pointer_or (void* atomic, gsize val);
gsize atomic_pointer_or (void* atomic, gsize val) noexcept
{
  typedef gsize (*call_wrap_t) (void* atomic, gsize val);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_pointer_or;
  auto val_to_c = val;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c), (gsize) (val_to_c));
  return _temp_ret;
}

// void g_atomic_pointer_set (void* atomic, gpointer newval);
// void g_atomic_pointer_set (void* atomic, void* newval);
void atomic_pointer_set (void* atomic, void* newval) noexcept
{
  typedef void (*call_wrap_t) (void* atomic, void* newval);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_pointer_set;
  auto newval_to_c = newval;
  auto atomic_to_c = atomic;
  call_wrap_v ((void*) (atomic_to_c), (void*) (newval_to_c));
}

// gsize g_atomic_pointer_xor (void* atomic, gsize val);
// gsize g_atomic_pointer_xor (void* atomic, gsize val);
gsize atomic_pointer_xor (void* atomic, gsize val) noexcept
{
  typedef gsize (*call_wrap_t) (void* atomic, gsize val);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_pointer_xor;
  auto val_to_c = val;
  auto atomic_to_c = atomic;
  auto _temp_ret = call_wrap_v ((void*) (atomic_to_c), (gsize) (val_to_c));
  return _temp_ret;
}

// gpointer g_atomic_rc_box_acquire (gpointer mem_block);
// void* g_atomic_rc_box_acquire (void* mem_block);
gpointer atomic_rc_box_acquire (void* mem_block) noexcept
{
  typedef void* (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_rc_box_acquire;
  auto mem_block_to_c = mem_block;
  auto _temp_ret = call_wrap_v ((void*) (mem_block_to_c));
  return _temp_ret;
}

// gpointer g_atomic_rc_box_alloc (gsize block_size);
// void* g_atomic_rc_box_alloc (gsize block_size);
gpointer atomic_rc_box_alloc (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_rc_box_alloc;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_atomic_rc_box_alloc0 (gsize block_size);
// void* g_atomic_rc_box_alloc0 (gsize block_size);
gpointer atomic_rc_box_alloc0 (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_rc_box_alloc0;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_atomic_rc_box_dup (gsize block_size, gconstpointer mem_block);
// void* g_atomic_rc_box_dup (gsize block_size, const void* mem_block);
gpointer atomic_rc_box_dup (gsize block_size, const void* mem_block) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size, const void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_rc_box_dup;
  auto mem_block_to_c = mem_block;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c), (const void*) (mem_block_to_c));
  return _temp_ret;
}

// gsize g_atomic_rc_box_get_size (gpointer mem_block);
// gsize g_atomic_rc_box_get_size (void* mem_block);
gsize atomic_rc_box_get_size (void* mem_block) noexcept
{
  typedef gsize (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_rc_box_get_size;
  auto mem_block_to_c = mem_block;
  auto _temp_ret = call_wrap_v ((void*) (mem_block_to_c));
  return _temp_ret;
}

// void g_atomic_rc_box_release (gpointer mem_block);
// void g_atomic_rc_box_release (void* mem_block);
void atomic_rc_box_release (void* mem_block) noexcept
{
  typedef void (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) g_atomic_rc_box_release;
  auto mem_block_to_c = mem_block;
  call_wrap_v ((void*) (mem_block_to_c));
}

// void g_atomic_rc_box_release_full (gpointer mem_block, GDestroyNotify clear_func);
// void g_atomic_rc_box_release_full (void* mem_block, GLib::DestroyNotify::cfunction_type clear_func);
// SKIP; callback misses closure info

// gboolean g_atomic_ref_count_compare (gatomicrefcount* arc, gint val);
// gboolean g_atomic_ref_count_compare (gint arc, gint val);
// SKIP; inconsistent in arc pointer depth (1 vs 0)

// gboolean g_atomic_ref_count_dec (gatomicrefcount* arc);
// gboolean g_atomic_ref_count_dec (gint arc);
// SKIP; inconsistent in arc pointer depth (1 vs 0)

// void g_atomic_ref_count_inc (gatomicrefcount* arc);
// void g_atomic_ref_count_inc (gint arc);
// SKIP; inconsistent in arc pointer depth (1 vs 0)

// void g_atomic_ref_count_init (gatomicrefcount* arc);
// void g_atomic_ref_count_init (gint arc);
// SKIP; inconsistent in arc pointer depth (1 vs 0)

// guchar* g_base64_decode (const gchar* text, gsize* out_len);
// guint8* g_base64_decode (const char* text, gsize* out_len);
std::vector<guint8> base64_decode (const std::string & text) noexcept
{
  typedef guint8* (*call_wrap_t) (const char* text, gsize* out_len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_base64_decode;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  gsize out_len;
  std::vector<guint8> _temp_ret;
  auto _ret_o = call_wrap_v ((const char*) (text_to_c), (gsize*) (&out_len));
  _temp_ret.resize(out_len);
  detail::wrap_array (_ret_o, gi::transfer_full, out_len, _temp_ret.data());
  g_free (_ret_o);
  return _temp_ret;
}

// guchar* g_base64_decode_inplace (gchar* text, gsize* out_len);
// guint8 g_base64_decode_inplace (guint8** text, gsize* out_len);
// SKIP; inout array not supported, inconsistent return  pointer depth (1 vs 0)

// gsize g_base64_decode_step (const gchar* in, gsize len, gint* state, guint* save);
// gsize g_base64_decode_step (const guint8* in, gsize len, gint* state, guint* save);
// IGNORE; not introspectable, inconsistent array info

// gchar* g_base64_encode (const guchar* data, gsize len);
// char* g_base64_encode (const guint8* data, gsize len);
std::string base64_encode (guint8 * data, gsize len) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* data, gsize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_base64_encode;
  auto data_i = detail::make_list_unwrap_range (data, len, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (data_to_c), (gsize) (data_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gsize g_base64_encode_close (gboolean break_lines, gint* state, gint* save);
// gsize g_base64_encode_close (gboolean break_lines, gint* state, gint* save);
// SKIP; inconsistent array info

// gsize g_base64_encode_step (const guchar* in, gsize len, gboolean break_lines, gint* state, gint* save);
// gsize g_base64_encode_step (const guint8* in, gsize len, gboolean break_lines, gint* state, gint* save);
// SKIP; inconsistent array info

// void g_bit_lock (volatile gint* address, gint lock_bit);
// void g_bit_lock (gint address, gint lock_bit);
// SKIP; inconsistent in address pointer depth (1 vs 0)

// gint g_bit_nth_lsf (gulong mask, gint nth_bit);
// gint g_bit_nth_lsf (gulong mask, gint nth_bit);
gint bit_nth_lsf (gulong mask, gint nth_bit) noexcept
{
  typedef gint (*call_wrap_t) (gulong mask, gint nth_bit);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bit_nth_lsf;
  auto nth_bit_to_c = nth_bit;
  auto mask_to_c = mask;
  auto _temp_ret = call_wrap_v ((gulong) (mask_to_c), (gint) (nth_bit_to_c));
  return _temp_ret;
}

// gint g_bit_nth_msf (gulong mask, gint nth_bit);
// gint g_bit_nth_msf (gulong mask, gint nth_bit);
gint bit_nth_msf (gulong mask, gint nth_bit) noexcept
{
  typedef gint (*call_wrap_t) (gulong mask, gint nth_bit);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bit_nth_msf;
  auto nth_bit_to_c = nth_bit;
  auto mask_to_c = mask;
  auto _temp_ret = call_wrap_v ((gulong) (mask_to_c), (gint) (nth_bit_to_c));
  return _temp_ret;
}

// guint g_bit_storage (gulong number);
// guint g_bit_storage (gulong number);
guint bit_storage (gulong number) noexcept
{
  typedef guint (*call_wrap_t) (gulong number);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bit_storage;
  auto number_to_c = number;
  auto _temp_ret = call_wrap_v ((gulong) (number_to_c));
  return _temp_ret;
}

// gboolean g_bit_trylock (volatile gint* address, gint lock_bit);
// gboolean g_bit_trylock (gint address, gint lock_bit);
// SKIP; inconsistent in address pointer depth (1 vs 0)

// void g_bit_unlock (volatile gint* address, gint lock_bit);
// void g_bit_unlock (gint address, gint lock_bit);
// SKIP; inconsistent in address pointer depth (1 vs 0)

// gchar* g_build_filename (const gchar* first_element);
// char* g_build_filename (const char* first_element);
// IGNORE; not introspectable, varargs not supported

// gchar* g_build_filename_valist (const gchar* first_element, va_list* args);
// char* g_build_filename_valist (const char* first_element,  args);
// IGNORE; not introspectable, args type  not supported

// gchar* g_build_filenamev (gchar** args);
// char* g_build_filenamev (char** args);
std::string build_filenamev (const std::vector<std::string> & args) noexcept
{
  typedef char* (*call_wrap_t) (char** args);
  call_wrap_t call_wrap_v = (call_wrap_t) g_build_filenamev;
  auto args_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (args);
  auto args_w = unwrap (args_i, gi::transfer_none, direction_in);
  auto args_to_c = args_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((char**) (args_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_build_path (const gchar* separator, const gchar* first_element);
// char* g_build_path (const char* separator, const char* first_element);
// IGNORE; not introspectable, varargs not supported

// gchar* g_build_pathv (const gchar* separator, gchar** args);
// char* g_build_pathv (const char* separator, char** args);
std::string build_pathv (const std::string & separator, const std::vector<std::string> & args) noexcept
{
  typedef char* (*call_wrap_t) (const char* separator, char** args);
  call_wrap_t call_wrap_v = (call_wrap_t) g_build_pathv;
  auto args_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (args);
  auto args_w = unwrap (args_i, gi::transfer_none, direction_in);
  auto args_to_c = args_w.gobj_(false);
  auto separator_to_c = gi::unwrap (separator, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (separator_to_c), (char**) (args_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_canonicalize_filename (const gchar* filename, const gchar* relative_to);
// char* g_canonicalize_filename (const char* filename, const char* relative_to);
std::string canonicalize_filename (const std::string & filename, const std::string & relative_to) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const char* relative_to);
  call_wrap_t call_wrap_v = (call_wrap_t) g_canonicalize_filename;
  auto relative_to_to_c = gi::unwrap (relative_to, gi::transfer_none, gi::direction_in);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (relative_to_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string canonicalize_filename (const std::string & filename) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const char* relative_to);
  call_wrap_t call_wrap_v = (call_wrap_t) g_canonicalize_filename;
  auto relative_to_to_c = nullptr;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (relative_to_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// int g_chdir (const gchar* path);
// gint g_chdir (const char* path);
gint chdir (const std::string & path) noexcept
{
  typedef gint (*call_wrap_t) (const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_chdir;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c));
  return _temp_ret;
}

// const gchar* glib_check_version (guint required_major, guint required_minor, guint required_micro);
// const char* glib_check_version (guint required_major, guint required_minor, guint required_micro);
std::string check_version (guint required_major, guint required_minor, guint required_micro) noexcept
{
  typedef const char* (*call_wrap_t) (guint required_major, guint required_minor, guint required_micro);
  call_wrap_t call_wrap_v = (call_wrap_t) glib_check_version;
  auto required_micro_to_c = required_micro;
  auto required_minor_to_c = required_minor;
  auto required_major_to_c = required_major;
  auto _temp_ret = call_wrap_v ((guint) (required_major_to_c), (guint) (required_minor_to_c), (guint) (required_micro_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint g_child_watch_add (GPid pid, GChildWatchFunc function, gpointer data);
// guint g_child_watch_add (::GPid pid, GLib::ChildWatchFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by child_watch_add_full

// guint g_child_watch_add_full (gint priority, GPid pid, GChildWatchFunc function, gpointer data, GDestroyNotify notify);
// guint g_child_watch_add_full (gint priority, ::GPid pid, GLib::ChildWatchFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
guint child_watch_add (gint priority, ::GPid pid, GLib::ChildWatchFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, ::GPid pid, GLib::ChildWatchFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) g_child_watch_add_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto pid_to_c = pid;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (::GPid) (pid_to_c), (GLib::ChildWatchFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// GSource* g_child_watch_source_new (GPid pid);
// ::GSource* g_child_watch_source_new (::GPid pid);
GLib::Source child_watch_source_new (::GPid pid) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GPid pid);
  call_wrap_t call_wrap_v = (call_wrap_t) g_child_watch_source_new;
  auto pid_to_c = pid;
  auto _temp_ret = call_wrap_v ((::GPid) (pid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_clear_error (GError ** error);
// void g_clear_error (GError ** error);
void clear_error ()
{
  typedef void (*call_wrap_t) (GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_clear_error;
  GError *error = NULL;
  call_wrap_v (&error);
  gi::check_error (error);
}
void clear_error (GLib::Error * _error) noexcept
{
  typedef void (*call_wrap_t) (GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_clear_error;
  GError* _error_o {};
  call_wrap_v (_error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
}

// void g_clear_handle_id (guint* tag_ptr, GClearHandleFunc clear_func);
// void g_clear_handle_id (guint tag_ptr,  clear_func);
// IGNORE; not introspectable, clear_func type  not supported, inconsistent in tag_ptr pointer depth (1 vs 0)

// void g_clear_list (GList** list_ptr, GDestroyNotify destroy);
// void g_clear_list (::GList* list_ptr, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; not introspectable, callback misses closure info, inconsistent in list_ptr pointer depth (2 vs 1)

// void g_clear_pointer (gpointer* pp, GDestroyNotify destroy);
// void g_clear_pointer (void* pp, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; not introspectable, callback misses closure info, inconsistent in pp pointer depth (2 vs 1)

// void g_clear_slist (GSList** slist_ptr, GDestroyNotify destroy);
// void g_clear_slist (::GSList* slist_ptr, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; not introspectable, callback misses closure info, inconsistent in slist_ptr pointer depth (2 vs 1)

// gchar* g_compute_checksum_for_bytes (GChecksumType checksum_type, GBytes* data);
// char* g_compute_checksum_for_bytes (::GChecksumType checksum_type, ::GBytes* data);
std::string compute_checksum_for_bytes (GLib::ChecksumType checksum_type, GLib::Bytes data) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType checksum_type, ::GBytes* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_compute_checksum_for_bytes;
  auto data_to_c = gi::unwrap (data, gi::transfer_none, gi::direction_in);
  auto checksum_type_to_c = gi::unwrap (checksum_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (checksum_type_to_c), (::GBytes*) (data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_compute_checksum_for_data (GChecksumType checksum_type, const guchar* data, gsize length);
// char* g_compute_checksum_for_data (::GChecksumType checksum_type, const guint8* data, gsize length);
std::string compute_checksum_for_data (GLib::ChecksumType checksum_type, guint8 * data, gsize length) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType checksum_type, const guint8* data, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_compute_checksum_for_data;
  auto data_i = detail::make_list_unwrap_range (data, length, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto checksum_type_to_c = gi::unwrap (checksum_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (checksum_type_to_c), (const guint8*) (data_to_c), (gsize) (data_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_compute_checksum_for_string (GChecksumType checksum_type, const gchar* str, gssize length);
// char* g_compute_checksum_for_string (::GChecksumType checksum_type, const char* str, gssize length);
std::string compute_checksum_for_string (GLib::ChecksumType checksum_type, const std::string & str, gssize length) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType checksum_type, const char* str, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_compute_checksum_for_string;
  auto length_to_c = length;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto checksum_type_to_c = gi::unwrap (checksum_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (checksum_type_to_c), (const char*) (str_to_c), (gssize) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_compute_hmac_for_bytes (GChecksumType digest_type, GBytes* key, GBytes* data);
// char* g_compute_hmac_for_bytes (::GChecksumType digest_type, ::GBytes* key, ::GBytes* data);
std::string compute_hmac_for_bytes (GLib::ChecksumType digest_type, GLib::Bytes key, GLib::Bytes data) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType digest_type, ::GBytes* key, ::GBytes* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_compute_hmac_for_bytes;
  auto data_to_c = gi::unwrap (data, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto digest_type_to_c = gi::unwrap (digest_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (digest_type_to_c), (::GBytes*) (key_to_c), (::GBytes*) (data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_compute_hmac_for_data (GChecksumType digest_type, const guchar* key, gsize key_len, const guchar* data, gsize length);
// char* g_compute_hmac_for_data (::GChecksumType digest_type, const guint8* key, gsize key_len, const guint8* data, gsize length);
std::string compute_hmac_for_data (GLib::ChecksumType digest_type, guint8 * key, gsize key_len, guint8 * data, gsize length) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType digest_type, const guint8* key, gsize key_len, const guint8* data, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_compute_hmac_for_data;
  auto data_i = detail::make_list_unwrap_range (data, length, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto key_i = detail::make_list_unwrap_range (key, key_len, false);
  auto key_w = unwrap (key_i, gi::transfer_none, direction_in);
  auto key_to_c = key_w.gobj_(false);
  auto digest_type_to_c = gi::unwrap (digest_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (digest_type_to_c), (const guint8*) (key_to_c), (gsize) (key_w.size()), (const guint8*) (data_to_c), (gsize) (data_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_compute_hmac_for_string (GChecksumType digest_type, const guchar* key, gsize key_len, const gchar* str, gssize length);
// char* g_compute_hmac_for_string (::GChecksumType digest_type, const guint8* key, gsize key_len, const char* str, gssize length);
std::string compute_hmac_for_string (GLib::ChecksumType digest_type, guint8 * key, gsize key_len, const std::string & str, gssize length) noexcept
{
  typedef char* (*call_wrap_t) (::GChecksumType digest_type, const guint8* key, gsize key_len, const char* str, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_compute_hmac_for_string;
  auto length_to_c = length;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto key_i = detail::make_list_unwrap_range (key, key_len, false);
  auto key_w = unwrap (key_i, gi::transfer_none, direction_in);
  auto key_to_c = key_w.gobj_(false);
  auto digest_type_to_c = gi::unwrap (digest_type);
  auto _temp_ret = call_wrap_v ((::GChecksumType) (digest_type_to_c), (const guint8*) (key_to_c), (gsize) (key_w.size()), (const char*) (str_to_c), (gssize) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_convert (const gchar* str, gssize len, const gchar* to_codeset, const gchar* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* g_convert (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
std::vector<guint8> convert (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, gsize * bytes_read)
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_convert;
  gsize bytes_read_o {};
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none, gi::direction_in);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none, gi::direction_in);
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (str_w.size()), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), &error);
  if (bytes_read) *bytes_read = bytes_read_o;
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  gi::check_error (error);
  return _temp_ret;
}
std::vector<guint8> convert (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, gsize * bytes_read, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_convert;
  gsize bytes_read_o {};
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none, gi::direction_in);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none, gi::direction_in);
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (str_w.size()), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  if (bytes_read) *bytes_read = bytes_read_o;
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<std::vector<guint8>, gsize> convert (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset)
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_convert;
  gsize bytes_read_o {};
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none, gi::direction_in);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none, gi::direction_in);
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (str_w.size()), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), &error);
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_read_o);
}
std::tuple<std::vector<guint8>, gsize> convert (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_convert;
  gsize bytes_read_o {};
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none, gi::direction_in);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none, gi::direction_in);
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (str_w.size()), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_read_o);
}

// GQuark g_convert_error_quark ();
// ::GQuark g_convert_error_quark ();
GLib::Quark convert_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_convert_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gchar* g_convert_with_fallback (const gchar* str, gssize len, const gchar* to_codeset, const gchar* from_codeset, const gchar* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* g_convert_with_fallback (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, const char* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
std::vector<guint8> convert_with_fallback (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, const std::string & fallback, gsize * bytes_read)
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, const char* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_convert_with_fallback;
  gsize bytes_read_o {};
  auto fallback_to_c = gi::unwrap (fallback, gi::transfer_none, gi::direction_in);
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none, gi::direction_in);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none, gi::direction_in);
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (str_w.size()), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (const char*) (fallback_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), &error);
  if (bytes_read) *bytes_read = bytes_read_o;
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  gi::check_error (error);
  return _temp_ret;
}
std::vector<guint8> convert_with_fallback (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, const std::string & fallback, gsize * bytes_read, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, const char* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_convert_with_fallback;
  gsize bytes_read_o {};
  auto fallback_to_c = gi::unwrap (fallback, gi::transfer_none, gi::direction_in);
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none, gi::direction_in);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none, gi::direction_in);
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (str_w.size()), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (const char*) (fallback_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  if (bytes_read) *bytes_read = bytes_read_o;
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<std::vector<guint8>, gsize> convert_with_fallback (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, const std::string & fallback)
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, const char* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_convert_with_fallback;
  gsize bytes_read_o {};
  auto fallback_to_c = gi::unwrap (fallback, gi::transfer_none, gi::direction_in);
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none, gi::direction_in);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none, gi::direction_in);
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (str_w.size()), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (const char*) (fallback_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), &error);
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_read_o);
}
std::tuple<std::vector<guint8>, gsize> convert_with_fallback (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, const std::string & fallback, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, const char* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_convert_with_fallback;
  gsize bytes_read_o {};
  auto fallback_to_c = gi::unwrap (fallback, gi::transfer_none, gi::direction_in);
  auto from_codeset_to_c = gi::unwrap (from_codeset, gi::transfer_none, gi::direction_in);
  auto to_codeset_to_c = gi::unwrap (to_codeset, gi::transfer_none, gi::direction_in);
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const guint8*) (str_to_c), (gssize) (str_w.size()), (const char*) (to_codeset_to_c), (const char*) (from_codeset_to_c), (const char*) (fallback_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_read_o);
}

// gchar* g_convert_with_iconv (const gchar* str, gssize len, GIConv converter, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* g_convert_with_iconv (const guint8* str, gssize len,  converter, gsize* bytes_read, gsize* bytes_written, GError ** error);
// IGNORE; not introspectable, converter type  not supported

// void g_datalist_clear (GData** datalist);
// void g_datalist_clear ( datalist);
// IGNORE; not introspectable, datalist type  not supported

// void g_datalist_foreach (GData** datalist, GDataForeachFunc func, gpointer user_data);
// void g_datalist_foreach ( datalist, GLib::DataForeachFunc::cfunction_type func, void* user_data);
// SKIP; datalist type  not supported

// gpointer g_datalist_get_data (GData** datalist, const gchar* key);
// void* g_datalist_get_data ( datalist, const char* key);
// SKIP; datalist type  not supported

// guint g_datalist_get_flags (GData** datalist);
// guint g_datalist_get_flags ( datalist);
// SKIP; datalist type  not supported

// gpointer g_datalist_id_dup_data (GData** datalist, GQuark key_id, GDuplicateFunc dup_func, gpointer user_data);
// void* g_datalist_id_dup_data ( datalist, ::GQuark key_id, GLib::DuplicateFunc::cfunction_type dup_func, void* user_data);
// IGNORE; not introspectable, datalist type  not supported

// gpointer g_datalist_id_get_data (GData** datalist, GQuark key_id);
// void* g_datalist_id_get_data ( datalist, ::GQuark key_id);
// SKIP; datalist type  not supported

// gpointer g_datalist_id_remove_no_notify (GData** datalist, GQuark key_id);
// void* g_datalist_id_remove_no_notify ( datalist, ::GQuark key_id);
// IGNORE; not introspectable, datalist type  not supported

// gboolean g_datalist_id_replace_data (GData** datalist, GQuark key_id, gpointer oldval, gpointer newval, GDestroyNotify destroy, GDestroyNotify* old_destroy);
// gboolean g_datalist_id_replace_data ( datalist, ::GQuark key_id, void* oldval, void* newval, GLib::DestroyNotify::cfunction_type destroy, GLib::DestroyNotify::cfunction_type old_destroy);
// IGNORE; not introspectable, inconsistent out old_destroy pointer depth (1 vs 0), callback misses closure info, datalist type  not supported

// void g_datalist_id_set_data_full (GData** datalist, GQuark key_id, gpointer data, GDestroyNotify destroy_func);
// void g_datalist_id_set_data_full ( datalist, ::GQuark key_id, void* data, GLib::DestroyNotify::cfunction_type destroy_func);
// IGNORE; not introspectable, callback misses closure info, datalist type  not supported

// void g_datalist_init (GData** datalist);
// void g_datalist_init ( datalist);
// IGNORE; not introspectable, datalist type  not supported

// void g_datalist_set_flags (GData** datalist, guint flags);
// void g_datalist_set_flags ( datalist, guint flags);
// SKIP; datalist type  not supported

// void g_datalist_unset_flags (GData** datalist, guint flags);
// void g_datalist_unset_flags ( datalist, guint flags);
// SKIP; datalist type  not supported

// void g_dataset_destroy (gconstpointer dataset_location);
// void g_dataset_destroy (const void* dataset_location);
void dataset_destroy (const void* dataset_location) noexcept
{
  typedef void (*call_wrap_t) (const void* dataset_location);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dataset_destroy;
  auto dataset_location_to_c = dataset_location;
  call_wrap_v ((const void*) (dataset_location_to_c));
}

// void g_dataset_foreach (gconstpointer dataset_location, GDataForeachFunc func, gpointer user_data);
// void g_dataset_foreach (const void* dataset_location, GLib::DataForeachFunc::cfunction_type func, void* user_data);
void dataset_foreach (const void* dataset_location, GLib::DataForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (const void* dataset_location, GLib::DataForeachFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dataset_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto dataset_location_to_c = dataset_location;
  call_wrap_v ((const void*) (dataset_location_to_c), (GLib::DataForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// gpointer g_dataset_id_get_data (gconstpointer dataset_location, GQuark key_id);
// void* g_dataset_id_get_data (const void* dataset_location, ::GQuark key_id);
gpointer dataset_id_get_data (const void* dataset_location, ::GQuark key_id) noexcept
{
  typedef void* (*call_wrap_t) (const void* dataset_location, ::GQuark key_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dataset_id_get_data;
  auto key_id_to_c = key_id;
  auto dataset_location_to_c = dataset_location;
  auto _temp_ret = call_wrap_v ((const void*) (dataset_location_to_c), (::GQuark) (key_id_to_c));
  return _temp_ret;
}

// gpointer g_dataset_id_remove_no_notify (gconstpointer dataset_location, GQuark key_id);
// void* g_dataset_id_remove_no_notify (const void* dataset_location, ::GQuark key_id);
gpointer dataset_id_remove_no_notify (const void* dataset_location, ::GQuark key_id) noexcept
{
  typedef void* (*call_wrap_t) (const void* dataset_location, ::GQuark key_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dataset_id_remove_no_notify;
  auto key_id_to_c = key_id;
  auto dataset_location_to_c = dataset_location;
  auto _temp_ret = call_wrap_v ((const void*) (dataset_location_to_c), (::GQuark) (key_id_to_c));
  return _temp_ret;
}

// void g_dataset_id_set_data_full (gconstpointer dataset_location, GQuark key_id, gpointer data, GDestroyNotify destroy_func);
// void g_dataset_id_set_data_full (const void* dataset_location, ::GQuark key_id, void* data, GLib::DestroyNotify::cfunction_type destroy_func);
// IGNORE; not introspectable, callback misses closure info

// const gchar* g_dcgettext (const gchar* domain, const gchar* msgid, gint category);
// const char* g_dcgettext (const char* domain, const char* msgid, gint category);
std::string dcgettext (const std::string & domain, const std::string & msgid, gint category) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid, gint category);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dcgettext;
  auto category_to_c = category;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c), (gint) (category_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::string dcgettext (const std::string & msgid, gint category) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid, gint category);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dcgettext;
  auto category_to_c = category;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none, gi::direction_in);
  auto domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c), (gint) (category_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dgettext (const gchar* domain, const gchar* msgid);
// const char* g_dgettext (const char* domain, const char* msgid);
std::string dgettext (const std::string & domain, const std::string & msgid) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dgettext;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::string dgettext (const std::string & msgid) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dgettext;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none, gi::direction_in);
  auto domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_direct_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_direct_equal (const void* v1, const void* v2);
bool direct_equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_direct_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// guint g_direct_hash (gconstpointer v);
// guint g_direct_hash (const void* v);
guint direct_hash (const void* v) noexcept
{
  typedef guint (*call_wrap_t) (const void* v);
  call_wrap_t call_wrap_v = (call_wrap_t) g_direct_hash;
  auto v_to_c = v;
  auto _temp_ret = call_wrap_v ((const void*) (v_to_c));
  return _temp_ret;
}

// const gchar* g_dngettext (const gchar* domain, const gchar* msgid, const gchar* msgid_plural, gulong n);
// const char* g_dngettext (const char* domain, const char* msgid, const char* msgid_plural, gulong n);
std::string dngettext (const std::string & domain, const std::string & msgid, const std::string & msgid_plural, gulong n) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid, const char* msgid_plural, gulong n);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dngettext;
  auto n_to_c = n;
  auto msgid_plural_to_c = gi::unwrap (msgid_plural, gi::transfer_none, gi::direction_in);
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c), (const char*) (msgid_plural_to_c), (gulong) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::string dngettext (const std::string & msgid, const std::string & msgid_plural, gulong n) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgid, const char* msgid_plural, gulong n);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dngettext;
  auto n_to_c = n;
  auto msgid_plural_to_c = gi::unwrap (msgid_plural, gi::transfer_none, gi::direction_in);
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none, gi::direction_in);
  auto domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgid_to_c), (const char*) (msgid_plural_to_c), (gulong) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_double_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_double_equal (const void* v1, const void* v2);
bool double_equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_double_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// guint g_double_hash (gconstpointer v);
// guint g_double_hash (const void* v);
guint double_hash (const void* v) noexcept
{
  typedef guint (*call_wrap_t) (const void* v);
  call_wrap_t call_wrap_v = (call_wrap_t) g_double_hash;
  auto v_to_c = v;
  auto _temp_ret = call_wrap_v ((const void*) (v_to_c));
  return _temp_ret;
}

// const gchar* g_dpgettext (const gchar* domain, const gchar* msgctxtid, gsize msgidoffset);
// const char* g_dpgettext (const char* domain, const char* msgctxtid, gsize msgidoffset);
std::string dpgettext (const std::string & domain, const std::string & msgctxtid, gsize msgidoffset) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgctxtid, gsize msgidoffset);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dpgettext;
  auto msgidoffset_to_c = msgidoffset;
  auto msgctxtid_to_c = gi::unwrap (msgctxtid, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgctxtid_to_c), (gsize) (msgidoffset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::string dpgettext (const std::string & msgctxtid, gsize msgidoffset) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* msgctxtid, gsize msgidoffset);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dpgettext;
  auto msgidoffset_to_c = msgidoffset;
  auto msgctxtid_to_c = gi::unwrap (msgctxtid, gi::transfer_none, gi::direction_in);
  auto domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (msgctxtid_to_c), (gsize) (msgidoffset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dpgettext2 (const gchar* domain, const gchar* context, const gchar* msgid);
// const char* g_dpgettext2 (const char* domain, const char* context, const char* msgid);
std::string dpgettext2 (const std::string & domain, const std::string & context, const std::string & msgid) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* context, const char* msgid);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dpgettext2;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (context_to_c), (const char*) (msgid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::string dpgettext2 (const std::string & context, const std::string & msgid) noexcept
{
  typedef const char* (*call_wrap_t) (const char* domain, const char* context, const char* msgid);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dpgettext2;
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (const char*) (context_to_c), (const char*) (msgid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_environ_getenv (gchar** envp, const gchar* variable);
// const char* g_environ_getenv (char** envp, const char* variable);
std::string environ_getenv (const std::vector<std::string> & envp, const std::string & variable) noexcept
{
  typedef const char* (*call_wrap_t) (char** envp, const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_environ_getenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none, gi::direction_in);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((char**) (envp_to_c), (const char*) (variable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar** g_environ_setenv (gchar** envp, const gchar* variable, const gchar* value, gboolean overwrite);
// char** g_environ_setenv (char** envp, const char* variable, const char* value, gboolean overwrite);
std::vector<std::string> environ_setenv (const std::vector<std::string> & envp, const std::string & variable, const std::string & value, gboolean overwrite) noexcept
{
  typedef char** (*call_wrap_t) (char** envp, const char* variable, const char* value, gboolean overwrite);
  call_wrap_t call_wrap_v = (call_wrap_t) g_environ_setenv;
  auto overwrite_to_c = overwrite;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none, gi::direction_in);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_full, direction_in);
  auto envp_to_c = envp_w.gobj_(true);
  auto _temp_ret = call_wrap_v ((char**) (envp_to_c), (const char*) (variable_to_c), (const char*) (value_to_c), (gboolean) (overwrite_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gchar** g_environ_unsetenv (gchar** envp, const gchar* variable);
// char** g_environ_unsetenv (char** envp, const char* variable);
std::vector<std::string> environ_unsetenv (const std::vector<std::string> & envp, const std::string & variable) noexcept
{
  typedef char** (*call_wrap_t) (char** envp, const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_environ_unsetenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none, gi::direction_in);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_full, direction_in);
  auto envp_to_c = envp_w.gobj_(true);
  auto _temp_ret = call_wrap_v ((char**) (envp_to_c), (const char*) (variable_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GFileError g_file_error_from_errno (gint err_no);
// ::GFileError g_file_error_from_errno (gint err_no);
GLib::FileError file_error_from_errno (gint err_no) noexcept
{
  typedef ::GFileError (*call_wrap_t) (gint err_no);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_error_from_errno;
  auto err_no_to_c = err_no;
  auto _temp_ret = call_wrap_v ((gint) (err_no_to_c));
  return gi::wrap (_temp_ret);
}

// GQuark g_file_error_quark ();
// ::GQuark g_file_error_quark ();
GLib::Quark file_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean g_file_get_contents (const gchar* filename, gchar** contents, gsize* length, GError ** error);
// gboolean g_file_get_contents (const char* filename, guint8** contents, gsize* length, GError ** error);
bool file_get_contents (const std::string & filename, std::vector<guint8> & contents)
{
  typedef gboolean (*call_wrap_t) (const char* filename, guint8** contents, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_contents;
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), &error);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  gi::check_error (error);
  return _temp_ret;
}
bool file_get_contents (const std::string & filename, std::vector<guint8> & contents, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* filename, guint8** contents, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_contents;
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), _error ? &_error_o : nullptr);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gint g_file_open_tmp (const gchar* tmpl, gchar** name_used, GError ** error);
// gint g_file_open_tmp (const char* tmpl, char** name_used, GError ** error);
gint file_open_tmp (const std::string & tmpl, std::string & name_used)
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), &error);
  name_used = gi::wrap (name_used_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
gint file_open_tmp (std::string & name_used)
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), &error);
  name_used = gi::wrap (name_used_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
gint file_open_tmp (const std::string & tmpl, std::string & name_used, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), _error ? &_error_o : nullptr);
  name_used = gi::wrap (name_used_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gint file_open_tmp (std::string & name_used, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), _error ? &_error_o : nullptr);
  name_used = gi::wrap (name_used_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<gint, std::string> file_open_tmp (const std::string & tmpl)
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (name_used_o, gi::transfer_full, gi::direction_out));
}
std::tuple<gint, std::string> file_open_tmp ()
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (name_used_o, gi::transfer_full, gi::direction_out));
}
std::tuple<gint, std::string> file_open_tmp (const std::string & tmpl, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (name_used_o, gi::transfer_full, gi::direction_out));
}
std::tuple<gint, std::string> file_open_tmp (GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (const char* tmpl, char** name_used, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_tmp;
  char* name_used_o {};
  auto tmpl_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (char**) (&name_used_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (name_used_o, gi::transfer_full, gi::direction_out));
}

// gchar* g_file_read_link (const gchar* filename, GError ** error);
// char* g_file_read_link (const char* filename, GError ** error);
std::string file_read_link (const std::string & filename)
{
  typedef char* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_read_link;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string file_read_link (const std::string & filename, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_read_link;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_file_set_contents (const gchar* filename, const gchar* contents, gssize length, GError ** error);
// gboolean g_file_set_contents (const char* filename, const guint8* contents, gssize length, GError ** error);
bool file_set_contents (const std::string & filename, guint8 * contents, gssize length)
{
  typedef gboolean (*call_wrap_t) (const char* filename, const guint8* contents, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_contents;
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (contents_to_c), (gssize) (contents_w.size()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool file_set_contents (const std::string & filename, guint8 * contents, gssize length, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* filename, const guint8* contents, gssize length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_contents;
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (contents_to_c), (gssize) (contents_w.size()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_set_contents_full (const gchar* filename, const gchar* contents, gssize length, GFileSetContentsFlags flags, int mode, GError ** error);
// gboolean g_file_set_contents_full (const char* filename, const guint8* contents, gssize length, ::GFileSetContentsFlags flags, gint mode, GError ** error);
bool file_set_contents_full (const std::string & filename, guint8 * contents, gssize length, GLib::FileSetContentsFlags flags, gint mode)
{
  typedef gboolean (*call_wrap_t) (const char* filename, const guint8* contents, gssize length, ::GFileSetContentsFlags flags, gint mode, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_contents_full;
  auto mode_to_c = mode;
  auto flags_to_c = gi::unwrap (flags);
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (contents_to_c), (gssize) (contents_w.size()), (::GFileSetContentsFlags) (flags_to_c), (gint) (mode_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool file_set_contents_full (const std::string & filename, guint8 * contents, gssize length, GLib::FileSetContentsFlags flags, gint mode, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* filename, const guint8* contents, gssize length, ::GFileSetContentsFlags flags, gint mode, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_contents_full;
  auto mode_to_c = mode;
  auto flags_to_c = gi::unwrap (flags);
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (contents_to_c), (gssize) (contents_w.size()), (::GFileSetContentsFlags) (flags_to_c), (gint) (mode_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_test (const gchar* filename, GFileTest test);
// gboolean g_file_test (const char* filename, ::GFileTest test);
bool file_test (const std::string & filename, GLib::FileTest test) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* filename, ::GFileTest test);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_test;
  auto test_to_c = gi::unwrap (test);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (::GFileTest) (test_to_c));
  return _temp_ret;
}

// gchar* g_filename_display_basename (const gchar* filename);
// char* g_filename_display_basename (const char* filename);
std::string filename_display_basename (const std::string & filename) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_display_basename;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_filename_display_name (const gchar* filename);
// char* g_filename_display_name (const char* filename);
std::string filename_display_name (const std::string & filename) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_display_name;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_filename_from_uri (const gchar* uri, gchar** hostname, GError ** error);
// char* g_filename_from_uri (const char* uri, char** hostname, GError ** error);
std::string filename_from_uri (const std::string & uri, std::string * hostname)
{
  typedef char* (*call_wrap_t) (const char* uri, char** hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_from_uri;
  char* hostname_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (char**) (hostname ? &hostname_o : nullptr), &error);
  if (hostname) *hostname = gi::wrap (hostname_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string filename_from_uri (const std::string & uri, std::string * hostname, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* uri, char** hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_from_uri;
  char* hostname_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (char**) (hostname ? &hostname_o : nullptr), _error ? &_error_o : nullptr);
  if (hostname) *hostname = gi::wrap (hostname_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, std::string> filename_from_uri (const std::string & uri)
{
  typedef char* (*call_wrap_t) (const char* uri, char** hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_from_uri;
  char* hostname_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (char**) (&hostname_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (hostname_o, gi::transfer_full, gi::direction_out));
}
std::tuple<std::string, std::string> filename_from_uri (const std::string & uri, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* uri, char** hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_from_uri;
  char* hostname_o {};
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (char**) (&hostname_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (hostname_o, gi::transfer_full, gi::direction_out));
}

// gchar* g_filename_from_utf8 (const gchar* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* g_filename_from_utf8 (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
std::string filename_from_utf8 (const std::string & utf8string, gssize len, gsize * bytes_read, gsize * bytes_written)
{
  typedef char* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_from_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string filename_from_utf8 (const std::string & utf8string, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_from_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, gsize, gsize> filename_from_utf8 (const std::string & utf8string, gssize len)
{
  typedef char* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_from_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), bytes_read_o, bytes_written_o);
}
std::tuple<std::string, gsize, gsize> filename_from_utf8 (const std::string & utf8string, gssize len, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_from_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), bytes_read_o, bytes_written_o);
}

// gchar* g_filename_to_uri (const gchar* filename, const gchar* hostname, GError ** error);
// char* g_filename_to_uri (const char* filename, const char* hostname, GError ** error);
std::string filename_to_uri (const std::string & filename, const std::string & hostname)
{
  typedef char* (*call_wrap_t) (const char* filename, const char* hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_to_uri;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (hostname_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string filename_to_uri (const std::string & filename)
{
  typedef char* (*call_wrap_t) (const char* filename, const char* hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_to_uri;
  auto hostname_to_c = nullptr;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (hostname_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string filename_to_uri (const std::string & filename, const std::string & hostname, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const char* hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_to_uri;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (hostname_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string filename_to_uri (const std::string & filename, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const char* hostname, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_to_uri;
  auto hostname_to_c = nullptr;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (hostname_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_filename_to_utf8 (const gchar* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* g_filename_to_utf8 (const char* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
std::string filename_to_utf8 (const std::string & opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written)
{
  typedef char* (*call_wrap_t) (const char* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto opsysstring_to_c = gi::unwrap (opsysstring, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (opsysstring_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string filename_to_utf8 (const std::string & opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto opsysstring_to_c = gi::unwrap (opsysstring, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (opsysstring_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, gsize, gsize> filename_to_utf8 (const std::string & opsysstring, gssize len)
{
  typedef char* (*call_wrap_t) (const char* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto opsysstring_to_c = gi::unwrap (opsysstring, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (opsysstring_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), bytes_read_o, bytes_written_o);
}
std::tuple<std::string, gsize, gsize> filename_to_utf8 (const std::string & opsysstring, gssize len, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_filename_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto opsysstring_to_c = gi::unwrap (opsysstring, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (opsysstring_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), bytes_read_o, bytes_written_o);
}

// gchar* g_find_program_in_path (const gchar* program);
// char* g_find_program_in_path (const char* program);
std::string find_program_in_path (const std::string & program) noexcept
{
  typedef char* (*call_wrap_t) (const char* program);
  call_wrap_t call_wrap_v = (call_wrap_t) g_find_program_in_path;
  auto program_to_c = gi::unwrap (program, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (program_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_format_size (guint64 size);
// char* g_format_size (guint64 size);
std::string format_size (guint64 size) noexcept
{
  typedef char* (*call_wrap_t) (guint64 size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_format_size;
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((guint64) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_format_size_full (guint64 size, GFormatSizeFlags flags);
// char* g_format_size_full (guint64 size, ::GFormatSizeFlags flags);
std::string format_size_full (guint64 size, GLib::FormatSizeFlags flags) noexcept
{
  typedef char* (*call_wrap_t) (guint64 size, ::GFormatSizeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_format_size_full;
  auto flags_to_c = gi::unwrap (flags);
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((guint64) (size_to_c), (::GFormatSizeFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint g_fprintf (FILE* file, const gchar* format);
// gint g_fprintf (void* file, const char* format);
// IGNORE; not introspectable, varargs not supported

// const gchar* g_get_application_name ();
// const char* g_get_application_name ();
std::string get_application_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_application_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_get_charset (const char** charset);
// gboolean g_get_charset (const char** charset);
bool get_charset (std::string * charset) noexcept
{
  typedef gboolean (*call_wrap_t) (const char** charset);
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_charset;
  const char* charset_o {};
  auto _temp_ret = call_wrap_v ((const char**) (charset ? &charset_o : nullptr));
  if (charset) *charset = gi::wrap (charset_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> get_charset () noexcept
{
  typedef gboolean (*call_wrap_t) (const char** charset);
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_charset;
  const char* charset_o {};
  auto _temp_ret = call_wrap_v ((const char**) (&charset_o));
  return std::make_tuple (_temp_ret, gi::wrap (charset_o, gi::transfer_none, gi::direction_out));
}

// gchar* g_get_codeset ();
// char* g_get_codeset ();
std::string get_codeset () noexcept
{
  typedef char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_codeset;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_get_console_charset (const char** charset);
// gboolean g_get_console_charset (const char** charset);
bool get_console_charset (std::string * charset) noexcept
{
  typedef gboolean (*call_wrap_t) (const char** charset);
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_console_charset;
  const char* charset_o {};
  auto _temp_ret = call_wrap_v ((const char**) (charset ? &charset_o : nullptr));
  if (charset) *charset = gi::wrap (charset_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> get_console_charset () noexcept
{
  typedef gboolean (*call_wrap_t) (const char** charset);
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_console_charset;
  const char* charset_o {};
  auto _temp_ret = call_wrap_v ((const char**) (&charset_o));
  return std::make_tuple (_temp_ret, gi::wrap (charset_o, gi::transfer_none, gi::direction_out));
}

// gchar* g_get_current_dir ();
// char* g_get_current_dir ();
std::string get_current_dir () noexcept
{
  typedef char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_current_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** g_get_environ ();
// char** g_get_environ ();
std::vector<std::string> get_environ () noexcept
{
  typedef char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_environ;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean g_get_filename_charsets (const gchar*** filename_charsets);
// gboolean g_get_filename_charsets (const char*** filename_charsets);
bool get_filename_charsets (std::vector<std::string> & filename_charsets) noexcept
{
  typedef gboolean (*call_wrap_t) (const char*** filename_charsets);
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_filename_charsets;
  const char** filename_charsets_o {};
  auto _temp_ret = call_wrap_v ((const char***) (&filename_charsets_o));
  filename_charsets = gi::detail::wrap_list<std::string> (filename_charsets_o, gi::transfer_none);
  return _temp_ret;
}
std::tuple<bool, std::vector<std::string>> get_filename_charsets () noexcept
{
  typedef gboolean (*call_wrap_t) (const char*** filename_charsets);
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_filename_charsets;
  const char** filename_charsets_o {};
  auto _temp_ret = call_wrap_v ((const char***) (&filename_charsets_o));
  return std::make_tuple (_temp_ret, gi::detail::wrap_list<std::string> (filename_charsets_o, gi::transfer_none));
}

// const gchar* g_get_home_dir ();
// const char* g_get_home_dir ();
std::string get_home_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_home_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_get_host_name ();
// const char* g_get_host_name ();
std::string get_host_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_host_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* const* g_get_language_names ();
// const char** g_get_language_names ();
std::vector<std::string> get_language_names () noexcept
{
  typedef const char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_language_names;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// const gchar* const* g_get_language_names_with_category (const gchar* category_name);
// const char** g_get_language_names_with_category (const char* category_name);
std::vector<std::string> get_language_names_with_category (const std::string & category_name) noexcept
{
  typedef const char** (*call_wrap_t) (const char* category_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_language_names_with_category;
  auto category_name_to_c = gi::unwrap (category_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (category_name_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// gchar** g_get_locale_variants (const gchar* locale);
// char** g_get_locale_variants (const char* locale);
std::vector<std::string> get_locale_variants (const std::string & locale) noexcept
{
  typedef char** (*call_wrap_t) (const char* locale);
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_locale_variants;
  auto locale_to_c = gi::unwrap (locale, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (locale_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gint64 g_get_monotonic_time ();
// gint64 g_get_monotonic_time ();
gint64 get_monotonic_time () noexcept
{
  typedef gint64 (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_monotonic_time;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint g_get_num_processors ();
// guint g_get_num_processors ();
guint get_num_processors () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_num_processors;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gchar* g_get_os_info (const gchar* key_name);
// char* g_get_os_info (const char* key_name);
std::string get_os_info (const std::string & key_name) noexcept
{
  typedef char* (*call_wrap_t) (const char* key_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_os_info;
  auto key_name_to_c = gi::unwrap (key_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (key_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_get_prgname ();
// const char* g_get_prgname ();
std::string get_prgname () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_prgname;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_get_real_name ();
// const char* g_get_real_name ();
std::string get_real_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_real_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint64 g_get_real_time ();
// gint64 g_get_real_time ();
gint64 get_real_time () noexcept
{
  typedef gint64 (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_real_time;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// const gchar* const* g_get_system_config_dirs ();
// const char** g_get_system_config_dirs ();
std::vector<std::string> get_system_config_dirs () noexcept
{
  typedef const char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_system_config_dirs;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// const gchar* const* g_get_system_data_dirs ();
// const char** g_get_system_data_dirs ();
std::vector<std::string> get_system_data_dirs () noexcept
{
  typedef const char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_system_data_dirs;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// const gchar* g_get_tmp_dir ();
// const char* g_get_tmp_dir ();
std::string get_tmp_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_tmp_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_get_user_cache_dir ();
// const char* g_get_user_cache_dir ();
std::string get_user_cache_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_user_cache_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_get_user_config_dir ();
// const char* g_get_user_config_dir ();
std::string get_user_config_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_user_config_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_get_user_data_dir ();
// const char* g_get_user_data_dir ();
std::string get_user_data_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_user_data_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_get_user_name ();
// const char* g_get_user_name ();
std::string get_user_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_user_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_get_user_runtime_dir ();
// const char* g_get_user_runtime_dir ();
std::string get_user_runtime_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_user_runtime_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_get_user_special_dir (GUserDirectory directory);
// const char* g_get_user_special_dir (::GUserDirectory directory);
std::string get_user_special_dir (GLib::UserDirectory directory) noexcept
{
  typedef const char* (*call_wrap_t) (::GUserDirectory directory);
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_user_special_dir;
  auto directory_to_c = gi::unwrap (directory);
  auto _temp_ret = call_wrap_v ((::GUserDirectory) (directory_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_get_user_state_dir ();
// const char* g_get_user_state_dir ();
std::string get_user_state_dir () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_get_user_state_dir;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_getenv (const gchar* variable);
// const char* g_getenv (const char* variable);
std::string getenv (const std::string & variable) noexcept
{
  typedef const char* (*call_wrap_t) (const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_getenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (variable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_hostname_is_ascii_encoded (const gchar* hostname);
// gboolean g_hostname_is_ascii_encoded (const char* hostname);
bool hostname_is_ascii_encoded (const std::string & hostname) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* hostname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_hostname_is_ascii_encoded;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c));
  return _temp_ret;
}

// gboolean g_hostname_is_ip_address (const gchar* hostname);
// gboolean g_hostname_is_ip_address (const char* hostname);
bool hostname_is_ip_address (const std::string & hostname) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* hostname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_hostname_is_ip_address;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c));
  return _temp_ret;
}

// gboolean g_hostname_is_non_ascii (const gchar* hostname);
// gboolean g_hostname_is_non_ascii (const char* hostname);
bool hostname_is_non_ascii (const std::string & hostname) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* hostname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_hostname_is_non_ascii;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c));
  return _temp_ret;
}

// gchar* g_hostname_to_ascii (const gchar* hostname);
// char* g_hostname_to_ascii (const char* hostname);
std::string hostname_to_ascii (const std::string & hostname) noexcept
{
  typedef char* (*call_wrap_t) (const char* hostname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_hostname_to_ascii;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_hostname_to_unicode (const gchar* hostname);
// char* g_hostname_to_unicode (const char* hostname);
std::string hostname_to_unicode (const std::string & hostname) noexcept
{
  typedef char* (*call_wrap_t) (const char* hostname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_hostname_to_unicode;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (hostname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gsize g_iconv (GIConv converter, gchar** inbuf, gsize* inbytes_left, gchar** outbuf, gsize* outbytes_left);
// gsize g_iconv ( converter, char* inbuf, gsize inbytes_left, char* outbuf, gsize outbytes_left);
// IGNORE; not introspectable, inconsistent in outbytes_left pointer depth (1 vs 0), inconsistent in outbuf pointer depth (2 vs 1), inconsistent in inbytes_left pointer depth (1 vs 0), inconsistent in inbuf pointer depth (2 vs 1), converter type  not supported

// guint g_idle_add (GSourceFunc function, gpointer data);
// guint g_idle_add (GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by idle_add_full

// guint g_idle_add_full (gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint g_idle_add_full (gint priority, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
guint idle_add (gint priority, GLib::SourceFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) g_idle_add_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (GLib::SourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// gboolean g_idle_remove_by_data (gpointer data);
// gboolean g_idle_remove_by_data (void* data);
bool idle_remove_by_data (void* data) noexcept
{
  typedef gboolean (*call_wrap_t) (void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_idle_remove_by_data;
  auto data_to_c = data;
  auto _temp_ret = call_wrap_v ((void*) (data_to_c));
  return _temp_ret;
}

// GSource* g_idle_source_new ();
// ::GSource* g_idle_source_new ();
GLib::Source idle_source_new () noexcept
{
  typedef ::GSource* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_idle_source_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_int64_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_int64_equal (const void* v1, const void* v2);
bool int64_equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_int64_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// guint g_int64_hash (gconstpointer v);
// guint g_int64_hash (const void* v);
guint int64_hash (const void* v) noexcept
{
  typedef guint (*call_wrap_t) (const void* v);
  call_wrap_t call_wrap_v = (call_wrap_t) g_int64_hash;
  auto v_to_c = v;
  auto _temp_ret = call_wrap_v ((const void*) (v_to_c));
  return _temp_ret;
}

// gboolean g_int_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_int_equal (const void* v1, const void* v2);
bool int_equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_int_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// guint g_int_hash (gconstpointer v);
// guint g_int_hash (const void* v);
guint int_hash (const void* v) noexcept
{
  typedef guint (*call_wrap_t) (const void* v);
  call_wrap_t call_wrap_v = (call_wrap_t) g_int_hash;
  auto v_to_c = v;
  auto _temp_ret = call_wrap_v ((const void*) (v_to_c));
  return _temp_ret;
}

// const gchar* g_intern_static_string (const gchar* string);
// const char* g_intern_static_string (const char* string);
std::string intern_static_string (const std::string & string) noexcept
{
  typedef const char* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_intern_static_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::string intern_static_string () noexcept
{
  typedef const char* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_intern_static_string;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_intern_string (const gchar* string);
// const char* g_intern_string (const char* string);
std::string intern_string (const std::string & string) noexcept
{
  typedef const char* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_intern_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::string intern_string () noexcept
{
  typedef const char* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_intern_string;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint g_io_add_watch (GIOChannel* channel, GIOCondition condition, GIOFunc func, gpointer user_data);
// guint g_io_add_watch (::GIOChannel* channel, ::GIOCondition condition,  func, void* user_data);
// IGNORE; not introspectable; shadowed-by io_add_watch_full

// guint g_io_add_watch_full (GIOChannel* channel, gint priority, GIOCondition condition, GIOFunc func, gpointer user_data, GDestroyNotify notify);
// guint g_io_add_watch_full (::GIOChannel* channel, gint priority, ::GIOCondition condition,  func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; func type  not supported

// GSource* g_io_create_watch (GIOChannel* channel, GIOCondition condition);
// ::GSource* g_io_create_watch (::GIOChannel* channel, ::GIOCondition condition);
GLib::Source io_create_watch (GLib::IOChannel channel, GLib::IOCondition condition) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GIOChannel* channel, ::GIOCondition condition);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_create_watch;
  auto condition_to_c = gi::unwrap (condition);
  auto channel_to_c = gi::unwrap (channel, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIOChannel*) (channel_to_c), (::GIOCondition) (condition_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** g_listenv ();
// char** g_listenv ();
std::vector<std::string> listenv () noexcept
{
  typedef char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_listenv;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gchar* g_locale_from_utf8 (const gchar* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* g_locale_from_utf8 (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
std::vector<guint8> locale_from_utf8 (const std::string & utf8string, gssize len, gsize * bytes_read)
{
  typedef guint8* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_locale_from_utf8;
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none, gi::direction_in);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), &error);
  if (bytes_read) *bytes_read = bytes_read_o;
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  gi::check_error (error);
  return _temp_ret;
}
std::vector<guint8> locale_from_utf8 (const std::string & utf8string, gssize len, gsize * bytes_read, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_locale_from_utf8;
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none, gi::direction_in);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  if (bytes_read) *bytes_read = bytes_read_o;
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<std::vector<guint8>, gsize> locale_from_utf8 (const std::string & utf8string, gssize len)
{
  typedef guint8* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_locale_from_utf8;
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none, gi::direction_in);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), &error);
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_read_o);
}
std::tuple<std::vector<guint8>, gsize> locale_from_utf8 (const std::string & utf8string, gssize len, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_locale_from_utf8;
  gsize bytes_read_o {};
  auto len_to_c = len;
  auto utf8string_to_c = gi::unwrap (utf8string, gi::transfer_none, gi::direction_in);
  gsize bytes_written;
  std::vector<guint8> _temp_ret;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((const char*) (utf8string_to_c), (gssize) (len_to_c), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written), _error ? &_error_o : nullptr);
  _temp_ret.resize(bytes_written);
  detail::wrap_array (_ret_o, gi::transfer_full, bytes_written, _temp_ret.data());
  g_free (_ret_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_read_o);
}

// gchar* g_locale_to_utf8 (const gchar* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* g_locale_to_utf8 (const guint8* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
std::string locale_to_utf8 (guint8 * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written)
{
  typedef char* (*call_wrap_t) (const guint8* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_locale_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto opsysstring_i = detail::make_list_unwrap_range (opsysstring, len, false);
  auto opsysstring_w = unwrap (opsysstring_i, gi::transfer_none, direction_in);
  auto opsysstring_to_c = opsysstring_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const guint8*) (opsysstring_to_c), (gssize) (opsysstring_w.size()), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string locale_to_utf8 (guint8 * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_locale_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto opsysstring_i = detail::make_list_unwrap_range (opsysstring, len, false);
  auto opsysstring_w = unwrap (opsysstring_i, gi::transfer_none, direction_in);
  auto opsysstring_to_c = opsysstring_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const guint8*) (opsysstring_to_c), (gssize) (opsysstring_w.size()), (gsize*) (bytes_read ? &bytes_read_o : nullptr), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (bytes_read) *bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, gsize, gsize> locale_to_utf8 (guint8 * opsysstring, gssize len)
{
  typedef char* (*call_wrap_t) (const guint8* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_locale_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto opsysstring_i = detail::make_list_unwrap_range (opsysstring, len, false);
  auto opsysstring_w = unwrap (opsysstring_i, gi::transfer_none, direction_in);
  auto opsysstring_to_c = opsysstring_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const guint8*) (opsysstring_to_c), (gssize) (opsysstring_w.size()), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), bytes_read_o, bytes_written_o);
}
std::tuple<std::string, gsize, gsize> locale_to_utf8 (guint8 * opsysstring, gssize len, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_locale_to_utf8;
  gsize bytes_written_o {};
  gsize bytes_read_o {};
  auto opsysstring_i = detail::make_list_unwrap_range (opsysstring, len, false);
  auto opsysstring_w = unwrap (opsysstring_i, gi::transfer_none, direction_in);
  auto opsysstring_to_c = opsysstring_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const guint8*) (opsysstring_to_c), (gssize) (opsysstring_w.size()), (gsize*) (&bytes_read_o), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), bytes_read_o, bytes_written_o);
}

// void g_log (const gchar* log_domain, GLogLevelFlags log_level, const gchar* format);
// void g_log (const char* log_domain, ::GLogLevelFlags log_level, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_log_default_handler (const gchar* log_domain, GLogLevelFlags log_level, const gchar* message, gpointer unused_data);
// void g_log_default_handler (const char* log_domain, ::GLogLevelFlags log_level, const char* message, void* unused_data);
void log_default_handler (const std::string & log_domain, GLib::LogLevelFlags log_level, const std::string & message, void* unused_data) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, const char* message, void* unused_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_default_handler;
  auto unused_data_to_c = unused_data;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (const char*) (message_to_c), (void*) (unused_data_to_c));
}
void log_default_handler (GLib::LogLevelFlags log_level, void* unused_data) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, const char* message, void* unused_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_default_handler;
  auto unused_data_to_c = unused_data;
  auto message_to_c = nullptr;
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = nullptr;
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (const char*) (message_to_c), (void*) (unused_data_to_c));
}

// gboolean g_log_get_debug_enabled ();
// gboolean g_log_get_debug_enabled ();
bool log_get_debug_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_get_debug_enabled;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_log_remove_handler (const gchar* log_domain, guint handler_id);
// void g_log_remove_handler (const char* log_domain, guint handler_id);
void log_remove_handler (const std::string & log_domain, guint handler_id) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, guint handler_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_remove_handler;
  auto handler_id_to_c = handler_id;
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (log_domain_to_c), (guint) (handler_id_to_c));
}

// GLogLevelFlags g_log_set_always_fatal (GLogLevelFlags fatal_mask);
// ::GLogLevelFlags g_log_set_always_fatal (::GLogLevelFlags fatal_mask);
GLib::LogLevelFlags log_set_always_fatal (GLib::LogLevelFlags fatal_mask) noexcept
{
  typedef ::GLogLevelFlags (*call_wrap_t) (::GLogLevelFlags fatal_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_set_always_fatal;
  auto fatal_mask_to_c = gi::unwrap (fatal_mask);
  auto _temp_ret = call_wrap_v ((::GLogLevelFlags) (fatal_mask_to_c));
  return gi::wrap (_temp_ret);
}

// void g_log_set_debug_enabled (gboolean enabled);
// void g_log_set_debug_enabled (gboolean enabled);
void log_set_debug_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_set_debug_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((gboolean) (enabled_to_c));
}

// FAILURE on g_log_set_default_handler; No such node (<xmlattr>.transfer-ownership)
// GLogLevelFlags g_log_set_fatal_mask (const gchar* log_domain, GLogLevelFlags fatal_mask);
// ::GLogLevelFlags g_log_set_fatal_mask (const char* log_domain, ::GLogLevelFlags fatal_mask);
GLib::LogLevelFlags log_set_fatal_mask (const std::string & log_domain, GLib::LogLevelFlags fatal_mask) noexcept
{
  typedef ::GLogLevelFlags (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags fatal_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_set_fatal_mask;
  auto fatal_mask_to_c = gi::unwrap (fatal_mask);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (fatal_mask_to_c));
  return gi::wrap (_temp_ret);
}

// guint g_log_set_handler (const gchar* log_domain, GLogLevelFlags log_levels, GLogFunc log_func, gpointer user_data);
// guint g_log_set_handler (const char* log_domain, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func, void* user_data);
// IGNORE; not introspectable; shadowed-by log_set_handler_full

// guint g_log_set_handler_full (const gchar* log_domain, GLogLevelFlags log_levels, GLogFunc log_func, gpointer user_data, GDestroyNotify destroy);
// guint g_log_set_handler_full (const char* log_domain, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
guint log_set_handler (const std::string & log_domain, GLib::LogLevelFlags log_levels, GLib::LogFunc log_func) noexcept
{
  typedef guint (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_set_handler_full;
  auto log_func_wrap_ = log_func ? unwrap (std::move (log_func), gi::scope_notified) : nullptr;
  auto log_levels_to_c = gi::unwrap (log_levels);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_levels_to_c), (GLib::LogFunc::cfunction_type) (log_func_wrap_ ? &log_func_wrap_->wrapper : nullptr), (void*) (log_func_wrap_), (GLib::DestroyNotify::cfunction_type) (log_func_wrap_ ? &log_func_wrap_->destroy : nullptr));
  return _temp_ret;
}
guint log_set_handler (GLib::LogLevelFlags log_levels, GLib::LogFunc log_func) noexcept
{
  typedef guint (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_set_handler_full;
  auto log_func_wrap_ = log_func ? unwrap (std::move (log_func), gi::scope_notified) : nullptr;
  auto log_levels_to_c = gi::unwrap (log_levels);
  auto log_domain_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_levels_to_c), (GLib::LogFunc::cfunction_type) (log_func_wrap_ ? &log_func_wrap_->wrapper : nullptr), (void*) (log_func_wrap_), (GLib::DestroyNotify::cfunction_type) (log_func_wrap_ ? &log_func_wrap_->destroy : nullptr));
  return _temp_ret;
}

// void g_log_set_writer_func (GLogWriterFunc func, gpointer user_data, GDestroyNotify user_data_free);
// void g_log_set_writer_func ( func, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free);
// SKIP; func type  not supported

// void g_log_structured (const gchar* log_domain, GLogLevelFlags log_level);
// void g_log_structured (const char* log_domain, ::GLogLevelFlags log_level);
// IGNORE; not introspectable, varargs not supported

// void g_log_structured_array (GLogLevelFlags log_level, const GLogField* fields, gsize n_fields);
// void g_log_structured_array (::GLogLevelFlags log_level, const ::GLogField** fields, gsize n_fields);
// SKIP; inconsistent in fields pointer depth (1 vs 2)

// void g_log_structured_standard (const gchar* log_domain, GLogLevelFlags log_level, const gchar* file, const gchar* line, const gchar* func, const gchar* message_format);
// void g_log_structured_standard (const char* log_domain, ::GLogLevelFlags log_level, const char* file, const char* line, const char* func, const char* message_format);
// IGNORE; not introspectable, varargs not supported

// void g_log_variant (const gchar* log_domain, GLogLevelFlags log_level, GVariant* fields);
// void g_log_variant (const char* log_domain, ::GLogLevelFlags log_level, ::GVariant* fields);
void log_variant (const std::string & log_domain, GLib::LogLevelFlags log_level, GLib::Variant fields) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, ::GVariant* fields);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_variant;
  auto fields_to_c = gi::unwrap (fields, gi::transfer_none, gi::direction_in);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (::GVariant*) (fields_to_c));
}
void log_variant (GLib::LogLevelFlags log_level, GLib::Variant fields) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, ::GVariant* fields);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_variant;
  auto fields_to_c = gi::unwrap (fields, gi::transfer_none, gi::direction_in);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = nullptr;
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (::GVariant*) (fields_to_c));
}

// GLogWriterOutput g_log_writer_default (GLogLevelFlags log_level, const GLogField* fields, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_default (::GLogLevelFlags log_level, const ::GLogField** fields, gsize n_fields, void* user_data);
// SKIP; inconsistent in fields pointer depth (1 vs 2)

// void g_log_writer_default_set_use_stderr (gboolean use_stderr);
// void g_log_writer_default_set_use_stderr (gboolean use_stderr);
void log_writer_default_set_use_stderr (gboolean use_stderr) noexcept
{
  typedef void (*call_wrap_t) (gboolean use_stderr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_writer_default_set_use_stderr;
  auto use_stderr_to_c = use_stderr;
  call_wrap_v ((gboolean) (use_stderr_to_c));
}

// gboolean g_log_writer_default_would_drop (GLogLevelFlags log_level, const char* log_domain);
// gboolean g_log_writer_default_would_drop (::GLogLevelFlags log_level, const char* log_domain);
bool log_writer_default_would_drop (GLib::LogLevelFlags log_level, const std::string & log_domain) noexcept
{
  typedef gboolean (*call_wrap_t) (::GLogLevelFlags log_level, const char* log_domain);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_writer_default_would_drop;
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none, gi::direction_in);
  auto log_level_to_c = gi::unwrap (log_level);
  auto _temp_ret = call_wrap_v ((::GLogLevelFlags) (log_level_to_c), (const char*) (log_domain_to_c));
  return _temp_ret;
}
bool log_writer_default_would_drop (GLib::LogLevelFlags log_level) noexcept
{
  typedef gboolean (*call_wrap_t) (::GLogLevelFlags log_level, const char* log_domain);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_writer_default_would_drop;
  auto log_domain_to_c = nullptr;
  auto log_level_to_c = gi::unwrap (log_level);
  auto _temp_ret = call_wrap_v ((::GLogLevelFlags) (log_level_to_c), (const char*) (log_domain_to_c));
  return _temp_ret;
}

// gchar* g_log_writer_format_fields (GLogLevelFlags log_level, const GLogField* fields, gsize n_fields, gboolean use_color);
// char* g_log_writer_format_fields (::GLogLevelFlags log_level, const ::GLogField** fields, gsize n_fields, gboolean use_color);
// SKIP; inconsistent in fields pointer depth (1 vs 2)

// gboolean g_log_writer_is_journald (gint output_fd);
// gboolean g_log_writer_is_journald (gint output_fd);
bool log_writer_is_journald (gint output_fd) noexcept
{
  typedef gboolean (*call_wrap_t) (gint output_fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_writer_is_journald;
  auto output_fd_to_c = output_fd;
  auto _temp_ret = call_wrap_v ((gint) (output_fd_to_c));
  return _temp_ret;
}

// GLogWriterOutput g_log_writer_journald (GLogLevelFlags log_level, const GLogField* fields, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_journald (::GLogLevelFlags log_level, const ::GLogField** fields, gsize n_fields, void* user_data);
// SKIP; inconsistent in fields pointer depth (1 vs 2)

// GLogWriterOutput g_log_writer_standard_streams (GLogLevelFlags log_level, const GLogField* fields, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_standard_streams (::GLogLevelFlags log_level, const ::GLogField** fields, gsize n_fields, void* user_data);
// SKIP; inconsistent in fields pointer depth (1 vs 2)

// gboolean g_log_writer_supports_color (gint output_fd);
// gboolean g_log_writer_supports_color (gint output_fd);
bool log_writer_supports_color (gint output_fd) noexcept
{
  typedef gboolean (*call_wrap_t) (gint output_fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_log_writer_supports_color;
  auto output_fd_to_c = output_fd;
  auto _temp_ret = call_wrap_v ((gint) (output_fd_to_c));
  return _temp_ret;
}

// void g_logv (const gchar* log_domain, GLogLevelFlags log_level, const gchar* format, va_list args);
// void g_logv (const char* log_domain, ::GLogLevelFlags log_level, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// GSource* g_main_current_source ();
// ::GSource* g_main_current_source ();
GLib::Source main_current_source () noexcept
{
  typedef ::GSource* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_current_source;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint g_main_depth ();
// gint g_main_depth ();
gint main_depth () noexcept
{
  typedef gint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_depth;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gpointer g_malloc (gsize n_bytes);
// void* g_malloc (gsize n_bytes);
gpointer malloc (gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_malloc;
  auto n_bytes_to_c = n_bytes;
  auto _temp_ret = call_wrap_v ((gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_malloc0 (gsize n_bytes);
// void* g_malloc0 (gsize n_bytes);
gpointer malloc0 (gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_malloc0;
  auto n_bytes_to_c = n_bytes;
  auto _temp_ret = call_wrap_v ((gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_malloc0_n (gsize n_blocks, gsize n_block_bytes);
// void* g_malloc0_n (gsize n_blocks, gsize n_block_bytes);
gpointer malloc0_n (gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_malloc0_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

// gpointer g_malloc_n (gsize n_blocks, gsize n_block_bytes);
// void* g_malloc_n (gsize n_blocks, gsize n_block_bytes);
gpointer malloc_n (gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_malloc_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

// gboolean g_markup_collect_attributes (const gchar* element_name, const gchar** attribute_names, const gchar** attribute_values, GError** error, GMarkupCollectType first_type, const gchar* first_attr);
// gboolean g_markup_collect_attributes (const char* element_name, const char* attribute_names, const char* attribute_values, ::GError* error, ::GMarkupCollectType first_type, const char* first_attr);
// IGNORE; not introspectable, varargs not supported

// GQuark g_markup_error_quark ();
// ::GQuark g_markup_error_quark ();
GLib::Quark markup_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gchar* g_markup_escape_text (const gchar* text, gssize length);
// char* g_markup_escape_text (const char* text, gssize length);
std::string markup_escape_text (const std::string & text, gssize length) noexcept
{
  typedef char* (*call_wrap_t) (const char* text, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_markup_escape_text;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c), (gssize) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_markup_printf_escaped (const char* format);
// char* g_markup_printf_escaped (const char* format);
// IGNORE; not introspectable, varargs not supported

// gchar* g_markup_vprintf_escaped (const char* format, va_list args);
// char* g_markup_vprintf_escaped (const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// gpointer g_memdup2 (gconstpointer mem, gsize byte_size);
// void* g_memdup2 (const void* mem, gsize byte_size);
gpointer memdup2 (const void* mem, gsize byte_size) noexcept
{
  typedef void* (*call_wrap_t) (const void* mem, gsize byte_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_memdup2;
  auto byte_size_to_c = byte_size;
  auto mem_to_c = mem;
  auto _temp_ret = call_wrap_v ((const void*) (mem_to_c), (gsize) (byte_size_to_c));
  return _temp_ret;
}

// gint g_mkdir_with_parents (const gchar* pathname, gint mode);
// gint g_mkdir_with_parents (const char* pathname, gint mode);
gint mkdir_with_parents (const std::string & pathname, gint mode) noexcept
{
  typedef gint (*call_wrap_t) (const char* pathname, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mkdir_with_parents;
  auto mode_to_c = mode;
  auto pathname_to_c = gi::unwrap (pathname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (pathname_to_c), (gint) (mode_to_c));
  return _temp_ret;
}

// gchar* g_mkdtemp (gchar* tmpl);
// char* g_mkdtemp (char* tmpl);
std::string mkdtemp (const std::string & tmpl) noexcept
{
  typedef char* (*call_wrap_t) (char* tmpl);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mkdtemp;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (tmpl_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_mkdtemp_full (gchar* tmpl, gint mode);
// char* g_mkdtemp_full (char* tmpl, gint mode);
std::string mkdtemp_full (const std::string & tmpl, gint mode) noexcept
{
  typedef char* (*call_wrap_t) (char* tmpl, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mkdtemp_full;
  auto mode_to_c = mode;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (tmpl_to_c), (gint) (mode_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint g_mkstemp (gchar* tmpl);
// gint g_mkstemp (char* tmpl);
gint mkstemp (const std::string & tmpl) noexcept
{
  typedef gint (*call_wrap_t) (char* tmpl);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mkstemp;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (tmpl_to_c));
  return _temp_ret;
}

// gint g_mkstemp_full (gchar* tmpl, gint flags, gint mode);
// gint g_mkstemp_full (char* tmpl, gint flags, gint mode);
gint mkstemp_full (const std::string & tmpl, gint flags, gint mode) noexcept
{
  typedef gint (*call_wrap_t) (char* tmpl, gint flags, gint mode);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mkstemp_full;
  auto mode_to_c = mode;
  auto flags_to_c = flags;
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (tmpl_to_c), (gint) (flags_to_c), (gint) (mode_to_c));
  return _temp_ret;
}

// void g_nullify_pointer (gpointer* nullify_location);
// void g_nullify_pointer (void* nullify_location);
// SKIP; inconsistent in nullify_location pointer depth (2 vs 1)

// GQuark g_number_parser_error_quark ();
// ::GQuark g_number_parser_error_quark ();
GLib::Quark number_parser_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_number_parser_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_on_error_query (const gchar* prg_name);
// void g_on_error_query (const char* prg_name);
void on_error_query (const std::string & prg_name) noexcept
{
  typedef void (*call_wrap_t) (const char* prg_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_on_error_query;
  auto prg_name_to_c = gi::unwrap (prg_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (prg_name_to_c));
}

// void g_on_error_stack_trace (const gchar* prg_name);
// void g_on_error_stack_trace (const char* prg_name);
void on_error_stack_trace (const std::string & prg_name) noexcept
{
  typedef void (*call_wrap_t) (const char* prg_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_on_error_stack_trace;
  auto prg_name_to_c = gi::unwrap (prg_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (prg_name_to_c));
}

// GQuark g_option_error_quark ();
// ::GQuark g_option_error_quark ();
GLib::Quark option_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_option_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint g_parse_debug_string (const gchar* string, const GDebugKey* keys, guint nkeys);
// guint g_parse_debug_string (const char* string, const ::GDebugKey** keys, guint nkeys);
// SKIP; inconsistent in keys pointer depth (1 vs 2)

// gchar* g_path_get_basename (const gchar* file_name);
// char* g_path_get_basename (const char* file_name);
std::string path_get_basename (const std::string & file_name) noexcept
{
  typedef char* (*call_wrap_t) (const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_path_get_basename;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_path_get_dirname (const gchar* file_name);
// char* g_path_get_dirname (const char* file_name);
std::string path_get_dirname (const std::string & file_name) noexcept
{
  typedef char* (*call_wrap_t) (const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_path_get_dirname;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_path_is_absolute (const gchar* file_name);
// gboolean g_path_is_absolute (const char* file_name);
bool path_is_absolute (const std::string & file_name) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_path_is_absolute;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c));
  return _temp_ret;
}

// const gchar* g_path_skip_root (const gchar* file_name);
// const char* g_path_skip_root (const char* file_name);
std::string path_skip_root (const std::string & file_name) noexcept
{
  typedef const char* (*call_wrap_t) (const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_path_skip_root;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_pattern_match_simple (const gchar* pattern, const gchar* string);
// gboolean g_pattern_match_simple (const char* pattern, const char* string);
bool pattern_match_simple (const std::string & pattern, const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* pattern, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pattern_match_simple;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c), (const char*) (string_to_c));
  return _temp_ret;
}

// void g_pointer_bit_lock (void* address, gint lock_bit);
// void g_pointer_bit_lock (void* address, gint lock_bit);
void pointer_bit_lock (void* address, gint lock_bit) noexcept
{
  typedef void (*call_wrap_t) (void* address, gint lock_bit);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pointer_bit_lock;
  auto lock_bit_to_c = lock_bit;
  auto address_to_c = address;
  call_wrap_v ((void*) (address_to_c), (gint) (lock_bit_to_c));
}

// gboolean g_pointer_bit_trylock (void* address, gint lock_bit);
// gboolean g_pointer_bit_trylock (void* address, gint lock_bit);
bool pointer_bit_trylock (void* address, gint lock_bit) noexcept
{
  typedef gboolean (*call_wrap_t) (void* address, gint lock_bit);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pointer_bit_trylock;
  auto lock_bit_to_c = lock_bit;
  auto address_to_c = address;
  auto _temp_ret = call_wrap_v ((void*) (address_to_c), (gint) (lock_bit_to_c));
  return _temp_ret;
}

// void g_pointer_bit_unlock (void* address, gint lock_bit);
// void g_pointer_bit_unlock (void* address, gint lock_bit);
void pointer_bit_unlock (void* address, gint lock_bit) noexcept
{
  typedef void (*call_wrap_t) (void* address, gint lock_bit);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pointer_bit_unlock;
  auto lock_bit_to_c = lock_bit;
  auto address_to_c = address;
  call_wrap_v ((void*) (address_to_c), (gint) (lock_bit_to_c));
}

// gint g_poll (GPollFD* fds, guint nfds, gint timeout);
// gint g_poll (::GPollFD* fds, guint nfds, gint timeout);
gint poll (GLib::PollFD fds, guint nfds, gint timeout) noexcept
{
  typedef gint (*call_wrap_t) (::GPollFD* fds, guint nfds, gint timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) g_poll;
  auto timeout_to_c = timeout;
  auto nfds_to_c = nfds;
  auto fds_to_c = gi::unwrap (fds, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GPollFD*) (fds_to_c), (guint) (nfds_to_c), (gint) (timeout_to_c));
  return _temp_ret;
}

// void g_prefix_error (GError** err, const gchar* format);
// void g_prefix_error (::GError** err, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_prefix_error_literal (GError** err, const gchar* prefix);
// void g_prefix_error_literal (::GError* err, const char* prefix);
// SKIP; inconsistent in err pointer depth (2 vs 1)

// void g_print (const gchar* format);
// void g_print (const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_printerr (const gchar* format);
// void g_printerr (const char* format);
// IGNORE; not introspectable, varargs not supported

// gsize g_printf_string_upper_bound (const gchar* format, va_list args);
// gsize g_printf_string_upper_bound (const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// void g_propagate_error (GError** dest, GError* src);
// void g_propagate_error (::GError** dest, ::GError* src);
void propagate_error (GLib::Error * dest, GLib::Error src) noexcept
{
  typedef void (*call_wrap_t) (::GError** dest, ::GError* src);
  call_wrap_t call_wrap_v = (call_wrap_t) g_propagate_error;
  auto src_to_c = gi::unwrap (src, gi::transfer_full, gi::direction_in);
  ::GError* dest_o {};
  call_wrap_v ((::GError**) (dest ? &dest_o : nullptr), (::GError*) (src_to_c));
  if (dest) *dest = gi::wrap (dest_o, gi::transfer_full, gi::direction_out);
}
GLib::Error propagate_error (GLib::Error src) noexcept
{
  typedef void (*call_wrap_t) (::GError** dest, ::GError* src);
  call_wrap_t call_wrap_v = (call_wrap_t) g_propagate_error;
  auto src_to_c = gi::unwrap (src, gi::transfer_full, gi::direction_in);
  ::GError* dest_o {};
  call_wrap_v ((::GError**) (&dest_o), (::GError*) (src_to_c));
  return gi::wrap (dest_o, gi::transfer_full, gi::direction_out);
}

// void g_propagate_prefixed_error (GError** dest, GError* src, const gchar* format);
// void g_propagate_prefixed_error (::GError* dest, ::GError* src, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_qsort_with_data (gconstpointer pbase, gint total_elems, gsize size, GCompareDataFunc compare_func, gpointer user_data);
// void g_qsort_with_data (const void* pbase, gint total_elems, gsize size, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// GQuark g_quark_from_static_string (const gchar* string);
// ::GQuark g_quark_from_static_string (const char* string);
GLib::Quark quark_from_static_string (const std::string & string) noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_quark_from_static_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}
GLib::Quark quark_from_static_string () noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_quark_from_static_string;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// GQuark g_quark_from_string (const gchar* string);
// ::GQuark g_quark_from_string (const char* string);
GLib::Quark quark_from_string (const std::string & string) noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_quark_from_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}
GLib::Quark quark_from_string () noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_quark_from_string;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// const gchar* g_quark_to_string (GQuark quark);
// const char* g_quark_to_string (::GQuark quark);
std::string quark_to_string (::GQuark quark) noexcept
{
  typedef const char* (*call_wrap_t) (::GQuark quark);
  call_wrap_t call_wrap_v = (call_wrap_t) g_quark_to_string;
  auto quark_to_c = quark;
  auto _temp_ret = call_wrap_v ((::GQuark) (quark_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GQuark g_quark_try_string (const gchar* string);
// ::GQuark g_quark_try_string (const char* string);
GLib::Quark quark_try_string (const std::string & string) noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_quark_try_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}
GLib::Quark quark_try_string () noexcept
{
  typedef ::GQuark (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_quark_try_string;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gdouble g_random_double ();
// gdouble g_random_double ();
gdouble random_double () noexcept
{
  typedef gdouble (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_random_double;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gdouble g_random_double_range (gdouble begin, gdouble end);
// gdouble g_random_double_range (gdouble begin, gdouble end);
gdouble random_double_range (gdouble begin, gdouble end) noexcept
{
  typedef gdouble (*call_wrap_t) (gdouble begin, gdouble end);
  call_wrap_t call_wrap_v = (call_wrap_t) g_random_double_range;
  auto end_to_c = end;
  auto begin_to_c = begin;
  auto _temp_ret = call_wrap_v ((gdouble) (begin_to_c), (gdouble) (end_to_c));
  return _temp_ret;
}

// guint32 g_random_int ();
// guint32 g_random_int ();
guint32 random_int () noexcept
{
  typedef guint32 (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_random_int;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gint32 g_random_int_range (gint32 begin, gint32 end);
// gint32 g_random_int_range (gint32 begin, gint32 end);
gint32 random_int_range (gint32 begin, gint32 end) noexcept
{
  typedef gint32 (*call_wrap_t) (gint32 begin, gint32 end);
  call_wrap_t call_wrap_v = (call_wrap_t) g_random_int_range;
  auto end_to_c = end;
  auto begin_to_c = begin;
  auto _temp_ret = call_wrap_v ((gint32) (begin_to_c), (gint32) (end_to_c));
  return _temp_ret;
}

// void g_random_set_seed (guint32 seed);
// void g_random_set_seed (guint32 seed);
void random_set_seed (guint32 seed) noexcept
{
  typedef void (*call_wrap_t) (guint32 seed);
  call_wrap_t call_wrap_v = (call_wrap_t) g_random_set_seed;
  auto seed_to_c = seed;
  call_wrap_v ((guint32) (seed_to_c));
}

// gpointer g_rc_box_acquire (gpointer mem_block);
// void* g_rc_box_acquire (void* mem_block);
gpointer rc_box_acquire (void* mem_block) noexcept
{
  typedef void* (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rc_box_acquire;
  auto mem_block_to_c = mem_block;
  auto _temp_ret = call_wrap_v ((void*) (mem_block_to_c));
  return _temp_ret;
}

// gpointer g_rc_box_alloc (gsize block_size);
// void* g_rc_box_alloc (gsize block_size);
gpointer rc_box_alloc (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rc_box_alloc;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_rc_box_alloc0 (gsize block_size);
// void* g_rc_box_alloc0 (gsize block_size);
gpointer rc_box_alloc0 (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rc_box_alloc0;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_rc_box_dup (gsize block_size, gconstpointer mem_block);
// void* g_rc_box_dup (gsize block_size, const void* mem_block);
gpointer rc_box_dup (gsize block_size, const void* mem_block) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size, const void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rc_box_dup;
  auto mem_block_to_c = mem_block;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c), (const void*) (mem_block_to_c));
  return _temp_ret;
}

// gsize g_rc_box_get_size (gpointer mem_block);
// gsize g_rc_box_get_size (void* mem_block);
gsize rc_box_get_size (void* mem_block) noexcept
{
  typedef gsize (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rc_box_get_size;
  auto mem_block_to_c = mem_block;
  auto _temp_ret = call_wrap_v ((void*) (mem_block_to_c));
  return _temp_ret;
}

// void g_rc_box_release (gpointer mem_block);
// void g_rc_box_release (void* mem_block);
void rc_box_release (void* mem_block) noexcept
{
  typedef void (*call_wrap_t) (void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rc_box_release;
  auto mem_block_to_c = mem_block;
  call_wrap_v ((void*) (mem_block_to_c));
}

// void g_rc_box_release_full (gpointer mem_block, GDestroyNotify clear_func);
// void g_rc_box_release_full (void* mem_block, GLib::DestroyNotify::cfunction_type clear_func);
// SKIP; callback misses closure info

// gpointer g_realloc (gpointer mem, gsize n_bytes);
// void* g_realloc (void* mem, gsize n_bytes);
gpointer realloc (void* mem, gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (void* mem, gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_realloc;
  auto n_bytes_to_c = n_bytes;
  auto mem_to_c = mem;
  auto _temp_ret = call_wrap_v ((void*) (mem_to_c), (gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_realloc_n (gpointer mem, gsize n_blocks, gsize n_block_bytes);
// void* g_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes);
gpointer realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (void* mem, gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_realloc_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto mem_to_c = mem;
  auto _temp_ret = call_wrap_v ((void*) (mem_to_c), (gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

// gboolean g_ref_count_compare (grefcount* rc, gint val);
// gboolean g_ref_count_compare (gint rc, gint val);
// SKIP; inconsistent in rc pointer depth (1 vs 0)

// gboolean g_ref_count_dec (grefcount* rc);
// gboolean g_ref_count_dec (gint rc);
// SKIP; inconsistent in rc pointer depth (1 vs 0)

// void g_ref_count_inc (grefcount* rc);
// void g_ref_count_inc (gint rc);
// SKIP; inconsistent in rc pointer depth (1 vs 0)

// void g_ref_count_init (grefcount* rc);
// void g_ref_count_init (gint rc);
// SKIP; inconsistent in rc pointer depth (1 vs 0)

// char* g_ref_string_acquire (char* str);
// char* g_ref_string_acquire (char* str);
std::string ref_string_acquire (const std::string & str) noexcept
{
  typedef char* (*call_wrap_t) (char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ref_string_acquire;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gsize g_ref_string_length (char* str);
// gsize g_ref_string_length (char* str);
gsize ref_string_length (const std::string & str) noexcept
{
  typedef gsize (*call_wrap_t) (char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ref_string_length;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (str_to_c));
  return _temp_ret;
}

// char* g_ref_string_new (const char* str);
// char* g_ref_string_new (const char* str);
std::string ref_string_new (const std::string & str) noexcept
{
  typedef char* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ref_string_new;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_ref_string_new_intern (const char* str);
// char* g_ref_string_new_intern (const char* str);
std::string ref_string_new_intern (const std::string & str) noexcept
{
  typedef char* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ref_string_new_intern;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_ref_string_new_len (const char* str, gssize len);
// char* g_ref_string_new_len (const char* str, gssize len);
std::string ref_string_new_len (const std::string & str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ref_string_new_len;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_ref_string_release (char* str);
// void g_ref_string_release (char* str);
void ref_string_release (const std::string & str) noexcept
{
  typedef void (*call_wrap_t) (char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) g_ref_string_release;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  call_wrap_v ((char*) (str_to_c));
}

// void g_reload_user_special_dirs_cache ();
// void g_reload_user_special_dirs_cache ();
void reload_user_special_dirs_cache () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_reload_user_special_dirs_cache;
  call_wrap_v ();
}

// void g_return_if_fail_warning (const char* log_domain, const char* pretty_function, const char* expression);
// void g_return_if_fail_warning (const char* log_domain, const char* pretty_function, const char* expression);
void return_if_fail_warning (const std::string & log_domain, const std::string & pretty_function, const std::string & expression) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, const char* pretty_function, const char* expression);
  call_wrap_t call_wrap_v = (call_wrap_t) g_return_if_fail_warning;
  auto expression_to_c = gi::unwrap (expression, gi::transfer_none, gi::direction_in);
  auto pretty_function_to_c = gi::unwrap (pretty_function, gi::transfer_none, gi::direction_in);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (log_domain_to_c), (const char*) (pretty_function_to_c), (const char*) (expression_to_c));
}
void return_if_fail_warning (const std::string & pretty_function) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, const char* pretty_function, const char* expression);
  call_wrap_t call_wrap_v = (call_wrap_t) g_return_if_fail_warning;
  auto expression_to_c = nullptr;
  auto pretty_function_to_c = gi::unwrap (pretty_function, gi::transfer_none, gi::direction_in);
  auto log_domain_to_c = nullptr;
  call_wrap_v ((const char*) (log_domain_to_c), (const char*) (pretty_function_to_c), (const char*) (expression_to_c));
}

// int g_rmdir (const gchar* filename);
// gint g_rmdir (const char* filename);
gint rmdir (const std::string & filename) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rmdir;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return _temp_ret;
}

// void g_set_application_name (const gchar* application_name);
// void g_set_application_name (const char* application_name);
void set_application_name (const std::string & application_name) noexcept
{
  typedef void (*call_wrap_t) (const char* application_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_set_application_name;
  auto application_name_to_c = gi::unwrap (application_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (application_name_to_c));
}

// void g_set_error (GError** err, GQuark domain, gint code, const gchar* format);
// void g_set_error (::GError** err, ::GQuark domain, gint code, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_set_error_literal (GError** err, GQuark domain, gint code, const gchar* message);
// void g_set_error_literal (::GError** err, ::GQuark domain, gint code, const char* message);
void set_error_literal (GLib::Error * err, ::GQuark domain, gint code, const std::string & message) noexcept
{
  typedef void (*call_wrap_t) (::GError** err, ::GQuark domain, gint code, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_set_error_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto code_to_c = code;
  auto domain_to_c = domain;
  ::GError* err_o {};
  call_wrap_v ((::GError**) (err ? &err_o : nullptr), (::GQuark) (domain_to_c), (gint) (code_to_c), (const char*) (message_to_c));
  if (err) *err = gi::wrap (err_o, gi::transfer_full, gi::direction_out);
}
GLib::Error set_error_literal (::GQuark domain, gint code, const std::string & message) noexcept
{
  typedef void (*call_wrap_t) (::GError** err, ::GQuark domain, gint code, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_set_error_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto code_to_c = code;
  auto domain_to_c = domain;
  ::GError* err_o {};
  call_wrap_v ((::GError**) (&err_o), (::GQuark) (domain_to_c), (gint) (code_to_c), (const char*) (message_to_c));
  return gi::wrap (err_o, gi::transfer_full, gi::direction_out);
}

// void g_set_prgname (const gchar* prgname);
// void g_set_prgname (const char* prgname);
void set_prgname (const std::string & prgname) noexcept
{
  typedef void (*call_wrap_t) (const char* prgname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_set_prgname;
  auto prgname_to_c = gi::unwrap (prgname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (prgname_to_c));
}

// FAILURE on g_set_print_handler; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_set_printerr_handler; No such node (<xmlattr>.transfer-ownership)
// gboolean g_setenv (const gchar* variable, const gchar* value, gboolean overwrite);
// gboolean g_setenv (const char* variable, const char* value, gboolean overwrite);
bool setenv (const std::string & variable, const std::string & value, gboolean overwrite) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* variable, const char* value, gboolean overwrite);
  call_wrap_t call_wrap_v = (call_wrap_t) g_setenv;
  auto overwrite_to_c = overwrite;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (variable_to_c), (const char*) (value_to_c), (gboolean) (overwrite_to_c));
  return _temp_ret;
}

// GQuark g_shell_error_quark ();
// ::GQuark g_shell_error_quark ();
GLib::Quark shell_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_shell_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean g_shell_parse_argv (const gchar* command_line, gint* argcp, gchar*** argvp, GError ** error);
// gboolean g_shell_parse_argv (const char* command_line, gint* argcp, char*** argvp, GError ** error);
bool shell_parse_argv (const std::string & command_line, gint * argcp, std::vector<std::string> * argvp)
{
  typedef gboolean (*call_wrap_t) (const char* command_line, gint* argcp, char*** argvp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_shell_parse_argv;
  char** argvp_o {};
  gint argcp_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (gint*) (argcp ? &argcp_o : nullptr), (char***) (argvp ? &argvp_o : nullptr), &error);
  if (argvp) *argvp = gi::detail::wrap_list<std::string> (argvp_o, gi::transfer_full);
  if (argcp) *argcp = argcp_o;
  gi::check_error (error);
  return _temp_ret;
}
bool shell_parse_argv (const std::string & command_line, gint * argcp, std::vector<std::string> * argvp, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* command_line, gint* argcp, char*** argvp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_shell_parse_argv;
  char** argvp_o {};
  gint argcp_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (gint*) (argcp ? &argcp_o : nullptr), (char***) (argvp ? &argvp_o : nullptr), _error ? &_error_o : nullptr);
  if (argvp) *argvp = gi::detail::wrap_list<std::string> (argvp_o, gi::transfer_full);
  if (argcp) *argcp = argcp_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, gint, std::vector<std::string>> shell_parse_argv (const std::string & command_line)
{
  typedef gboolean (*call_wrap_t) (const char* command_line, gint* argcp, char*** argvp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_shell_parse_argv;
  char** argvp_o {};
  gint argcp_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (gint*) (&argcp_o), (char***) (&argvp_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, argcp_o, gi::detail::wrap_list<std::string> (argvp_o, gi::transfer_full));
}
std::tuple<bool, gint, std::vector<std::string>> shell_parse_argv (const std::string & command_line, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* command_line, gint* argcp, char*** argvp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_shell_parse_argv;
  char** argvp_o {};
  gint argcp_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (gint*) (&argcp_o), (char***) (&argvp_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, argcp_o, gi::detail::wrap_list<std::string> (argvp_o, gi::transfer_full));
}

// gchar* g_shell_quote (const gchar* unquoted_string);
// char* g_shell_quote (const char* unquoted_string);
std::string shell_quote (const std::string & unquoted_string) noexcept
{
  typedef char* (*call_wrap_t) (const char* unquoted_string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_shell_quote;
  auto unquoted_string_to_c = gi::unwrap (unquoted_string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (unquoted_string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_shell_unquote (const gchar* quoted_string, GError ** error);
// char* g_shell_unquote (const char* quoted_string, GError ** error);
std::string shell_unquote (const std::string & quoted_string)
{
  typedef char* (*call_wrap_t) (const char* quoted_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_shell_unquote;
  auto quoted_string_to_c = gi::unwrap (quoted_string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (quoted_string_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string shell_unquote (const std::string & quoted_string, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (const char* quoted_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_shell_unquote;
  auto quoted_string_to_c = gi::unwrap (quoted_string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (quoted_string_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gpointer g_slice_alloc (gsize block_size);
// void* g_slice_alloc (gsize block_size);
gpointer slice_alloc (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_slice_alloc;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_slice_alloc0 (gsize block_size);
// void* g_slice_alloc0 (gsize block_size);
gpointer slice_alloc0 (gsize block_size) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_slice_alloc0;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c));
  return _temp_ret;
}

// gpointer g_slice_copy (gsize block_size, gconstpointer mem_block);
// void* g_slice_copy (gsize block_size, const void* mem_block);
gpointer slice_copy (gsize block_size, const void* mem_block) noexcept
{
  typedef void* (*call_wrap_t) (gsize block_size, const void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) g_slice_copy;
  auto mem_block_to_c = mem_block;
  auto block_size_to_c = block_size;
  auto _temp_ret = call_wrap_v ((gsize) (block_size_to_c), (const void*) (mem_block_to_c));
  return _temp_ret;
}

// void g_slice_free1 (gsize block_size, gpointer mem_block);
// void g_slice_free1 (gsize block_size, void* mem_block);
void slice_free1 (gsize block_size, void* mem_block) noexcept
{
  typedef void (*call_wrap_t) (gsize block_size, void* mem_block);
  call_wrap_t call_wrap_v = (call_wrap_t) g_slice_free1;
  auto mem_block_to_c = mem_block;
  auto block_size_to_c = block_size;
  call_wrap_v ((gsize) (block_size_to_c), (void*) (mem_block_to_c));
}

// void g_slice_free_chain_with_offset (gsize block_size, gpointer mem_chain, gsize next_offset);
// void g_slice_free_chain_with_offset (gsize block_size, void* mem_chain, gsize next_offset);
void slice_free_chain_with_offset (gsize block_size, void* mem_chain, gsize next_offset) noexcept
{
  typedef void (*call_wrap_t) (gsize block_size, void* mem_chain, gsize next_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) g_slice_free_chain_with_offset;
  auto next_offset_to_c = next_offset;
  auto mem_chain_to_c = mem_chain;
  auto block_size_to_c = block_size;
  call_wrap_v ((gsize) (block_size_to_c), (void*) (mem_chain_to_c), (gsize) (next_offset_to_c));
}

// gint64 g_slice_get_config (GSliceConfig ckey);
// gint64 g_slice_get_config (::GSliceConfig ckey);
// IGNORE; marked ignore

// gint64* g_slice_get_config_state (GSliceConfig ckey, gint64 address, guint* n_values);
// gint64 g_slice_get_config_state (::GSliceConfig ckey, gint64 address, guint n_values);
// SKIP; inconsistent in n_values pointer depth (1 vs 0), inconsistent return  pointer depth (1 vs 0)

// void g_slice_set_config (GSliceConfig ckey, gint64 value);
// void g_slice_set_config (::GSliceConfig ckey, gint64 value);
// IGNORE; marked ignore

// gint g_snprintf (gchar* string, gulong n, const gchar* format);
// gint g_snprintf (char* string, gulong n, const char* format);
// IGNORE; not introspectable, varargs not supported

// guint g_spaced_primes_closest (guint num);
// guint g_spaced_primes_closest (guint num);
guint spaced_primes_closest (guint num) noexcept
{
  typedef guint (*call_wrap_t) (guint num);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spaced_primes_closest;
  auto num_to_c = num;
  auto _temp_ret = call_wrap_v ((guint) (num_to_c));
  return _temp_ret;
}

// gboolean g_spawn_async (const gchar* working_directory, gchar** argv, gchar** envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid* child_pid, GError ** error);
// gboolean g_spawn_async (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
bool spawn_async (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), &error);
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), &error);
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), _error ? &_error_o : nullptr);
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool spawn_async (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), _error ? &_error_o : nullptr);
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::Pid> spawn_async (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, child_pid_o);
}
std::tuple<bool, GLib::Pid> spawn_async (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, child_pid_o);
}
std::tuple<bool, GLib::Pid> spawn_async (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, child_pid_o);
}
std::tuple<bool, GLib::Pid> spawn_async (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, child_pid_o);
}

// gboolean g_spawn_async_with_fds (const gchar* working_directory, gchar** argv, gchar** envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
// gboolean g_spawn_async_with_fds (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
bool spawn_async_with_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), &error);
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), &error);
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), _error ? &_error_o : nullptr);
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool spawn_async_with_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), _error ? &_error_o : nullptr);
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::Pid> spawn_async_with_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, child_pid_o);
}
std::tuple<bool, GLib::Pid> spawn_async_with_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, child_pid_o);
}
std::tuple<bool, GLib::Pid> spawn_async_with_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, child_pid_o);
}
std::tuple<bool, GLib::Pid> spawn_async_with_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_fds;
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, child_pid_o);
}

// gboolean g_spawn_async_with_pipes (const gchar* working_directory, gchar** argv, gchar** envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
// gboolean g_spawn_async_with_pipes (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
bool spawn_async_with_pipes (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint*) (standard_input ? &standard_input_o : nullptr), (gint*) (standard_output ? &standard_output_o : nullptr), (gint*) (standard_error ? &standard_error_o : nullptr), &error);
  if (standard_error) *standard_error = standard_error_o;
  if (standard_output) *standard_output = standard_output_o;
  if (standard_input) *standard_input = standard_input_o;
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_pipes (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint*) (standard_input ? &standard_input_o : nullptr), (gint*) (standard_output ? &standard_output_o : nullptr), (gint*) (standard_error ? &standard_error_o : nullptr), &error);
  if (standard_error) *standard_error = standard_error_o;
  if (standard_output) *standard_output = standard_output_o;
  if (standard_input) *standard_input = standard_input_o;
  if (child_pid) *child_pid = child_pid_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_pipes (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint*) (standard_input ? &standard_input_o : nullptr), (gint*) (standard_output ? &standard_output_o : nullptr), (gint*) (standard_error ? &standard_error_o : nullptr), _error ? &_error_o : nullptr);
  if (standard_error) *standard_error = standard_error_o;
  if (standard_output) *standard_output = standard_output_o;
  if (standard_input) *standard_input = standard_input_o;
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool spawn_async_with_pipes (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (child_pid ? &child_pid_o : nullptr), (gint*) (standard_input ? &standard_input_o : nullptr), (gint*) (standard_output ? &standard_output_o : nullptr), (gint*) (standard_error ? &standard_error_o : nullptr), _error ? &_error_o : nullptr);
  if (standard_error) *standard_error = standard_error_o;
  if (standard_output) *standard_output = standard_output_o;
  if (standard_input) *standard_input = standard_input_o;
  if (child_pid) *child_pid = child_pid_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint*) (&standard_input_o), (gint*) (&standard_output_o), (gint*) (&standard_error_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, child_pid_o, standard_input_o, standard_output_o, standard_error_o);
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint*) (&standard_input_o), (gint*) (&standard_output_o), (gint*) (&standard_error_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, child_pid_o, standard_input_o, standard_output_o, standard_error_o);
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint*) (&standard_input_o), (gint*) (&standard_output_o), (gint*) (&standard_error_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, child_pid_o, standard_input_o, standard_output_o, standard_error_o);
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes;
  gint standard_error_o {};
  gint standard_output_o {};
  gint standard_input_o {};
  ::GPid child_pid_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (::GPid*) (&child_pid_o), (gint*) (&standard_input_o), (gint*) (&standard_output_o), (gint*) (&standard_error_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, child_pid_o, standard_input_o, standard_output_o, standard_error_o);
}

// gboolean g_spawn_async_with_pipes_and_fds (const gchar* working_directory, const gchar* const* argv, const gchar* const* envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
// gboolean g_spawn_async_with_pipes_and_fds (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
bool spawn_async_with_pipes_and_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_i = detail::make_list_unwrap_range (target_fds, n_fds, false);
  auto target_fds_w = unwrap (target_fds_i, gi::transfer_none, direction_in);
  auto target_fds_to_c = target_fds_w.gobj_(false);
  auto source_fds_i = detail::make_list_unwrap_range (source_fds, n_fds, false);
  auto source_fds_w = unwrap (source_fds_i, gi::transfer_none, direction_in);
  auto source_fds_to_c = source_fds_w.gobj_(false);
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (source_fds_w.size()), (::GPid*) (child_pid_out ? &child_pid_out_o : nullptr), (gint*) (stdin_pipe_out ? &stdin_pipe_out_o : nullptr), (gint*) (stdout_pipe_out ? &stdout_pipe_out_o : nullptr), (gint*) (stderr_pipe_out ? &stderr_pipe_out_o : nullptr), &error);
  if (stderr_pipe_out) *stderr_pipe_out = stderr_pipe_out_o;
  if (stdout_pipe_out) *stdout_pipe_out = stdout_pipe_out_o;
  if (stdin_pipe_out) *stdin_pipe_out = stdin_pipe_out_o;
  if (child_pid_out) *child_pid_out = child_pid_out_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_pipes_and_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_i = detail::make_list_unwrap_range (target_fds, n_fds, false);
  auto target_fds_w = unwrap (target_fds_i, gi::transfer_none, direction_in);
  auto target_fds_to_c = target_fds_w.gobj_(false);
  auto source_fds_i = detail::make_list_unwrap_range (source_fds, n_fds, false);
  auto source_fds_w = unwrap (source_fds_i, gi::transfer_none, direction_in);
  auto source_fds_to_c = source_fds_w.gobj_(false);
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (source_fds_w.size()), (::GPid*) (child_pid_out ? &child_pid_out_o : nullptr), (gint*) (stdin_pipe_out ? &stdin_pipe_out_o : nullptr), (gint*) (stdout_pipe_out ? &stdout_pipe_out_o : nullptr), (gint*) (stderr_pipe_out ? &stderr_pipe_out_o : nullptr), &error);
  if (stderr_pipe_out) *stderr_pipe_out = stderr_pipe_out_o;
  if (stdout_pipe_out) *stdout_pipe_out = stdout_pipe_out_o;
  if (stdin_pipe_out) *stdin_pipe_out = stdin_pipe_out_o;
  if (child_pid_out) *child_pid_out = child_pid_out_o;
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_async_with_pipes_and_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_i = detail::make_list_unwrap_range (target_fds, n_fds, false);
  auto target_fds_w = unwrap (target_fds_i, gi::transfer_none, direction_in);
  auto target_fds_to_c = target_fds_w.gobj_(false);
  auto source_fds_i = detail::make_list_unwrap_range (source_fds, n_fds, false);
  auto source_fds_w = unwrap (source_fds_i, gi::transfer_none, direction_in);
  auto source_fds_to_c = source_fds_w.gobj_(false);
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (source_fds_w.size()), (::GPid*) (child_pid_out ? &child_pid_out_o : nullptr), (gint*) (stdin_pipe_out ? &stdin_pipe_out_o : nullptr), (gint*) (stdout_pipe_out ? &stdout_pipe_out_o : nullptr), (gint*) (stderr_pipe_out ? &stderr_pipe_out_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_pipe_out) *stderr_pipe_out = stderr_pipe_out_o;
  if (stdout_pipe_out) *stdout_pipe_out = stdout_pipe_out_o;
  if (stdin_pipe_out) *stdin_pipe_out = stdin_pipe_out_o;
  if (child_pid_out) *child_pid_out = child_pid_out_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool spawn_async_with_pipes_and_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_i = detail::make_list_unwrap_range (target_fds, n_fds, false);
  auto target_fds_w = unwrap (target_fds_i, gi::transfer_none, direction_in);
  auto target_fds_to_c = target_fds_w.gobj_(false);
  auto source_fds_i = detail::make_list_unwrap_range (source_fds, n_fds, false);
  auto source_fds_w = unwrap (source_fds_i, gi::transfer_none, direction_in);
  auto source_fds_to_c = source_fds_w.gobj_(false);
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (source_fds_w.size()), (::GPid*) (child_pid_out ? &child_pid_out_o : nullptr), (gint*) (stdin_pipe_out ? &stdin_pipe_out_o : nullptr), (gint*) (stdout_pipe_out ? &stdout_pipe_out_o : nullptr), (gint*) (stderr_pipe_out ? &stderr_pipe_out_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_pipe_out) *stderr_pipe_out = stderr_pipe_out_o;
  if (stdout_pipe_out) *stdout_pipe_out = stdout_pipe_out_o;
  if (stdin_pipe_out) *stdin_pipe_out = stdin_pipe_out_o;
  if (child_pid_out) *child_pid_out = child_pid_out_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_i = detail::make_list_unwrap_range (target_fds, n_fds, false);
  auto target_fds_w = unwrap (target_fds_i, gi::transfer_none, direction_in);
  auto target_fds_to_c = target_fds_w.gobj_(false);
  auto source_fds_i = detail::make_list_unwrap_range (source_fds, n_fds, false);
  auto source_fds_w = unwrap (source_fds_i, gi::transfer_none, direction_in);
  auto source_fds_to_c = source_fds_w.gobj_(false);
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (source_fds_w.size()), (::GPid*) (&child_pid_out_o), (gint*) (&stdin_pipe_out_o), (gint*) (&stdout_pipe_out_o), (gint*) (&stderr_pipe_out_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, child_pid_out_o, stdin_pipe_out_o, stdout_pipe_out_o, stderr_pipe_out_o);
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_i = detail::make_list_unwrap_range (target_fds, n_fds, false);
  auto target_fds_w = unwrap (target_fds_i, gi::transfer_none, direction_in);
  auto target_fds_to_c = target_fds_w.gobj_(false);
  auto source_fds_i = detail::make_list_unwrap_range (source_fds, n_fds, false);
  auto source_fds_w = unwrap (source_fds_i, gi::transfer_none, direction_in);
  auto source_fds_to_c = source_fds_w.gobj_(false);
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (source_fds_w.size()), (::GPid*) (&child_pid_out_o), (gint*) (&stdin_pipe_out_o), (gint*) (&stdout_pipe_out_o), (gint*) (&stderr_pipe_out_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, child_pid_out_o, stdin_pipe_out_o, stdout_pipe_out_o, stderr_pipe_out_o);
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_i = detail::make_list_unwrap_range (target_fds, n_fds, false);
  auto target_fds_w = unwrap (target_fds_i, gi::transfer_none, direction_in);
  auto target_fds_to_c = target_fds_w.gobj_(false);
  auto source_fds_i = detail::make_list_unwrap_range (source_fds, n_fds, false);
  auto source_fds_w = unwrap (source_fds_i, gi::transfer_none, direction_in);
  auto source_fds_to_c = source_fds_w.gobj_(false);
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (source_fds_w.size()), (::GPid*) (&child_pid_out_o), (gint*) (&stdin_pipe_out_o), (gint*) (&stdout_pipe_out_o), (gint*) (&stderr_pipe_out_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, child_pid_out_o, stdin_pipe_out_o, stdout_pipe_out_o, stderr_pipe_out_o);
}
std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_async_with_pipes_and_fds;
  gint stderr_pipe_out_o {};
  gint stdout_pipe_out_o {};
  gint stdin_pipe_out_o {};
  ::GPid child_pid_out_o {};
  auto target_fds_i = detail::make_list_unwrap_range (target_fds, n_fds, false);
  auto target_fds_w = unwrap (target_fds_i, gi::transfer_none, direction_in);
  auto target_fds_to_c = target_fds_w.gobj_(false);
  auto source_fds_i = detail::make_list_unwrap_range (source_fds, n_fds, false);
  auto source_fds_w = unwrap (source_fds_i, gi::transfer_none, direction_in);
  auto source_fds_to_c = source_fds_w.gobj_(false);
  auto stderr_fd_to_c = stderr_fd;
  auto stdout_fd_to_c = stdout_fd;
  auto stdin_fd_to_c = stdin_fd;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (const char**) (argv_to_c), (const char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (gint) (stdin_fd_to_c), (gint) (stdout_fd_to_c), (gint) (stderr_fd_to_c), (const gint*) (source_fds_to_c), (const gint*) (target_fds_to_c), (gsize) (source_fds_w.size()), (::GPid*) (&child_pid_out_o), (gint*) (&stdin_pipe_out_o), (gint*) (&stdout_pipe_out_o), (gint*) (&stderr_pipe_out_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, child_pid_out_o, stdin_pipe_out_o, stdout_pipe_out_o, stderr_pipe_out_o);
}

// gboolean g_spawn_check_wait_status (gint wait_status, GError ** error);
// gboolean g_spawn_check_wait_status (gint wait_status, GError ** error);
bool spawn_check_wait_status (gint wait_status)
{
  typedef gboolean (*call_wrap_t) (gint wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_check_wait_status;
  auto wait_status_to_c = wait_status;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((gint) (wait_status_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_check_wait_status (gint wait_status, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (gint wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_check_wait_status;
  auto wait_status_to_c = wait_status;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((gint) (wait_status_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_spawn_close_pid (GPid pid);
// void g_spawn_close_pid (::GPid pid);
void spawn_close_pid (::GPid pid) noexcept
{
  typedef void (*call_wrap_t) (::GPid pid);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_close_pid;
  auto pid_to_c = pid;
  call_wrap_v ((::GPid) (pid_to_c));
}

// gboolean g_spawn_command_line_async (const gchar* command_line, GError ** error);
// gboolean g_spawn_command_line_async (const char* command_line, GError ** error);
bool spawn_command_line_async (const std::string & command_line)
{
  typedef gboolean (*call_wrap_t) (const char* command_line, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_command_line_async;
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_command_line_async (const std::string & command_line, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* command_line, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_command_line_async;
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_spawn_command_line_sync (const gchar* command_line, gchar** standard_output, gchar** standard_error, gint* wait_status, GError ** error);
// gboolean g_spawn_command_line_sync (const char* command_line, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
bool spawn_command_line_sync (const std::string & command_line, std::vector<guint8> * standard_output, std::vector<guint8> * standard_error, gint * wait_status)
{
  typedef gboolean (*call_wrap_t) (const char* command_line, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_command_line_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), &error);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_command_line_sync (const std::string & command_line, std::vector<guint8> * standard_output, std::vector<guint8> * standard_error, gint * wait_status, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* command_line, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_command_line_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), _error ? &_error_o : nullptr);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_command_line_sync (const std::string & command_line)
{
  typedef gboolean (*call_wrap_t) (const char* command_line, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_command_line_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full), gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full), wait_status_o);
}
std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_command_line_sync (const std::string & command_line, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* command_line, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_command_line_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (command_line_to_c), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full), gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full), wait_status_o);
}

// GQuark g_spawn_error_quark ();
// ::GQuark g_spawn_error_quark ();
GLib::Quark spawn_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GQuark g_spawn_exit_error_quark ();
// ::GQuark g_spawn_exit_error_quark ();
GLib::Quark spawn_exit_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_exit_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean g_spawn_sync (const gchar* working_directory, gchar** argv, gchar** envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, gchar** standard_output, gchar** standard_error, gint* wait_status, GError ** error);
// gboolean g_spawn_sync (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
bool spawn_sync (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, std::vector<guint8> * standard_output, std::vector<guint8> * standard_error, gint * wait_status)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), &error);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_sync (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, std::vector<guint8> * standard_output, std::vector<guint8> * standard_error, gint * wait_status)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), &error);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full);
  gi::check_error (error);
  return _temp_ret;
}
bool spawn_sync (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, std::vector<guint8> * standard_output, std::vector<guint8> * standard_error, gint * wait_status, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), _error ? &_error_o : nullptr);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool spawn_sync (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, std::vector<guint8> * standard_output, std::vector<guint8> * standard_error, gint * wait_status, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (standard_output ? &standard_output_o : nullptr), (guint8**) (standard_error ? &standard_error_o : nullptr), (gint*) (wait_status ? &wait_status_o : nullptr), _error ? &_error_o : nullptr);
  if (wait_status) *wait_status = wait_status_o;
  if (standard_error) *standard_error = gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full);
  if (standard_output) *standard_output = gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_sync (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full), gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full), wait_status_o);
}
std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_sync (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup)
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full), gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full), wait_status_o);
}
std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_sync (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = gi::unwrap (working_directory, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full), gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full), wait_status_o);
}
std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_sync (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_spawn_sync;
  gint wait_status_o {};
  guint8* standard_error_o {};
  guint8* standard_output_o {};
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_async) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto envp_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (envp);
  auto envp_w = unwrap (envp_i, gi::transfer_none, direction_in);
  auto envp_to_c = envp_w.gobj_(false);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto working_directory_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (working_directory_to_c), (char**) (argv_to_c), (char**) (envp_to_c), (::GSpawnFlags) (flags_to_c), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (guint8**) (&standard_output_o), (guint8**) (&standard_error_o), (gint*) (&wait_status_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::detail::wrap_list<guint8> (standard_output_o, gi::transfer_full), gi::detail::wrap_list<guint8> (standard_error_o, gi::transfer_full), wait_status_o);
}

// gint g_sprintf (gchar* string, const gchar* format);
// gint g_sprintf (char* string, const char* format);
// IGNORE; not introspectable, varargs not supported

// gchar* g_stpcpy (gchar* dest, const char* src);
// char* g_stpcpy (char* dest, const char* src);
std::string stpcpy (const std::string & dest, const std::string & src) noexcept
{
  typedef char* (*call_wrap_t) (char* dest, const char* src);
  call_wrap_t call_wrap_v = (call_wrap_t) g_stpcpy;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (dest_to_c), (const char*) (src_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_str_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_str_equal (const void* v1, const void* v2);
bool str_equal (const void* v1, const void* v2) noexcept
{
  typedef gboolean (*call_wrap_t) (const void* v1, const void* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_equal;
  auto v2_to_c = v2;
  auto v1_to_c = v1;
  auto _temp_ret = call_wrap_v ((const void*) (v1_to_c), (const void*) (v2_to_c));
  return _temp_ret;
}

// gboolean g_str_has_prefix (const gchar* str, const gchar* prefix);
// gboolean g_str_has_prefix (const char* str, const char* prefix);
bool str_has_prefix (const std::string & str, const std::string & prefix) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, const char* prefix);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_has_prefix;
  auto prefix_to_c = gi::unwrap (prefix, gi::transfer_none, gi::direction_in);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (prefix_to_c));
  return _temp_ret;
}

// gboolean g_str_has_suffix (const gchar* str, const gchar* suffix);
// gboolean g_str_has_suffix (const char* str, const char* suffix);
bool str_has_suffix (const std::string & str, const std::string & suffix) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, const char* suffix);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_has_suffix;
  auto suffix_to_c = gi::unwrap (suffix, gi::transfer_none, gi::direction_in);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (suffix_to_c));
  return _temp_ret;
}

// guint g_str_hash (gconstpointer v);
// guint g_str_hash (const void* v);
guint str_hash (const void* v) noexcept
{
  typedef guint (*call_wrap_t) (const void* v);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_hash;
  auto v_to_c = v;
  auto _temp_ret = call_wrap_v ((const void*) (v_to_c));
  return _temp_ret;
}

// gboolean g_str_is_ascii (const gchar* str);
// gboolean g_str_is_ascii (const char* str);
bool str_is_ascii (const std::string & str) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_is_ascii;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return _temp_ret;
}

// gboolean g_str_match_string (const gchar* search_term, const gchar* potential_hit, gboolean accept_alternates);
// gboolean g_str_match_string (const char* search_term, const char* potential_hit, gboolean accept_alternates);
bool str_match_string (const std::string & search_term, const std::string & potential_hit, gboolean accept_alternates) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* search_term, const char* potential_hit, gboolean accept_alternates);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_match_string;
  auto accept_alternates_to_c = accept_alternates;
  auto potential_hit_to_c = gi::unwrap (potential_hit, gi::transfer_none, gi::direction_in);
  auto search_term_to_c = gi::unwrap (search_term, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (search_term_to_c), (const char*) (potential_hit_to_c), (gboolean) (accept_alternates_to_c));
  return _temp_ret;
}

// gchar* g_str_to_ascii (const gchar* str, const gchar* from_locale);
// char* g_str_to_ascii (const char* str, const char* from_locale);
std::string str_to_ascii (const std::string & str, const std::string & from_locale) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, const char* from_locale);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_to_ascii;
  auto from_locale_to_c = gi::unwrap (from_locale, gi::transfer_none, gi::direction_in);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (from_locale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string str_to_ascii (const std::string & str) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, const char* from_locale);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_to_ascii;
  auto from_locale_to_c = nullptr;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (from_locale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** g_str_tokenize_and_fold (const gchar* string, const gchar* translit_locale, gchar*** ascii_alternates);
// char** g_str_tokenize_and_fold (const char* string, const char* translit_locale, char*** ascii_alternates);
std::vector<std::string> str_tokenize_and_fold (const std::string & string, const std::string & translit_locale, std::vector<std::string> & ascii_alternates) noexcept
{
  typedef char** (*call_wrap_t) (const char* string, const char* translit_locale, char*** ascii_alternates);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_tokenize_and_fold;
  char** ascii_alternates_o {};
  auto translit_locale_to_c = gi::unwrap (translit_locale, gi::transfer_none, gi::direction_in);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (translit_locale_to_c), (char***) (&ascii_alternates_o));
  ascii_alternates = gi::detail::wrap_list<std::string> (ascii_alternates_o, gi::transfer_full);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> str_tokenize_and_fold (const std::string & string, std::vector<std::string> & ascii_alternates) noexcept
{
  typedef char** (*call_wrap_t) (const char* string, const char* translit_locale, char*** ascii_alternates);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_tokenize_and_fold;
  char** ascii_alternates_o {};
  auto translit_locale_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (translit_locale_to_c), (char***) (&ascii_alternates_o));
  ascii_alternates = gi::detail::wrap_list<std::string> (ascii_alternates_o, gi::transfer_full);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<std::string>, std::vector<std::string>> str_tokenize_and_fold (const std::string & string, const std::string & translit_locale) noexcept
{
  typedef char** (*call_wrap_t) (const char* string, const char* translit_locale, char*** ascii_alternates);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_tokenize_and_fold;
  char** ascii_alternates_o {};
  auto translit_locale_to_c = gi::unwrap (translit_locale, gi::transfer_none, gi::direction_in);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (translit_locale_to_c), (char***) (&ascii_alternates_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), gi::detail::wrap_list<std::string> (ascii_alternates_o, gi::transfer_full));
}
std::tuple<std::vector<std::string>, std::vector<std::string>> str_tokenize_and_fold (const std::string & string) noexcept
{
  typedef char** (*call_wrap_t) (const char* string, const char* translit_locale, char*** ascii_alternates);
  call_wrap_t call_wrap_v = (call_wrap_t) g_str_tokenize_and_fold;
  char** ascii_alternates_o {};
  auto translit_locale_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (translit_locale_to_c), (char***) (&ascii_alternates_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), gi::detail::wrap_list<std::string> (ascii_alternates_o, gi::transfer_full));
}

// gchar* g_strcanon (gchar* string, const gchar* valid_chars, gchar substitutor);
// char* g_strcanon (char* string, const char* valid_chars, gchar substitutor);
std::string strcanon (const std::string & string, const std::string & valid_chars, gchar substitutor) noexcept
{
  typedef char* (*call_wrap_t) (char* string, const char* valid_chars, gchar substitutor);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strcanon;
  auto substitutor_to_c = substitutor;
  auto valid_chars_to_c = gi::unwrap (valid_chars, gi::transfer_none, gi::direction_in);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c), (const char*) (valid_chars_to_c), (gchar) (substitutor_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_strchomp (gchar* string);
// char* g_strchomp (char* string);
std::string strchomp (const std::string & string) noexcept
{
  typedef char* (*call_wrap_t) (char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strchomp;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_strchug (gchar* string);
// char* g_strchug (char* string);
std::string strchug (const std::string & string) noexcept
{
  typedef char* (*call_wrap_t) (char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strchug;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// int g_strcmp0 (const char* str1, const char* str2);
// gint g_strcmp0 (const char* str1, const char* str2);
gint strcmp0 (const std::string & str1, const std::string & str2) noexcept
{
  typedef gint (*call_wrap_t) (const char* str1, const char* str2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strcmp0;
  auto str2_to_c = gi::unwrap (str2, gi::transfer_none, gi::direction_in);
  auto str1_to_c = gi::unwrap (str1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str1_to_c), (const char*) (str2_to_c));
  return _temp_ret;
}
gint strcmp0 () noexcept
{
  typedef gint (*call_wrap_t) (const char* str1, const char* str2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strcmp0;
  auto str2_to_c = nullptr;
  auto str1_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (str1_to_c), (const char*) (str2_to_c));
  return _temp_ret;
}

// gchar* g_strcompress (const gchar* source);
// char* g_strcompress (const char* source);
std::string strcompress (const std::string & source) noexcept
{
  typedef char* (*call_wrap_t) (const char* source);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strcompress;
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (source_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_strconcat (const gchar* string1);
// char* g_strconcat (const char* string1);
// IGNORE; not introspectable, varargs not supported

// gchar* g_strdelimit (gchar* string, const gchar* delimiters, gchar new_delimiter);
// char* g_strdelimit (char* string, const char* delimiters, gchar new_delimiter);
std::string strdelimit (const std::string & string, const std::string & delimiters, gchar new_delimiter) noexcept
{
  typedef char* (*call_wrap_t) (char* string, const char* delimiters, gchar new_delimiter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strdelimit;
  auto new_delimiter_to_c = new_delimiter;
  auto delimiters_to_c = gi::unwrap (delimiters, gi::transfer_none, gi::direction_in);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c), (const char*) (delimiters_to_c), (gchar) (new_delimiter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string strdelimit (const std::string & string, gchar new_delimiter) noexcept
{
  typedef char* (*call_wrap_t) (char* string, const char* delimiters, gchar new_delimiter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strdelimit;
  auto new_delimiter_to_c = new_delimiter;
  auto delimiters_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c), (const char*) (delimiters_to_c), (gchar) (new_delimiter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_strdup (const gchar* str);
// char* g_strdup (const char* str);
std::string strdup (const std::string & str) noexcept
{
  typedef char* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strdup;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string strdup () noexcept
{
  typedef char* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strdup;
  auto str_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_strdup_printf (const gchar* format);
// char* g_strdup_printf (const char* format);
// IGNORE; not introspectable, varargs not supported

// gchar* g_strdup_vprintf (const gchar* format, va_list args);
// char* g_strdup_vprintf (const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// FAILURE on g_strdupv; No such node (<xmlattr>.transfer-ownership)
// const gchar* g_strerror (gint errnum);
// const char* g_strerror (gint errnum);
std::string strerror (gint errnum) noexcept
{
  typedef const char* (*call_wrap_t) (gint errnum);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strerror;
  auto errnum_to_c = errnum;
  auto _temp_ret = call_wrap_v ((gint) (errnum_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* g_strescape (const gchar* source, const gchar* exceptions);
// char* g_strescape (const char* source, const char* exceptions);
std::string strescape (const std::string & source, const std::string & exceptions) noexcept
{
  typedef char* (*call_wrap_t) (const char* source, const char* exceptions);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strescape;
  auto exceptions_to_c = gi::unwrap (exceptions, gi::transfer_none, gi::direction_in);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (source_to_c), (const char*) (exceptions_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string strescape (const std::string & source) noexcept
{
  typedef char* (*call_wrap_t) (const char* source, const char* exceptions);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strescape;
  auto exceptions_to_c = nullptr;
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (source_to_c), (const char*) (exceptions_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_strfreev (gchar** str_array);
// void g_strfreev (char* str_array);
// SKIP; inconsistent in str_array pointer depth (2 vs 1)

// const gchar* g_strip_context (const gchar* msgid, const gchar* msgval);
// const char* g_strip_context (const char* msgid, const char* msgval);
std::string strip_context (const std::string & msgid, const std::string & msgval) noexcept
{
  typedef const char* (*call_wrap_t) (const char* msgid, const char* msgval);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strip_context;
  auto msgval_to_c = gi::unwrap (msgval, gi::transfer_none, gi::direction_in);
  auto msgid_to_c = gi::unwrap (msgid, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (msgid_to_c), (const char*) (msgval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* g_strjoin (const gchar* separator);
// char* g_strjoin (const char* separator);
// IGNORE; not introspectable, varargs not supported

// gchar* g_strjoinv (const gchar* separator, gchar** str_array);
// char* g_strjoinv (const char* separator, char* str_array);
// SKIP; inconsistent in str_array pointer depth (2 vs 1)

// gsize g_strlcat (gchar* dest, const gchar* src, gsize dest_size);
// gsize g_strlcat (char* dest, const char* src, gsize dest_size);
gsize strlcat (const std::string & dest, const std::string & src, gsize dest_size) noexcept
{
  typedef gsize (*call_wrap_t) (char* dest, const char* src, gsize dest_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strlcat;
  auto dest_size_to_c = dest_size;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (dest_to_c), (const char*) (src_to_c), (gsize) (dest_size_to_c));
  return _temp_ret;
}

// gsize g_strlcpy (gchar* dest, const gchar* src, gsize dest_size);
// gsize g_strlcpy (char* dest, const char* src, gsize dest_size);
gsize strlcpy (const std::string & dest, const std::string & src, gsize dest_size) noexcept
{
  typedef gsize (*call_wrap_t) (char* dest, const char* src, gsize dest_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strlcpy;
  auto dest_size_to_c = dest_size;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (dest_to_c), (const char*) (src_to_c), (gsize) (dest_size_to_c));
  return _temp_ret;
}

// gchar* g_strndup (const gchar* str, gsize n);
// char* g_strndup (const char* str, gsize n);
std::string strndup (const std::string & str, gsize n) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gsize n);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strndup;
  auto n_to_c = n;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gsize) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_strnfill (gsize length, gchar fill_char);
// char* g_strnfill (gsize length, gchar fill_char);
std::string strnfill (gsize length, gchar fill_char) noexcept
{
  typedef char* (*call_wrap_t) (gsize length, gchar fill_char);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strnfill;
  auto fill_char_to_c = fill_char;
  auto length_to_c = length;
  auto _temp_ret = call_wrap_v ((gsize) (length_to_c), (gchar) (fill_char_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_strreverse (gchar* string);
// char* g_strreverse (char* string);
std::string strreverse (const std::string & string) noexcept
{
  typedef char* (*call_wrap_t) (char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strreverse;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_strrstr (const gchar* haystack, const gchar* needle);
// char* g_strrstr (const char* haystack, const char* needle);
std::string strrstr (const std::string & haystack, const std::string & needle) noexcept
{
  typedef char* (*call_wrap_t) (const char* haystack, const char* needle);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strrstr;
  auto needle_to_c = gi::unwrap (needle, gi::transfer_none, gi::direction_in);
  auto haystack_to_c = gi::unwrap (haystack, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (haystack_to_c), (const char*) (needle_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_strrstr_len (const gchar* haystack, gssize haystack_len, const gchar* needle);
// char* g_strrstr_len (const char* haystack, gssize haystack_len, const char* needle);
std::string strrstr_len (const std::string & haystack, gssize haystack_len, const std::string & needle) noexcept
{
  typedef char* (*call_wrap_t) (const char* haystack, gssize haystack_len, const char* needle);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strrstr_len;
  auto needle_to_c = gi::unwrap (needle, gi::transfer_none, gi::direction_in);
  auto haystack_len_to_c = haystack_len;
  auto haystack_to_c = gi::unwrap (haystack, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (haystack_to_c), (gssize) (haystack_len_to_c), (const char*) (needle_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_strsignal (gint signum);
// const char* g_strsignal (gint signum);
std::string strsignal (gint signum) noexcept
{
  typedef const char* (*call_wrap_t) (gint signum);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strsignal;
  auto signum_to_c = signum;
  auto _temp_ret = call_wrap_v ((gint) (signum_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// FAILURE on g_strsplit; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_strsplit_set; No such node (<xmlattr>.transfer-ownership)
// gchar* g_strstr_len (const gchar* haystack, gssize haystack_len, const gchar* needle);
// char* g_strstr_len (const char* haystack, gssize haystack_len, const char* needle);
std::string strstr_len (const std::string & haystack, gssize haystack_len, const std::string & needle) noexcept
{
  typedef char* (*call_wrap_t) (const char* haystack, gssize haystack_len, const char* needle);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strstr_len;
  auto needle_to_c = gi::unwrap (needle, gi::transfer_none, gi::direction_in);
  auto haystack_len_to_c = haystack_len;
  auto haystack_to_c = gi::unwrap (haystack, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (haystack_to_c), (gssize) (haystack_len_to_c), (const char*) (needle_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gdouble g_strtod (const gchar* nptr, gchar** endptr);
// gdouble g_strtod (const char* nptr, char** endptr);
gdouble strtod (const std::string & nptr, std::string * endptr) noexcept
{
  typedef gdouble (*call_wrap_t) (const char* nptr, char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strtod;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (endptr ? &endptr_o : nullptr));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<gdouble, std::string> strtod (const std::string & nptr) noexcept
{
  typedef gdouble (*call_wrap_t) (const char* nptr, char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strtod;
  char* endptr_o {};
  auto nptr_to_c = gi::unwrap (nptr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (nptr_to_c), (char**) (&endptr_o));
  return std::make_tuple (_temp_ret, gi::wrap (endptr_o, gi::transfer_none, gi::direction_out));
}

// gboolean g_strv_contains (const gchar* const* strv, const gchar* str);
// gboolean g_strv_contains (const char* strv, const char* str);
// IGNORE; marked ignore

// gboolean g_strv_equal (const gchar* const* strv1, const gchar* const* strv2);
// gboolean g_strv_equal (const char* strv1, const char* strv2);
// SKIP; inconsistent in strv2 pointer depth (2 vs 1), inconsistent in strv1 pointer depth (2 vs 1)

// GType g_strv_get_type ();
// GType g_strv_get_type ();
GType strv_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_strv_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint g_strv_length (gchar** str_array);
// guint g_strv_length (char* str_array);
// SKIP; inconsistent in str_array pointer depth (2 vs 1)

// void g_test_add_data_func (const char* testpath, gconstpointer test_data, GTestDataFunc test_func);
// void g_test_add_data_func (const char* testpath, const void* test_data,  test_func);
// SKIP; test_func type  not supported

// void g_test_add_data_func_full (const char* testpath, gpointer test_data, GTestDataFunc test_func, GDestroyNotify data_free_func);
// void g_test_add_data_func_full (const char* testpath, void* test_data,  test_func, GLib::DestroyNotify::cfunction_type data_free_func);
// SKIP; test_func type  not supported

// void g_test_add_func (const char* testpath, GTestFunc test_func);
// void g_test_add_func (const char* testpath,  test_func);
// SKIP; test_func type  not supported

// void g_test_add_vtable (const char* testpath, gsize data_size, gconstpointer test_data, GTestFixtureFunc data_setup, GTestFixtureFunc data_test, GTestFixtureFunc data_teardown);
// void g_test_add_vtable (const char* testpath, gsize data_size, const void* test_data,  data_setup,  data_test,  data_teardown);
// IGNORE; not introspectable, data_teardown type  not supported, data_test type  not supported, data_setup type  not supported

// void g_test_assert_expected_messages_internal (const char* domain, const char* file, int line, const char* func);
// void g_test_assert_expected_messages_internal (const char* domain, const char* file, gint line, const char* func);
void test_assert_expected_messages_internal (const std::string & domain, const std::string & file, gint line, const std::string & func) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_assert_expected_messages_internal;
  auto func_to_c = gi::unwrap (func, gi::transfer_none, gi::direction_in);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c));
}

// void g_test_bug (const char* bug_uri_snippet);
// void g_test_bug (const char* bug_uri_snippet);
void test_bug (const std::string & bug_uri_snippet) noexcept
{
  typedef void (*call_wrap_t) (const char* bug_uri_snippet);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_bug;
  auto bug_uri_snippet_to_c = gi::unwrap (bug_uri_snippet, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (bug_uri_snippet_to_c));
}

// void g_test_bug_base (const char* uri_pattern);
// void g_test_bug_base (const char* uri_pattern);
void test_bug_base (const std::string & uri_pattern) noexcept
{
  typedef void (*call_wrap_t) (const char* uri_pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_bug_base;
  auto uri_pattern_to_c = gi::unwrap (uri_pattern, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (uri_pattern_to_c));
}

// gchar* g_test_build_filename (GTestFileType file_type, const gchar* first_path);
// char* g_test_build_filename (::GTestFileType file_type, const char* first_path);
// IGNORE; not introspectable, varargs not supported

// FAILURE on g_test_create_case; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_test_create_suite; No such node (<xmlattr>.transfer-ownership)
// void g_test_expect_message (const gchar* log_domain, GLogLevelFlags log_level, const gchar* pattern);
// void g_test_expect_message (const char* log_domain, ::GLogLevelFlags log_level, const char* pattern);
void test_expect_message (const std::string & log_domain, GLib::LogLevelFlags log_level, const std::string & pattern) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_expect_message;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = gi::unwrap (log_domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (const char*) (pattern_to_c));
}
void test_expect_message (GLib::LogLevelFlags log_level, const std::string & pattern) noexcept
{
  typedef void (*call_wrap_t) (const char* log_domain, ::GLogLevelFlags log_level, const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_expect_message;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  auto log_level_to_c = gi::unwrap (log_level);
  auto log_domain_to_c = nullptr;
  call_wrap_v ((const char*) (log_domain_to_c), (::GLogLevelFlags) (log_level_to_c), (const char*) (pattern_to_c));
}

// void g_test_fail ();
// void g_test_fail ();
void test_fail () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_fail;
  call_wrap_v ();
}

// void g_test_fail_printf (const char* format);
// void g_test_fail_printf (const char* format);
// IGNORE; not introspectable, varargs not supported

// gboolean g_test_failed ();
// gboolean g_test_failed ();
bool test_failed () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_failed;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// const gchar* g_test_get_dir (GTestFileType file_type);
// const char* g_test_get_dir (::GTestFileType file_type);
std::string test_get_dir (GLib::TestFileType file_type) noexcept
{
  typedef const char* (*call_wrap_t) (::GTestFileType file_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_get_dir;
  auto file_type_to_c = gi::unwrap (file_type);
  auto _temp_ret = call_wrap_v ((::GTestFileType) (file_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_test_get_filename (GTestFileType file_type, const gchar* first_path);
// const char* g_test_get_filename (::GTestFileType file_type, const char* first_path);
// IGNORE; not introspectable, varargs not supported

// const char* g_test_get_path ();
// const char* g_test_get_path ();
std::string test_get_path () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_get_path;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// FAILURE on g_test_get_root; No such node (<xmlattr>.transfer-ownership)
// void g_test_incomplete (const gchar* msg);
// void g_test_incomplete (const char* msg);
void test_incomplete (const std::string & msg) noexcept
{
  typedef void (*call_wrap_t) (const char* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_incomplete;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (msg_to_c));
}
void test_incomplete () noexcept
{
  typedef void (*call_wrap_t) (const char* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_incomplete;
  auto msg_to_c = nullptr;
  call_wrap_v ((const char*) (msg_to_c));
}

// void g_test_incomplete_printf (const char* format);
// void g_test_incomplete_printf (const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_test_init (int* argc, char*** argv);
// void g_test_init (gint argc, char* argv);
// IGNORE; not introspectable, varargs not supported

// void g_test_log_set_fatal_handler (GTestLogFatalFunc log_func, gpointer user_data);
// void g_test_log_set_fatal_handler (GLib::TestLogFatalFunc::cfunction_type log_func, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// const char* g_test_log_type_name (GTestLogType log_type);
// const char* g_test_log_type_name (::GTestLogType log_type);
std::string test_log_type_name (GLib::TestLogType log_type) noexcept
{
  typedef const char* (*call_wrap_t) (::GTestLogType log_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_log_type_name;
  auto log_type_to_c = gi::unwrap (log_type);
  auto _temp_ret = call_wrap_v ((::GTestLogType) (log_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_test_maximized_result (double maximized_quantity, const char* format);
// void g_test_maximized_result (gdouble maximized_quantity, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_test_message (const char* format);
// void g_test_message (const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_test_minimized_result (double minimized_quantity, const char* format);
// void g_test_minimized_result (gdouble minimized_quantity, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_test_queue_destroy (GDestroyNotify destroy_func, gpointer destroy_data);
// void g_test_queue_destroy (GLib::DestroyNotify::cfunction_type destroy_func, void* destroy_data);
// SKIP; callback misses closure info

// double g_test_rand_double ();
// gdouble g_test_rand_double ();
gdouble test_rand_double () noexcept
{
  typedef gdouble (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_rand_double;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// double g_test_rand_double_range (double range_start, double range_end);
// gdouble g_test_rand_double_range (gdouble range_start, gdouble range_end);
gdouble test_rand_double_range (gdouble range_start, gdouble range_end) noexcept
{
  typedef gdouble (*call_wrap_t) (gdouble range_start, gdouble range_end);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_rand_double_range;
  auto range_end_to_c = range_end;
  auto range_start_to_c = range_start;
  auto _temp_ret = call_wrap_v ((gdouble) (range_start_to_c), (gdouble) (range_end_to_c));
  return _temp_ret;
}

// gint32 g_test_rand_int ();
// gint32 g_test_rand_int ();
gint32 test_rand_int () noexcept
{
  typedef gint32 (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_rand_int;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gint32 g_test_rand_int_range (gint32 begin, gint32 end);
// gint32 g_test_rand_int_range (gint32 begin, gint32 end);
gint32 test_rand_int_range (gint32 begin, gint32 end) noexcept
{
  typedef gint32 (*call_wrap_t) (gint32 begin, gint32 end);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_rand_int_range;
  auto end_to_c = end;
  auto begin_to_c = begin;
  auto _temp_ret = call_wrap_v ((gint32) (begin_to_c), (gint32) (end_to_c));
  return _temp_ret;
}

// int g_test_run ();
// gint g_test_run ();
gint test_run () noexcept
{
  typedef gint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_run;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// int g_test_run_suite (GTestSuite* suite);
// gint g_test_run_suite ( suite);
// SKIP; suite type  not supported

// void g_test_set_nonfatal_assertions ();
// void g_test_set_nonfatal_assertions ();
void test_set_nonfatal_assertions () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_set_nonfatal_assertions;
  call_wrap_v ();
}

// void g_test_skip (const gchar* msg);
// void g_test_skip (const char* msg);
void test_skip (const std::string & msg) noexcept
{
  typedef void (*call_wrap_t) (const char* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_skip;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (msg_to_c));
}
void test_skip () noexcept
{
  typedef void (*call_wrap_t) (const char* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_skip;
  auto msg_to_c = nullptr;
  call_wrap_v ((const char*) (msg_to_c));
}

// void g_test_skip_printf (const char* format);
// void g_test_skip_printf (const char* format);
// IGNORE; not introspectable, varargs not supported

// gboolean g_test_subprocess ();
// gboolean g_test_subprocess ();
bool test_subprocess () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_subprocess;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_test_summary (const char* summary);
// void g_test_summary (const char* summary);
void test_summary (const std::string & summary) noexcept
{
  typedef void (*call_wrap_t) (const char* summary);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_summary;
  auto summary_to_c = gi::unwrap (summary, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (summary_to_c));
}

// double g_test_timer_elapsed ();
// gdouble g_test_timer_elapsed ();
gdouble test_timer_elapsed () noexcept
{
  typedef gdouble (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_timer_elapsed;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// double g_test_timer_last ();
// gdouble g_test_timer_last ();
gdouble test_timer_last () noexcept
{
  typedef gdouble (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_timer_last;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_test_timer_start ();
// void g_test_timer_start ();
void test_timer_start () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_timer_start;
  call_wrap_v ();
}

// void g_test_trap_assertions (const char* domain, const char* file, int line, const char* func, guint64 assertion_flags, const char* pattern);
// void g_test_trap_assertions (const char* domain, const char* file, gint line, const char* func, guint64 assertion_flags, const char* pattern);
void test_trap_assertions (const std::string & domain, const std::string & file, gint line, const std::string & func, guint64 assertion_flags, const std::string & pattern) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, guint64 assertion_flags, const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_trap_assertions;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  auto assertion_flags_to_c = assertion_flags;
  auto func_to_c = gi::unwrap (func, gi::transfer_none, gi::direction_in);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (guint64) (assertion_flags_to_c), (const char*) (pattern_to_c));
}

// gboolean g_test_trap_has_passed ();
// gboolean g_test_trap_has_passed ();
bool test_trap_has_passed () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_trap_has_passed;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean g_test_trap_reached_timeout ();
// gboolean g_test_trap_reached_timeout ();
bool test_trap_reached_timeout () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_trap_reached_timeout;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_test_trap_subprocess (const char* test_path, guint64 usec_timeout, GTestSubprocessFlags test_flags);
// void g_test_trap_subprocess (const char* test_path, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
void test_trap_subprocess (const std::string & test_path, guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept
{
  typedef void (*call_wrap_t) (const char* test_path, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_trap_subprocess;
  auto test_flags_to_c = gi::unwrap (test_flags);
  auto usec_timeout_to_c = usec_timeout;
  auto test_path_to_c = gi::unwrap (test_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (test_path_to_c), (guint64) (usec_timeout_to_c), (::GTestSubprocessFlags) (test_flags_to_c));
}
void test_trap_subprocess (guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept
{
  typedef void (*call_wrap_t) (const char* test_path, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_test_trap_subprocess;
  auto test_flags_to_c = gi::unwrap (test_flags);
  auto usec_timeout_to_c = usec_timeout;
  auto test_path_to_c = nullptr;
  call_wrap_v ((const char*) (test_path_to_c), (guint64) (usec_timeout_to_c), (::GTestSubprocessFlags) (test_flags_to_c));
}

// guint g_timeout_add (guint interval, GSourceFunc function, gpointer data);
// guint g_timeout_add (guint interval, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by timeout_add_full

// guint g_timeout_add_full (gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint g_timeout_add_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
guint timeout_add (gint priority, guint interval, GLib::SourceFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) g_timeout_add_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto interval_to_c = interval;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (guint) (interval_to_c), (GLib::SourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// guint g_timeout_add_seconds (guint interval, GSourceFunc function, gpointer data);
// guint g_timeout_add_seconds (guint interval, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by timeout_add_seconds_full

// guint g_timeout_add_seconds_full (gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint g_timeout_add_seconds_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
guint timeout_add_seconds (gint priority, guint interval, GLib::SourceFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) g_timeout_add_seconds_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto interval_to_c = interval;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (guint) (interval_to_c), (GLib::SourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// GSource* g_timeout_source_new (guint interval);
// ::GSource* g_timeout_source_new (guint interval);
GLib::Source timeout_source_new (guint interval) noexcept
{
  typedef ::GSource* (*call_wrap_t) (guint interval);
  call_wrap_t call_wrap_v = (call_wrap_t) g_timeout_source_new;
  auto interval_to_c = interval;
  auto _temp_ret = call_wrap_v ((guint) (interval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSource* g_timeout_source_new_seconds (guint interval);
// ::GSource* g_timeout_source_new_seconds (guint interval);
GLib::Source timeout_source_new_seconds (guint interval) noexcept
{
  typedef ::GSource* (*call_wrap_t) (guint interval);
  call_wrap_t call_wrap_v = (call_wrap_t) g_timeout_source_new_seconds;
  auto interval_to_c = interval;
  auto _temp_ret = call_wrap_v ((guint) (interval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gpointer g_try_malloc (gsize n_bytes);
// void* g_try_malloc (gsize n_bytes);
gpointer try_malloc (gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_try_malloc;
  auto n_bytes_to_c = n_bytes;
  auto _temp_ret = call_wrap_v ((gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_try_malloc0 (gsize n_bytes);
// void* g_try_malloc0 (gsize n_bytes);
gpointer try_malloc0 (gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_try_malloc0;
  auto n_bytes_to_c = n_bytes;
  auto _temp_ret = call_wrap_v ((gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_try_malloc0_n (gsize n_blocks, gsize n_block_bytes);
// void* g_try_malloc0_n (gsize n_blocks, gsize n_block_bytes);
gpointer try_malloc0_n (gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_try_malloc0_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

// gpointer g_try_malloc_n (gsize n_blocks, gsize n_block_bytes);
// void* g_try_malloc_n (gsize n_blocks, gsize n_block_bytes);
gpointer try_malloc_n (gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_try_malloc_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto _temp_ret = call_wrap_v ((gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

// gpointer g_try_realloc (gpointer mem, gsize n_bytes);
// void* g_try_realloc (void* mem, gsize n_bytes);
gpointer try_realloc (void* mem, gsize n_bytes) noexcept
{
  typedef void* (*call_wrap_t) (void* mem, gsize n_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_try_realloc;
  auto n_bytes_to_c = n_bytes;
  auto mem_to_c = mem;
  auto _temp_ret = call_wrap_v ((void*) (mem_to_c), (gsize) (n_bytes_to_c));
  return _temp_ret;
}

// gpointer g_try_realloc_n (gpointer mem, gsize n_blocks, gsize n_block_bytes);
// void* g_try_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes);
gpointer try_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes) noexcept
{
  typedef void* (*call_wrap_t) (void* mem, gsize n_blocks, gsize n_block_bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_try_realloc_n;
  auto n_block_bytes_to_c = n_block_bytes;
  auto n_blocks_to_c = n_blocks;
  auto mem_to_c = mem;
  auto _temp_ret = call_wrap_v ((void*) (mem_to_c), (gsize) (n_blocks_to_c), (gsize) (n_block_bytes_to_c));
  return _temp_ret;
}

// gunichar2* g_ucs4_to_utf16 (const gunichar* str, glong len, glong* items_read, glong* items_written, GError ** error);
// guint16 g_ucs4_to_utf16 (const gunichar str, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent in str pointer depth (1 vs 0), inconsistent return  pointer depth (1 vs 0)

// gchar* g_ucs4_to_utf8 (const gunichar* str, glong len, glong* items_read, glong* items_written, GError ** error);
// char* g_ucs4_to_utf8 (const gunichar str, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent in str pointer depth (1 vs 0)

// GUnicodeBreakType g_unichar_break_type (gunichar c);
// ::GUnicodeBreakType g_unichar_break_type (gunichar c);
GLib::UnicodeBreakType unichar_break_type (gunichar c) noexcept
{
  typedef ::GUnicodeBreakType (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_break_type;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return gi::wrap (_temp_ret);
}

// gint g_unichar_combining_class (gunichar uc);
// gint g_unichar_combining_class (gunichar uc);
gint unichar_combining_class (gunichar uc) noexcept
{
  typedef gint (*call_wrap_t) (gunichar uc);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_combining_class;
  auto uc_to_c = uc;
  auto _temp_ret = call_wrap_v ((gunichar) (uc_to_c));
  return _temp_ret;
}

// gboolean g_unichar_compose (gunichar a, gunichar b, gunichar* ch);
// gboolean g_unichar_compose (gunichar a, gunichar b, gunichar* ch);
bool unichar_compose (gunichar a, gunichar b, gunichar & ch) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar a, gunichar b, gunichar* ch);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_compose;
  gunichar ch_o {};
  auto b_to_c = b;
  auto a_to_c = a;
  auto _temp_ret = call_wrap_v ((gunichar) (a_to_c), (gunichar) (b_to_c), (gunichar*) (&ch_o));
  ch = ch_o;
  return _temp_ret;
}
std::tuple<bool, gunichar> unichar_compose (gunichar a, gunichar b) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar a, gunichar b, gunichar* ch);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_compose;
  gunichar ch_o {};
  auto b_to_c = b;
  auto a_to_c = a;
  auto _temp_ret = call_wrap_v ((gunichar) (a_to_c), (gunichar) (b_to_c), (gunichar*) (&ch_o));
  return std::make_tuple (_temp_ret, ch_o);
}

// gboolean g_unichar_decompose (gunichar ch, gunichar* a, gunichar* b);
// gboolean g_unichar_decompose (gunichar ch, gunichar* a, gunichar* b);
bool unichar_decompose (gunichar ch, gunichar & a, gunichar & b) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar ch, gunichar* a, gunichar* b);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_decompose;
  gunichar b_o {};
  gunichar a_o {};
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c), (gunichar*) (&a_o), (gunichar*) (&b_o));
  b = b_o;
  a = a_o;
  return _temp_ret;
}
std::tuple<bool, gunichar, gunichar> unichar_decompose (gunichar ch) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar ch, gunichar* a, gunichar* b);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_decompose;
  gunichar b_o {};
  gunichar a_o {};
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c), (gunichar*) (&a_o), (gunichar*) (&b_o));
  return std::make_tuple (_temp_ret, a_o, b_o);
}

// gint g_unichar_digit_value (gunichar c);
// gint g_unichar_digit_value (gunichar c);
gint unichar_digit_value (gunichar c) noexcept
{
  typedef gint (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_digit_value;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gsize g_unichar_fully_decompose (gunichar ch, gboolean compat, gunichar* result, gsize result_len);
// gsize g_unichar_fully_decompose (gunichar ch, gboolean compat, gunichar result, gsize result_len);
// SKIP; inconsistent out result pointer depth (1 vs 0)

// gboolean g_unichar_get_mirror_char (gunichar ch, gunichar* mirrored_ch);
// gboolean g_unichar_get_mirror_char (gunichar ch, gunichar mirrored_ch);
// SKIP; inconsistent in mirrored_ch pointer depth (1 vs 0)

// GUnicodeScript g_unichar_get_script (gunichar ch);
// ::GUnicodeScript g_unichar_get_script (gunichar ch);
GLib::UnicodeScript unichar_get_script (gunichar ch) noexcept
{
  typedef ::GUnicodeScript (*call_wrap_t) (gunichar ch);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_get_script;
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean g_unichar_isalnum (gunichar c);
// gboolean g_unichar_isalnum (gunichar c);
bool unichar_isalnum (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_isalnum;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isalpha (gunichar c);
// gboolean g_unichar_isalpha (gunichar c);
bool unichar_isalpha (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_isalpha;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_iscntrl (gunichar c);
// gboolean g_unichar_iscntrl (gunichar c);
bool unichar_iscntrl (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_iscntrl;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isdefined (gunichar c);
// gboolean g_unichar_isdefined (gunichar c);
bool unichar_isdefined (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_isdefined;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isdigit (gunichar c);
// gboolean g_unichar_isdigit (gunichar c);
bool unichar_isdigit (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_isdigit;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isgraph (gunichar c);
// gboolean g_unichar_isgraph (gunichar c);
bool unichar_isgraph (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_isgraph;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_islower (gunichar c);
// gboolean g_unichar_islower (gunichar c);
bool unichar_islower (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_islower;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_ismark (gunichar c);
// gboolean g_unichar_ismark (gunichar c);
bool unichar_ismark (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_ismark;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isprint (gunichar c);
// gboolean g_unichar_isprint (gunichar c);
bool unichar_isprint (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_isprint;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_ispunct (gunichar c);
// gboolean g_unichar_ispunct (gunichar c);
bool unichar_ispunct (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_ispunct;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isspace (gunichar c);
// gboolean g_unichar_isspace (gunichar c);
bool unichar_isspace (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_isspace;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_istitle (gunichar c);
// gboolean g_unichar_istitle (gunichar c);
bool unichar_istitle (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_istitle;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isupper (gunichar c);
// gboolean g_unichar_isupper (gunichar c);
bool unichar_isupper (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_isupper;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_iswide (gunichar c);
// gboolean g_unichar_iswide (gunichar c);
bool unichar_iswide (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_iswide;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_iswide_cjk (gunichar c);
// gboolean g_unichar_iswide_cjk (gunichar c);
bool unichar_iswide_cjk (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_iswide_cjk;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_isxdigit (gunichar c);
// gboolean g_unichar_isxdigit (gunichar c);
bool unichar_isxdigit (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_isxdigit;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gboolean g_unichar_iszerowidth (gunichar c);
// gboolean g_unichar_iszerowidth (gunichar c);
bool unichar_iszerowidth (gunichar c) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_iszerowidth;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gint g_unichar_to_utf8 (gunichar c, gchar* outbuf);
// gint g_unichar_to_utf8 (gunichar c, char* outbuf);
// IGNORE; marked ignore

// gunichar g_unichar_tolower (gunichar c);
// gunichar g_unichar_tolower (gunichar c);
gunichar unichar_tolower (gunichar c) noexcept
{
  typedef gunichar (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_tolower;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gunichar g_unichar_totitle (gunichar c);
// gunichar g_unichar_totitle (gunichar c);
gunichar unichar_totitle (gunichar c) noexcept
{
  typedef gunichar (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_totitle;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// gunichar g_unichar_toupper (gunichar c);
// gunichar g_unichar_toupper (gunichar c);
gunichar unichar_toupper (gunichar c) noexcept
{
  typedef gunichar (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_toupper;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// GUnicodeType g_unichar_type (gunichar c);
// ::GUnicodeType g_unichar_type (gunichar c);
GLib::UnicodeType unichar_type (gunichar c) noexcept
{
  typedef ::GUnicodeType (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_type;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean g_unichar_validate (gunichar ch);
// gboolean g_unichar_validate (gunichar ch);
bool unichar_validate (gunichar ch) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar ch);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_validate;
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c));
  return _temp_ret;
}

// gint g_unichar_xdigit_value (gunichar c);
// gint g_unichar_xdigit_value (gunichar c);
gint unichar_xdigit_value (gunichar c) noexcept
{
  typedef gint (*call_wrap_t) (gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unichar_xdigit_value;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((gunichar) (c_to_c));
  return _temp_ret;
}

// void g_unicode_canonical_ordering (gunichar* string, gsize len);
// void g_unicode_canonical_ordering (gunichar string, gsize len);
// SKIP; inconsistent in string pointer depth (1 vs 0)

// GUnicodeScript g_unicode_script_from_iso15924 (guint32 iso15924);
// ::GUnicodeScript g_unicode_script_from_iso15924 (guint32 iso15924);
GLib::UnicodeScript unicode_script_from_iso15924 (guint32 iso15924) noexcept
{
  typedef ::GUnicodeScript (*call_wrap_t) (guint32 iso15924);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unicode_script_from_iso15924;
  auto iso15924_to_c = iso15924;
  auto _temp_ret = call_wrap_v ((guint32) (iso15924_to_c));
  return gi::wrap (_temp_ret);
}

// guint32 g_unicode_script_to_iso15924 (GUnicodeScript script);
// guint32 g_unicode_script_to_iso15924 (::GUnicodeScript script);
guint32 unicode_script_to_iso15924 (GLib::UnicodeScript script) noexcept
{
  typedef guint32 (*call_wrap_t) (::GUnicodeScript script);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unicode_script_to_iso15924;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::GUnicodeScript) (script_to_c));
  return _temp_ret;
}

// GQuark g_unix_error_quark ();
// ::GQuark g_unix_error_quark ();
GLib::Quark unix_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint g_unix_fd_add (gint fd, GIOCondition condition, GUnixFDSourceFunc function, gpointer user_data);
// guint g_unix_fd_add (gint fd, ::GIOCondition condition, GLib::UnixFDSourceFunc::cfunction_type function, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// guint g_unix_fd_add_full (gint priority, gint fd, GIOCondition condition, GUnixFDSourceFunc function, gpointer user_data, GDestroyNotify notify);
// guint g_unix_fd_add_full (gint priority, gint fd, ::GIOCondition condition, GLib::UnixFDSourceFunc::cfunction_type function, void* user_data, GLib::DestroyNotify::cfunction_type notify);
guint unix_fd_add_full (gint priority, gint fd, GLib::IOCondition condition, GLib::UnixFDSourceFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, gint fd, ::GIOCondition condition, GLib::UnixFDSourceFunc::cfunction_type function, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_add_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto condition_to_c = gi::unwrap (condition);
  auto fd_to_c = fd;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (gint) (fd_to_c), (::GIOCondition) (condition_to_c), (GLib::UnixFDSourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// GSource* g_unix_fd_source_new (gint fd, GIOCondition condition);
// ::GSource* g_unix_fd_source_new (gint fd, ::GIOCondition condition);
GLib::Source unix_fd_source_new (gint fd, GLib::IOCondition condition) noexcept
{
  typedef ::GSource* (*call_wrap_t) (gint fd, ::GIOCondition condition);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_fd_source_new;
  auto condition_to_c = gi::unwrap (condition);
  auto fd_to_c = fd;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (::GIOCondition) (condition_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// passwd* g_unix_get_passwd_entry (const gchar* user_name, GError ** error);
// void* g_unix_get_passwd_entry (const char* user_name, GError ** error);
gpointer unix_get_passwd_entry (const std::string & user_name)
{
  typedef void* (*call_wrap_t) (const char* user_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_get_passwd_entry;
  auto user_name_to_c = gi::unwrap (user_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (user_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gpointer unix_get_passwd_entry (const std::string & user_name, GLib::Error * _error) noexcept
{
  typedef void* (*call_wrap_t) (const char* user_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_get_passwd_entry;
  auto user_name_to_c = gi::unwrap (user_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (user_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_unix_open_pipe (gint* fds, gint flags, GError ** error);
// gboolean g_unix_open_pipe (gint fds, gint flags, GError ** error);
// SKIP; inconsistent in fds pointer depth (1 vs 0)

// gboolean g_unix_set_fd_nonblocking (gint fd, gboolean nonblock, GError ** error);
// gboolean g_unix_set_fd_nonblocking (gint fd, gboolean nonblock, GError ** error);
bool unix_set_fd_nonblocking (gint fd, gboolean nonblock)
{
  typedef gboolean (*call_wrap_t) (gint fd, gboolean nonblock, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_set_fd_nonblocking;
  auto nonblock_to_c = nonblock;
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (gboolean) (nonblock_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool unix_set_fd_nonblocking (gint fd, gboolean nonblock, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (gint fd, gboolean nonblock, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_set_fd_nonblocking;
  auto nonblock_to_c = nonblock;
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (gboolean) (nonblock_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// guint g_unix_signal_add (gint signum, GSourceFunc handler, gpointer user_data);
// guint g_unix_signal_add (gint signum, GLib::SourceFunc::cfunction_type handler, void* user_data);
// IGNORE; not introspectable; shadowed-by unix_signal_add_full

// guint g_unix_signal_add_full (gint priority, gint signum, GSourceFunc handler, gpointer user_data, GDestroyNotify notify);
// guint g_unix_signal_add_full (gint priority, gint signum, GLib::SourceFunc::cfunction_type handler, void* user_data, GLib::DestroyNotify::cfunction_type notify);
guint unix_signal_add (gint priority, gint signum, GLib::SourceFunc handler) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, gint signum, GLib::SourceFunc::cfunction_type handler, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_signal_add_full;
  auto handler_wrap_ = handler ? unwrap (std::move (handler), gi::scope_notified) : nullptr;
  auto signum_to_c = signum;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (gint) (signum_to_c), (GLib::SourceFunc::cfunction_type) (handler_wrap_ ? &handler_wrap_->wrapper : nullptr), (void*) (handler_wrap_), (GLib::DestroyNotify::cfunction_type) (handler_wrap_ ? &handler_wrap_->destroy : nullptr));
  return _temp_ret;
}

// GSource* g_unix_signal_source_new (gint signum);
// ::GSource* g_unix_signal_source_new (gint signum);
GLib::Source unix_signal_source_new (gint signum) noexcept
{
  typedef ::GSource* (*call_wrap_t) (gint signum);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_signal_source_new;
  auto signum_to_c = signum;
  auto _temp_ret = call_wrap_v ((gint) (signum_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// int g_unlink (const gchar* filename);
// gint g_unlink (const char* filename);
gint unlink (const std::string & filename) noexcept
{
  typedef gint (*call_wrap_t) (const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unlink;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c));
  return _temp_ret;
}

// void g_unsetenv (const gchar* variable);
// void g_unsetenv (const char* variable);
void unsetenv (const std::string & variable) noexcept
{
  typedef void (*call_wrap_t) (const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unsetenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (variable_to_c));
}

// void g_usleep (gulong microseconds);
// void g_usleep (gulong microseconds);
void usleep (gulong microseconds) noexcept
{
  typedef void (*call_wrap_t) (gulong microseconds);
  call_wrap_t call_wrap_v = (call_wrap_t) g_usleep;
  auto microseconds_to_c = microseconds;
  call_wrap_v ((gulong) (microseconds_to_c));
}

// gunichar* g_utf16_to_ucs4 (const gunichar2* str, glong len, glong* items_read, glong* items_written, GError ** error);
// gunichar g_utf16_to_ucs4 (const guint16 str, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent in str pointer depth (1 vs 0), inconsistent return  pointer depth (1 vs 0)

// gchar* g_utf16_to_utf8 (const gunichar2* str, glong len, glong* items_read, glong* items_written, GError ** error);
// char* g_utf16_to_utf8 (const guint16 str, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent in str pointer depth (1 vs 0)

// gchar* g_utf8_casefold (const gchar* str, gssize len);
// char* g_utf8_casefold (const char* str, gssize len);
std::string utf8_casefold (const std::string & str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_casefold;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint g_utf8_collate (const gchar* str1, const gchar* str2);
// gint g_utf8_collate (const char* str1, const char* str2);
gint utf8_collate (const std::string & str1, const std::string & str2) noexcept
{
  typedef gint (*call_wrap_t) (const char* str1, const char* str2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_collate;
  auto str2_to_c = gi::unwrap (str2, gi::transfer_none, gi::direction_in);
  auto str1_to_c = gi::unwrap (str1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str1_to_c), (const char*) (str2_to_c));
  return _temp_ret;
}

// gchar* g_utf8_collate_key (const gchar* str, gssize len);
// char* g_utf8_collate_key (const char* str, gssize len);
std::string utf8_collate_key (const std::string & str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_collate_key;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_utf8_collate_key_for_filename (const gchar* str, gssize len);
// char* g_utf8_collate_key_for_filename (const char* str, gssize len);
std::string utf8_collate_key_for_filename (const std::string & str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_collate_key_for_filename;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_utf8_find_next_char (const gchar* p, const gchar* end);
// char* g_utf8_find_next_char (const char* p, const char* end);
std::string utf8_find_next_char (const std::string & p, const std::string & end) noexcept
{
  typedef char* (*call_wrap_t) (const char* p, const char* end);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_find_next_char;
  auto end_to_c = gi::unwrap (end, gi::transfer_none, gi::direction_in);
  auto p_to_c = gi::unwrap (p, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (const char*) (end_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::string utf8_find_next_char (const std::string & p) noexcept
{
  typedef char* (*call_wrap_t) (const char* p, const char* end);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_find_next_char;
  auto end_to_c = nullptr;
  auto p_to_c = gi::unwrap (p, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (const char*) (end_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* g_utf8_find_prev_char (const gchar* str, const gchar* p);
// char* g_utf8_find_prev_char (const char* str, const char* p);
std::string utf8_find_prev_char (const std::string & str, const std::string & p) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, const char* p);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_find_prev_char;
  auto p_to_c = gi::unwrap (p, gi::transfer_none, gi::direction_in);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (p_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gunichar g_utf8_get_char (const gchar* p);
// gunichar g_utf8_get_char (const char* p);
gunichar utf8_get_char (const std::string & p) noexcept
{
  typedef gunichar (*call_wrap_t) (const char* p);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_get_char;
  auto p_to_c = gi::unwrap (p, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c));
  return _temp_ret;
}

// gunichar g_utf8_get_char_validated (const gchar* p, gssize max_len);
// gunichar g_utf8_get_char_validated (const char* p, gssize max_len);
gunichar utf8_get_char_validated (const std::string & p, gssize max_len) noexcept
{
  typedef gunichar (*call_wrap_t) (const char* p, gssize max_len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_get_char_validated;
  auto max_len_to_c = max_len;
  auto p_to_c = gi::unwrap (p, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (gssize) (max_len_to_c));
  return _temp_ret;
}

// gchar* g_utf8_make_valid (const gchar* str, gssize len);
// char* g_utf8_make_valid (const char* str, gssize len);
std::string utf8_make_valid (const std::string & str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_make_valid;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_utf8_normalize (const gchar* str, gssize len, GNormalizeMode mode);
// char* g_utf8_normalize (const char* str, gssize len, ::GNormalizeMode mode);
std::string utf8_normalize (const std::string & str, gssize len, GLib::NormalizeMode mode) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len, ::GNormalizeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_normalize;
  auto mode_to_c = gi::unwrap (mode);
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c), (::GNormalizeMode) (mode_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_utf8_offset_to_pointer (const gchar* str, glong offset);
// char* g_utf8_offset_to_pointer (const char* str, glong offset);
std::string utf8_offset_to_pointer (const std::string & str, glong offset) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, glong offset);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_offset_to_pointer;
  auto offset_to_c = offset;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (glong) (offset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// glong g_utf8_pointer_to_offset (const gchar* str, const gchar* pos);
// glong g_utf8_pointer_to_offset (const char* str, const char* pos);
glong utf8_pointer_to_offset (const std::string & str, const std::string & pos) noexcept
{
  typedef glong (*call_wrap_t) (const char* str, const char* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_pointer_to_offset;
  auto pos_to_c = gi::unwrap (pos, gi::transfer_none, gi::direction_in);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (const char*) (pos_to_c));
  return _temp_ret;
}

// gchar* g_utf8_prev_char (const gchar* p);
// char* g_utf8_prev_char (const char* p);
std::string utf8_prev_char (const std::string & p) noexcept
{
  typedef char* (*call_wrap_t) (const char* p);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_prev_char;
  auto p_to_c = gi::unwrap (p, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* g_utf8_strchr (const gchar* p, gssize len, gunichar c);
// char* g_utf8_strchr (const char* p, gssize len, gunichar c);
std::string utf8_strchr (const std::string & p, gssize len, gunichar c) noexcept
{
  typedef char* (*call_wrap_t) (const char* p, gssize len, gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_strchr;
  auto c_to_c = c;
  auto len_to_c = len;
  auto p_to_c = gi::unwrap (p, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (gssize) (len_to_c), (gunichar) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* g_utf8_strdown (const gchar* str, gssize len);
// char* g_utf8_strdown (const char* str, gssize len);
std::string utf8_strdown (const std::string & str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_strdown;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// glong g_utf8_strlen (const gchar* p, gssize max);
// glong g_utf8_strlen (const char* p, gssize max);
glong utf8_strlen (const std::string & p, gssize max) noexcept
{
  typedef glong (*call_wrap_t) (const char* p, gssize max);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_strlen;
  auto max_to_c = max;
  auto p_to_c = gi::unwrap (p, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (gssize) (max_to_c));
  return _temp_ret;
}

// gchar* g_utf8_strncpy (gchar* dest, const gchar* src, gsize n);
// char* g_utf8_strncpy (char* dest, const char* src, gsize n);
std::string utf8_strncpy (const std::string & dest, const std::string & src, gsize n) noexcept
{
  typedef char* (*call_wrap_t) (char* dest, const char* src, gsize n);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_strncpy;
  auto n_to_c = n;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (dest_to_c), (const char*) (src_to_c), (gsize) (n_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* g_utf8_strrchr (const gchar* p, gssize len, gunichar c);
// char* g_utf8_strrchr (const char* p, gssize len, gunichar c);
std::string utf8_strrchr (const std::string & p, gssize len, gunichar c) noexcept
{
  typedef char* (*call_wrap_t) (const char* p, gssize len, gunichar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_strrchr;
  auto c_to_c = c;
  auto len_to_c = len;
  auto p_to_c = gi::unwrap (p, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (p_to_c), (gssize) (len_to_c), (gunichar) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* g_utf8_strreverse (const gchar* str, gssize len);
// char* g_utf8_strreverse (const char* str, gssize len);
std::string utf8_strreverse (const std::string & str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_strreverse;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_utf8_strup (const gchar* str, gssize len);
// char* g_utf8_strup (const char* str, gssize len);
std::string utf8_strup (const std::string & str, gssize len) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_strup;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_utf8_substring (const gchar* str, glong start_pos, glong end_pos);
// char* g_utf8_substring (const char* str, glong start_pos, glong end_pos);
std::string utf8_substring (const std::string & str, glong start_pos, glong end_pos) noexcept
{
  typedef char* (*call_wrap_t) (const char* str, glong start_pos, glong end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_substring;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (glong) (start_pos_to_c), (glong) (end_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gunichar* g_utf8_to_ucs4 (const gchar* str, glong len, glong* items_read, glong* items_written, GError ** error);
// gunichar g_utf8_to_ucs4 (const char* str, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent return  pointer depth (1 vs 0)

// gunichar* g_utf8_to_ucs4_fast (const gchar* str, glong len, glong* items_written);
// gunichar g_utf8_to_ucs4_fast (const char* str, glong len, glong* items_written);
// SKIP; inconsistent return  pointer depth (1 vs 0)

// gunichar2* g_utf8_to_utf16 (const gchar* str, glong len, glong* items_read, glong* items_written, GError ** error);
// guint16 g_utf8_to_utf16 (const char* str, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent return  pointer depth (1 vs 0)

// gboolean g_utf8_validate (const gchar* str, gssize max_len, const gchar** end);
// gboolean g_utf8_validate (const guint8* str, gssize max_len, const char** end);
bool utf8_validate (guint8 * str, gssize max_len, std::string * end) noexcept
{
  typedef gboolean (*call_wrap_t) (const guint8* str, gssize max_len, const char** end);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_validate;
  const char* end_o {};
  auto str_i = detail::make_list_unwrap_range (str, max_len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gssize) (str_w.size()), (const char**) (end ? &end_o : nullptr));
  if (end) *end = gi::wrap (end_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> utf8_validate (guint8 * str, gssize max_len) noexcept
{
  typedef gboolean (*call_wrap_t) (const guint8* str, gssize max_len, const char** end);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_validate;
  const char* end_o {};
  auto str_i = detail::make_list_unwrap_range (str, max_len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gssize) (str_w.size()), (const char**) (&end_o));
  return std::make_tuple (_temp_ret, gi::wrap (end_o, gi::transfer_none, gi::direction_out));
}

// gboolean g_utf8_validate_len (const gchar* str, gsize max_len, const gchar** end);
// gboolean g_utf8_validate_len (const guint8* str, gsize max_len, const char** end);
bool utf8_validate_len (guint8 * str, gsize max_len, std::string * end) noexcept
{
  typedef gboolean (*call_wrap_t) (const guint8* str, gsize max_len, const char** end);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_validate_len;
  const char* end_o {};
  auto str_i = detail::make_list_unwrap_range (str, max_len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gsize) (str_w.size()), (const char**) (end ? &end_o : nullptr));
  if (end) *end = gi::wrap (end_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> utf8_validate_len (guint8 * str, gsize max_len) noexcept
{
  typedef gboolean (*call_wrap_t) (const guint8* str, gsize max_len, const char** end);
  call_wrap_t call_wrap_v = (call_wrap_t) g_utf8_validate_len;
  const char* end_o {};
  auto str_i = detail::make_list_unwrap_range (str, max_len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gsize) (str_w.size()), (const char**) (&end_o));
  return std::make_tuple (_temp_ret, gi::wrap (end_o, gi::transfer_none, gi::direction_out));
}

// gboolean g_uuid_string_is_valid (const gchar* str);
// gboolean g_uuid_string_is_valid (const char* str);
bool uuid_string_is_valid (const std::string & str) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uuid_string_is_valid;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return _temp_ret;
}

// gchar* g_uuid_string_random ();
// char* g_uuid_string_random ();
std::string uuid_string_random () noexcept
{
  typedef char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_uuid_string_random;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GType g_variant_get_gtype ();
// GType g_variant_get_gtype ();
// IGNORE; marked ignore

// gint g_vasprintf (gchar** string, const gchar* format, va_list args);
// gint g_vasprintf (char* string, const char* format,  args);
// IGNORE; not introspectable, args type  not supported, inconsistent in string pointer depth (2 vs 1)

// gint g_vfprintf (FILE* file, const gchar* format, va_list args);
// gint g_vfprintf (void* file, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// gint g_vsnprintf (gchar* string, gulong n, const gchar* format, va_list args);
// gint g_vsnprintf (char* string, gulong n, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// gint g_vsprintf (gchar* string, const gchar* format, va_list args);
// gint g_vsprintf (char* string, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// void g_warn_message (const char* domain, const char* file, int line, const char* func, const char* warnexpr);
// void g_warn_message (const char* domain, const char* file, gint line, const char* func, const char* warnexpr);
void warn_message (const std::string & domain, const std::string & file, gint line, const std::string & func, const std::string & warnexpr) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* warnexpr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_warn_message;
  auto warnexpr_to_c = gi::unwrap (warnexpr, gi::transfer_none, gi::direction_in);
  auto func_to_c = gi::unwrap (func, gi::transfer_none, gi::direction_in);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (warnexpr_to_c));
}
void warn_message (const std::string & file, gint line, const std::string & func) noexcept
{
  typedef void (*call_wrap_t) (const char* domain, const char* file, gint line, const char* func, const char* warnexpr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_warn_message;
  auto warnexpr_to_c = nullptr;
  auto func_to_c = gi::unwrap (func, gi::transfer_none, gi::direction_in);
  auto line_to_c = line;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto domain_to_c = nullptr;
  call_wrap_v ((const char*) (domain_to_c), (const char*) (file_to_c), (gint) (line_to_c), (const char*) (func_to_c), (const char*) (warnexpr_to_c));
}

} // namespace GLib

} // namespace repository

} // namespace gi

#endif
