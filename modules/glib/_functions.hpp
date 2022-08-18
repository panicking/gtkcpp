// AUTO-GENERATED

#ifndef _GI_GLIB__FUNCTIONS_HPP_
#define _GI_GLIB__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace GLib {

// int g_access (const gchar* filename, int mode);
// gint g_access (const char* filename, gint mode);
GI_INLINE_DECL gint access (const std::string & filename, gint mode) noexcept;

// gpointer g_aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment);
// void* g_aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment);
GI_INLINE_DECL gpointer aligned_alloc (gsize n_blocks, gsize n_block_bytes, gsize alignment) noexcept;

// gpointer g_aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment);
// void* g_aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment);
GI_INLINE_DECL gpointer aligned_alloc0 (gsize n_blocks, gsize n_block_bytes, gsize alignment) noexcept;

// gint g_ascii_digit_value (gchar c);
// gint g_ascii_digit_value (gchar c);
GI_INLINE_DECL gint ascii_digit_value (gchar c) noexcept;

// gchar* g_ascii_dtostr (gchar* buffer, gint buf_len, gdouble d);
// char* g_ascii_dtostr (char* buffer, gint buf_len, gdouble d);
GI_INLINE_DECL std::string ascii_dtostr (const std::string & buffer, gint buf_len, gdouble d) noexcept;

// gchar* g_ascii_formatd (gchar* buffer, gint buf_len, const gchar* format, gdouble d);
// char* g_ascii_formatd (char* buffer, gint buf_len, const char* format, gdouble d);
GI_INLINE_DECL std::string ascii_formatd (const std::string & buffer, gint buf_len, const std::string & format, gdouble d) noexcept;

// gint g_ascii_strcasecmp (const gchar* s1, const gchar* s2);
// gint g_ascii_strcasecmp (const char* s1, const char* s2);
GI_INLINE_DECL gint ascii_strcasecmp (const std::string & s1, const std::string & s2) noexcept;

// gchar* g_ascii_strdown (const gchar* str, gssize len);
// char* g_ascii_strdown (const char* str, gssize len);
GI_INLINE_DECL std::string ascii_strdown (const std::string & str, gssize len) noexcept;

// gboolean g_ascii_string_to_signed (const gchar* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
// gboolean g_ascii_string_to_signed (const char* str, guint base, gint64 min, gint64 max, gint64* out_num, GError ** error);
GI_INLINE_DECL bool ascii_string_to_signed (const std::string & str, guint base, gint64 min, gint64 max, gint64 * out_num = nullptr);
GI_INLINE_DECL bool ascii_string_to_signed (const std::string & str, guint base, gint64 min, gint64 max, gint64 * out_num, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> ascii_string_to_signed (const std::string & str, guint base, gint64 min, gint64 max);
GI_INLINE_DECL std::tuple<bool, gint64> ascii_string_to_signed (const std::string & str, guint base, gint64 min, gint64 max, GLib::Error * _error) noexcept;

// gboolean g_ascii_string_to_unsigned (const gchar* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
// gboolean g_ascii_string_to_unsigned (const char* str, guint base, guint64 min, guint64 max, guint64* out_num, GError ** error);
GI_INLINE_DECL bool ascii_string_to_unsigned (const std::string & str, guint base, guint64 min, guint64 max, guint64 * out_num = nullptr);
GI_INLINE_DECL bool ascii_string_to_unsigned (const std::string & str, guint base, guint64 min, guint64 max, guint64 * out_num, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint64> ascii_string_to_unsigned (const std::string & str, guint base, guint64 min, guint64 max);
GI_INLINE_DECL std::tuple<bool, guint64> ascii_string_to_unsigned (const std::string & str, guint base, guint64 min, guint64 max, GLib::Error * _error) noexcept;

// gint g_ascii_strncasecmp (const gchar* s1, const gchar* s2, gsize n);
// gint g_ascii_strncasecmp (const char* s1, const char* s2, gsize n);
GI_INLINE_DECL gint ascii_strncasecmp (const std::string & s1, const std::string & s2, gsize n) noexcept;

// gdouble g_ascii_strtod (const gchar* nptr, gchar** endptr);
// gdouble g_ascii_strtod (const char* nptr, char** endptr);
GI_INLINE_DECL gdouble ascii_strtod (const std::string & nptr, std::string * endptr = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, std::string> ascii_strtod (const std::string & nptr) noexcept;

// gint64 g_ascii_strtoll (const gchar* nptr, gchar** endptr, guint base);
// gint64 g_ascii_strtoll (const char* nptr, char** endptr, guint base);
GI_INLINE_DECL gint64 ascii_strtoll (const std::string & nptr, std::string * endptr, guint base) noexcept;
GI_INLINE_DECL std::tuple<gint64, std::string> ascii_strtoll (const std::string & nptr, guint base) noexcept;

// guint64 g_ascii_strtoull (const gchar* nptr, gchar** endptr, guint base);
// guint64 g_ascii_strtoull (const char* nptr, char** endptr, guint base);
GI_INLINE_DECL guint64 ascii_strtoull (const std::string & nptr, std::string * endptr, guint base) noexcept;
GI_INLINE_DECL std::tuple<guint64, std::string> ascii_strtoull (const std::string & nptr, guint base) noexcept;

// gchar* g_ascii_strup (const gchar* str, gssize len);
// char* g_ascii_strup (const char* str, gssize len);
GI_INLINE_DECL std::string ascii_strup (const std::string & str, gssize len) noexcept;

// gchar g_ascii_tolower (gchar c);
// gchar g_ascii_tolower (gchar c);
GI_INLINE_DECL gchar ascii_tolower (gchar c) noexcept;

// gchar g_ascii_toupper (gchar c);
// gchar g_ascii_toupper (gchar c);
GI_INLINE_DECL gchar ascii_toupper (gchar c) noexcept;

// gint g_ascii_xdigit_value (gchar c);
// gint g_ascii_xdigit_value (gchar c);
GI_INLINE_DECL gint ascii_xdigit_value (gchar c) noexcept;

// void g_assert_warning (const char* log_domain, const char* file, const int line, const char* pretty_function, const char* expression);
// void g_assert_warning (const char* log_domain, const char* file, const gint line, const char* pretty_function, const char* expression);
// IGNORE; marked ignore

// void g_assertion_message (const char* domain, const char* file, int line, const char* func, const char* message);
// void g_assertion_message (const char* domain, const char* file, gint line, const char* func, const char* message);
GI_INLINE_DECL void assertion_message (const std::string & domain, const std::string & file, gint line, const std::string & func, const std::string & message) noexcept;

// void g_assertion_message_cmpnum (const char* domain, const char* file, int line, const char* func, const char* expr, long double arg1, const char* cmp, long double arg2, char numtype);
// void g_assertion_message_cmpnum (const char* domain, const char* file, gint line, const char* func, const char* expr,  arg1, const char* cmp,  arg2, gchar numtype);
// IGNORE; not introspectable, arg2 type  not supported, arg1 type  not supported

// void g_assertion_message_cmpstr (const char* domain, const char* file, int line, const char* func, const char* expr, const char* arg1, const char* cmp, const char* arg2);
// void g_assertion_message_cmpstr (const char* domain, const char* file, gint line, const char* func, const char* expr, const char* arg1, const char* cmp, const char* arg2);
GI_INLINE_DECL void assertion_message_cmpstr (const std::string & domain, const std::string & file, gint line, const std::string & func, const std::string & expr, const std::string & arg1, const std::string & cmp, const std::string & arg2) noexcept;

// void g_assertion_message_cmpstrv (const char* domain, const char* file, int line, const char* func, const char* expr, const char* const* arg1, const char* const* arg2, gsize first_wrong_idx);
// void g_assertion_message_cmpstrv (const char* domain, const char* file, gint line, const char* func, const char* expr, const char* arg1, const char* arg2, gsize first_wrong_idx);
// SKIP; inconsistent in arg2 pointer depth (2 vs 1), inconsistent in arg1 pointer depth (2 vs 1)

// void g_assertion_message_error (const char* domain, const char* file, int line, const char* func, const char* expr, const GError* error, GQuark error_domain, int error_code);
// void g_assertion_message_error (const char* domain, const char* file, gint line, const char* func, const char* expr, const ::GError* error, ::GQuark error_domain, gint error_code);
GI_INLINE_DECL void assertion_message_error (const std::string & domain, const std::string & file, gint line, const std::string & func, const std::string & expr, const GLib::Error & error, ::GQuark error_domain, gint error_code) noexcept;

// void g_assertion_message_expr (const char* domain, const char* file, int line, const char* func, const char* expr);
// void g_assertion_message_expr (const char* domain, const char* file, gint line, const char* func, const char* expr);
GI_INLINE_DECL void assertion_message_expr (const std::string & domain, const std::string & file, gint line, const std::string & func, const std::string & expr) noexcept;
GI_INLINE_DECL void assertion_message_expr (const std::string & file, gint line, const std::string & func) noexcept;

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
GI_INLINE_DECL gssize atomic_pointer_add (void* atomic, gssize val) noexcept;

// gsize g_atomic_pointer_and (void* atomic, gsize val);
// gsize g_atomic_pointer_and (void* atomic, gsize val);
GI_INLINE_DECL gsize atomic_pointer_and (void* atomic, gsize val) noexcept;

// gboolean g_atomic_pointer_compare_and_exchange (void* atomic, gpointer oldval, gpointer newval);
// gboolean g_atomic_pointer_compare_and_exchange (void* atomic, void* oldval, void* newval);
GI_INLINE_DECL bool atomic_pointer_compare_and_exchange (void* atomic, void* oldval, void* newval) noexcept;

// gpointer g_atomic_pointer_get (void* atomic);
// void* g_atomic_pointer_get (void* atomic);
GI_INLINE_DECL gpointer atomic_pointer_get (void* atomic) noexcept;

// gsize g_atomic_pointer_or (void* atomic, gsize val);
// gsize g_atomic_pointer_or (void* atomic, gsize val);
GI_INLINE_DECL gsize atomic_pointer_or (void* atomic, gsize val) noexcept;

// void g_atomic_pointer_set (void* atomic, gpointer newval);
// void g_atomic_pointer_set (void* atomic, void* newval);
GI_INLINE_DECL void atomic_pointer_set (void* atomic, void* newval) noexcept;

// gsize g_atomic_pointer_xor (void* atomic, gsize val);
// gsize g_atomic_pointer_xor (void* atomic, gsize val);
GI_INLINE_DECL gsize atomic_pointer_xor (void* atomic, gsize val) noexcept;

// gpointer g_atomic_rc_box_acquire (gpointer mem_block);
// void* g_atomic_rc_box_acquire (void* mem_block);
GI_INLINE_DECL gpointer atomic_rc_box_acquire (void* mem_block) noexcept;

// gpointer g_atomic_rc_box_alloc (gsize block_size);
// void* g_atomic_rc_box_alloc (gsize block_size);
GI_INLINE_DECL gpointer atomic_rc_box_alloc (gsize block_size) noexcept;

// gpointer g_atomic_rc_box_alloc0 (gsize block_size);
// void* g_atomic_rc_box_alloc0 (gsize block_size);
GI_INLINE_DECL gpointer atomic_rc_box_alloc0 (gsize block_size) noexcept;

// gpointer g_atomic_rc_box_dup (gsize block_size, gconstpointer mem_block);
// void* g_atomic_rc_box_dup (gsize block_size, const void* mem_block);
GI_INLINE_DECL gpointer atomic_rc_box_dup (gsize block_size, const void* mem_block) noexcept;

// gsize g_atomic_rc_box_get_size (gpointer mem_block);
// gsize g_atomic_rc_box_get_size (void* mem_block);
GI_INLINE_DECL gsize atomic_rc_box_get_size (void* mem_block) noexcept;

// void g_atomic_rc_box_release (gpointer mem_block);
// void g_atomic_rc_box_release (void* mem_block);
GI_INLINE_DECL void atomic_rc_box_release (void* mem_block) noexcept;

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
GI_INLINE_DECL std::vector<guint8> base64_decode (const std::string & text) noexcept;

// guchar* g_base64_decode_inplace (gchar* text, gsize* out_len);
// guint8 g_base64_decode_inplace (guint8** text, gsize* out_len);
// SKIP; inout array not supported, inconsistent return  pointer depth (1 vs 0)

// gsize g_base64_decode_step (const gchar* in, gsize len, gint* state, guint* save);
// gsize g_base64_decode_step (const guint8* in, gsize len, gint* state, guint* save);
// IGNORE; not introspectable, inconsistent array info

// gchar* g_base64_encode (const guchar* data, gsize len);
// char* g_base64_encode (const guint8* data, gsize len);
GI_INLINE_DECL std::string base64_encode (guint8 * data, gsize len) noexcept;

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
GI_INLINE_DECL gint bit_nth_lsf (gulong mask, gint nth_bit) noexcept;

// gint g_bit_nth_msf (gulong mask, gint nth_bit);
// gint g_bit_nth_msf (gulong mask, gint nth_bit);
GI_INLINE_DECL gint bit_nth_msf (gulong mask, gint nth_bit) noexcept;

// guint g_bit_storage (gulong number);
// guint g_bit_storage (gulong number);
GI_INLINE_DECL guint bit_storage (gulong number) noexcept;

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
GI_INLINE_DECL std::string build_filenamev (const std::vector<std::string> & args) noexcept;

// gchar* g_build_path (const gchar* separator, const gchar* first_element);
// char* g_build_path (const char* separator, const char* first_element);
// IGNORE; not introspectable, varargs not supported

// gchar* g_build_pathv (const gchar* separator, gchar** args);
// char* g_build_pathv (const char* separator, char** args);
GI_INLINE_DECL std::string build_pathv (const std::string & separator, const std::vector<std::string> & args) noexcept;

// gchar* g_canonicalize_filename (const gchar* filename, const gchar* relative_to);
// char* g_canonicalize_filename (const char* filename, const char* relative_to);
GI_INLINE_DECL std::string canonicalize_filename (const std::string & filename, const std::string & relative_to) noexcept;
GI_INLINE_DECL std::string canonicalize_filename (const std::string & filename) noexcept;

// int g_chdir (const gchar* path);
// gint g_chdir (const char* path);
GI_INLINE_DECL gint chdir (const std::string & path) noexcept;

// const gchar* glib_check_version (guint required_major, guint required_minor, guint required_micro);
// const char* glib_check_version (guint required_major, guint required_minor, guint required_micro);
GI_INLINE_DECL std::string check_version (guint required_major, guint required_minor, guint required_micro) noexcept;

// guint g_child_watch_add (GPid pid, GChildWatchFunc function, gpointer data);
// guint g_child_watch_add (::GPid pid, GLib::ChildWatchFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by child_watch_add_full

// guint g_child_watch_add_full (gint priority, GPid pid, GChildWatchFunc function, gpointer data, GDestroyNotify notify);
// guint g_child_watch_add_full (gint priority, ::GPid pid, GLib::ChildWatchFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL guint child_watch_add (gint priority, ::GPid pid, GLib::ChildWatchFunc function) noexcept;

// GSource* g_child_watch_source_new (GPid pid);
// ::GSource* g_child_watch_source_new (::GPid pid);
GI_INLINE_DECL GLib::Source child_watch_source_new (::GPid pid) noexcept;

// void g_clear_error (GError ** error);
// void g_clear_error (GError ** error);
GI_INLINE_DECL void clear_error ();
GI_INLINE_DECL void clear_error (GLib::Error * _error) noexcept;

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
GI_INLINE_DECL std::string compute_checksum_for_bytes (GLib::ChecksumType checksum_type, GLib::Bytes data) noexcept;

// gchar* g_compute_checksum_for_data (GChecksumType checksum_type, const guchar* data, gsize length);
// char* g_compute_checksum_for_data (::GChecksumType checksum_type, const guint8* data, gsize length);
GI_INLINE_DECL std::string compute_checksum_for_data (GLib::ChecksumType checksum_type, guint8 * data, gsize length) noexcept;

// gchar* g_compute_checksum_for_string (GChecksumType checksum_type, const gchar* str, gssize length);
// char* g_compute_checksum_for_string (::GChecksumType checksum_type, const char* str, gssize length);
GI_INLINE_DECL std::string compute_checksum_for_string (GLib::ChecksumType checksum_type, const std::string & str, gssize length) noexcept;

// gchar* g_compute_hmac_for_bytes (GChecksumType digest_type, GBytes* key, GBytes* data);
// char* g_compute_hmac_for_bytes (::GChecksumType digest_type, ::GBytes* key, ::GBytes* data);
GI_INLINE_DECL std::string compute_hmac_for_bytes (GLib::ChecksumType digest_type, GLib::Bytes key, GLib::Bytes data) noexcept;

// gchar* g_compute_hmac_for_data (GChecksumType digest_type, const guchar* key, gsize key_len, const guchar* data, gsize length);
// char* g_compute_hmac_for_data (::GChecksumType digest_type, const guint8* key, gsize key_len, const guint8* data, gsize length);
GI_INLINE_DECL std::string compute_hmac_for_data (GLib::ChecksumType digest_type, guint8 * key, gsize key_len, guint8 * data, gsize length) noexcept;

// gchar* g_compute_hmac_for_string (GChecksumType digest_type, const guchar* key, gsize key_len, const gchar* str, gssize length);
// char* g_compute_hmac_for_string (::GChecksumType digest_type, const guint8* key, gsize key_len, const char* str, gssize length);
GI_INLINE_DECL std::string compute_hmac_for_string (GLib::ChecksumType digest_type, guint8 * key, gsize key_len, const std::string & str, gssize length) noexcept;

// gchar* g_convert (const gchar* str, gssize len, const gchar* to_codeset, const gchar* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* g_convert (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL std::vector<guint8> convert (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, gsize * bytes_read);
GI_INLINE_DECL std::vector<guint8> convert (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, gsize * bytes_read, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> convert (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset);
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> convert (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, GLib::Error * _error) noexcept;

// GQuark g_convert_error_quark ();
// ::GQuark g_convert_error_quark ();
GI_INLINE_DECL GLib::Quark convert_error_quark () noexcept;

// gchar* g_convert_with_fallback (const gchar* str, gssize len, const gchar* to_codeset, const gchar* from_codeset, const gchar* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* g_convert_with_fallback (const guint8* str, gssize len, const char* to_codeset, const char* from_codeset, const char* fallback, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL std::vector<guint8> convert_with_fallback (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, const std::string & fallback, gsize * bytes_read);
GI_INLINE_DECL std::vector<guint8> convert_with_fallback (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, const std::string & fallback, gsize * bytes_read, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> convert_with_fallback (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, const std::string & fallback);
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> convert_with_fallback (guint8 * str, gssize len, const std::string & to_codeset, const std::string & from_codeset, const std::string & fallback, GLib::Error * _error) noexcept;

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
GI_INLINE_DECL void dataset_destroy (const void* dataset_location) noexcept;

// void g_dataset_foreach (gconstpointer dataset_location, GDataForeachFunc func, gpointer user_data);
// void g_dataset_foreach (const void* dataset_location, GLib::DataForeachFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL void dataset_foreach (const void* dataset_location, GLib::DataForeachFunc func) noexcept;

// gpointer g_dataset_id_get_data (gconstpointer dataset_location, GQuark key_id);
// void* g_dataset_id_get_data (const void* dataset_location, ::GQuark key_id);
GI_INLINE_DECL gpointer dataset_id_get_data (const void* dataset_location, ::GQuark key_id) noexcept;

// gpointer g_dataset_id_remove_no_notify (gconstpointer dataset_location, GQuark key_id);
// void* g_dataset_id_remove_no_notify (const void* dataset_location, ::GQuark key_id);
GI_INLINE_DECL gpointer dataset_id_remove_no_notify (const void* dataset_location, ::GQuark key_id) noexcept;

// void g_dataset_id_set_data_full (gconstpointer dataset_location, GQuark key_id, gpointer data, GDestroyNotify destroy_func);
// void g_dataset_id_set_data_full (const void* dataset_location, ::GQuark key_id, void* data, GLib::DestroyNotify::cfunction_type destroy_func);
// IGNORE; not introspectable, callback misses closure info

// const gchar* g_dcgettext (const gchar* domain, const gchar* msgid, gint category);
// const char* g_dcgettext (const char* domain, const char* msgid, gint category);
GI_INLINE_DECL std::string dcgettext (const std::string & domain, const std::string & msgid, gint category) noexcept;
GI_INLINE_DECL std::string dcgettext (const std::string & msgid, gint category) noexcept;

// const gchar* g_dgettext (const gchar* domain, const gchar* msgid);
// const char* g_dgettext (const char* domain, const char* msgid);
GI_INLINE_DECL std::string dgettext (const std::string & domain, const std::string & msgid) noexcept;
GI_INLINE_DECL std::string dgettext (const std::string & msgid) noexcept;

// gboolean g_direct_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_direct_equal (const void* v1, const void* v2);
GI_INLINE_DECL bool direct_equal (const void* v1, const void* v2) noexcept;

// guint g_direct_hash (gconstpointer v);
// guint g_direct_hash (const void* v);
GI_INLINE_DECL guint direct_hash (const void* v) noexcept;

// const gchar* g_dngettext (const gchar* domain, const gchar* msgid, const gchar* msgid_plural, gulong n);
// const char* g_dngettext (const char* domain, const char* msgid, const char* msgid_plural, gulong n);
GI_INLINE_DECL std::string dngettext (const std::string & domain, const std::string & msgid, const std::string & msgid_plural, gulong n) noexcept;
GI_INLINE_DECL std::string dngettext (const std::string & msgid, const std::string & msgid_plural, gulong n) noexcept;

// gboolean g_double_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_double_equal (const void* v1, const void* v2);
GI_INLINE_DECL bool double_equal (const void* v1, const void* v2) noexcept;

// guint g_double_hash (gconstpointer v);
// guint g_double_hash (const void* v);
GI_INLINE_DECL guint double_hash (const void* v) noexcept;

// const gchar* g_dpgettext (const gchar* domain, const gchar* msgctxtid, gsize msgidoffset);
// const char* g_dpgettext (const char* domain, const char* msgctxtid, gsize msgidoffset);
GI_INLINE_DECL std::string dpgettext (const std::string & domain, const std::string & msgctxtid, gsize msgidoffset) noexcept;
GI_INLINE_DECL std::string dpgettext (const std::string & msgctxtid, gsize msgidoffset) noexcept;

// const gchar* g_dpgettext2 (const gchar* domain, const gchar* context, const gchar* msgid);
// const char* g_dpgettext2 (const char* domain, const char* context, const char* msgid);
GI_INLINE_DECL std::string dpgettext2 (const std::string & domain, const std::string & context, const std::string & msgid) noexcept;
GI_INLINE_DECL std::string dpgettext2 (const std::string & context, const std::string & msgid) noexcept;

// const gchar* g_environ_getenv (gchar** envp, const gchar* variable);
// const char* g_environ_getenv (char** envp, const char* variable);
GI_INLINE_DECL std::string environ_getenv (const std::vector<std::string> & envp, const std::string & variable) noexcept;

// gchar** g_environ_setenv (gchar** envp, const gchar* variable, const gchar* value, gboolean overwrite);
// char** g_environ_setenv (char** envp, const char* variable, const char* value, gboolean overwrite);
GI_INLINE_DECL std::vector<std::string> environ_setenv (const std::vector<std::string> & envp, const std::string & variable, const std::string & value, gboolean overwrite) noexcept;

// gchar** g_environ_unsetenv (gchar** envp, const gchar* variable);
// char** g_environ_unsetenv (char** envp, const char* variable);
GI_INLINE_DECL std::vector<std::string> environ_unsetenv (const std::vector<std::string> & envp, const std::string & variable) noexcept;

// GFileError g_file_error_from_errno (gint err_no);
// ::GFileError g_file_error_from_errno (gint err_no);
GI_INLINE_DECL GLib::FileError file_error_from_errno (gint err_no) noexcept;

// GQuark g_file_error_quark ();
// ::GQuark g_file_error_quark ();
GI_INLINE_DECL GLib::Quark file_error_quark () noexcept;

// gboolean g_file_get_contents (const gchar* filename, gchar** contents, gsize* length, GError ** error);
// gboolean g_file_get_contents (const char* filename, guint8** contents, gsize* length, GError ** error);
GI_INLINE_DECL bool file_get_contents (const std::string & filename, std::vector<guint8> & contents);
GI_INLINE_DECL bool file_get_contents (const std::string & filename, std::vector<guint8> & contents, GLib::Error * _error) noexcept;

// gint g_file_open_tmp (const gchar* tmpl, gchar** name_used, GError ** error);
// gint g_file_open_tmp (const char* tmpl, char** name_used, GError ** error);
GI_INLINE_DECL gint file_open_tmp (const std::string & tmpl, std::string & name_used);
GI_INLINE_DECL gint file_open_tmp (std::string & name_used);
GI_INLINE_DECL gint file_open_tmp (const std::string & tmpl, std::string & name_used, GLib::Error * _error) noexcept;
GI_INLINE_DECL gint file_open_tmp (std::string & name_used, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gint, std::string> file_open_tmp (const std::string & tmpl);
GI_INLINE_DECL std::tuple<gint, std::string> file_open_tmp ();
GI_INLINE_DECL std::tuple<gint, std::string> file_open_tmp (const std::string & tmpl, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<gint, std::string> file_open_tmp (GLib::Error * _error) noexcept;

// gchar* g_file_read_link (const gchar* filename, GError ** error);
// char* g_file_read_link (const char* filename, GError ** error);
GI_INLINE_DECL std::string file_read_link (const std::string & filename);
GI_INLINE_DECL std::string file_read_link (const std::string & filename, GLib::Error * _error) noexcept;

// gboolean g_file_set_contents (const gchar* filename, const gchar* contents, gssize length, GError ** error);
// gboolean g_file_set_contents (const char* filename, const guint8* contents, gssize length, GError ** error);
GI_INLINE_DECL bool file_set_contents (const std::string & filename, guint8 * contents, gssize length);
GI_INLINE_DECL bool file_set_contents (const std::string & filename, guint8 * contents, gssize length, GLib::Error * _error) noexcept;

// gboolean g_file_set_contents_full (const gchar* filename, const gchar* contents, gssize length, GFileSetContentsFlags flags, int mode, GError ** error);
// gboolean g_file_set_contents_full (const char* filename, const guint8* contents, gssize length, ::GFileSetContentsFlags flags, gint mode, GError ** error);
GI_INLINE_DECL bool file_set_contents_full (const std::string & filename, guint8 * contents, gssize length, GLib::FileSetContentsFlags flags, gint mode);
GI_INLINE_DECL bool file_set_contents_full (const std::string & filename, guint8 * contents, gssize length, GLib::FileSetContentsFlags flags, gint mode, GLib::Error * _error) noexcept;

// gboolean g_file_test (const gchar* filename, GFileTest test);
// gboolean g_file_test (const char* filename, ::GFileTest test);
GI_INLINE_DECL bool file_test (const std::string & filename, GLib::FileTest test) noexcept;

// gchar* g_filename_display_basename (const gchar* filename);
// char* g_filename_display_basename (const char* filename);
GI_INLINE_DECL std::string filename_display_basename (const std::string & filename) noexcept;

// gchar* g_filename_display_name (const gchar* filename);
// char* g_filename_display_name (const char* filename);
GI_INLINE_DECL std::string filename_display_name (const std::string & filename) noexcept;

// gchar* g_filename_from_uri (const gchar* uri, gchar** hostname, GError ** error);
// char* g_filename_from_uri (const char* uri, char** hostname, GError ** error);
GI_INLINE_DECL std::string filename_from_uri (const std::string & uri, std::string * hostname = nullptr);
GI_INLINE_DECL std::string filename_from_uri (const std::string & uri, std::string * hostname, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::string, std::string> filename_from_uri (const std::string & uri);
GI_INLINE_DECL std::tuple<std::string, std::string> filename_from_uri (const std::string & uri, GLib::Error * _error) noexcept;

// gchar* g_filename_from_utf8 (const gchar* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* g_filename_from_utf8 (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL std::string filename_from_utf8 (const std::string & utf8string, gssize len, gsize * bytes_read = nullptr, gsize * bytes_written = nullptr);
GI_INLINE_DECL std::string filename_from_utf8 (const std::string & utf8string, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize, gsize> filename_from_utf8 (const std::string & utf8string, gssize len);
GI_INLINE_DECL std::tuple<std::string, gsize, gsize> filename_from_utf8 (const std::string & utf8string, gssize len, GLib::Error * _error) noexcept;

// gchar* g_filename_to_uri (const gchar* filename, const gchar* hostname, GError ** error);
// char* g_filename_to_uri (const char* filename, const char* hostname, GError ** error);
GI_INLINE_DECL std::string filename_to_uri (const std::string & filename, const std::string & hostname);
GI_INLINE_DECL std::string filename_to_uri (const std::string & filename);
GI_INLINE_DECL std::string filename_to_uri (const std::string & filename, const std::string & hostname, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::string filename_to_uri (const std::string & filename, GLib::Error * _error) noexcept;

// gchar* g_filename_to_utf8 (const gchar* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* g_filename_to_utf8 (const char* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL std::string filename_to_utf8 (const std::string & opsysstring, gssize len, gsize * bytes_read = nullptr, gsize * bytes_written = nullptr);
GI_INLINE_DECL std::string filename_to_utf8 (const std::string & opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize, gsize> filename_to_utf8 (const std::string & opsysstring, gssize len);
GI_INLINE_DECL std::tuple<std::string, gsize, gsize> filename_to_utf8 (const std::string & opsysstring, gssize len, GLib::Error * _error) noexcept;

// gchar* g_find_program_in_path (const gchar* program);
// char* g_find_program_in_path (const char* program);
GI_INLINE_DECL std::string find_program_in_path (const std::string & program) noexcept;

// gchar* g_format_size (guint64 size);
// char* g_format_size (guint64 size);
GI_INLINE_DECL std::string format_size (guint64 size) noexcept;

// gchar* g_format_size_full (guint64 size, GFormatSizeFlags flags);
// char* g_format_size_full (guint64 size, ::GFormatSizeFlags flags);
GI_INLINE_DECL std::string format_size_full (guint64 size, GLib::FormatSizeFlags flags) noexcept;

// gint g_fprintf (FILE* file, const gchar* format);
// gint g_fprintf (void* file, const char* format);
// IGNORE; not introspectable, varargs not supported

// const gchar* g_get_application_name ();
// const char* g_get_application_name ();
GI_INLINE_DECL std::string get_application_name () noexcept;

// gboolean g_get_charset (const char** charset);
// gboolean g_get_charset (const char** charset);
GI_INLINE_DECL bool get_charset (std::string * charset = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> get_charset () noexcept;

// gchar* g_get_codeset ();
// char* g_get_codeset ();
GI_INLINE_DECL std::string get_codeset () noexcept;

// gboolean g_get_console_charset (const char** charset);
// gboolean g_get_console_charset (const char** charset);
GI_INLINE_DECL bool get_console_charset (std::string * charset = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> get_console_charset () noexcept;

// gchar* g_get_current_dir ();
// char* g_get_current_dir ();
GI_INLINE_DECL std::string get_current_dir () noexcept;

// gchar** g_get_environ ();
// char** g_get_environ ();
GI_INLINE_DECL std::vector<std::string> get_environ () noexcept;

// gboolean g_get_filename_charsets (const gchar*** filename_charsets);
// gboolean g_get_filename_charsets (const char*** filename_charsets);
GI_INLINE_DECL bool get_filename_charsets (std::vector<std::string> & filename_charsets) noexcept;
GI_INLINE_DECL std::tuple<bool, std::vector<std::string>> get_filename_charsets () noexcept;

// const gchar* g_get_home_dir ();
// const char* g_get_home_dir ();
GI_INLINE_DECL std::string get_home_dir () noexcept;

// const gchar* g_get_host_name ();
// const char* g_get_host_name ();
GI_INLINE_DECL std::string get_host_name () noexcept;

// const gchar* const* g_get_language_names ();
// const char** g_get_language_names ();
GI_INLINE_DECL std::vector<std::string> get_language_names () noexcept;

// const gchar* const* g_get_language_names_with_category (const gchar* category_name);
// const char** g_get_language_names_with_category (const char* category_name);
GI_INLINE_DECL std::vector<std::string> get_language_names_with_category (const std::string & category_name) noexcept;

// gchar** g_get_locale_variants (const gchar* locale);
// char** g_get_locale_variants (const char* locale);
GI_INLINE_DECL std::vector<std::string> get_locale_variants (const std::string & locale) noexcept;

// gint64 g_get_monotonic_time ();
// gint64 g_get_monotonic_time ();
GI_INLINE_DECL gint64 get_monotonic_time () noexcept;

// guint g_get_num_processors ();
// guint g_get_num_processors ();
GI_INLINE_DECL guint get_num_processors () noexcept;

// gchar* g_get_os_info (const gchar* key_name);
// char* g_get_os_info (const char* key_name);
GI_INLINE_DECL std::string get_os_info (const std::string & key_name) noexcept;

// const gchar* g_get_prgname ();
// const char* g_get_prgname ();
GI_INLINE_DECL std::string get_prgname () noexcept;

// const gchar* g_get_real_name ();
// const char* g_get_real_name ();
GI_INLINE_DECL std::string get_real_name () noexcept;

// gint64 g_get_real_time ();
// gint64 g_get_real_time ();
GI_INLINE_DECL gint64 get_real_time () noexcept;

// const gchar* const* g_get_system_config_dirs ();
// const char** g_get_system_config_dirs ();
GI_INLINE_DECL std::vector<std::string> get_system_config_dirs () noexcept;

// const gchar* const* g_get_system_data_dirs ();
// const char** g_get_system_data_dirs ();
GI_INLINE_DECL std::vector<std::string> get_system_data_dirs () noexcept;

// const gchar* g_get_tmp_dir ();
// const char* g_get_tmp_dir ();
GI_INLINE_DECL std::string get_tmp_dir () noexcept;

// const gchar* g_get_user_cache_dir ();
// const char* g_get_user_cache_dir ();
GI_INLINE_DECL std::string get_user_cache_dir () noexcept;

// const gchar* g_get_user_config_dir ();
// const char* g_get_user_config_dir ();
GI_INLINE_DECL std::string get_user_config_dir () noexcept;

// const gchar* g_get_user_data_dir ();
// const char* g_get_user_data_dir ();
GI_INLINE_DECL std::string get_user_data_dir () noexcept;

// const gchar* g_get_user_name ();
// const char* g_get_user_name ();
GI_INLINE_DECL std::string get_user_name () noexcept;

// const gchar* g_get_user_runtime_dir ();
// const char* g_get_user_runtime_dir ();
GI_INLINE_DECL std::string get_user_runtime_dir () noexcept;

// const gchar* g_get_user_special_dir (GUserDirectory directory);
// const char* g_get_user_special_dir (::GUserDirectory directory);
GI_INLINE_DECL std::string get_user_special_dir (GLib::UserDirectory directory) noexcept;

// const gchar* g_get_user_state_dir ();
// const char* g_get_user_state_dir ();
GI_INLINE_DECL std::string get_user_state_dir () noexcept;

// const gchar* g_getenv (const gchar* variable);
// const char* g_getenv (const char* variable);
GI_INLINE_DECL std::string getenv (const std::string & variable) noexcept;

// gboolean g_hostname_is_ascii_encoded (const gchar* hostname);
// gboolean g_hostname_is_ascii_encoded (const char* hostname);
GI_INLINE_DECL bool hostname_is_ascii_encoded (const std::string & hostname) noexcept;

// gboolean g_hostname_is_ip_address (const gchar* hostname);
// gboolean g_hostname_is_ip_address (const char* hostname);
GI_INLINE_DECL bool hostname_is_ip_address (const std::string & hostname) noexcept;

// gboolean g_hostname_is_non_ascii (const gchar* hostname);
// gboolean g_hostname_is_non_ascii (const char* hostname);
GI_INLINE_DECL bool hostname_is_non_ascii (const std::string & hostname) noexcept;

// gchar* g_hostname_to_ascii (const gchar* hostname);
// char* g_hostname_to_ascii (const char* hostname);
GI_INLINE_DECL std::string hostname_to_ascii (const std::string & hostname) noexcept;

// gchar* g_hostname_to_unicode (const gchar* hostname);
// char* g_hostname_to_unicode (const char* hostname);
GI_INLINE_DECL std::string hostname_to_unicode (const std::string & hostname) noexcept;

// gsize g_iconv (GIConv converter, gchar** inbuf, gsize* inbytes_left, gchar** outbuf, gsize* outbytes_left);
// gsize g_iconv ( converter, char* inbuf, gsize inbytes_left, char* outbuf, gsize outbytes_left);
// IGNORE; not introspectable, inconsistent in outbytes_left pointer depth (1 vs 0), inconsistent in outbuf pointer depth (2 vs 1), inconsistent in inbytes_left pointer depth (1 vs 0), inconsistent in inbuf pointer depth (2 vs 1), converter type  not supported

// guint g_idle_add (GSourceFunc function, gpointer data);
// guint g_idle_add (GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by idle_add_full

// guint g_idle_add_full (gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint g_idle_add_full (gint priority, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL guint idle_add (gint priority, GLib::SourceFunc function) noexcept;

// gboolean g_idle_remove_by_data (gpointer data);
// gboolean g_idle_remove_by_data (void* data);
GI_INLINE_DECL bool idle_remove_by_data (void* data) noexcept;

// GSource* g_idle_source_new ();
// ::GSource* g_idle_source_new ();
GI_INLINE_DECL GLib::Source idle_source_new () noexcept;

// gboolean g_int64_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_int64_equal (const void* v1, const void* v2);
GI_INLINE_DECL bool int64_equal (const void* v1, const void* v2) noexcept;

// guint g_int64_hash (gconstpointer v);
// guint g_int64_hash (const void* v);
GI_INLINE_DECL guint int64_hash (const void* v) noexcept;

// gboolean g_int_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_int_equal (const void* v1, const void* v2);
GI_INLINE_DECL bool int_equal (const void* v1, const void* v2) noexcept;

// guint g_int_hash (gconstpointer v);
// guint g_int_hash (const void* v);
GI_INLINE_DECL guint int_hash (const void* v) noexcept;

// const gchar* g_intern_static_string (const gchar* string);
// const char* g_intern_static_string (const char* string);
GI_INLINE_DECL std::string intern_static_string (const std::string & string) noexcept;
GI_INLINE_DECL std::string intern_static_string () noexcept;

// const gchar* g_intern_string (const gchar* string);
// const char* g_intern_string (const char* string);
GI_INLINE_DECL std::string intern_string (const std::string & string) noexcept;
GI_INLINE_DECL std::string intern_string () noexcept;

// guint g_io_add_watch (GIOChannel* channel, GIOCondition condition, GIOFunc func, gpointer user_data);
// guint g_io_add_watch (::GIOChannel* channel, ::GIOCondition condition,  func, void* user_data);
// IGNORE; not introspectable; shadowed-by io_add_watch_full

// guint g_io_add_watch_full (GIOChannel* channel, gint priority, GIOCondition condition, GIOFunc func, gpointer user_data, GDestroyNotify notify);
// guint g_io_add_watch_full (::GIOChannel* channel, gint priority, ::GIOCondition condition,  func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
// SKIP; func type  not supported

// GSource* g_io_create_watch (GIOChannel* channel, GIOCondition condition);
// ::GSource* g_io_create_watch (::GIOChannel* channel, ::GIOCondition condition);
GI_INLINE_DECL GLib::Source io_create_watch (GLib::IOChannel channel, GLib::IOCondition condition) noexcept;

// gchar** g_listenv ();
// char** g_listenv ();
GI_INLINE_DECL std::vector<std::string> listenv () noexcept;

// gchar* g_locale_from_utf8 (const gchar* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// guint8* g_locale_from_utf8 (const char* utf8string, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL std::vector<guint8> locale_from_utf8 (const std::string & utf8string, gssize len, gsize * bytes_read);
GI_INLINE_DECL std::vector<guint8> locale_from_utf8 (const std::string & utf8string, gssize len, gsize * bytes_read, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> locale_from_utf8 (const std::string & utf8string, gssize len);
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> locale_from_utf8 (const std::string & utf8string, gssize len, GLib::Error * _error) noexcept;

// gchar* g_locale_to_utf8 (const gchar* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
// char* g_locale_to_utf8 (const guint8* opsysstring, gssize len, gsize* bytes_read, gsize* bytes_written, GError ** error);
GI_INLINE_DECL std::string locale_to_utf8 (guint8 * opsysstring, gssize len, gsize * bytes_read = nullptr, gsize * bytes_written = nullptr);
GI_INLINE_DECL std::string locale_to_utf8 (guint8 * opsysstring, gssize len, gsize * bytes_read, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize, gsize> locale_to_utf8 (guint8 * opsysstring, gssize len);
GI_INLINE_DECL std::tuple<std::string, gsize, gsize> locale_to_utf8 (guint8 * opsysstring, gssize len, GLib::Error * _error) noexcept;

// void g_log (const gchar* log_domain, GLogLevelFlags log_level, const gchar* format);
// void g_log (const char* log_domain, ::GLogLevelFlags log_level, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_log_default_handler (const gchar* log_domain, GLogLevelFlags log_level, const gchar* message, gpointer unused_data);
// void g_log_default_handler (const char* log_domain, ::GLogLevelFlags log_level, const char* message, void* unused_data);
GI_INLINE_DECL void log_default_handler (const std::string & log_domain, GLib::LogLevelFlags log_level, const std::string & message, void* unused_data) noexcept;
GI_INLINE_DECL void log_default_handler (GLib::LogLevelFlags log_level, void* unused_data) noexcept;

// gboolean g_log_get_debug_enabled ();
// gboolean g_log_get_debug_enabled ();
GI_INLINE_DECL bool log_get_debug_enabled () noexcept;

// void g_log_remove_handler (const gchar* log_domain, guint handler_id);
// void g_log_remove_handler (const char* log_domain, guint handler_id);
GI_INLINE_DECL void log_remove_handler (const std::string & log_domain, guint handler_id) noexcept;

// GLogLevelFlags g_log_set_always_fatal (GLogLevelFlags fatal_mask);
// ::GLogLevelFlags g_log_set_always_fatal (::GLogLevelFlags fatal_mask);
GI_INLINE_DECL GLib::LogLevelFlags log_set_always_fatal (GLib::LogLevelFlags fatal_mask) noexcept;

// void g_log_set_debug_enabled (gboolean enabled);
// void g_log_set_debug_enabled (gboolean enabled);
GI_INLINE_DECL void log_set_debug_enabled (gboolean enabled) noexcept;

// FAILURE on g_log_set_default_handler; No such node (<xmlattr>.transfer-ownership)
// GLogLevelFlags g_log_set_fatal_mask (const gchar* log_domain, GLogLevelFlags fatal_mask);
// ::GLogLevelFlags g_log_set_fatal_mask (const char* log_domain, ::GLogLevelFlags fatal_mask);
GI_INLINE_DECL GLib::LogLevelFlags log_set_fatal_mask (const std::string & log_domain, GLib::LogLevelFlags fatal_mask) noexcept;

// guint g_log_set_handler (const gchar* log_domain, GLogLevelFlags log_levels, GLogFunc log_func, gpointer user_data);
// guint g_log_set_handler (const char* log_domain, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func, void* user_data);
// IGNORE; not introspectable; shadowed-by log_set_handler_full

// guint g_log_set_handler_full (const gchar* log_domain, GLogLevelFlags log_levels, GLogFunc log_func, gpointer user_data, GDestroyNotify destroy);
// guint g_log_set_handler_full (const char* log_domain, ::GLogLevelFlags log_levels, GLib::LogFunc::cfunction_type log_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL guint log_set_handler (const std::string & log_domain, GLib::LogLevelFlags log_levels, GLib::LogFunc log_func) noexcept;
GI_INLINE_DECL guint log_set_handler (GLib::LogLevelFlags log_levels, GLib::LogFunc log_func) noexcept;

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
GI_INLINE_DECL void log_variant (const std::string & log_domain, GLib::LogLevelFlags log_level, GLib::Variant fields) noexcept;
GI_INLINE_DECL void log_variant (GLib::LogLevelFlags log_level, GLib::Variant fields) noexcept;

// GLogWriterOutput g_log_writer_default (GLogLevelFlags log_level, const GLogField* fields, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_default (::GLogLevelFlags log_level, const ::GLogField** fields, gsize n_fields, void* user_data);
// SKIP; inconsistent in fields pointer depth (1 vs 2)

// void g_log_writer_default_set_use_stderr (gboolean use_stderr);
// void g_log_writer_default_set_use_stderr (gboolean use_stderr);
GI_INLINE_DECL void log_writer_default_set_use_stderr (gboolean use_stderr) noexcept;

// gboolean g_log_writer_default_would_drop (GLogLevelFlags log_level, const char* log_domain);
// gboolean g_log_writer_default_would_drop (::GLogLevelFlags log_level, const char* log_domain);
GI_INLINE_DECL bool log_writer_default_would_drop (GLib::LogLevelFlags log_level, const std::string & log_domain) noexcept;
GI_INLINE_DECL bool log_writer_default_would_drop (GLib::LogLevelFlags log_level) noexcept;

// gchar* g_log_writer_format_fields (GLogLevelFlags log_level, const GLogField* fields, gsize n_fields, gboolean use_color);
// char* g_log_writer_format_fields (::GLogLevelFlags log_level, const ::GLogField** fields, gsize n_fields, gboolean use_color);
// SKIP; inconsistent in fields pointer depth (1 vs 2)

// gboolean g_log_writer_is_journald (gint output_fd);
// gboolean g_log_writer_is_journald (gint output_fd);
GI_INLINE_DECL bool log_writer_is_journald (gint output_fd) noexcept;

// GLogWriterOutput g_log_writer_journald (GLogLevelFlags log_level, const GLogField* fields, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_journald (::GLogLevelFlags log_level, const ::GLogField** fields, gsize n_fields, void* user_data);
// SKIP; inconsistent in fields pointer depth (1 vs 2)

// GLogWriterOutput g_log_writer_standard_streams (GLogLevelFlags log_level, const GLogField* fields, gsize n_fields, gpointer user_data);
// ::GLogWriterOutput g_log_writer_standard_streams (::GLogLevelFlags log_level, const ::GLogField** fields, gsize n_fields, void* user_data);
// SKIP; inconsistent in fields pointer depth (1 vs 2)

// gboolean g_log_writer_supports_color (gint output_fd);
// gboolean g_log_writer_supports_color (gint output_fd);
GI_INLINE_DECL bool log_writer_supports_color (gint output_fd) noexcept;

// void g_logv (const gchar* log_domain, GLogLevelFlags log_level, const gchar* format, va_list args);
// void g_logv (const char* log_domain, ::GLogLevelFlags log_level, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// GSource* g_main_current_source ();
// ::GSource* g_main_current_source ();
GI_INLINE_DECL GLib::Source main_current_source () noexcept;

// gint g_main_depth ();
// gint g_main_depth ();
GI_INLINE_DECL gint main_depth () noexcept;

// gpointer g_malloc (gsize n_bytes);
// void* g_malloc (gsize n_bytes);
GI_INLINE_DECL gpointer malloc (gsize n_bytes) noexcept;

// gpointer g_malloc0 (gsize n_bytes);
// void* g_malloc0 (gsize n_bytes);
GI_INLINE_DECL gpointer malloc0 (gsize n_bytes) noexcept;

// gpointer g_malloc0_n (gsize n_blocks, gsize n_block_bytes);
// void* g_malloc0_n (gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer malloc0_n (gsize n_blocks, gsize n_block_bytes) noexcept;

// gpointer g_malloc_n (gsize n_blocks, gsize n_block_bytes);
// void* g_malloc_n (gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer malloc_n (gsize n_blocks, gsize n_block_bytes) noexcept;

// gboolean g_markup_collect_attributes (const gchar* element_name, const gchar** attribute_names, const gchar** attribute_values, GError** error, GMarkupCollectType first_type, const gchar* first_attr);
// gboolean g_markup_collect_attributes (const char* element_name, const char* attribute_names, const char* attribute_values, ::GError* error, ::GMarkupCollectType first_type, const char* first_attr);
// IGNORE; not introspectable, varargs not supported

// GQuark g_markup_error_quark ();
// ::GQuark g_markup_error_quark ();
GI_INLINE_DECL GLib::Quark markup_error_quark () noexcept;

// gchar* g_markup_escape_text (const gchar* text, gssize length);
// char* g_markup_escape_text (const char* text, gssize length);
GI_INLINE_DECL std::string markup_escape_text (const std::string & text, gssize length) noexcept;

// gchar* g_markup_printf_escaped (const char* format);
// char* g_markup_printf_escaped (const char* format);
// IGNORE; not introspectable, varargs not supported

// gchar* g_markup_vprintf_escaped (const char* format, va_list args);
// char* g_markup_vprintf_escaped (const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// gpointer g_memdup2 (gconstpointer mem, gsize byte_size);
// void* g_memdup2 (const void* mem, gsize byte_size);
GI_INLINE_DECL gpointer memdup2 (const void* mem, gsize byte_size) noexcept;

// gint g_mkdir_with_parents (const gchar* pathname, gint mode);
// gint g_mkdir_with_parents (const char* pathname, gint mode);
GI_INLINE_DECL gint mkdir_with_parents (const std::string & pathname, gint mode) noexcept;

// gchar* g_mkdtemp (gchar* tmpl);
// char* g_mkdtemp (char* tmpl);
GI_INLINE_DECL std::string mkdtemp (const std::string & tmpl) noexcept;

// gchar* g_mkdtemp_full (gchar* tmpl, gint mode);
// char* g_mkdtemp_full (char* tmpl, gint mode);
GI_INLINE_DECL std::string mkdtemp_full (const std::string & tmpl, gint mode) noexcept;

// gint g_mkstemp (gchar* tmpl);
// gint g_mkstemp (char* tmpl);
GI_INLINE_DECL gint mkstemp (const std::string & tmpl) noexcept;

// gint g_mkstemp_full (gchar* tmpl, gint flags, gint mode);
// gint g_mkstemp_full (char* tmpl, gint flags, gint mode);
GI_INLINE_DECL gint mkstemp_full (const std::string & tmpl, gint flags, gint mode) noexcept;

// void g_nullify_pointer (gpointer* nullify_location);
// void g_nullify_pointer (void* nullify_location);
// SKIP; inconsistent in nullify_location pointer depth (2 vs 1)

// GQuark g_number_parser_error_quark ();
// ::GQuark g_number_parser_error_quark ();
GI_INLINE_DECL GLib::Quark number_parser_error_quark () noexcept;

// void g_on_error_query (const gchar* prg_name);
// void g_on_error_query (const char* prg_name);
GI_INLINE_DECL void on_error_query (const std::string & prg_name) noexcept;

// void g_on_error_stack_trace (const gchar* prg_name);
// void g_on_error_stack_trace (const char* prg_name);
GI_INLINE_DECL void on_error_stack_trace (const std::string & prg_name) noexcept;

// GQuark g_option_error_quark ();
// ::GQuark g_option_error_quark ();
GI_INLINE_DECL GLib::Quark option_error_quark () noexcept;

// guint g_parse_debug_string (const gchar* string, const GDebugKey* keys, guint nkeys);
// guint g_parse_debug_string (const char* string, const ::GDebugKey** keys, guint nkeys);
// SKIP; inconsistent in keys pointer depth (1 vs 2)

// gchar* g_path_get_basename (const gchar* file_name);
// char* g_path_get_basename (const char* file_name);
GI_INLINE_DECL std::string path_get_basename (const std::string & file_name) noexcept;

// gchar* g_path_get_dirname (const gchar* file_name);
// char* g_path_get_dirname (const char* file_name);
GI_INLINE_DECL std::string path_get_dirname (const std::string & file_name) noexcept;

// gboolean g_path_is_absolute (const gchar* file_name);
// gboolean g_path_is_absolute (const char* file_name);
GI_INLINE_DECL bool path_is_absolute (const std::string & file_name) noexcept;

// const gchar* g_path_skip_root (const gchar* file_name);
// const char* g_path_skip_root (const char* file_name);
GI_INLINE_DECL std::string path_skip_root (const std::string & file_name) noexcept;

// gboolean g_pattern_match_simple (const gchar* pattern, const gchar* string);
// gboolean g_pattern_match_simple (const char* pattern, const char* string);
GI_INLINE_DECL bool pattern_match_simple (const std::string & pattern, const std::string & string) noexcept;

// void g_pointer_bit_lock (void* address, gint lock_bit);
// void g_pointer_bit_lock (void* address, gint lock_bit);
GI_INLINE_DECL void pointer_bit_lock (void* address, gint lock_bit) noexcept;

// gboolean g_pointer_bit_trylock (void* address, gint lock_bit);
// gboolean g_pointer_bit_trylock (void* address, gint lock_bit);
GI_INLINE_DECL bool pointer_bit_trylock (void* address, gint lock_bit) noexcept;

// void g_pointer_bit_unlock (void* address, gint lock_bit);
// void g_pointer_bit_unlock (void* address, gint lock_bit);
GI_INLINE_DECL void pointer_bit_unlock (void* address, gint lock_bit) noexcept;

// gint g_poll (GPollFD* fds, guint nfds, gint timeout);
// gint g_poll (::GPollFD* fds, guint nfds, gint timeout);
GI_INLINE_DECL gint poll (GLib::PollFD fds, guint nfds, gint timeout) noexcept;

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
GI_INLINE_DECL void propagate_error (GLib::Error * dest, GLib::Error src) noexcept;
GI_INLINE_DECL GLib::Error propagate_error (GLib::Error src) noexcept;

// void g_propagate_prefixed_error (GError** dest, GError* src, const gchar* format);
// void g_propagate_prefixed_error (::GError* dest, ::GError* src, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_qsort_with_data (gconstpointer pbase, gint total_elems, gsize size, GCompareDataFunc compare_func, gpointer user_data);
// void g_qsort_with_data (const void* pbase, gint total_elems, gsize size, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// GQuark g_quark_from_static_string (const gchar* string);
// ::GQuark g_quark_from_static_string (const char* string);
GI_INLINE_DECL GLib::Quark quark_from_static_string (const std::string & string) noexcept;
GI_INLINE_DECL GLib::Quark quark_from_static_string () noexcept;

// GQuark g_quark_from_string (const gchar* string);
// ::GQuark g_quark_from_string (const char* string);
GI_INLINE_DECL GLib::Quark quark_from_string (const std::string & string) noexcept;
GI_INLINE_DECL GLib::Quark quark_from_string () noexcept;

// const gchar* g_quark_to_string (GQuark quark);
// const char* g_quark_to_string (::GQuark quark);
GI_INLINE_DECL std::string quark_to_string (::GQuark quark) noexcept;

// GQuark g_quark_try_string (const gchar* string);
// ::GQuark g_quark_try_string (const char* string);
GI_INLINE_DECL GLib::Quark quark_try_string (const std::string & string) noexcept;
GI_INLINE_DECL GLib::Quark quark_try_string () noexcept;

// gdouble g_random_double ();
// gdouble g_random_double ();
GI_INLINE_DECL gdouble random_double () noexcept;

// gdouble g_random_double_range (gdouble begin, gdouble end);
// gdouble g_random_double_range (gdouble begin, gdouble end);
GI_INLINE_DECL gdouble random_double_range (gdouble begin, gdouble end) noexcept;

// guint32 g_random_int ();
// guint32 g_random_int ();
GI_INLINE_DECL guint32 random_int () noexcept;

// gint32 g_random_int_range (gint32 begin, gint32 end);
// gint32 g_random_int_range (gint32 begin, gint32 end);
GI_INLINE_DECL gint32 random_int_range (gint32 begin, gint32 end) noexcept;

// void g_random_set_seed (guint32 seed);
// void g_random_set_seed (guint32 seed);
GI_INLINE_DECL void random_set_seed (guint32 seed) noexcept;

// gpointer g_rc_box_acquire (gpointer mem_block);
// void* g_rc_box_acquire (void* mem_block);
GI_INLINE_DECL gpointer rc_box_acquire (void* mem_block) noexcept;

// gpointer g_rc_box_alloc (gsize block_size);
// void* g_rc_box_alloc (gsize block_size);
GI_INLINE_DECL gpointer rc_box_alloc (gsize block_size) noexcept;

// gpointer g_rc_box_alloc0 (gsize block_size);
// void* g_rc_box_alloc0 (gsize block_size);
GI_INLINE_DECL gpointer rc_box_alloc0 (gsize block_size) noexcept;

// gpointer g_rc_box_dup (gsize block_size, gconstpointer mem_block);
// void* g_rc_box_dup (gsize block_size, const void* mem_block);
GI_INLINE_DECL gpointer rc_box_dup (gsize block_size, const void* mem_block) noexcept;

// gsize g_rc_box_get_size (gpointer mem_block);
// gsize g_rc_box_get_size (void* mem_block);
GI_INLINE_DECL gsize rc_box_get_size (void* mem_block) noexcept;

// void g_rc_box_release (gpointer mem_block);
// void g_rc_box_release (void* mem_block);
GI_INLINE_DECL void rc_box_release (void* mem_block) noexcept;

// void g_rc_box_release_full (gpointer mem_block, GDestroyNotify clear_func);
// void g_rc_box_release_full (void* mem_block, GLib::DestroyNotify::cfunction_type clear_func);
// SKIP; callback misses closure info

// gpointer g_realloc (gpointer mem, gsize n_bytes);
// void* g_realloc (void* mem, gsize n_bytes);
GI_INLINE_DECL gpointer realloc (void* mem, gsize n_bytes) noexcept;

// gpointer g_realloc_n (gpointer mem, gsize n_blocks, gsize n_block_bytes);
// void* g_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes) noexcept;

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
GI_INLINE_DECL std::string ref_string_acquire (const std::string & str) noexcept;

// gsize g_ref_string_length (char* str);
// gsize g_ref_string_length (char* str);
GI_INLINE_DECL gsize ref_string_length (const std::string & str) noexcept;

// char* g_ref_string_new (const char* str);
// char* g_ref_string_new (const char* str);
GI_INLINE_DECL std::string ref_string_new (const std::string & str) noexcept;

// char* g_ref_string_new_intern (const char* str);
// char* g_ref_string_new_intern (const char* str);
GI_INLINE_DECL std::string ref_string_new_intern (const std::string & str) noexcept;

// char* g_ref_string_new_len (const char* str, gssize len);
// char* g_ref_string_new_len (const char* str, gssize len);
GI_INLINE_DECL std::string ref_string_new_len (const std::string & str, gssize len) noexcept;

// void g_ref_string_release (char* str);
// void g_ref_string_release (char* str);
GI_INLINE_DECL void ref_string_release (const std::string & str) noexcept;

// void g_reload_user_special_dirs_cache ();
// void g_reload_user_special_dirs_cache ();
GI_INLINE_DECL void reload_user_special_dirs_cache () noexcept;

// void g_return_if_fail_warning (const char* log_domain, const char* pretty_function, const char* expression);
// void g_return_if_fail_warning (const char* log_domain, const char* pretty_function, const char* expression);
GI_INLINE_DECL void return_if_fail_warning (const std::string & log_domain, const std::string & pretty_function, const std::string & expression) noexcept;
GI_INLINE_DECL void return_if_fail_warning (const std::string & pretty_function) noexcept;

// int g_rmdir (const gchar* filename);
// gint g_rmdir (const char* filename);
GI_INLINE_DECL gint rmdir (const std::string & filename) noexcept;

// void g_set_application_name (const gchar* application_name);
// void g_set_application_name (const char* application_name);
GI_INLINE_DECL void set_application_name (const std::string & application_name) noexcept;

// void g_set_error (GError** err, GQuark domain, gint code, const gchar* format);
// void g_set_error (::GError** err, ::GQuark domain, gint code, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_set_error_literal (GError** err, GQuark domain, gint code, const gchar* message);
// void g_set_error_literal (::GError** err, ::GQuark domain, gint code, const char* message);
GI_INLINE_DECL void set_error_literal (GLib::Error * err, ::GQuark domain, gint code, const std::string & message) noexcept;
GI_INLINE_DECL GLib::Error set_error_literal (::GQuark domain, gint code, const std::string & message) noexcept;

// void g_set_prgname (const gchar* prgname);
// void g_set_prgname (const char* prgname);
GI_INLINE_DECL void set_prgname (const std::string & prgname) noexcept;

// FAILURE on g_set_print_handler; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_set_printerr_handler; No such node (<xmlattr>.transfer-ownership)
// gboolean g_setenv (const gchar* variable, const gchar* value, gboolean overwrite);
// gboolean g_setenv (const char* variable, const char* value, gboolean overwrite);
GI_INLINE_DECL bool setenv (const std::string & variable, const std::string & value, gboolean overwrite) noexcept;

// GQuark g_shell_error_quark ();
// ::GQuark g_shell_error_quark ();
GI_INLINE_DECL GLib::Quark shell_error_quark () noexcept;

// gboolean g_shell_parse_argv (const gchar* command_line, gint* argcp, gchar*** argvp, GError ** error);
// gboolean g_shell_parse_argv (const char* command_line, gint* argcp, char*** argvp, GError ** error);
GI_INLINE_DECL bool shell_parse_argv (const std::string & command_line, gint * argcp = nullptr, std::vector<std::string> * argvp = nullptr);
GI_INLINE_DECL bool shell_parse_argv (const std::string & command_line, gint * argcp, std::vector<std::string> * argvp, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, std::vector<std::string>> shell_parse_argv (const std::string & command_line);
GI_INLINE_DECL std::tuple<bool, gint, std::vector<std::string>> shell_parse_argv (const std::string & command_line, GLib::Error * _error) noexcept;

// gchar* g_shell_quote (const gchar* unquoted_string);
// char* g_shell_quote (const char* unquoted_string);
GI_INLINE_DECL std::string shell_quote (const std::string & unquoted_string) noexcept;

// gchar* g_shell_unquote (const gchar* quoted_string, GError ** error);
// char* g_shell_unquote (const char* quoted_string, GError ** error);
GI_INLINE_DECL std::string shell_unquote (const std::string & quoted_string);
GI_INLINE_DECL std::string shell_unquote (const std::string & quoted_string, GLib::Error * _error) noexcept;

// gpointer g_slice_alloc (gsize block_size);
// void* g_slice_alloc (gsize block_size);
GI_INLINE_DECL gpointer slice_alloc (gsize block_size) noexcept;

// gpointer g_slice_alloc0 (gsize block_size);
// void* g_slice_alloc0 (gsize block_size);
GI_INLINE_DECL gpointer slice_alloc0 (gsize block_size) noexcept;

// gpointer g_slice_copy (gsize block_size, gconstpointer mem_block);
// void* g_slice_copy (gsize block_size, const void* mem_block);
GI_INLINE_DECL gpointer slice_copy (gsize block_size, const void* mem_block) noexcept;

// void g_slice_free1 (gsize block_size, gpointer mem_block);
// void g_slice_free1 (gsize block_size, void* mem_block);
GI_INLINE_DECL void slice_free1 (gsize block_size, void* mem_block) noexcept;

// void g_slice_free_chain_with_offset (gsize block_size, gpointer mem_chain, gsize next_offset);
// void g_slice_free_chain_with_offset (gsize block_size, void* mem_chain, gsize next_offset);
GI_INLINE_DECL void slice_free_chain_with_offset (gsize block_size, void* mem_chain, gsize next_offset) noexcept;

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
GI_INLINE_DECL guint spaced_primes_closest (guint num) noexcept;

// gboolean g_spawn_async (const gchar* working_directory, gchar** argv, gchar** envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid* child_pid, GError ** error);
// gboolean g_spawn_async (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, GError ** error);
GI_INLINE_DECL bool spawn_async (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid = nullptr);
GI_INLINE_DECL bool spawn_async (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid = nullptr);
GI_INLINE_DECL bool spawn_async (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool spawn_async (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;

// gboolean g_spawn_async_with_fds (const gchar* working_directory, gchar** argv, gchar** envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
// gboolean g_spawn_async_with_fds (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
GI_INLINE_DECL bool spawn_async_with_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL bool spawn_async_with_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL bool spawn_async_with_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool spawn_async_with_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async_with_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async_with_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async_with_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid> spawn_async_with_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;

// gboolean g_spawn_async_with_pipes (const gchar* working_directory, gchar** argv, gchar** envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
// gboolean g_spawn_async_with_pipes (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, ::GPid* child_pid, gint* standard_input, gint* standard_output, gint* standard_error, GError ** error);
GI_INLINE_DECL bool spawn_async_with_pipes (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid = nullptr, gint * standard_input = nullptr, gint * standard_output = nullptr, gint * standard_error = nullptr);
GI_INLINE_DECL bool spawn_async_with_pipes (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid = nullptr, gint * standard_input = nullptr, gint * standard_output = nullptr, gint * standard_error = nullptr);
GI_INLINE_DECL bool spawn_async_with_pipes (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool spawn_async_with_pipes (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Pid * child_pid, gint * standard_input, gint * standard_output, gint * standard_error, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;

// gboolean g_spawn_async_with_pipes_and_fds (const gchar* working_directory, const gchar* const* argv, const gchar* const* envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
// gboolean g_spawn_async_with_pipes_and_fds (const char* working_directory, const char** argv, const char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, const gint* source_fds, const gint* target_fds, gsize n_fds, ::GPid* child_pid_out, gint* stdin_pipe_out, gint* stdout_pipe_out, gint* stderr_pipe_out, GError ** error);
GI_INLINE_DECL bool spawn_async_with_pipes_and_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out = nullptr, gint * stdin_pipe_out = nullptr, gint * stdout_pipe_out = nullptr, gint * stderr_pipe_out = nullptr);
GI_INLINE_DECL bool spawn_async_with_pipes_and_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out = nullptr, gint * stdin_pipe_out = nullptr, gint * stdout_pipe_out = nullptr, gint * stderr_pipe_out = nullptr);
GI_INLINE_DECL bool spawn_async_with_pipes_and_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool spawn_async_with_pipes_and_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Pid * child_pid_out, gint * stdin_pipe_out, gint * stdout_pipe_out, gint * stderr_pipe_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds);
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds);
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Pid, gint, gint, gint> spawn_async_with_pipes_and_fds (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, gint stdin_fd, gint stdout_fd, gint stderr_fd, gint * source_fds, gint * target_fds, gsize n_fds, GLib::Error * _error) noexcept;

// gboolean g_spawn_check_wait_status (gint wait_status, GError ** error);
// gboolean g_spawn_check_wait_status (gint wait_status, GError ** error);
GI_INLINE_DECL bool spawn_check_wait_status (gint wait_status);
GI_INLINE_DECL bool spawn_check_wait_status (gint wait_status, GLib::Error * _error) noexcept;

// void g_spawn_close_pid (GPid pid);
// void g_spawn_close_pid (::GPid pid);
GI_INLINE_DECL void spawn_close_pid (::GPid pid) noexcept;

// gboolean g_spawn_command_line_async (const gchar* command_line, GError ** error);
// gboolean g_spawn_command_line_async (const char* command_line, GError ** error);
GI_INLINE_DECL bool spawn_command_line_async (const std::string & command_line);
GI_INLINE_DECL bool spawn_command_line_async (const std::string & command_line, GLib::Error * _error) noexcept;

// gboolean g_spawn_command_line_sync (const gchar* command_line, gchar** standard_output, gchar** standard_error, gint* wait_status, GError ** error);
// gboolean g_spawn_command_line_sync (const char* command_line, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
GI_INLINE_DECL bool spawn_command_line_sync (const std::string & command_line, std::vector<guint8> * standard_output = nullptr, std::vector<guint8> * standard_error = nullptr, gint * wait_status = nullptr);
GI_INLINE_DECL bool spawn_command_line_sync (const std::string & command_line, std::vector<guint8> * standard_output, std::vector<guint8> * standard_error, gint * wait_status, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_command_line_sync (const std::string & command_line);
GI_INLINE_DECL std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_command_line_sync (const std::string & command_line, GLib::Error * _error) noexcept;

// GQuark g_spawn_error_quark ();
// ::GQuark g_spawn_error_quark ();
GI_INLINE_DECL GLib::Quark spawn_error_quark () noexcept;

// GQuark g_spawn_exit_error_quark ();
// ::GQuark g_spawn_exit_error_quark ();
GI_INLINE_DECL GLib::Quark spawn_exit_error_quark () noexcept;

// gboolean g_spawn_sync (const gchar* working_directory, gchar** argv, gchar** envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, gchar** standard_output, gchar** standard_error, gint* wait_status, GError ** error);
// gboolean g_spawn_sync (const char* working_directory, char** argv, char** envp, ::GSpawnFlags flags, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, guint8** standard_output, guint8** standard_error, gint* wait_status, GError ** error);
GI_INLINE_DECL bool spawn_sync (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, std::vector<guint8> * standard_output = nullptr, std::vector<guint8> * standard_error = nullptr, gint * wait_status = nullptr);
GI_INLINE_DECL bool spawn_sync (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, std::vector<guint8> * standard_output = nullptr, std::vector<guint8> * standard_error = nullptr, gint * wait_status = nullptr);
GI_INLINE_DECL bool spawn_sync (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, std::vector<guint8> * standard_output, std::vector<guint8> * standard_error, gint * wait_status, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool spawn_sync (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, std::vector<guint8> * standard_output, std::vector<guint8> * standard_error, gint * wait_status, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_sync (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_sync (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup);
GI_INLINE_DECL std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_sync (const std::string & working_directory, const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::vector<guint8>, std::vector<guint8>, gint> spawn_sync (const std::vector<std::string> & argv, const std::vector<std::string> & envp, GLib::SpawnFlags flags, GLib::SpawnChildSetupFunc child_setup, GLib::Error * _error) noexcept;

// gint g_sprintf (gchar* string, const gchar* format);
// gint g_sprintf (char* string, const char* format);
// IGNORE; not introspectable, varargs not supported

// gchar* g_stpcpy (gchar* dest, const char* src);
// char* g_stpcpy (char* dest, const char* src);
GI_INLINE_DECL std::string stpcpy (const std::string & dest, const std::string & src) noexcept;

// gboolean g_str_equal (gconstpointer v1, gconstpointer v2);
// gboolean g_str_equal (const void* v1, const void* v2);
GI_INLINE_DECL bool str_equal (const void* v1, const void* v2) noexcept;

// gboolean g_str_has_prefix (const gchar* str, const gchar* prefix);
// gboolean g_str_has_prefix (const char* str, const char* prefix);
GI_INLINE_DECL bool str_has_prefix (const std::string & str, const std::string & prefix) noexcept;

// gboolean g_str_has_suffix (const gchar* str, const gchar* suffix);
// gboolean g_str_has_suffix (const char* str, const char* suffix);
GI_INLINE_DECL bool str_has_suffix (const std::string & str, const std::string & suffix) noexcept;

// guint g_str_hash (gconstpointer v);
// guint g_str_hash (const void* v);
GI_INLINE_DECL guint str_hash (const void* v) noexcept;

// gboolean g_str_is_ascii (const gchar* str);
// gboolean g_str_is_ascii (const char* str);
GI_INLINE_DECL bool str_is_ascii (const std::string & str) noexcept;

// gboolean g_str_match_string (const gchar* search_term, const gchar* potential_hit, gboolean accept_alternates);
// gboolean g_str_match_string (const char* search_term, const char* potential_hit, gboolean accept_alternates);
GI_INLINE_DECL bool str_match_string (const std::string & search_term, const std::string & potential_hit, gboolean accept_alternates) noexcept;

// gchar* g_str_to_ascii (const gchar* str, const gchar* from_locale);
// char* g_str_to_ascii (const char* str, const char* from_locale);
GI_INLINE_DECL std::string str_to_ascii (const std::string & str, const std::string & from_locale) noexcept;
GI_INLINE_DECL std::string str_to_ascii (const std::string & str) noexcept;

// gchar** g_str_tokenize_and_fold (const gchar* string, const gchar* translit_locale, gchar*** ascii_alternates);
// char** g_str_tokenize_and_fold (const char* string, const char* translit_locale, char*** ascii_alternates);
GI_INLINE_DECL std::vector<std::string> str_tokenize_and_fold (const std::string & string, const std::string & translit_locale, std::vector<std::string> & ascii_alternates) noexcept;
GI_INLINE_DECL std::vector<std::string> str_tokenize_and_fold (const std::string & string, std::vector<std::string> & ascii_alternates) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, std::vector<std::string>> str_tokenize_and_fold (const std::string & string, const std::string & translit_locale) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, std::vector<std::string>> str_tokenize_and_fold (const std::string & string) noexcept;

// gchar* g_strcanon (gchar* string, const gchar* valid_chars, gchar substitutor);
// char* g_strcanon (char* string, const char* valid_chars, gchar substitutor);
GI_INLINE_DECL std::string strcanon (const std::string & string, const std::string & valid_chars, gchar substitutor) noexcept;

// gchar* g_strchomp (gchar* string);
// char* g_strchomp (char* string);
GI_INLINE_DECL std::string strchomp (const std::string & string) noexcept;

// gchar* g_strchug (gchar* string);
// char* g_strchug (char* string);
GI_INLINE_DECL std::string strchug (const std::string & string) noexcept;

// int g_strcmp0 (const char* str1, const char* str2);
// gint g_strcmp0 (const char* str1, const char* str2);
GI_INLINE_DECL gint strcmp0 (const std::string & str1, const std::string & str2) noexcept;
GI_INLINE_DECL gint strcmp0 () noexcept;

// gchar* g_strcompress (const gchar* source);
// char* g_strcompress (const char* source);
GI_INLINE_DECL std::string strcompress (const std::string & source) noexcept;

// gchar* g_strconcat (const gchar* string1);
// char* g_strconcat (const char* string1);
// IGNORE; not introspectable, varargs not supported

// gchar* g_strdelimit (gchar* string, const gchar* delimiters, gchar new_delimiter);
// char* g_strdelimit (char* string, const char* delimiters, gchar new_delimiter);
GI_INLINE_DECL std::string strdelimit (const std::string & string, const std::string & delimiters, gchar new_delimiter) noexcept;
GI_INLINE_DECL std::string strdelimit (const std::string & string, gchar new_delimiter) noexcept;

// gchar* g_strdup (const gchar* str);
// char* g_strdup (const char* str);
GI_INLINE_DECL std::string strdup (const std::string & str) noexcept;
GI_INLINE_DECL std::string strdup () noexcept;

// gchar* g_strdup_printf (const gchar* format);
// char* g_strdup_printf (const char* format);
// IGNORE; not introspectable, varargs not supported

// gchar* g_strdup_vprintf (const gchar* format, va_list args);
// char* g_strdup_vprintf (const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// FAILURE on g_strdupv; No such node (<xmlattr>.transfer-ownership)
// const gchar* g_strerror (gint errnum);
// const char* g_strerror (gint errnum);
GI_INLINE_DECL std::string strerror (gint errnum) noexcept;

// gchar* g_strescape (const gchar* source, const gchar* exceptions);
// char* g_strescape (const char* source, const char* exceptions);
GI_INLINE_DECL std::string strescape (const std::string & source, const std::string & exceptions) noexcept;
GI_INLINE_DECL std::string strescape (const std::string & source) noexcept;

// void g_strfreev (gchar** str_array);
// void g_strfreev (char* str_array);
// SKIP; inconsistent in str_array pointer depth (2 vs 1)

// const gchar* g_strip_context (const gchar* msgid, const gchar* msgval);
// const char* g_strip_context (const char* msgid, const char* msgval);
GI_INLINE_DECL std::string strip_context (const std::string & msgid, const std::string & msgval) noexcept;

// gchar* g_strjoin (const gchar* separator);
// char* g_strjoin (const char* separator);
// IGNORE; not introspectable, varargs not supported

// gchar* g_strjoinv (const gchar* separator, gchar** str_array);
// char* g_strjoinv (const char* separator, char* str_array);
// SKIP; inconsistent in str_array pointer depth (2 vs 1)

// gsize g_strlcat (gchar* dest, const gchar* src, gsize dest_size);
// gsize g_strlcat (char* dest, const char* src, gsize dest_size);
GI_INLINE_DECL gsize strlcat (const std::string & dest, const std::string & src, gsize dest_size) noexcept;

// gsize g_strlcpy (gchar* dest, const gchar* src, gsize dest_size);
// gsize g_strlcpy (char* dest, const char* src, gsize dest_size);
GI_INLINE_DECL gsize strlcpy (const std::string & dest, const std::string & src, gsize dest_size) noexcept;

// gchar* g_strndup (const gchar* str, gsize n);
// char* g_strndup (const char* str, gsize n);
GI_INLINE_DECL std::string strndup (const std::string & str, gsize n) noexcept;

// gchar* g_strnfill (gsize length, gchar fill_char);
// char* g_strnfill (gsize length, gchar fill_char);
GI_INLINE_DECL std::string strnfill (gsize length, gchar fill_char) noexcept;

// gchar* g_strreverse (gchar* string);
// char* g_strreverse (char* string);
GI_INLINE_DECL std::string strreverse (const std::string & string) noexcept;

// gchar* g_strrstr (const gchar* haystack, const gchar* needle);
// char* g_strrstr (const char* haystack, const char* needle);
GI_INLINE_DECL std::string strrstr (const std::string & haystack, const std::string & needle) noexcept;

// gchar* g_strrstr_len (const gchar* haystack, gssize haystack_len, const gchar* needle);
// char* g_strrstr_len (const char* haystack, gssize haystack_len, const char* needle);
GI_INLINE_DECL std::string strrstr_len (const std::string & haystack, gssize haystack_len, const std::string & needle) noexcept;

// const gchar* g_strsignal (gint signum);
// const char* g_strsignal (gint signum);
GI_INLINE_DECL std::string strsignal (gint signum) noexcept;

// FAILURE on g_strsplit; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_strsplit_set; No such node (<xmlattr>.transfer-ownership)
// gchar* g_strstr_len (const gchar* haystack, gssize haystack_len, const gchar* needle);
// char* g_strstr_len (const char* haystack, gssize haystack_len, const char* needle);
GI_INLINE_DECL std::string strstr_len (const std::string & haystack, gssize haystack_len, const std::string & needle) noexcept;

// gdouble g_strtod (const gchar* nptr, gchar** endptr);
// gdouble g_strtod (const char* nptr, char** endptr);
GI_INLINE_DECL gdouble strtod (const std::string & nptr, std::string * endptr = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, std::string> strtod (const std::string & nptr) noexcept;

// gboolean g_strv_contains (const gchar* const* strv, const gchar* str);
// gboolean g_strv_contains (const char* strv, const char* str);
// IGNORE; marked ignore

// gboolean g_strv_equal (const gchar* const* strv1, const gchar* const* strv2);
// gboolean g_strv_equal (const char* strv1, const char* strv2);
// SKIP; inconsistent in strv2 pointer depth (2 vs 1), inconsistent in strv1 pointer depth (2 vs 1)

// GType g_strv_get_type ();
// GType g_strv_get_type ();
GI_INLINE_DECL GType strv_get_type () noexcept;

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
GI_INLINE_DECL void test_assert_expected_messages_internal (const std::string & domain, const std::string & file, gint line, const std::string & func) noexcept;

// void g_test_bug (const char* bug_uri_snippet);
// void g_test_bug (const char* bug_uri_snippet);
GI_INLINE_DECL void test_bug (const std::string & bug_uri_snippet) noexcept;

// void g_test_bug_base (const char* uri_pattern);
// void g_test_bug_base (const char* uri_pattern);
GI_INLINE_DECL void test_bug_base (const std::string & uri_pattern) noexcept;

// gchar* g_test_build_filename (GTestFileType file_type, const gchar* first_path);
// char* g_test_build_filename (::GTestFileType file_type, const char* first_path);
// IGNORE; not introspectable, varargs not supported

// FAILURE on g_test_create_case; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_test_create_suite; No such node (<xmlattr>.transfer-ownership)
// void g_test_expect_message (const gchar* log_domain, GLogLevelFlags log_level, const gchar* pattern);
// void g_test_expect_message (const char* log_domain, ::GLogLevelFlags log_level, const char* pattern);
GI_INLINE_DECL void test_expect_message (const std::string & log_domain, GLib::LogLevelFlags log_level, const std::string & pattern) noexcept;
GI_INLINE_DECL void test_expect_message (GLib::LogLevelFlags log_level, const std::string & pattern) noexcept;

// void g_test_fail ();
// void g_test_fail ();
GI_INLINE_DECL void test_fail () noexcept;

// void g_test_fail_printf (const char* format);
// void g_test_fail_printf (const char* format);
// IGNORE; not introspectable, varargs not supported

// gboolean g_test_failed ();
// gboolean g_test_failed ();
GI_INLINE_DECL bool test_failed () noexcept;

// const gchar* g_test_get_dir (GTestFileType file_type);
// const char* g_test_get_dir (::GTestFileType file_type);
GI_INLINE_DECL std::string test_get_dir (GLib::TestFileType file_type) noexcept;

// const gchar* g_test_get_filename (GTestFileType file_type, const gchar* first_path);
// const char* g_test_get_filename (::GTestFileType file_type, const char* first_path);
// IGNORE; not introspectable, varargs not supported

// const char* g_test_get_path ();
// const char* g_test_get_path ();
GI_INLINE_DECL std::string test_get_path () noexcept;

// FAILURE on g_test_get_root; No such node (<xmlattr>.transfer-ownership)
// void g_test_incomplete (const gchar* msg);
// void g_test_incomplete (const char* msg);
GI_INLINE_DECL void test_incomplete (const std::string & msg) noexcept;
GI_INLINE_DECL void test_incomplete () noexcept;

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
GI_INLINE_DECL std::string test_log_type_name (GLib::TestLogType log_type) noexcept;

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
GI_INLINE_DECL gdouble test_rand_double () noexcept;

// double g_test_rand_double_range (double range_start, double range_end);
// gdouble g_test_rand_double_range (gdouble range_start, gdouble range_end);
GI_INLINE_DECL gdouble test_rand_double_range (gdouble range_start, gdouble range_end) noexcept;

// gint32 g_test_rand_int ();
// gint32 g_test_rand_int ();
GI_INLINE_DECL gint32 test_rand_int () noexcept;

// gint32 g_test_rand_int_range (gint32 begin, gint32 end);
// gint32 g_test_rand_int_range (gint32 begin, gint32 end);
GI_INLINE_DECL gint32 test_rand_int_range (gint32 begin, gint32 end) noexcept;

// int g_test_run ();
// gint g_test_run ();
GI_INLINE_DECL gint test_run () noexcept;

// int g_test_run_suite (GTestSuite* suite);
// gint g_test_run_suite ( suite);
// SKIP; suite type  not supported

// void g_test_set_nonfatal_assertions ();
// void g_test_set_nonfatal_assertions ();
GI_INLINE_DECL void test_set_nonfatal_assertions () noexcept;

// void g_test_skip (const gchar* msg);
// void g_test_skip (const char* msg);
GI_INLINE_DECL void test_skip (const std::string & msg) noexcept;
GI_INLINE_DECL void test_skip () noexcept;

// void g_test_skip_printf (const char* format);
// void g_test_skip_printf (const char* format);
// IGNORE; not introspectable, varargs not supported

// gboolean g_test_subprocess ();
// gboolean g_test_subprocess ();
GI_INLINE_DECL bool test_subprocess () noexcept;

// void g_test_summary (const char* summary);
// void g_test_summary (const char* summary);
GI_INLINE_DECL void test_summary (const std::string & summary) noexcept;

// double g_test_timer_elapsed ();
// gdouble g_test_timer_elapsed ();
GI_INLINE_DECL gdouble test_timer_elapsed () noexcept;

// double g_test_timer_last ();
// gdouble g_test_timer_last ();
GI_INLINE_DECL gdouble test_timer_last () noexcept;

// void g_test_timer_start ();
// void g_test_timer_start ();
GI_INLINE_DECL void test_timer_start () noexcept;

// void g_test_trap_assertions (const char* domain, const char* file, int line, const char* func, guint64 assertion_flags, const char* pattern);
// void g_test_trap_assertions (const char* domain, const char* file, gint line, const char* func, guint64 assertion_flags, const char* pattern);
GI_INLINE_DECL void test_trap_assertions (const std::string & domain, const std::string & file, gint line, const std::string & func, guint64 assertion_flags, const std::string & pattern) noexcept;

// gboolean g_test_trap_has_passed ();
// gboolean g_test_trap_has_passed ();
GI_INLINE_DECL bool test_trap_has_passed () noexcept;

// gboolean g_test_trap_reached_timeout ();
// gboolean g_test_trap_reached_timeout ();
GI_INLINE_DECL bool test_trap_reached_timeout () noexcept;

// void g_test_trap_subprocess (const char* test_path, guint64 usec_timeout, GTestSubprocessFlags test_flags);
// void g_test_trap_subprocess (const char* test_path, guint64 usec_timeout, ::GTestSubprocessFlags test_flags);
GI_INLINE_DECL void test_trap_subprocess (const std::string & test_path, guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept;
GI_INLINE_DECL void test_trap_subprocess (guint64 usec_timeout, GLib::TestSubprocessFlags test_flags) noexcept;

// guint g_timeout_add (guint interval, GSourceFunc function, gpointer data);
// guint g_timeout_add (guint interval, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by timeout_add_full

// guint g_timeout_add_full (gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint g_timeout_add_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL guint timeout_add (gint priority, guint interval, GLib::SourceFunc function) noexcept;

// guint g_timeout_add_seconds (guint interval, GSourceFunc function, gpointer data);
// guint g_timeout_add_seconds (guint interval, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by timeout_add_seconds_full

// guint g_timeout_add_seconds_full (gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint g_timeout_add_seconds_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL guint timeout_add_seconds (gint priority, guint interval, GLib::SourceFunc function) noexcept;

// GSource* g_timeout_source_new (guint interval);
// ::GSource* g_timeout_source_new (guint interval);
GI_INLINE_DECL GLib::Source timeout_source_new (guint interval) noexcept;

// GSource* g_timeout_source_new_seconds (guint interval);
// ::GSource* g_timeout_source_new_seconds (guint interval);
GI_INLINE_DECL GLib::Source timeout_source_new_seconds (guint interval) noexcept;

// gpointer g_try_malloc (gsize n_bytes);
// void* g_try_malloc (gsize n_bytes);
GI_INLINE_DECL gpointer try_malloc (gsize n_bytes) noexcept;

// gpointer g_try_malloc0 (gsize n_bytes);
// void* g_try_malloc0 (gsize n_bytes);
GI_INLINE_DECL gpointer try_malloc0 (gsize n_bytes) noexcept;

// gpointer g_try_malloc0_n (gsize n_blocks, gsize n_block_bytes);
// void* g_try_malloc0_n (gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer try_malloc0_n (gsize n_blocks, gsize n_block_bytes) noexcept;

// gpointer g_try_malloc_n (gsize n_blocks, gsize n_block_bytes);
// void* g_try_malloc_n (gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer try_malloc_n (gsize n_blocks, gsize n_block_bytes) noexcept;

// gpointer g_try_realloc (gpointer mem, gsize n_bytes);
// void* g_try_realloc (void* mem, gsize n_bytes);
GI_INLINE_DECL gpointer try_realloc (void* mem, gsize n_bytes) noexcept;

// gpointer g_try_realloc_n (gpointer mem, gsize n_blocks, gsize n_block_bytes);
// void* g_try_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes);
GI_INLINE_DECL gpointer try_realloc_n (void* mem, gsize n_blocks, gsize n_block_bytes) noexcept;

// gunichar2* g_ucs4_to_utf16 (const gunichar* str, glong len, glong* items_read, glong* items_written, GError ** error);
// guint16 g_ucs4_to_utf16 (const gunichar str, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent in str pointer depth (1 vs 0), inconsistent return  pointer depth (1 vs 0)

// gchar* g_ucs4_to_utf8 (const gunichar* str, glong len, glong* items_read, glong* items_written, GError ** error);
// char* g_ucs4_to_utf8 (const gunichar str, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent in str pointer depth (1 vs 0)

// GUnicodeBreakType g_unichar_break_type (gunichar c);
// ::GUnicodeBreakType g_unichar_break_type (gunichar c);
GI_INLINE_DECL GLib::UnicodeBreakType unichar_break_type (gunichar c) noexcept;

// gint g_unichar_combining_class (gunichar uc);
// gint g_unichar_combining_class (gunichar uc);
GI_INLINE_DECL gint unichar_combining_class (gunichar uc) noexcept;

// gboolean g_unichar_compose (gunichar a, gunichar b, gunichar* ch);
// gboolean g_unichar_compose (gunichar a, gunichar b, gunichar* ch);
GI_INLINE_DECL bool unichar_compose (gunichar a, gunichar b, gunichar & ch) noexcept;
GI_INLINE_DECL std::tuple<bool, gunichar> unichar_compose (gunichar a, gunichar b) noexcept;

// gboolean g_unichar_decompose (gunichar ch, gunichar* a, gunichar* b);
// gboolean g_unichar_decompose (gunichar ch, gunichar* a, gunichar* b);
GI_INLINE_DECL bool unichar_decompose (gunichar ch, gunichar & a, gunichar & b) noexcept;
GI_INLINE_DECL std::tuple<bool, gunichar, gunichar> unichar_decompose (gunichar ch) noexcept;

// gint g_unichar_digit_value (gunichar c);
// gint g_unichar_digit_value (gunichar c);
GI_INLINE_DECL gint unichar_digit_value (gunichar c) noexcept;

// gsize g_unichar_fully_decompose (gunichar ch, gboolean compat, gunichar* result, gsize result_len);
// gsize g_unichar_fully_decompose (gunichar ch, gboolean compat, gunichar result, gsize result_len);
// SKIP; inconsistent out result pointer depth (1 vs 0)

// gboolean g_unichar_get_mirror_char (gunichar ch, gunichar* mirrored_ch);
// gboolean g_unichar_get_mirror_char (gunichar ch, gunichar mirrored_ch);
// SKIP; inconsistent in mirrored_ch pointer depth (1 vs 0)

// GUnicodeScript g_unichar_get_script (gunichar ch);
// ::GUnicodeScript g_unichar_get_script (gunichar ch);
GI_INLINE_DECL GLib::UnicodeScript unichar_get_script (gunichar ch) noexcept;

// gboolean g_unichar_isalnum (gunichar c);
// gboolean g_unichar_isalnum (gunichar c);
GI_INLINE_DECL bool unichar_isalnum (gunichar c) noexcept;

// gboolean g_unichar_isalpha (gunichar c);
// gboolean g_unichar_isalpha (gunichar c);
GI_INLINE_DECL bool unichar_isalpha (gunichar c) noexcept;

// gboolean g_unichar_iscntrl (gunichar c);
// gboolean g_unichar_iscntrl (gunichar c);
GI_INLINE_DECL bool unichar_iscntrl (gunichar c) noexcept;

// gboolean g_unichar_isdefined (gunichar c);
// gboolean g_unichar_isdefined (gunichar c);
GI_INLINE_DECL bool unichar_isdefined (gunichar c) noexcept;

// gboolean g_unichar_isdigit (gunichar c);
// gboolean g_unichar_isdigit (gunichar c);
GI_INLINE_DECL bool unichar_isdigit (gunichar c) noexcept;

// gboolean g_unichar_isgraph (gunichar c);
// gboolean g_unichar_isgraph (gunichar c);
GI_INLINE_DECL bool unichar_isgraph (gunichar c) noexcept;

// gboolean g_unichar_islower (gunichar c);
// gboolean g_unichar_islower (gunichar c);
GI_INLINE_DECL bool unichar_islower (gunichar c) noexcept;

// gboolean g_unichar_ismark (gunichar c);
// gboolean g_unichar_ismark (gunichar c);
GI_INLINE_DECL bool unichar_ismark (gunichar c) noexcept;

// gboolean g_unichar_isprint (gunichar c);
// gboolean g_unichar_isprint (gunichar c);
GI_INLINE_DECL bool unichar_isprint (gunichar c) noexcept;

// gboolean g_unichar_ispunct (gunichar c);
// gboolean g_unichar_ispunct (gunichar c);
GI_INLINE_DECL bool unichar_ispunct (gunichar c) noexcept;

// gboolean g_unichar_isspace (gunichar c);
// gboolean g_unichar_isspace (gunichar c);
GI_INLINE_DECL bool unichar_isspace (gunichar c) noexcept;

// gboolean g_unichar_istitle (gunichar c);
// gboolean g_unichar_istitle (gunichar c);
GI_INLINE_DECL bool unichar_istitle (gunichar c) noexcept;

// gboolean g_unichar_isupper (gunichar c);
// gboolean g_unichar_isupper (gunichar c);
GI_INLINE_DECL bool unichar_isupper (gunichar c) noexcept;

// gboolean g_unichar_iswide (gunichar c);
// gboolean g_unichar_iswide (gunichar c);
GI_INLINE_DECL bool unichar_iswide (gunichar c) noexcept;

// gboolean g_unichar_iswide_cjk (gunichar c);
// gboolean g_unichar_iswide_cjk (gunichar c);
GI_INLINE_DECL bool unichar_iswide_cjk (gunichar c) noexcept;

// gboolean g_unichar_isxdigit (gunichar c);
// gboolean g_unichar_isxdigit (gunichar c);
GI_INLINE_DECL bool unichar_isxdigit (gunichar c) noexcept;

// gboolean g_unichar_iszerowidth (gunichar c);
// gboolean g_unichar_iszerowidth (gunichar c);
GI_INLINE_DECL bool unichar_iszerowidth (gunichar c) noexcept;

// gint g_unichar_to_utf8 (gunichar c, gchar* outbuf);
// gint g_unichar_to_utf8 (gunichar c, char* outbuf);
// IGNORE; marked ignore

// gunichar g_unichar_tolower (gunichar c);
// gunichar g_unichar_tolower (gunichar c);
GI_INLINE_DECL gunichar unichar_tolower (gunichar c) noexcept;

// gunichar g_unichar_totitle (gunichar c);
// gunichar g_unichar_totitle (gunichar c);
GI_INLINE_DECL gunichar unichar_totitle (gunichar c) noexcept;

// gunichar g_unichar_toupper (gunichar c);
// gunichar g_unichar_toupper (gunichar c);
GI_INLINE_DECL gunichar unichar_toupper (gunichar c) noexcept;

// GUnicodeType g_unichar_type (gunichar c);
// ::GUnicodeType g_unichar_type (gunichar c);
GI_INLINE_DECL GLib::UnicodeType unichar_type (gunichar c) noexcept;

// gboolean g_unichar_validate (gunichar ch);
// gboolean g_unichar_validate (gunichar ch);
GI_INLINE_DECL bool unichar_validate (gunichar ch) noexcept;

// gint g_unichar_xdigit_value (gunichar c);
// gint g_unichar_xdigit_value (gunichar c);
GI_INLINE_DECL gint unichar_xdigit_value (gunichar c) noexcept;

// void g_unicode_canonical_ordering (gunichar* string, gsize len);
// void g_unicode_canonical_ordering (gunichar string, gsize len);
// SKIP; inconsistent in string pointer depth (1 vs 0)

// GUnicodeScript g_unicode_script_from_iso15924 (guint32 iso15924);
// ::GUnicodeScript g_unicode_script_from_iso15924 (guint32 iso15924);
GI_INLINE_DECL GLib::UnicodeScript unicode_script_from_iso15924 (guint32 iso15924) noexcept;

// guint32 g_unicode_script_to_iso15924 (GUnicodeScript script);
// guint32 g_unicode_script_to_iso15924 (::GUnicodeScript script);
GI_INLINE_DECL guint32 unicode_script_to_iso15924 (GLib::UnicodeScript script) noexcept;

// GQuark g_unix_error_quark ();
// ::GQuark g_unix_error_quark ();
GI_INLINE_DECL GLib::Quark unix_error_quark () noexcept;

// guint g_unix_fd_add (gint fd, GIOCondition condition, GUnixFDSourceFunc function, gpointer user_data);
// guint g_unix_fd_add (gint fd, ::GIOCondition condition, GLib::UnixFDSourceFunc::cfunction_type function, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// guint g_unix_fd_add_full (gint priority, gint fd, GIOCondition condition, GUnixFDSourceFunc function, gpointer user_data, GDestroyNotify notify);
// guint g_unix_fd_add_full (gint priority, gint fd, ::GIOCondition condition, GLib::UnixFDSourceFunc::cfunction_type function, void* user_data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL guint unix_fd_add_full (gint priority, gint fd, GLib::IOCondition condition, GLib::UnixFDSourceFunc function) noexcept;

// GSource* g_unix_fd_source_new (gint fd, GIOCondition condition);
// ::GSource* g_unix_fd_source_new (gint fd, ::GIOCondition condition);
GI_INLINE_DECL GLib::Source unix_fd_source_new (gint fd, GLib::IOCondition condition) noexcept;

// passwd* g_unix_get_passwd_entry (const gchar* user_name, GError ** error);
// void* g_unix_get_passwd_entry (const char* user_name, GError ** error);
GI_INLINE_DECL gpointer unix_get_passwd_entry (const std::string & user_name);
GI_INLINE_DECL gpointer unix_get_passwd_entry (const std::string & user_name, GLib::Error * _error) noexcept;

// gboolean g_unix_open_pipe (gint* fds, gint flags, GError ** error);
// gboolean g_unix_open_pipe (gint fds, gint flags, GError ** error);
// SKIP; inconsistent in fds pointer depth (1 vs 0)

// gboolean g_unix_set_fd_nonblocking (gint fd, gboolean nonblock, GError ** error);
// gboolean g_unix_set_fd_nonblocking (gint fd, gboolean nonblock, GError ** error);
GI_INLINE_DECL bool unix_set_fd_nonblocking (gint fd, gboolean nonblock);
GI_INLINE_DECL bool unix_set_fd_nonblocking (gint fd, gboolean nonblock, GLib::Error * _error) noexcept;

// guint g_unix_signal_add (gint signum, GSourceFunc handler, gpointer user_data);
// guint g_unix_signal_add (gint signum, GLib::SourceFunc::cfunction_type handler, void* user_data);
// IGNORE; not introspectable; shadowed-by unix_signal_add_full

// guint g_unix_signal_add_full (gint priority, gint signum, GSourceFunc handler, gpointer user_data, GDestroyNotify notify);
// guint g_unix_signal_add_full (gint priority, gint signum, GLib::SourceFunc::cfunction_type handler, void* user_data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL guint unix_signal_add (gint priority, gint signum, GLib::SourceFunc handler) noexcept;

// GSource* g_unix_signal_source_new (gint signum);
// ::GSource* g_unix_signal_source_new (gint signum);
GI_INLINE_DECL GLib::Source unix_signal_source_new (gint signum) noexcept;

// int g_unlink (const gchar* filename);
// gint g_unlink (const char* filename);
GI_INLINE_DECL gint unlink (const std::string & filename) noexcept;

// void g_unsetenv (const gchar* variable);
// void g_unsetenv (const char* variable);
GI_INLINE_DECL void unsetenv (const std::string & variable) noexcept;

// void g_usleep (gulong microseconds);
// void g_usleep (gulong microseconds);
GI_INLINE_DECL void usleep (gulong microseconds) noexcept;

// gunichar* g_utf16_to_ucs4 (const gunichar2* str, glong len, glong* items_read, glong* items_written, GError ** error);
// gunichar g_utf16_to_ucs4 (const guint16 str, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent in str pointer depth (1 vs 0), inconsistent return  pointer depth (1 vs 0)

// gchar* g_utf16_to_utf8 (const gunichar2* str, glong len, glong* items_read, glong* items_written, GError ** error);
// char* g_utf16_to_utf8 (const guint16 str, glong len, glong* items_read, glong* items_written, GError ** error);
// SKIP; inconsistent in str pointer depth (1 vs 0)

// gchar* g_utf8_casefold (const gchar* str, gssize len);
// char* g_utf8_casefold (const char* str, gssize len);
GI_INLINE_DECL std::string utf8_casefold (const std::string & str, gssize len) noexcept;

// gint g_utf8_collate (const gchar* str1, const gchar* str2);
// gint g_utf8_collate (const char* str1, const char* str2);
GI_INLINE_DECL gint utf8_collate (const std::string & str1, const std::string & str2) noexcept;

// gchar* g_utf8_collate_key (const gchar* str, gssize len);
// char* g_utf8_collate_key (const char* str, gssize len);
GI_INLINE_DECL std::string utf8_collate_key (const std::string & str, gssize len) noexcept;

// gchar* g_utf8_collate_key_for_filename (const gchar* str, gssize len);
// char* g_utf8_collate_key_for_filename (const char* str, gssize len);
GI_INLINE_DECL std::string utf8_collate_key_for_filename (const std::string & str, gssize len) noexcept;

// gchar* g_utf8_find_next_char (const gchar* p, const gchar* end);
// char* g_utf8_find_next_char (const char* p, const char* end);
GI_INLINE_DECL std::string utf8_find_next_char (const std::string & p, const std::string & end) noexcept;
GI_INLINE_DECL std::string utf8_find_next_char (const std::string & p) noexcept;

// gchar* g_utf8_find_prev_char (const gchar* str, const gchar* p);
// char* g_utf8_find_prev_char (const char* str, const char* p);
GI_INLINE_DECL std::string utf8_find_prev_char (const std::string & str, const std::string & p) noexcept;

// gunichar g_utf8_get_char (const gchar* p);
// gunichar g_utf8_get_char (const char* p);
GI_INLINE_DECL gunichar utf8_get_char (const std::string & p) noexcept;

// gunichar g_utf8_get_char_validated (const gchar* p, gssize max_len);
// gunichar g_utf8_get_char_validated (const char* p, gssize max_len);
GI_INLINE_DECL gunichar utf8_get_char_validated (const std::string & p, gssize max_len) noexcept;

// gchar* g_utf8_make_valid (const gchar* str, gssize len);
// char* g_utf8_make_valid (const char* str, gssize len);
GI_INLINE_DECL std::string utf8_make_valid (const std::string & str, gssize len) noexcept;

// gchar* g_utf8_normalize (const gchar* str, gssize len, GNormalizeMode mode);
// char* g_utf8_normalize (const char* str, gssize len, ::GNormalizeMode mode);
GI_INLINE_DECL std::string utf8_normalize (const std::string & str, gssize len, GLib::NormalizeMode mode) noexcept;

// gchar* g_utf8_offset_to_pointer (const gchar* str, glong offset);
// char* g_utf8_offset_to_pointer (const char* str, glong offset);
GI_INLINE_DECL std::string utf8_offset_to_pointer (const std::string & str, glong offset) noexcept;

// glong g_utf8_pointer_to_offset (const gchar* str, const gchar* pos);
// glong g_utf8_pointer_to_offset (const char* str, const char* pos);
GI_INLINE_DECL glong utf8_pointer_to_offset (const std::string & str, const std::string & pos) noexcept;

// gchar* g_utf8_prev_char (const gchar* p);
// char* g_utf8_prev_char (const char* p);
GI_INLINE_DECL std::string utf8_prev_char (const std::string & p) noexcept;

// gchar* g_utf8_strchr (const gchar* p, gssize len, gunichar c);
// char* g_utf8_strchr (const char* p, gssize len, gunichar c);
GI_INLINE_DECL std::string utf8_strchr (const std::string & p, gssize len, gunichar c) noexcept;

// gchar* g_utf8_strdown (const gchar* str, gssize len);
// char* g_utf8_strdown (const char* str, gssize len);
GI_INLINE_DECL std::string utf8_strdown (const std::string & str, gssize len) noexcept;

// glong g_utf8_strlen (const gchar* p, gssize max);
// glong g_utf8_strlen (const char* p, gssize max);
GI_INLINE_DECL glong utf8_strlen (const std::string & p, gssize max) noexcept;

// gchar* g_utf8_strncpy (gchar* dest, const gchar* src, gsize n);
// char* g_utf8_strncpy (char* dest, const char* src, gsize n);
GI_INLINE_DECL std::string utf8_strncpy (const std::string & dest, const std::string & src, gsize n) noexcept;

// gchar* g_utf8_strrchr (const gchar* p, gssize len, gunichar c);
// char* g_utf8_strrchr (const char* p, gssize len, gunichar c);
GI_INLINE_DECL std::string utf8_strrchr (const std::string & p, gssize len, gunichar c) noexcept;

// gchar* g_utf8_strreverse (const gchar* str, gssize len);
// char* g_utf8_strreverse (const char* str, gssize len);
GI_INLINE_DECL std::string utf8_strreverse (const std::string & str, gssize len) noexcept;

// gchar* g_utf8_strup (const gchar* str, gssize len);
// char* g_utf8_strup (const char* str, gssize len);
GI_INLINE_DECL std::string utf8_strup (const std::string & str, gssize len) noexcept;

// gchar* g_utf8_substring (const gchar* str, glong start_pos, glong end_pos);
// char* g_utf8_substring (const char* str, glong start_pos, glong end_pos);
GI_INLINE_DECL std::string utf8_substring (const std::string & str, glong start_pos, glong end_pos) noexcept;

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
GI_INLINE_DECL bool utf8_validate (guint8 * str, gssize max_len, std::string * end = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> utf8_validate (guint8 * str, gssize max_len) noexcept;

// gboolean g_utf8_validate_len (const gchar* str, gsize max_len, const gchar** end);
// gboolean g_utf8_validate_len (const guint8* str, gsize max_len, const char** end);
GI_INLINE_DECL bool utf8_validate_len (guint8 * str, gsize max_len, std::string * end = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> utf8_validate_len (guint8 * str, gsize max_len) noexcept;

// gboolean g_uuid_string_is_valid (const gchar* str);
// gboolean g_uuid_string_is_valid (const char* str);
GI_INLINE_DECL bool uuid_string_is_valid (const std::string & str) noexcept;

// gchar* g_uuid_string_random ();
// char* g_uuid_string_random ();
GI_INLINE_DECL std::string uuid_string_random () noexcept;

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
GI_INLINE_DECL void warn_message (const std::string & domain, const std::string & file, gint line, const std::string & func, const std::string & warnexpr) noexcept;
GI_INLINE_DECL void warn_message (const std::string & file, gint line, const std::string & func) noexcept;

} // namespace GLib

} // namespace repository

} // namespace gi

#endif
