// AUTO-GENERATED

#ifndef _GI_HARFBUZZ__FLAGS_HPP_
#define _GI_HARFBUZZ__FLAGS_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

enum class buffer_diff_flags_t {
  EQUAL_ = HB_BUFFER_DIFF_FLAG_EQUAL,
  CONTENT_TYPE_MISMATCH_ = HB_BUFFER_DIFF_FLAG_CONTENT_TYPE_MISMATCH,
  LENGTH_MISMATCH_ = HB_BUFFER_DIFF_FLAG_LENGTH_MISMATCH,
  NOTDEF_PRESENT_ = HB_BUFFER_DIFF_FLAG_NOTDEF_PRESENT,
  DOTTED_CIRCLE_PRESENT_ = HB_BUFFER_DIFF_FLAG_DOTTED_CIRCLE_PRESENT,
  CODEPOINT_MISMATCH_ = HB_BUFFER_DIFF_FLAG_CODEPOINT_MISMATCH,
  CLUSTER_MISMATCH_ = HB_BUFFER_DIFF_FLAG_CLUSTER_MISMATCH,
  GLYPH_FLAGS_MISMATCH_ = HB_BUFFER_DIFF_FLAG_GLYPH_FLAGS_MISMATCH,
  POSITION_MISMATCH_ = HB_BUFFER_DIFF_FLAG_POSITION_MISMATCH,
};

} // namespace HarfBuzz

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<HarfBuzz::buffer_diff_flags_t>
{ typedef hb_buffer_diff_flags_t type; }; 
template<> struct declare_cpptype_of<hb_buffer_diff_flags_t>
{ typedef HarfBuzz::buffer_diff_flags_t type; }; 

template<> struct declare_gtype_of<HarfBuzz::buffer_diff_flags_t>
{ static GType get_type() { return hb_gobject_buffer_diff_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace HarfBuzz {

enum class buffer_flags_t {
  DEFAULT_ = HB_BUFFER_FLAG_DEFAULT,
  BOT_ = HB_BUFFER_FLAG_BOT,
  EOT_ = HB_BUFFER_FLAG_EOT,
  PRESERVE_DEFAULT_IGNORABLES_ = HB_BUFFER_FLAG_PRESERVE_DEFAULT_IGNORABLES,
  REMOVE_DEFAULT_IGNORABLES_ = HB_BUFFER_FLAG_REMOVE_DEFAULT_IGNORABLES,
  DO_NOT_INSERT_DOTTED_CIRCLE_ = HB_BUFFER_FLAG_DO_NOT_INSERT_DOTTED_CIRCLE,
};

} // namespace HarfBuzz

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<HarfBuzz::buffer_flags_t>
{ typedef hb_buffer_flags_t type; }; 
template<> struct declare_cpptype_of<hb_buffer_flags_t>
{ typedef HarfBuzz::buffer_flags_t type; }; 

template<> struct declare_gtype_of<HarfBuzz::buffer_flags_t>
{ static GType get_type() { return hb_gobject_buffer_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace HarfBuzz {

enum class buffer_serialize_flags_t {
  DEFAULT_ = HB_BUFFER_SERIALIZE_FLAG_DEFAULT,
  NO_CLUSTERS_ = HB_BUFFER_SERIALIZE_FLAG_NO_CLUSTERS,
  NO_POSITIONS_ = HB_BUFFER_SERIALIZE_FLAG_NO_POSITIONS,
  NO_GLYPH_NAMES_ = HB_BUFFER_SERIALIZE_FLAG_NO_GLYPH_NAMES,
  GLYPH_EXTENTS_ = HB_BUFFER_SERIALIZE_FLAG_GLYPH_EXTENTS,
  GLYPH_FLAGS_ = HB_BUFFER_SERIALIZE_FLAG_GLYPH_FLAGS,
  NO_ADVANCES_ = HB_BUFFER_SERIALIZE_FLAG_NO_ADVANCES,
};

} // namespace HarfBuzz

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<HarfBuzz::buffer_serialize_flags_t>
{ typedef hb_buffer_serialize_flags_t type; }; 
template<> struct declare_cpptype_of<hb_buffer_serialize_flags_t>
{ typedef HarfBuzz::buffer_serialize_flags_t type; }; 

template<> struct declare_gtype_of<HarfBuzz::buffer_serialize_flags_t>
{ static GType get_type() { return hb_gobject_buffer_serialize_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace HarfBuzz {

enum class glyph_flags_t {
  UNSAFE_TO_BREAK_ = HB_GLYPH_FLAG_UNSAFE_TO_BREAK,
  DEFINED_ = HB_GLYPH_FLAG_DEFINED,
};

} // namespace HarfBuzz

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<HarfBuzz::glyph_flags_t>
{ typedef hb_glyph_flags_t type; }; 
template<> struct declare_cpptype_of<hb_glyph_flags_t>
{ typedef HarfBuzz::glyph_flags_t type; }; 

template<> struct declare_gtype_of<HarfBuzz::glyph_flags_t>
{ static GType get_type() { return hb_gobject_glyph_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace HarfBuzz {

enum class ot_color_palette_flags_t {
  DEFAULT_ = HB_OT_COLOR_PALETTE_FLAG_DEFAULT,
  USABLE_WITH_LIGHT_BACKGROUND_ = HB_OT_COLOR_PALETTE_FLAG_USABLE_WITH_LIGHT_BACKGROUND,
  USABLE_WITH_DARK_BACKGROUND_ = HB_OT_COLOR_PALETTE_FLAG_USABLE_WITH_DARK_BACKGROUND,
};

} // namespace HarfBuzz

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<HarfBuzz::ot_color_palette_flags_t>
{ typedef hb_ot_color_palette_flags_t type; }; 
template<> struct declare_cpptype_of<hb_ot_color_palette_flags_t>
{ typedef HarfBuzz::ot_color_palette_flags_t type; }; 

template<> struct declare_gtype_of<HarfBuzz::ot_color_palette_flags_t>
{ static GType get_type() { return hb_gobject_ot_color_palette_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace HarfBuzz {

enum class ot_math_glyph_part_flags_t {
  EXTENDER_ = HB_OT_MATH_GLYPH_PART_FLAG_EXTENDER,
};

} // namespace HarfBuzz

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<HarfBuzz::ot_math_glyph_part_flags_t>
{ typedef hb_ot_math_glyph_part_flags_t type; }; 
template<> struct declare_cpptype_of<hb_ot_math_glyph_part_flags_t>
{ typedef HarfBuzz::ot_math_glyph_part_flags_t type; }; 

template<> struct declare_gtype_of<HarfBuzz::ot_math_glyph_part_flags_t>
{ static GType get_type() { return hb_gobject_ot_math_glyph_part_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace HarfBuzz {

enum class ot_var_axis_flags_t {
  HIDDEN_ = HB_OT_VAR_AXIS_FLAG_HIDDEN,
};

} // namespace HarfBuzz

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<HarfBuzz::ot_var_axis_flags_t>
{ typedef hb_ot_var_axis_flags_t type; }; 
template<> struct declare_cpptype_of<hb_ot_var_axis_flags_t>
{ typedef HarfBuzz::ot_var_axis_flags_t type; }; 

template<> struct declare_gtype_of<HarfBuzz::ot_var_axis_flags_t>
{ static GType get_type() { return hb_gobject_ot_var_axis_flags_get_type(); } };


} // namespace repository

} // namespace gi


#endif
