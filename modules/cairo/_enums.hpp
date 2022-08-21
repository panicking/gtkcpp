// AUTO-GENERATED

#ifndef _GI_CAIRO__ENUMS_HPP_
#define _GI_CAIRO__ENUMS_HPP_

namespace gi {

namespace repository {

namespace cairo {

enum class Status {
  SUCCESS_ = CAIRO_STATUS_SUCCESS,
  NO_MEMORY_ = CAIRO_STATUS_NO_MEMORY,
  INVALID_RESTORE_ = CAIRO_STATUS_INVALID_RESTORE,
  INVALID_POP_GROUP_ = CAIRO_STATUS_INVALID_POP_GROUP,
  NO_CURRENT_POINT_ = CAIRO_STATUS_NO_CURRENT_POINT,
  INVALID_MATRIX_ = CAIRO_STATUS_INVALID_MATRIX,
  INVALID_STATUS_ = CAIRO_STATUS_INVALID_STATUS,
  NULL_POINTER_ = CAIRO_STATUS_NULL_POINTER,
  INVALID_STRING_ = CAIRO_STATUS_INVALID_STRING,
  INVALID_PATH_DATA_ = CAIRO_STATUS_INVALID_PATH_DATA,
  READ_ERROR_ = CAIRO_STATUS_READ_ERROR,
  WRITE_ERROR_ = CAIRO_STATUS_WRITE_ERROR,
  SURFACE_FINISHED_ = CAIRO_STATUS_SURFACE_FINISHED,
  SURFACE_TYPE_MISMATCH_ = CAIRO_STATUS_SURFACE_TYPE_MISMATCH,
  PATTERN_TYPE_MISMATCH_ = CAIRO_STATUS_PATTERN_TYPE_MISMATCH,
  INVALID_CONTENT_ = CAIRO_STATUS_INVALID_CONTENT,
  INVALID_FORMAT_ = CAIRO_STATUS_INVALID_FORMAT,
  INVALID_VISUAL_ = CAIRO_STATUS_INVALID_VISUAL,
  FILE_NOT_FOUND_ = CAIRO_STATUS_FILE_NOT_FOUND,
  INVALID_DASH_ = CAIRO_STATUS_INVALID_DASH,
  INVALID_DSC_COMMENT_ = CAIRO_STATUS_INVALID_DSC_COMMENT,
  INVALID_INDEX_ = CAIRO_STATUS_INVALID_INDEX,
  CLIP_NOT_REPRESENTABLE_ = CAIRO_STATUS_CLIP_NOT_REPRESENTABLE,
  TEMP_FILE_ERROR_ = CAIRO_STATUS_TEMP_FILE_ERROR,
  INVALID_STRIDE_ = CAIRO_STATUS_INVALID_STRIDE,
  FONT_TYPE_MISMATCH_ = CAIRO_STATUS_FONT_TYPE_MISMATCH,
  USER_FONT_IMMUTABLE_ = CAIRO_STATUS_USER_FONT_IMMUTABLE,
  USER_FONT_ERROR_ = CAIRO_STATUS_USER_FONT_ERROR,
  NEGATIVE_COUNT_ = CAIRO_STATUS_NEGATIVE_COUNT,
  INVALID_CLUSTERS_ = CAIRO_STATUS_INVALID_CLUSTERS,
  INVALID_SLANT_ = CAIRO_STATUS_INVALID_SLANT,
  INVALID_WEIGHT_ = CAIRO_STATUS_INVALID_WEIGHT,
  INVALID_SIZE_ = CAIRO_STATUS_INVALID_SIZE,
  USER_FONT_NOT_IMPLEMENTED_ = CAIRO_STATUS_USER_FONT_NOT_IMPLEMENTED,
  DEVICE_TYPE_MISMATCH_ = CAIRO_STATUS_DEVICE_TYPE_MISMATCH,
  DEVICE_ERROR_ = CAIRO_STATUS_DEVICE_ERROR,
  INVALID_MESH_CONSTRUCTION_ = CAIRO_STATUS_INVALID_MESH_CONSTRUCTION,
  DEVICE_FINISHED_ = CAIRO_STATUS_DEVICE_FINISHED,
  JBIG2_GLOBAL_MISSING_ = CAIRO_STATUS_JBIG2_GLOBAL_MISSING,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::Status>
{ typedef cairo_status_t type; }; 
template<> struct declare_cpptype_of<cairo_status_t>
{ typedef cairo::Status type; }; 

template<> struct declare_gtype_of<cairo::Status>
{ static GType get_type() { return cairo_gobject_status_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class Content {
  COLOR_ = CAIRO_CONTENT_COLOR,
  ALPHA_ = CAIRO_CONTENT_ALPHA,
  COLOR_ALPHA_ = CAIRO_CONTENT_COLOR_ALPHA,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::Content>
{ typedef cairo_content_t type; }; 
template<> struct declare_cpptype_of<cairo_content_t>
{ typedef cairo::Content type; }; 

template<> struct declare_gtype_of<cairo::Content>
{ static GType get_type() { return cairo_gobject_content_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class Operator {
  CLEAR_ = CAIRO_OPERATOR_CLEAR,
  SOURCE_ = CAIRO_OPERATOR_SOURCE,
  OVER_ = CAIRO_OPERATOR_OVER,
  IN_ = CAIRO_OPERATOR_IN,
  OUT_ = CAIRO_OPERATOR_OUT,
  ATOP_ = CAIRO_OPERATOR_ATOP,
  DEST_ = CAIRO_OPERATOR_DEST,
  DEST_OVER_ = CAIRO_OPERATOR_DEST_OVER,
  DEST_IN_ = CAIRO_OPERATOR_DEST_IN,
  DEST_OUT_ = CAIRO_OPERATOR_DEST_OUT,
  DEST_ATOP_ = CAIRO_OPERATOR_DEST_ATOP,
  XOR_ = CAIRO_OPERATOR_XOR,
  ADD_ = CAIRO_OPERATOR_ADD,
  SATURATE_ = CAIRO_OPERATOR_SATURATE,
  MULTIPLY_ = CAIRO_OPERATOR_MULTIPLY,
  SCREEN_ = CAIRO_OPERATOR_SCREEN,
  OVERLAY_ = CAIRO_OPERATOR_OVERLAY,
  DARKEN_ = CAIRO_OPERATOR_DARKEN,
  LIGHTEN_ = CAIRO_OPERATOR_LIGHTEN,
  COLOR_DODGE_ = CAIRO_OPERATOR_COLOR_DODGE,
  COLOR_BURN_ = CAIRO_OPERATOR_COLOR_BURN,
  HARD_LIGHT_ = CAIRO_OPERATOR_HARD_LIGHT,
  SOFT_LIGHT_ = CAIRO_OPERATOR_SOFT_LIGHT,
  DIFFERENCE_ = CAIRO_OPERATOR_DIFFERENCE,
  EXCLUSION_ = CAIRO_OPERATOR_EXCLUSION,
  HSL_HUE_ = CAIRO_OPERATOR_HSL_HUE,
  HSL_SATURATION_ = CAIRO_OPERATOR_HSL_SATURATION,
  HSL_COLOR_ = CAIRO_OPERATOR_HSL_COLOR,
  HSL_LUMINOSITY_ = CAIRO_OPERATOR_HSL_LUMINOSITY,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::Operator>
{ typedef cairo_operator_t type; }; 
template<> struct declare_cpptype_of<cairo_operator_t>
{ typedef cairo::Operator type; }; 

template<> struct declare_gtype_of<cairo::Operator>
{ static GType get_type() { return cairo_gobject_operator_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class Antialias {
  DEFAULT_ = CAIRO_ANTIALIAS_DEFAULT,
  NONE_ = CAIRO_ANTIALIAS_NONE,
  GRAY_ = CAIRO_ANTIALIAS_GRAY,
  SUBPIXEL_ = CAIRO_ANTIALIAS_SUBPIXEL,
  FAST_ = CAIRO_ANTIALIAS_FAST,
  GOOD_ = CAIRO_ANTIALIAS_GOOD,
  BEST_ = CAIRO_ANTIALIAS_BEST,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::Antialias>
{ typedef cairo_antialias_t type; }; 
template<> struct declare_cpptype_of<cairo_antialias_t>
{ typedef cairo::Antialias type; }; 

template<> struct declare_gtype_of<cairo::Antialias>
{ static GType get_type() { return cairo_gobject_antialias_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class FillRule {
  WINDING_ = CAIRO_FILL_RULE_WINDING,
  EVEN_ODD_ = CAIRO_FILL_RULE_EVEN_ODD,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::FillRule>
{ typedef cairo_fill_rule_t type; }; 
template<> struct declare_cpptype_of<cairo_fill_rule_t>
{ typedef cairo::FillRule type; }; 

template<> struct declare_gtype_of<cairo::FillRule>
{ static GType get_type() { return cairo_gobject_fill_rule_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class LineCap {
  BUTT_ = CAIRO_LINE_CAP_BUTT,
  ROUND_ = CAIRO_LINE_CAP_ROUND,
  SQUARE_ = CAIRO_LINE_CAP_SQUARE,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::LineCap>
{ typedef cairo_line_cap_t type; }; 
template<> struct declare_cpptype_of<cairo_line_cap_t>
{ typedef cairo::LineCap type; }; 

template<> struct declare_gtype_of<cairo::LineCap>
{ static GType get_type() { return cairo_gobject_line_cap_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class LineJoin {
  MITER_ = CAIRO_LINE_JOIN_MITER,
  ROUND_ = CAIRO_LINE_JOIN_ROUND,
  BEVEL_ = CAIRO_LINE_JOIN_BEVEL,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::LineJoin>
{ typedef cairo_line_join_t type; }; 
template<> struct declare_cpptype_of<cairo_line_join_t>
{ typedef cairo::LineJoin type; }; 

template<> struct declare_gtype_of<cairo::LineJoin>
{ static GType get_type() { return cairo_gobject_line_join_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class TextClusterFlags {
  BACKWARD_ = CAIRO_TEXT_CLUSTER_FLAG_BACKWARD,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::TextClusterFlags>
{ typedef cairo_text_cluster_flags_t type; }; 
template<> struct declare_cpptype_of<cairo_text_cluster_flags_t>
{ typedef cairo::TextClusterFlags type; }; 

template<> struct declare_gtype_of<cairo::TextClusterFlags>
{ static GType get_type() { return cairo_gobject_text_cluster_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class FontSlant {
  NORMAL_ = CAIRO_FONT_SLANT_NORMAL,
  ITALIC_ = CAIRO_FONT_SLANT_ITALIC,
  OBLIQUE_ = CAIRO_FONT_SLANT_OBLIQUE,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::FontSlant>
{ typedef cairo_font_slant_t type; }; 
template<> struct declare_cpptype_of<cairo_font_slant_t>
{ typedef cairo::FontSlant type; }; 

template<> struct declare_gtype_of<cairo::FontSlant>
{ static GType get_type() { return cairo_gobject_font_slant_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class FontWeight {
  NORMAL_ = CAIRO_FONT_WEIGHT_NORMAL,
  BOLD_ = CAIRO_FONT_WEIGHT_BOLD,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::FontWeight>
{ typedef cairo_font_weight_t type; }; 
template<> struct declare_cpptype_of<cairo_font_weight_t>
{ typedef cairo::FontWeight type; }; 

template<> struct declare_gtype_of<cairo::FontWeight>
{ static GType get_type() { return cairo_gobject_font_weight_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class SubpixelOrder {
  DEFAULT_ = CAIRO_SUBPIXEL_ORDER_DEFAULT,
  RGB_ = CAIRO_SUBPIXEL_ORDER_RGB,
  BGR_ = CAIRO_SUBPIXEL_ORDER_BGR,
  VRGB_ = CAIRO_SUBPIXEL_ORDER_VRGB,
  VBGR_ = CAIRO_SUBPIXEL_ORDER_VBGR,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::SubpixelOrder>
{ typedef cairo_subpixel_order_t type; }; 
template<> struct declare_cpptype_of<cairo_subpixel_order_t>
{ typedef cairo::SubpixelOrder type; }; 

template<> struct declare_gtype_of<cairo::SubpixelOrder>
{ static GType get_type() { return cairo_gobject_subpixel_order_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class HintStyle {
  DEFAULT_ = CAIRO_HINT_STYLE_DEFAULT,
  NONE_ = CAIRO_HINT_STYLE_NONE,
  SLIGHT_ = CAIRO_HINT_STYLE_SLIGHT,
  MEDIUM_ = CAIRO_HINT_STYLE_MEDIUM,
  FULL_ = CAIRO_HINT_STYLE_FULL,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::HintStyle>
{ typedef cairo_hint_style_t type; }; 
template<> struct declare_cpptype_of<cairo_hint_style_t>
{ typedef cairo::HintStyle type; }; 

template<> struct declare_gtype_of<cairo::HintStyle>
{ static GType get_type() { return cairo_gobject_hint_style_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class HintMetrics {
  DEFAULT_ = CAIRO_HINT_METRICS_DEFAULT,
  OFF_ = CAIRO_HINT_METRICS_OFF,
  ON_ = CAIRO_HINT_METRICS_ON,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::HintMetrics>
{ typedef cairo_hint_metrics_t type; }; 
template<> struct declare_cpptype_of<cairo_hint_metrics_t>
{ typedef cairo::HintMetrics type; }; 

template<> struct declare_gtype_of<cairo::HintMetrics>
{ static GType get_type() { return cairo_gobject_hint_metrics_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class FontType {
  TOY_ = CAIRO_FONT_TYPE_TOY,
  FT_ = CAIRO_FONT_TYPE_FT,
  WIN32_ = CAIRO_FONT_TYPE_WIN32,
  QUARTZ_ = CAIRO_FONT_TYPE_QUARTZ,
  USER_ = CAIRO_FONT_TYPE_USER,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::FontType>
{ typedef cairo_font_type_t type; }; 
template<> struct declare_cpptype_of<cairo_font_type_t>
{ typedef cairo::FontType type; }; 

template<> struct declare_gtype_of<cairo::FontType>
{ static GType get_type() { return cairo_gobject_font_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class PathDataType {
  MOVE_TO_ = CAIRO_PATH_MOVE_TO,
  LINE_TO_ = CAIRO_PATH_LINE_TO,
  CURVE_TO_ = CAIRO_PATH_CURVE_TO,
  CLOSE_PATH_ = CAIRO_PATH_CLOSE_PATH,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::PathDataType>
{ typedef cairo_path_data_type_t type; }; 
template<> struct declare_cpptype_of<cairo_path_data_type_t>
{ typedef cairo::PathDataType type; }; 

template<> struct declare_gtype_of<cairo::PathDataType>
{ static GType get_type() { return cairo_gobject_path_data_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class DeviceType {
  DRM_ = CAIRO_DEVICE_TYPE_DRM,
  GL_ = CAIRO_DEVICE_TYPE_GL,
  SCRIPT_ = CAIRO_DEVICE_TYPE_SCRIPT,
  XCB_ = CAIRO_DEVICE_TYPE_XCB,
  XLIB_ = CAIRO_DEVICE_TYPE_XLIB,
  XML_ = CAIRO_DEVICE_TYPE_XML,
  COGL_ = CAIRO_DEVICE_TYPE_COGL,
  WIN32_ = CAIRO_DEVICE_TYPE_WIN32,
  INVALID_ = CAIRO_DEVICE_TYPE_INVALID,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::DeviceType>
{ typedef cairo_device_type_t type; }; 
template<> struct declare_cpptype_of<cairo_device_type_t>
{ typedef cairo::DeviceType type; }; 

template<> struct declare_gtype_of<cairo::DeviceType>
{ static GType get_type() { return cairo_gobject_device_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class SurfaceType {
  IMAGE_ = CAIRO_SURFACE_TYPE_IMAGE,
  PDF_ = CAIRO_SURFACE_TYPE_PDF,
  PS_ = CAIRO_SURFACE_TYPE_PS,
  XLIB_ = CAIRO_SURFACE_TYPE_XLIB,
  XCB_ = CAIRO_SURFACE_TYPE_XCB,
  GLITZ_ = CAIRO_SURFACE_TYPE_GLITZ,
  QUARTZ_ = CAIRO_SURFACE_TYPE_QUARTZ,
  WIN32_ = CAIRO_SURFACE_TYPE_WIN32,
  BEOS_ = CAIRO_SURFACE_TYPE_BEOS,
  DIRECTFB_ = CAIRO_SURFACE_TYPE_DIRECTFB,
  SVG_ = CAIRO_SURFACE_TYPE_SVG,
  OS2_ = CAIRO_SURFACE_TYPE_OS2,
  WIN32_PRINTING_ = CAIRO_SURFACE_TYPE_WIN32_PRINTING,
  QUARTZ_IMAGE_ = CAIRO_SURFACE_TYPE_QUARTZ_IMAGE,
  SCRIPT_ = CAIRO_SURFACE_TYPE_SCRIPT,
  QT_ = CAIRO_SURFACE_TYPE_QT,
  RECORDING_ = CAIRO_SURFACE_TYPE_RECORDING,
  VG_ = CAIRO_SURFACE_TYPE_VG,
  GL_ = CAIRO_SURFACE_TYPE_GL,
  DRM_ = CAIRO_SURFACE_TYPE_DRM,
  TEE_ = CAIRO_SURFACE_TYPE_TEE,
  XML_ = CAIRO_SURFACE_TYPE_XML,
  SKIA_ = CAIRO_SURFACE_TYPE_SKIA,
  SUBSURFACE_ = CAIRO_SURFACE_TYPE_SUBSURFACE,
  COGL_ = CAIRO_SURFACE_TYPE_COGL,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::SurfaceType>
{ typedef cairo_surface_type_t type; }; 
template<> struct declare_cpptype_of<cairo_surface_type_t>
{ typedef cairo::SurfaceType type; }; 

template<> struct declare_gtype_of<cairo::SurfaceType>
{ static GType get_type() { return cairo_gobject_surface_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class Format {
  INVALID_ = CAIRO_FORMAT_INVALID,
  ARGB32_ = CAIRO_FORMAT_ARGB32,
  RGB24_ = CAIRO_FORMAT_RGB24,
  A8_ = CAIRO_FORMAT_A8,
  A1_ = CAIRO_FORMAT_A1,
  RGB16_565_ = CAIRO_FORMAT_RGB16_565,
  RGB30_ = CAIRO_FORMAT_RGB30,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::Format>
{ typedef cairo_format_t type; }; 
template<> struct declare_cpptype_of<cairo_format_t>
{ typedef cairo::Format type; }; 

template<> struct declare_gtype_of<cairo::Format>
{ static GType get_type() { return cairo_gobject_format_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class PatternType {
  SOLID_ = CAIRO_PATTERN_TYPE_SOLID,
  SURFACE_ = CAIRO_PATTERN_TYPE_SURFACE,
  LINEAR_ = CAIRO_PATTERN_TYPE_LINEAR,
  RADIAL_ = CAIRO_PATTERN_TYPE_RADIAL,
  MESH_ = CAIRO_PATTERN_TYPE_MESH,
  RASTER_SOURCE_ = CAIRO_PATTERN_TYPE_RASTER_SOURCE,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::PatternType>
{ typedef cairo_pattern_type_t type; }; 
template<> struct declare_cpptype_of<cairo_pattern_type_t>
{ typedef cairo::PatternType type; }; 

template<> struct declare_gtype_of<cairo::PatternType>
{ static GType get_type() { return cairo_gobject_pattern_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class Extend {
  NONE_ = CAIRO_EXTEND_NONE,
  REPEAT_ = CAIRO_EXTEND_REPEAT,
  REFLECT_ = CAIRO_EXTEND_REFLECT,
  PAD_ = CAIRO_EXTEND_PAD,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::Extend>
{ typedef cairo_extend_t type; }; 
template<> struct declare_cpptype_of<cairo_extend_t>
{ typedef cairo::Extend type; }; 

template<> struct declare_gtype_of<cairo::Extend>
{ static GType get_type() { return cairo_gobject_extend_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class Filter {
  FAST_ = CAIRO_FILTER_FAST,
  GOOD_ = CAIRO_FILTER_GOOD,
  BEST_ = CAIRO_FILTER_BEST,
  NEAREST_ = CAIRO_FILTER_NEAREST,
  BILINEAR_ = CAIRO_FILTER_BILINEAR,
  GAUSSIAN_ = CAIRO_FILTER_GAUSSIAN,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::Filter>
{ typedef cairo_filter_t type; }; 
template<> struct declare_cpptype_of<cairo_filter_t>
{ typedef cairo::Filter type; }; 

template<> struct declare_gtype_of<cairo::Filter>
{ static GType get_type() { return cairo_gobject_filter_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace cairo {

enum class RegionOverlap {
  IN_ = CAIRO_REGION_OVERLAP_IN,
  OUT_ = CAIRO_REGION_OVERLAP_OUT,
  PART_ = CAIRO_REGION_OVERLAP_PART,
};

} // namespace cairo

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<cairo::RegionOverlap>
{ typedef cairo_region_overlap_t type; }; 
template<> struct declare_cpptype_of<cairo_region_overlap_t>
{ typedef cairo::RegionOverlap type; }; 

template<> struct declare_gtype_of<cairo::RegionOverlap>
{ static GType get_type() { return cairo_gobject_region_overlap_get_type(); } };


} // namespace repository

} // namespace gi


#endif
