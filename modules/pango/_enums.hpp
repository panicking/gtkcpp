// AUTO-GENERATED

#ifndef _GI_PANGO__ENUMS_HPP_
#define _GI_PANGO__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Pango {

enum class Alignment {
  LEFT_ = PANGO_ALIGN_LEFT,
  CENTER_ = PANGO_ALIGN_CENTER,
  RIGHT_ = PANGO_ALIGN_RIGHT,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::Alignment>
{ typedef PangoAlignment type; }; 
template<> struct declare_cpptype_of<PangoAlignment>
{ typedef Pango::Alignment type; }; 

template<> struct declare_gtype_of<Pango::Alignment>
{ static GType get_type() { return pango_alignment_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class AttrType {
  INVALID_ = PANGO_ATTR_INVALID,
  LANGUAGE_ = PANGO_ATTR_LANGUAGE,
  FAMILY_ = PANGO_ATTR_FAMILY,
  STYLE_ = PANGO_ATTR_STYLE,
  WEIGHT_ = PANGO_ATTR_WEIGHT,
  VARIANT_ = PANGO_ATTR_VARIANT,
  STRETCH_ = PANGO_ATTR_STRETCH,
  SIZE_ = PANGO_ATTR_SIZE,
  FONT_DESC_ = PANGO_ATTR_FONT_DESC,
  FOREGROUND_ = PANGO_ATTR_FOREGROUND,
  BACKGROUND_ = PANGO_ATTR_BACKGROUND,
  UNDERLINE_ = PANGO_ATTR_UNDERLINE,
  STRIKETHROUGH_ = PANGO_ATTR_STRIKETHROUGH,
  RISE_ = PANGO_ATTR_RISE,
  SHAPE_ = PANGO_ATTR_SHAPE,
  SCALE_ = PANGO_ATTR_SCALE,
  FALLBACK_ = PANGO_ATTR_FALLBACK,
  LETTER_SPACING_ = PANGO_ATTR_LETTER_SPACING,
  UNDERLINE_COLOR_ = PANGO_ATTR_UNDERLINE_COLOR,
  STRIKETHROUGH_COLOR_ = PANGO_ATTR_STRIKETHROUGH_COLOR,
  ABSOLUTE_SIZE_ = PANGO_ATTR_ABSOLUTE_SIZE,
  GRAVITY_ = PANGO_ATTR_GRAVITY,
  GRAVITY_HINT_ = PANGO_ATTR_GRAVITY_HINT,
  FONT_FEATURES_ = PANGO_ATTR_FONT_FEATURES,
  FOREGROUND_ALPHA_ = PANGO_ATTR_FOREGROUND_ALPHA,
  BACKGROUND_ALPHA_ = PANGO_ATTR_BACKGROUND_ALPHA,
  ALLOW_BREAKS_ = PANGO_ATTR_ALLOW_BREAKS,
  SHOW_ = PANGO_ATTR_SHOW,
  INSERT_HYPHENS_ = PANGO_ATTR_INSERT_HYPHENS,
  OVERLINE_ = PANGO_ATTR_OVERLINE,
  OVERLINE_COLOR_ = PANGO_ATTR_OVERLINE_COLOR,
  LINE_HEIGHT_ = PANGO_ATTR_LINE_HEIGHT,
  ABSOLUTE_LINE_HEIGHT_ = PANGO_ATTR_ABSOLUTE_LINE_HEIGHT,
  TEXT_TRANSFORM_ = PANGO_ATTR_TEXT_TRANSFORM,
  WORD_ = PANGO_ATTR_WORD,
  SENTENCE_ = PANGO_ATTR_SENTENCE,
  BASELINE_SHIFT_ = PANGO_ATTR_BASELINE_SHIFT,
  FONT_SCALE_ = PANGO_ATTR_FONT_SCALE,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::AttrType>
{ typedef PangoAttrType type; }; 
template<> struct declare_cpptype_of<PangoAttrType>
{ typedef Pango::AttrType type; }; 

template<> struct declare_gtype_of<Pango::AttrType>
{ static GType get_type() { return pango_attr_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class BaselineShift {
  NONE_ = PANGO_BASELINE_SHIFT_NONE,
  SUPERSCRIPT_ = PANGO_BASELINE_SHIFT_SUPERSCRIPT,
  SUBSCRIPT_ = PANGO_BASELINE_SHIFT_SUBSCRIPT,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::BaselineShift>
{ typedef PangoBaselineShift type; }; 
template<> struct declare_cpptype_of<PangoBaselineShift>
{ typedef Pango::BaselineShift type; }; 

template<> struct declare_gtype_of<Pango::BaselineShift>
{ static GType get_type() { return pango_baseline_shift_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class CoverageLevel {
  NONE_ = PANGO_COVERAGE_NONE,
  FALLBACK_ = PANGO_COVERAGE_FALLBACK,
  APPROXIMATE_ = PANGO_COVERAGE_APPROXIMATE,
  EXACT_ = PANGO_COVERAGE_EXACT,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::CoverageLevel>
{ typedef PangoCoverageLevel type; }; 
template<> struct declare_cpptype_of<PangoCoverageLevel>
{ typedef Pango::CoverageLevel type; }; 

template<> struct declare_gtype_of<Pango::CoverageLevel>
{ static GType get_type() { return pango_coverage_level_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class Direction {
  LTR_ = PANGO_DIRECTION_LTR,
  RTL_ = PANGO_DIRECTION_RTL,
  TTB_LTR_ = PANGO_DIRECTION_TTB_LTR,
  TTB_RTL_ = PANGO_DIRECTION_TTB_RTL,
  WEAK_LTR_ = PANGO_DIRECTION_WEAK_LTR,
  WEAK_RTL_ = PANGO_DIRECTION_WEAK_RTL,
  NEUTRAL_ = PANGO_DIRECTION_NEUTRAL,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::Direction>
{ typedef PangoDirection type; }; 
template<> struct declare_cpptype_of<PangoDirection>
{ typedef Pango::Direction type; }; 

template<> struct declare_gtype_of<Pango::Direction>
{ static GType get_type() { return pango_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class EllipsizeMode {
  NONE_ = PANGO_ELLIPSIZE_NONE,
  START_ = PANGO_ELLIPSIZE_START,
  MIDDLE_ = PANGO_ELLIPSIZE_MIDDLE,
  END_ = PANGO_ELLIPSIZE_END,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::EllipsizeMode>
{ typedef PangoEllipsizeMode type; }; 
template<> struct declare_cpptype_of<PangoEllipsizeMode>
{ typedef Pango::EllipsizeMode type; }; 

template<> struct declare_gtype_of<Pango::EllipsizeMode>
{ static GType get_type() { return pango_ellipsize_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class FontScale {
  NONE_ = PANGO_FONT_SCALE_NONE,
  SUPERSCRIPT_ = PANGO_FONT_SCALE_SUPERSCRIPT,
  SUBSCRIPT_ = PANGO_FONT_SCALE_SUBSCRIPT,
  SMALL_CAPS_ = PANGO_FONT_SCALE_SMALL_CAPS,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::FontScale>
{ typedef PangoFontScale type; }; 
template<> struct declare_cpptype_of<PangoFontScale>
{ typedef Pango::FontScale type; }; 

template<> struct declare_gtype_of<Pango::FontScale>
{ static GType get_type() { return pango_font_scale_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class Gravity {
  SOUTH_ = PANGO_GRAVITY_SOUTH,
  EAST_ = PANGO_GRAVITY_EAST,
  NORTH_ = PANGO_GRAVITY_NORTH,
  WEST_ = PANGO_GRAVITY_WEST,
  AUTO_ = PANGO_GRAVITY_AUTO,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::Gravity>
{ typedef PangoGravity type; }; 
template<> struct declare_cpptype_of<PangoGravity>
{ typedef Pango::Gravity type; }; 

template<> struct declare_gtype_of<Pango::Gravity>
{ static GType get_type() { return pango_gravity_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class GravityHint {
  NATURAL_ = PANGO_GRAVITY_HINT_NATURAL,
  STRONG_ = PANGO_GRAVITY_HINT_STRONG,
  LINE_ = PANGO_GRAVITY_HINT_LINE,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::GravityHint>
{ typedef PangoGravityHint type; }; 
template<> struct declare_cpptype_of<PangoGravityHint>
{ typedef Pango::GravityHint type; }; 

template<> struct declare_gtype_of<Pango::GravityHint>
{ static GType get_type() { return pango_gravity_hint_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class LayoutDeserializeError {
  INVALID_ = PANGO_LAYOUT_DESERIALIZE_INVALID,
  INVALID_VALUE_ = PANGO_LAYOUT_DESERIALIZE_INVALID_VALUE,
  MISSING_VALUE_ = PANGO_LAYOUT_DESERIALIZE_MISSING_VALUE,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::LayoutDeserializeError>
{ typedef PangoLayoutDeserializeError type; }; 
template<> struct declare_cpptype_of<PangoLayoutDeserializeError>
{ typedef Pango::LayoutDeserializeError type; }; 

template<> struct declare_gtype_of<Pango::LayoutDeserializeError>
{ static GType get_type() { return pango_layout_deserialize_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class Overline {
  NONE_ = PANGO_OVERLINE_NONE,
  SINGLE_ = PANGO_OVERLINE_SINGLE,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::Overline>
{ typedef PangoOverline type; }; 
template<> struct declare_cpptype_of<PangoOverline>
{ typedef Pango::Overline type; }; 

template<> struct declare_gtype_of<Pango::Overline>
{ static GType get_type() { return pango_overline_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class RenderPart {
  FOREGROUND_ = PANGO_RENDER_PART_FOREGROUND,
  BACKGROUND_ = PANGO_RENDER_PART_BACKGROUND,
  UNDERLINE_ = PANGO_RENDER_PART_UNDERLINE,
  STRIKETHROUGH_ = PANGO_RENDER_PART_STRIKETHROUGH,
  OVERLINE_ = PANGO_RENDER_PART_OVERLINE,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::RenderPart>
{ typedef PangoRenderPart type; }; 
template<> struct declare_cpptype_of<PangoRenderPart>
{ typedef Pango::RenderPart type; }; 

template<> struct declare_gtype_of<Pango::RenderPart>
{ static GType get_type() { return pango_render_part_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class Script {
  INVALID_CODE_ = PANGO_SCRIPT_INVALID_CODE,
  COMMON_ = PANGO_SCRIPT_COMMON,
  INHERITED_ = PANGO_SCRIPT_INHERITED,
  ARABIC_ = PANGO_SCRIPT_ARABIC,
  ARMENIAN_ = PANGO_SCRIPT_ARMENIAN,
  BENGALI_ = PANGO_SCRIPT_BENGALI,
  BOPOMOFO_ = PANGO_SCRIPT_BOPOMOFO,
  CHEROKEE_ = PANGO_SCRIPT_CHEROKEE,
  COPTIC_ = PANGO_SCRIPT_COPTIC,
  CYRILLIC_ = PANGO_SCRIPT_CYRILLIC,
  DESERET_ = PANGO_SCRIPT_DESERET,
  DEVANAGARI_ = PANGO_SCRIPT_DEVANAGARI,
  ETHIOPIC_ = PANGO_SCRIPT_ETHIOPIC,
  GEORGIAN_ = PANGO_SCRIPT_GEORGIAN,
  GOTHIC_ = PANGO_SCRIPT_GOTHIC,
  GREEK_ = PANGO_SCRIPT_GREEK,
  GUJARATI_ = PANGO_SCRIPT_GUJARATI,
  GURMUKHI_ = PANGO_SCRIPT_GURMUKHI,
  HAN_ = PANGO_SCRIPT_HAN,
  HANGUL_ = PANGO_SCRIPT_HANGUL,
  HEBREW_ = PANGO_SCRIPT_HEBREW,
  HIRAGANA_ = PANGO_SCRIPT_HIRAGANA,
  KANNADA_ = PANGO_SCRIPT_KANNADA,
  KATAKANA_ = PANGO_SCRIPT_KATAKANA,
  KHMER_ = PANGO_SCRIPT_KHMER,
  LAO_ = PANGO_SCRIPT_LAO,
  LATIN_ = PANGO_SCRIPT_LATIN,
  MALAYALAM_ = PANGO_SCRIPT_MALAYALAM,
  MONGOLIAN_ = PANGO_SCRIPT_MONGOLIAN,
  MYANMAR_ = PANGO_SCRIPT_MYANMAR,
  OGHAM_ = PANGO_SCRIPT_OGHAM,
  OLD_ITALIC_ = PANGO_SCRIPT_OLD_ITALIC,
  ORIYA_ = PANGO_SCRIPT_ORIYA,
  RUNIC_ = PANGO_SCRIPT_RUNIC,
  SINHALA_ = PANGO_SCRIPT_SINHALA,
  SYRIAC_ = PANGO_SCRIPT_SYRIAC,
  TAMIL_ = PANGO_SCRIPT_TAMIL,
  TELUGU_ = PANGO_SCRIPT_TELUGU,
  THAANA_ = PANGO_SCRIPT_THAANA,
  THAI_ = PANGO_SCRIPT_THAI,
  TIBETAN_ = PANGO_SCRIPT_TIBETAN,
  CANADIAN_ABORIGINAL_ = PANGO_SCRIPT_CANADIAN_ABORIGINAL,
  YI_ = PANGO_SCRIPT_YI,
  TAGALOG_ = PANGO_SCRIPT_TAGALOG,
  HANUNOO_ = PANGO_SCRIPT_HANUNOO,
  BUHID_ = PANGO_SCRIPT_BUHID,
  TAGBANWA_ = PANGO_SCRIPT_TAGBANWA,
  BRAILLE_ = PANGO_SCRIPT_BRAILLE,
  CYPRIOT_ = PANGO_SCRIPT_CYPRIOT,
  LIMBU_ = PANGO_SCRIPT_LIMBU,
  OSMANYA_ = PANGO_SCRIPT_OSMANYA,
  SHAVIAN_ = PANGO_SCRIPT_SHAVIAN,
  LINEAR_B_ = PANGO_SCRIPT_LINEAR_B,
  TAI_LE_ = PANGO_SCRIPT_TAI_LE,
  UGARITIC_ = PANGO_SCRIPT_UGARITIC,
  NEW_TAI_LUE_ = PANGO_SCRIPT_NEW_TAI_LUE,
  BUGINESE_ = PANGO_SCRIPT_BUGINESE,
  GLAGOLITIC_ = PANGO_SCRIPT_GLAGOLITIC,
  TIFINAGH_ = PANGO_SCRIPT_TIFINAGH,
  SYLOTI_NAGRI_ = PANGO_SCRIPT_SYLOTI_NAGRI,
  OLD_PERSIAN_ = PANGO_SCRIPT_OLD_PERSIAN,
  KHAROSHTHI_ = PANGO_SCRIPT_KHAROSHTHI,
  UNKNOWN_ = PANGO_SCRIPT_UNKNOWN,
  BALINESE_ = PANGO_SCRIPT_BALINESE,
  CUNEIFORM_ = PANGO_SCRIPT_CUNEIFORM,
  PHOENICIAN_ = PANGO_SCRIPT_PHOENICIAN,
  PHAGS_PA_ = PANGO_SCRIPT_PHAGS_PA,
  NKO_ = PANGO_SCRIPT_NKO,
  KAYAH_LI_ = PANGO_SCRIPT_KAYAH_LI,
  LEPCHA_ = PANGO_SCRIPT_LEPCHA,
  REJANG_ = PANGO_SCRIPT_REJANG,
  SUNDANESE_ = PANGO_SCRIPT_SUNDANESE,
  SAURASHTRA_ = PANGO_SCRIPT_SAURASHTRA,
  CHAM_ = PANGO_SCRIPT_CHAM,
  OL_CHIKI_ = PANGO_SCRIPT_OL_CHIKI,
  VAI_ = PANGO_SCRIPT_VAI,
  CARIAN_ = PANGO_SCRIPT_CARIAN,
  LYCIAN_ = PANGO_SCRIPT_LYCIAN,
  LYDIAN_ = PANGO_SCRIPT_LYDIAN,
  BATAK_ = PANGO_SCRIPT_BATAK,
  BRAHMI_ = PANGO_SCRIPT_BRAHMI,
  MANDAIC_ = PANGO_SCRIPT_MANDAIC,
  CHAKMA_ = PANGO_SCRIPT_CHAKMA,
  MEROITIC_CURSIVE_ = PANGO_SCRIPT_MEROITIC_CURSIVE,
  MEROITIC_HIEROGLYPHS_ = PANGO_SCRIPT_MEROITIC_HIEROGLYPHS,
  MIAO_ = PANGO_SCRIPT_MIAO,
  SHARADA_ = PANGO_SCRIPT_SHARADA,
  SORA_SOMPENG_ = PANGO_SCRIPT_SORA_SOMPENG,
  TAKRI_ = PANGO_SCRIPT_TAKRI,
  BASSA_VAH_ = PANGO_SCRIPT_BASSA_VAH,
  CAUCASIAN_ALBANIAN_ = PANGO_SCRIPT_CAUCASIAN_ALBANIAN,
  DUPLOYAN_ = PANGO_SCRIPT_DUPLOYAN,
  ELBASAN_ = PANGO_SCRIPT_ELBASAN,
  GRANTHA_ = PANGO_SCRIPT_GRANTHA,
  KHOJKI_ = PANGO_SCRIPT_KHOJKI,
  KHUDAWADI_ = PANGO_SCRIPT_KHUDAWADI,
  LINEAR_A_ = PANGO_SCRIPT_LINEAR_A,
  MAHAJANI_ = PANGO_SCRIPT_MAHAJANI,
  MANICHAEAN_ = PANGO_SCRIPT_MANICHAEAN,
  MENDE_KIKAKUI_ = PANGO_SCRIPT_MENDE_KIKAKUI,
  MODI_ = PANGO_SCRIPT_MODI,
  MRO_ = PANGO_SCRIPT_MRO,
  NABATAEAN_ = PANGO_SCRIPT_NABATAEAN,
  OLD_NORTH_ARABIAN_ = PANGO_SCRIPT_OLD_NORTH_ARABIAN,
  OLD_PERMIC_ = PANGO_SCRIPT_OLD_PERMIC,
  PAHAWH_HMONG_ = PANGO_SCRIPT_PAHAWH_HMONG,
  PALMYRENE_ = PANGO_SCRIPT_PALMYRENE,
  PAU_CIN_HAU_ = PANGO_SCRIPT_PAU_CIN_HAU,
  PSALTER_PAHLAVI_ = PANGO_SCRIPT_PSALTER_PAHLAVI,
  SIDDHAM_ = PANGO_SCRIPT_SIDDHAM,
  TIRHUTA_ = PANGO_SCRIPT_TIRHUTA,
  WARANG_CITI_ = PANGO_SCRIPT_WARANG_CITI,
  AHOM_ = PANGO_SCRIPT_AHOM,
  ANATOLIAN_HIEROGLYPHS_ = PANGO_SCRIPT_ANATOLIAN_HIEROGLYPHS,
  HATRAN_ = PANGO_SCRIPT_HATRAN,
  MULTANI_ = PANGO_SCRIPT_MULTANI,
  OLD_HUNGARIAN_ = PANGO_SCRIPT_OLD_HUNGARIAN,
  SIGNWRITING_ = PANGO_SCRIPT_SIGNWRITING,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::Script>
{ typedef PangoScript type; }; 
template<> struct declare_cpptype_of<PangoScript>
{ typedef Pango::Script type; }; 

template<> struct declare_gtype_of<Pango::Script>
{ static GType get_type() { return pango_script_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class Stretch {
  ULTRA_CONDENSED_ = PANGO_STRETCH_ULTRA_CONDENSED,
  EXTRA_CONDENSED_ = PANGO_STRETCH_EXTRA_CONDENSED,
  CONDENSED_ = PANGO_STRETCH_CONDENSED,
  SEMI_CONDENSED_ = PANGO_STRETCH_SEMI_CONDENSED,
  NORMAL_ = PANGO_STRETCH_NORMAL,
  SEMI_EXPANDED_ = PANGO_STRETCH_SEMI_EXPANDED,
  EXPANDED_ = PANGO_STRETCH_EXPANDED,
  EXTRA_EXPANDED_ = PANGO_STRETCH_EXTRA_EXPANDED,
  ULTRA_EXPANDED_ = PANGO_STRETCH_ULTRA_EXPANDED,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::Stretch>
{ typedef PangoStretch type; }; 
template<> struct declare_cpptype_of<PangoStretch>
{ typedef Pango::Stretch type; }; 

template<> struct declare_gtype_of<Pango::Stretch>
{ static GType get_type() { return pango_stretch_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class Style {
  NORMAL_ = PANGO_STYLE_NORMAL,
  OBLIQUE_ = PANGO_STYLE_OBLIQUE,
  ITALIC_ = PANGO_STYLE_ITALIC,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::Style>
{ typedef PangoStyle type; }; 
template<> struct declare_cpptype_of<PangoStyle>
{ typedef Pango::Style type; }; 

template<> struct declare_gtype_of<Pango::Style>
{ static GType get_type() { return pango_style_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class TabAlign {
  LEFT_ = PANGO_TAB_LEFT,
  RIGHT_ = PANGO_TAB_RIGHT,
  CENTER_ = PANGO_TAB_CENTER,
  DECIMAL_ = PANGO_TAB_DECIMAL,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::TabAlign>
{ typedef PangoTabAlign type; }; 
template<> struct declare_cpptype_of<PangoTabAlign>
{ typedef Pango::TabAlign type; }; 

template<> struct declare_gtype_of<Pango::TabAlign>
{ static GType get_type() { return pango_tab_align_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class TextTransform {
  NONE_ = PANGO_TEXT_TRANSFORM_NONE,
  LOWERCASE_ = PANGO_TEXT_TRANSFORM_LOWERCASE,
  UPPERCASE_ = PANGO_TEXT_TRANSFORM_UPPERCASE,
  CAPITALIZE_ = PANGO_TEXT_TRANSFORM_CAPITALIZE,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::TextTransform>
{ typedef PangoTextTransform type; }; 
template<> struct declare_cpptype_of<PangoTextTransform>
{ typedef Pango::TextTransform type; }; 

template<> struct declare_gtype_of<Pango::TextTransform>
{ static GType get_type() { return pango_text_transform_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class Underline {
  NONE_ = PANGO_UNDERLINE_NONE,
  SINGLE_ = PANGO_UNDERLINE_SINGLE,
  DOUBLE_ = PANGO_UNDERLINE_DOUBLE,
  LOW_ = PANGO_UNDERLINE_LOW,
  ERROR_ = PANGO_UNDERLINE_ERROR,
  SINGLE_LINE_ = PANGO_UNDERLINE_SINGLE_LINE,
  DOUBLE_LINE_ = PANGO_UNDERLINE_DOUBLE_LINE,
  ERROR_LINE_ = PANGO_UNDERLINE_ERROR_LINE,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::Underline>
{ typedef PangoUnderline type; }; 
template<> struct declare_cpptype_of<PangoUnderline>
{ typedef Pango::Underline type; }; 

template<> struct declare_gtype_of<Pango::Underline>
{ static GType get_type() { return pango_underline_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class Variant {
  NORMAL_ = PANGO_VARIANT_NORMAL,
  SMALL_CAPS_ = PANGO_VARIANT_SMALL_CAPS,
  ALL_SMALL_CAPS_ = PANGO_VARIANT_ALL_SMALL_CAPS,
  PETITE_CAPS_ = PANGO_VARIANT_PETITE_CAPS,
  ALL_PETITE_CAPS_ = PANGO_VARIANT_ALL_PETITE_CAPS,
  UNICASE_ = PANGO_VARIANT_UNICASE,
  TITLE_CAPS_ = PANGO_VARIANT_TITLE_CAPS,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::Variant>
{ typedef PangoVariant type; }; 
template<> struct declare_cpptype_of<PangoVariant>
{ typedef Pango::Variant type; }; 

template<> struct declare_gtype_of<Pango::Variant>
{ static GType get_type() { return pango_variant_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class Weight {
  THIN_ = PANGO_WEIGHT_THIN,
  ULTRALIGHT_ = PANGO_WEIGHT_ULTRALIGHT,
  LIGHT_ = PANGO_WEIGHT_LIGHT,
  SEMILIGHT_ = PANGO_WEIGHT_SEMILIGHT,
  BOOK_ = PANGO_WEIGHT_BOOK,
  NORMAL_ = PANGO_WEIGHT_NORMAL,
  MEDIUM_ = PANGO_WEIGHT_MEDIUM,
  SEMIBOLD_ = PANGO_WEIGHT_SEMIBOLD,
  BOLD_ = PANGO_WEIGHT_BOLD,
  ULTRABOLD_ = PANGO_WEIGHT_ULTRABOLD,
  HEAVY_ = PANGO_WEIGHT_HEAVY,
  ULTRAHEAVY_ = PANGO_WEIGHT_ULTRAHEAVY,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::Weight>
{ typedef PangoWeight type; }; 
template<> struct declare_cpptype_of<PangoWeight>
{ typedef Pango::Weight type; }; 

template<> struct declare_gtype_of<Pango::Weight>
{ static GType get_type() { return pango_weight_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class WrapMode {
  WORD_ = PANGO_WRAP_WORD,
  CHAR_ = PANGO_WRAP_CHAR,
  WORD_CHAR_ = PANGO_WRAP_WORD_CHAR,
};

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::WrapMode>
{ typedef PangoWrapMode type; }; 
template<> struct declare_cpptype_of<PangoWrapMode>
{ typedef Pango::WrapMode type; }; 

template<> struct declare_gtype_of<Pango::WrapMode>
{ static GType get_type() { return pango_wrap_mode_get_type(); } };


} // namespace repository

} // namespace gi


#endif
