// AUTO-GENERATED

#ifndef _GI_PANGO__FLAGS_HPP_
#define _GI_PANGO__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Pango {

#if defined(FontMask)
#undef FontMask
#endif
enum class FontMask {
  FAMILY_ = PANGO_FONT_MASK_FAMILY,
  STYLE_ = PANGO_FONT_MASK_STYLE,
  VARIANT_ = PANGO_FONT_MASK_VARIANT,
  WEIGHT_ = PANGO_FONT_MASK_WEIGHT,
  STRETCH_ = PANGO_FONT_MASK_STRETCH,
  SIZE_ = PANGO_FONT_MASK_SIZE,
  GRAVITY_ = PANGO_FONT_MASK_GRAVITY,
  VARIATIONS_ = PANGO_FONT_MASK_VARIATIONS,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::FontMask>
{ typedef PangoFontMask type; }; 
template<> struct declare_cpptype_of<PangoFontMask>
{ typedef Pango::FontMask type; }; 

template<> struct declare_gtype_of<Pango::FontMask>
{ static GType get_type() { return pango_font_mask_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

#if defined(LayoutDeserializeFlags)
#undef LayoutDeserializeFlags
#endif
enum class LayoutDeserializeFlags {
  DEFAULT_ = PANGO_LAYOUT_DESERIALIZE_DEFAULT,
  CONTEXT_ = PANGO_LAYOUT_DESERIALIZE_CONTEXT,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::LayoutDeserializeFlags>
{ typedef PangoLayoutDeserializeFlags type; }; 
template<> struct declare_cpptype_of<PangoLayoutDeserializeFlags>
{ typedef Pango::LayoutDeserializeFlags type; }; 

template<> struct declare_gtype_of<Pango::LayoutDeserializeFlags>
{ static GType get_type() { return pango_layout_deserialize_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

#if defined(LayoutSerializeFlags)
#undef LayoutSerializeFlags
#endif
enum class LayoutSerializeFlags {
  DEFAULT_ = PANGO_LAYOUT_SERIALIZE_DEFAULT,
  CONTEXT_ = PANGO_LAYOUT_SERIALIZE_CONTEXT,
  OUTPUT_ = PANGO_LAYOUT_SERIALIZE_OUTPUT,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::LayoutSerializeFlags>
{ typedef PangoLayoutSerializeFlags type; }; 
template<> struct declare_cpptype_of<PangoLayoutSerializeFlags>
{ typedef Pango::LayoutSerializeFlags type; }; 

template<> struct declare_gtype_of<Pango::LayoutSerializeFlags>
{ static GType get_type() { return pango_layout_serialize_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

#if defined(ShapeFlags)
#undef ShapeFlags
#endif
enum class ShapeFlags {
  NONE_ = PANGO_SHAPE_NONE,
  ROUND_POSITIONS_ = PANGO_SHAPE_ROUND_POSITIONS,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::ShapeFlags>
{ typedef PangoShapeFlags type; }; 
template<> struct declare_cpptype_of<PangoShapeFlags>
{ typedef Pango::ShapeFlags type; }; 

template<> struct declare_gtype_of<Pango::ShapeFlags>
{ static GType get_type() { return pango_shape_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

#if defined(ShowFlags)
#undef ShowFlags
#endif
enum class ShowFlags {
  NONE_ = PANGO_SHOW_NONE,
  SPACES_ = PANGO_SHOW_SPACES,
  LINE_BREAKS_ = PANGO_SHOW_LINE_BREAKS,
  IGNORABLES_ = PANGO_SHOW_IGNORABLES,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::ShowFlags>
{ typedef PangoShowFlags type; }; 
template<> struct declare_cpptype_of<PangoShowFlags>
{ typedef Pango::ShowFlags type; }; 

template<> struct declare_gtype_of<Pango::ShowFlags>
{ static GType get_type() { return pango_show_flags_get_type(); } };


} // namespace repository

} // namespace gi


#endif
