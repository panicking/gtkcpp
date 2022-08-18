// AUTO-GENERATED

#ifndef _GI_HARFBUZZ__CALLBACKS_HPP_
#define _GI_HARFBUZZ__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

class blob_t;
class buffer_t;
class face_t;
class font_extents_t;
class font_t;
class glyph_extents_t;
class unicode_funcs_t;

// typedef hb_bool_t (*hb_buffer_message_func_t) (hb_buffer_t* buffer, hb_font_t* font, const char* message, void* user_data);
// typedef ::hb_bool_t (*hb_buffer_message_func_t) (::hb_buffer_t* buffer, ::hb_font_t* font, const char* message, void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef void (*hb_destroy_func_t) (void* user_data);
// typedef void (*hb_destroy_func_t) (void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef hb_bool_t (*hb_font_get_font_extents_func_t) (hb_font_t* font, void* font_data, hb_font_extents_t* extents, void* user_data);
// typedef ::hb_bool_t (*hb_font_get_font_extents_func_t) (::hb_font_t* font, void* font_data, ::hb_font_extents_t* extents, void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef hb_position_t (*hb_font_get_glyph_advance_func_t) (hb_font_t* font, void* font_data, hb_codepoint_t glyph, void* user_data);
// typedef ::hb_position_t (*hb_font_get_glyph_advance_func_t) (::hb_font_t* font, void* font_data, ::hb_codepoint_t glyph, void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef void (*hb_font_get_glyph_advances_func_t) (hb_font_t* font, void* font_data, unsigned int count, const hb_codepoint_t* first_glyph, unsigned glyph_stride, hb_position_t* first_advance, unsigned advance_stride, void* user_data);
// typedef void (*hb_font_get_glyph_advances_func_t) (::hb_font_t* font, void* font_data, guint count, const ::hb_codepoint_t first_glyph, guint glyph_stride, ::hb_position_t first_advance, guint advance_stride, void* user_data);
// SKIP; invalid type user_data, inconsistent in first_advance pointer depth (1 vs 0), inconsistent in first_glyph pointer depth (1 vs 0), not a callback since no user_data

// typedef hb_bool_t (*hb_font_get_glyph_contour_point_func_t) (hb_font_t* font, void* font_data, hb_codepoint_t glyph, unsigned int point_index, hb_position_t* x, hb_position_t* y, void* user_data);
// typedef ::hb_bool_t (*hb_font_get_glyph_contour_point_func_t) (::hb_font_t* font, void* font_data, ::hb_codepoint_t glyph, guint point_index, ::hb_position_t x, ::hb_position_t y, void* user_data);
// SKIP; invalid type user_data, inconsistent in y pointer depth (1 vs 0), inconsistent in x pointer depth (1 vs 0), not a callback since no user_data

// typedef hb_bool_t (*hb_font_get_glyph_extents_func_t) (hb_font_t* font, void* font_data, hb_codepoint_t glyph, hb_glyph_extents_t* extents, void* user_data);
// typedef ::hb_bool_t (*hb_font_get_glyph_extents_func_t) (::hb_font_t* font, void* font_data, ::hb_codepoint_t glyph, ::hb_glyph_extents_t* extents, void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef hb_bool_t (*hb_font_get_glyph_from_name_func_t) (hb_font_t* font, void* font_data, const char* name, int len, hb_codepoint_t* glyph, void* user_data);
// typedef ::hb_bool_t (*hb_font_get_glyph_from_name_func_t) (::hb_font_t* font, void* font_data, const char* name, gint len, ::hb_codepoint_t glyph, void* user_data);
// SKIP; invalid type user_data, inconsistent in glyph pointer depth (1 vs 0), not a callback since no user_data

// typedef hb_bool_t (*hb_font_get_glyph_func_t) (hb_font_t* font, void* font_data, hb_codepoint_t unicode, hb_codepoint_t variation_selector, hb_codepoint_t* glyph, void* user_data);
// typedef ::hb_bool_t (*hb_font_get_glyph_func_t) (::hb_font_t* font, void* font_data, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, ::hb_codepoint_t glyph, void* user_data);
// SKIP; invalid type user_data, inconsistent in glyph pointer depth (1 vs 0), not a callback since no user_data

// typedef hb_position_t (*hb_font_get_glyph_kerning_func_t) (hb_font_t* font, void* font_data, hb_codepoint_t first_glyph, hb_codepoint_t second_glyph, void* user_data);
// typedef ::hb_position_t (*hb_font_get_glyph_kerning_func_t) (::hb_font_t* font, void* font_data, ::hb_codepoint_t first_glyph, ::hb_codepoint_t second_glyph, void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef hb_bool_t (*hb_font_get_glyph_name_func_t) (hb_font_t* font, void* font_data, hb_codepoint_t glyph, char* name, unsigned int size, void* user_data);
// typedef ::hb_bool_t (*hb_font_get_glyph_name_func_t) (::hb_font_t* font, void* font_data, ::hb_codepoint_t glyph, char* name, guint size, void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef hb_bool_t (*hb_font_get_glyph_origin_func_t) (hb_font_t* font, void* font_data, hb_codepoint_t glyph, hb_position_t* x, hb_position_t* y, void* user_data);
// typedef ::hb_bool_t (*hb_font_get_glyph_origin_func_t) (::hb_font_t* font, void* font_data, ::hb_codepoint_t glyph, ::hb_position_t x, ::hb_position_t y, void* user_data);
// SKIP; invalid type user_data, inconsistent in y pointer depth (1 vs 0), inconsistent in x pointer depth (1 vs 0), not a callback since no user_data

// typedef hb_bool_t (*hb_font_get_nominal_glyph_func_t) (hb_font_t* font, void* font_data, hb_codepoint_t unicode, hb_codepoint_t* glyph, void* user_data);
// typedef ::hb_bool_t (*hb_font_get_nominal_glyph_func_t) (::hb_font_t* font, void* font_data, ::hb_codepoint_t unicode, ::hb_codepoint_t glyph, void* user_data);
// SKIP; invalid type user_data, inconsistent in glyph pointer depth (1 vs 0), not a callback since no user_data

// typedef unsigned int (*hb_font_get_nominal_glyphs_func_t) (hb_font_t* font, void* font_data, unsigned int count, const hb_codepoint_t* first_unicode, unsigned int unicode_stride, hb_codepoint_t* first_glyph, unsigned int glyph_stride, void* user_data);
// typedef guint (*hb_font_get_nominal_glyphs_func_t) (::hb_font_t* font, void* font_data, guint count, const ::hb_codepoint_t first_unicode, guint unicode_stride, ::hb_codepoint_t first_glyph, guint glyph_stride, void* user_data);
// SKIP; invalid type user_data, inconsistent in first_glyph pointer depth (1 vs 0), inconsistent in first_unicode pointer depth (1 vs 0), not a callback since no user_data

// typedef hb_bool_t (*hb_font_get_variation_glyph_func_t) (hb_font_t* font, void* font_data, hb_codepoint_t unicode, hb_codepoint_t variation_selector, hb_codepoint_t* glyph, void* user_data);
// typedef ::hb_bool_t (*hb_font_get_variation_glyph_func_t) (::hb_font_t* font, void* font_data, ::hb_codepoint_t unicode, ::hb_codepoint_t variation_selector, ::hb_codepoint_t glyph, void* user_data);
// SKIP; invalid type user_data, inconsistent in glyph pointer depth (1 vs 0), not a callback since no user_data

// typedef hb_blob_t* (*hb_reference_table_func_t) (hb_face_t* face, hb_tag_t tag, void* user_data);
// typedef ::hb_blob_t* (*hb_reference_table_func_t) (::hb_face_t* face, ::hb_tag_t tag, void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef hb_unicode_combining_class_t (*hb_unicode_combining_class_func_t) (hb_unicode_funcs_t* ufuncs, hb_codepoint_t unicode, void* user_data);
// typedef ::hb_unicode_combining_class_t (*hb_unicode_combining_class_func_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode, void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef hb_bool_t (*hb_unicode_compose_func_t) (hb_unicode_funcs_t* ufuncs, hb_codepoint_t a, hb_codepoint_t b, hb_codepoint_t* ab, void* user_data);
// typedef ::hb_bool_t (*hb_unicode_compose_func_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t a, ::hb_codepoint_t b, ::hb_codepoint_t* ab, void* user_data);
// SKIP; callback out parameter not supported

// typedef hb_bool_t (*hb_unicode_decompose_func_t) (hb_unicode_funcs_t* ufuncs, hb_codepoint_t ab, hb_codepoint_t* a, hb_codepoint_t* b, void* user_data);
// typedef ::hb_bool_t (*hb_unicode_decompose_func_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t ab, ::hb_codepoint_t* a, ::hb_codepoint_t* b, void* user_data);
// SKIP; callback out parameter not supported, callback out parameter not supported

// typedef hb_unicode_general_category_t (*hb_unicode_general_category_func_t) (hb_unicode_funcs_t* ufuncs, hb_codepoint_t unicode, void* user_data);
// typedef ::hb_unicode_general_category_t (*hb_unicode_general_category_func_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode, void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef hb_codepoint_t (*hb_unicode_mirroring_func_t) (hb_unicode_funcs_t* ufuncs, hb_codepoint_t unicode, void* user_data);
// typedef ::hb_codepoint_t (*hb_unicode_mirroring_func_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode, void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

// typedef hb_script_t (*hb_unicode_script_func_t) (hb_unicode_funcs_t* ufuncs, hb_codepoint_t unicode, void* user_data);
// typedef ::hb_script_t (*hb_unicode_script_func_t) (::hb_unicode_funcs_t* ufuncs, ::hb_codepoint_t unicode, void* user_data);
// SKIP; invalid type user_data, not a callback since no user_data

} // namespace HarfBuzz

} // namespace repository

} // namespace gi

#endif
