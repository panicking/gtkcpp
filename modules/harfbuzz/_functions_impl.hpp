// AUTO-GENERATED

#ifndef _GI_HARFBUZZ__FUNCTIONS_IMPL_HPP_
#define _GI_HARFBUZZ__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

// hb_blob_t* hb_blob_copy_writable_or_fail (hb_blob_t* blob);
// ::hb_blob_t* hb_blob_copy_writable_or_fail (::hb_blob_t* blob);
HarfBuzz::blob_t blob_copy_writable_or_fail (HarfBuzz::blob_t blob) noexcept
{
  typedef ::hb_blob_t* (*call_wrap_t) (::hb_blob_t* blob);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_copy_writable_or_fail;
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_blob_t*) (blob_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_blob_t* hb_blob_create (const char* data, unsigned int length, hb_memory_mode_t mode, void* user_data, hb_destroy_func_t destroy);
// ::hb_blob_t* hb_blob_create (const char* data, guint length, ::hb_memory_mode_t mode, void* user_data,  destroy);
// IGNORE; not introspectable, destroy type  not supported

// hb_blob_t* hb_blob_create_from_file (const char* file_name);
// ::hb_blob_t* hb_blob_create_from_file (const char* file_name);
HarfBuzz::blob_t blob_create_from_file (const std::string & file_name) noexcept
{
  typedef ::hb_blob_t* (*call_wrap_t) (const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_create_from_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_blob_t* hb_blob_create_sub_blob (hb_blob_t* parent, unsigned int offset, unsigned int length);
// ::hb_blob_t* hb_blob_create_sub_blob (::hb_blob_t* parent, guint offset, guint length);
HarfBuzz::blob_t blob_create_sub_blob (HarfBuzz::blob_t parent, guint offset, guint length) noexcept
{
  typedef ::hb_blob_t* (*call_wrap_t) (::hb_blob_t* parent, guint offset, guint length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_create_sub_blob;
  auto length_to_c = length;
  auto offset_to_c = offset;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_blob_t*) (parent_to_c), (guint) (offset_to_c), (guint) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_blob_destroy (hb_blob_t* blob);
// void hb_blob_destroy (::hb_blob_t* blob);
void blob_destroy (HarfBuzz::blob_t blob) noexcept
{
  typedef void (*call_wrap_t) (::hb_blob_t* blob);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_destroy;
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_blob_t*) (blob_to_c));
}

// const char* hb_blob_get_data (hb_blob_t* blob, unsigned int* length);
// const char** hb_blob_get_data (::hb_blob_t* blob, guint* length);
std::vector<std::string> blob_get_data (HarfBuzz::blob_t blob) noexcept
{
  typedef const char** (*call_wrap_t) (::hb_blob_t* blob, guint* length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_get_data;
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  guint length;
  std::vector<std::string> _temp_ret;
  auto _ret_o = call_wrap_v ((::hb_blob_t*) (blob_to_c), (guint*) (&length));
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_none, length, _temp_ret.data());
  return _temp_ret;
}

// char* hb_blob_get_data_writable (hb_blob_t* blob, unsigned int* length);
// char** hb_blob_get_data_writable (::hb_blob_t* blob, guint* length);
std::vector<std::string> blob_get_data_writable (HarfBuzz::blob_t blob) noexcept
{
  typedef char** (*call_wrap_t) (::hb_blob_t* blob, guint* length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_get_data_writable;
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  guint length;
  std::vector<std::string> _temp_ret;
  auto _ret_o = call_wrap_v ((::hb_blob_t*) (blob_to_c), (guint*) (&length));
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_none, length, _temp_ret.data());
  return _temp_ret;
}

// hb_blob_t* hb_blob_get_empty ();
// ::hb_blob_t* hb_blob_get_empty ();
HarfBuzz::blob_t blob_get_empty () noexcept
{
  typedef ::hb_blob_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_get_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// unsigned int hb_blob_get_length (hb_blob_t* blob);
// guint hb_blob_get_length (::hb_blob_t* blob);
guint blob_get_length (HarfBuzz::blob_t blob) noexcept
{
  typedef guint (*call_wrap_t) (::hb_blob_t* blob);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_get_length;
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_blob_t*) (blob_to_c));
  return _temp_ret;
}

// void* hb_blob_get_user_data (hb_blob_t* blob, hb_user_data_key_t* key);
// void* hb_blob_get_user_data (::hb_blob_t* blob, ::hb_user_data_key_t* key);
gpointer blob_get_user_data (HarfBuzz::blob_t blob, HarfBuzz::user_data_key_t key) noexcept
{
  typedef void* (*call_wrap_t) (::hb_blob_t* blob, ::hb_user_data_key_t* key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_get_user_data;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_blob_t*) (blob_to_c), (::hb_user_data_key_t*) (key_to_c));
  return _temp_ret;
}

// hb_bool_t hb_blob_is_immutable (hb_blob_t* blob);
// ::hb_bool_t hb_blob_is_immutable (::hb_blob_t* blob);
HarfBuzz::bool_t blob_is_immutable (HarfBuzz::blob_t blob) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_blob_t* blob);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_is_immutable;
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_blob_t*) (blob_to_c));
  return _temp_ret;
}

// void hb_blob_make_immutable (hb_blob_t* blob);
// void hb_blob_make_immutable (::hb_blob_t* blob);
void blob_make_immutable (HarfBuzz::blob_t blob) noexcept
{
  typedef void (*call_wrap_t) (::hb_blob_t* blob);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_make_immutable;
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_blob_t*) (blob_to_c));
}

// hb_blob_t* hb_blob_reference (hb_blob_t* blob);
// ::hb_blob_t* hb_blob_reference (::hb_blob_t* blob);
HarfBuzz::blob_t blob_reference (HarfBuzz::blob_t blob) noexcept
{
  typedef ::hb_blob_t* (*call_wrap_t) (::hb_blob_t* blob);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_blob_reference;
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_blob_t*) (blob_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_bool_t hb_blob_set_user_data (hb_blob_t* blob, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_blob_set_user_data (::hb_blob_t* blob, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// void hb_buffer_add (hb_buffer_t* buffer, hb_codepoint_t codepoint, unsigned int cluster);
// void hb_buffer_add (::hb_buffer_t* buffer, ::hb_codepoint_t codepoint, guint cluster);
void buffer_add (HarfBuzz::buffer_t buffer, ::hb_codepoint_t codepoint, guint cluster) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_codepoint_t codepoint, guint cluster);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_add;
  auto cluster_to_c = cluster;
  auto codepoint_to_c = codepoint;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_codepoint_t) (codepoint_to_c), (guint) (cluster_to_c));
}

// void hb_buffer_add_codepoints (hb_buffer_t* buffer, const hb_codepoint_t* text, int text_length, unsigned int item_offset, int item_length);
// void hb_buffer_add_codepoints (::hb_buffer_t* buffer, const ::hb_codepoint_t* text, gint text_length, guint item_offset, gint item_length);
void buffer_add_codepoints (HarfBuzz::buffer_t buffer, HarfBuzz::codepoint_t * text, gint text_length, guint item_offset, gint item_length) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, const ::hb_codepoint_t* text, gint text_length, guint item_offset, gint item_length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_add_codepoints;
  auto item_length_to_c = item_length;
  auto item_offset_to_c = item_offset;
  auto text_i = detail::make_list_unwrap_range (text, text_length, false);
  auto text_w = unwrap (text_i, gi::transfer_none, direction_in);
  auto text_to_c = text_w.gobj_(false);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (const ::hb_codepoint_t*) (text_to_c), (gint) (text_w.size()), (guint) (item_offset_to_c), (gint) (item_length_to_c));
}

// void hb_buffer_add_latin1 (hb_buffer_t* buffer, const uint8_t* text, int text_length, unsigned int item_offset, int item_length);
// void hb_buffer_add_latin1 (::hb_buffer_t* buffer, const guint8* text, gint text_length, guint item_offset, gint item_length);
void buffer_add_latin1 (HarfBuzz::buffer_t buffer, guint8 * text, gint text_length, guint item_offset, gint item_length) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, const guint8* text, gint text_length, guint item_offset, gint item_length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_add_latin1;
  auto item_length_to_c = item_length;
  auto item_offset_to_c = item_offset;
  auto text_i = detail::make_list_unwrap_range (text, text_length, false);
  auto text_w = unwrap (text_i, gi::transfer_none, direction_in);
  auto text_to_c = text_w.gobj_(false);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (const guint8*) (text_to_c), (gint) (text_w.size()), (guint) (item_offset_to_c), (gint) (item_length_to_c));
}

// void hb_buffer_add_utf16 (hb_buffer_t* buffer, const uint16_t* text, int text_length, unsigned int item_offset, int item_length);
// void hb_buffer_add_utf16 (::hb_buffer_t* buffer, const guint16* text, gint text_length, guint item_offset, gint item_length);
void buffer_add_utf16 (HarfBuzz::buffer_t buffer, guint16 * text, gint text_length, guint item_offset, gint item_length) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, const guint16* text, gint text_length, guint item_offset, gint item_length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_add_utf16;
  auto item_length_to_c = item_length;
  auto item_offset_to_c = item_offset;
  auto text_i = detail::make_list_unwrap_range (text, text_length, false);
  auto text_w = unwrap (text_i, gi::transfer_none, direction_in);
  auto text_to_c = text_w.gobj_(false);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (const guint16*) (text_to_c), (gint) (text_w.size()), (guint) (item_offset_to_c), (gint) (item_length_to_c));
}

// void hb_buffer_add_utf32 (hb_buffer_t* buffer, const uint32_t* text, int text_length, unsigned int item_offset, int item_length);
// void hb_buffer_add_utf32 (::hb_buffer_t* buffer, const guint32* text, gint text_length, guint item_offset, gint item_length);
void buffer_add_utf32 (HarfBuzz::buffer_t buffer, guint32 * text, gint text_length, guint item_offset, gint item_length) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, const guint32* text, gint text_length, guint item_offset, gint item_length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_add_utf32;
  auto item_length_to_c = item_length;
  auto item_offset_to_c = item_offset;
  auto text_i = detail::make_list_unwrap_range (text, text_length, false);
  auto text_w = unwrap (text_i, gi::transfer_none, direction_in);
  auto text_to_c = text_w.gobj_(false);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (const guint32*) (text_to_c), (gint) (text_w.size()), (guint) (item_offset_to_c), (gint) (item_length_to_c));
}

// void hb_buffer_add_utf8 (hb_buffer_t* buffer, const char* text, int text_length, unsigned int item_offset, int item_length);
// void hb_buffer_add_utf8 (::hb_buffer_t* buffer, const guint8* text, gint text_length, guint item_offset, gint item_length);
void buffer_add_utf8 (HarfBuzz::buffer_t buffer, guint8 * text, gint text_length, guint item_offset, gint item_length) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, const guint8* text, gint text_length, guint item_offset, gint item_length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_add_utf8;
  auto item_length_to_c = item_length;
  auto item_offset_to_c = item_offset;
  auto text_i = detail::make_list_unwrap_range (text, text_length, false);
  auto text_w = unwrap (text_i, gi::transfer_none, direction_in);
  auto text_to_c = text_w.gobj_(false);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (const guint8*) (text_to_c), (gint) (text_w.size()), (guint) (item_offset_to_c), (gint) (item_length_to_c));
}

// hb_bool_t hb_buffer_allocation_successful (hb_buffer_t* buffer);
// ::hb_bool_t hb_buffer_allocation_successful (::hb_buffer_t* buffer);
HarfBuzz::bool_t buffer_allocation_successful (HarfBuzz::buffer_t buffer) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_allocation_successful;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return _temp_ret;
}

// void hb_buffer_append (hb_buffer_t* buffer, hb_buffer_t* source, unsigned int start, unsigned int end);
// void hb_buffer_append (::hb_buffer_t* buffer, ::hb_buffer_t* source, guint start, guint end);
void buffer_append (HarfBuzz::buffer_t buffer, HarfBuzz::buffer_t source, guint start, guint end) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_buffer_t* source, guint start, guint end);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_append;
  auto end_to_c = end;
  auto start_to_c = start;
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_buffer_t*) (source_to_c), (guint) (start_to_c), (guint) (end_to_c));
}

// void hb_buffer_clear_contents (hb_buffer_t* buffer);
// void hb_buffer_clear_contents (::hb_buffer_t* buffer);
void buffer_clear_contents (HarfBuzz::buffer_t buffer) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_clear_contents;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
}

// hb_buffer_t* hb_buffer_create ();
// ::hb_buffer_t* hb_buffer_create ();
HarfBuzz::buffer_t buffer_create () noexcept
{
  typedef ::hb_buffer_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_create;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_bool_t hb_buffer_deserialize_glyphs (hb_buffer_t* buffer, const char* buf, int buf_len, const char** end_ptr, hb_font_t* font, hb_buffer_serialize_format_t format);
// ::hb_bool_t hb_buffer_deserialize_glyphs (::hb_buffer_t* buffer, const char** buf, gint buf_len, const char** end_ptr, ::hb_font_t* font, ::hb_buffer_serialize_format_t format);
HarfBuzz::bool_t buffer_deserialize_glyphs (HarfBuzz::buffer_t buffer, std::string * buf, gint buf_len, std::string & end_ptr, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_buffer_t* buffer, const char** buf, gint buf_len, const char** end_ptr, ::hb_font_t* font, ::hb_buffer_serialize_format_t format);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_deserialize_glyphs;
  auto format_to_c = gi::unwrap (format);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  const char* end_ptr_o {};
  auto buf_i = detail::make_list_unwrap_range (buf, buf_len, false);
  auto buf_w = unwrap (buf_i, gi::transfer_none, direction_in);
  auto buf_to_c = buf_w.gobj_(false);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (const char**) (buf_to_c), (gint) (buf_w.size()), (const char**) (&end_ptr_o), (::hb_font_t*) (font_to_c), (::hb_buffer_serialize_format_t) (format_to_c));
  end_ptr = gi::wrap (end_ptr_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, std::string> buffer_deserialize_glyphs (HarfBuzz::buffer_t buffer, std::string * buf, gint buf_len, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_buffer_t* buffer, const char** buf, gint buf_len, const char** end_ptr, ::hb_font_t* font, ::hb_buffer_serialize_format_t format);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_deserialize_glyphs;
  auto format_to_c = gi::unwrap (format);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  const char* end_ptr_o {};
  auto buf_i = detail::make_list_unwrap_range (buf, buf_len, false);
  auto buf_w = unwrap (buf_i, gi::transfer_none, direction_in);
  auto buf_to_c = buf_w.gobj_(false);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (const char**) (buf_to_c), (gint) (buf_w.size()), (const char**) (&end_ptr_o), (::hb_font_t*) (font_to_c), (::hb_buffer_serialize_format_t) (format_to_c));
  return std::make_tuple (_temp_ret, gi::wrap (end_ptr_o, gi::transfer_full, gi::direction_out));
}

// hb_bool_t hb_buffer_deserialize_unicode (hb_buffer_t* buffer, const char* buf, int buf_len, const char** end_ptr, hb_buffer_serialize_format_t format);
// ::hb_bool_t hb_buffer_deserialize_unicode (::hb_buffer_t* buffer, const char** buf, gint buf_len, const char** end_ptr, ::hb_buffer_serialize_format_t format);
HarfBuzz::bool_t buffer_deserialize_unicode (HarfBuzz::buffer_t buffer, std::string * buf, gint buf_len, std::string & end_ptr, HarfBuzz::buffer_serialize_format_t format) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_buffer_t* buffer, const char** buf, gint buf_len, const char** end_ptr, ::hb_buffer_serialize_format_t format);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_deserialize_unicode;
  auto format_to_c = gi::unwrap (format);
  const char* end_ptr_o {};
  auto buf_i = detail::make_list_unwrap_range (buf, buf_len, false);
  auto buf_w = unwrap (buf_i, gi::transfer_none, direction_in);
  auto buf_to_c = buf_w.gobj_(false);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (const char**) (buf_to_c), (gint) (buf_w.size()), (const char**) (&end_ptr_o), (::hb_buffer_serialize_format_t) (format_to_c));
  end_ptr = gi::wrap (end_ptr_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, std::string> buffer_deserialize_unicode (HarfBuzz::buffer_t buffer, std::string * buf, gint buf_len, HarfBuzz::buffer_serialize_format_t format) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_buffer_t* buffer, const char** buf, gint buf_len, const char** end_ptr, ::hb_buffer_serialize_format_t format);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_deserialize_unicode;
  auto format_to_c = gi::unwrap (format);
  const char* end_ptr_o {};
  auto buf_i = detail::make_list_unwrap_range (buf, buf_len, false);
  auto buf_w = unwrap (buf_i, gi::transfer_none, direction_in);
  auto buf_to_c = buf_w.gobj_(false);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (const char**) (buf_to_c), (gint) (buf_w.size()), (const char**) (&end_ptr_o), (::hb_buffer_serialize_format_t) (format_to_c));
  return std::make_tuple (_temp_ret, gi::wrap (end_ptr_o, gi::transfer_full, gi::direction_out));
}

// void hb_buffer_destroy (hb_buffer_t* buffer);
// void hb_buffer_destroy (::hb_buffer_t* buffer);
void buffer_destroy (HarfBuzz::buffer_t buffer) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_destroy;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
}

// hb_buffer_diff_flags_t hb_buffer_diff (hb_buffer_t* buffer, hb_buffer_t* reference, hb_codepoint_t dottedcircle_glyph, unsigned int position_fuzz);
// ::hb_buffer_diff_flags_t hb_buffer_diff (::hb_buffer_t* buffer, ::hb_buffer_t* reference, ::hb_codepoint_t dottedcircle_glyph, guint position_fuzz);
HarfBuzz::buffer_diff_flags_t buffer_diff (HarfBuzz::buffer_t buffer, HarfBuzz::buffer_t reference, ::hb_codepoint_t dottedcircle_glyph, guint position_fuzz) noexcept
{
  typedef ::hb_buffer_diff_flags_t (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_buffer_t* reference, ::hb_codepoint_t dottedcircle_glyph, guint position_fuzz);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_diff;
  auto position_fuzz_to_c = position_fuzz;
  auto dottedcircle_glyph_to_c = dottedcircle_glyph;
  auto reference_to_c = gi::unwrap (reference, gi::transfer_none, gi::direction_in);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_buffer_t*) (reference_to_c), (::hb_codepoint_t) (dottedcircle_glyph_to_c), (guint) (position_fuzz_to_c));
  return gi::wrap (_temp_ret);
}

// hb_buffer_cluster_level_t hb_buffer_get_cluster_level (hb_buffer_t* buffer);
// ::hb_buffer_cluster_level_t hb_buffer_get_cluster_level (::hb_buffer_t* buffer);
HarfBuzz::buffer_cluster_level_t buffer_get_cluster_level (HarfBuzz::buffer_t buffer) noexcept
{
  typedef ::hb_buffer_cluster_level_t (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_cluster_level;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return gi::wrap (_temp_ret);
}

// hb_buffer_content_type_t hb_buffer_get_content_type (hb_buffer_t* buffer);
// ::hb_buffer_content_type_t hb_buffer_get_content_type (::hb_buffer_t* buffer);
HarfBuzz::buffer_content_type_t buffer_get_content_type (HarfBuzz::buffer_t buffer) noexcept
{
  typedef ::hb_buffer_content_type_t (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_content_type;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return gi::wrap (_temp_ret);
}

// hb_direction_t hb_buffer_get_direction (hb_buffer_t* buffer);
// ::hb_direction_t hb_buffer_get_direction (::hb_buffer_t* buffer);
HarfBuzz::direction_t buffer_get_direction (HarfBuzz::buffer_t buffer) noexcept
{
  typedef ::hb_direction_t (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_direction;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return gi::wrap (_temp_ret);
}

// hb_buffer_t* hb_buffer_get_empty ();
// ::hb_buffer_t* hb_buffer_get_empty ();
HarfBuzz::buffer_t buffer_get_empty () noexcept
{
  typedef ::hb_buffer_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_buffer_flags_t hb_buffer_get_flags (hb_buffer_t* buffer);
// ::hb_buffer_flags_t hb_buffer_get_flags (::hb_buffer_t* buffer);
HarfBuzz::buffer_flags_t buffer_get_flags (HarfBuzz::buffer_t buffer) noexcept
{
  typedef ::hb_buffer_flags_t (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_flags;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return gi::wrap (_temp_ret);
}

// hb_glyph_info_t* hb_buffer_get_glyph_infos (hb_buffer_t* buffer, unsigned int* length);
// ::hb_glyph_info_t** hb_buffer_get_glyph_infos (::hb_buffer_t* buffer, guint* length);
// SKIP; inconsistent return  pointer depth (1 vs 2)

// hb_glyph_position_t* hb_buffer_get_glyph_positions (hb_buffer_t* buffer, unsigned int* length);
// ::hb_glyph_position_t** hb_buffer_get_glyph_positions (::hb_buffer_t* buffer, guint* length);
// SKIP; inconsistent return  pointer depth (1 vs 2)

// hb_codepoint_t hb_buffer_get_invisible_glyph (hb_buffer_t* buffer);
// ::hb_codepoint_t hb_buffer_get_invisible_glyph (::hb_buffer_t* buffer);
HarfBuzz::codepoint_t buffer_get_invisible_glyph (HarfBuzz::buffer_t buffer) noexcept
{
  typedef ::hb_codepoint_t (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_invisible_glyph;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return _temp_ret;
}

// hb_language_t hb_buffer_get_language (hb_buffer_t* buffer);
//  hb_buffer_get_language (::hb_buffer_t* buffer);
// SKIP;  type  not supported

// unsigned int hb_buffer_get_length (hb_buffer_t* buffer);
// guint hb_buffer_get_length (::hb_buffer_t* buffer);
guint buffer_get_length (HarfBuzz::buffer_t buffer) noexcept
{
  typedef guint (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return _temp_ret;
}

// hb_codepoint_t hb_buffer_get_replacement_codepoint (hb_buffer_t* buffer);
// ::hb_codepoint_t hb_buffer_get_replacement_codepoint (::hb_buffer_t* buffer);
HarfBuzz::codepoint_t buffer_get_replacement_codepoint (HarfBuzz::buffer_t buffer) noexcept
{
  typedef ::hb_codepoint_t (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_replacement_codepoint;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return _temp_ret;
}

// hb_script_t hb_buffer_get_script (hb_buffer_t* buffer);
// ::hb_script_t hb_buffer_get_script (::hb_buffer_t* buffer);
HarfBuzz::script_t buffer_get_script (HarfBuzz::buffer_t buffer) noexcept
{
  typedef ::hb_script_t (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_script;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return gi::wrap (_temp_ret);
}

// void hb_buffer_get_segment_properties (hb_buffer_t* buffer, hb_segment_properties_t* props);
// void hb_buffer_get_segment_properties (::hb_buffer_t* buffer, ::hb_segment_properties_t* props);
void buffer_get_segment_properties (HarfBuzz::buffer_t buffer, HarfBuzz::segment_properties_t & props) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_segment_properties_t* props);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_segment_properties;
  traits::unset_wrapper<::hb_segment_properties_t>::type props_c;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_segment_properties_t*) ((::hb_segment_properties_t*) &props_c));
  props = gi::wrap ((::hb_segment_properties_t*) &props_c, gi::transfer_none, gi::direction_out);
}
HarfBuzz::segment_properties_t buffer_get_segment_properties (HarfBuzz::buffer_t buffer) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_segment_properties_t* props);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_segment_properties;
  traits::unset_wrapper<::hb_segment_properties_t>::type props_c;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_segment_properties_t*) ((::hb_segment_properties_t*) &props_c));
  return gi::wrap ((::hb_segment_properties_t*) &props_c, gi::transfer_none, gi::direction_out);
}

// hb_unicode_funcs_t* hb_buffer_get_unicode_funcs (hb_buffer_t* buffer);
// ::hb_unicode_funcs_t* hb_buffer_get_unicode_funcs (::hb_buffer_t* buffer);
HarfBuzz::unicode_funcs_t buffer_get_unicode_funcs (HarfBuzz::buffer_t buffer) noexcept
{
  typedef ::hb_unicode_funcs_t* (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_unicode_funcs;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void* hb_buffer_get_user_data (hb_buffer_t* buffer, hb_user_data_key_t* key);
// void* hb_buffer_get_user_data (::hb_buffer_t* buffer, ::hb_user_data_key_t* key);
gpointer buffer_get_user_data (HarfBuzz::buffer_t buffer, HarfBuzz::user_data_key_t key) noexcept
{
  typedef void* (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_user_data_key_t* key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_get_user_data;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_user_data_key_t*) (key_to_c));
  return _temp_ret;
}

// void hb_buffer_guess_segment_properties (hb_buffer_t* buffer);
// void hb_buffer_guess_segment_properties (::hb_buffer_t* buffer);
void buffer_guess_segment_properties (HarfBuzz::buffer_t buffer) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_guess_segment_properties;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
}

// hb_bool_t hb_buffer_has_positions (hb_buffer_t* buffer);
// ::hb_bool_t hb_buffer_has_positions (::hb_buffer_t* buffer);
HarfBuzz::bool_t buffer_has_positions (HarfBuzz::buffer_t buffer) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_has_positions;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return _temp_ret;
}

// void hb_buffer_normalize_glyphs (hb_buffer_t* buffer);
// void hb_buffer_normalize_glyphs (::hb_buffer_t* buffer);
void buffer_normalize_glyphs (HarfBuzz::buffer_t buffer) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_normalize_glyphs;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
}

// hb_bool_t hb_buffer_pre_allocate (hb_buffer_t* buffer, unsigned int size);
// ::hb_bool_t hb_buffer_pre_allocate (::hb_buffer_t* buffer, guint size);
HarfBuzz::bool_t buffer_pre_allocate (HarfBuzz::buffer_t buffer, guint size) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_buffer_t* buffer, guint size);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_pre_allocate;
  auto size_to_c = size;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (size_to_c));
  return _temp_ret;
}

// hb_buffer_t* hb_buffer_reference (hb_buffer_t* buffer);
// ::hb_buffer_t* hb_buffer_reference (::hb_buffer_t* buffer);
HarfBuzz::buffer_t buffer_reference (HarfBuzz::buffer_t buffer) noexcept
{
  typedef ::hb_buffer_t* (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_reference;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_buffer_reset (hb_buffer_t* buffer);
// void hb_buffer_reset (::hb_buffer_t* buffer);
void buffer_reset (HarfBuzz::buffer_t buffer) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_reset;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
}

// void hb_buffer_reverse (hb_buffer_t* buffer);
// void hb_buffer_reverse (::hb_buffer_t* buffer);
void buffer_reverse (HarfBuzz::buffer_t buffer) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_reverse;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
}

// void hb_buffer_reverse_clusters (hb_buffer_t* buffer);
// void hb_buffer_reverse_clusters (::hb_buffer_t* buffer);
void buffer_reverse_clusters (HarfBuzz::buffer_t buffer) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_reverse_clusters;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c));
}

// void hb_buffer_reverse_range (hb_buffer_t* buffer, unsigned int start, unsigned int end);
// void hb_buffer_reverse_range (::hb_buffer_t* buffer, guint start, guint end);
void buffer_reverse_range (HarfBuzz::buffer_t buffer, guint start, guint end) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, guint start, guint end);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_reverse_range;
  auto end_to_c = end;
  auto start_to_c = start;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (start_to_c), (guint) (end_to_c));
}

// unsigned int hb_buffer_serialize (hb_buffer_t* buffer, unsigned int start, unsigned int end, char* buf, unsigned int buf_size, unsigned int* buf_consumed, hb_font_t* font, hb_buffer_serialize_format_t format, hb_buffer_serialize_flags_t flags);
// guint hb_buffer_serialize (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
guint buffer_serialize (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, guint * buf_consumed, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize;
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  guint buf_consumed_o {};
  typedef guint8 buf_cpptype;
  typedef traits::ctype<buf_cpptype>::type buf_ctype;
  buf_ctype *buf_o;
  auto end_to_c = end;
  auto start_to_c = start;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (start_to_c), (guint) (end_to_c), (guint8**) ((guint8**) &buf_o), (guint) (buf_size), (guint*) (buf_consumed ? &buf_consumed_o : nullptr), (::hb_font_t*) (font_to_c), (::hb_buffer_serialize_format_t) (format_to_c), (::hb_buffer_serialize_flags_t) (flags_to_c));
  if (buf_consumed) *buf_consumed = buf_consumed_o;
  detail::wrap_array (buf_o, gi::transfer_full, buf_size, buf);
  g_free (buf_o);
  return _temp_ret;
}
guint buffer_serialize (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, guint * buf_consumed, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize;
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto font_to_c = nullptr;
  guint buf_consumed_o {};
  typedef guint8 buf_cpptype;
  typedef traits::ctype<buf_cpptype>::type buf_ctype;
  buf_ctype *buf_o;
  auto end_to_c = end;
  auto start_to_c = start;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (start_to_c), (guint) (end_to_c), (guint8**) ((guint8**) &buf_o), (guint) (buf_size), (guint*) (buf_consumed ? &buf_consumed_o : nullptr), (::hb_font_t*) (font_to_c), (::hb_buffer_serialize_format_t) (format_to_c), (::hb_buffer_serialize_flags_t) (flags_to_c));
  if (buf_consumed) *buf_consumed = buf_consumed_o;
  detail::wrap_array (buf_o, gi::transfer_full, buf_size, buf);
  g_free (buf_o);
  return _temp_ret;
}
std::tuple<guint, guint> buffer_serialize (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize;
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  guint buf_consumed_o {};
  typedef guint8 buf_cpptype;
  typedef traits::ctype<buf_cpptype>::type buf_ctype;
  buf_ctype *buf_o;
  auto end_to_c = end;
  auto start_to_c = start;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (start_to_c), (guint) (end_to_c), (guint8**) ((guint8**) &buf_o), (guint) (buf_size), (guint*) (&buf_consumed_o), (::hb_font_t*) (font_to_c), (::hb_buffer_serialize_format_t) (format_to_c), (::hb_buffer_serialize_flags_t) (flags_to_c));
  detail::wrap_array (buf_o, gi::transfer_full, buf_size, buf);
  g_free (buf_o);
  return std::make_tuple (_temp_ret, buf_consumed_o);
}
std::tuple<guint, guint> buffer_serialize (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize;
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto font_to_c = nullptr;
  guint buf_consumed_o {};
  typedef guint8 buf_cpptype;
  typedef traits::ctype<buf_cpptype>::type buf_ctype;
  buf_ctype *buf_o;
  auto end_to_c = end;
  auto start_to_c = start;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (start_to_c), (guint) (end_to_c), (guint8**) ((guint8**) &buf_o), (guint) (buf_size), (guint*) (&buf_consumed_o), (::hb_font_t*) (font_to_c), (::hb_buffer_serialize_format_t) (format_to_c), (::hb_buffer_serialize_flags_t) (flags_to_c));
  detail::wrap_array (buf_o, gi::transfer_full, buf_size, buf);
  g_free (buf_o);
  return std::make_tuple (_temp_ret, buf_consumed_o);
}

// hb_buffer_serialize_format_t hb_buffer_serialize_format_from_string (const char* str, int len);
// ::hb_buffer_serialize_format_t hb_buffer_serialize_format_from_string (const guint8* str, gint len);
HarfBuzz::buffer_serialize_format_t buffer_serialize_format_from_string (guint8 * str, gint len) noexcept
{
  typedef ::hb_buffer_serialize_format_t (*call_wrap_t) (const guint8* str, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize_format_from_string;
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gint) (str_w.size()));
  return gi::wrap (_temp_ret);
}

// const char* hb_buffer_serialize_format_to_string (hb_buffer_serialize_format_t format);
// const char* hb_buffer_serialize_format_to_string (::hb_buffer_serialize_format_t format);
std::string buffer_serialize_format_to_string (HarfBuzz::buffer_serialize_format_t format) noexcept
{
  typedef const char* (*call_wrap_t) (::hb_buffer_serialize_format_t format);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize_format_to_string;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::hb_buffer_serialize_format_t) (format_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// unsigned int hb_buffer_serialize_glyphs (hb_buffer_t* buffer, unsigned int start, unsigned int end, char* buf, unsigned int buf_size, unsigned int* buf_consumed, hb_font_t* font, hb_buffer_serialize_format_t format, hb_buffer_serialize_flags_t flags);
// guint hb_buffer_serialize_glyphs (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
guint buffer_serialize_glyphs (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, guint * buf_consumed, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize_glyphs;
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  guint buf_consumed_o {};
  typedef guint8 buf_cpptype;
  typedef traits::ctype<buf_cpptype>::type buf_ctype;
  buf_ctype *buf_o;
  auto end_to_c = end;
  auto start_to_c = start;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (start_to_c), (guint) (end_to_c), (guint8**) ((guint8**) &buf_o), (guint) (buf_size), (guint*) (buf_consumed ? &buf_consumed_o : nullptr), (::hb_font_t*) (font_to_c), (::hb_buffer_serialize_format_t) (format_to_c), (::hb_buffer_serialize_flags_t) (flags_to_c));
  if (buf_consumed) *buf_consumed = buf_consumed_o;
  detail::wrap_array (buf_o, gi::transfer_full, buf_size, buf);
  g_free (buf_o);
  return _temp_ret;
}
guint buffer_serialize_glyphs (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, guint * buf_consumed, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize_glyphs;
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto font_to_c = nullptr;
  guint buf_consumed_o {};
  typedef guint8 buf_cpptype;
  typedef traits::ctype<buf_cpptype>::type buf_ctype;
  buf_ctype *buf_o;
  auto end_to_c = end;
  auto start_to_c = start;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (start_to_c), (guint) (end_to_c), (guint8**) ((guint8**) &buf_o), (guint) (buf_size), (guint*) (buf_consumed ? &buf_consumed_o : nullptr), (::hb_font_t*) (font_to_c), (::hb_buffer_serialize_format_t) (format_to_c), (::hb_buffer_serialize_flags_t) (flags_to_c));
  if (buf_consumed) *buf_consumed = buf_consumed_o;
  detail::wrap_array (buf_o, gi::transfer_full, buf_size, buf);
  g_free (buf_o);
  return _temp_ret;
}
std::tuple<guint, guint> buffer_serialize_glyphs (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, HarfBuzz::font_t font, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize_glyphs;
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  guint buf_consumed_o {};
  typedef guint8 buf_cpptype;
  typedef traits::ctype<buf_cpptype>::type buf_ctype;
  buf_ctype *buf_o;
  auto end_to_c = end;
  auto start_to_c = start;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (start_to_c), (guint) (end_to_c), (guint8**) ((guint8**) &buf_o), (guint) (buf_size), (guint*) (&buf_consumed_o), (::hb_font_t*) (font_to_c), (::hb_buffer_serialize_format_t) (format_to_c), (::hb_buffer_serialize_flags_t) (flags_to_c));
  detail::wrap_array (buf_o, gi::transfer_full, buf_size, buf);
  g_free (buf_o);
  return std::make_tuple (_temp_ret, buf_consumed_o);
}
std::tuple<guint, guint> buffer_serialize_glyphs (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_font_t* font, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize_glyphs;
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  auto font_to_c = nullptr;
  guint buf_consumed_o {};
  typedef guint8 buf_cpptype;
  typedef traits::ctype<buf_cpptype>::type buf_ctype;
  buf_ctype *buf_o;
  auto end_to_c = end;
  auto start_to_c = start;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (start_to_c), (guint) (end_to_c), (guint8**) ((guint8**) &buf_o), (guint) (buf_size), (guint*) (&buf_consumed_o), (::hb_font_t*) (font_to_c), (::hb_buffer_serialize_format_t) (format_to_c), (::hb_buffer_serialize_flags_t) (flags_to_c));
  detail::wrap_array (buf_o, gi::transfer_full, buf_size, buf);
  g_free (buf_o);
  return std::make_tuple (_temp_ret, buf_consumed_o);
}

// const char** hb_buffer_serialize_list_formats ();
// const char** hb_buffer_serialize_list_formats ();
std::vector<std::string> buffer_serialize_list_formats () noexcept
{
  typedef const char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize_list_formats;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// unsigned int hb_buffer_serialize_unicode (hb_buffer_t* buffer, unsigned int start, unsigned int end, char* buf, unsigned int buf_size, unsigned int* buf_consumed, hb_buffer_serialize_format_t format, hb_buffer_serialize_flags_t flags);
// guint hb_buffer_serialize_unicode (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
guint buffer_serialize_unicode (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, guint * buf_consumed, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize_unicode;
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  guint buf_consumed_o {};
  typedef guint8 buf_cpptype;
  typedef traits::ctype<buf_cpptype>::type buf_ctype;
  buf_ctype *buf_o;
  auto end_to_c = end;
  auto start_to_c = start;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (start_to_c), (guint) (end_to_c), (guint8**) ((guint8**) &buf_o), (guint) (buf_size), (guint*) (buf_consumed ? &buf_consumed_o : nullptr), (::hb_buffer_serialize_format_t) (format_to_c), (::hb_buffer_serialize_flags_t) (flags_to_c));
  if (buf_consumed) *buf_consumed = buf_consumed_o;
  detail::wrap_array (buf_o, gi::transfer_full, buf_size, buf);
  g_free (buf_o);
  return _temp_ret;
}
std::tuple<guint, guint> buffer_serialize_unicode (HarfBuzz::buffer_t buffer, guint start, guint end, guint8 * buf, guint buf_size, HarfBuzz::buffer_serialize_format_t format, HarfBuzz::buffer_serialize_flags_t flags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_buffer_t* buffer, guint start, guint end, guint8** buf, guint buf_size, guint* buf_consumed, ::hb_buffer_serialize_format_t format, ::hb_buffer_serialize_flags_t flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_serialize_unicode;
  auto flags_to_c = gi::unwrap (flags);
  auto format_to_c = gi::unwrap (format);
  guint buf_consumed_o {};
  typedef guint8 buf_cpptype;
  typedef traits::ctype<buf_cpptype>::type buf_ctype;
  buf_ctype *buf_o;
  auto end_to_c = end;
  auto start_to_c = start;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (start_to_c), (guint) (end_to_c), (guint8**) ((guint8**) &buf_o), (guint) (buf_size), (guint*) (&buf_consumed_o), (::hb_buffer_serialize_format_t) (format_to_c), (::hb_buffer_serialize_flags_t) (flags_to_c));
  detail::wrap_array (buf_o, gi::transfer_full, buf_size, buf);
  g_free (buf_o);
  return std::make_tuple (_temp_ret, buf_consumed_o);
}

// void hb_buffer_set_cluster_level (hb_buffer_t* buffer, hb_buffer_cluster_level_t cluster_level);
// void hb_buffer_set_cluster_level (::hb_buffer_t* buffer, ::hb_buffer_cluster_level_t cluster_level);
void buffer_set_cluster_level (HarfBuzz::buffer_t buffer, HarfBuzz::buffer_cluster_level_t cluster_level) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_buffer_cluster_level_t cluster_level);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_set_cluster_level;
  auto cluster_level_to_c = gi::unwrap (cluster_level);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_buffer_cluster_level_t) (cluster_level_to_c));
}

// void hb_buffer_set_content_type (hb_buffer_t* buffer, hb_buffer_content_type_t content_type);
// void hb_buffer_set_content_type (::hb_buffer_t* buffer, ::hb_buffer_content_type_t content_type);
void buffer_set_content_type (HarfBuzz::buffer_t buffer, HarfBuzz::buffer_content_type_t content_type) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_buffer_content_type_t content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_set_content_type;
  auto content_type_to_c = gi::unwrap (content_type);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_buffer_content_type_t) (content_type_to_c));
}

// void hb_buffer_set_direction (hb_buffer_t* buffer, hb_direction_t direction);
// void hb_buffer_set_direction (::hb_buffer_t* buffer, ::hb_direction_t direction);
void buffer_set_direction (HarfBuzz::buffer_t buffer, HarfBuzz::direction_t direction) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_direction_t direction);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_set_direction;
  auto direction_to_c = gi::unwrap (direction);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_direction_t) (direction_to_c));
}

// void hb_buffer_set_flags (hb_buffer_t* buffer, hb_buffer_flags_t flags);
// void hb_buffer_set_flags (::hb_buffer_t* buffer, ::hb_buffer_flags_t flags);
void buffer_set_flags (HarfBuzz::buffer_t buffer, HarfBuzz::buffer_flags_t flags) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_buffer_flags_t flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_buffer_flags_t) (flags_to_c));
}

// void hb_buffer_set_invisible_glyph (hb_buffer_t* buffer, hb_codepoint_t invisible);
// void hb_buffer_set_invisible_glyph (::hb_buffer_t* buffer, ::hb_codepoint_t invisible);
void buffer_set_invisible_glyph (HarfBuzz::buffer_t buffer, ::hb_codepoint_t invisible) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_codepoint_t invisible);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_set_invisible_glyph;
  auto invisible_to_c = invisible;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_codepoint_t) (invisible_to_c));
}

// void hb_buffer_set_language (hb_buffer_t* buffer, hb_language_t language);
// void hb_buffer_set_language (::hb_buffer_t* buffer,  language);
// SKIP; language type  not supported

// hb_bool_t hb_buffer_set_length (hb_buffer_t* buffer, unsigned int length);
// ::hb_bool_t hb_buffer_set_length (::hb_buffer_t* buffer, guint length);
HarfBuzz::bool_t buffer_set_length (HarfBuzz::buffer_t buffer, guint length) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_buffer_t* buffer, guint length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_set_length;
  auto length_to_c = length;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (guint) (length_to_c));
  return _temp_ret;
}

// void hb_buffer_set_message_func (hb_buffer_t* buffer, hb_buffer_message_func_t func, void* user_data, hb_destroy_func_t destroy);
// void hb_buffer_set_message_func (::hb_buffer_t* buffer,  func, void* user_data,  destroy);
// SKIP; destroy type  not supported, func type  not supported

// void hb_buffer_set_replacement_codepoint (hb_buffer_t* buffer, hb_codepoint_t replacement);
// void hb_buffer_set_replacement_codepoint (::hb_buffer_t* buffer, ::hb_codepoint_t replacement);
void buffer_set_replacement_codepoint (HarfBuzz::buffer_t buffer, ::hb_codepoint_t replacement) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_codepoint_t replacement);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_set_replacement_codepoint;
  auto replacement_to_c = replacement;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_codepoint_t) (replacement_to_c));
}

// void hb_buffer_set_script (hb_buffer_t* buffer, hb_script_t script);
// void hb_buffer_set_script (::hb_buffer_t* buffer, ::hb_script_t script);
void buffer_set_script (HarfBuzz::buffer_t buffer, HarfBuzz::script_t script) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_script_t script);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_set_script;
  auto script_to_c = gi::unwrap (script);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_script_t) (script_to_c));
}

// void hb_buffer_set_segment_properties (hb_buffer_t* buffer, const hb_segment_properties_t* props);
// void hb_buffer_set_segment_properties (::hb_buffer_t* buffer, const ::hb_segment_properties_t* props);
void buffer_set_segment_properties (HarfBuzz::buffer_t buffer, const HarfBuzz::segment_properties_t & props) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, const ::hb_segment_properties_t* props);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_set_segment_properties;
  auto props_to_c = gi::unwrap (props, gi::transfer_none, gi::direction_in);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (const ::hb_segment_properties_t*) (props_to_c));
}

// void hb_buffer_set_unicode_funcs (hb_buffer_t* buffer, hb_unicode_funcs_t* unicode_funcs);
// void hb_buffer_set_unicode_funcs (::hb_buffer_t* buffer, ::hb_unicode_funcs_t* unicode_funcs);
void buffer_set_unicode_funcs (HarfBuzz::buffer_t buffer, HarfBuzz::unicode_funcs_t unicode_funcs) noexcept
{
  typedef void (*call_wrap_t) (::hb_buffer_t* buffer, ::hb_unicode_funcs_t* unicode_funcs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_buffer_set_unicode_funcs;
  auto unicode_funcs_to_c = gi::unwrap (unicode_funcs, gi::transfer_none, gi::direction_in);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_buffer_t*) (buffer_to_c), (::hb_unicode_funcs_t*) (unicode_funcs_to_c));
}

// hb_bool_t hb_buffer_set_user_data (hb_buffer_t* buffer, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_buffer_set_user_data (::hb_buffer_t* buffer, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// uint8_t hb_color_get_alpha (hb_color_t color);
// guint8 hb_color_get_alpha (::hb_color_t color);
guint8 color_get_alpha (::hb_color_t color) noexcept
{
  typedef guint8 (*call_wrap_t) (::hb_color_t color);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_color_get_alpha;
  auto color_to_c = color;
  auto _temp_ret = call_wrap_v ((::hb_color_t) (color_to_c));
  return _temp_ret;
}

// uint8_t hb_color_get_blue (hb_color_t color);
// guint8 hb_color_get_blue (::hb_color_t color);
guint8 color_get_blue (::hb_color_t color) noexcept
{
  typedef guint8 (*call_wrap_t) (::hb_color_t color);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_color_get_blue;
  auto color_to_c = color;
  auto _temp_ret = call_wrap_v ((::hb_color_t) (color_to_c));
  return _temp_ret;
}

// uint8_t hb_color_get_green (hb_color_t color);
// guint8 hb_color_get_green (::hb_color_t color);
guint8 color_get_green (::hb_color_t color) noexcept
{
  typedef guint8 (*call_wrap_t) (::hb_color_t color);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_color_get_green;
  auto color_to_c = color;
  auto _temp_ret = call_wrap_v ((::hb_color_t) (color_to_c));
  return _temp_ret;
}

// uint8_t hb_color_get_red (hb_color_t color);
// guint8 hb_color_get_red (::hb_color_t color);
guint8 color_get_red (::hb_color_t color) noexcept
{
  typedef guint8 (*call_wrap_t) (::hb_color_t color);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_color_get_red;
  auto color_to_c = color;
  auto _temp_ret = call_wrap_v ((::hb_color_t) (color_to_c));
  return _temp_ret;
}

// hb_direction_t hb_direction_from_string (const char* str, int len);
// ::hb_direction_t hb_direction_from_string (const guint8* str, gint len);
HarfBuzz::direction_t direction_from_string (guint8 * str, gint len) noexcept
{
  typedef ::hb_direction_t (*call_wrap_t) (const guint8* str, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_direction_from_string;
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gint) (str_w.size()));
  return gi::wrap (_temp_ret);
}

// const char* hb_direction_to_string (hb_direction_t direction);
// const char* hb_direction_to_string (::hb_direction_t direction);
std::string direction_to_string (HarfBuzz::direction_t direction) noexcept
{
  typedef const char* (*call_wrap_t) (::hb_direction_t direction);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_direction_to_string;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::hb_direction_t) (direction_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// hb_bool_t hb_face_builder_add_table (hb_face_t* face, hb_tag_t tag, hb_blob_t* blob);
// ::hb_bool_t hb_face_builder_add_table (::hb_face_t* face, ::hb_tag_t tag, ::hb_blob_t* blob);
HarfBuzz::bool_t face_builder_add_table (HarfBuzz::face_t face, ::hb_tag_t tag, HarfBuzz::blob_t blob) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t tag, ::hb_blob_t* blob);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_builder_add_table;
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  auto tag_to_c = tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (tag_to_c), (::hb_blob_t*) (blob_to_c));
  return _temp_ret;
}

// hb_face_t* hb_face_builder_create ();
// ::hb_face_t* hb_face_builder_create ();
HarfBuzz::face_t face_builder_create () noexcept
{
  typedef ::hb_face_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_builder_create;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_face_collect_unicodes (hb_face_t* face, hb_set_t* out);
// void hb_face_collect_unicodes (::hb_face_t* face, ::hb_set_t* out);
void face_collect_unicodes (HarfBuzz::face_t face, HarfBuzz::set_t out) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, ::hb_set_t* out);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_collect_unicodes;
  auto out_to_c = gi::unwrap (out, gi::transfer_none, gi::direction_in);
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_set_t*) (out_to_c));
}

// void hb_face_collect_variation_selectors (hb_face_t* face, hb_set_t* out);
// void hb_face_collect_variation_selectors (::hb_face_t* face, ::hb_set_t* out);
void face_collect_variation_selectors (HarfBuzz::face_t face, HarfBuzz::set_t out) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, ::hb_set_t* out);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_collect_variation_selectors;
  auto out_to_c = gi::unwrap (out, gi::transfer_none, gi::direction_in);
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_set_t*) (out_to_c));
}

// void hb_face_collect_variation_unicodes (hb_face_t* face, hb_codepoint_t variation_selector, hb_set_t* out);
// void hb_face_collect_variation_unicodes (::hb_face_t* face, ::hb_codepoint_t variation_selector, ::hb_set_t* out);
void face_collect_variation_unicodes (HarfBuzz::face_t face, ::hb_codepoint_t variation_selector, HarfBuzz::set_t out) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, ::hb_codepoint_t variation_selector, ::hb_set_t* out);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_collect_variation_unicodes;
  auto out_to_c = gi::unwrap (out, gi::transfer_none, gi::direction_in);
  auto variation_selector_to_c = variation_selector;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_codepoint_t) (variation_selector_to_c), (::hb_set_t*) (out_to_c));
}

// unsigned int hb_face_count (hb_blob_t* blob);
// guint hb_face_count (::hb_blob_t* blob);
guint face_count (HarfBuzz::blob_t blob) noexcept
{
  typedef guint (*call_wrap_t) (::hb_blob_t* blob);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_count;
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_blob_t*) (blob_to_c));
  return _temp_ret;
}

// hb_face_t* hb_face_create (hb_blob_t* blob, unsigned int index);
// ::hb_face_t* hb_face_create (::hb_blob_t* blob, guint index);
HarfBuzz::face_t face_create (HarfBuzz::blob_t blob, guint index) noexcept
{
  typedef ::hb_face_t* (*call_wrap_t) (::hb_blob_t* blob, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_create;
  auto index_to_c = index;
  auto blob_to_c = gi::unwrap (blob, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_blob_t*) (blob_to_c), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_face_t* hb_face_create_for_tables (hb_reference_table_func_t reference_table_func, void* user_data, hb_destroy_func_t destroy);
// ::hb_face_t* hb_face_create_for_tables ( reference_table_func, void* user_data,  destroy);
// SKIP; destroy type  not supported, reference_table_func type  not supported

// void hb_face_destroy (hb_face_t* face);
// void hb_face_destroy (::hb_face_t* face);
void face_destroy (HarfBuzz::face_t face) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_destroy;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c));
}

// hb_face_t* hb_face_get_empty ();
// ::hb_face_t* hb_face_get_empty ();
HarfBuzz::face_t face_get_empty () noexcept
{
  typedef ::hb_face_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_get_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// unsigned int hb_face_get_glyph_count (const hb_face_t* face);
// guint hb_face_get_glyph_count (const ::hb_face_t* face);
guint face_get_glyph_count (const HarfBuzz::face_t & face) noexcept
{
  typedef guint (*call_wrap_t) (const ::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_get_glyph_count;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// unsigned int hb_face_get_index (const hb_face_t* face);
// guint hb_face_get_index (const ::hb_face_t* face);
guint face_get_index (const HarfBuzz::face_t & face) noexcept
{
  typedef guint (*call_wrap_t) (const ::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_get_index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// unsigned int hb_face_get_table_tags (const hb_face_t* face, unsigned int start_offset, unsigned int* table_count, hb_tag_t* table_tags);
// guint hb_face_get_table_tags (const ::hb_face_t* face, guint start_offset, guint* table_count, ::hb_tag_t** table_tags);
guint face_get_table_tags (const HarfBuzz::face_t & face, guint start_offset, std::vector<HarfBuzz::tag_t> & table_tags) noexcept
{
  typedef guint (*call_wrap_t) (const ::hb_face_t* face, guint start_offset, guint* table_count, ::hb_tag_t** table_tags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_get_table_tags;
  typedef HarfBuzz::tag_t table_tags_cpptype;
  typedef traits::ctype<table_tags_cpptype>::type table_tags_ctype;
  table_tags_ctype *table_tags_o;
  guint table_count;
  auto start_offset_to_c = start_offset;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_face_t*) (face_to_c), (guint) (start_offset_to_c), (guint*) (&table_count), (::hb_tag_t**) ((::hb_tag_t**) &table_tags_o));
  table_tags.resize(table_count);
  detail::wrap_array (table_tags_o, gi::transfer_full, table_count, table_tags.data());
  g_free (table_tags_o);
  return _temp_ret;
}

// unsigned int hb_face_get_upem (const hb_face_t* face);
// guint hb_face_get_upem (const ::hb_face_t* face);
guint face_get_upem (const HarfBuzz::face_t & face) noexcept
{
  typedef guint (*call_wrap_t) (const ::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_get_upem;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// void* hb_face_get_user_data (const hb_face_t* face, hb_user_data_key_t* key);
// void* hb_face_get_user_data (const ::hb_face_t* face, ::hb_user_data_key_t* key);
gpointer face_get_user_data (const HarfBuzz::face_t & face, HarfBuzz::user_data_key_t key) noexcept
{
  typedef void* (*call_wrap_t) (const ::hb_face_t* face, ::hb_user_data_key_t* key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_get_user_data;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_face_t*) (face_to_c), (::hb_user_data_key_t*) (key_to_c));
  return _temp_ret;
}

// hb_bool_t hb_face_is_immutable (const hb_face_t* face);
// ::hb_bool_t hb_face_is_immutable (const ::hb_face_t* face);
HarfBuzz::bool_t face_is_immutable (const HarfBuzz::face_t & face) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_is_immutable;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// void hb_face_make_immutable (hb_face_t* face);
// void hb_face_make_immutable (::hb_face_t* face);
void face_make_immutable (HarfBuzz::face_t face) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_make_immutable;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c));
}

// hb_face_t* hb_face_reference (hb_face_t* face);
// ::hb_face_t* hb_face_reference (::hb_face_t* face);
HarfBuzz::face_t face_reference (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_face_t* (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_reference;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_blob_t* hb_face_reference_blob (hb_face_t* face);
// ::hb_blob_t* hb_face_reference_blob (::hb_face_t* face);
HarfBuzz::blob_t face_reference_blob (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_blob_t* (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_reference_blob;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_blob_t* hb_face_reference_table (const hb_face_t* face, hb_tag_t tag);
// ::hb_blob_t* hb_face_reference_table (const ::hb_face_t* face, ::hb_tag_t tag);
HarfBuzz::blob_t face_reference_table (const HarfBuzz::face_t & face, ::hb_tag_t tag) noexcept
{
  typedef ::hb_blob_t* (*call_wrap_t) (const ::hb_face_t* face, ::hb_tag_t tag);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_reference_table;
  auto tag_to_c = tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_face_t*) (face_to_c), (::hb_tag_t) (tag_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_face_set_glyph_count (hb_face_t* face, unsigned int glyph_count);
// void hb_face_set_glyph_count (::hb_face_t* face, guint glyph_count);
void face_set_glyph_count (HarfBuzz::face_t face, guint glyph_count) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, guint glyph_count);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_set_glyph_count;
  auto glyph_count_to_c = glyph_count;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (glyph_count_to_c));
}

// void hb_face_set_index (hb_face_t* face, unsigned int index);
// void hb_face_set_index (::hb_face_t* face, guint index);
void face_set_index (HarfBuzz::face_t face, guint index) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_set_index;
  auto index_to_c = index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (index_to_c));
}

// void hb_face_set_upem (hb_face_t* face, unsigned int upem);
// void hb_face_set_upem (::hb_face_t* face, guint upem);
void face_set_upem (HarfBuzz::face_t face, guint upem) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, guint upem);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_face_set_upem;
  auto upem_to_c = upem;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (upem_to_c));
}

// hb_bool_t hb_face_set_user_data (hb_face_t* face, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_face_set_user_data (::hb_face_t* face, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// hb_bool_t hb_feature_from_string (const char* str, int len, hb_feature_t* feature);
// ::hb_bool_t hb_feature_from_string (const guint8* str, gint len, ::hb_feature_t* feature);
HarfBuzz::bool_t feature_from_string (guint8 * str, gint len, HarfBuzz::feature_t & feature) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const guint8* str, gint len, ::hb_feature_t* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_feature_from_string;
  traits::unset_wrapper<::hb_feature_t>::type feature_c;
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gint) (str_w.size()), (::hb_feature_t*) ((::hb_feature_t*) &feature_c));
  feature = gi::wrap ((::hb_feature_t*) &feature_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::feature_t> feature_from_string (guint8 * str, gint len) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const guint8* str, gint len, ::hb_feature_t* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_feature_from_string;
  traits::unset_wrapper<::hb_feature_t>::type feature_c;
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gint) (str_w.size()), (::hb_feature_t*) ((::hb_feature_t*) &feature_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::hb_feature_t*) &feature_c, gi::transfer_none, gi::direction_out));
}

// void hb_feature_to_string (hb_feature_t* feature, char* buf, unsigned int size);
// void hb_feature_to_string (::hb_feature_t* feature, char*** buf, guint size);
// SKIP; inconsistent out buf pointer depth (1 vs 3)

// void hb_font_add_glyph_origin_for_direction (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// void hb_font_add_glyph_origin_for_direction (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
void font_add_glyph_origin_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_add_glyph_origin_for_direction;
  auto y_to_c = y;
  ::hb_position_t y_o = y_to_c;
  auto x_to_c = x;
  ::hb_position_t x_o = x_to_c;
  auto direction_to_c = gi::unwrap (direction);
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_direction_t) (direction_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  y = y_o;
  x = x_o;
}

// hb_font_t* hb_font_create (hb_face_t* face);
// ::hb_font_t* hb_font_create (::hb_face_t* face);
HarfBuzz::font_t font_create (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_font_t* (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_create;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_font_t* hb_font_create_sub_font (hb_font_t* parent);
// ::hb_font_t* hb_font_create_sub_font (::hb_font_t* parent);
HarfBuzz::font_t font_create_sub_font (HarfBuzz::font_t parent) noexcept
{
  typedef ::hb_font_t* (*call_wrap_t) (::hb_font_t* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_create_sub_font;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_font_destroy (hb_font_t* font);
// void hb_font_destroy (::hb_font_t* font);
void font_destroy (HarfBuzz::font_t font) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_destroy;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c));
}

// hb_font_funcs_t* hb_font_funcs_create ();
// ::hb_font_funcs_t* hb_font_funcs_create ();
HarfBuzz::font_funcs_t font_funcs_create () noexcept
{
  typedef ::hb_font_funcs_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_funcs_create;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_font_funcs_destroy (hb_font_funcs_t* ffuncs);
// void hb_font_funcs_destroy (::hb_font_funcs_t* ffuncs);
void font_funcs_destroy (HarfBuzz::font_funcs_t ffuncs) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_funcs_t* ffuncs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_funcs_destroy;
  auto ffuncs_to_c = gi::unwrap (ffuncs, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_funcs_t*) (ffuncs_to_c));
}

// hb_font_funcs_t* hb_font_funcs_get_empty ();
// ::hb_font_funcs_t* hb_font_funcs_get_empty ();
HarfBuzz::font_funcs_t font_funcs_get_empty () noexcept
{
  typedef ::hb_font_funcs_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_funcs_get_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void* hb_font_funcs_get_user_data (hb_font_funcs_t* ffuncs, hb_user_data_key_t* key);
// void* hb_font_funcs_get_user_data (::hb_font_funcs_t* ffuncs, ::hb_user_data_key_t* key);
gpointer font_funcs_get_user_data (HarfBuzz::font_funcs_t ffuncs, HarfBuzz::user_data_key_t key) noexcept
{
  typedef void* (*call_wrap_t) (::hb_font_funcs_t* ffuncs, ::hb_user_data_key_t* key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_funcs_get_user_data;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto ffuncs_to_c = gi::unwrap (ffuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_funcs_t*) (ffuncs_to_c), (::hb_user_data_key_t*) (key_to_c));
  return _temp_ret;
}

// hb_bool_t hb_font_funcs_is_immutable (hb_font_funcs_t* ffuncs);
// ::hb_bool_t hb_font_funcs_is_immutable (::hb_font_funcs_t* ffuncs);
HarfBuzz::bool_t font_funcs_is_immutable (HarfBuzz::font_funcs_t ffuncs) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_funcs_t* ffuncs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_funcs_is_immutable;
  auto ffuncs_to_c = gi::unwrap (ffuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_funcs_t*) (ffuncs_to_c));
  return _temp_ret;
}

// void hb_font_funcs_make_immutable (hb_font_funcs_t* ffuncs);
// void hb_font_funcs_make_immutable (::hb_font_funcs_t* ffuncs);
void font_funcs_make_immutable (HarfBuzz::font_funcs_t ffuncs) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_funcs_t* ffuncs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_funcs_make_immutable;
  auto ffuncs_to_c = gi::unwrap (ffuncs, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_funcs_t*) (ffuncs_to_c));
}

// hb_font_funcs_t* hb_font_funcs_reference (hb_font_funcs_t* ffuncs);
// ::hb_font_funcs_t* hb_font_funcs_reference (::hb_font_funcs_t* ffuncs);
HarfBuzz::font_funcs_t font_funcs_reference (HarfBuzz::font_funcs_t ffuncs) noexcept
{
  typedef ::hb_font_funcs_t* (*call_wrap_t) (::hb_font_funcs_t* ffuncs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_funcs_reference;
  auto ffuncs_to_c = gi::unwrap (ffuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_funcs_t*) (ffuncs_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

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
HarfBuzz::font_t font_get_empty () noexcept
{
  typedef ::hb_font_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_font_get_extents_for_direction (hb_font_t* font, hb_direction_t direction, hb_font_extents_t* extents);
// void hb_font_get_extents_for_direction (::hb_font_t* font, ::hb_direction_t direction, ::hb_font_extents_t* extents);
void font_get_extents_for_direction (HarfBuzz::font_t font, HarfBuzz::direction_t direction, HarfBuzz::font_extents_t & extents) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_direction_t direction, ::hb_font_extents_t* extents);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_extents_for_direction;
  traits::unset_wrapper<::hb_font_extents_t>::type extents_c;
  auto direction_to_c = gi::unwrap (direction);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_direction_t) (direction_to_c), (::hb_font_extents_t*) ((::hb_font_extents_t*) &extents_c));
  extents = gi::wrap ((::hb_font_extents_t*) &extents_c, gi::transfer_none, gi::direction_out);
}
HarfBuzz::font_extents_t font_get_extents_for_direction (HarfBuzz::font_t font, HarfBuzz::direction_t direction) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_direction_t direction, ::hb_font_extents_t* extents);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_extents_for_direction;
  traits::unset_wrapper<::hb_font_extents_t>::type extents_c;
  auto direction_to_c = gi::unwrap (direction);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_direction_t) (direction_to_c), (::hb_font_extents_t*) ((::hb_font_extents_t*) &extents_c));
  return gi::wrap ((::hb_font_extents_t*) &extents_c, gi::transfer_none, gi::direction_out);
}

// hb_face_t* hb_font_get_face (hb_font_t* font);
// ::hb_face_t* hb_font_get_face (::hb_font_t* font);
HarfBuzz::face_t font_get_face (HarfBuzz::font_t font) noexcept
{
  typedef ::hb_face_t* (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_face;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// hb_bool_t hb_font_get_glyph (hb_font_t* font, hb_codepoint_t unicode, hb_codepoint_t variation_selector, hb_codepoint_t* glyph);
// ::hb_bool_t hb_font_get_glyph (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, ::hb_codepoint_t* glyph);
HarfBuzz::bool_t font_get_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, HarfBuzz::codepoint_t & glyph) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, ::hb_codepoint_t* glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph;
  ::hb_codepoint_t glyph_o {};
  auto variation_selector_to_c = variation_selector;
  auto unicode_to_c = unicode;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (unicode_to_c), (::hb_codepoint_t) (variation_selector_to_c), (::hb_codepoint_t*) (&glyph_o));
  glyph = glyph_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> font_get_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, ::hb_codepoint_t* glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph;
  ::hb_codepoint_t glyph_o {};
  auto variation_selector_to_c = variation_selector;
  auto unicode_to_c = unicode;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (unicode_to_c), (::hb_codepoint_t) (variation_selector_to_c), (::hb_codepoint_t*) (&glyph_o));
  return std::make_tuple (_temp_ret, glyph_o);
}

// void hb_font_get_glyph_advance_for_direction (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// void hb_font_get_glyph_advance_for_direction (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
void font_get_glyph_advance_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_advance_for_direction;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto direction_to_c = gi::unwrap (direction);
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_direction_t) (direction_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  y = y_o;
  x = x_o;
}
std::tuple<HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_advance_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_advance_for_direction;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto direction_to_c = gi::unwrap (direction);
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_direction_t) (direction_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  return std::make_tuple (x_o, y_o);
}

// void hb_font_get_glyph_advances_for_direction (hb_font_t* font, hb_direction_t direction, unsigned int count, const hb_codepoint_t* first_glyph, unsigned glyph_stride, hb_position_t* first_advance, unsigned advance_stride);
// void hb_font_get_glyph_advances_for_direction (::hb_font_t* font, ::hb_direction_t direction, guint count, const ::hb_codepoint_t first_glyph, guint glyph_stride, ::hb_position_t* first_advance, guint* advance_stride);
// SKIP; inconsistent out advance_stride pointer depth (0 vs 1), inconsistent in first_glyph pointer depth (1 vs 0)

// hb_bool_t hb_font_get_glyph_contour_point (hb_font_t* font, hb_codepoint_t glyph, unsigned int point_index, hb_position_t* x, hb_position_t* y);
// ::hb_bool_t hb_font_get_glyph_contour_point (::hb_font_t* font, ::hb_codepoint_t glyph, guint point_index, ::hb_position_t* x, ::hb_position_t* y);
HarfBuzz::bool_t font_get_glyph_contour_point (HarfBuzz::font_t font, ::hb_codepoint_t glyph, guint point_index, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, guint point_index, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_contour_point;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto point_index_to_c = point_index;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (guint) (point_index_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  y = y_o;
  x = x_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_contour_point (HarfBuzz::font_t font, ::hb_codepoint_t glyph, guint point_index) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, guint point_index, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_contour_point;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto point_index_to_c = point_index;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (guint) (point_index_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  return std::make_tuple (_temp_ret, x_o, y_o);
}

// hb_bool_t hb_font_get_glyph_contour_point_for_origin (hb_font_t* font, hb_codepoint_t glyph, unsigned int point_index, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// ::hb_bool_t hb_font_get_glyph_contour_point_for_origin (::hb_font_t* font, ::hb_codepoint_t glyph, guint point_index, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
HarfBuzz::bool_t font_get_glyph_contour_point_for_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, guint point_index, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, guint point_index, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_contour_point_for_origin;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto direction_to_c = gi::unwrap (direction);
  auto point_index_to_c = point_index;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (guint) (point_index_to_c), (::hb_direction_t) (direction_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  y = y_o;
  x = x_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_contour_point_for_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, guint point_index, HarfBuzz::direction_t direction) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, guint point_index, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_contour_point_for_origin;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto direction_to_c = gi::unwrap (direction);
  auto point_index_to_c = point_index;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (guint) (point_index_to_c), (::hb_direction_t) (direction_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  return std::make_tuple (_temp_ret, x_o, y_o);
}

// hb_bool_t hb_font_get_glyph_extents (hb_font_t* font, hb_codepoint_t glyph, hb_glyph_extents_t* extents);
// ::hb_bool_t hb_font_get_glyph_extents (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_glyph_extents_t* extents);
HarfBuzz::bool_t font_get_glyph_extents (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::glyph_extents_t & extents) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_glyph_extents_t* extents);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_extents;
  traits::unset_wrapper<::hb_glyph_extents_t>::type extents_c;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_glyph_extents_t*) ((::hb_glyph_extents_t*) &extents_c));
  extents = gi::wrap ((::hb_glyph_extents_t*) &extents_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::glyph_extents_t> font_get_glyph_extents (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_glyph_extents_t* extents);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_extents;
  traits::unset_wrapper<::hb_glyph_extents_t>::type extents_c;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_glyph_extents_t*) ((::hb_glyph_extents_t*) &extents_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::hb_glyph_extents_t*) &extents_c, gi::transfer_none, gi::direction_out));
}

// hb_bool_t hb_font_get_glyph_extents_for_origin (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, hb_glyph_extents_t* extents);
// ::hb_bool_t hb_font_get_glyph_extents_for_origin (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_glyph_extents_t* extents);
HarfBuzz::bool_t font_get_glyph_extents_for_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction, HarfBuzz::glyph_extents_t & extents) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_glyph_extents_t* extents);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_extents_for_origin;
  traits::unset_wrapper<::hb_glyph_extents_t>::type extents_c;
  auto direction_to_c = gi::unwrap (direction);
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_direction_t) (direction_to_c), (::hb_glyph_extents_t*) ((::hb_glyph_extents_t*) &extents_c));
  extents = gi::wrap ((::hb_glyph_extents_t*) &extents_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::glyph_extents_t> font_get_glyph_extents_for_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_glyph_extents_t* extents);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_extents_for_origin;
  traits::unset_wrapper<::hb_glyph_extents_t>::type extents_c;
  auto direction_to_c = gi::unwrap (direction);
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_direction_t) (direction_to_c), (::hb_glyph_extents_t*) ((::hb_glyph_extents_t*) &extents_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::hb_glyph_extents_t*) &extents_c, gi::transfer_none, gi::direction_out));
}

// hb_bool_t hb_font_get_glyph_from_name (hb_font_t* font, const char* name, int len, hb_codepoint_t* glyph);
// ::hb_bool_t hb_font_get_glyph_from_name (::hb_font_t* font, const char** name, gint len, ::hb_codepoint_t* glyph);
HarfBuzz::bool_t font_get_glyph_from_name (HarfBuzz::font_t font, std::string * name, gint len, HarfBuzz::codepoint_t & glyph) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, const char** name, gint len, ::hb_codepoint_t* glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_from_name;
  ::hb_codepoint_t glyph_o {};
  auto name_i = detail::make_list_unwrap_range (name, len, false);
  auto name_w = unwrap (name_i, gi::transfer_none, direction_in);
  auto name_to_c = name_w.gobj_(false);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (const char**) (name_to_c), (gint) (name_w.size()), (::hb_codepoint_t*) (&glyph_o));
  glyph = glyph_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> font_get_glyph_from_name (HarfBuzz::font_t font, std::string * name, gint len) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, const char** name, gint len, ::hb_codepoint_t* glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_from_name;
  ::hb_codepoint_t glyph_o {};
  auto name_i = detail::make_list_unwrap_range (name, len, false);
  auto name_w = unwrap (name_i, gi::transfer_none, direction_in);
  auto name_to_c = name_w.gobj_(false);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (const char**) (name_to_c), (gint) (name_w.size()), (::hb_codepoint_t*) (&glyph_o));
  return std::make_tuple (_temp_ret, glyph_o);
}

// hb_position_t hb_font_get_glyph_h_advance (hb_font_t* font, hb_codepoint_t glyph);
// ::hb_position_t hb_font_get_glyph_h_advance (::hb_font_t* font, ::hb_codepoint_t glyph);
HarfBuzz::position_t font_get_glyph_h_advance (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_h_advance;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c));
  return _temp_ret;
}

// void hb_font_get_glyph_h_advances (hb_font_t* font, unsigned int count, const hb_codepoint_t* first_glyph, unsigned glyph_stride, hb_position_t* first_advance, unsigned advance_stride);
// void hb_font_get_glyph_h_advances (::hb_font_t* font, guint count, const ::hb_codepoint_t first_glyph, guint glyph_stride, ::hb_position_t* first_advance, guint* advance_stride);
// SKIP; inconsistent out advance_stride pointer depth (0 vs 1), inconsistent in first_glyph pointer depth (1 vs 0)

// hb_position_t hb_font_get_glyph_h_kerning (hb_font_t* font, hb_codepoint_t left_glyph, hb_codepoint_t right_glyph);
// ::hb_position_t hb_font_get_glyph_h_kerning (::hb_font_t* font, ::hb_codepoint_t left_glyph, ::hb_codepoint_t right_glyph);
HarfBuzz::position_t font_get_glyph_h_kerning (HarfBuzz::font_t font, ::hb_codepoint_t left_glyph, ::hb_codepoint_t right_glyph) noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t left_glyph, ::hb_codepoint_t right_glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_h_kerning;
  auto right_glyph_to_c = right_glyph;
  auto left_glyph_to_c = left_glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (left_glyph_to_c), (::hb_codepoint_t) (right_glyph_to_c));
  return _temp_ret;
}

// hb_bool_t hb_font_get_glyph_h_origin (hb_font_t* font, hb_codepoint_t glyph, hb_position_t* x, hb_position_t* y);
// ::hb_bool_t hb_font_get_glyph_h_origin (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_position_t* x, ::hb_position_t* y);
HarfBuzz::bool_t font_get_glyph_h_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_h_origin;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  y = y_o;
  x = x_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_h_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_h_origin;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  return std::make_tuple (_temp_ret, x_o, y_o);
}

// void hb_font_get_glyph_kerning_for_direction (hb_font_t* font, hb_codepoint_t first_glyph, hb_codepoint_t second_glyph, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// void hb_font_get_glyph_kerning_for_direction (::hb_font_t* font, ::hb_codepoint_t first_glyph, ::hb_codepoint_t second_glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
void font_get_glyph_kerning_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t first_glyph, ::hb_codepoint_t second_glyph, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t first_glyph, ::hb_codepoint_t second_glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_kerning_for_direction;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto direction_to_c = gi::unwrap (direction);
  auto second_glyph_to_c = second_glyph;
  auto first_glyph_to_c = first_glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (first_glyph_to_c), (::hb_codepoint_t) (second_glyph_to_c), (::hb_direction_t) (direction_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  y = y_o;
  x = x_o;
}
std::tuple<HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_kerning_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t first_glyph, ::hb_codepoint_t second_glyph, HarfBuzz::direction_t direction) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t first_glyph, ::hb_codepoint_t second_glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_kerning_for_direction;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto direction_to_c = gi::unwrap (direction);
  auto second_glyph_to_c = second_glyph;
  auto first_glyph_to_c = first_glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (first_glyph_to_c), (::hb_codepoint_t) (second_glyph_to_c), (::hb_direction_t) (direction_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  return std::make_tuple (x_o, y_o);
}

// hb_bool_t hb_font_get_glyph_name (hb_font_t* font, hb_codepoint_t glyph, char* name, unsigned int size);
// ::hb_bool_t hb_font_get_glyph_name (::hb_font_t* font, ::hb_codepoint_t glyph, char*** name, guint size);
// SKIP; inconsistent out name pointer depth (1 vs 3)

// void hb_font_get_glyph_origin_for_direction (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// void hb_font_get_glyph_origin_for_direction (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
void font_get_glyph_origin_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_origin_for_direction;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto direction_to_c = gi::unwrap (direction);
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_direction_t) (direction_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  y = y_o;
  x = x_o;
}
std::tuple<HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_origin_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_origin_for_direction;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto direction_to_c = gi::unwrap (direction);
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_direction_t) (direction_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  return std::make_tuple (x_o, y_o);
}

// hb_position_t hb_font_get_glyph_v_advance (hb_font_t* font, hb_codepoint_t glyph);
// ::hb_position_t hb_font_get_glyph_v_advance (::hb_font_t* font, ::hb_codepoint_t glyph);
HarfBuzz::position_t font_get_glyph_v_advance (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_v_advance;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c));
  return _temp_ret;
}

// void hb_font_get_glyph_v_advances (hb_font_t* font, unsigned int count, const hb_codepoint_t* first_glyph, unsigned glyph_stride, hb_position_t* first_advance, unsigned advance_stride);
// void hb_font_get_glyph_v_advances (::hb_font_t* font, guint count, const ::hb_codepoint_t first_glyph, guint glyph_stride, ::hb_position_t* first_advance, guint* advance_stride);
// SKIP; inconsistent out advance_stride pointer depth (0 vs 1), inconsistent in first_glyph pointer depth (1 vs 0)

// hb_bool_t hb_font_get_glyph_v_origin (hb_font_t* font, hb_codepoint_t glyph, hb_position_t* x, hb_position_t* y);
// ::hb_bool_t hb_font_get_glyph_v_origin (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_position_t* x, ::hb_position_t* y);
HarfBuzz::bool_t font_get_glyph_v_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_v_origin;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  y = y_o;
  x = x_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t, HarfBuzz::position_t> font_get_glyph_v_origin (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_glyph_v_origin;
  ::hb_position_t y_o {};
  ::hb_position_t x_o {};
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  return std::make_tuple (_temp_ret, x_o, y_o);
}

// hb_bool_t hb_font_get_h_extents (hb_font_t* font, hb_font_extents_t* extents);
// ::hb_bool_t hb_font_get_h_extents (::hb_font_t* font, ::hb_font_extents_t* extents);
HarfBuzz::bool_t font_get_h_extents (HarfBuzz::font_t font, HarfBuzz::font_extents_t & extents) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_font_extents_t* extents);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_h_extents;
  traits::unset_wrapper<::hb_font_extents_t>::type extents_c;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_font_extents_t*) ((::hb_font_extents_t*) &extents_c));
  extents = gi::wrap ((::hb_font_extents_t*) &extents_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::font_extents_t> font_get_h_extents (HarfBuzz::font_t font) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_font_extents_t* extents);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_h_extents;
  traits::unset_wrapper<::hb_font_extents_t>::type extents_c;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_font_extents_t*) ((::hb_font_extents_t*) &extents_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::hb_font_extents_t*) &extents_c, gi::transfer_none, gi::direction_out));
}

// hb_bool_t hb_font_get_nominal_glyph (hb_font_t* font, hb_codepoint_t unicode, hb_codepoint_t* glyph);
// ::hb_bool_t hb_font_get_nominal_glyph (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t* glyph);
HarfBuzz::bool_t font_get_nominal_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode, HarfBuzz::codepoint_t & glyph) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t* glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_nominal_glyph;
  ::hb_codepoint_t glyph_o {};
  auto unicode_to_c = unicode;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (unicode_to_c), (::hb_codepoint_t*) (&glyph_o));
  glyph = glyph_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> font_get_nominal_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t* glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_nominal_glyph;
  ::hb_codepoint_t glyph_o {};
  auto unicode_to_c = unicode;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (unicode_to_c), (::hb_codepoint_t*) (&glyph_o));
  return std::make_tuple (_temp_ret, glyph_o);
}

// unsigned int hb_font_get_nominal_glyphs (hb_font_t* font, unsigned int count, const hb_codepoint_t* first_unicode, unsigned int unicode_stride, hb_codepoint_t* first_glyph, unsigned int glyph_stride);
// guint hb_font_get_nominal_glyphs (::hb_font_t* font, guint count, const ::hb_codepoint_t first_unicode, guint unicode_stride, ::hb_codepoint_t first_glyph, guint glyph_stride);
// SKIP; inconsistent in first_glyph pointer depth (1 vs 0), inconsistent in first_unicode pointer depth (1 vs 0)

// hb_font_t* hb_font_get_parent (hb_font_t* font);
// ::hb_font_t* hb_font_get_parent (::hb_font_t* font);
HarfBuzz::font_t font_get_parent (HarfBuzz::font_t font) noexcept
{
  typedef ::hb_font_t* (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_parent;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void hb_font_get_ppem (hb_font_t* font, unsigned int* x_ppem, unsigned int* y_ppem);
// void hb_font_get_ppem (::hb_font_t* font, guint* x_ppem, guint* y_ppem);
void font_get_ppem (HarfBuzz::font_t font, guint & x_ppem, guint & y_ppem) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, guint* x_ppem, guint* y_ppem);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_ppem;
  guint y_ppem_o {};
  guint x_ppem_o {};
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (guint*) (&x_ppem_o), (guint*) (&y_ppem_o));
  y_ppem = y_ppem_o;
  x_ppem = x_ppem_o;
}
std::tuple<guint, guint> font_get_ppem (HarfBuzz::font_t font) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, guint* x_ppem, guint* y_ppem);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_ppem;
  guint y_ppem_o {};
  guint x_ppem_o {};
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (guint*) (&x_ppem_o), (guint*) (&y_ppem_o));
  return std::make_tuple (x_ppem_o, y_ppem_o);
}

// float hb_font_get_ptem (hb_font_t* font);
// gfloat hb_font_get_ptem (::hb_font_t* font);
gfloat font_get_ptem (HarfBuzz::font_t font) noexcept
{
  typedef gfloat (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_ptem;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c));
  return _temp_ret;
}

// void hb_font_get_scale (hb_font_t* font, int* x_scale, int* y_scale);
// void hb_font_get_scale (::hb_font_t* font, gint* x_scale, gint* y_scale);
void font_get_scale (HarfBuzz::font_t font, gint & x_scale, gint & y_scale) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, gint* x_scale, gint* y_scale);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_scale;
  gint y_scale_o {};
  gint x_scale_o {};
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (gint*) (&x_scale_o), (gint*) (&y_scale_o));
  y_scale = y_scale_o;
  x_scale = x_scale_o;
}
std::tuple<gint, gint> font_get_scale (HarfBuzz::font_t font) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, gint* x_scale, gint* y_scale);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_scale;
  gint y_scale_o {};
  gint x_scale_o {};
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (gint*) (&x_scale_o), (gint*) (&y_scale_o));
  return std::make_tuple (x_scale_o, y_scale_o);
}

// void* hb_font_get_user_data (hb_font_t* font, hb_user_data_key_t* key);
// void* hb_font_get_user_data (::hb_font_t* font, ::hb_user_data_key_t* key);
gpointer font_get_user_data (HarfBuzz::font_t font, HarfBuzz::user_data_key_t key) noexcept
{
  typedef void* (*call_wrap_t) (::hb_font_t* font, ::hb_user_data_key_t* key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_user_data;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_user_data_key_t*) (key_to_c));
  return _temp_ret;
}

// hb_bool_t hb_font_get_v_extents (hb_font_t* font, hb_font_extents_t* extents);
// ::hb_bool_t hb_font_get_v_extents (::hb_font_t* font, ::hb_font_extents_t* extents);
HarfBuzz::bool_t font_get_v_extents (HarfBuzz::font_t font, HarfBuzz::font_extents_t & extents) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_font_extents_t* extents);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_v_extents;
  traits::unset_wrapper<::hb_font_extents_t>::type extents_c;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_font_extents_t*) ((::hb_font_extents_t*) &extents_c));
  extents = gi::wrap ((::hb_font_extents_t*) &extents_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::font_extents_t> font_get_v_extents (HarfBuzz::font_t font) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_font_extents_t* extents);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_v_extents;
  traits::unset_wrapper<::hb_font_extents_t>::type extents_c;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_font_extents_t*) ((::hb_font_extents_t*) &extents_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::hb_font_extents_t*) &extents_c, gi::transfer_none, gi::direction_out));
}

// const int* hb_font_get_var_coords_normalized (hb_font_t* font, unsigned int* length);
// const gint hb_font_get_var_coords_normalized (::hb_font_t* font, guint length);
// SKIP; inconsistent in length pointer depth (1 vs 0), inconsistent return  pointer depth (1 vs 0)

// hb_bool_t hb_font_get_variation_glyph (hb_font_t* font, hb_codepoint_t unicode, hb_codepoint_t variation_selector, hb_codepoint_t* glyph);
// ::hb_bool_t hb_font_get_variation_glyph (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, ::hb_codepoint_t* glyph);
HarfBuzz::bool_t font_get_variation_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, HarfBuzz::codepoint_t & glyph) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, ::hb_codepoint_t* glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_variation_glyph;
  ::hb_codepoint_t glyph_o {};
  auto variation_selector_to_c = variation_selector;
  auto unicode_to_c = unicode;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (unicode_to_c), (::hb_codepoint_t) (variation_selector_to_c), (::hb_codepoint_t*) (&glyph_o));
  glyph = glyph_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> font_get_variation_glyph (HarfBuzz::font_t font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, ::hb_codepoint_t* glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_get_variation_glyph;
  ::hb_codepoint_t glyph_o {};
  auto variation_selector_to_c = variation_selector;
  auto unicode_to_c = unicode;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (unicode_to_c), (::hb_codepoint_t) (variation_selector_to_c), (::hb_codepoint_t*) (&glyph_o));
  return std::make_tuple (_temp_ret, glyph_o);
}

// hb_bool_t hb_font_glyph_from_string (hb_font_t* font, const char* s, int len, hb_codepoint_t* glyph);
// ::hb_bool_t hb_font_glyph_from_string (::hb_font_t* font, const guint8* s, gint len, ::hb_codepoint_t* glyph);
HarfBuzz::bool_t font_glyph_from_string (HarfBuzz::font_t font, guint8 * s, gint len, HarfBuzz::codepoint_t & glyph) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, const guint8* s, gint len, ::hb_codepoint_t* glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_glyph_from_string;
  ::hb_codepoint_t glyph_o {};
  auto s_i = detail::make_list_unwrap_range (s, len, false);
  auto s_w = unwrap (s_i, gi::transfer_none, direction_in);
  auto s_to_c = s_w.gobj_(false);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (const guint8*) (s_to_c), (gint) (s_w.size()), (::hb_codepoint_t*) (&glyph_o));
  glyph = glyph_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> font_glyph_from_string (HarfBuzz::font_t font, guint8 * s, gint len) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, const guint8* s, gint len, ::hb_codepoint_t* glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_glyph_from_string;
  ::hb_codepoint_t glyph_o {};
  auto s_i = detail::make_list_unwrap_range (s, len, false);
  auto s_w = unwrap (s_i, gi::transfer_none, direction_in);
  auto s_to_c = s_w.gobj_(false);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (const guint8*) (s_to_c), (gint) (s_w.size()), (::hb_codepoint_t*) (&glyph_o));
  return std::make_tuple (_temp_ret, glyph_o);
}

// void hb_font_glyph_to_string (hb_font_t* font, hb_codepoint_t glyph, char* s, unsigned int size);
// void hb_font_glyph_to_string (::hb_font_t* font, ::hb_codepoint_t glyph, char*** s, guint size);
// SKIP; inconsistent out s pointer depth (1 vs 3)

// hb_bool_t hb_font_is_immutable (hb_font_t* font);
// ::hb_bool_t hb_font_is_immutable (::hb_font_t* font);
HarfBuzz::bool_t font_is_immutable (HarfBuzz::font_t font) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_is_immutable;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c));
  return _temp_ret;
}

// void hb_font_make_immutable (hb_font_t* font);
// void hb_font_make_immutable (::hb_font_t* font);
void font_make_immutable (HarfBuzz::font_t font) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_make_immutable;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c));
}

// hb_font_t* hb_font_reference (hb_font_t* font);
// ::hb_font_t* hb_font_reference (::hb_font_t* font);
HarfBuzz::font_t font_reference (HarfBuzz::font_t font) noexcept
{
  typedef ::hb_font_t* (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_reference;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_font_set_face (hb_font_t* font, hb_face_t* face);
// void hb_font_set_face (::hb_font_t* font, ::hb_face_t* face);
void font_set_face (HarfBuzz::font_t font, HarfBuzz::face_t face) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_set_face;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_face_t*) (face_to_c));
}

// void hb_font_set_funcs (hb_font_t* font, hb_font_funcs_t* klass, void* font_data, hb_destroy_func_t destroy);
// void hb_font_set_funcs (::hb_font_t* font, ::hb_font_funcs_t* klass, void* font_data,  destroy);
// SKIP; destroy type  not supported

// void hb_font_set_funcs_data (hb_font_t* font, void* font_data, hb_destroy_func_t destroy);
// void hb_font_set_funcs_data (::hb_font_t* font, void* font_data,  destroy);
// SKIP; destroy type  not supported

// void hb_font_set_parent (hb_font_t* font, hb_font_t* parent);
// void hb_font_set_parent (::hb_font_t* font, ::hb_font_t* parent);
void font_set_parent (HarfBuzz::font_t font, HarfBuzz::font_t parent) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_font_t* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_set_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_font_t*) (parent_to_c));
}

// void hb_font_set_ppem (hb_font_t* font, unsigned int x_ppem, unsigned int y_ppem);
// void hb_font_set_ppem (::hb_font_t* font, guint x_ppem, guint y_ppem);
void font_set_ppem (HarfBuzz::font_t font, guint x_ppem, guint y_ppem) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, guint x_ppem, guint y_ppem);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_set_ppem;
  auto y_ppem_to_c = y_ppem;
  auto x_ppem_to_c = x_ppem;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (guint) (x_ppem_to_c), (guint) (y_ppem_to_c));
}

// void hb_font_set_ptem (hb_font_t* font, float ptem);
// void hb_font_set_ptem (::hb_font_t* font, gfloat ptem);
void font_set_ptem (HarfBuzz::font_t font, gfloat ptem) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, gfloat ptem);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_set_ptem;
  auto ptem_to_c = ptem;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (gfloat) (ptem_to_c));
}

// void hb_font_set_scale (hb_font_t* font, int x_scale, int y_scale);
// void hb_font_set_scale (::hb_font_t* font, gint x_scale, gint y_scale);
void font_set_scale (HarfBuzz::font_t font, gint x_scale, gint y_scale) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, gint x_scale, gint y_scale);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_set_scale;
  auto y_scale_to_c = y_scale;
  auto x_scale_to_c = x_scale;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (gint) (x_scale_to_c), (gint) (y_scale_to_c));
}

// hb_bool_t hb_font_set_user_data (hb_font_t* font, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_font_set_user_data (::hb_font_t* font, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// void hb_font_set_var_coords_design (hb_font_t* font, const float* coords, unsigned int coords_length);
// void hb_font_set_var_coords_design (::hb_font_t* font, const gfloat* coords, guint coords_length);
void font_set_var_coords_design (HarfBuzz::font_t font, gfloat * coords, guint coords_length) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, const gfloat* coords, guint coords_length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_set_var_coords_design;
  auto coords_i = detail::make_list_unwrap_range (coords, coords_length, false);
  auto coords_w = unwrap (coords_i, gi::transfer_none, direction_in);
  auto coords_to_c = coords_w.gobj_(false);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (const gfloat*) (coords_to_c), (guint) (coords_w.size()));
}

// void hb_font_set_var_coords_normalized (hb_font_t* font, const int* coords, unsigned int coords_length);
// void hb_font_set_var_coords_normalized (::hb_font_t* font, const gint* coords, guint coords_length);
void font_set_var_coords_normalized (HarfBuzz::font_t font, gint * coords, guint coords_length) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, const gint* coords, guint coords_length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_set_var_coords_normalized;
  auto coords_i = detail::make_list_unwrap_range (coords, coords_length, false);
  auto coords_w = unwrap (coords_i, gi::transfer_none, direction_in);
  auto coords_to_c = coords_w.gobj_(false);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (const gint*) (coords_to_c), (guint) (coords_w.size()));
}

// void hb_font_set_var_named_instance (hb_font_t* font, unsigned instance_index);
// void hb_font_set_var_named_instance (::hb_font_t* font, guint instance_index);
void font_set_var_named_instance (HarfBuzz::font_t font, guint instance_index) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, guint instance_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_set_var_named_instance;
  auto instance_index_to_c = instance_index;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (guint) (instance_index_to_c));
}

// void hb_font_set_variations (hb_font_t* font, const hb_variation_t* variations, unsigned int variations_length);
// void hb_font_set_variations (::hb_font_t* font, const ::hb_variation_t** variations, guint variations_length);
// SKIP; inconsistent in variations pointer depth (1 vs 2)

// void hb_font_subtract_glyph_origin_for_direction (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, hb_position_t* x, hb_position_t* y);
// void hb_font_subtract_glyph_origin_for_direction (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
void font_subtract_glyph_origin_for_direction (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::direction_t direction, HarfBuzz::position_t & x, HarfBuzz::position_t & y) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, ::hb_position_t* x, ::hb_position_t* y);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_font_subtract_glyph_origin_for_direction;
  auto y_to_c = y;
  ::hb_position_t y_o = y_to_c;
  auto x_to_c = x;
  ::hb_position_t x_o = x_to_c;
  auto direction_to_c = gi::unwrap (direction);
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_direction_t) (direction_to_c), (::hb_position_t*) (&x_o), (::hb_position_t*) (&y_o));
  y = y_o;
  x = x_o;
}

// FAILURE on hb_ft_face_create; No such node (<xmlattr>.name)
// FAILURE on hb_ft_face_create_cached; No such node (<xmlattr>.name)
// FAILURE on hb_ft_face_create_referenced; No such node (<xmlattr>.name)
// void hb_ft_font_changed (hb_font_t* font);
// void hb_ft_font_changed (::hb_font_t* font);
void ft_font_changed (HarfBuzz::font_t font) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ft_font_changed;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c));
}

// FAILURE on hb_ft_font_create; No such node (<xmlattr>.name)
// FAILURE on hb_ft_font_create_referenced; No such node (<xmlattr>.name)
// FAILURE on hb_ft_font_get_face; No such node (<xmlattr>.name)
// int hb_ft_font_get_load_flags (hb_font_t* font);
// gint hb_ft_font_get_load_flags (::hb_font_t* font);
gint ft_font_get_load_flags (HarfBuzz::font_t font) noexcept
{
  typedef gint (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ft_font_get_load_flags;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c));
  return _temp_ret;
}

// FAILURE on hb_ft_font_lock_face; No such node (<xmlattr>.name)
// void hb_ft_font_set_funcs (hb_font_t* font);
// void hb_ft_font_set_funcs (::hb_font_t* font);
void ft_font_set_funcs (HarfBuzz::font_t font) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ft_font_set_funcs;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c));
}

// void hb_ft_font_set_load_flags (hb_font_t* font, int load_flags);
// void hb_ft_font_set_load_flags (::hb_font_t* font, gint load_flags);
void ft_font_set_load_flags (HarfBuzz::font_t font, gint load_flags) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font, gint load_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ft_font_set_load_flags;
  auto load_flags_to_c = load_flags;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c), (gint) (load_flags_to_c));
}

// void hb_ft_font_unlock_face (hb_font_t* font);
// void hb_ft_font_unlock_face (::hb_font_t* font);
void ft_font_unlock_face (HarfBuzz::font_t font) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ft_font_unlock_face;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c));
}

// hb_blob_t* hb_glib_blob_create (GBytes* gbytes);
// ::hb_blob_t* hb_glib_blob_create (::GBytes* gbytes);
HarfBuzz::blob_t glib_blob_create (GLib::Bytes gbytes) noexcept
{
  typedef ::hb_blob_t* (*call_wrap_t) (::GBytes* gbytes);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_glib_blob_create;
  auto gbytes_to_c = gi::unwrap (gbytes, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GBytes*) (gbytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_unicode_funcs_t* hb_glib_get_unicode_funcs ();
// ::hb_unicode_funcs_t* hb_glib_get_unicode_funcs ();
HarfBuzz::unicode_funcs_t glib_get_unicode_funcs () noexcept
{
  typedef ::hb_unicode_funcs_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_glib_get_unicode_funcs;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GUnicodeScript hb_glib_script_from_script (hb_script_t script);
// ::GUnicodeScript hb_glib_script_from_script (::hb_script_t script);
GLib::UnicodeScript glib_script_from_script (HarfBuzz::script_t script) noexcept
{
  typedef ::GUnicodeScript (*call_wrap_t) (::hb_script_t script);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_glib_script_from_script;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::hb_script_t) (script_to_c));
  return gi::wrap (_temp_ret);
}

// hb_script_t hb_glib_script_to_script (GUnicodeScript script);
// ::hb_script_t hb_glib_script_to_script (::GUnicodeScript script);
HarfBuzz::script_t glib_script_to_script (GLib::UnicodeScript script) noexcept
{
  typedef ::hb_script_t (*call_wrap_t) (::GUnicodeScript script);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_glib_script_to_script;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::GUnicodeScript) (script_to_c));
  return gi::wrap (_temp_ret);
}

// hb_glyph_flags_t hb_glyph_info_get_glyph_flags (const hb_glyph_info_t* info);
// ::hb_glyph_flags_t hb_glyph_info_get_glyph_flags (const ::hb_glyph_info_t* info);
HarfBuzz::glyph_flags_t glyph_info_get_glyph_flags (const HarfBuzz::glyph_info_t & info) noexcept
{
  typedef ::hb_glyph_flags_t (*call_wrap_t) (const ::hb_glyph_info_t* info);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_glyph_info_get_glyph_flags;
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_glyph_info_t*) (info_to_c));
  return gi::wrap (_temp_ret);
}

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
HarfBuzz::bool_t map_allocation_successful (const HarfBuzz::map_t & map) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_map_t* map);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_allocation_successful;
  auto map_to_c = gi::unwrap (map, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_map_t*) (map_to_c));
  return _temp_ret;
}

// void hb_map_clear (hb_map_t* map);
// void hb_map_clear (::hb_map_t* map);
void map_clear (HarfBuzz::map_t map) noexcept
{
  typedef void (*call_wrap_t) (::hb_map_t* map);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_clear;
  auto map_to_c = gi::unwrap (map, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_map_t*) (map_to_c));
}

// hb_map_t* hb_map_create ();
// ::hb_map_t* hb_map_create ();
HarfBuzz::map_t map_create () noexcept
{
  typedef ::hb_map_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_create;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_map_del (hb_map_t* map, hb_codepoint_t key);
// void hb_map_del (::hb_map_t* map, ::hb_codepoint_t key);
void map_del (HarfBuzz::map_t map, ::hb_codepoint_t key) noexcept
{
  typedef void (*call_wrap_t) (::hb_map_t* map, ::hb_codepoint_t key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_del;
  auto key_to_c = key;
  auto map_to_c = gi::unwrap (map, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_map_t*) (map_to_c), (::hb_codepoint_t) (key_to_c));
}

// void hb_map_destroy (hb_map_t* map);
// void hb_map_destroy (::hb_map_t* map);
void map_destroy (HarfBuzz::map_t map) noexcept
{
  typedef void (*call_wrap_t) (::hb_map_t* map);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_destroy;
  auto map_to_c = gi::unwrap (map, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_map_t*) (map_to_c));
}

// hb_codepoint_t hb_map_get (const hb_map_t* map, hb_codepoint_t key);
// ::hb_codepoint_t hb_map_get (const ::hb_map_t* map, ::hb_codepoint_t key);
HarfBuzz::codepoint_t map_get (const HarfBuzz::map_t & map, ::hb_codepoint_t key) noexcept
{
  typedef ::hb_codepoint_t (*call_wrap_t) (const ::hb_map_t* map, ::hb_codepoint_t key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_get;
  auto key_to_c = key;
  auto map_to_c = gi::unwrap (map, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_map_t*) (map_to_c), (::hb_codepoint_t) (key_to_c));
  return _temp_ret;
}

// hb_map_t* hb_map_get_empty ();
// ::hb_map_t* hb_map_get_empty ();
HarfBuzz::map_t map_get_empty () noexcept
{
  typedef ::hb_map_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_get_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// unsigned int hb_map_get_population (const hb_map_t* map);
// guint hb_map_get_population (const ::hb_map_t* map);
guint map_get_population (const HarfBuzz::map_t & map) noexcept
{
  typedef guint (*call_wrap_t) (const ::hb_map_t* map);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_get_population;
  auto map_to_c = gi::unwrap (map, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_map_t*) (map_to_c));
  return _temp_ret;
}

// void* hb_map_get_user_data (hb_map_t* map, hb_user_data_key_t* key);
// void* hb_map_get_user_data (::hb_map_t* map, ::hb_user_data_key_t* key);
gpointer map_get_user_data (HarfBuzz::map_t map, HarfBuzz::user_data_key_t key) noexcept
{
  typedef void* (*call_wrap_t) (::hb_map_t* map, ::hb_user_data_key_t* key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_get_user_data;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto map_to_c = gi::unwrap (map, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_map_t*) (map_to_c), (::hb_user_data_key_t*) (key_to_c));
  return _temp_ret;
}

// hb_bool_t hb_map_has (const hb_map_t* map, hb_codepoint_t key);
// ::hb_bool_t hb_map_has (const ::hb_map_t* map, ::hb_codepoint_t key);
HarfBuzz::bool_t map_has (const HarfBuzz::map_t & map, ::hb_codepoint_t key) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_map_t* map, ::hb_codepoint_t key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_has;
  auto key_to_c = key;
  auto map_to_c = gi::unwrap (map, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_map_t*) (map_to_c), (::hb_codepoint_t) (key_to_c));
  return _temp_ret;
}

// hb_bool_t hb_map_is_empty (const hb_map_t* map);
// ::hb_bool_t hb_map_is_empty (const ::hb_map_t* map);
HarfBuzz::bool_t map_is_empty (const HarfBuzz::map_t & map) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_map_t* map);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_is_empty;
  auto map_to_c = gi::unwrap (map, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_map_t*) (map_to_c));
  return _temp_ret;
}

// hb_map_t* hb_map_reference (hb_map_t* map);
// ::hb_map_t* hb_map_reference (::hb_map_t* map);
HarfBuzz::map_t map_reference (HarfBuzz::map_t map) noexcept
{
  typedef ::hb_map_t* (*call_wrap_t) (::hb_map_t* map);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_reference;
  auto map_to_c = gi::unwrap (map, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_map_t*) (map_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_map_set (hb_map_t* map, hb_codepoint_t key, hb_codepoint_t value);
// void hb_map_set (::hb_map_t* map, ::hb_codepoint_t key, ::hb_codepoint_t value);
void map_set (HarfBuzz::map_t map, ::hb_codepoint_t key, ::hb_codepoint_t value) noexcept
{
  typedef void (*call_wrap_t) (::hb_map_t* map, ::hb_codepoint_t key, ::hb_codepoint_t value);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_map_set;
  auto value_to_c = value;
  auto key_to_c = key;
  auto map_to_c = gi::unwrap (map, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_map_t*) (map_to_c), (::hb_codepoint_t) (key_to_c), (::hb_codepoint_t) (value_to_c));
}

// hb_bool_t hb_map_set_user_data (hb_map_t* map, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_map_set_user_data (::hb_map_t* map, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// unsigned int hb_ot_color_glyph_get_layers (hb_face_t* face, hb_codepoint_t glyph, unsigned int start_offset, unsigned int* layer_count, hb_ot_color_layer_t* layers);
// guint hb_ot_color_glyph_get_layers (::hb_face_t* face, ::hb_codepoint_t glyph, guint start_offset, guint* layer_count, ::hb_ot_color_layer_t** layers);
// SKIP; inconsistent out layers pointer depth (1 vs 2)

// hb_blob_t* hb_ot_color_glyph_reference_png (hb_font_t* font, hb_codepoint_t glyph);
// ::hb_blob_t* hb_ot_color_glyph_reference_png (::hb_font_t* font, ::hb_codepoint_t glyph);
HarfBuzz::blob_t ot_color_glyph_reference_png (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept
{
  typedef ::hb_blob_t* (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_color_glyph_reference_png;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_blob_t* hb_ot_color_glyph_reference_svg (hb_face_t* face, hb_codepoint_t glyph);
// ::hb_blob_t* hb_ot_color_glyph_reference_svg (::hb_face_t* face, ::hb_codepoint_t glyph);
HarfBuzz::blob_t ot_color_glyph_reference_svg (HarfBuzz::face_t face, ::hb_codepoint_t glyph) noexcept
{
  typedef ::hb_blob_t* (*call_wrap_t) (::hb_face_t* face, ::hb_codepoint_t glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_color_glyph_reference_svg;
  auto glyph_to_c = glyph;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_codepoint_t) (glyph_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_bool_t hb_ot_color_has_layers (hb_face_t* face);
// ::hb_bool_t hb_ot_color_has_layers (::hb_face_t* face);
HarfBuzz::bool_t ot_color_has_layers (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_color_has_layers;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// hb_bool_t hb_ot_color_has_palettes (hb_face_t* face);
// ::hb_bool_t hb_ot_color_has_palettes (::hb_face_t* face);
HarfBuzz::bool_t ot_color_has_palettes (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_color_has_palettes;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// hb_bool_t hb_ot_color_has_png (hb_face_t* face);
// ::hb_bool_t hb_ot_color_has_png (::hb_face_t* face);
HarfBuzz::bool_t ot_color_has_png (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_color_has_png;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// hb_bool_t hb_ot_color_has_svg (hb_face_t* face);
// ::hb_bool_t hb_ot_color_has_svg (::hb_face_t* face);
HarfBuzz::bool_t ot_color_has_svg (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_color_has_svg;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// hb_ot_name_id_t hb_ot_color_palette_color_get_name_id (hb_face_t* face, unsigned int color_index);
// ::hb_ot_name_id_t hb_ot_color_palette_color_get_name_id (::hb_face_t* face, guint color_index);
HarfBuzz::ot_name_id_t ot_color_palette_color_get_name_id (HarfBuzz::face_t face, guint color_index) noexcept
{
  typedef ::hb_ot_name_id_t (*call_wrap_t) (::hb_face_t* face, guint color_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_color_palette_color_get_name_id;
  auto color_index_to_c = color_index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (color_index_to_c));
  return _temp_ret;
}

// unsigned int hb_ot_color_palette_get_colors (hb_face_t* face, unsigned int palette_index, unsigned int start_offset, unsigned int* color_count, hb_color_t* colors);
// guint hb_ot_color_palette_get_colors (::hb_face_t* face, guint palette_index, guint start_offset, guint* color_count, ::hb_color_t** colors);
guint ot_color_palette_get_colors (HarfBuzz::face_t face, guint palette_index, guint start_offset, std::vector<HarfBuzz::color_t> & colors) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, guint palette_index, guint start_offset, guint* color_count, ::hb_color_t** colors);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_color_palette_get_colors;
  typedef HarfBuzz::color_t colors_cpptype;
  typedef traits::ctype<colors_cpptype>::type colors_ctype;
  colors_ctype *colors_o;
  guint color_count;
  auto start_offset_to_c = start_offset;
  auto palette_index_to_c = palette_index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (palette_index_to_c), (guint) (start_offset_to_c), (guint*) (&color_count), (::hb_color_t**) ((::hb_color_t**) &colors_o));
  colors.resize(color_count);
  detail::wrap_array (colors_o, gi::transfer_full, color_count, colors.data());
  g_free (colors_o);
  return _temp_ret;
}

// unsigned int hb_ot_color_palette_get_count (hb_face_t* face);
// guint hb_ot_color_palette_get_count (::hb_face_t* face);
guint ot_color_palette_get_count (HarfBuzz::face_t face) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_color_palette_get_count;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// hb_ot_color_palette_flags_t hb_ot_color_palette_get_flags (hb_face_t* face, unsigned int palette_index);
// ::hb_ot_color_palette_flags_t hb_ot_color_palette_get_flags (::hb_face_t* face, guint palette_index);
HarfBuzz::ot_color_palette_flags_t ot_color_palette_get_flags (HarfBuzz::face_t face, guint palette_index) noexcept
{
  typedef ::hb_ot_color_palette_flags_t (*call_wrap_t) (::hb_face_t* face, guint palette_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_color_palette_get_flags;
  auto palette_index_to_c = palette_index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (palette_index_to_c));
  return gi::wrap (_temp_ret);
}

// hb_ot_name_id_t hb_ot_color_palette_get_name_id (hb_face_t* face, unsigned int palette_index);
// ::hb_ot_name_id_t hb_ot_color_palette_get_name_id (::hb_face_t* face, guint palette_index);
HarfBuzz::ot_name_id_t ot_color_palette_get_name_id (HarfBuzz::face_t face, guint palette_index) noexcept
{
  typedef ::hb_ot_name_id_t (*call_wrap_t) (::hb_face_t* face, guint palette_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_color_palette_get_name_id;
  auto palette_index_to_c = palette_index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (palette_index_to_c));
  return _temp_ret;
}

// void hb_ot_font_set_funcs (hb_font_t* font);
// void hb_ot_font_set_funcs (::hb_font_t* font);
void ot_font_set_funcs (HarfBuzz::font_t font) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_t* font);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_font_set_funcs;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_font_t*) (font_to_c));
}

// void hb_ot_layout_collect_features (hb_face_t* face, hb_tag_t table_tag, const hb_tag_t* scripts, const hb_tag_t* languages, const hb_tag_t* features, hb_set_t* feature_indexes);
// void hb_ot_layout_collect_features (::hb_face_t* face, ::hb_tag_t table_tag, const ::hb_tag_t scripts, const ::hb_tag_t languages, const ::hb_tag_t features, ::hb_set_t* feature_indexes);
// SKIP; inconsistent in features pointer depth (1 vs 0), inconsistent in languages pointer depth (1 vs 0), inconsistent in scripts pointer depth (1 vs 0)

// void hb_ot_layout_collect_lookups (hb_face_t* face, hb_tag_t table_tag, const hb_tag_t* scripts, const hb_tag_t* languages, const hb_tag_t* features, hb_set_t* lookup_indexes);
// void hb_ot_layout_collect_lookups (::hb_face_t* face, ::hb_tag_t table_tag, const ::hb_tag_t scripts, const ::hb_tag_t languages, const ::hb_tag_t features, ::hb_set_t* lookup_indexes);
// SKIP; inconsistent in features pointer depth (1 vs 0), inconsistent in languages pointer depth (1 vs 0), inconsistent in scripts pointer depth (1 vs 0)

// unsigned int hb_ot_layout_feature_get_characters (hb_face_t* face, hb_tag_t table_tag, unsigned int feature_index, unsigned int start_offset, unsigned int* char_count, hb_codepoint_t* characters);
// guint hb_ot_layout_feature_get_characters (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, guint start_offset, guint* char_count, ::hb_codepoint_t* characters);
guint ot_layout_feature_get_characters (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint feature_index, guint start_offset, guint char_count, HarfBuzz::codepoint_t * characters) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, guint start_offset, guint* char_count, ::hb_codepoint_t* characters);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_feature_get_characters;
  auto start_offset_to_c = start_offset;
  auto feature_index_to_c = feature_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (feature_index_to_c), (guint) (start_offset_to_c), (guint*) (char_count), (::hb_codepoint_t*) (characters));
  return _temp_ret;
}

// unsigned int hb_ot_layout_feature_get_lookups (hb_face_t* face, hb_tag_t table_tag, unsigned int feature_index, unsigned int start_offset, unsigned int* lookup_count, unsigned int* lookup_indexes);
// guint hb_ot_layout_feature_get_lookups (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, guint start_offset, guint* lookup_count, guint** lookup_indexes);
guint ot_layout_feature_get_lookups (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint feature_index, guint start_offset, std::vector<guint> & lookup_indexes) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, guint start_offset, guint* lookup_count, guint** lookup_indexes);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_feature_get_lookups;
  typedef guint lookup_indexes_cpptype;
  typedef traits::ctype<lookup_indexes_cpptype>::type lookup_indexes_ctype;
  lookup_indexes_ctype *lookup_indexes_o;
  guint lookup_count;
  auto start_offset_to_c = start_offset;
  auto feature_index_to_c = feature_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (feature_index_to_c), (guint) (start_offset_to_c), (guint*) (&lookup_count), (guint**) ((guint**) &lookup_indexes_o));
  lookup_indexes.resize(lookup_count);
  detail::wrap_array (lookup_indexes_o, gi::transfer_full, lookup_count, lookup_indexes.data());
  g_free (lookup_indexes_o);
  return _temp_ret;
}

// hb_bool_t hb_ot_layout_feature_get_name_ids (hb_face_t* face, hb_tag_t table_tag, unsigned int feature_index, hb_ot_name_id_t* label_id, hb_ot_name_id_t* tooltip_id, hb_ot_name_id_t* sample_id, unsigned int* num_named_parameters, hb_ot_name_id_t* first_param_id);
// ::hb_bool_t hb_ot_layout_feature_get_name_ids (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, ::hb_ot_name_id_t* label_id, ::hb_ot_name_id_t* tooltip_id, ::hb_ot_name_id_t* sample_id, guint* num_named_parameters, ::hb_ot_name_id_t* first_param_id);
HarfBuzz::bool_t ot_layout_feature_get_name_ids (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint feature_index, HarfBuzz::ot_name_id_t * label_id, HarfBuzz::ot_name_id_t * tooltip_id, HarfBuzz::ot_name_id_t * sample_id, guint * num_named_parameters, HarfBuzz::ot_name_id_t * first_param_id) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, ::hb_ot_name_id_t* label_id, ::hb_ot_name_id_t* tooltip_id, ::hb_ot_name_id_t* sample_id, guint* num_named_parameters, ::hb_ot_name_id_t* first_param_id);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_feature_get_name_ids;
  ::hb_ot_name_id_t first_param_id_o {};
  guint num_named_parameters_o {};
  ::hb_ot_name_id_t sample_id_o {};
  ::hb_ot_name_id_t tooltip_id_o {};
  ::hb_ot_name_id_t label_id_o {};
  auto feature_index_to_c = feature_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (feature_index_to_c), (::hb_ot_name_id_t*) (label_id ? &label_id_o : nullptr), (::hb_ot_name_id_t*) (tooltip_id ? &tooltip_id_o : nullptr), (::hb_ot_name_id_t*) (sample_id ? &sample_id_o : nullptr), (guint*) (num_named_parameters ? &num_named_parameters_o : nullptr), (::hb_ot_name_id_t*) (first_param_id ? &first_param_id_o : nullptr));
  if (first_param_id) *first_param_id = first_param_id_o;
  if (num_named_parameters) *num_named_parameters = num_named_parameters_o;
  if (sample_id) *sample_id = sample_id_o;
  if (tooltip_id) *tooltip_id = tooltip_id_o;
  if (label_id) *label_id = label_id_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::ot_name_id_t, HarfBuzz::ot_name_id_t, HarfBuzz::ot_name_id_t, guint, HarfBuzz::ot_name_id_t> ot_layout_feature_get_name_ids (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint feature_index) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, ::hb_ot_name_id_t* label_id, ::hb_ot_name_id_t* tooltip_id, ::hb_ot_name_id_t* sample_id, guint* num_named_parameters, ::hb_ot_name_id_t* first_param_id);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_feature_get_name_ids;
  ::hb_ot_name_id_t first_param_id_o {};
  guint num_named_parameters_o {};
  ::hb_ot_name_id_t sample_id_o {};
  ::hb_ot_name_id_t tooltip_id_o {};
  ::hb_ot_name_id_t label_id_o {};
  auto feature_index_to_c = feature_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (feature_index_to_c), (::hb_ot_name_id_t*) (&label_id_o), (::hb_ot_name_id_t*) (&tooltip_id_o), (::hb_ot_name_id_t*) (&sample_id_o), (guint*) (&num_named_parameters_o), (::hb_ot_name_id_t*) (&first_param_id_o));
  return std::make_tuple (_temp_ret, label_id_o, tooltip_id_o, sample_id_o, num_named_parameters_o, first_param_id_o);
}

// unsigned int hb_ot_layout_feature_with_variations_get_lookups (hb_face_t* face, hb_tag_t table_tag, unsigned int feature_index, unsigned int variations_index, unsigned int start_offset, unsigned int* lookup_count, unsigned int* lookup_indexes);
// guint hb_ot_layout_feature_with_variations_get_lookups (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, guint variations_index, guint start_offset, guint* lookup_count, guint** lookup_indexes);
guint ot_layout_feature_with_variations_get_lookups (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint feature_index, guint variations_index, guint start_offset, std::vector<guint> & lookup_indexes) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint feature_index, guint variations_index, guint start_offset, guint* lookup_count, guint** lookup_indexes);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_feature_with_variations_get_lookups;
  typedef guint lookup_indexes_cpptype;
  typedef traits::ctype<lookup_indexes_cpptype>::type lookup_indexes_ctype;
  lookup_indexes_ctype *lookup_indexes_o;
  guint lookup_count;
  auto start_offset_to_c = start_offset;
  auto variations_index_to_c = variations_index;
  auto feature_index_to_c = feature_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (feature_index_to_c), (guint) (variations_index_to_c), (guint) (start_offset_to_c), (guint*) (&lookup_count), (guint**) ((guint**) &lookup_indexes_o));
  lookup_indexes.resize(lookup_count);
  detail::wrap_array (lookup_indexes_o, gi::transfer_full, lookup_count, lookup_indexes.data());
  g_free (lookup_indexes_o);
  return _temp_ret;
}

// unsigned int hb_ot_layout_get_attach_points (hb_face_t* face, hb_codepoint_t glyph, unsigned int start_offset, unsigned int* point_count, unsigned int* point_array);
// guint hb_ot_layout_get_attach_points (::hb_face_t* face, ::hb_codepoint_t glyph, guint start_offset, guint* point_count, guint** point_array);
guint ot_layout_get_attach_points (HarfBuzz::face_t face, ::hb_codepoint_t glyph, guint start_offset, std::vector<guint> & point_array) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, ::hb_codepoint_t glyph, guint start_offset, guint* point_count, guint** point_array);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_get_attach_points;
  typedef guint point_array_cpptype;
  typedef traits::ctype<point_array_cpptype>::type point_array_ctype;
  point_array_ctype *point_array_o;
  guint point_count;
  auto start_offset_to_c = start_offset;
  auto glyph_to_c = glyph;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_codepoint_t) (glyph_to_c), (guint) (start_offset_to_c), (guint*) (&point_count), (guint**) ((guint**) &point_array_o));
  point_array.resize(point_count);
  detail::wrap_array (point_array_o, gi::transfer_full, point_count, point_array.data());
  g_free (point_array_o);
  return _temp_ret;
}

// hb_bool_t hb_ot_layout_get_baseline (hb_font_t* font, hb_ot_layout_baseline_tag_t baseline_tag, hb_direction_t direction, hb_tag_t script_tag, hb_tag_t language_tag, hb_position_t* coord);
// ::hb_bool_t hb_ot_layout_get_baseline (::hb_font_t* font, ::hb_ot_layout_baseline_tag_t baseline_tag, ::hb_direction_t direction, ::hb_tag_t script_tag, ::hb_tag_t language_tag, ::hb_position_t* coord);
HarfBuzz::bool_t ot_layout_get_baseline (HarfBuzz::font_t font, HarfBuzz::ot_layout_baseline_tag_t baseline_tag, HarfBuzz::direction_t direction, ::hb_tag_t script_tag, ::hb_tag_t language_tag, HarfBuzz::position_t & coord) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_ot_layout_baseline_tag_t baseline_tag, ::hb_direction_t direction, ::hb_tag_t script_tag, ::hb_tag_t language_tag, ::hb_position_t* coord);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_get_baseline;
  ::hb_position_t coord_o {};
  auto language_tag_to_c = language_tag;
  auto script_tag_to_c = script_tag;
  auto direction_to_c = gi::unwrap (direction);
  auto baseline_tag_to_c = gi::unwrap (baseline_tag);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_ot_layout_baseline_tag_t) (baseline_tag_to_c), (::hb_direction_t) (direction_to_c), (::hb_tag_t) (script_tag_to_c), (::hb_tag_t) (language_tag_to_c), (::hb_position_t*) (&coord_o));
  coord = coord_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t> ot_layout_get_baseline (HarfBuzz::font_t font, HarfBuzz::ot_layout_baseline_tag_t baseline_tag, HarfBuzz::direction_t direction, ::hb_tag_t script_tag, ::hb_tag_t language_tag) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_ot_layout_baseline_tag_t baseline_tag, ::hb_direction_t direction, ::hb_tag_t script_tag, ::hb_tag_t language_tag, ::hb_position_t* coord);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_get_baseline;
  ::hb_position_t coord_o {};
  auto language_tag_to_c = language_tag;
  auto script_tag_to_c = script_tag;
  auto direction_to_c = gi::unwrap (direction);
  auto baseline_tag_to_c = gi::unwrap (baseline_tag);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_ot_layout_baseline_tag_t) (baseline_tag_to_c), (::hb_direction_t) (direction_to_c), (::hb_tag_t) (script_tag_to_c), (::hb_tag_t) (language_tag_to_c), (::hb_position_t*) (&coord_o));
  return std::make_tuple (_temp_ret, coord_o);
}

// hb_ot_layout_glyph_class_t hb_ot_layout_get_glyph_class (hb_face_t* face, hb_codepoint_t glyph);
// ::hb_ot_layout_glyph_class_t hb_ot_layout_get_glyph_class (::hb_face_t* face, ::hb_codepoint_t glyph);
HarfBuzz::ot_layout_glyph_class_t ot_layout_get_glyph_class (HarfBuzz::face_t face, ::hb_codepoint_t glyph) noexcept
{
  typedef ::hb_ot_layout_glyph_class_t (*call_wrap_t) (::hb_face_t* face, ::hb_codepoint_t glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_get_glyph_class;
  auto glyph_to_c = glyph;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_codepoint_t) (glyph_to_c));
  return gi::wrap (_temp_ret);
}

// void hb_ot_layout_get_glyphs_in_class (hb_face_t* face, hb_ot_layout_glyph_class_t klass, hb_set_t* glyphs);
// void hb_ot_layout_get_glyphs_in_class (::hb_face_t* face, ::hb_ot_layout_glyph_class_t klass, ::hb_set_t* glyphs);
void ot_layout_get_glyphs_in_class (HarfBuzz::face_t face, HarfBuzz::ot_layout_glyph_class_t klass, HarfBuzz::set_t & glyphs) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, ::hb_ot_layout_glyph_class_t klass, ::hb_set_t* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_get_glyphs_in_class;
  traits::unset_wrapper<::hb_set_t>::type glyphs_c;
  auto klass_to_c = gi::unwrap (klass);
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_ot_layout_glyph_class_t) (klass_to_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_c));
  glyphs = gi::wrap ((::hb_set_t*) &glyphs_c, gi::transfer_none, gi::direction_out);
}
HarfBuzz::set_t ot_layout_get_glyphs_in_class (HarfBuzz::face_t face, HarfBuzz::ot_layout_glyph_class_t klass) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, ::hb_ot_layout_glyph_class_t klass, ::hb_set_t* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_get_glyphs_in_class;
  traits::unset_wrapper<::hb_set_t>::type glyphs_c;
  auto klass_to_c = gi::unwrap (klass);
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_ot_layout_glyph_class_t) (klass_to_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_c));
  return gi::wrap ((::hb_set_t*) &glyphs_c, gi::transfer_none, gi::direction_out);
}

// unsigned int hb_ot_layout_get_ligature_carets (hb_font_t* font, hb_direction_t direction, hb_codepoint_t glyph, unsigned int start_offset, unsigned int* caret_count, hb_position_t* caret_array);
// guint hb_ot_layout_get_ligature_carets (::hb_font_t* font, ::hb_direction_t direction, ::hb_codepoint_t glyph, guint start_offset, guint* caret_count, ::hb_position_t** caret_array);
guint ot_layout_get_ligature_carets (HarfBuzz::font_t font, HarfBuzz::direction_t direction, ::hb_codepoint_t glyph, guint start_offset, std::vector<HarfBuzz::position_t> & caret_array) noexcept
{
  typedef guint (*call_wrap_t) (::hb_font_t* font, ::hb_direction_t direction, ::hb_codepoint_t glyph, guint start_offset, guint* caret_count, ::hb_position_t** caret_array);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_get_ligature_carets;
  typedef HarfBuzz::position_t caret_array_cpptype;
  typedef traits::ctype<caret_array_cpptype>::type caret_array_ctype;
  caret_array_ctype *caret_array_o;
  guint caret_count;
  auto start_offset_to_c = start_offset;
  auto glyph_to_c = glyph;
  auto direction_to_c = gi::unwrap (direction);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_direction_t) (direction_to_c), (::hb_codepoint_t) (glyph_to_c), (guint) (start_offset_to_c), (guint*) (&caret_count), (::hb_position_t**) ((::hb_position_t**) &caret_array_o));
  caret_array.resize(caret_count);
  detail::wrap_array (caret_array_o, gi::transfer_full, caret_count, caret_array.data());
  g_free (caret_array_o);
  return _temp_ret;
}

// hb_bool_t hb_ot_layout_get_size_params (hb_face_t* face, unsigned int* design_size, unsigned int* subfamily_id, hb_ot_name_id_t* subfamily_name_id, unsigned int* range_start, unsigned int* range_end);
// ::hb_bool_t hb_ot_layout_get_size_params (::hb_face_t* face, guint* design_size, guint* subfamily_id, ::hb_ot_name_id_t* subfamily_name_id, guint* range_start, guint* range_end);
HarfBuzz::bool_t ot_layout_get_size_params (HarfBuzz::face_t face, guint & design_size, guint & subfamily_id, HarfBuzz::ot_name_id_t & subfamily_name_id, guint & range_start, guint & range_end) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, guint* design_size, guint* subfamily_id, ::hb_ot_name_id_t* subfamily_name_id, guint* range_start, guint* range_end);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_get_size_params;
  guint range_end_o {};
  guint range_start_o {};
  ::hb_ot_name_id_t subfamily_name_id_o {};
  guint subfamily_id_o {};
  guint design_size_o {};
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (guint*) (&design_size_o), (guint*) (&subfamily_id_o), (::hb_ot_name_id_t*) (&subfamily_name_id_o), (guint*) (&range_start_o), (guint*) (&range_end_o));
  range_end = range_end_o;
  range_start = range_start_o;
  subfamily_name_id = subfamily_name_id_o;
  subfamily_id = subfamily_id_o;
  design_size = design_size_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, guint, guint, HarfBuzz::ot_name_id_t, guint, guint> ot_layout_get_size_params (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, guint* design_size, guint* subfamily_id, ::hb_ot_name_id_t* subfamily_name_id, guint* range_start, guint* range_end);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_get_size_params;
  guint range_end_o {};
  guint range_start_o {};
  ::hb_ot_name_id_t subfamily_name_id_o {};
  guint subfamily_id_o {};
  guint design_size_o {};
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (guint*) (&design_size_o), (guint*) (&subfamily_id_o), (::hb_ot_name_id_t*) (&subfamily_name_id_o), (guint*) (&range_start_o), (guint*) (&range_end_o));
  return std::make_tuple (_temp_ret, design_size_o, subfamily_id_o, subfamily_name_id_o, range_start_o, range_end_o);
}

// hb_bool_t hb_ot_layout_has_glyph_classes (hb_face_t* face);
// ::hb_bool_t hb_ot_layout_has_glyph_classes (::hb_face_t* face);
HarfBuzz::bool_t ot_layout_has_glyph_classes (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_has_glyph_classes;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// hb_bool_t hb_ot_layout_has_positioning (hb_face_t* face);
// ::hb_bool_t hb_ot_layout_has_positioning (::hb_face_t* face);
HarfBuzz::bool_t ot_layout_has_positioning (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_has_positioning;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// hb_bool_t hb_ot_layout_has_substitution (hb_face_t* face);
// ::hb_bool_t hb_ot_layout_has_substitution (::hb_face_t* face);
HarfBuzz::bool_t ot_layout_has_substitution (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_has_substitution;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// hb_bool_t hb_ot_layout_language_find_feature (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int language_index, hb_tag_t feature_tag, unsigned int* feature_index);
// ::hb_bool_t hb_ot_layout_language_find_feature (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, ::hb_tag_t feature_tag, guint* feature_index);
HarfBuzz::bool_t ot_layout_language_find_feature (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, ::hb_tag_t feature_tag, guint & feature_index) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, ::hb_tag_t feature_tag, guint* feature_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_language_find_feature;
  guint feature_index_o {};
  auto feature_tag_to_c = feature_tag;
  auto language_index_to_c = language_index;
  auto script_index_to_c = script_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (script_index_to_c), (guint) (language_index_to_c), (::hb_tag_t) (feature_tag_to_c), (guint*) (&feature_index_o));
  feature_index = feature_index_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, guint> ot_layout_language_find_feature (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, ::hb_tag_t feature_tag) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, ::hb_tag_t feature_tag, guint* feature_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_language_find_feature;
  guint feature_index_o {};
  auto feature_tag_to_c = feature_tag;
  auto language_index_to_c = language_index;
  auto script_index_to_c = script_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (script_index_to_c), (guint) (language_index_to_c), (::hb_tag_t) (feature_tag_to_c), (guint*) (&feature_index_o));
  return std::make_tuple (_temp_ret, feature_index_o);
}

// unsigned int hb_ot_layout_language_get_feature_indexes (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int language_index, unsigned int start_offset, unsigned int* feature_count, unsigned int* feature_indexes);
// guint hb_ot_layout_language_get_feature_indexes (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint start_offset, guint* feature_count, guint** feature_indexes);
guint ot_layout_language_get_feature_indexes (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint start_offset, std::vector<guint> & feature_indexes) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint start_offset, guint* feature_count, guint** feature_indexes);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_language_get_feature_indexes;
  typedef guint feature_indexes_cpptype;
  typedef traits::ctype<feature_indexes_cpptype>::type feature_indexes_ctype;
  feature_indexes_ctype *feature_indexes_o;
  guint feature_count;
  auto start_offset_to_c = start_offset;
  auto language_index_to_c = language_index;
  auto script_index_to_c = script_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (script_index_to_c), (guint) (language_index_to_c), (guint) (start_offset_to_c), (guint*) (&feature_count), (guint**) ((guint**) &feature_indexes_o));
  feature_indexes.resize(feature_count);
  detail::wrap_array (feature_indexes_o, gi::transfer_full, feature_count, feature_indexes.data());
  g_free (feature_indexes_o);
  return _temp_ret;
}

// unsigned int hb_ot_layout_language_get_feature_tags (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int language_index, unsigned int start_offset, unsigned int* feature_count, hb_tag_t* feature_tags);
// guint hb_ot_layout_language_get_feature_tags (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint start_offset, guint* feature_count, ::hb_tag_t** feature_tags);
guint ot_layout_language_get_feature_tags (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint start_offset, std::vector<HarfBuzz::tag_t> & feature_tags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint start_offset, guint* feature_count, ::hb_tag_t** feature_tags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_language_get_feature_tags;
  typedef HarfBuzz::tag_t feature_tags_cpptype;
  typedef traits::ctype<feature_tags_cpptype>::type feature_tags_ctype;
  feature_tags_ctype *feature_tags_o;
  guint feature_count;
  auto start_offset_to_c = start_offset;
  auto language_index_to_c = language_index;
  auto script_index_to_c = script_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (script_index_to_c), (guint) (language_index_to_c), (guint) (start_offset_to_c), (guint*) (&feature_count), (::hb_tag_t**) ((::hb_tag_t**) &feature_tags_o));
  feature_tags.resize(feature_count);
  detail::wrap_array (feature_tags_o, gi::transfer_full, feature_count, feature_tags.data());
  g_free (feature_tags_o);
  return _temp_ret;
}

// hb_bool_t hb_ot_layout_language_get_required_feature (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int language_index, unsigned int* feature_index, hb_tag_t* feature_tag);
// ::hb_bool_t hb_ot_layout_language_get_required_feature (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint* feature_index, ::hb_tag_t* feature_tag);
HarfBuzz::bool_t ot_layout_language_get_required_feature (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint & feature_index, HarfBuzz::tag_t & feature_tag) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint* feature_index, ::hb_tag_t* feature_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_language_get_required_feature;
  ::hb_tag_t feature_tag_o {};
  guint feature_index_o {};
  auto language_index_to_c = language_index;
  auto script_index_to_c = script_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (script_index_to_c), (guint) (language_index_to_c), (guint*) (&feature_index_o), (::hb_tag_t*) (&feature_tag_o));
  feature_tag = feature_tag_o;
  feature_index = feature_index_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, guint, HarfBuzz::tag_t> ot_layout_language_get_required_feature (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint* feature_index, ::hb_tag_t* feature_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_language_get_required_feature;
  ::hb_tag_t feature_tag_o {};
  guint feature_index_o {};
  auto language_index_to_c = language_index;
  auto script_index_to_c = script_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (script_index_to_c), (guint) (language_index_to_c), (guint*) (&feature_index_o), (::hb_tag_t*) (&feature_tag_o));
  return std::make_tuple (_temp_ret, feature_index_o, feature_tag_o);
}

// hb_bool_t hb_ot_layout_language_get_required_feature_index (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int language_index, unsigned int* feature_index);
// ::hb_bool_t hb_ot_layout_language_get_required_feature_index (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint* feature_index);
HarfBuzz::bool_t ot_layout_language_get_required_feature_index (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint & feature_index) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint* feature_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_language_get_required_feature_index;
  guint feature_index_o {};
  auto language_index_to_c = language_index;
  auto script_index_to_c = script_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (script_index_to_c), (guint) (language_index_to_c), (guint*) (&feature_index_o));
  feature_index = feature_index_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, guint> ot_layout_language_get_required_feature_index (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint language_index) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint language_index, guint* feature_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_language_get_required_feature_index;
  guint feature_index_o {};
  auto language_index_to_c = language_index;
  auto script_index_to_c = script_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (script_index_to_c), (guint) (language_index_to_c), (guint*) (&feature_index_o));
  return std::make_tuple (_temp_ret, feature_index_o);
}

// void hb_ot_layout_lookup_collect_glyphs (hb_face_t* face, hb_tag_t table_tag, unsigned int lookup_index, hb_set_t* glyphs_before, hb_set_t* glyphs_input, hb_set_t* glyphs_after, hb_set_t* glyphs_output);
// void hb_ot_layout_lookup_collect_glyphs (::hb_face_t* face, ::hb_tag_t table_tag, guint lookup_index, ::hb_set_t* glyphs_before, ::hb_set_t* glyphs_input, ::hb_set_t* glyphs_after, ::hb_set_t* glyphs_output);
void ot_layout_lookup_collect_glyphs (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint lookup_index, HarfBuzz::set_t & glyphs_before, HarfBuzz::set_t & glyphs_input, HarfBuzz::set_t & glyphs_after, HarfBuzz::set_t & glyphs_output) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint lookup_index, ::hb_set_t* glyphs_before, ::hb_set_t* glyphs_input, ::hb_set_t* glyphs_after, ::hb_set_t* glyphs_output);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_lookup_collect_glyphs;
  traits::unset_wrapper<::hb_set_t>::type glyphs_output_c;
  traits::unset_wrapper<::hb_set_t>::type glyphs_after_c;
  traits::unset_wrapper<::hb_set_t>::type glyphs_input_c;
  traits::unset_wrapper<::hb_set_t>::type glyphs_before_c;
  auto lookup_index_to_c = lookup_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (lookup_index_to_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_before_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_input_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_after_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_output_c));
  glyphs_output = gi::wrap ((::hb_set_t*) &glyphs_output_c, gi::transfer_none, gi::direction_out);
  glyphs_after = gi::wrap ((::hb_set_t*) &glyphs_after_c, gi::transfer_none, gi::direction_out);
  glyphs_input = gi::wrap ((::hb_set_t*) &glyphs_input_c, gi::transfer_none, gi::direction_out);
  glyphs_before = gi::wrap ((::hb_set_t*) &glyphs_before_c, gi::transfer_none, gi::direction_out);
}
std::tuple<HarfBuzz::set_t, HarfBuzz::set_t, HarfBuzz::set_t, HarfBuzz::set_t> ot_layout_lookup_collect_glyphs (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint lookup_index) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint lookup_index, ::hb_set_t* glyphs_before, ::hb_set_t* glyphs_input, ::hb_set_t* glyphs_after, ::hb_set_t* glyphs_output);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_lookup_collect_glyphs;
  traits::unset_wrapper<::hb_set_t>::type glyphs_output_c;
  traits::unset_wrapper<::hb_set_t>::type glyphs_after_c;
  traits::unset_wrapper<::hb_set_t>::type glyphs_input_c;
  traits::unset_wrapper<::hb_set_t>::type glyphs_before_c;
  auto lookup_index_to_c = lookup_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (lookup_index_to_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_before_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_input_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_after_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_output_c));
  return std::make_tuple (gi::wrap ((::hb_set_t*) &glyphs_before_c, gi::transfer_none, gi::direction_out), gi::wrap ((::hb_set_t*) &glyphs_input_c, gi::transfer_none, gi::direction_out), gi::wrap ((::hb_set_t*) &glyphs_after_c, gi::transfer_none, gi::direction_out), gi::wrap ((::hb_set_t*) &glyphs_output_c, gi::transfer_none, gi::direction_out));
}

// unsigned hb_ot_layout_lookup_get_glyph_alternates (hb_face_t* face, unsigned lookup_index, hb_codepoint_t glyph, unsigned start_offset, unsigned* alternate_count, hb_codepoint_t* alternate_glyphs);
// guint hb_ot_layout_lookup_get_glyph_alternates (::hb_face_t* face, guint lookup_index, ::hb_codepoint_t glyph, guint start_offset, guint* alternate_count, ::hb_codepoint_t* alternate_glyphs);
guint ot_layout_lookup_get_glyph_alternates (HarfBuzz::face_t face, guint lookup_index, ::hb_codepoint_t glyph, guint start_offset, guint alternate_count, HarfBuzz::codepoint_t * alternate_glyphs) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, guint lookup_index, ::hb_codepoint_t glyph, guint start_offset, guint* alternate_count, ::hb_codepoint_t* alternate_glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_lookup_get_glyph_alternates;
  auto start_offset_to_c = start_offset;
  auto glyph_to_c = glyph;
  auto lookup_index_to_c = lookup_index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (lookup_index_to_c), (::hb_codepoint_t) (glyph_to_c), (guint) (start_offset_to_c), (guint*) (alternate_count), (::hb_codepoint_t*) (alternate_glyphs));
  return _temp_ret;
}

// void hb_ot_layout_lookup_substitute_closure (hb_face_t* face, unsigned int lookup_index, hb_set_t* glyphs);
// void hb_ot_layout_lookup_substitute_closure (::hb_face_t* face, guint lookup_index, ::hb_set_t* glyphs);
void ot_layout_lookup_substitute_closure (HarfBuzz::face_t face, guint lookup_index, HarfBuzz::set_t & glyphs) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, guint lookup_index, ::hb_set_t* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_lookup_substitute_closure;
  traits::unset_wrapper<::hb_set_t>::type glyphs_c;
  auto lookup_index_to_c = lookup_index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (lookup_index_to_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_c));
  glyphs = gi::wrap ((::hb_set_t*) &glyphs_c, gi::transfer_none, gi::direction_out);
}
HarfBuzz::set_t ot_layout_lookup_substitute_closure (HarfBuzz::face_t face, guint lookup_index) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, guint lookup_index, ::hb_set_t* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_lookup_substitute_closure;
  traits::unset_wrapper<::hb_set_t>::type glyphs_c;
  auto lookup_index_to_c = lookup_index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (lookup_index_to_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_c));
  return gi::wrap ((::hb_set_t*) &glyphs_c, gi::transfer_none, gi::direction_out);
}

// hb_bool_t hb_ot_layout_lookup_would_substitute (hb_face_t* face, unsigned int lookup_index, const hb_codepoint_t* glyphs, unsigned int glyphs_length, hb_bool_t zero_context);
// ::hb_bool_t hb_ot_layout_lookup_would_substitute (::hb_face_t* face, guint lookup_index, const ::hb_codepoint_t glyphs, guint glyphs_length, ::hb_bool_t zero_context);
// SKIP; inconsistent in glyphs pointer depth (1 vs 0)

// void hb_ot_layout_lookups_substitute_closure (hb_face_t* face, const hb_set_t* lookups, hb_set_t* glyphs);
// void hb_ot_layout_lookups_substitute_closure (::hb_face_t* face, const ::hb_set_t* lookups, ::hb_set_t* glyphs);
void ot_layout_lookups_substitute_closure (HarfBuzz::face_t face, const HarfBuzz::set_t & lookups, HarfBuzz::set_t & glyphs) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, const ::hb_set_t* lookups, ::hb_set_t* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_lookups_substitute_closure;
  traits::unset_wrapper<::hb_set_t>::type glyphs_c;
  auto lookups_to_c = gi::unwrap (lookups, gi::transfer_none, gi::direction_in);
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (const ::hb_set_t*) (lookups_to_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_c));
  glyphs = gi::wrap ((::hb_set_t*) &glyphs_c, gi::transfer_none, gi::direction_out);
}
HarfBuzz::set_t ot_layout_lookups_substitute_closure (HarfBuzz::face_t face, const HarfBuzz::set_t & lookups) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, const ::hb_set_t* lookups, ::hb_set_t* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_lookups_substitute_closure;
  traits::unset_wrapper<::hb_set_t>::type glyphs_c;
  auto lookups_to_c = gi::unwrap (lookups, gi::transfer_none, gi::direction_in);
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (const ::hb_set_t*) (lookups_to_c), (::hb_set_t*) ((::hb_set_t*) &glyphs_c));
  return gi::wrap ((::hb_set_t*) &glyphs_c, gi::transfer_none, gi::direction_out);
}

// unsigned int hb_ot_layout_script_get_language_tags (hb_face_t* face, hb_tag_t table_tag, unsigned int script_index, unsigned int start_offset, unsigned int* language_count, hb_tag_t* language_tags);
// guint hb_ot_layout_script_get_language_tags (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint start_offset, guint* language_count, ::hb_tag_t** language_tags);
guint ot_layout_script_get_language_tags (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint script_index, guint start_offset, std::vector<HarfBuzz::tag_t> & language_tags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint script_index, guint start_offset, guint* language_count, ::hb_tag_t** language_tags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_script_get_language_tags;
  typedef HarfBuzz::tag_t language_tags_cpptype;
  typedef traits::ctype<language_tags_cpptype>::type language_tags_ctype;
  language_tags_ctype *language_tags_o;
  guint language_count;
  auto start_offset_to_c = start_offset;
  auto script_index_to_c = script_index;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (script_index_to_c), (guint) (start_offset_to_c), (guint*) (&language_count), (::hb_tag_t**) ((::hb_tag_t**) &language_tags_o));
  language_tags.resize(language_count);
  detail::wrap_array (language_tags_o, gi::transfer_full, language_count, language_tags.data());
  g_free (language_tags_o);
  return _temp_ret;
}

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
HarfBuzz::bool_t ot_layout_table_find_script (HarfBuzz::face_t face, ::hb_tag_t table_tag, ::hb_tag_t script_tag, guint & script_index) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, ::hb_tag_t script_tag, guint* script_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_table_find_script;
  guint script_index_o {};
  auto script_tag_to_c = script_tag;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (::hb_tag_t) (script_tag_to_c), (guint*) (&script_index_o));
  script_index = script_index_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, guint> ot_layout_table_find_script (HarfBuzz::face_t face, ::hb_tag_t table_tag, ::hb_tag_t script_tag) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, ::hb_tag_t script_tag, guint* script_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_table_find_script;
  guint script_index_o {};
  auto script_tag_to_c = script_tag;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (::hb_tag_t) (script_tag_to_c), (guint*) (&script_index_o));
  return std::make_tuple (_temp_ret, script_index_o);
}

// unsigned int hb_ot_layout_table_get_feature_tags (hb_face_t* face, hb_tag_t table_tag, unsigned int start_offset, unsigned int* feature_count, hb_tag_t* feature_tags);
// guint hb_ot_layout_table_get_feature_tags (::hb_face_t* face, ::hb_tag_t table_tag, guint start_offset, guint* feature_count, ::hb_tag_t** feature_tags);
guint ot_layout_table_get_feature_tags (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint start_offset, std::vector<HarfBuzz::tag_t> & feature_tags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint start_offset, guint* feature_count, ::hb_tag_t** feature_tags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_table_get_feature_tags;
  typedef HarfBuzz::tag_t feature_tags_cpptype;
  typedef traits::ctype<feature_tags_cpptype>::type feature_tags_ctype;
  feature_tags_ctype *feature_tags_o;
  guint feature_count;
  auto start_offset_to_c = start_offset;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (start_offset_to_c), (guint*) (&feature_count), (::hb_tag_t**) ((::hb_tag_t**) &feature_tags_o));
  feature_tags.resize(feature_count);
  detail::wrap_array (feature_tags_o, gi::transfer_full, feature_count, feature_tags.data());
  g_free (feature_tags_o);
  return _temp_ret;
}

// unsigned int hb_ot_layout_table_get_lookup_count (hb_face_t* face, hb_tag_t table_tag);
// guint hb_ot_layout_table_get_lookup_count (::hb_face_t* face, ::hb_tag_t table_tag);
guint ot_layout_table_get_lookup_count (HarfBuzz::face_t face, ::hb_tag_t table_tag) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_table_get_lookup_count;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c));
  return _temp_ret;
}

// unsigned int hb_ot_layout_table_get_script_tags (hb_face_t* face, hb_tag_t table_tag, unsigned int start_offset, unsigned int* script_count, hb_tag_t* script_tags);
// guint hb_ot_layout_table_get_script_tags (::hb_face_t* face, ::hb_tag_t table_tag, guint start_offset, guint* script_count, ::hb_tag_t** script_tags);
guint ot_layout_table_get_script_tags (HarfBuzz::face_t face, ::hb_tag_t table_tag, guint start_offset, std::vector<HarfBuzz::tag_t> & script_tags) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t table_tag, guint start_offset, guint* script_count, ::hb_tag_t** script_tags);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_layout_table_get_script_tags;
  typedef HarfBuzz::tag_t script_tags_cpptype;
  typedef traits::ctype<script_tags_cpptype>::type script_tags_ctype;
  script_tags_ctype *script_tags_o;
  guint script_count;
  auto start_offset_to_c = start_offset;
  auto table_tag_to_c = table_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (table_tag_to_c), (guint) (start_offset_to_c), (guint*) (&script_count), (::hb_tag_t**) ((::hb_tag_t**) &script_tags_o));
  script_tags.resize(script_count);
  detail::wrap_array (script_tags_o, gi::transfer_full, script_count, script_tags.data());
  g_free (script_tags_o);
  return _temp_ret;
}

// hb_bool_t hb_ot_layout_table_select_script (hb_face_t* face, hb_tag_t table_tag, unsigned int script_count, const hb_tag_t* script_tags, unsigned int* script_index, hb_tag_t* chosen_script);
// ::hb_bool_t hb_ot_layout_table_select_script (::hb_face_t* face, ::hb_tag_t table_tag, guint script_count, const ::hb_tag_t script_tags, guint* script_index, ::hb_tag_t* chosen_script);
// SKIP; inconsistent in script_tags pointer depth (1 vs 0)

// hb_position_t hb_ot_math_get_constant (hb_font_t* font, hb_ot_math_constant_t constant);
// ::hb_position_t hb_ot_math_get_constant (::hb_font_t* font, ::hb_ot_math_constant_t constant);
HarfBuzz::position_t ot_math_get_constant (HarfBuzz::font_t font, HarfBuzz::ot_math_constant_t constant) noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (::hb_font_t* font, ::hb_ot_math_constant_t constant);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_math_get_constant;
  auto constant_to_c = gi::unwrap (constant);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_ot_math_constant_t) (constant_to_c));
  return _temp_ret;
}

// unsigned int hb_ot_math_get_glyph_assembly (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, unsigned int start_offset, unsigned int* parts_count, hb_ot_math_glyph_part_t* parts, hb_position_t* italics_correction);
// guint hb_ot_math_get_glyph_assembly (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, guint start_offset, guint* parts_count, ::hb_ot_math_glyph_part_t** parts, ::hb_position_t* italics_correction);
// SKIP; inconsistent out parts pointer depth (1 vs 2)

// hb_position_t hb_ot_math_get_glyph_italics_correction (hb_font_t* font, hb_codepoint_t glyph);
// ::hb_position_t hb_ot_math_get_glyph_italics_correction (::hb_font_t* font, ::hb_codepoint_t glyph);
HarfBuzz::position_t ot_math_get_glyph_italics_correction (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_math_get_glyph_italics_correction;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c));
  return _temp_ret;
}

// hb_position_t hb_ot_math_get_glyph_kerning (hb_font_t* font, hb_codepoint_t glyph, hb_ot_math_kern_t kern, hb_position_t correction_height);
// ::hb_position_t hb_ot_math_get_glyph_kerning (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_ot_math_kern_t kern, ::hb_position_t correction_height);
HarfBuzz::position_t ot_math_get_glyph_kerning (HarfBuzz::font_t font, ::hb_codepoint_t glyph, HarfBuzz::ot_math_kern_t kern, ::hb_position_t correction_height) noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_ot_math_kern_t kern, ::hb_position_t correction_height);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_math_get_glyph_kerning;
  auto correction_height_to_c = correction_height;
  auto kern_to_c = gi::unwrap (kern);
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c), (::hb_ot_math_kern_t) (kern_to_c), (::hb_position_t) (correction_height_to_c));
  return _temp_ret;
}

// hb_position_t hb_ot_math_get_glyph_top_accent_attachment (hb_font_t* font, hb_codepoint_t glyph);
// ::hb_position_t hb_ot_math_get_glyph_top_accent_attachment (::hb_font_t* font, ::hb_codepoint_t glyph);
HarfBuzz::position_t ot_math_get_glyph_top_accent_attachment (HarfBuzz::font_t font, ::hb_codepoint_t glyph) noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (::hb_font_t* font, ::hb_codepoint_t glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_math_get_glyph_top_accent_attachment;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_codepoint_t) (glyph_to_c));
  return _temp_ret;
}

// unsigned int hb_ot_math_get_glyph_variants (hb_font_t* font, hb_codepoint_t glyph, hb_direction_t direction, unsigned int start_offset, unsigned int* variants_count, hb_ot_math_glyph_variant_t* variants);
// guint hb_ot_math_get_glyph_variants (::hb_font_t* font, ::hb_codepoint_t glyph, ::hb_direction_t direction, guint start_offset, guint* variants_count, ::hb_ot_math_glyph_variant_t** variants);
// SKIP; inconsistent out variants pointer depth (1 vs 2)

// hb_position_t hb_ot_math_get_min_connector_overlap (hb_font_t* font, hb_direction_t direction);
// ::hb_position_t hb_ot_math_get_min_connector_overlap (::hb_font_t* font, ::hb_direction_t direction);
HarfBuzz::position_t ot_math_get_min_connector_overlap (HarfBuzz::font_t font, HarfBuzz::direction_t direction) noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (::hb_font_t* font, ::hb_direction_t direction);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_math_get_min_connector_overlap;
  auto direction_to_c = gi::unwrap (direction);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_direction_t) (direction_to_c));
  return _temp_ret;
}

// hb_bool_t hb_ot_math_has_data (hb_face_t* face);
// ::hb_bool_t hb_ot_math_has_data (::hb_face_t* face);
HarfBuzz::bool_t ot_math_has_data (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_math_has_data;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// hb_bool_t hb_ot_math_is_glyph_extended_shape (hb_face_t* face, hb_codepoint_t glyph);
// ::hb_bool_t hb_ot_math_is_glyph_extended_shape (::hb_face_t* face, ::hb_codepoint_t glyph);
HarfBuzz::bool_t ot_math_is_glyph_extended_shape (HarfBuzz::face_t face, ::hb_codepoint_t glyph) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_codepoint_t glyph);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_math_is_glyph_extended_shape;
  auto glyph_to_c = glyph;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_codepoint_t) (glyph_to_c));
  return _temp_ret;
}

// unsigned int hb_ot_meta_get_entry_tags (hb_face_t* face, unsigned int start_offset, unsigned int* entries_count, hb_ot_meta_tag_t* entries);
// guint hb_ot_meta_get_entry_tags (::hb_face_t* face, guint start_offset, guint* entries_count, ::hb_ot_meta_tag_t* entries);
guint ot_meta_get_entry_tags (HarfBuzz::face_t face, guint start_offset, guint entries_count, HarfBuzz::ot_meta_tag_t * entries) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, guint start_offset, guint* entries_count, ::hb_ot_meta_tag_t* entries);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_meta_get_entry_tags;
  typedef HarfBuzz::ot_meta_tag_t entries_cpptype;
  std::vector<entries_cpptype> entries_o ((entries_count));
  auto start_offset_to_c = start_offset;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (start_offset_to_c), (guint*) (entries_o.size()), (::hb_ot_meta_tag_t*) (entries_o.data()));
  detail::wrap_array (entries_o.data(), gi::transfer_none, entries_o.size(), entries);
  return _temp_ret;
}

// hb_blob_t* hb_ot_meta_reference_entry (hb_face_t* face, hb_ot_meta_tag_t meta_tag);
// ::hb_blob_t* hb_ot_meta_reference_entry (::hb_face_t* face, ::hb_ot_meta_tag_t meta_tag);
HarfBuzz::blob_t ot_meta_reference_entry (HarfBuzz::face_t face, HarfBuzz::ot_meta_tag_t meta_tag) noexcept
{
  typedef ::hb_blob_t* (*call_wrap_t) (::hb_face_t* face, ::hb_ot_meta_tag_t meta_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_meta_reference_entry;
  auto meta_tag_to_c = gi::unwrap (meta_tag);
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_ot_meta_tag_t) (meta_tag_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_bool_t hb_ot_metrics_get_position (hb_font_t* font, hb_ot_metrics_tag_t metrics_tag, hb_position_t* position);
// ::hb_bool_t hb_ot_metrics_get_position (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag, ::hb_position_t* position);
HarfBuzz::bool_t ot_metrics_get_position (HarfBuzz::font_t font, HarfBuzz::ot_metrics_tag_t metrics_tag, HarfBuzz::position_t * position) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag, ::hb_position_t* position);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_metrics_get_position;
  ::hb_position_t position_o {};
  auto metrics_tag_to_c = gi::unwrap (metrics_tag);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_ot_metrics_tag_t) (metrics_tag_to_c), (::hb_position_t*) (position ? &position_o : nullptr));
  if (position) *position = position_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::position_t> ot_metrics_get_position (HarfBuzz::font_t font, HarfBuzz::ot_metrics_tag_t metrics_tag) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag, ::hb_position_t* position);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_metrics_get_position;
  ::hb_position_t position_o {};
  auto metrics_tag_to_c = gi::unwrap (metrics_tag);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_ot_metrics_tag_t) (metrics_tag_to_c), (::hb_position_t*) (&position_o));
  return std::make_tuple (_temp_ret, position_o);
}

// float hb_ot_metrics_get_variation (hb_font_t* font, hb_ot_metrics_tag_t metrics_tag);
// gfloat hb_ot_metrics_get_variation (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag);
gfloat ot_metrics_get_variation (HarfBuzz::font_t font, HarfBuzz::ot_metrics_tag_t metrics_tag) noexcept
{
  typedef gfloat (*call_wrap_t) (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_metrics_get_variation;
  auto metrics_tag_to_c = gi::unwrap (metrics_tag);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_ot_metrics_tag_t) (metrics_tag_to_c));
  return _temp_ret;
}

// hb_position_t hb_ot_metrics_get_x_variation (hb_font_t* font, hb_ot_metrics_tag_t metrics_tag);
// ::hb_position_t hb_ot_metrics_get_x_variation (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag);
HarfBuzz::position_t ot_metrics_get_x_variation (HarfBuzz::font_t font, HarfBuzz::ot_metrics_tag_t metrics_tag) noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_metrics_get_x_variation;
  auto metrics_tag_to_c = gi::unwrap (metrics_tag);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_ot_metrics_tag_t) (metrics_tag_to_c));
  return _temp_ret;
}

// hb_position_t hb_ot_metrics_get_y_variation (hb_font_t* font, hb_ot_metrics_tag_t metrics_tag);
// ::hb_position_t hb_ot_metrics_get_y_variation (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag);
HarfBuzz::position_t ot_metrics_get_y_variation (HarfBuzz::font_t font, HarfBuzz::ot_metrics_tag_t metrics_tag) noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (::hb_font_t* font, ::hb_ot_metrics_tag_t metrics_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_metrics_get_y_variation;
  auto metrics_tag_to_c = gi::unwrap (metrics_tag);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_font_t*) (font_to_c), (::hb_ot_metrics_tag_t) (metrics_tag_to_c));
  return _temp_ret;
}

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
HarfBuzz::script_t ot_tag_to_script (::hb_tag_t tag) noexcept
{
  typedef ::hb_script_t (*call_wrap_t) (::hb_tag_t tag);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_tag_to_script;
  auto tag_to_c = tag;
  auto _temp_ret = call_wrap_v ((::hb_tag_t) (tag_to_c));
  return gi::wrap (_temp_ret);
}

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
HarfBuzz::bool_t ot_var_find_axis_info (HarfBuzz::face_t face, ::hb_tag_t axis_tag, HarfBuzz::ot_var_axis_info_t & axis_info) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t axis_tag, ::hb_ot_var_axis_info_t* axis_info);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_var_find_axis_info;
  traits::unset_wrapper<::hb_ot_var_axis_info_t>::type axis_info_c;
  auto axis_tag_to_c = axis_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (axis_tag_to_c), (::hb_ot_var_axis_info_t*) ((::hb_ot_var_axis_info_t*) &axis_info_c));
  axis_info = gi::wrap ((::hb_ot_var_axis_info_t*) &axis_info_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::ot_var_axis_info_t> ot_var_find_axis_info (HarfBuzz::face_t face, ::hb_tag_t axis_tag) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face, ::hb_tag_t axis_tag, ::hb_ot_var_axis_info_t* axis_info);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_var_find_axis_info;
  traits::unset_wrapper<::hb_ot_var_axis_info_t>::type axis_info_c;
  auto axis_tag_to_c = axis_tag;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (::hb_tag_t) (axis_tag_to_c), (::hb_ot_var_axis_info_t*) ((::hb_ot_var_axis_info_t*) &axis_info_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::hb_ot_var_axis_info_t*) &axis_info_c, gi::transfer_none, gi::direction_out));
}

// unsigned int hb_ot_var_get_axis_count (hb_face_t* face);
// guint hb_ot_var_get_axis_count (::hb_face_t* face);
guint ot_var_get_axis_count (HarfBuzz::face_t face) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_var_get_axis_count;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// unsigned int hb_ot_var_get_axis_infos (hb_face_t* face, unsigned int start_offset, unsigned int* axes_count, hb_ot_var_axis_info_t* axes_array);
// guint hb_ot_var_get_axis_infos (::hb_face_t* face, guint start_offset, guint* axes_count, ::hb_ot_var_axis_info_t** axes_array);
// SKIP; inconsistent out axes_array pointer depth (1 vs 2)

// unsigned int hb_ot_var_get_named_instance_count (hb_face_t* face);
// guint hb_ot_var_get_named_instance_count (::hb_face_t* face);
guint ot_var_get_named_instance_count (HarfBuzz::face_t face) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_var_get_named_instance_count;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// hb_bool_t hb_ot_var_has_data (hb_face_t* face);
// ::hb_bool_t hb_ot_var_has_data (::hb_face_t* face);
HarfBuzz::bool_t ot_var_has_data (HarfBuzz::face_t face) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_face_t* face);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_var_has_data;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c));
  return _temp_ret;
}

// unsigned int hb_ot_var_named_instance_get_design_coords (hb_face_t* face, unsigned int instance_index, unsigned int* coords_length, float* coords);
// guint hb_ot_var_named_instance_get_design_coords (::hb_face_t* face, guint instance_index, guint* coords_length, gfloat** coords);
guint ot_var_named_instance_get_design_coords (HarfBuzz::face_t face, guint instance_index, std::vector<gfloat> & coords) noexcept
{
  typedef guint (*call_wrap_t) (::hb_face_t* face, guint instance_index, guint* coords_length, gfloat** coords);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_var_named_instance_get_design_coords;
  typedef gfloat coords_cpptype;
  typedef traits::ctype<coords_cpptype>::type coords_ctype;
  coords_ctype *coords_o;
  guint coords_length;
  auto instance_index_to_c = instance_index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (instance_index_to_c), (guint*) (&coords_length), (gfloat**) ((gfloat**) &coords_o));
  coords.resize(coords_length);
  detail::wrap_array (coords_o, gi::transfer_full, coords_length, coords.data());
  g_free (coords_o);
  return _temp_ret;
}

// hb_ot_name_id_t hb_ot_var_named_instance_get_postscript_name_id (hb_face_t* face, unsigned int instance_index);
// ::hb_ot_name_id_t hb_ot_var_named_instance_get_postscript_name_id (::hb_face_t* face, guint instance_index);
HarfBuzz::ot_name_id_t ot_var_named_instance_get_postscript_name_id (HarfBuzz::face_t face, guint instance_index) noexcept
{
  typedef ::hb_ot_name_id_t (*call_wrap_t) (::hb_face_t* face, guint instance_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_var_named_instance_get_postscript_name_id;
  auto instance_index_to_c = instance_index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (instance_index_to_c));
  return _temp_ret;
}

// hb_ot_name_id_t hb_ot_var_named_instance_get_subfamily_name_id (hb_face_t* face, unsigned int instance_index);
// ::hb_ot_name_id_t hb_ot_var_named_instance_get_subfamily_name_id (::hb_face_t* face, guint instance_index);
HarfBuzz::ot_name_id_t ot_var_named_instance_get_subfamily_name_id (HarfBuzz::face_t face, guint instance_index) noexcept
{
  typedef ::hb_ot_name_id_t (*call_wrap_t) (::hb_face_t* face, guint instance_index);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_var_named_instance_get_subfamily_name_id;
  auto instance_index_to_c = instance_index;
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_face_t*) (face_to_c), (guint) (instance_index_to_c));
  return _temp_ret;
}

// void hb_ot_var_normalize_coords (hb_face_t* face, unsigned int coords_length, const float* design_coords, int* normalized_coords);
// void hb_ot_var_normalize_coords (::hb_face_t* face, guint coords_length, const gfloat design_coords, gint* normalized_coords);
// SKIP; inconsistent in design_coords pointer depth (1 vs 0)

// void hb_ot_var_normalize_variations (hb_face_t* face, const hb_variation_t* variations, unsigned int variations_length, int* coords, unsigned int coords_length);
// void hb_ot_var_normalize_variations (::hb_face_t* face, const ::hb_variation_t* variations, guint variations_length, gint** coords, guint coords_length);
void ot_var_normalize_variations (HarfBuzz::face_t face, const HarfBuzz::variation_t & variations, guint variations_length, gint * coords, guint coords_length) noexcept
{
  typedef void (*call_wrap_t) (::hb_face_t* face, const ::hb_variation_t* variations, guint variations_length, gint** coords, guint coords_length);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_ot_var_normalize_variations;
  typedef gint coords_cpptype;
  typedef traits::ctype<coords_cpptype>::type coords_ctype;
  coords_ctype *coords_o;
  auto variations_length_to_c = variations_length;
  auto variations_to_c = gi::unwrap (variations, gi::transfer_none, gi::direction_in);
  auto face_to_c = gi::unwrap (face, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_face_t*) (face_to_c), (const ::hb_variation_t*) (variations_to_c), (guint) (variations_length_to_c), (gint**) ((gint**) &coords_o), (guint) (coords_length));
  detail::wrap_array (coords_o, gi::transfer_full, coords_length, coords);
  g_free (coords_o);
}

// hb_script_t hb_script_from_iso15924_tag (hb_tag_t tag);
// ::hb_script_t hb_script_from_iso15924_tag (::hb_tag_t tag);
HarfBuzz::script_t script_from_iso15924_tag (::hb_tag_t tag) noexcept
{
  typedef ::hb_script_t (*call_wrap_t) (::hb_tag_t tag);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_script_from_iso15924_tag;
  auto tag_to_c = tag;
  auto _temp_ret = call_wrap_v ((::hb_tag_t) (tag_to_c));
  return gi::wrap (_temp_ret);
}

// hb_script_t hb_script_from_string (const char* str, int len);
// ::hb_script_t hb_script_from_string (const guint8* str, gint len);
HarfBuzz::script_t script_from_string (guint8 * str, gint len) noexcept
{
  typedef ::hb_script_t (*call_wrap_t) (const guint8* str, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_script_from_string;
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gint) (str_w.size()));
  return gi::wrap (_temp_ret);
}

// hb_direction_t hb_script_get_horizontal_direction (hb_script_t script);
// ::hb_direction_t hb_script_get_horizontal_direction (::hb_script_t script);
HarfBuzz::direction_t script_get_horizontal_direction (HarfBuzz::script_t script) noexcept
{
  typedef ::hb_direction_t (*call_wrap_t) (::hb_script_t script);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_script_get_horizontal_direction;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::hb_script_t) (script_to_c));
  return gi::wrap (_temp_ret);
}

// hb_tag_t hb_script_to_iso15924_tag (hb_script_t script);
// ::hb_tag_t hb_script_to_iso15924_tag (::hb_script_t script);
HarfBuzz::tag_t script_to_iso15924_tag (HarfBuzz::script_t script) noexcept
{
  typedef ::hb_tag_t (*call_wrap_t) (::hb_script_t script);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_script_to_iso15924_tag;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::hb_script_t) (script_to_c));
  return _temp_ret;
}

// hb_bool_t hb_segment_properties_equal (const hb_segment_properties_t* a, const hb_segment_properties_t* b);
// ::hb_bool_t hb_segment_properties_equal (const ::hb_segment_properties_t* a, const ::hb_segment_properties_t* b);
HarfBuzz::bool_t segment_properties_equal (const HarfBuzz::segment_properties_t & a, const HarfBuzz::segment_properties_t & b) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_segment_properties_t* a, const ::hb_segment_properties_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_segment_properties_equal;
  auto b_to_c = gi::unwrap (b, gi::transfer_none, gi::direction_in);
  auto a_to_c = gi::unwrap (a, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_segment_properties_t*) (a_to_c), (const ::hb_segment_properties_t*) (b_to_c));
  return _temp_ret;
}

// unsigned int hb_segment_properties_hash (const hb_segment_properties_t* p);
// guint hb_segment_properties_hash (const ::hb_segment_properties_t* p);
guint segment_properties_hash (const HarfBuzz::segment_properties_t & p) noexcept
{
  typedef guint (*call_wrap_t) (const ::hb_segment_properties_t* p);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_segment_properties_hash;
  auto p_to_c = gi::unwrap (p, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_segment_properties_t*) (p_to_c));
  return _temp_ret;
}

// void hb_set_add (hb_set_t* set, hb_codepoint_t codepoint);
// void hb_set_add (::hb_set_t* set, ::hb_codepoint_t codepoint);
void set_add (HarfBuzz::set_t set, ::hb_codepoint_t codepoint) noexcept
{
  typedef void (*call_wrap_t) (::hb_set_t* set, ::hb_codepoint_t codepoint);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_add;
  auto codepoint_to_c = codepoint;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_set_t*) (set_to_c), (::hb_codepoint_t) (codepoint_to_c));
}

// void hb_set_add_range (hb_set_t* set, hb_codepoint_t first, hb_codepoint_t last);
// void hb_set_add_range (::hb_set_t* set, ::hb_codepoint_t first, ::hb_codepoint_t last);
void set_add_range (HarfBuzz::set_t set, ::hb_codepoint_t first, ::hb_codepoint_t last) noexcept
{
  typedef void (*call_wrap_t) (::hb_set_t* set, ::hb_codepoint_t first, ::hb_codepoint_t last);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_add_range;
  auto last_to_c = last;
  auto first_to_c = first;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_set_t*) (set_to_c), (::hb_codepoint_t) (first_to_c), (::hb_codepoint_t) (last_to_c));
}

// hb_bool_t hb_set_allocation_successful (const hb_set_t* set);
// ::hb_bool_t hb_set_allocation_successful (const ::hb_set_t* set);
HarfBuzz::bool_t set_allocation_successful (const HarfBuzz::set_t & set) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_set_t* set);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_allocation_successful;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c));
  return _temp_ret;
}

// void hb_set_clear (hb_set_t* set);
// void hb_set_clear (::hb_set_t* set);
void set_clear (HarfBuzz::set_t set) noexcept
{
  typedef void (*call_wrap_t) (::hb_set_t* set);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_clear;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_set_t*) (set_to_c));
}

// hb_set_t* hb_set_create ();
// ::hb_set_t* hb_set_create ();
HarfBuzz::set_t set_create () noexcept
{
  typedef ::hb_set_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_create;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_set_del (hb_set_t* set, hb_codepoint_t codepoint);
// void hb_set_del (::hb_set_t* set, ::hb_codepoint_t codepoint);
void set_del (HarfBuzz::set_t set, ::hb_codepoint_t codepoint) noexcept
{
  typedef void (*call_wrap_t) (::hb_set_t* set, ::hb_codepoint_t codepoint);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_del;
  auto codepoint_to_c = codepoint;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_set_t*) (set_to_c), (::hb_codepoint_t) (codepoint_to_c));
}

// void hb_set_del_range (hb_set_t* set, hb_codepoint_t first, hb_codepoint_t last);
// void hb_set_del_range (::hb_set_t* set, ::hb_codepoint_t first, ::hb_codepoint_t last);
void set_del_range (HarfBuzz::set_t set, ::hb_codepoint_t first, ::hb_codepoint_t last) noexcept
{
  typedef void (*call_wrap_t) (::hb_set_t* set, ::hb_codepoint_t first, ::hb_codepoint_t last);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_del_range;
  auto last_to_c = last;
  auto first_to_c = first;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_set_t*) (set_to_c), (::hb_codepoint_t) (first_to_c), (::hb_codepoint_t) (last_to_c));
}

// void hb_set_destroy (hb_set_t* set);
// void hb_set_destroy (::hb_set_t* set);
void set_destroy (HarfBuzz::set_t set) noexcept
{
  typedef void (*call_wrap_t) (::hb_set_t* set);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_destroy;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_set_t*) (set_to_c));
}

// hb_set_t* hb_set_get_empty ();
// ::hb_set_t* hb_set_get_empty ();
HarfBuzz::set_t set_get_empty () noexcept
{
  typedef ::hb_set_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_get_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_codepoint_t hb_set_get_max (const hb_set_t* set);
// ::hb_codepoint_t hb_set_get_max (const ::hb_set_t* set);
HarfBuzz::codepoint_t set_get_max (const HarfBuzz::set_t & set) noexcept
{
  typedef ::hb_codepoint_t (*call_wrap_t) (const ::hb_set_t* set);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_get_max;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c));
  return _temp_ret;
}

// hb_codepoint_t hb_set_get_min (const hb_set_t* set);
// ::hb_codepoint_t hb_set_get_min (const ::hb_set_t* set);
HarfBuzz::codepoint_t set_get_min (const HarfBuzz::set_t & set) noexcept
{
  typedef ::hb_codepoint_t (*call_wrap_t) (const ::hb_set_t* set);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_get_min;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c));
  return _temp_ret;
}

// unsigned int hb_set_get_population (const hb_set_t* set);
// guint hb_set_get_population (const ::hb_set_t* set);
guint set_get_population (const HarfBuzz::set_t & set) noexcept
{
  typedef guint (*call_wrap_t) (const ::hb_set_t* set);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_get_population;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c));
  return _temp_ret;
}

// void* hb_set_get_user_data (hb_set_t* set, hb_user_data_key_t* key);
// void* hb_set_get_user_data (::hb_set_t* set, ::hb_user_data_key_t* key);
gpointer set_get_user_data (HarfBuzz::set_t set, HarfBuzz::user_data_key_t key) noexcept
{
  typedef void* (*call_wrap_t) (::hb_set_t* set, ::hb_user_data_key_t* key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_get_user_data;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_set_t*) (set_to_c), (::hb_user_data_key_t*) (key_to_c));
  return _temp_ret;
}

// hb_bool_t hb_set_has (const hb_set_t* set, hb_codepoint_t codepoint);
// ::hb_bool_t hb_set_has (const ::hb_set_t* set, ::hb_codepoint_t codepoint);
HarfBuzz::bool_t set_has (const HarfBuzz::set_t & set, ::hb_codepoint_t codepoint) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_set_t* set, ::hb_codepoint_t codepoint);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_has;
  auto codepoint_to_c = codepoint;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c), (::hb_codepoint_t) (codepoint_to_c));
  return _temp_ret;
}

// void hb_set_intersect (hb_set_t* set, const hb_set_t* other);
// void hb_set_intersect (::hb_set_t* set, const ::hb_set_t* other);
void set_intersect (HarfBuzz::set_t set, const HarfBuzz::set_t & other) noexcept
{
  typedef void (*call_wrap_t) (::hb_set_t* set, const ::hb_set_t* other);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_intersect;
  auto other_to_c = gi::unwrap (other, gi::transfer_none, gi::direction_in);
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_set_t*) (set_to_c), (const ::hb_set_t*) (other_to_c));
}

// hb_bool_t hb_set_is_empty (const hb_set_t* set);
// ::hb_bool_t hb_set_is_empty (const ::hb_set_t* set);
HarfBuzz::bool_t set_is_empty (const HarfBuzz::set_t & set) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_set_t* set);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_is_empty;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c));
  return _temp_ret;
}

// hb_bool_t hb_set_is_equal (const hb_set_t* set, const hb_set_t* other);
// ::hb_bool_t hb_set_is_equal (const ::hb_set_t* set, const ::hb_set_t* other);
HarfBuzz::bool_t set_is_equal (const HarfBuzz::set_t & set, const HarfBuzz::set_t & other) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_set_t* set, const ::hb_set_t* other);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_is_equal;
  auto other_to_c = gi::unwrap (other, gi::transfer_none, gi::direction_in);
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c), (const ::hb_set_t*) (other_to_c));
  return _temp_ret;
}

// hb_bool_t hb_set_is_subset (const hb_set_t* set, const hb_set_t* larger_set);
// ::hb_bool_t hb_set_is_subset (const ::hb_set_t* set, const ::hb_set_t* larger_set);
HarfBuzz::bool_t set_is_subset (const HarfBuzz::set_t & set, const HarfBuzz::set_t & larger_set) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_set_t* set, const ::hb_set_t* larger_set);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_is_subset;
  auto larger_set_to_c = gi::unwrap (larger_set, gi::transfer_none, gi::direction_in);
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c), (const ::hb_set_t*) (larger_set_to_c));
  return _temp_ret;
}

// hb_bool_t hb_set_next (const hb_set_t* set, hb_codepoint_t* codepoint);
// ::hb_bool_t hb_set_next (const ::hb_set_t* set, ::hb_codepoint_t* codepoint);
HarfBuzz::bool_t set_next (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & codepoint) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_set_t* set, ::hb_codepoint_t* codepoint);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_next;
  auto codepoint_to_c = codepoint;
  ::hb_codepoint_t codepoint_o = codepoint_to_c;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c), (::hb_codepoint_t*) (&codepoint_o));
  codepoint = codepoint_o;
  return _temp_ret;
}

// hb_bool_t hb_set_next_range (const hb_set_t* set, hb_codepoint_t* first, hb_codepoint_t* last);
// ::hb_bool_t hb_set_next_range (const ::hb_set_t* set, ::hb_codepoint_t* first, ::hb_codepoint_t* last);
HarfBuzz::bool_t set_next_range (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & first, HarfBuzz::codepoint_t & last) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_set_t* set, ::hb_codepoint_t* first, ::hb_codepoint_t* last);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_next_range;
  auto last_to_c = last;
  ::hb_codepoint_t last_o = last_to_c;
  ::hb_codepoint_t first_o {};
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c), (::hb_codepoint_t*) (&first_o), (::hb_codepoint_t*) (&last_o));
  last = last_o;
  first = first_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> set_next_range (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & last) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_set_t* set, ::hb_codepoint_t* first, ::hb_codepoint_t* last);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_next_range;
  auto last_to_c = last;
  ::hb_codepoint_t last_o = last_to_c;
  ::hb_codepoint_t first_o {};
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c), (::hb_codepoint_t*) (&first_o), (::hb_codepoint_t*) (&last_o));
  last = last_o;
  return std::make_tuple (_temp_ret, first_o);
}

// hb_bool_t hb_set_previous (const hb_set_t* set, hb_codepoint_t* codepoint);
// ::hb_bool_t hb_set_previous (const ::hb_set_t* set, ::hb_codepoint_t* codepoint);
HarfBuzz::bool_t set_previous (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & codepoint) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_set_t* set, ::hb_codepoint_t* codepoint);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_previous;
  auto codepoint_to_c = codepoint;
  ::hb_codepoint_t codepoint_o = codepoint_to_c;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c), (::hb_codepoint_t*) (&codepoint_o));
  codepoint = codepoint_o;
  return _temp_ret;
}

// hb_bool_t hb_set_previous_range (const hb_set_t* set, hb_codepoint_t* first, hb_codepoint_t* last);
// ::hb_bool_t hb_set_previous_range (const ::hb_set_t* set, ::hb_codepoint_t* first, ::hb_codepoint_t* last);
HarfBuzz::bool_t set_previous_range (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & first, HarfBuzz::codepoint_t & last) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_set_t* set, ::hb_codepoint_t* first, ::hb_codepoint_t* last);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_previous_range;
  ::hb_codepoint_t last_o {};
  auto first_to_c = first;
  ::hb_codepoint_t first_o = first_to_c;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c), (::hb_codepoint_t*) (&first_o), (::hb_codepoint_t*) (&last_o));
  last = last_o;
  first = first_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> set_previous_range (const HarfBuzz::set_t & set, HarfBuzz::codepoint_t & first) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const ::hb_set_t* set, ::hb_codepoint_t* first, ::hb_codepoint_t* last);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_previous_range;
  ::hb_codepoint_t last_o {};
  auto first_to_c = first;
  ::hb_codepoint_t first_o = first_to_c;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::hb_set_t*) (set_to_c), (::hb_codepoint_t*) (&first_o), (::hb_codepoint_t*) (&last_o));
  first = first_o;
  return std::make_tuple (_temp_ret, last_o);
}

// hb_set_t* hb_set_reference (hb_set_t* set);
// ::hb_set_t* hb_set_reference (::hb_set_t* set);
HarfBuzz::set_t set_reference (HarfBuzz::set_t set) noexcept
{
  typedef ::hb_set_t* (*call_wrap_t) (::hb_set_t* set);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_reference;
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_set_t*) (set_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_set_set (hb_set_t* set, const hb_set_t* other);
// void hb_set_set (::hb_set_t* set, const ::hb_set_t* other);
void set_set (HarfBuzz::set_t set, const HarfBuzz::set_t & other) noexcept
{
  typedef void (*call_wrap_t) (::hb_set_t* set, const ::hb_set_t* other);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_set;
  auto other_to_c = gi::unwrap (other, gi::transfer_none, gi::direction_in);
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_set_t*) (set_to_c), (const ::hb_set_t*) (other_to_c));
}

// hb_bool_t hb_set_set_user_data (hb_set_t* set, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_set_set_user_data (::hb_set_t* set, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// void hb_set_subtract (hb_set_t* set, const hb_set_t* other);
// void hb_set_subtract (::hb_set_t* set, const ::hb_set_t* other);
void set_subtract (HarfBuzz::set_t set, const HarfBuzz::set_t & other) noexcept
{
  typedef void (*call_wrap_t) (::hb_set_t* set, const ::hb_set_t* other);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_subtract;
  auto other_to_c = gi::unwrap (other, gi::transfer_none, gi::direction_in);
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_set_t*) (set_to_c), (const ::hb_set_t*) (other_to_c));
}

// void hb_set_symmetric_difference (hb_set_t* set, const hb_set_t* other);
// void hb_set_symmetric_difference (::hb_set_t* set, const ::hb_set_t* other);
void set_symmetric_difference (HarfBuzz::set_t set, const HarfBuzz::set_t & other) noexcept
{
  typedef void (*call_wrap_t) (::hb_set_t* set, const ::hb_set_t* other);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_symmetric_difference;
  auto other_to_c = gi::unwrap (other, gi::transfer_none, gi::direction_in);
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_set_t*) (set_to_c), (const ::hb_set_t*) (other_to_c));
}

// void hb_set_union (hb_set_t* set, const hb_set_t* other);
// void hb_set_union (::hb_set_t* set, const ::hb_set_t* other);
void set_union (HarfBuzz::set_t set, const HarfBuzz::set_t & other) noexcept
{
  typedef void (*call_wrap_t) (::hb_set_t* set, const ::hb_set_t* other);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_set_union;
  auto other_to_c = gi::unwrap (other, gi::transfer_none, gi::direction_in);
  auto set_to_c = gi::unwrap (set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_set_t*) (set_to_c), (const ::hb_set_t*) (other_to_c));
}

// void hb_shape (hb_font_t* font, hb_buffer_t* buffer, const hb_feature_t* features, unsigned int num_features);
// void hb_shape (::hb_font_t* font, ::hb_buffer_t* buffer, const ::hb_feature_t** features, guint num_features);
// SKIP; inconsistent in features pointer depth (1 vs 2)

// hb_bool_t hb_shape_full (hb_font_t* font, hb_buffer_t* buffer, const hb_feature_t* features, unsigned int num_features, const char* const* shaper_list);
// ::hb_bool_t hb_shape_full (::hb_font_t* font, ::hb_buffer_t* buffer, const ::hb_feature_t** features, guint num_features, const char** shaper_list);
// SKIP; inconsistent in features pointer depth (1 vs 2)

// const char** hb_shape_list_shapers ();
// const char** hb_shape_list_shapers ();
std::vector<std::string> shape_list_shapers () noexcept
{
  typedef const char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_shape_list_shapers;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

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
void shape_plan_destroy (HarfBuzz::shape_plan_t shape_plan) noexcept
{
  typedef void (*call_wrap_t) (::hb_shape_plan_t* shape_plan);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_shape_plan_destroy;
  auto shape_plan_to_c = gi::unwrap (shape_plan, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_shape_plan_t*) (shape_plan_to_c));
}

// hb_bool_t hb_shape_plan_execute (hb_shape_plan_t* shape_plan, hb_font_t* font, hb_buffer_t* buffer, const hb_feature_t* features, unsigned int num_features);
// ::hb_bool_t hb_shape_plan_execute (::hb_shape_plan_t* shape_plan, ::hb_font_t* font, ::hb_buffer_t* buffer, const ::hb_feature_t** features, guint num_features);
// SKIP; inconsistent in features pointer depth (1 vs 2)

// hb_shape_plan_t* hb_shape_plan_get_empty ();
// ::hb_shape_plan_t* hb_shape_plan_get_empty ();
HarfBuzz::shape_plan_t shape_plan_get_empty () noexcept
{
  typedef ::hb_shape_plan_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_shape_plan_get_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const char* hb_shape_plan_get_shaper (hb_shape_plan_t* shape_plan);
// const char* hb_shape_plan_get_shaper (::hb_shape_plan_t* shape_plan);
std::string shape_plan_get_shaper (HarfBuzz::shape_plan_t shape_plan) noexcept
{
  typedef const char* (*call_wrap_t) (::hb_shape_plan_t* shape_plan);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_shape_plan_get_shaper;
  auto shape_plan_to_c = gi::unwrap (shape_plan, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_shape_plan_t*) (shape_plan_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void* hb_shape_plan_get_user_data (hb_shape_plan_t* shape_plan, hb_user_data_key_t* key);
// void* hb_shape_plan_get_user_data (::hb_shape_plan_t* shape_plan, ::hb_user_data_key_t* key);
gpointer shape_plan_get_user_data (HarfBuzz::shape_plan_t shape_plan, HarfBuzz::user_data_key_t key) noexcept
{
  typedef void* (*call_wrap_t) (::hb_shape_plan_t* shape_plan, ::hb_user_data_key_t* key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_shape_plan_get_user_data;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto shape_plan_to_c = gi::unwrap (shape_plan, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_shape_plan_t*) (shape_plan_to_c), (::hb_user_data_key_t*) (key_to_c));
  return _temp_ret;
}

// hb_shape_plan_t* hb_shape_plan_reference (hb_shape_plan_t* shape_plan);
// ::hb_shape_plan_t* hb_shape_plan_reference (::hb_shape_plan_t* shape_plan);
HarfBuzz::shape_plan_t shape_plan_reference (HarfBuzz::shape_plan_t shape_plan) noexcept
{
  typedef ::hb_shape_plan_t* (*call_wrap_t) (::hb_shape_plan_t* shape_plan);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_shape_plan_reference;
  auto shape_plan_to_c = gi::unwrap (shape_plan, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_shape_plan_t*) (shape_plan_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_bool_t hb_shape_plan_set_user_data (hb_shape_plan_t* shape_plan, hb_user_data_key_t* key, void* data, hb_destroy_func_t destroy, hb_bool_t replace);
// ::hb_bool_t hb_shape_plan_set_user_data (::hb_shape_plan_t* shape_plan, ::hb_user_data_key_t* key, void* data,  destroy, ::hb_bool_t replace);
// IGNORE; not introspectable, destroy type  not supported

// hb_tag_t hb_tag_from_string (const char* str, int len);
// ::hb_tag_t hb_tag_from_string (const guint8* str, gint len);
HarfBuzz::tag_t tag_from_string (guint8 * str, gint len) noexcept
{
  typedef ::hb_tag_t (*call_wrap_t) (const guint8* str, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_tag_from_string;
  auto str_i = detail::make_list_unwrap_range (str, len, false);
  auto str_w = unwrap (str_i, gi::transfer_none, direction_in);
  auto str_to_c = str_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (str_to_c), (gint) (str_w.size()));
  return _temp_ret;
}

// void hb_tag_to_string (hb_tag_t tag, char* buf);
// void hb_tag_to_string (::hb_tag_t tag, guint8* buf);
void tag_to_string (::hb_tag_t tag, guint8 buf[4]) noexcept
{
  typedef void (*call_wrap_t) (::hb_tag_t tag, guint8* buf);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_tag_to_string;
  auto tag_to_c = tag;
  call_wrap_v ((::hb_tag_t) (tag_to_c), (guint8*) (buf));
}

// hb_unicode_combining_class_t hb_unicode_combining_class (hb_unicode_funcs_t* ufuncs, hb_codepoint_t unicode);
// ::hb_unicode_combining_class_t hb_unicode_combining_class (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode);
HarfBuzz::unicode_combining_class_t unicode_combining_class (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t unicode) noexcept
{
  typedef ::hb_unicode_combining_class_t (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_combining_class;
  auto unicode_to_c = unicode;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c), (::hb_codepoint_t) (unicode_to_c));
  return gi::wrap (_temp_ret);
}

// hb_bool_t hb_unicode_compose (hb_unicode_funcs_t* ufuncs, hb_codepoint_t a, hb_codepoint_t b, hb_codepoint_t* ab);
// ::hb_bool_t hb_unicode_compose (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t a, ::hb_codepoint_t b, ::hb_codepoint_t* ab);
HarfBuzz::bool_t unicode_compose (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t a, ::hb_codepoint_t b, HarfBuzz::codepoint_t & ab) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t a, ::hb_codepoint_t b, ::hb_codepoint_t* ab);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_compose;
  ::hb_codepoint_t ab_o {};
  auto b_to_c = b;
  auto a_to_c = a;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c), (::hb_codepoint_t) (a_to_c), (::hb_codepoint_t) (b_to_c), (::hb_codepoint_t*) (&ab_o));
  ab = ab_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t> unicode_compose (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t a, ::hb_codepoint_t b) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t a, ::hb_codepoint_t b, ::hb_codepoint_t* ab);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_compose;
  ::hb_codepoint_t ab_o {};
  auto b_to_c = b;
  auto a_to_c = a;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c), (::hb_codepoint_t) (a_to_c), (::hb_codepoint_t) (b_to_c), (::hb_codepoint_t*) (&ab_o));
  return std::make_tuple (_temp_ret, ab_o);
}

// hb_bool_t hb_unicode_decompose (hb_unicode_funcs_t* ufuncs, hb_codepoint_t ab, hb_codepoint_t* a, hb_codepoint_t* b);
// ::hb_bool_t hb_unicode_decompose (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t ab, ::hb_codepoint_t* a, ::hb_codepoint_t* b);
HarfBuzz::bool_t unicode_decompose (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t ab, HarfBuzz::codepoint_t & a, HarfBuzz::codepoint_t & b) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t ab, ::hb_codepoint_t* a, ::hb_codepoint_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_decompose;
  ::hb_codepoint_t b_o {};
  ::hb_codepoint_t a_o {};
  auto ab_to_c = ab;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c), (::hb_codepoint_t) (ab_to_c), (::hb_codepoint_t*) (&a_o), (::hb_codepoint_t*) (&b_o));
  b = b_o;
  a = a_o;
  return _temp_ret;
}
std::tuple<HarfBuzz::bool_t, HarfBuzz::codepoint_t, HarfBuzz::codepoint_t> unicode_decompose (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t ab) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t ab, ::hb_codepoint_t* a, ::hb_codepoint_t* b);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_decompose;
  ::hb_codepoint_t b_o {};
  ::hb_codepoint_t a_o {};
  auto ab_to_c = ab;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c), (::hb_codepoint_t) (ab_to_c), (::hb_codepoint_t*) (&a_o), (::hb_codepoint_t*) (&b_o));
  return std::make_tuple (_temp_ret, a_o, b_o);
}

// hb_unicode_funcs_t* hb_unicode_funcs_create (hb_unicode_funcs_t* parent);
// ::hb_unicode_funcs_t* hb_unicode_funcs_create (::hb_unicode_funcs_t* parent);
HarfBuzz::unicode_funcs_t unicode_funcs_create (HarfBuzz::unicode_funcs_t parent) noexcept
{
  typedef ::hb_unicode_funcs_t* (*call_wrap_t) (::hb_unicode_funcs_t* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_funcs_create;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
HarfBuzz::unicode_funcs_t unicode_funcs_create () noexcept
{
  typedef ::hb_unicode_funcs_t* (*call_wrap_t) (::hb_unicode_funcs_t* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_funcs_create;
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void hb_unicode_funcs_destroy (hb_unicode_funcs_t* ufuncs);
// void hb_unicode_funcs_destroy (::hb_unicode_funcs_t* ufuncs);
void unicode_funcs_destroy (HarfBuzz::unicode_funcs_t ufuncs) noexcept
{
  typedef void (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_funcs_destroy;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c));
}

// hb_unicode_funcs_t* hb_unicode_funcs_get_default ();
// ::hb_unicode_funcs_t* hb_unicode_funcs_get_default ();
HarfBuzz::unicode_funcs_t unicode_funcs_get_default () noexcept
{
  typedef ::hb_unicode_funcs_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_funcs_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// hb_unicode_funcs_t* hb_unicode_funcs_get_empty ();
// ::hb_unicode_funcs_t* hb_unicode_funcs_get_empty ();
HarfBuzz::unicode_funcs_t unicode_funcs_get_empty () noexcept
{
  typedef ::hb_unicode_funcs_t* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_funcs_get_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// hb_unicode_funcs_t* hb_unicode_funcs_get_parent (hb_unicode_funcs_t* ufuncs);
// ::hb_unicode_funcs_t* hb_unicode_funcs_get_parent (::hb_unicode_funcs_t* ufuncs);
HarfBuzz::unicode_funcs_t unicode_funcs_get_parent (HarfBuzz::unicode_funcs_t ufuncs) noexcept
{
  typedef ::hb_unicode_funcs_t* (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_funcs_get_parent;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void* hb_unicode_funcs_get_user_data (hb_unicode_funcs_t* ufuncs, hb_user_data_key_t* key);
// void* hb_unicode_funcs_get_user_data (::hb_unicode_funcs_t* ufuncs, ::hb_user_data_key_t* key);
gpointer unicode_funcs_get_user_data (HarfBuzz::unicode_funcs_t ufuncs, HarfBuzz::user_data_key_t key) noexcept
{
  typedef void* (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs, ::hb_user_data_key_t* key);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_funcs_get_user_data;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c), (::hb_user_data_key_t*) (key_to_c));
  return _temp_ret;
}

// hb_bool_t hb_unicode_funcs_is_immutable (hb_unicode_funcs_t* ufuncs);
// ::hb_bool_t hb_unicode_funcs_is_immutable (::hb_unicode_funcs_t* ufuncs);
HarfBuzz::bool_t unicode_funcs_is_immutable (HarfBuzz::unicode_funcs_t ufuncs) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_funcs_is_immutable;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c));
  return _temp_ret;
}

// void hb_unicode_funcs_make_immutable (hb_unicode_funcs_t* ufuncs);
// void hb_unicode_funcs_make_immutable (::hb_unicode_funcs_t* ufuncs);
void unicode_funcs_make_immutable (HarfBuzz::unicode_funcs_t ufuncs) noexcept
{
  typedef void (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_funcs_make_immutable;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c));
}

// hb_unicode_funcs_t* hb_unicode_funcs_reference (hb_unicode_funcs_t* ufuncs);
// ::hb_unicode_funcs_t* hb_unicode_funcs_reference (::hb_unicode_funcs_t* ufuncs);
HarfBuzz::unicode_funcs_t unicode_funcs_reference (HarfBuzz::unicode_funcs_t ufuncs) noexcept
{
  typedef ::hb_unicode_funcs_t* (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_funcs_reference;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

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
HarfBuzz::unicode_general_category_t unicode_general_category (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t unicode) noexcept
{
  typedef ::hb_unicode_general_category_t (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_general_category;
  auto unicode_to_c = unicode;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c), (::hb_codepoint_t) (unicode_to_c));
  return gi::wrap (_temp_ret);
}

// hb_codepoint_t hb_unicode_mirroring (hb_unicode_funcs_t* ufuncs, hb_codepoint_t unicode);
// ::hb_codepoint_t hb_unicode_mirroring (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode);
HarfBuzz::codepoint_t unicode_mirroring (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t unicode) noexcept
{
  typedef ::hb_codepoint_t (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_mirroring;
  auto unicode_to_c = unicode;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c), (::hb_codepoint_t) (unicode_to_c));
  return _temp_ret;
}

// hb_script_t hb_unicode_script (hb_unicode_funcs_t* ufuncs, hb_codepoint_t unicode);
// ::hb_script_t hb_unicode_script (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode);
HarfBuzz::script_t unicode_script (HarfBuzz::unicode_funcs_t ufuncs, ::hb_codepoint_t unicode) noexcept
{
  typedef ::hb_script_t (*call_wrap_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_unicode_script;
  auto unicode_to_c = unicode;
  auto ufuncs_to_c = gi::unwrap (ufuncs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::hb_unicode_funcs_t*) (ufuncs_to_c), (::hb_codepoint_t) (unicode_to_c));
  return gi::wrap (_temp_ret);
}

// hb_bool_t hb_variation_from_string (const char* str, int len, hb_variation_t* variation);
// ::hb_bool_t hb_variation_from_string (const char* str, gint len, ::hb_variation_t* variation);
HarfBuzz::bool_t variation_from_string (const std::string & str, gint len, HarfBuzz::variation_t variation) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (const char* str, gint len, ::hb_variation_t* variation);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_variation_from_string;
  auto variation_to_c = gi::unwrap (variation, gi::transfer_none, gi::direction_in);
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (gint) (len_to_c), (::hb_variation_t*) (variation_to_c));
  return _temp_ret;
}

// void hb_variation_to_string (hb_variation_t* variation, char* buf, unsigned int size);
// void hb_variation_to_string (::hb_variation_t* variation, char* buf, guint size);
void variation_to_string (HarfBuzz::variation_t variation, const std::string & buf, guint size) noexcept
{
  typedef void (*call_wrap_t) (::hb_variation_t* variation, char* buf, guint size);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_variation_to_string;
  auto size_to_c = size;
  auto buf_to_c = gi::unwrap (buf, gi::transfer_none, gi::direction_in);
  auto variation_to_c = gi::unwrap (variation, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::hb_variation_t*) (variation_to_c), (char*) (buf_to_c), (guint) (size_to_c));
}

// void hb_version (unsigned int* major, unsigned int* minor, unsigned int* micro);
// void hb_version (guint* major, guint* minor, guint* micro);
void version (guint & major, guint & minor, guint & micro) noexcept
{
  typedef void (*call_wrap_t) (guint* major, guint* minor, guint* micro);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_version;
  guint micro_o {};
  guint minor_o {};
  guint major_o {};
  call_wrap_v ((guint*) (&major_o), (guint*) (&minor_o), (guint*) (&micro_o));
  micro = micro_o;
  minor = minor_o;
  major = major_o;
}
std::tuple<guint, guint, guint> version () noexcept
{
  typedef void (*call_wrap_t) (guint* major, guint* minor, guint* micro);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_version;
  guint micro_o {};
  guint minor_o {};
  guint major_o {};
  call_wrap_v ((guint*) (&major_o), (guint*) (&minor_o), (guint*) (&micro_o));
  return std::make_tuple (major_o, minor_o, micro_o);
}

// hb_bool_t hb_version_atleast (unsigned int major, unsigned int minor, unsigned int micro);
// ::hb_bool_t hb_version_atleast (guint major, guint minor, guint micro);
HarfBuzz::bool_t version_atleast (guint major, guint minor, guint micro) noexcept
{
  typedef ::hb_bool_t (*call_wrap_t) (guint major, guint minor, guint micro);
  call_wrap_t call_wrap_v = (call_wrap_t) hb_version_atleast;
  auto micro_to_c = micro;
  auto minor_to_c = minor;
  auto major_to_c = major;
  auto _temp_ret = call_wrap_v ((guint) (major_to_c), (guint) (minor_to_c), (guint) (micro_to_c));
  return _temp_ret;
}

// const char* hb_version_string ();
// const char* hb_version_string ();
std::string version_string () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) hb_version_string;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

} // namespace HarfBuzz

} // namespace repository

} // namespace gi

#endif
