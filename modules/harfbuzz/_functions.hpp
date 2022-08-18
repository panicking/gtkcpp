// AUTO-GENERATED

#ifndef _GI_HARFBUZZ__FUNCTIONS_HPP_
#define _GI_HARFBUZZ__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

// hb_blob_t* hb_blob_copy_writable_or_fail (hb_blob_t* blob);
// ::hb_blob_t* hb_blob_copy_writable_or_fail (::hb_blob_t* blob);
GI_INLINE_DECL HarfBuzz::blob_t blob_copy_writable_or_fail (HarfBuzz::blob_t blob) noexcept;

// hb_blob_t* hb_blob_create (const char* data, unsigned int length, hb_memory_mode_t mode, void* user_data, hb_destroy_func_t destroy);
// ::hb_blob_t* hb_blob_create (const char* data, guint length, ::hb_memory_mode_t mode, void* user_data,  destroy);
// IGNORE; not introspectable, destroy type  not supported

// hb_blob_t* hb_blob_create_from_file (const char* file_name);
// ::hb_blob_t* hb_blob_create_from_file (const char* file_name);
GI_INLINE_DECL HarfBuzz::blob_t blob_create_from_file (const std::string & file_name) noexcept;

// hb_blob_t* hb_blob_create_sub_blob (hb_blob_t* parent, unsigned int offset, unsigned int length);
// ::hb_blob_t* hb_blob_create_sub_blob (::hb_blob_t* parent, guint offset, guint length);
GI_INLINE_DECL HarfBuzz::blob_t blob_create_sub_blob (HarfBuzz::blob_t parent, guint offset, guint length) noexcept;

// void hb_blob_destroy (hb_blob_t* blob);
// void hb_blob_destroy (::hb_blob_t* blob);
GI_INLINE_DECL void blob_destroy (HarfBuzz::blob_t blob) noexcept;

// const char* hb_blob_get_data (hb_blob_t* blob, unsigned int* length);
// const char** hb_blob_get_data (::hb_blob_t* blob, guint* length);
GI_INLINE_DECL std::vector<std::string> blob_get_data (HarfBuzz::blob_t blob) noexcept;

// char* hb_blob_get_data_writable (hb_blob_t* blob, unsigned int* length);
// char** hb_blob_get_data_writable (::hb_blob_t* blob, guint* length);
GI_INLINE_DECL std::vector<std::string> blob_get_data_writable (HarfBuzz::blob_t blob) noexcept;

// hb_blob_t* hb_blob_get_empty ();
// ::hb_blob_t* hb_blob_get_empty ();
GI_INLINE_DECL HarfBuzz::blob_t blob_get_empty () noexcept;

// unsigned int hb_blob_get_length (hb_blob_t* blob);
// guint hb_blob_get_length (::hb_blob_t* blob);
GI_INLINE_DECL guint blob_get_length (HarfBuzz::blob_t blob) noexcept;

// void* hb_blob_get_user_data (hb_blob_t* blob, hb_user_data_key_t* key);
// void* hb_blob_get_user_data (::hb_blob_t* blob, ::hb_user_data_key_t* key);
GI_INLINE_DECL gpointer blob_get_user_data (HarfBuzz::blob_t blob, HarfBuzz::user_data_key_t key) noexcept;

// hb_bool_t hb_blob_is_immutable (hb_blob_t* blob);
// ::hb_bool_t hb_blob_is_immutable (::hb_blob_t* blob);
GI_INLINE_DECL HarfBuzz::bool_t blob_is_immutable (HarfBuzz::blob_t blob) noexcept;

// void hb_blob_make_immutable (hb_blob_t* blob);
// void hb_blob_make_immutable (::hb_blob_t* blob);
GI_INLINE_DECL void blob_make_immutable (HarfBuzz::blob_t blob) noexcept;

// hb_blob_t* hb_blob_reference (hb_blob_t* blob);
// ::hb_blob_t* hb_blob_reference (::hb_blob_t* blob);
GI_INLINE_DECL HarfBuzz::blob_t blob_reference (HarfBuzz::blob_t blob) noexcept;

// hb_bool_t hb_blob_set_user_data (hb_blob_t* blob, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_blob_set_user_data (::hb_blob_t* blob, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// void hb_buffer_add (hb_buffer_t* buffer, hb_codepoint_t codepoint, unsigned int cluster);
// void hb_buffer_add (::hb_buffer_t* buffer, ::hb_codepoint_t codepoint, guint cluster);
GI_INLINE_DECL void buffer_add (HarfBuzz::buffer_t buffer, ::hb_codepoint_t codepoint, guint cluster) noexcept;

// void hb_buffer_add_codepoints (hb_buffer_t* buffer, const hb_codepoint_t* text, int text_length, unsigned int item_offset, int item_length);
// void hb_buffer_add_codepoints (::hb_buffer_t* buffer, const ::hb_codepoint_t* text, gint text_length, guint item_offset, gint item_length);
GI_INLINE_DECL void buffer_add_codepoints (HarfBuzz::buffer_t buffer, HarfBuzz::codepoint_t * text, gint text_length, guint item_offset, gint item_length) noexcept;

// void hb_buffer_add_latin1 (hb_buffer_t* buffer, const uint8_t* text, int text_length, unsigned int item_offset, int item_length);
// void hb_buffer_add_latin1 (::hb_buffer_t* buffer, const guint8* text, gint text_length, guint item_offset, gint item_length);
GI_INLINE_DECL void buffer_add_latin1 (HarfBuzz::buffer_t buffer, guint8 * text, gint text_length, guint item_offset, gint item_length) noexcept;

// void hb_buffer_add_utf16 (hb_buffer_t* buffer, const uint16_t* text, int text_length, unsigned int item_offset, int item_length);
// void hb_buffer_add_utf16 (::hb_buffer_t* buffer, const guint16* text, gint text_length, guint item_offset, gint item_length);
GI_INLINE_DECL void buffer_add_utf16 (HarfBuzz::buffer_t buffer, guint16 * text, gint text_length, guint item_offset, gint item_length) noexcept;

// void hb_buffer_add_utf32 (hb_buffer_t* buffer, const uint32_t* text, int text_length, unsigned int item_offset, int item_length);
// void hb_buffer_add_utf32 (::hb_buffer_t* buffer, const guint32* text, gint text_length, guint item_offset, gint item_length);
GI_INLINE_DECL void buffer_add_utf32 (HarfBuzz::buffer_t buffer, guint32 * text, gint text_length, guint item_offset, gint item_length) noexcept;

// void hb_buffer_add_utf8 (hb_buffer_t* buffer, const char* text, int text_length, unsigned int item_offset, int item_length);
// void hb_buffer_add_utf8 (::hb_buffer_t* buffer, const guint8* text, gint text_length, guint item_offset, gint item_length);
GI_INLINE_DECL void buffer_add_utf8 (HarfBuzz::buffer_t buffer, guint8 * text, gint text_length, guint item_offset, gint item_length) noexcept;

// hb_bool_t hb_buffer_allocation_successful (hb_buffer_t* buffer);
// ::hb_bool_t hb_buffer_allocation_successful (::hb_buffer_t* buffer);
GI_INLINE_DECL HarfBuzz::bool_t buffer_allocation_successful (HarfBuzz::buffer_t buffer) noexcept;

// void hb_buffer_append (hb_buffer_t* buffer, hb_buffer_t* source, unsigned int start, unsigned int end);
// void hb_buffer_append (::hb_buffer_t* buffer, ::hb_buffer_t* source, guint start, guint end);
GI_INLINE_DECL void buffer_append (HarfBuzz::buffer_t buffer, HarfBuzz::buffer_t source, guint start, guint end) noexcept;

// void hb_buffer_clear_contents (hb_buffer_t* buffer);
// void hb_buffer_clear_contents (::hb_buffer_t* buffer);
GI_INLINE_DECL void buffer_clear_contents (HarfBuzz::buffer_t buffer) noexcept;

// hb_buffer_t* hb_buffer_create ();
// ::hb_buffer_t* hb_buffer_create ();
GI_INLINE_DECL HarfBuzz::buffer_t buffer_create () noexcept;

// hb_bool_t hb_buffer_deserialize_glyphs (hb_buffer_t* buffer, const char* buf, int buf_len, const char** end_ptr, hb_font_t* font, hb_buffer_serialize_format_t format);
// ::hb_bool_t hb_buffer_deserialize_glyphs (::hb_buffer_t* buffer, const char** buf, gint buf_len, const char** end_ptr, ::hb_font_t* font, ::hb_buffer_serialize_format_t format);
GI_INLINE_DECL HarfBuzz::bool_t buffer_deserialize_glyphs (HarfBuzz::buffer_t buffer, std::string * buf, gint buf_len, std::string & end_ptr, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, std::string> buffer_deserialize_glyphs (HarfBuzz::buffer_t buffer, std::string * buf, gint buf_len, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format) noexcept;

// hb_bool_t hb_buffer_deserialize_unicode (hb_buffer_t* buffer, const char* buf, int buf_len, const char** end_ptr, hb_buffer_serialize_format_t format);
// ::hb_bool_t hb_buffer_deserialize_unicode (::hb_buffer_t* buffer, const char** buf, gint buf_len, const char** end_ptr, ::hb_buffer_serialize_format_t format);
GI_INLINE_DECL HarfBuzz::bool_t buffer_deserialize_unicode (HarfBuzz::buffer_t buffer, std::string * buf, gint buf_len, std::string & end_ptr, HarfBuzz::buffer_serialize_format_t format) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, std::string> buffer_deserialize_unicode (HarfBuzz::buffer_t buffer, std::string * buf, gint buf_len, HarfBuzz::buffer_serialize_format_t format) noexcept;

// void hb_buffer_destroy (hb_buffer_t* buffer);
// void hb_buffer_destroy (::hb_buffer_t* buffer);
GI_INLINE_DECL void buffer_destroy (HarfBuzz::buffer_t buffer) noexcept;

// hb_buffer_diff_flags_t hb_buffer_diff (hb_buffer_t* buffer, hb_buffer_t* reference, hb_codepoint_t dottedcircle_glyph, unsigned int position_fuzz);
// ::hb_buffer_diff_flags_t hb_buffer_diff (::hb_buffer_t* buffer, ::hb_buffer_t* reference, ::hb_codepoint_t dottedcircle_glyph, guint position_fuzz);
GI_INLINE_DECL HarfBuzz::buffer_diff_flags_t buffer_diff (HarfBuzz::buffer_t buffer, HarfBuzz::buffer_t reference, ::hb_codepoint_t dottedcircle_glyph, guint position_fuzz) noexcept;

// hb_buffer_cluster_level_t hb_buffer_get_cluster_level (hb_buffer_t* buffer);
// ::hb_buffer_cluster_level_t hb_buffer_get_cluster_level (::hb_buffer_t* buffer);
GI_INLINE_DECL HarfBuzz::buffer_cluster_level_t buffer_get_cluster_level (HarfBuzz::buffer_t buffer) noexcept;

// hb_buffer_content_type_t hb_buffer_get_content_type (hb_buffer_t* buffer);
// ::hb_buffer_content_type_t hb_buffer_get_content_type (::hb_buffer_t* buffer);
GI_INLINE_DECL HarfBuzz::buffer_content_type_t buffer_get_content_type (HarfBuzz::buffer_t buffer) noexcept;

// hb_direction_t hb_buffer_get_direction (hb_buffer_t* buffer);
// ::hb_direction_t hb_buffer_get_direction (::hb_buffer_t* buffer);
GI_INLINE_DECL HarfBuzz::direction_t buffer_get_direction (HarfBuzz::buffer_t buffer) noexcept;

// hb_buffer_t* hb_buffer_get_empty ();
// ::hb_buffer_t* hb_buffer_get_empty ();
GI_INLINE_DECL HarfBuzz::buffer_t buffer_get_empty () noexcept;

// hb_buffer_flags_t hb_buffer_get_flags (hb_buffer_t* buffer);
// ::hb_buffer_flags_t hb_buffer_get_flags (::hb_buffer_t* buffer);
GI_INLINE_DECL HarfBuzz::buffer_flags_t buffer_get_flags (HarfBuzz::buffer_t buffer) noexcept;

// hb_glyph_info_t* hb_buffer_get_glyph_infos (hb_buffer_t* buffer, unsigned int* length);
// ::hb_glyph_info_t** hb_buffer_get_glyph_infos (::hb_buffer_t* buffer, guint* length);
// SKIP; inconsistent return  pointer depth (1 vs 2)

// hb_glyph_position_t* hb_buffer_get_glyph_positions (hb_buffer_t* buffer, unsigned int* length);
// ::hb_glyph_position_t** hb_buffer_get_glyph_positions (::hb_buffer_t* buffer, guint* length);
// SKIP; inconsistent return  pointer depth (1 vs 2)

// hb_codepoint_t hb_buffer_get_invisible_glyph (hb_buffer_t* buffer);
// ::hb_codepoint_t hb_buffer_get_invisible_glyph (::hb_buffer_t* buffer);
GI_INLINE_DECL HarfBuzz::codepoint_t buffer_get_invisible_glyph (HarfBuzz::buffer_t buffer) noexcept;

// hb_language_t hb_buffer_get_language (hb_buffer_t* buffer);
//  hb_buffer_get_language (::hb_buffer_t* buffer);
// SKIP;  type  not supported

// unsigned int hb_buffer_get_length (hb_buffer_t* buffer);
// guint hb_buffer_get_length (::hb_buffer_t* buffer);
GI_INLINE_DECL guint buffer_get_length (HarfBuzz::buffer_t buffer) noexcept;

// hb_codepoint_t hb_buffer_get_replacement_codepoint (hb_buffer_t* buffer);
// ::hb_codepoint_t hb_buffer_get_replacement_codepoint (::hb_buffer_t* buffer);
GI_INLINE_DECL HarfBuzz::codepoint_t buffer_get_replacement_codepoint (HarfBuzz::buffer_t buffer) noexcept;

// hb_script_t hb_buffer_get_script (hb_buffer_t* buffer);
// ::hb_script_t hb_buffer_get_script (::hb_buffer_t* buffer);
GI_INLINE_DECL HarfBuzz::script_t buffer_get_script (HarfBuzz::buffer_t buffer) noexcept;

// void hb_buffer_get_segment_properties (hb_buffer_t* buffer, hb_segment_properties_t* props);
// void hb_buffer_get_segment_properties (::hb_buffer_t* buffer, ::hb_segment_properties_t* props);
GI_INLINE_DECL void buffer_get_segment_properties (HarfBuzz::buffer_t buffer, HarfBuzz::segment_properties_t & props) noexcept;
GI_INLINE_DECL HarfBuzz::segment_properties_t buffer_get_segment_properties (HarfBuzz::buffer_t buffer) noexcept;

// hb_unicode_funcs_t* hb_buffer_get_unicode_funcs (hb_buffer_t* buffer);
// ::hb_unicode_funcs_t* hb_buffer_get_unicode_funcs (::hb_buffer_t* buffer);
GI_INLINE_DECL HarfBuzz::unicode_funcs_t buffer_get_unicode_funcs (HarfBuzz::buffer_t buffer) noexcept;

// void* hb_buffer_get_user_data (hb_buffer_t* buffer, hb_user_data_key_t* key);
// void* hb_buffer_get_user_data (::hb_buffer_t* buffer, ::hb_user_data_key_t* key);
GI_INLINE_DECL gpointer buffer_get_user_data (HarfBuzz::buffer_t buffer, HarfBuzz::user_data_key_t key) noexcept;

// void hb_buffer_guess_segment_properties (hb_buffer_t* buffer);
// void hb_buffer_guess_segment_properties (::hb_buffer_t* buffer);
GI_INLINE_DECL void buffer_guess_segment_properties (HarfBuzz::buffer_t buffer) noexcept;

// hb_bool_t hb_buffer_has_positions (hb_buffer_t* buffer);
// ::hb_bool_t hb_buffer_has_positions (::hb_buffer_t* buffer);
GI_INLINE_DECL HarfBuzz::bool_t buffer_has_positions (HarfBuzz::buffer_t buffer) noexcept;

// void hb_buffer_normalize_glyphs (hb_buffer_t* buffer);
// void hb_buffer_normalize_glyphs (::hb_buffer_t* buffer);
GI_INLINE_DECL void buffer_normalize_glyphs (HarfBuzz::buffer_t buffer) noexcept;

// hb_bool_t hb_buffer_pre_allocate (hb_buffer_t* buffer, unsigned int size);
// ::hb_bool_t hb_buffer_pre_allocate (::hb_buffer_t* buffer, guint size);
GI_INLINE_DECL HarfBuzz::bool_t buffer_pre_allocate (HarfBuzz::buffer_t buffer, guint size) noexcept;

// hb_buffer_t* hb_buffer_reference (hb_buffer_t* buffer);
// ::hb_buffer_t* hb_buffer_reference (::hb_buffer_t* buffer);
GI_INLINE_DECL HarfBuzz::buffer_t buffer_reference (HarfBuzz::buffer_t buffer) noexcept;

// void hb_buffer_reset (hb_buffer_t* buffer);
// void hb_buffer_reset (::hb_buffer_t* buffer);
GI_INLINE_DECL void buffer_reset (HarfBuzz::buffer_t buffer) noexcept;

// void hb_buffer_reverse (hb_buffer_t* buffer);
// void hb_buffer_reverse (::hb_buffer_t* buffer);
GI_INLINE_DECL void buffer_reverse (HarfBuzz::buffer_t buffer) noexcept;

// void hb_buffer_reverse_clusters (hb_buffer_t* buffer);
// void hb_buffer_reverse_clusters (::hb_buffer_t* buffer);
GI_INLINE_DECL void buffer_reverse_clusters (HarfBuzz::buffer_t buffer) noexcept;

// void hb_buffer_reverse_range (hb_buffer_t* buffer, unsigned int start, unsigned int end);
// void hb_buffer_reverse_range (::hb_buffer_t* buffer, guint start, guint end);
GI_INLINE_DECL void buffer_reverse_range (HarfBuzz::buffer_t buffer, guint start, guint end) noexcept;

// unsigned int hb_buffer_serialize (hb_buffer_t* buffer, unsigned int start, unsigned int end, char* buf, unsigned int buf_size, unsigned int* buf_consumed, hb_font_t* font, hb_buffer_serialize_format_t format, hb_buffer_serialize_flags_t flags);
// guint hb_buffer_serialize (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
GI_INLINE_DECL guint buffer_serialize (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, guint * buf_consumed, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept;
GI_INLINE_DECL guint buffer_serialize (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, guint * buf_consumed, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept;
GI_INLINE_DECL std::tuple<guint, guint> buffer_serialize (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept;
GI_INLINE_DECL std::tuple<guint, guint> buffer_serialize (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept;

// hb_buffer_serialize_format_t hb_buffer_serialize_format_from_string (const char* str, int len);
// ::hb_buffer_serialize_format_t hb_buffer_serialize_format_from_string (const guint8* str, gint len);
GI_INLINE_DECL HarfBuzz::buffer_serialize_format_t buffer_serialize_format_from_string (guint8 * str, gint len) noexcept;

// const char* hb_buffer_serialize_format_to_string (hb_buffer_serialize_format_t format);
// const char* hb_buffer_serialize_format_to_string (::hb_buffer_serialize_format_t format);
GI_INLINE_DECL std::string buffer_serialize_format_to_string (HarfBuzz::buffer_serialize_format_t format) noexcept;

// unsigned int hb_buffer_serialize_glyphs (hb_buffer_t* buffer, unsigned int start, unsigned int end, char* buf, unsigned int buf_size, unsigned int* buf_consumed, hb_font_t* font, hb_buffer_serialize_format_t format, hb_buffer_serialize_flags_t flags);
// guint hb_buffer_serialize_glyphs (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
GI_INLINE_DECL guint buffer_serialize_glyphs (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, guint * buf_consumed, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept;
GI_INLINE_DECL guint buffer_serialize_glyphs (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, guint * buf_consumed, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept;
GI_INLINE_DECL std::tuple<guint, guint> buffer_serialize_glyphs (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept;
GI_INLINE_DECL std::tuple<guint, guint> buffer_serialize_glyphs (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept;

// const char** hb_buffer_serialize_list_formats ();
// const char** hb_buffer_serialize_list_formats ();
GI_INLINE_DECL std::vector<std::string> buffer_serialize_list_formats () noexcept;

// unsigned int hb_buffer_serialize_unicode (hb_buffer_t* buffer, unsigned int start, unsigned int end, char* buf, unsigned int buf_size, unsigned int* buf_consumed, hb_buffer_serialize_format_t format, hb_buffer_serialize_flags_t flags);
// guint hb_buffer_serialize_unicode (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
GI_INLINE_DECL guint buffer_serialize_unicode (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, guint * buf_consumed, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept;
GI_INLINE_DECL std::tuple<guint, guint> buffer_serialize_unicode (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept;

// void hb_buffer_set_cluster_level (hb_buffer_t* buffer, hb_buffer_cluster_level_t cluster_level);
// void hb_buffer_set_cluster_level (::hb_buffer_t* buffer, ::hb_buffer_cluster_level_t cluster_level);
GI_INLINE_DECL void buffer_set_cluster_level (HarfBuzz::buffer_t buffer, HarfBuzz::buffer_cluster_level_t cluster_level) noexcept;

// void hb_buffer_set_content_type (hb_buffer_t* buffer, hb_buffer_content_type_t content_type);
// void hb_buffer_set_content_type (::hb_buffer_t* buffer, ::hb_buffer_content_type_t content_type);
GI_INLINE_DECL void buffer_set_content_type (HarfBuzz::buffer_t buffer, HarfBuzz::buffer_content_type_t content_type) noexcept;

// void hb_buffer_set_direction (hb_buffer_t* buffer, hb_direction_t direction);
// void hb_buffer_set_direction (::hb_buffer_t* buffer, ::hb_direction_t direction);
GI_INLINE_DECL void buffer_set_direction (HarfBuzz::buffer_t buffer, HarfBuzz::direction_t direction) noexcept;

// void hb_buffer_set_flags (hb_buffer_t* buffer, hb_buffer_flags_t flags);
// void hb_buffer_set_flags (::hb_buffer_t* buffer, ::hb_buffer_flags_t flags);
GI_INLINE_DECL void buffer_set_flags (HarfBuzz::buffer_t buffer, HarfBuzz::buffer_flags_t flags) noexcept;

// void hb_buffer_set_invisible_glyph (hb_buffer_t* buffer, hb_codepoint_t invisible);
// void hb_buffer_set_invisible_glyph (::hb_buffer_t* buffer, ::hb_codepoint_t invisible);
GI_INLINE_DECL void buffer_set_invisible_glyph (HarfBuzz::buffer_t buffer, ::hb_codepoint_t invisible) noexcept;

// void hb_buffer_set_language (hb_buffer_t* buffer, hb_language_t language);
// void hb_buffer_set_language (::hb_buffer_t* buffer,  language);
// SKIP; language type  not supported

// hb_bool_t hb_buffer_set_length (hb_buffer_t* buffer, unsigned int length);
// ::hb_bool_t hb_buffer_set_length (::hb_buffer_t* buffer, guint length);
GI_INLINE_DECL HarfBuzz::bool_t buffer_set_length (HarfBuzz::buffer_t buffer, guint length) noexcept;

// void hb_buffer_set_message_func (hb_buffer_t* buffer, hb_buffer_message_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_buffer_set_message_func (::hb_buffer_t* buffer,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_buffer_set_replacement_codepoint (hb_buffer_t* buffer, hb_codepoint_t replacement);
// void hb_buffer_set_replacement_codepoint (::hb_buffer_t* buffer, ::hb_codepoint_t replacement);
GI_INLINE_DECL void buffer_set_replacement_codepoint (HarfBuzz::buffer_t buffer, ::hb_codepoint_t replacement) noexcept;

// void hb_buffer_set_script (hb_buffer_t* buffer, hb_script_t script);
// void hb_buffer_set_script (::hb_buffer_t* buffer, ::hb_script_t script);
GI_INLINE_DECL void buffer_set_script (HarfBuzz::buffer_t buffer, HarfBuzz::script_t script) noexcept;

// void hb_buffer_set_segment_properties (hb_buffer_t* buffer, const hb_segment_properties_t* props);
// void hb_buffer_set_segment_properties (::hb_buffer_t* buffer, const ::hb_segment_properties_t* props);
GI_INLINE_DECL void buffer_set_segment_properties (HarfBuzz::buffer_t buffer, const HarfBuzz::segment_properties_t & props) noexcept;

// void hb_buffer_set_unicode_funcs (hb_buffer_t* buffer, hb_unicode_funcs_t* unicode_funcs);
// void hb_buffer_set_unicode_funcs (::hb_buffer_t* buffer, ::hb_unicode_funcs_t* unicode_funcs);
GI_INLINE_DECL void buffer_set_unicode_funcs (HarfBuzz::buffer_t buffer, HarfBuzz::unicode_funcs_t unicode_funcs) noexcept;

// hb_bool_t hb_buffer_set_user_data (hb_buffer_t* buffer, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_buffer_set_user_data (::hb_buffer_t* buffer, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// uint8_t hb_color_get_alpha (hb_color_t color);
// guint8 hb_color_get_alpha (::hb_color_t color);
GI_INLINE_DECL guint8 color_get_alpha (::hb_color_t color) noexcept;

// uint8_t hb_color_get_blue (hb_color_t color);
// guint8 hb_color_get_blue (::hb_color_t color);
GI_INLINE_DECL guint8 color_get_blue (::hb_color_t color) noexcept;

// uint8_t hb_color_get_green (hb_color_t color);
// guint8 hb_color_get_green (::hb_color_t color);
GI_INLINE_DECL guint8 color_get_green (::hb_color_t color) noexcept;

// uint8_t hb_color_get_red (hb_color_t color);
// guint8 hb_color_get_red (::hb_color_t color);
GI_INLINE_DECL guint8 color_get_red (::hb_color_t color) noexcept;

// hb_direction_t hb_direction_from_string (const char* str, int len);
// ::hb_direction_t hb_direction_from_string (const guint8* str, gint len);
GI_INLINE_DECL HarfBuzz::direction_t direction_from_string (guint8 * str, gint len) noexcept;

// const char* hb_direction_to_string (hb_direction_t direction);
// const char* hb_direction_to_string (::hb_direction_t direction);
GI_INLINE_DECL std::string direction_to_string (HarfBuzz::direction_t direction) noexcept;

// hb_bool_t hb_face_builder_add_table (hb_face_t* face, hb_tag_t tag, hb_blob_t* blob);
// ::hb_bool_t hb_face_builder_add_table (::hb_face_t* face, ::hb_tag_t tag, ::hb_blob_t* blob);
GI_INLINE_DECL HarfBuzz::bool_t face_builder_add_table (HarfBuzz::face_t face, ::hb_tag_t tag, HarfBuzz::blob_t blob) noexcept;

// hb_face_t* hb_face_builder_create ();
// ::hb_face_t* hb_face_builder_create ();
GI_INLINE_DECL HarfBuzz::face_t face_builder_create () noexcept;

// void hb_face_collect_unicodes (hb_face_t* face, hb_set_t* out);
// void hb_face_collect_unicodes (::hb_face_t* face, ::hb_set_t* out);
GI_INLINE_DECL void face_collect_unicodes (HarfBuzz::face_t face, HarfBuzz::set_t out) noexcept;

// void hb_face_collect_variation_selectors (hb_face_t* face, hb_set_t* out);
// void hb_face_collect_variation_selectors (::hb_face_t* face, ::hb_set_t* out);
GI_INLINE_DECL void face_collect_variation_selectors (HarfBuzz::face_t face, HarfBuzz::set_t out) noexcept;

// void hb_face_collect_variation_unicodes (hb_face_t* face, hb_codepoint_t variation_selector, hb_set_t* out);
// void hb_face_collect_variation_unicodes (::hb_face_t* face, ::hb_codepoint_t variation_selector, ::hb_set_t* out);
GI_INLINE_DECL void face_collect_variation_unicodes (HarfBuzz::face_t face, ::hb_codepoint_t variation_selector, HarfBuzz::set_t out) noexcept;

// unsigned int hb_face_count (hb_blob_t* blob);
// guint hb_face_count (::hb_blob_t* blob);
GI_INLINE_DECL guint face_count (HarfBuzz::blob_t blob) noexcept;

// hb_face_t* hb_face_create (hb_blob_t* blob, unsigned int index);
// ::hb_face_t* hb_face_create (::hb_blob_t* blob, guint index);
GI_INLINE_DECL HarfBuzz::face_t face_create (HarfBuzz::blob_t blob, guint index) noexcept;

// hb_face_t* hb_face_create_for_tables (hb_reference_table_func_t reference_table_func, void* user_data, hb_destroy_func_t destroy);
// ::hb_face_t* hb_face_create_for_tables ( reference_table_func, void* user_data,  destroy);
// SKIP; destroy type  not supported, reference_table_func type  not supported

// void hb_face_destroy (hb_face_t* face);
// void hb_face_destroy (::hb_face_t* face);
GI_INLINE_DECL void face_destroy (HarfBuzz::face_t face) noexcept;

// hb_face_t* hb_face_get_empty ();
// ::hb_face_t* hb_face_get_empty ();
GI_INLINE_DECL HarfBuzz::face_t face_get_empty () noexcept;

// unsigned int hb_face_get_glyph_count (const hb_face_t* face);
// guint hb_face_get_glyph_count (const ::hb_face_t* face);
GI_INLINE_DECL guint face_get_glyph_count (const HarfBuzz::face_t & face) noexcept;

// unsigned int hb_face_get_index (const hb_face_t* face);
// guint hb_face_get_index (const ::hb_face_t* face);
GI_INLINE_DECL guint face_get_index (const HarfBuzz::face_t & face) noexcept;

// unsigned int hb_face_get_table_tags (const hb_face_t* face, unsigned int start_offset, unsigned int* table_count, hb_tag_t* table_tags);
// guint hb_face_get_table_tags (const ::hb_face_t* face, guint start_offset, guint* table_count, ::hb_tag_t** table_tags);
GI_INLINE_DECL guint face_get_table_tags (const HarfBuzz::face_t & face, guint start_offset, std::vector<HarfBuzz::tag_t> & table_tags) noexcept;

// unsigned int hb_face_get_upem (const hb_face_t* face);
// guint hb_face_get_upem (const ::hb_face_t* face);
GI_INLINE_DECL guint face_get_upem (const HarfBuzz::face_t & face) noexcept;

// void* hb_face_get_user_data (const hb_face_t* face, hb_user_data_key_t* key);
// void* hb_face_get_user_data (const ::hb_face_t* face, ::hb_user_data_key_t* key);
GI_INLINE_DECL gpointer face_get_user_data (const HarfBuzz::face_t & face, HarfBuzz::user_data_key_t key) noexcept;

// hb_bool_t hb_face_is_immutable (const hb_face_t* face);
// ::hb_bool_t hb_face_is_immutable (const ::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::bool_t face_is_immutable (const HarfBuzz::face_t & face) noexcept;

// void hb_face_make_immutable (hb_face_t* face);
// void hb_face_make_immutable (::hb_face_t* face);
GI_INLINE_DECL void face_make_immutable (HarfBuzz::face_t face) noexcept;

// hb_face_t* hb_face_reference (hb_face_t* face);
// ::hb_face_t* hb_face_reference (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::face_t face_reference (HarfBuzz::face_t face) noexcept;

// hb_blob_t* hb_face_reference_blob (hb_face_t* face);
// ::hb_blob_t* hb_face_reference_blob (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::blob_t face_reference_blob (HarfBuzz::face_t face) noexcept;

// hb_blob_t* hb_face_reference_table (const hb_face_t* face, hb_tag_t tag);
// ::hb_blob_t* hb_face_reference_table (const ::hb_face_t* face, ::hb_tag_t tag);
GI_INLINE_DECL HarfBuzz::blob_t face_reference_table (const HarfBuzz::face_t & face, ::hb_tag_t tag) noexcept;

// void hb_face_set_glyph_count (hb_face_t* face, unsigned int glyph_count);
// void hb_face_set_glyph_count (::hb_face_t* face, guint glyph_count);
GI_INLINE_DECL void face_set_glyph_count (HarfBuzz::face_t face, guint glyph_count) noexcept;

// void hb_face_set_index (hb_face_t* face, unsigned int index);
// void hb_face_set_index (::hb_face_t* face, guint index);
GI_INLINE_DECL void face_set_index (HarfBuzz::face_t face, guint index) noexcept;

// void hb_face_set_upem (hb_face_t* face, unsigned int upem);
// void hb_face_set_upem (::hb_face_t* face, guint upem);
GI_INLINE_DECL void face_set_upem (HarfBuzz::face_t face, guint upem) noexcept;

// hb_bool_t hb_face_set_user_data (hb_face_t* face, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_face_set_user_data (::hb_face_t* face, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// hb_bool_t hb_feature_from_string (const char* str, int len, hb_feature_t* feature);
// ::hb_bool_t hb_feature_from_string (const guint8* str, gint len, ::hb_feature_t* feature);
GI_INLINE_DECL HarfBuzz::bool_t feature_from_string (guint8 * str, gint len, HarfBuzz::feature_t & feature) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::feature_t> feature_from_string (guint8 * str, gint len) noexcept;

// void hb_feature_to_string (hb_feature_t* feature, char* buf, unsigned int size);
// void hb_feature_to_string (::hb_feature_t* feature, char*** buf, guint size);
// SKIP; inconsistent out buf pointer depth (1 vs 3)

// void hb_font_add_glyph_origin_for_direction (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// void hb_font_add_glyph_origin_for_direction (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
GI_INLINE_DECL void font_add_glyph_origin_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept;

// hb_font_t* hb_font_create (hb_face_t* face);
// ::hb_font_t* hb_font_create (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::font_t font_create (HarfBuzz::face_t face) noexcept;

// hb_font_t* hb_font_create_sub_font (hb_font_t* parent);
// ::hb_font_t* hb_font_create_sub_font (::hb_font_t* parent);
GI_INLINE_DECL HarfBuzz::font_t font_create_sub_font (HarfBuzz::font_t parent) noexcept;

// void hb_font_destroy (hb_font_t* font);
// void hb_font_destroy (::hb_font_t* font);
GI_INLINE_DECL void font_destroy (HarfBuzz::font_t font) noexcept;

// hb_font_funcs_t* hb_font_funcs_create ();
// ::hb_font_funcs_t* hb_font_funcs_create ();
GI_INLINE_DECL HarfBuzz::font_funcs_t font_funcs_create () noexcept;

// void hb_font_funcs_destroy (hb_font_funcs_t* ffuncs);
// void hb_font_funcs_destroy (::hb_font_funcs_t* ffuncs);
GI_INLINE_DECL void font_funcs_destroy (HarfBuzz::font_funcs_t ffuncs) noexcept;

// hb_font_funcs_t* hb_font_funcs_get_empty ();
// ::hb_font_funcs_t* hb_font_funcs_get_empty ();
GI_INLINE_DECL HarfBuzz::font_funcs_t font_funcs_get_empty () noexcept;

// void* hb_font_funcs_get_user_data (hb_font_funcs_t* ffuncs, hb_user_data_key_t* key);
// void* hb_font_funcs_get_user_data (::hb_font_funcs_t* ffuncs, ::hb_user_data_key_t* key);
GI_INLINE_DECL gpointer font_funcs_get_user_data (HarfBuzz::font_funcs_t ffuncs, HarfBuzz::user_data_key_t key) noexcept;

// hb_bool_t hb_font_funcs_is_immutable (hb_font_funcs_t* ffuncs);
// ::hb_bool_t hb_font_funcs_is_immutable (::hb_font_funcs_t* ffuncs);
GI_INLINE_DECL HarfBuzz::bool_t font_funcs_is_immutable (HarfBuzz::font_funcs_t ffuncs) noexcept;

// void hb_font_funcs_make_immutable (hb_font_funcs_t* ffuncs);
// void hb_font_funcs_make_immutable (::hb_font_funcs_t* ffuncs);
GI_INLINE_DECL void font_funcs_make_immutable (HarfBuzz::font_funcs_t ffuncs) noexcept;

// hb_font_funcs_t* hb_font_funcs_reference (hb_font_funcs_t* ffuncs);
// ::hb_font_funcs_t* hb_font_funcs_reference (::hb_font_funcs_t* ffuncs);
GI_INLINE_DECL HarfBuzz::font_funcs_t font_funcs_reference (HarfBuzz::font_funcs_t ffuncs) noexcept;

// void hb_font_funcs_set_font_h_extents_func (hb_font_funcs_t* ffuncs, hb_font_get_font_h_extents_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_font_h_extents_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_font_v_extents_func (hb_font_funcs_t* ffuncs, hb_font_get_font_v_extents_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_font_v_extents_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_glyph_contour_point_func (hb_font_funcs_t* ffuncs, hb_font_get_glyph_contour_point_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_glyph_contour_point_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_glyph_extents_func (hb_font_funcs_t* ffuncs, hb_font_get_glyph_extents_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_glyph_extents_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_glyph_from_name_func (hb_font_funcs_t* ffuncs, hb_font_get_glyph_from_name_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_glyph_from_name_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_glyph_h_advance_func (hb_font_funcs_t* ffuncs, hb_font_get_glyph_h_advance_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_glyph_h_advance_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_glyph_h_advances_func (hb_font_funcs_t* ffuncs, hb_font_get_glyph_h_advances_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_glyph_h_advances_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_glyph_h_kerning_func (hb_font_funcs_t* ffuncs, hb_font_get_glyph_h_kerning_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_glyph_h_kerning_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_glyph_h_origin_func (hb_font_funcs_t* ffuncs, hb_font_get_glyph_h_origin_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_glyph_h_origin_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_glyph_name_func (hb_font_funcs_t* ffuncs, hb_font_get_glyph_name_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_glyph_name_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_glyph_v_advance_func (hb_font_funcs_t* ffuncs, hb_font_get_glyph_v_advance_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_glyph_v_advance_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_glyph_v_advances_func (hb_font_funcs_t* ffuncs, hb_font_get_glyph_v_advances_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_glyph_v_advances_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_glyph_v_origin_func (hb_font_funcs_t* ffuncs, hb_font_get_glyph_v_origin_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_glyph_v_origin_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_nominal_glyph_func (hb_font_funcs_t* ffuncs, hb_font_get_nominal_glyph_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_nominal_glyph_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_font_funcs_set_nominal_glyphs_func (hb_font_funcs_t* ffuncs, hb_font_get_nominal_glyphs_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_nominal_glyphs_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// hb_bool_t hb_font_funcs_set_user_data (hb_font_funcs_t* ffuncs, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_font_funcs_set_user_data (::hb_font_funcs_t* ffuncs, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// void hb_font_funcs_set_variation_glyph_func (hb_font_funcs_t* ffuncs, hb_font_get_variation_glyph_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_font_funcs_set_variation_glyph_func (::hb_font_funcs_t* ffuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// hb_font_t* hb_font_get_empty ();
// ::hb_font_t* hb_font_get_empty ();
GI_INLINE_DECL HarfBuzz::font_t font_get_empty () noexcept;

// void hb_font_get_extents_for_direction (hb_font_t* font, hb_direction_t direction, hb_font_extents_t* extents);
// void hb_font_get_extents_for_direction (::hb_font_t* font, ::hb_direction_t direction, ::hb_font_extents_t* extents);
GI_INLINE_DECL void font_get_extents_for_direction (HarfBuzz::font_t font, HarfBuzz::direction_t direction, HarfBuzz::font_extents_t & extents) noexcept;
GI_INLINE_DECL HarfBuzz::font_extents_t font_get_extents_for_direction (HarfBuzz::font_t font, HarfBuzz::direction_t direction) noexcept;

// hb_face_t* hb_font_get_face (hb_font_t* font);
// ::hb_face_t* hb_font_get_face (::hb_font_t* font);
GI_INLINE_DECL HarfBuzz::face_t font_get_face (HarfBuzz::font_t font) noexcept;

// hb_bool_t hb_font_get_glyph (hb_font_t* font, hb_codepoint_t unicode, hb_codepoint_t variation_selector, hb_codepoint_t* glyph);
// ::hb_bool_t hb_font_get_glyph (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, ::hb_codepoint_t* glyph);
GI_INLINE_DECL HarfBuzz::bool_t font_get_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, HarfBuzz::codepoint_t & glyph) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> font_get_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector) noexcept;

// void hb_font_get_glyph_advance_for_direction (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// void hb_font_get_glyph_advance_for_direction (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
GI_INLINE_DECL void font_get_glyph_advance_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_advance_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction) noexcept;

// void hb_font_get_glyph_advances_for_direction (hb_font_t* font, hb_direction_t direction, unsigned int count, const hb_codepoint_t* first_glyph, unsigned glyph_stride, hb_position_t* first_advance, unsigned advance_stride);
// void hb_font_get_glyph_advances_for_direction (::hb_font_t* font, ::hb_direction_t direction, guint count, const ::hb_codepoint_t first_glyph, guint glyph_stride, ::hb_position_t* first_advance, guint* advance_stride);
// SKIP; inconsistent out advance_stride pointer depth (0 vs 1), inconsistent in first_glyph pointer depth (1 vs 0)

// hb_bool_t hb_font_get_glyph_contour_point (hb_font_t* font, hb_codepoint_t glyph, unsigned int point_index, hb_position_t* x, hb_position_t* y);
// ::hb_bool_t hb_font_get_glyph_contour_point (::hb_font_t* font, ::hb_codepoint_t glyph, guint point_index, ::hb_position_t* x, ::hb_position_t* y);
GI_INLINE_DECL HarfBuzz::bool_t font_get_glyph_contour_point (HarfBuzz::font_t font, ::hb_codepoint_t glyph, guint point_index, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_contour_point (HarfBuzz::font_t font, ::hb_codepoint_t glyph, guint point_index) noexcept;

// hb_bool_t hb_font_get_glyph_contour_point_for_origin (hb_font_t* font, hb_codepoint_t glyph, unsigned int point_index, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// ::hb_bool_t hb_font_get_glyph_contour_point_for_origin (::hb_font_t* font, ::hb_codepoint_t glyph, guint point_index, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
GI_INLINE_DECL HarfBuzz::bool_t font_get_glyph_contour_point_for_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, guint point_index, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_contour_point_for_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, guint point_index, HarfBuzz::direction_t direction) noexcept;

// hb_bool_t hb_font_get_glyph_extents (hb_font_t* font, hb_codepoint_t glyph, hb_glyph_extents_t* extents);
// ::hb_bool_t hb_font_get_glyph_extents (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_glyph_extents_t* extents);
GI_INLINE_DECL HarfBuzz::bool_t font_get_glyph_extents (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::glyph_extents_t & extents) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::glyph_extents_t> font_get_glyph_extents (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept;

// hb_bool_t hb_font_get_glyph_extents_for_origin (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, hb_glyph_extents_t* extents);
// ::hb_bool_t hb_font_get_glyph_extents_for_origin (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_glyph_extents_t* extents);
GI_INLINE_DECL HarfBuzz::bool_t font_get_glyph_extents_for_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction, HarfBuzz::glyph_extents_t & extents) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::glyph_extents_t> font_get_glyph_extents_for_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction) noexcept;

// hb_bool_t hb_font_get_glyph_from_name (hb_font_t* font, const char* name, int len, hb_codepoint_t* glyph);
// ::hb_bool_t hb_font_get_glyph_from_name (::hb_font_t* font, const char** name, gint len, ::hb_codepoint_t* glyph);
GI_INLINE_DECL HarfBuzz::bool_t font_get_glyph_from_name (HarfBuzz::font_t font, std::string * name, gint len, HarfBuzz::codepoint_t & glyph) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> font_get_glyph_from_name (HarfBuzz::font_t font, std::string * name, gint len) noexcept;

// hb_position_t hb_font_get_glyph_h_advance (hb_font_t* font, hb_codepoint_t glyph);
// ::hb_position_t hb_font_get_glyph_h_advance (::hb_font_t* font, ::hb_codepoint_t glyph);
GI_INLINE_DECL HarfBuzz::position_t font_get_glyph_h_advance (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept;

// void hb_font_get_glyph_h_advances (hb_font_t* font, unsigned int count, const hb_codepoint_t* first_glyph, unsigned glyph_stride, hb_position_t* first_advance, unsigned advance_stride);
// void hb_font_get_glyph_h_advances (::hb_font_t* font, guint count, const ::hb_codepoint_t first_glyph, guint glyph_stride, ::hb_position_t* first_advance, guint* advance_stride);
// SKIP; inconsistent out advance_stride pointer depth (0 vs 1), inconsistent in first_glyph pointer depth (1 vs 0)

// hb_position_t hb_font_get_glyph_h_kerning (hb_font_t* font, hb_codepoint_t left_glyph, hb_codepoint_t right_glyph);
// ::hb_position_t hb_font_get_glyph_h_kerning (::hb_font_t* font, ::hb_codepoint_t left_glyph, ::hb_codepoint_t right_glyph);
GI_INLINE_DECL HarfBuzz::position_t font_get_glyph_h_kerning (HarfBuzz::font_t font, ::hb_codepoint_t left_glyph, ::hb_codepoint_t right_glyph) noexcept;

// hb_bool_t hb_font_get_glyph_h_origin (hb_font_t* font, hb_codepoint_t glyph, hb_position_t* x, hb_position_t* y);
// ::hb_bool_t hb_font_get_glyph_h_origin (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_position_t* x, ::hb_position_t* y);
GI_INLINE_DECL HarfBuzz::bool_t font_get_glyph_h_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_h_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept;

// void hb_font_get_glyph_kerning_for_direction (hb_font_t* font, hb_codepoint_t first_glyph, hb_codepoint_t second_glyph, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// void hb_font_get_glyph_kerning_for_direction (::hb_font_t* font, ::hb_codepoint_t first_glyph, ::hb_codepoint_t second_glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
GI_INLINE_DECL void font_get_glyph_kerning_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t first_glyph, ::hb_codepoint_t second_glyph, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_kerning_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t first_glyph, ::hb_codepoint_t second_glyph, HarfBuzz::direction_t direction) noexcept;

// hb_bool_t hb_font_get_glyph_name (hb_font_t* font, hb_codepoint_t glyph, char* name, unsigned int size);
// ::hb_bool_t hb_font_get_glyph_name (::hb_font_t* font, ::hb_codepoint_t glyph, char*** name, guint size);
// SKIP; inconsistent out name pointer depth (1 vs 3)

// void hb_font_get_glyph_origin_for_direction (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// void hb_font_get_glyph_origin_for_direction (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
GI_INLINE_DECL void font_get_glyph_origin_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_origin_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction) noexcept;

// hb_position_t hb_font_get_glyph_v_advance (hb_font_t* font, hb_codepoint_t glyph);
// ::hb_position_t hb_font_get_glyph_v_advance (::hb_font_t* font, ::hb_codepoint_t glyph);
GI_INLINE_DECL HarfBuzz::position_t font_get_glyph_v_advance (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept;

// void hb_font_get_glyph_v_advances (hb_font_t* font, unsigned int count, const hb_codepoint_t* first_glyph, unsigned glyph_stride, hb_position_t* first_advance, unsigned advance_stride);
// void hb_font_get_glyph_v_advances (::hb_font_t* font, guint count, const ::hb_codepoint_t first_glyph, guint glyph_stride, ::hb_position_t* first_advance, guint* advance_stride);
// SKIP; inconsistent out advance_stride pointer depth (0 vs 1), inconsistent in first_glyph pointer depth (1 vs 0)

// hb_bool_t hb_font_get_glyph_v_origin (hb_font_t* font, hb_codepoint_t glyph, hb_position_t* x, hb_position_t* y);
// ::hb_bool_t hb_font_get_glyph_v_origin (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_position_t* x, ::hb_position_t* y);
GI_INLINE_DECL HarfBuzz::bool_t font_get_glyph_v_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_v_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept;

// hb_bool_t hb_font_get_h_extents (hb_font_t* font, hb_font_extents_t* extents);
// ::hb_bool_t hb_font_get_h_extents (::hb_font_t* font, ::hb_font_extents_t* extents);
GI_INLINE_DECL HarfBuzz::bool_t font_get_h_extents (HarfBuzz::font_t font, HarfBuzz::font_extents_t & extents) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::font_extents_t> font_get_h_extents (HarfBuzz::font_t font) noexcept;

// hb_bool_t hb_font_get_nominal_glyph (hb_font_t* font, hb_codepoint_t unicode, hb_codepoint_t* glyph);
// ::hb_bool_t hb_font_get_nominal_glyph (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t* glyph);
GI_INLINE_DECL HarfBuzz::bool_t font_get_nominal_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode, HarfBuzz::codepoint_t & glyph) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> font_get_nominal_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode) noexcept;

// unsigned int hb_font_get_nominal_glyphs (hb_font_t* font, unsigned int count, const hb_codepoint_t* first_unicode, unsigned int unicode_stride, hb_codepoint_t* first_glyph, unsigned int glyph_stride);
// guint hb_font_get_nominal_glyphs (::hb_font_t* font, guint count, const ::hb_codepoint_t first_unicode, guint unicode_stride, ::hb_codepoint_t first_glyph, guint glyph_stride);
// SKIP; inconsistent in first_glyph pointer depth (1 vs 0), inconsistent in first_unicode pointer depth (1 vs 0)

// hb_font_t* hb_font_get_parent (hb_font_t* font);
// ::hb_font_t* hb_font_get_parent (::hb_font_t* font);
GI_INLINE_DECL HarfBuzz::font_t font_get_parent (HarfBuzz::font_t font) noexcept;

// void hb_font_get_ppem (hb_font_t* font, unsigned int* x_ppem, unsigned int* y_ppem);
// void hb_font_get_ppem (::hb_font_t* font, guint* x_ppem, guint* y_ppem);
GI_INLINE_DECL void font_get_ppem (HarfBuzz::font_t font, guint & x_ppem, guint & y_ppem) noexcept;
GI_INLINE_DECL std::tuple<guint, guint> font_get_ppem (HarfBuzz::font_t font) noexcept;

// float hb_font_get_ptem (hb_font_t* font);
// gfloat hb_font_get_ptem (::hb_font_t* font);
GI_INLINE_DECL gfloat font_get_ptem (HarfBuzz::font_t font) noexcept;

// void hb_font_get_scale (hb_font_t* font, int* x_scale, int* y_scale);
// void hb_font_get_scale (::hb_font_t* font, gint* x_scale, gint* y_scale);
GI_INLINE_DECL void font_get_scale (HarfBuzz::font_t font, gint & x_scale, gint & y_scale) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> font_get_scale (HarfBuzz::font_t font) noexcept;

// void* hb_font_get_user_data (hb_font_t* font, hb_user_data_key_t* key);
// void* hb_font_get_user_data (::hb_font_t* font, ::hb_user_data_key_t* key);
GI_INLINE_DECL gpointer font_get_user_data (HarfBuzz::font_t font, HarfBuzz::user_data_key_t key) noexcept;

// hb_bool_t hb_font_get_v_extents (hb_font_t* font, hb_font_extents_t* extents);
// ::hb_bool_t hb_font_get_v_extents (::hb_font_t* font, ::hb_font_extents_t* extents);
GI_INLINE_DECL HarfBuzz::bool_t font_get_v_extents (HarfBuzz::font_t font, HarfBuzz::font_extents_t & extents) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::font_extents_t> font_get_v_extents (HarfBuzz::font_t font) noexcept;

// const int* hb_font_get_var_coords_normalized (hb_font_t* font, unsigned int* length);
// const gint hb_font_get_var_coords_normalized (::hb_font_t* font, guint length);
// SKIP; inconsistent in length pointer depth (1 vs 0), inconsistent return  pointer depth (1 vs 0)

// hb_bool_t hb_font_get_variation_glyph (hb_font_t* font, hb_codepoint_t unicode, hb_codepoint_t variation_selector, hb_codepoint_t* glyph);
// ::hb_bool_t hb_font_get_variation_glyph (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, ::hb_codepoint_t* glyph);
GI_INLINE_DECL HarfBuzz::bool_t font_get_variation_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, HarfBuzz::codepoint_t & glyph) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> font_get_variation_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector) noexcept;

// hb_bool_t hb_font_glyph_from_string (hb_font_t* font, const char* s, int len, hb_codepoint_t* glyph);
// ::hb_bool_t hb_font_glyph_from_string (::hb_font_t* font, const guint8* s, gint len, ::hb_codepoint_t* glyph);
GI_INLINE_DECL HarfBuzz::bool_t font_glyph_from_string (HarfBuzz::font_t font, guint8 * s, gint len, HarfBuzz::codepoint_t & glyph) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> font_glyph_from_string (HarfBuzz::font_t font, guint8 * s, gint len) noexcept;

// void hb_font_glyph_to_string (hb_font_t* font, hb_codepoint_t glyph, char* s, unsigned int size);
// void hb_font_glyph_to_string (::hb_font_t* font, ::hb_codepoint_t glyph, char*** s, guint size);
// SKIP; inconsistent out s pointer depth (1 vs 3)

// hb_bool_t hb_font_is_immutable (hb_font_t* font);
// ::hb_bool_t hb_font_is_immutable (::hb_font_t* font);
GI_INLINE_DECL HarfBuzz::bool_t font_is_immutable (HarfBuzz::font_t font) noexcept;

// void hb_font_make_immutable (hb_font_t* font);
// void hb_font_make_immutable (::hb_font_t* font);
GI_INLINE_DECL void font_make_immutable (HarfBuzz::font_t font) noexcept;

// hb_font_t* hb_font_reference (hb_font_t* font);
// ::hb_font_t* hb_font_reference (::hb_font_t* font);
GI_INLINE_DECL HarfBuzz::font_t font_reference (HarfBuzz::font_t font) noexcept;

// void hb_font_set_face (hb_font_t* font, hb_face_t* face);
// void hb_font_set_face (::hb_font_t* font, ::hb_face_t* face);
GI_INLINE_DECL void font_set_face (HarfBuzz::font_t font, HarfBuzz::face_t face) noexcept;

// void hb_font_set_funcs (hb_font_t* font, hb_font_funcs_t* klass, void* font_data, hb_destroy_func_t destroy);
// void hb_font_set_funcs (::hb_font_t* font, ::hb_font_funcs_t* klass, void* font_data,  destroy);
// SKIP; destroy type  not supported

// void hb_font_set_funcs_data (hb_font_t* font, void* font_data, hb_destroy_func_t destroy);
// void hb_font_set_funcs_data (::hb_font_t* font, void* font_data,  destroy);
// SKIP; destroy type  not supported

// void hb_font_set_parent (hb_font_t* font, hb_font_t* parent);
// void hb_font_set_parent (::hb_font_t* font, ::hb_font_t* parent);
GI_INLINE_DECL void font_set_parent (HarfBuzz::font_t font, HarfBuzz::font_t parent) noexcept;

// void hb_font_set_ppem (hb_font_t* font, unsigned int x_ppem, unsigned int y_ppem);
// void hb_font_set_ppem (::hb_font_t* font, guint x_ppem, guint y_ppem);
GI_INLINE_DECL void font_set_ppem (HarfBuzz::font_t font, guint x_ppem, guint y_ppem) noexcept;

// void hb_font_set_ptem (hb_font_t* font, float ptem);
// void hb_font_set_ptem (::hb_font_t* font, gfloat ptem);
GI_INLINE_DECL void font_set_ptem (HarfBuzz::font_t font, gfloat ptem) noexcept;

// void hb_font_set_scale (hb_font_t* font, int x_scale, int y_scale);
// void hb_font_set_scale (::hb_font_t* font, gint x_scale, gint y_scale);
GI_INLINE_DECL void font_set_scale (HarfBuzz::font_t font, gint x_scale, gint y_scale) noexcept;

// hb_bool_t hb_font_set_user_data (hb_font_t* font, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_font_set_user_data (::hb_font_t* font, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// void hb_font_set_var_coords_design (hb_font_t* font, const float* coords, unsigned int coords_length);
// void hb_font_set_var_coords_design (::hb_font_t* font, const gfloat* coords, guint coords_length);
GI_INLINE_DECL void font_set_var_coords_design (HarfBuzz::font_t font, gfloat * coords, guint coords_length) noexcept;

// void hb_font_set_var_coords_normalized (hb_font_t* font, const int* coords, unsigned int coords_length);
// void hb_font_set_var_coords_normalized (::hb_font_t* font, const gint* coords, guint coords_length);
GI_INLINE_DECL void font_set_var_coords_normalized (HarfBuzz::font_t font, gint * coords, guint coords_length) noexcept;

// void hb_font_set_var_named_instance (hb_font_t* font, unsigned instance_index);
// void hb_font_set_var_named_instance (::hb_font_t* font, guint instance_index);
GI_INLINE_DECL void font_set_var_named_instance (HarfBuzz::font_t font, guint instance_index) noexcept;

// void hb_font_set_variations (hb_font_t* font, const hb_variation_t* variations, unsigned int variations_length);
// void hb_font_set_variations (::hb_font_t* font, const ::hb_variation_t** variations, guint variations_length);
// SKIP; inconsistent in variations pointer depth (1 vs 2)

// void hb_font_subtract_glyph_origin_for_direction (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// void hb_font_subtract_glyph_origin_for_direction (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
GI_INLINE_DECL void font_subtract_glyph_origin_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept;

// FAILURE on hb_ft_face_create; No such node (<xmlattr>.name)
// FAILURE on hb_ft_face_create_cached; No such node (<xmlattr>.name)
// FAILURE on hb_ft_face_create_referenced; No such node (<xmlattr>.name)
// void hb_ft_font_changed (hb_font_t* font);
// void hb_ft_font_changed (::hb_font_t* font);
GI_INLINE_DECL void ft_font_changed (HarfBuzz::font_t font) noexcept;

// FAILURE on hb_ft_font_create; No such node (<xmlattr>.name)
// FAILURE on hb_ft_font_create_referenced; No such node (<xmlattr>.name)
// FAILURE on hb_ft_font_get_face; No such node (<xmlattr>.name)
// int hb_ft_font_get_load_flags (hb_font_t* font);
// gint hb_ft_font_get_load_flags (::hb_font_t* font);
GI_INLINE_DECL gint ft_font_get_load_flags (HarfBuzz::font_t font) noexcept;

// FAILURE on hb_ft_font_lock_face; No such node (<xmlattr>.name)
// void hb_ft_font_set_funcs (hb_font_t* font);
// void hb_ft_font_set_funcs (::hb_font_t* font);
GI_INLINE_DECL void ft_font_set_funcs (HarfBuzz::font_t font) noexcept;

// void hb_ft_font_set_load_flags (hb_font_t* font, int load_flags);
// void hb_ft_font_set_load_flags (::hb_font_t* font, gint load_flags);
GI_INLINE_DECL void ft_font_set_load_flags (HarfBuzz::font_t font, gint load_flags) noexcept;

// void hb_ft_font_unlock_face (hb_font_t* font);
// void hb_ft_font_unlock_face (::hb_font_t* font);
GI_INLINE_DECL void ft_font_unlock_face (HarfBuzz::font_t font) noexcept;

// hb_blob_t* hb_glib_blob_create (GBytes* gbytes);
// ::hb_blob_t* hb_glib_blob_create (::GBytes* gbytes);
GI_INLINE_DECL HarfBuzz::blob_t glib_blob_create (GLib::Bytes gbytes) noexcept;

// hb_unicode_funcs_t* hb_glib_get_unicode_funcs ();
// ::hb_unicode_funcs_t* hb_glib_get_unicode_funcs ();
GI_INLINE_DECL HarfBuzz::unicode_funcs_t glib_get_unicode_funcs () noexcept;

// GUnicodeScript hb_glib_script_from_script (hb_script_t script);
// ::GUnicodeScript hb_glib_script_from_script (::hb_script_t script);
GI_INLINE_DECL GLib::UnicodeScript glib_script_from_script (HarfBuzz::script_t script) noexcept;

// hb_script_t hb_glib_script_to_script (GUnicodeScript script);
// ::hb_script_t hb_glib_script_to_script (::GUnicodeScript script);
GI_INLINE_DECL HarfBuzz::script_t glib_script_to_script (GLib::UnicodeScript script) noexcept;

// hb_glyph_flags_t hb_glyph_info_get_glyph_flags (const hb_glyph_info_t* info);
// ::hb_glyph_flags_t hb_glyph_info_get_glyph_flags (const ::hb_glyph_info_t* info);
GI_INLINE_DECL HarfBuzz::glyph_flags_t glyph_info_get_glyph_flags (const HarfBuzz::glyph_info_t & info) noexcept;

// FAILURE on hb_graphite2_face_get_gr_face; No such node (<xmlattr>.name)
// hb_language_t hb_language_from_string (const char* str, int len);
//  hb_language_from_string (const guint8* str, gint len);
// SKIP;  type  not supported

// hb_language_t hb_language_get_default ();
//  hb_language_get_default ();
// SKIP;  type  not supported

// const char* hb_language_to_string (hb_language_t language);
// const char* hb_language_to_string ( language);
// SKIP; language type  not supported

// hb_bool_t hb_map_allocation_successful (const hb_map_t* map);
// ::hb_bool_t hb_map_allocation_successful (const ::hb_map_t* map);
GI_INLINE_DECL HarfBuzz::bool_t map_allocation_successful (const HarfBuzz::map_t & map) noexcept;

// void hb_map_clear (hb_map_t* map);
// void hb_map_clear (::hb_map_t* map);
GI_INLINE_DECL void map_clear (HarfBuzz::map_t map) noexcept;

// hb_map_t* hb_map_create ();
// ::hb_map_t* hb_map_create ();
GI_INLINE_DECL HarfBuzz::map_t map_create () noexcept;

// void hb_map_del (hb_map_t* map, hb_codepoint_t key);
// void hb_map_del (::hb_map_t* map, ::hb_codepoint_t key);
GI_INLINE_DECL void map_del (HarfBuzz::map_t map, ::hb_codepoint_t key) noexcept;

// void hb_map_destroy (hb_map_t* map);
// void hb_map_destroy (::hb_map_t* map);
GI_INLINE_DECL void map_destroy (HarfBuzz::map_t map) noexcept;

// hb_codepoint_t hb_map_get (const hb_map_t* map, hb_codepoint_t key);
// ::hb_codepoint_t hb_map_get (const ::hb_map_t* map, ::hb_codepoint_t key);
GI_INLINE_DECL HarfBuzz::codepoint_t map_get (const HarfBuzz::map_t & map, ::hb_codepoint_t key) noexcept;

// hb_map_t* hb_map_get_empty ();
// ::hb_map_t* hb_map_get_empty ();
GI_INLINE_DECL HarfBuzz::map_t map_get_empty () noexcept;

// unsigned int hb_map_get_population (const hb_map_t* map);
// guint hb_map_get_population (const ::hb_map_t* map);
GI_INLINE_DECL guint map_get_population (const HarfBuzz::map_t & map) noexcept;

// void* hb_map_get_user_data (hb_map_t* map, hb_user_data_key_t* key);
// void* hb_map_get_user_data (::hb_map_t* map, ::hb_user_data_key_t* key);
GI_INLINE_DECL gpointer map_get_user_data (HarfBuzz::map_t map, HarfBuzz::user_data_key_t key) noexcept;

// hb_bool_t hb_map_has (const hb_map_t* map, hb_codepoint_t key);
// ::hb_bool_t hb_map_has (const ::hb_map_t* map, ::hb_codepoint_t key);
GI_INLINE_DECL HarfBuzz::bool_t map_has (const HarfBuzz::map_t & map, ::hb_codepoint_t key) noexcept;

// hb_bool_t hb_map_is_empty (const hb_map_t* map);
// ::hb_bool_t hb_map_is_empty (const ::hb_map_t* map);
GI_INLINE_DECL HarfBuzz::bool_t map_is_empty (const HarfBuzz::map_t & map) noexcept;

// hb_map_t* hb_map_reference (hb_map_t* map);
// ::hb_map_t* hb_map_reference (::hb_map_t* map);
GI_INLINE_DECL HarfBuzz::map_t map_reference (HarfBuzz::map_t map) noexcept;

// void hb_map_set (hb_map_t* map, hb_codepoint_t key, hb_codepoint_t value);
// void hb_map_set (::hb_map_t* map, ::hb_codepoint_t key, ::hb_codepoint_t value);
GI_INLINE_DECL void map_set (HarfBuzz::map_t map, ::hb_codepoint_t key, ::hb_codepoint_t value) noexcept;

// hb_bool_t hb_map_set_user_data (hb_map_t* map, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_map_set_user_data (::hb_map_t* map, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// unsigned int hb_ot_color_glyph_get_layers (hb_face_t* face, hb_codepoint_t glyph, unsigned int start_offset, unsigned int* layer_count, hb_ot_color_layer_t* layers);
// guint hb_ot_color_glyph_get_layers (::hb_face_t* face, ::hb_codepoint_t glyph, guint start_offset, guint* layer_count, ::hb_ot_color_layer_t** layers);
// SKIP; inconsistent out layers pointer depth (1 vs 2)

// hb_blob_t* hb_ot_color_glyph_reference_png (hb_font_t* font, hb_codepoint_t glyph);
// ::hb_blob_t* hb_ot_color_glyph_reference_png (::hb_font_t* font, ::hb_codepoint_t glyph);
GI_INLINE_DECL HarfBuzz::blob_t ot_color_glyph_reference_png (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept;

// hb_blob_t* hb_ot_color_glyph_reference_svg (hb_face_t* face, hb_codepoint_t glyph);
// ::hb_blob_t* hb_ot_color_glyph_reference_svg (::hb_face_t* face, ::hb_codepoint_t glyph);
GI_INLINE_DECL HarfBuzz::blob_t ot_color_glyph_reference_svg (HarfBuzz::face_t face, ::hb_codepoint_t glyph) noexcept;

// hb_bool_t hb_ot_color_has_layers (hb_face_t* face);
// ::hb_bool_t hb_ot_color_has_layers (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::bool_t ot_color_has_layers (HarfBuzz::face_t face) noexcept;

// hb_bool_t hb_ot_color_has_palettes (hb_face_t* face);
// ::hb_bool_t hb_ot_color_has_palettes (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::bool_t ot_color_has_palettes (HarfBuzz::face_t face) noexcept;

// hb_bool_t hb_ot_color_has_png (hb_face_t* face);
// ::hb_bool_t hb_ot_color_has_png (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::bool_t ot_color_has_png (HarfBuzz::face_t face) noexcept;

// hb_bool_t hb_ot_color_has_svg (hb_face_t* face);
// ::hb_bool_t hb_ot_color_has_svg (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::bool_t ot_color_has_svg (HarfBuzz::face_t face) noexcept;

// hb_ot_name_id_t hb_ot_color_palette_color_get_name_id (hb_face_t* face, unsigned int color_index);
// ::hb_ot_name_id_t hb_ot_color_palette_color_get_name_id (::hb_face_t* face, guint color_index);
GI_INLINE_DECL HarfBuzz::ot_name_id_t ot_color_palette_color_get_name_id (HarfBuzz::face_t face, guint color_index) noexcept;

// unsigned int hb_ot_color_palette_get_colors (hb_face_t* face, unsigned int palette_index, unsigned int start_offset, unsigned int* color_count, hb_color_t* colors);
// guint hb_ot_color_palette_get_colors (::hb_face_t* face, guint palette_index, guint start_offset, guint* color_count, ::hb_color_t** colors);
GI_INLINE_DECL guint ot_color_palette_get_colors (HarfBuzz::face_t face, guint palette_index, guint start_offset, std::vector<HarfBuzz::color_t> & colors) noexcept;

// unsigned int hb_ot_color_palette_get_count (hb_face_t* face);
// guint hb_ot_color_palette_get_count (::hb_face_t* face);
GI_INLINE_DECL guint ot_color_palette_get_count (HarfBuzz::face_t face) noexcept;

// hb_ot_color_palette_flags_t hb_ot_color_palette_get_flags (hb_face_t* face, unsigned int palette_index);
// ::hb_ot_color_palette_flags_t hb_ot_color_palette_get_flags (::hb_face_t* face, guint palette_index);
GI_INLINE_DECL HarfBuzz::ot_color_palette_flags_t ot_color_palette_get_flags (HarfBuzz::face_t face, guint palette_index) noexcept;

// hb_ot_name_id_t hb_ot_color_palette_get_name_id (hb_face_t* face, unsigned int palette_index);
// ::hb_ot_name_id_t hb_ot_color_palette_get_name_id (::hb_face_t* face, guint palette_index);
GI_INLINE_DECL HarfBuzz::ot_name_id_t ot_color_palette_get_name_id (HarfBuzz::face_t face, guint palette_index) noexcept;

// void hb_ot_font_set_funcs (hb_font_t* font);
// void hb_ot_font_set_funcs (::hb_font_t* font);
GI_INLINE_DECL void ot_font_set_funcs (HarfBuzz::font_t font) noexcept;

// void hb_ot_layout_collect_features (hb_face_t* face, hb_tag_t table_tag, const hb_tag_t* scripts, const hb_tag_t* languages, const hb_tag_t* features, hb_set_t* feature_indexes);
// void hb_ot_layout_collect_features (::hb_face_t* face, ::hb_tag_t table_tag, const ::hb_tag_t scripts, const ::hb_tag_t languages, const ::hb_tag_t features, ::hb_set_t* feature_indexes);
// SKIP; inconsistent in features pointer depth (1 vs 0), inconsistent in languages pointer depth (1 vs 0), inconsistent in scripts pointer depth (1 vs 0)

// void hb_ot_layout_collect_lookups (hb_face_t* face, hb_tag_t table_tag, const hb_tag_t* scripts, const hb_tag_t* languages, const hb_tag_t* features, hb_set_t* lookup_indexes);
// void hb_ot_layout_collect_lookups (::hb_face_t* face, ::hb_tag_t table_tag, const ::hb_tag_t scripts, const ::hb_tag_t languages, const ::hb_tag_t features, ::hb_set_t* lookup_indexes);
// SKIP; inconsistent in features pointer depth (1 vs 0), inconsistent in languages pointer depth (1 vs 0), inconsistent in scripts pointer depth (1 vs 0)

// unsigned int hb_ot_layout_feature_get_characters (hb_face_t* face, hb_tag_t table_tag, unsigned int feature_index, unsigned int start_offset, unsigned int* char_count, hb_codepoint_t* characters);
// guint hb_ot_layout_feature_get_characters (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, guint start_offset, guint* char_count, ::hb_codepoint_t* characters);
GI_INLINE_DECL guint ot_layout_feature_get_characters (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint feature_index, guint start_offset, guint char_count, HarfBuzz::codepoint_t * characters) noexcept;

// unsigned int hb_ot_layout_feature_get_lookups (hb_face_t* face, hb_tag_t table_tag, unsigned int feature_index, unsigned int start_offset, unsigned int* lookup_count, unsigned int* lookup_indexes);
// guint hb_ot_layout_feature_get_lookups (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, guint start_offset, guint* lookup_count, guint** lookup_indexes);
GI_INLINE_DECL guint ot_layout_feature_get_lookups (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint feature_index, guint start_offset, std::vector<guint> & lookup_indexes) noexcept;

// hb_bool_t hb_ot_layout_feature_get_name_ids (hb_face_t* face, hb_tag_t table_tag, unsigned int feature_index, hb_ot_name_id_t* label_id, hb_ot_name_id_t* tooltip_id, hb_ot_name_id_t* sample_id, unsigned int* num_named_parameters, hb_ot_name_id_t* first_param_id);
// ::hb_bool_t hb_ot_layout_feature_get_name_ids (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, ::hb_ot_name_id_t* label_id, ::hb_ot_name_id_t* tooltip_id, ::hb_ot_name_id_t* sample_id, guint* num_named_parameters, ::hb_ot_name_id_t* first_param_id);
GI_INLINE_DECL HarfBuzz::bool_t ot_layout_feature_get_name_ids (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint feature_index, HarfBuzz::ot_name_id_t * label_id = nullptr, HarfBuzz::ot_name_id_t * tooltip_id = nullptr, HarfBuzz::ot_name_id_t * sample_id = nullptr, guint * num_named_parameters = nullptr, HarfBuzz::ot_name_id_t * first_param_id = nullptr) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::ot_name_id_t, HarfBuzz::ot_name_id_t, HarfBuzz::ot_name_id_t, guint, HarfBuzz::ot_name_id_t> ot_layout_feature_get_name_ids (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint feature_index) noexcept;

// unsigned int hb_ot_layout_feature_with_variations_get_lookups (hb_face_t* face, hb_tag_t table_tag, unsigned int feature_index, unsigned int variations_index, unsigned int start_offset, unsigned int* lookup_count, unsigned int* lookup_indexes);
// guint hb_ot_layout_feature_with_variations_get_lookups (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, guint variations_index, guint start_offset, guint* lookup_count, guint** lookup_indexes);
GI_INLINE_DECL guint ot_layout_feature_with_variations_get_lookups (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint feature_index, guint variations_index, guint start_offset, std::vector<guint> & lookup_indexes) noexcept;

// unsigned int hb_ot_layout_get_attach_points (hb_face_t* face, hb_codepoint_t glyph, unsigned int start_offset, unsigned int* point_count, unsigned int* point_array);
// guint hb_ot_layout_get_attach_points (::hb_face_t* face, ::hb_codepoint_t glyph, guint start_offset, guint* point_count, guint** point_array);
GI_INLINE_DECL guint ot_layout_get_attach_points (HarfBuzz::face_t face, ::hb_codepoint_t glyph, guint start_offset, std::vector<guint> & point_array) noexcept;

// hb_bool_t hb_ot_layout_get_baseline (hb_font_t* font, hb_ot_layout_baseline_tag_t baseline_tag, hb_direction_t direction, hb_tag_t script_tag, hb_tag_t language_tag, hb_position_t* coord);
// ::hb_bool_t hb_ot_layout_get_baseline (::hb_font_t* font, ::hb_ot_layout_baseline_tag_t baseline_tag, ::hb_direction_t direction, ::hb_tag_t script_tag, ::hb_tag_t language_tag, ::hb_position_t* coord);
GI_INLINE_DECL HarfBuzz::bool_t ot_layout_get_baseline (HarfBuzz::font_t font, HarfBuzz::ot_layout_baseline_tag_t baseline_tag, HarfBuzz::direction_t direction, ::hb_tag_t script_tag, ::hb_tag_t language_tag, HarfBuzz::position_t & coord) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t> ot_layout_get_baseline (HarfBuzz::font_t font, HarfBuzz::ot_layout_baseline_tag_t baseline_tag, HarfBuzz::direction_t direction, ::hb_tag_t script_tag, ::hb_tag_t language_tag) noexcept;

// hb_ot_layout_glyph_class_t hb_ot_layout_get_glyph_class (hb_face_t* face, hb_codepoint_t glyph);
// ::hb_ot_layout_glyph_class_t hb_ot_layout_get_glyph_class (::hb_face_t* face, ::hb_codepoint_t glyph);
GI_INLINE_DECL HarfBuzz::ot_layout_glyph_class_t ot_layout_get_glyph_class (HarfBuzz::face_t face, ::hb_codepoint_t glyph) noexcept;

// void hb_ot_layout_get_glyphs_in_class (hb_face_t* face, hb_ot_layout_glyph_class_t klass, hb_set_t* glyphs);
// void hb_ot_layout_get_glyphs_in_class (::hb_face_t* face, ::hb_ot_layout_glyph_class_t klass, ::hb_set_t* glyphs);
GI_INLINE_DECL void ot_layout_get_glyphs_in_class (HarfBuzz::face_t face, HarfBuzz::ot_layout_glyph_class_t klass, HarfBuzz::set_t & glyphs) noexcept;
GI_INLINE_DECL HarfBuzz::set_t ot_layout_get_glyphs_in_class (HarfBuzz::face_t face, HarfBuzz::ot_layout_glyph_class_t klass) noexcept;

// unsigned int hb_ot_layout_get_ligature_carets (hb_font_t* font, hb_direction_t direction, hb_codepoint_t glyph, unsigned int start_offset, unsigned int* caret_count, hb_position_t* caret_array);
// guint hb_ot_layout_get_ligature_carets (::hb_font_t* font, ::hb_direction_t direction, ::hb_codepoint_t glyph, guint start_offset, guint* caret_count, ::hb_position_t** caret_array);
GI_INLINE_DECL guint ot_layout_get_ligature_carets (HarfBuzz::font_t font, HarfBuzz::direction_t direction, ::hb_codepoint_t glyph, guint start_offset, std::vector<HarfBuzz::position_t> & caret_array) noexcept;

// hb_bool_t hb_ot_layout_get_size_params (hb_face_t* face, unsigned int* design_size, unsigned int* subfamily_id, hb_ot_name_id_t* subfamily_name_id, unsigned int* range_start, unsigned int* range_end);
// ::hb_bool_t hb_ot_layout_get_size_params (::hb_face_t* face, guint* design_size, guint* subfamily_id, ::hb_ot_name_id_t* subfamily_name_id, guint* range_start, guint* range_end);
GI_INLINE_DECL HarfBuzz::bool_t ot_layout_get_size_params (HarfBuzz::face_t face, guint & design_size, guint & subfamily_id, HarfBuzz::ot_name_id_t & subfamily_name_id, guint & range_start, guint & range_end) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, guint, guint, HarfBuzz::ot_name_id_t, guint, guint> ot_layout_get_size_params (HarfBuzz::face_t face) noexcept;

// hb_bool_t hb_ot_layout_has_glyph_classes (hb_face_t* face);
// ::hb_bool_t hb_ot_layout_has_glyph_classes (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::bool_t ot_layout_has_glyph_classes (HarfBuzz::face_t face) noexcept;

// hb_bool_t hb_ot_layout_has_positioning (hb_face_t* face);
// ::hb_bool_t hb_ot_layout_has_positioning (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::bool_t ot_layout_has_positioning (HarfBuzz::face_t face) noexcept;

// hb_bool_t hb_ot_layout_has_substitution (hb_face_t* face);
// ::hb_bool_t hb_ot_layout_has_substitution (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::bool_t ot_layout_has_substitution (HarfBuzz::face_t face) noexcept;

// hb_bool_t hb_ot_layout_language_find_feature (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int language_index, hb_tag_t feature_tag, unsigned int* feature_index);
// ::hb_bool_t hb_ot_layout_language_find_feature (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, ::hb_tag_t feature_tag, guint* feature_index);
GI_INLINE_DECL HarfBuzz::bool_t ot_layout_language_find_feature (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, ::hb_tag_t feature_tag, guint & feature_index) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, guint> ot_layout_language_find_feature (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, ::hb_tag_t feature_tag) noexcept;

// unsigned int hb_ot_layout_language_get_feature_indexes (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int language_index, unsigned int start_offset, unsigned int* feature_count, unsigned int* feature_indexes);
// guint hb_ot_layout_language_get_feature_indexes (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint start_offset, guint* feature_count, guint** feature_indexes);
GI_INLINE_DECL guint ot_layout_language_get_feature_indexes (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint start_offset, std::vector<guint> & feature_indexes) noexcept;

// unsigned int hb_ot_layout_language_get_feature_tags (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int language_index, unsigned int start_offset, unsigned int* feature_count, hb_tag_t* feature_tags);
// guint hb_ot_layout_language_get_feature_tags (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint start_offset, guint* feature_count, ::hb_tag_t** feature_tags);
GI_INLINE_DECL guint ot_layout_language_get_feature_tags (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint start_offset, std::vector<HarfBuzz::tag_t> & feature_tags) noexcept;

// hb_bool_t hb_ot_layout_language_get_required_feature (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int language_index, unsigned int* feature_index, hb_tag_t* feature_tag);
// ::hb_bool_t hb_ot_layout_language_get_required_feature (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint* feature_index, ::hb_tag_t* feature_tag);
GI_INLINE_DECL HarfBuzz::bool_t ot_layout_language_get_required_feature (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint & feature_index, HarfBuzz::tag_t & feature_tag) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, guint, HarfBuzz::tag_t> ot_layout_language_get_required_feature (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index) noexcept;

// hb_bool_t hb_ot_layout_language_get_required_feature_index (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int language_index, unsigned int* feature_index);
// ::hb_bool_t hb_ot_layout_language_get_required_feature_index (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint* feature_index);
GI_INLINE_DECL HarfBuzz::bool_t ot_layout_language_get_required_feature_index (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint & feature_index) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, guint> ot_layout_language_get_required_feature_index (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index) noexcept;

// void hb_ot_layout_lookup_collect_glyphs (hb_face_t* face, hb_tag_t table_tag, unsigned int lookup_index, hb_set_t* glyphs_before, hb_set_t* glyphs_input, hb_set_t* glyphs_after, hb_set_t* glyphs_output);
// void hb_ot_layout_lookup_collect_glyphs (::hb_face_t* face, ::hb_tag_t table_tag, guint lookup_index, ::hb_set_t* glyphs_before, ::hb_set_t* glyphs_input, ::hb_set_t* glyphs_after, ::hb_set_t* glyphs_output);
GI_INLINE_DECL void ot_layout_lookup_collect_glyphs (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint lookup_index, HarfBuzz::set_t & glyphs_before, HarfBuzz::set_t & glyphs_input, HarfBuzz::set_t & glyphs_after, HarfBuzz::set_t & glyphs_output) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::set_t, HarfBuzz::set_t, HarfBuzz::set_t, HarfBuzz::set_t> ot_layout_lookup_collect_glyphs (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint lookup_index) noexcept;

// unsigned hb_ot_layout_lookup_get_glyph_alternates (hb_face_t* face, unsigned lookup_index, hb_codepoint_t glyph, unsigned start_offset, unsigned* alternate_count, hb_codepoint_t* alternate_glyphs);
// guint hb_ot_layout_lookup_get_glyph_alternates (::hb_face_t* face, guint lookup_index, ::hb_codepoint_t glyph, guint start_offset, guint* alternate_count, ::hb_codepoint_t* alternate_glyphs);
GI_INLINE_DECL guint ot_layout_lookup_get_glyph_alternates (HarfBuzz::face_t face, guint lookup_index, ::hb_codepoint_t glyph, guint start_offset, guint alternate_count, HarfBuzz::codepoint_t * alternate_glyphs) noexcept;

// void hb_ot_layout_lookup_substitute_closure (hb_face_t* face, unsigned int lookup_index, hb_set_t* glyphs);
// void hb_ot_layout_lookup_substitute_closure (::hb_face_t* face, guint lookup_index, ::hb_set_t* glyphs);
GI_INLINE_DECL void ot_layout_lookup_substitute_closure (HarfBuzz::face_t face, guint lookup_index, HarfBuzz::set_t & glyphs) noexcept;
GI_INLINE_DECL HarfBuzz::set_t ot_layout_lookup_substitute_closure (HarfBuzz::face_t face, guint lookup_index) noexcept;

// hb_bool_t hb_ot_layout_lookup_would_substitute (hb_face_t* face, unsigned int lookup_index, const hb_codepoint_t* glyphs, unsigned int glyphs_length, hb_bool_t zero_context);
// ::hb_bool_t hb_ot_layout_lookup_would_substitute (::hb_face_t* face, guint lookup_index, const ::hb_codepoint_t glyphs, guint glyphs_length, ::hb_bool_t zero_context);
// SKIP; inconsistent in glyphs pointer depth (1 vs 0)

// void hb_ot_layout_lookups_substitute_closure (hb_face_t* face, const hb_set_t* lookups, hb_set_t* glyphs);
// void hb_ot_layout_lookups_substitute_closure (::hb_face_t* face, const ::hb_set_t* lookups, ::hb_set_t* glyphs);
GI_INLINE_DECL void ot_layout_lookups_substitute_closure (HarfBuzz::face_t face, const HarfBuzz::set_t & lookups, HarfBuzz::set_t & glyphs) noexcept;
GI_INLINE_DECL HarfBuzz::set_t ot_layout_lookups_substitute_closure (HarfBuzz::face_t face, const HarfBuzz::set_t & lookups) noexcept;

// unsigned int hb_ot_layout_script_get_language_tags (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int start_offset, unsigned int* language_count, hb_tag_t* language_tags);
// guint hb_ot_layout_script_get_language_tags (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint start_offset, guint* language_count, ::hb_tag_t** language_tags);
GI_INLINE_DECL guint ot_layout_script_get_language_tags (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint start_offset, std::vector<HarfBuzz::tag_t> & language_tags) noexcept;

// hb_bool_t hb_ot_layout_script_select_language (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int language_count, const hb_tag_t* language_tags, unsigned int* language_index);
// ::hb_bool_t hb_ot_layout_script_select_language (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_count, const ::hb_tag_t language_tags, guint* language_index);
// SKIP; inconsistent in language_tags pointer depth (1 vs 0)

// hb_bool_t hb_ot_layout_table_choose_script (hb_face_t* face, hb_tag_t table_tag, const hb_tag_t* script_tags, unsigned int* script_index, hb_tag_t* chosen_script);
// ::hb_bool_t hb_ot_layout_table_choose_script (::hb_face_t* face, ::hb_tag_t table_tag, const ::hb_tag_t script_tags, guint* script_index, ::hb_tag_t* chosen_script);
// SKIP; inconsistent in script_tags pointer depth (1 vs 0)

// hb_bool_t hb_ot_layout_table_find_feature_variations (hb_face_t* face, hb_tag_t table_tag, const int* coords, unsigned int num_coords, unsigned int* variations_index);
// ::hb_bool_t hb_ot_layout_table_find_feature_variations (::hb_face_t* face, ::hb_tag_t table_tag, const gint coords, guint num_coords, guint* variations_index);
// SKIP; inconsistent in coords pointer depth (1 vs 0)

// hb_bool_t hb_ot_layout_table_find_script (hb_face_t* face, hb_tag_t table_tag, hb_tag_t script_tag, unsigned int* script_index);
// ::hb_bool_t hb_ot_layout_table_find_script (::hb_face_t* face, ::hb_tag_t table_tag, ::hb_tag_t script_tag, guint* script_index);
GI_INLINE_DECL HarfBuzz::bool_t ot_layout_table_find_script (HarfBuzz::face_t face, ::hb_tag_t table_tag, ::hb_tag_t script_tag, guint & script_index) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, guint> ot_layout_table_find_script (HarfBuzz::face_t face, ::hb_tag_t table_tag, ::hb_tag_t script_tag) noexcept;

// unsigned int hb_ot_layout_table_get_feature_tags (hb_face_t* face, hb_tag_t table_tag, unsigned int start_offset, unsigned int* feature_count, hb_tag_t* feature_tags);
// guint hb_ot_layout_table_get_feature_tags (::hb_face_t* face, ::hb_tag_t table_tag, guint start_offset, guint* feature_count, ::hb_tag_t** feature_tags);
GI_INLINE_DECL guint ot_layout_table_get_feature_tags (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint start_offset, std::vector<HarfBuzz::tag_t> & feature_tags) noexcept;

// unsigned int hb_ot_layout_table_get_lookup_count (hb_face_t* face, hb_tag_t table_tag);
// guint hb_ot_layout_table_get_lookup_count (::hb_face_t* face, ::hb_tag_t table_tag);
GI_INLINE_DECL guint ot_layout_table_get_lookup_count (HarfBuzz::face_t face, ::hb_tag_t table_tag) noexcept;

// unsigned int hb_ot_layout_table_get_script_tags (hb_face_t* face, hb_tag_t table_tag, unsigned int start_offset, unsigned int* script_count, hb_tag_t* script_tags);
// guint hb_ot_layout_table_get_script_tags (::hb_face_t* face, ::hb_tag_t table_tag, guint start_offset, guint* script_count, ::hb_tag_t** script_tags);
GI_INLINE_DECL guint ot_layout_table_get_script_tags (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint start_offset, std::vector<HarfBuzz::tag_t> & script_tags) noexcept;

// hb_bool_t hb_ot_layout_table_select_script (hb_face_t* face, hb_tag_t table_tag, unsigned int script_count, const hb_tag_t* script_tags, unsigned int* script_index, hb_tag_t* chosen_script);
// ::hb_bool_t hb_ot_layout_table_select_script (::hb_face_t* face, ::hb_tag_t table_tag, guint script_count, const ::hb_tag_t script_tags, guint* script_index, ::hb_tag_t* chosen_script);
// SKIP; inconsistent in script_tags pointer depth (1 vs 0)

// hb_position_t hb_ot_math_get_constant (hb_font_t* font, hb_ot_math_constant_t constant);
// ::hb_position_t hb_ot_math_get_constant (::hb_font_t* font, ::hb_ot_math_constant_t constant);
GI_INLINE_DECL HarfBuzz::position_t ot_math_get_constant (HarfBuzz::font_t font, HarfBuzz::ot_math_constant_t constant) noexcept;

// unsigned int hb_ot_math_get_glyph_assembly (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, unsigned int start_offset, unsigned int* parts_count, hb_ot_math_glyph_part_t* parts, hb_position_t* italics_correction);
// guint hb_ot_math_get_glyph_assembly (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, guint start_offset, guint* parts_count, ::hb_ot_math_glyph_part_t** parts, ::hb_position_t* italics_correction);
// SKIP; inconsistent out parts pointer depth (1 vs 2)

// hb_position_t hb_ot_math_get_glyph_italics_correction (hb_font_t* font, hb_codepoint_t glyph);
// ::hb_position_t hb_ot_math_get_glyph_italics_correction (::hb_font_t* font, ::hb_codepoint_t glyph);
GI_INLINE_DECL HarfBuzz::position_t ot_math_get_glyph_italics_correction (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept;

// hb_position_t hb_ot_math_get_glyph_kerning (hb_font_t* font, hb_codepoint_t glyph, hb_ot_math_kern_t kern, hb_position_t correction_height);
// ::hb_position_t hb_ot_math_get_glyph_kerning (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_ot_math_kern_t kern, ::hb_position_t correction_height);
GI_INLINE_DECL HarfBuzz::position_t ot_math_get_glyph_kerning (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::ot_math_kern_t kern, ::hb_position_t correction_height) noexcept;

// hb_position_t hb_ot_math_get_glyph_top_accent_attachment (hb_font_t* font, hb_codepoint_t glyph);
// ::hb_position_t hb_ot_math_get_glyph_top_accent_attachment (::hb_font_t* font, ::hb_codepoint_t glyph);
GI_INLINE_DECL HarfBuzz::position_t ot_math_get_glyph_top_accent_attachment (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept;

// unsigned int hb_ot_math_get_glyph_variants (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, unsigned int start_offset, unsigned int* variants_count, hb_ot_math_glyph_variant_t* variants);
// guint hb_ot_math_get_glyph_variants (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, guint start_offset, guint* variants_count, ::hb_ot_math_glyph_variant_t** variants);
// SKIP; inconsistent out variants pointer depth (1 vs 2)

// hb_position_t hb_ot_math_get_min_connector_overlap (hb_font_t* font, hb_direction_t direction);
// ::hb_position_t hb_ot_math_get_min_connector_overlap (::hb_font_t* font, ::hb_direction_t direction);
GI_INLINE_DECL HarfBuzz::position_t ot_math_get_min_connector_overlap (HarfBuzz::font_t font, HarfBuzz::direction_t direction) noexcept;

// hb_bool_t hb_ot_math_has_data (hb_face_t* face);
// ::hb_bool_t hb_ot_math_has_data (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::bool_t ot_math_has_data (HarfBuzz::face_t face) noexcept;

// hb_bool_t hb_ot_math_is_glyph_extended_shape (hb_face_t* face, hb_codepoint_t glyph);
// ::hb_bool_t hb_ot_math_is_glyph_extended_shape (::hb_face_t* face, ::hb_codepoint_t glyph);
GI_INLINE_DECL HarfBuzz::bool_t ot_math_is_glyph_extended_shape (HarfBuzz::face_t face, ::hb_codepoint_t glyph) noexcept;

// unsigned int hb_ot_meta_get_entry_tags (hb_face_t* face, unsigned int start_offset, unsigned int* entries_count, hb_ot_meta_tag_t* entries);
// guint hb_ot_meta_get_entry_tags (::hb_face_t* face, guint start_offset, guint* entries_count, ::hb_ot_meta_tag_t* entries);
GI_INLINE_DECL guint ot_meta_get_entry_tags (HarfBuzz::face_t face, guint start_offset, guint entries_count, HarfBuzz::ot_meta_tag_t * entries) noexcept;

// hb_blob_t* hb_ot_meta_reference_entry (hb_face_t* face, hb_ot_meta_tag_t meta_tag);
// ::hb_blob_t* hb_ot_meta_reference_entry (::hb_face_t* face, ::hb_ot_meta_tag_t meta_tag);
GI_INLINE_DECL HarfBuzz::blob_t ot_meta_reference_entry (HarfBuzz::face_t face, HarfBuzz::ot_meta_tag_t meta_tag) noexcept;

// hb_bool_t hb_ot_metrics_get_position (hb_font_t* font, hb_ot_metrics_tag_t metrics_tag, hb_position_t* position);
// ::hb_bool_t hb_ot_metrics_get_position (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag, ::hb_position_t* position);
GI_INLINE_DECL HarfBuzz::bool_t ot_metrics_get_position (HarfBuzz::font_t font, HarfBuzz::ot_metrics_tag_t metrics_tag, HarfBuzz::position_t * position = nullptr) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t> ot_metrics_get_position (HarfBuzz::font_t font, HarfBuzz::ot_metrics_tag_t metrics_tag) noexcept;

// float hb_ot_metrics_get_variation (hb_font_t* font, hb_ot_metrics_tag_t metrics_tag);
// gfloat hb_ot_metrics_get_variation (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag);
GI_INLINE_DECL gfloat ot_metrics_get_variation (HarfBuzz::font_t font, HarfBuzz::ot_metrics_tag_t metrics_tag) noexcept;

// hb_position_t hb_ot_metrics_get_x_variation (hb_font_t* font, hb_ot_metrics_tag_t metrics_tag);
// ::hb_position_t hb_ot_metrics_get_x_variation (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag);
GI_INLINE_DECL HarfBuzz::position_t ot_metrics_get_x_variation (HarfBuzz::font_t font, HarfBuzz::ot_metrics_tag_t metrics_tag) noexcept;

// hb_position_t hb_ot_metrics_get_y_variation (hb_font_t* font, hb_ot_metrics_tag_t metrics_tag);
// ::hb_position_t hb_ot_metrics_get_y_variation (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag);
GI_INLINE_DECL HarfBuzz::position_t ot_metrics_get_y_variation (HarfBuzz::font_t font, HarfBuzz::ot_metrics_tag_t metrics_tag) noexcept;

// unsigned int hb_ot_name_get_utf16 (hb_face_t* face, hb_ot_name_id_t name_id, hb_language_t language, unsigned int* text_size, uint16_t* text);
// guint hb_ot_name_get_utf16 (::hb_face_t* face, ::hb_ot_name_id_t name_id,  language, guint* text_size, guint16* text);
// SKIP; language type  not supported

// unsigned int hb_ot_name_get_utf32 (hb_face_t* face, hb_ot_name_id_t name_id, hb_language_t language, unsigned int* text_size, uint32_t* text);
// guint hb_ot_name_get_utf32 (::hb_face_t* face, ::hb_ot_name_id_t name_id,  language, guint* text_size, guint32* text);
// SKIP; language type  not supported

// unsigned int hb_ot_name_get_utf8 (hb_face_t* face, hb_ot_name_id_t name_id, hb_language_t language, unsigned int* text_size, char* text);
// guint hb_ot_name_get_utf8 (::hb_face_t* face, ::hb_ot_name_id_t name_id,  language, guint* text_size, char** text);
// SKIP; language type  not supported

// const hb_ot_name_entry_t* hb_ot_name_list_names (hb_face_t* face, unsigned int* num_entries);
// const ::hb_ot_name_entry_t** hb_ot_name_list_names (::hb_face_t* face, guint* num_entries);
// SKIP; inconsistent return  pointer depth (1 vs 2)

// void hb_ot_shape_glyphs_closure (hb_font_t* font, hb_buffer_t* buffer, const hb_feature_t* features, unsigned int num_features, hb_set_t* glyphs);
// void hb_ot_shape_glyphs_closure (::hb_font_t* font, ::hb_buffer_t* buffer, const ::hb_feature_t** features, guint num_features, ::hb_set_t* glyphs);
// SKIP; inconsistent in features pointer depth (1 vs 2)

// hb_tag_t hb_ot_tag_from_language (hb_language_t language);
// ::hb_tag_t hb_ot_tag_from_language ( language);
// SKIP; language type  not supported

// hb_language_t hb_ot_tag_to_language (hb_tag_t tag);
//  hb_ot_tag_to_language (::hb_tag_t tag);
// SKIP;  type  not supported

// hb_script_t hb_ot_tag_to_script (hb_tag_t tag);
// ::hb_script_t hb_ot_tag_to_script (::hb_tag_t tag);
GI_INLINE_DECL HarfBuzz::script_t ot_tag_to_script (::hb_tag_t tag) noexcept;

// void hb_ot_tags_from_script (hb_script_t script, hb_tag_t* script_tag_1, hb_tag_t* script_tag_2);
// void hb_ot_tags_from_script (::hb_script_t script, ::hb_tag_t script_tag_1, ::hb_tag_t script_tag_2);
// SKIP; inconsistent in script_tag_2 pointer depth (1 vs 0), inconsistent in script_tag_1 pointer depth (1 vs 0)

// void hb_ot_tags_from_script_and_language (hb_script_t script, hb_language_t language, unsigned int* script_count, hb_tag_t* script_tags, unsigned int* language_count, hb_tag_t* language_tags);
// void hb_ot_tags_from_script_and_language (::hb_script_t script,  language, guint script_count, ::hb_tag_t* script_tags, guint language_count, ::hb_tag_t* language_tags);
// SKIP; inconsistent in language_count pointer depth (1 vs 0), inconsistent in script_count pointer depth (1 vs 0), language type  not supported

// void hb_ot_tags_to_script_and_language (hb_tag_t script_tag, hb_tag_t language_tag, hb_script_t* script, hb_language_t* language);
// void hb_ot_tags_to_script_and_language (::hb_tag_t script_tag, ::hb_tag_t language_tag, ::hb_script_t script,  language);
// SKIP; language type  not supported, inconsistent in script pointer depth (1 vs 0)

// hb_bool_t hb_ot_var_find_axis_info (hb_face_t* face, hb_tag_t axis_tag, hb_ot_var_axis_info_t* axis_info);
// ::hb_bool_t hb_ot_var_find_axis_info (::hb_face_t* face, ::hb_tag_t axis_tag, ::hb_ot_var_axis_info_t* axis_info);
GI_INLINE_DECL HarfBuzz::bool_t ot_var_find_axis_info (HarfBuzz::face_t face, ::hb_tag_t axis_tag, HarfBuzz::ot_var_axis_info_t & axis_info) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::ot_var_axis_info_t> ot_var_find_axis_info (HarfBuzz::face_t face, ::hb_tag_t axis_tag) noexcept;

// unsigned int hb_ot_var_get_axis_count (hb_face_t* face);
// guint hb_ot_var_get_axis_count (::hb_face_t* face);
GI_INLINE_DECL guint ot_var_get_axis_count (HarfBuzz::face_t face) noexcept;

// unsigned int hb_ot_var_get_axis_infos (hb_face_t* face, unsigned int start_offset, unsigned int* axes_count, hb_ot_var_axis_info_t* axes_array);
// guint hb_ot_var_get_axis_infos (::hb_face_t* face, guint start_offset, guint* axes_count, ::hb_ot_var_axis_info_t** axes_array);
// SKIP; inconsistent out axes_array pointer depth (1 vs 2)

// unsigned int hb_ot_var_get_named_instance_count (hb_face_t* face);
// guint hb_ot_var_get_named_instance_count (::hb_face_t* face);
GI_INLINE_DECL guint ot_var_get_named_instance_count (HarfBuzz::face_t face) noexcept;

// hb_bool_t hb_ot_var_has_data (hb_face_t* face);
// ::hb_bool_t hb_ot_var_has_data (::hb_face_t* face);
GI_INLINE_DECL HarfBuzz::bool_t ot_var_has_data (HarfBuzz::face_t face) noexcept;

// unsigned int hb_ot_var_named_instance_get_design_coords (hb_face_t* face, unsigned int instance_index, unsigned int* coords_length, float* coords);
// guint hb_ot_var_named_instance_get_design_coords (::hb_face_t* face, guint instance_index, guint* coords_length, gfloat** coords);
GI_INLINE_DECL guint ot_var_named_instance_get_design_coords (HarfBuzz::face_t face, guint instance_index, std::vector<gfloat> & coords) noexcept;

// hb_ot_name_id_t hb_ot_var_named_instance_get_postscript_name_id (hb_face_t* face, unsigned int instance_index);
// ::hb_ot_name_id_t hb_ot_var_named_instance_get_postscript_name_id (::hb_face_t* face, guint instance_index);
GI_INLINE_DECL HarfBuzz::ot_name_id_t ot_var_named_instance_get_postscript_name_id (HarfBuzz::face_t face, guint instance_index) noexcept;

// hb_ot_name_id_t hb_ot_var_named_instance_get_subfamily_name_id (hb_face_t* face, unsigned int instance_index);
// ::hb_ot_name_id_t hb_ot_var_named_instance_get_subfamily_name_id (::hb_face_t* face, guint instance_index);
GI_INLINE_DECL HarfBuzz::ot_name_id_t ot_var_named_instance_get_subfamily_name_id (HarfBuzz::face_t face, guint instance_index) noexcept;

// void hb_ot_var_normalize_coords (hb_face_t* face, unsigned int coords_length, const float* design_coords, int* normalized_coords);
// void hb_ot_var_normalize_coords (::hb_face_t* face, guint coords_length, const gfloat design_coords, gint* normalized_coords);
// SKIP; inconsistent in design_coords pointer depth (1 vs 0)

// void hb_ot_var_normalize_variations (hb_face_t* face, const hb_variation_t* variations, unsigned int variations_length, int* coords, unsigned int coords_length);
// void hb_ot_var_normalize_variations (::hb_face_t* face, const ::hb_variation_t* variations, guint variations_length, gint** coords, guint coords_length);
GI_INLINE_DECL void ot_var_normalize_variations (HarfBuzz::face_t face, const HarfBuzz::variation_t & variations, guint variations_length, gint * coords, guint coords_length) noexcept;

// hb_script_t hb_script_from_iso15924_tag (hb_tag_t tag);
// ::hb_script_t hb_script_from_iso15924_tag (::hb_tag_t tag);
GI_INLINE_DECL HarfBuzz::script_t script_from_iso15924_tag (::hb_tag_t tag) noexcept;

// hb_script_t hb_script_from_string (const char* str, int len);
// ::hb_script_t hb_script_from_string (const guint8* str, gint len);
GI_INLINE_DECL HarfBuzz::script_t script_from_string (guint8 * str, gint len) noexcept;

// hb_direction_t hb_script_get_horizontal_direction (hb_script_t script);
// ::hb_direction_t hb_script_get_horizontal_direction (::hb_script_t script);
GI_INLINE_DECL HarfBuzz::direction_t script_get_horizontal_direction (HarfBuzz::script_t script) noexcept;

// hb_tag_t hb_script_to_iso15924_tag (hb_script_t script);
// ::hb_tag_t hb_script_to_iso15924_tag (::hb_script_t script);
GI_INLINE_DECL HarfBuzz::tag_t script_to_iso15924_tag (HarfBuzz::script_t script) noexcept;

// hb_bool_t hb_segment_properties_equal (const hb_segment_properties_t* a, const hb_segment_properties_t* b);
// ::hb_bool_t hb_segment_properties_equal (const ::hb_segment_properties_t* a, const ::hb_segment_properties_t* b);
GI_INLINE_DECL HarfBuzz::bool_t segment_properties_equal (const HarfBuzz::segment_properties_t & a, const HarfBuzz::segment_properties_t & b) noexcept;

// unsigned int hb_segment_properties_hash (const hb_segment_properties_t* p);
// guint hb_segment_properties_hash (const ::hb_segment_properties_t* p);
GI_INLINE_DECL guint segment_properties_hash (const HarfBuzz::segment_properties_t & p) noexcept;

// void hb_set_add (hb_set_t* set, hb_codepoint_t codepoint);
// void hb_set_add (::hb_set_t* set, ::hb_codepoint_t codepoint);
GI_INLINE_DECL void set_add (HarfBuzz::set_t set, ::hb_codepoint_t codepoint) noexcept;

// void hb_set_add_range (hb_set_t* set, hb_codepoint_t first, hb_codepoint_t last);
// void hb_set_add_range (::hb_set_t* set, ::hb_codepoint_t first, ::hb_codepoint_t last);
GI_INLINE_DECL void set_add_range (HarfBuzz::set_t set, ::hb_codepoint_t first, ::hb_codepoint_t last) noexcept;

// hb_bool_t hb_set_allocation_successful (const hb_set_t* set);
// ::hb_bool_t hb_set_allocation_successful (const ::hb_set_t* set);
GI_INLINE_DECL HarfBuzz::bool_t set_allocation_successful (const HarfBuzz::set_t & set) noexcept;

// void hb_set_clear (hb_set_t* set);
// void hb_set_clear (::hb_set_t* set);
GI_INLINE_DECL void set_clear (HarfBuzz::set_t set) noexcept;

// hb_set_t* hb_set_create ();
// ::hb_set_t* hb_set_create ();
GI_INLINE_DECL HarfBuzz::set_t set_create () noexcept;

// void hb_set_del (hb_set_t* set, hb_codepoint_t codepoint);
// void hb_set_del (::hb_set_t* set, ::hb_codepoint_t codepoint);
GI_INLINE_DECL void set_del (HarfBuzz::set_t set, ::hb_codepoint_t codepoint) noexcept;

// void hb_set_del_range (hb_set_t* set, hb_codepoint_t first, hb_codepoint_t last);
// void hb_set_del_range (::hb_set_t* set, ::hb_codepoint_t first, ::hb_codepoint_t last);
GI_INLINE_DECL void set_del_range (HarfBuzz::set_t set, ::hb_codepoint_t first, ::hb_codepoint_t last) noexcept;

// void hb_set_destroy (hb_set_t* set);
// void hb_set_destroy (::hb_set_t* set);
GI_INLINE_DECL void set_destroy (HarfBuzz::set_t set) noexcept;

// hb_set_t* hb_set_get_empty ();
// ::hb_set_t* hb_set_get_empty ();
GI_INLINE_DECL HarfBuzz::set_t set_get_empty () noexcept;

// hb_codepoint_t hb_set_get_max (const hb_set_t* set);
// ::hb_codepoint_t hb_set_get_max (const ::hb_set_t* set);
GI_INLINE_DECL HarfBuzz::codepoint_t set_get_max (const HarfBuzz::set_t & set) noexcept;

// hb_codepoint_t hb_set_get_min (const hb_set_t* set);
// ::hb_codepoint_t hb_set_get_min (const ::hb_set_t* set);
GI_INLINE_DECL HarfBuzz::codepoint_t set_get_min (const HarfBuzz::set_t & set) noexcept;

// unsigned int hb_set_get_population (const hb_set_t* set);
// guint hb_set_get_population (const ::hb_set_t* set);
GI_INLINE_DECL guint set_get_population (const HarfBuzz::set_t & set) noexcept;

// void* hb_set_get_user_data (hb_set_t* set, hb_user_data_key_t* key);
// void* hb_set_get_user_data (::hb_set_t* set, ::hb_user_data_key_t* key);
GI_INLINE_DECL gpointer set_get_user_data (HarfBuzz::set_t set, HarfBuzz::user_data_key_t key) noexcept;

// hb_bool_t hb_set_has (const hb_set_t* set, hb_codepoint_t codepoint);
// ::hb_bool_t hb_set_has (const ::hb_set_t* set, ::hb_codepoint_t codepoint);
GI_INLINE_DECL HarfBuzz::bool_t set_has (const HarfBuzz::set_t & set, ::hb_codepoint_t codepoint) noexcept;

// void hb_set_intersect (hb_set_t* set, const hb_set_t* other);
// void hb_set_intersect (::hb_set_t* set, const ::hb_set_t* other);
GI_INLINE_DECL void set_intersect (HarfBuzz::set_t set, const HarfBuzz::set_t & other) noexcept;

// hb_bool_t hb_set_is_empty (const hb_set_t* set);
// ::hb_bool_t hb_set_is_empty (const ::hb_set_t* set);
GI_INLINE_DECL HarfBuzz::bool_t set_is_empty (const HarfBuzz::set_t & set) noexcept;

// hb_bool_t hb_set_is_equal (const hb_set_t* set, const hb_set_t* other);
// ::hb_bool_t hb_set_is_equal (const ::hb_set_t* set, const ::hb_set_t* other);
GI_INLINE_DECL HarfBuzz::bool_t set_is_equal (const HarfBuzz::set_t & set, const HarfBuzz::set_t & other) noexcept;

// hb_bool_t hb_set_is_subset (const hb_set_t* set, const hb_set_t* larger_set);
// ::hb_bool_t hb_set_is_subset (const ::hb_set_t* set, const ::hb_set_t* larger_set);
GI_INLINE_DECL HarfBuzz::bool_t set_is_subset (const HarfBuzz::set_t & set, const HarfBuzz::set_t & larger_set) noexcept;

// hb_bool_t hb_set_next (const hb_set_t* set, hb_codepoint_t* codepoint);
// ::hb_bool_t hb_set_next (const ::hb_set_t* set, ::hb_codepoint_t* codepoint);
GI_INLINE_DECL HarfBuzz::bool_t set_next (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & codepoint) noexcept;

// hb_bool_t hb_set_next_range (const hb_set_t* set, hb_codepoint_t* first, hb_codepoint_t* last);
// ::hb_bool_t hb_set_next_range (const ::hb_set_t* set, ::hb_codepoint_t* first, ::hb_codepoint_t* last);
GI_INLINE_DECL HarfBuzz::bool_t set_next_range (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & first, HarfBuzz::codepoint_t & last) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> set_next_range (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & last) noexcept;

// hb_bool_t hb_set_previous (const hb_set_t* set, hb_codepoint_t* codepoint);
// ::hb_bool_t hb_set_previous (const ::hb_set_t* set, ::hb_codepoint_t* codepoint);
GI_INLINE_DECL HarfBuzz::bool_t set_previous (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & codepoint) noexcept;

// hb_bool_t hb_set_previous_range (const hb_set_t* set, hb_codepoint_t* first, hb_codepoint_t* last);
// ::hb_bool_t hb_set_previous_range (const ::hb_set_t* set, ::hb_codepoint_t* first, ::hb_codepoint_t* last);
GI_INLINE_DECL HarfBuzz::bool_t set_previous_range (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & first, HarfBuzz::codepoint_t & last) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> set_previous_range (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & first) noexcept;

// hb_set_t* hb_set_reference (hb_set_t* set);
// ::hb_set_t* hb_set_reference (::hb_set_t* set);
GI_INLINE_DECL HarfBuzz::set_t set_reference (HarfBuzz::set_t set) noexcept;

// void hb_set_set (hb_set_t* set, const hb_set_t* other);
// void hb_set_set (::hb_set_t* set, const ::hb_set_t* other);
GI_INLINE_DECL void set_set (HarfBuzz::set_t set, const HarfBuzz::set_t & other) noexcept;

// hb_bool_t hb_set_set_user_data (hb_set_t* set, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_set_set_user_data (::hb_set_t* set, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// void hb_set_subtract (hb_set_t* set, const hb_set_t* other);
// void hb_set_subtract (::hb_set_t* set, const ::hb_set_t* other);
GI_INLINE_DECL void set_subtract (HarfBuzz::set_t set, const HarfBuzz::set_t & other) noexcept;

// void hb_set_symmetric_difference (hb_set_t* set, const hb_set_t* other);
// void hb_set_symmetric_difference (::hb_set_t* set, const ::hb_set_t* other);
GI_INLINE_DECL void set_symmetric_difference (HarfBuzz::set_t set, const HarfBuzz::set_t & other) noexcept;

// void hb_set_union (hb_set_t* set, const hb_set_t* other);
// void hb_set_union (::hb_set_t* set, const ::hb_set_t* other);
GI_INLINE_DECL void set_union (HarfBuzz::set_t set, const HarfBuzz::set_t & other) noexcept;

// void hb_shape (hb_font_t* font, hb_buffer_t* buffer, const hb_feature_t* features, unsigned int num_features);
// void hb_shape (::hb_font_t* font, ::hb_buffer_t* buffer, const ::hb_feature_t** features, guint num_features);
// SKIP; inconsistent in features pointer depth (1 vs 2)

// hb_bool_t hb_shape_full (hb_font_t* font, hb_buffer_t* buffer, const hb_feature_t* features, unsigned int num_features, const char* const* shaper_list);
// ::hb_bool_t hb_shape_full (::hb_font_t* font, ::hb_buffer_t* buffer, const ::hb_feature_t** features, guint num_features, const char** shaper_list);
// SKIP; inconsistent in features pointer depth (1 vs 2)

// const char** hb_shape_list_shapers ();
// const char** hb_shape_list_shapers ();
GI_INLINE_DECL std::vector<std::string> shape_list_shapers () noexcept;

// hb_shape_plan_t* hb_shape_plan_create (hb_face_t* face, const hb_segment_properties_t* props, const hb_feature_t* user_features, unsigned int num_user_features, const char* const* shaper_list);
// ::hb_shape_plan_t* hb_shape_plan_create (::hb_face_t* face, const ::hb_segment_properties_t* props, const ::hb_feature_t** user_features, guint num_user_features, const char** shaper_list);
// SKIP; inconsistent in user_features pointer depth (1 vs 2)

// hb_shape_plan_t* hb_shape_plan_create2 (hb_face_t* face, const hb_segment_properties_t* props, const hb_feature_t* user_features, unsigned int num_user_features, const int* coords, unsigned int num_coords, const char* const* shaper_list);
// ::hb_shape_plan_t* hb_shape_plan_create2 (::hb_face_t* face, const ::hb_segment_properties_t* props, const ::hb_feature_t** user_features, guint num_user_features, const gint* coords, guint num_coords, const char** shaper_list);
// SKIP; inconsistent in user_features pointer depth (1 vs 2)

// hb_shape_plan_t* hb_shape_plan_create_cached (hb_face_t* face, const hb_segment_properties_t* props, const hb_feature_t* user_features, unsigned int num_user_features, const char* const* shaper_list);
// ::hb_shape_plan_t* hb_shape_plan_create_cached (::hb_face_t* face, const ::hb_segment_properties_t* props, const ::hb_feature_t** user_features, guint num_user_features, const char** shaper_list);
// SKIP; inconsistent in user_features pointer depth (1 vs 2)

// hb_shape_plan_t* hb_shape_plan_create_cached2 (hb_face_t* face, const hb_segment_properties_t* props, const hb_feature_t* user_features, unsigned int num_user_features, const int* coords, unsigned int num_coords, const char* const* shaper_list);
// ::hb_shape_plan_t* hb_shape_plan_create_cached2 (::hb_face_t* face, const ::hb_segment_properties_t* props, const ::hb_feature_t** user_features, guint num_user_features, const gint* coords, guint num_coords, const char** shaper_list);
// SKIP; inconsistent in user_features pointer depth (1 vs 2)

// void hb_shape_plan_destroy (hb_shape_plan_t* shape_plan);
// void hb_shape_plan_destroy (::hb_shape_plan_t* shape_plan);
GI_INLINE_DECL void shape_plan_destroy (HarfBuzz::shape_plan_t shape_plan) noexcept;

// hb_bool_t hb_shape_plan_execute (hb_shape_plan_t* shape_plan, hb_font_t* font, hb_buffer_t* buffer, const hb_feature_t* features, unsigned int num_features);
// ::hb_bool_t hb_shape_plan_execute (::hb_shape_plan_t* shape_plan, ::hb_font_t* font, ::hb_buffer_t* buffer, const ::hb_feature_t** features, guint num_features);
// SKIP; inconsistent in features pointer depth (1 vs 2)

// hb_shape_plan_t* hb_shape_plan_get_empty ();
// ::hb_shape_plan_t* hb_shape_plan_get_empty ();
GI_INLINE_DECL HarfBuzz::shape_plan_t shape_plan_get_empty () noexcept;

// const char* hb_shape_plan_get_shaper (hb_shape_plan_t* shape_plan);
// const char* hb_shape_plan_get_shaper (::hb_shape_plan_t* shape_plan);
GI_INLINE_DECL std::string shape_plan_get_shaper (HarfBuzz::shape_plan_t shape_plan) noexcept;

// void* hb_shape_plan_get_user_data (hb_shape_plan_t* shape_plan, hb_user_data_key_t* key);
// void* hb_shape_plan_get_user_data (::hb_shape_plan_t* shape_plan, ::hb_user_data_key_t* key);
GI_INLINE_DECL gpointer shape_plan_get_user_data (HarfBuzz::shape_plan_t shape_plan, HarfBuzz::user_data_key_t key) noexcept;

// hb_shape_plan_t* hb_shape_plan_reference (hb_shape_plan_t* shape_plan);
// ::hb_shape_plan_t* hb_shape_plan_reference (::hb_shape_plan_t* shape_plan);
GI_INLINE_DECL HarfBuzz::shape_plan_t shape_plan_reference (HarfBuzz::shape_plan_t shape_plan) noexcept;

// hb_bool_t hb_shape_plan_set_user_data (hb_shape_plan_t* shape_plan, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_shape_plan_set_user_data (::hb_shape_plan_t* shape_plan, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// hb_tag_t hb_tag_from_string (const char* str, int len);
// ::hb_tag_t hb_tag_from_string (const guint8* str, gint len);
GI_INLINE_DECL HarfBuzz::tag_t tag_from_string (guint8 * str, gint len) noexcept;

// void hb_tag_to_string (hb_tag_t tag, char* buf);
// void hb_tag_to_string (::hb_tag_t tag, guint8* buf);
GI_INLINE_DECL void tag_to_string (::hb_tag_t tag, guint8 buf[4]) noexcept;

// hb_unicode_combining_class_t hb_unicode_combining_class (hb_unicode_funcs_t* ufuncs, hb_codepoint_t unicode);
// ::hb_unicode_combining_class_t hb_unicode_combining_class (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode);
GI_INLINE_DECL HarfBuzz::unicode_combining_class_t unicode_combining_class (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t unicode) noexcept;

// hb_bool_t hb_unicode_compose (hb_unicode_funcs_t* ufuncs, hb_codepoint_t a, hb_codepoint_t b, hb_codepoint_t* ab);
// ::hb_bool_t hb_unicode_compose (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t a, ::hb_codepoint_t b, ::hb_codepoint_t* ab);
GI_INLINE_DECL HarfBuzz::bool_t unicode_compose (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t a, ::hb_codepoint_t b, HarfBuzz::codepoint_t & ab) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> unicode_compose (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t a, ::hb_codepoint_t b) noexcept;

// hb_bool_t hb_unicode_decompose (hb_unicode_funcs_t* ufuncs, hb_codepoint_t ab, hb_codepoint_t* a, hb_codepoint_t* b);
// ::hb_bool_t hb_unicode_decompose (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t ab, ::hb_codepoint_t* a, ::hb_codepoint_t* b);
GI_INLINE_DECL HarfBuzz::bool_t unicode_decompose (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t ab, HarfBuzz::codepoint_t & a, HarfBuzz::codepoint_t & b) noexcept;
GI_INLINE_DECL std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t, HarfBuzz::codepoint_t> unicode_decompose (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t ab) noexcept;

// hb_unicode_funcs_t* hb_unicode_funcs_create (hb_unicode_funcs_t* parent);
// ::hb_unicode_funcs_t* hb_unicode_funcs_create (::hb_unicode_funcs_t* parent);
GI_INLINE_DECL HarfBuzz::unicode_funcs_t unicode_funcs_create (HarfBuzz::unicode_funcs_t parent) noexcept;
GI_INLINE_DECL HarfBuzz::unicode_funcs_t unicode_funcs_create () noexcept;

// void hb_unicode_funcs_destroy (hb_unicode_funcs_t* ufuncs);
// void hb_unicode_funcs_destroy (::hb_unicode_funcs_t* ufuncs);
GI_INLINE_DECL void unicode_funcs_destroy (HarfBuzz::unicode_funcs_t ufuncs) noexcept;

// hb_unicode_funcs_t* hb_unicode_funcs_get_default ();
// ::hb_unicode_funcs_t* hb_unicode_funcs_get_default ();
GI_INLINE_DECL HarfBuzz::unicode_funcs_t unicode_funcs_get_default () noexcept;

// hb_unicode_funcs_t* hb_unicode_funcs_get_empty ();
// ::hb_unicode_funcs_t* hb_unicode_funcs_get_empty ();
GI_INLINE_DECL HarfBuzz::unicode_funcs_t unicode_funcs_get_empty () noexcept;

// hb_unicode_funcs_t* hb_unicode_funcs_get_parent (hb_unicode_funcs_t* ufuncs);
// ::hb_unicode_funcs_t* hb_unicode_funcs_get_parent (::hb_unicode_funcs_t* ufuncs);
GI_INLINE_DECL HarfBuzz::unicode_funcs_t unicode_funcs_get_parent (HarfBuzz::unicode_funcs_t ufuncs) noexcept;

// void* hb_unicode_funcs_get_user_data (hb_unicode_funcs_t* ufuncs, hb_user_data_key_t* key);
// void* hb_unicode_funcs_get_user_data (::hb_unicode_funcs_t* ufuncs, ::hb_user_data_key_t* key);
GI_INLINE_DECL gpointer unicode_funcs_get_user_data (HarfBuzz::unicode_funcs_t ufuncs, HarfBuzz::user_data_key_t key) noexcept;

// hb_bool_t hb_unicode_funcs_is_immutable (hb_unicode_funcs_t* ufuncs);
// ::hb_bool_t hb_unicode_funcs_is_immutable (::hb_unicode_funcs_t* ufuncs);
GI_INLINE_DECL HarfBuzz::bool_t unicode_funcs_is_immutable (HarfBuzz::unicode_funcs_t ufuncs) noexcept;

// void hb_unicode_funcs_make_immutable (hb_unicode_funcs_t* ufuncs);
// void hb_unicode_funcs_make_immutable (::hb_unicode_funcs_t* ufuncs);
GI_INLINE_DECL void unicode_funcs_make_immutable (HarfBuzz::unicode_funcs_t ufuncs) noexcept;

// hb_unicode_funcs_t* hb_unicode_funcs_reference (hb_unicode_funcs_t* ufuncs);
// ::hb_unicode_funcs_t* hb_unicode_funcs_reference (::hb_unicode_funcs_t* ufuncs);
GI_INLINE_DECL HarfBuzz::unicode_funcs_t unicode_funcs_reference (HarfBuzz::unicode_funcs_t ufuncs) noexcept;

// void hb_unicode_funcs_set_combining_class_func (hb_unicode_funcs_t* ufuncs, hb_unicode_combining_class_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_unicode_funcs_set_combining_class_func (::hb_unicode_funcs_t* ufuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_unicode_funcs_set_compose_func (hb_unicode_funcs_t* ufuncs, hb_unicode_compose_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_unicode_funcs_set_compose_func (::hb_unicode_funcs_t* ufuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_unicode_funcs_set_decompose_func (hb_unicode_funcs_t* ufuncs, hb_unicode_decompose_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_unicode_funcs_set_decompose_func (::hb_unicode_funcs_t* ufuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_unicode_funcs_set_general_category_func (hb_unicode_funcs_t* ufuncs, hb_unicode_general_category_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_unicode_funcs_set_general_category_func (::hb_unicode_funcs_t* ufuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_unicode_funcs_set_mirroring_func (hb_unicode_funcs_t* ufuncs, hb_unicode_mirroring_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_unicode_funcs_set_mirroring_func (::hb_unicode_funcs_t* ufuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_unicode_funcs_set_script_func (hb_unicode_funcs_t* ufuncs, hb_unicode_script_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_unicode_funcs_set_script_func (::hb_unicode_funcs_t* ufuncs,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// hb_bool_t hb_unicode_funcs_set_user_data (hb_unicode_funcs_t* ufuncs, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_unicode_funcs_set_user_data (::hb_unicode_funcs_t* ufuncs, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// hb_unicode_general_category_t hb_unicode_general_category (hb_unicode_funcs_t* ufuncs, hb_codepoint_t unicode);
// ::hb_unicode_general_category_t hb_unicode_general_category (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode);
GI_INLINE_DECL HarfBuzz::unicode_general_category_t unicode_general_category (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t unicode) noexcept;

// hb_codepoint_t hb_unicode_mirroring (hb_unicode_funcs_t* ufuncs, hb_codepoint_t unicode);
// ::hb_codepoint_t hb_unicode_mirroring (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode);
GI_INLINE_DECL HarfBuzz::codepoint_t unicode_mirroring (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t unicode) noexcept;

// hb_script_t hb_unicode_script (hb_unicode_funcs_t* ufuncs, hb_codepoint_t unicode);
// ::hb_script_t hb_unicode_script (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode);
GI_INLINE_DECL HarfBuzz::script_t unicode_script (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t unicode) noexcept;

// hb_bool_t hb_variation_from_string (const char* str, int len, hb_variation_t* variation);
// ::hb_bool_t hb_variation_from_string (const char* str, gint len, ::hb_variation_t* variation);
GI_INLINE_DECL HarfBuzz::bool_t variation_from_string (const std::string & str, gint len, HarfBuzz::variation_t variation) noexcept;

// void hb_variation_to_string (hb_variation_t* variation, char* buf, unsigned int size);
// void hb_variation_to_string (::hb_variation_t* variation, char* buf, guint size);
GI_INLINE_DECL void variation_to_string (HarfBuzz::variation_t variation, const std::string & buf, guint size) noexcept;

// void hb_version (unsigned int* major, unsigned int* minor, unsigned int* micro);
// void hb_version (guint* major, guint* minor, guint* micro);
GI_INLINE_DECL void version (guint & major, guint & minor, guint & micro) noexcept;
GI_INLINE_DECL std::tuple<guint, guint, guint> version () noexcept;

// hb_bool_t hb_version_atleast (unsigned int major, unsigned int minor, unsigned int micro);
// ::hb_bool_t hb_version_atleast (guint major, guint minor, guint micro);
GI_INLINE_DECL HarfBuzz::bool_t version_atleast (guint major, guint minor, guint micro) noexcept;

// const char* hb_version_string ();
// const char* hb_version_string ();
GI_INLINE_DECL std::string version_string () noexcept;

} // namespace HarfBuzz

} // namespace repository

} // namespace gi

#endif
