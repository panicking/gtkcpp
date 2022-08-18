// AUTO-GENERATED

#ifndef _GI_PANGO_LAYOUT_HPP_
#define _GI_PANGO_LAYOUT_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrList;
class Context;
class FontDescription;
class LayoutIter;
class LayoutLine;
class LogAttr;
class Rectangle;
class TabArray;

class Layout;

namespace base {


#define GI_PANGO_LAYOUT_BASE base::LayoutBase
class LayoutBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoLayout BaseObjectType;

LayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_layout_get_type(); } 

// PangoLayout* pango_layout_new (PangoContext* context);
// ::PangoLayout* pango_layout_new (::PangoContext* context);
static GI_INLINE_DECL Pango::Layout new_ (Pango::Context context) noexcept;

// PangoLayout* pango_layout_deserialize (PangoContext* context, GBytes* bytes, PangoLayoutDeserializeFlags flags, GError ** error);
// ::PangoLayout* pango_layout_deserialize (::PangoContext* context, ::GBytes* bytes, ::PangoLayoutDeserializeFlags flags, GError ** error);
static GI_INLINE_DECL Pango::Layout deserialize (Pango::Context context, GLib::Bytes bytes, Pango::LayoutDeserializeFlags flags);
static GI_INLINE_DECL Pango::Layout deserialize (Pango::Context context, GLib::Bytes bytes, Pango::LayoutDeserializeFlags flags, GLib::Error * _error) noexcept;

// void pango_layout_context_changed (PangoLayout* layout);
// void pango_layout_context_changed (::PangoLayout* layout);
GI_INLINE_DECL void context_changed () noexcept;

// PangoLayout* pango_layout_copy (PangoLayout* src);
// ::PangoLayout* pango_layout_copy (::PangoLayout* src);
GI_INLINE_DECL Pango::Layout copy () noexcept;

// PangoAlignment pango_layout_get_alignment (PangoLayout* layout);
// ::PangoAlignment pango_layout_get_alignment (::PangoLayout* layout);
GI_INLINE_DECL Pango::Alignment get_alignment () noexcept;

// PangoAttrList* pango_layout_get_attributes (PangoLayout* layout);
// ::PangoAttrList* pango_layout_get_attributes (::PangoLayout* layout);
GI_INLINE_DECL Pango::AttrList get_attributes () noexcept;

// gboolean pango_layout_get_auto_dir (PangoLayout* layout);
// gboolean pango_layout_get_auto_dir (::PangoLayout* layout);
GI_INLINE_DECL bool get_auto_dir () noexcept;

// int pango_layout_get_baseline (PangoLayout* layout);
// gint pango_layout_get_baseline (::PangoLayout* layout);
GI_INLINE_DECL gint get_baseline () noexcept;

// void pango_layout_get_caret_pos (PangoLayout* layout, int index_, PangoRectangle* strong_pos, PangoRectangle* weak_pos);
// void pango_layout_get_caret_pos (::PangoLayout* layout, gint index_, ::PangoRectangle* strong_pos, ::PangoRectangle* weak_pos);
GI_INLINE_DECL void get_caret_pos (gint index_, Pango::Rectangle * strong_pos = nullptr, Pango::Rectangle * weak_pos = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_caret_pos (gint index_) noexcept;

// gint pango_layout_get_character_count (PangoLayout* layout);
// gint pango_layout_get_character_count (::PangoLayout* layout);
GI_INLINE_DECL gint get_character_count () noexcept;

// PangoContext* pango_layout_get_context (PangoLayout* layout);
// ::PangoContext* pango_layout_get_context (::PangoLayout* layout);
GI_INLINE_DECL Pango::Context get_context () noexcept;

// void pango_layout_get_cursor_pos (PangoLayout* layout, int index_, PangoRectangle* strong_pos, PangoRectangle* weak_pos);
// void pango_layout_get_cursor_pos (::PangoLayout* layout, gint index_, ::PangoRectangle* strong_pos, ::PangoRectangle* weak_pos);
GI_INLINE_DECL void get_cursor_pos (gint index_, Pango::Rectangle * strong_pos = nullptr, Pango::Rectangle * weak_pos = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_cursor_pos (gint index_) noexcept;

// PangoDirection pango_layout_get_direction (PangoLayout* layout, int index);
// ::PangoDirection pango_layout_get_direction (::PangoLayout* layout, gint index);
GI_INLINE_DECL Pango::Direction get_direction (gint index) noexcept;

// PangoEllipsizeMode pango_layout_get_ellipsize (PangoLayout* layout);
// ::PangoEllipsizeMode pango_layout_get_ellipsize (::PangoLayout* layout);
GI_INLINE_DECL Pango::EllipsizeMode get_ellipsize () noexcept;

// void pango_layout_get_extents (PangoLayout* layout, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_layout_get_extents (::PangoLayout* layout, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
GI_INLINE_DECL void get_extents (Pango::Rectangle * ink_rect = nullptr, Pango::Rectangle * logical_rect = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_extents () noexcept;

// const PangoFontDescription* pango_layout_get_font_description (PangoLayout* layout);
// const ::PangoFontDescription* pango_layout_get_font_description (::PangoLayout* layout);
GI_INLINE_DECL Pango::FontDescription get_font_description () noexcept;

// int pango_layout_get_height (PangoLayout* layout);
// gint pango_layout_get_height (::PangoLayout* layout);
GI_INLINE_DECL gint get_height () noexcept;

// int pango_layout_get_indent (PangoLayout* layout);
// gint pango_layout_get_indent (::PangoLayout* layout);
GI_INLINE_DECL gint get_indent () noexcept;

// PangoLayoutIter* pango_layout_get_iter (PangoLayout* layout);
// ::PangoLayoutIter* pango_layout_get_iter (::PangoLayout* layout);
GI_INLINE_DECL Pango::LayoutIter get_iter () noexcept;

// gboolean pango_layout_get_justify (PangoLayout* layout);
// gboolean pango_layout_get_justify (::PangoLayout* layout);
GI_INLINE_DECL bool get_justify () noexcept;

// gboolean pango_layout_get_justify_last_line (PangoLayout* layout);
// gboolean pango_layout_get_justify_last_line (::PangoLayout* layout);
GI_INLINE_DECL bool get_justify_last_line () noexcept;

// PangoLayoutLine* pango_layout_get_line (PangoLayout* layout, int line);
// ::PangoLayoutLine* pango_layout_get_line (::PangoLayout* layout, gint line);
GI_INLINE_DECL Pango::LayoutLine get_line (gint line) noexcept;

// int pango_layout_get_line_count (PangoLayout* layout);
// gint pango_layout_get_line_count (::PangoLayout* layout);
GI_INLINE_DECL gint get_line_count () noexcept;

// PangoLayoutLine* pango_layout_get_line_readonly (PangoLayout* layout, int line);
// ::PangoLayoutLine* pango_layout_get_line_readonly (::PangoLayout* layout, gint line);
GI_INLINE_DECL Pango::LayoutLine get_line_readonly (gint line) noexcept;

// float pango_layout_get_line_spacing (PangoLayout* layout);
// gfloat pango_layout_get_line_spacing (::PangoLayout* layout);
GI_INLINE_DECL gfloat get_line_spacing () noexcept;

// GSList* pango_layout_get_lines (PangoLayout* layout);
// ::GSList* pango_layout_get_lines (::PangoLayout* layout);
GI_INLINE_DECL std::vector<Pango::LayoutLine> get_lines () noexcept;

// GSList* pango_layout_get_lines_readonly (PangoLayout* layout);
// ::GSList* pango_layout_get_lines_readonly (::PangoLayout* layout);
GI_INLINE_DECL std::vector<Pango::LayoutLine> get_lines_readonly () noexcept;

// void pango_layout_get_log_attrs (PangoLayout* layout, PangoLogAttr** attrs, gint* n_attrs);
// void pango_layout_get_log_attrs (::PangoLayout* layout, ::PangoLogAttr*** attrs, gint* n_attrs);
// SKIP; inconsistent out attrs pointer depth (2 vs 3)

// const PangoLogAttr* pango_layout_get_log_attrs_readonly (PangoLayout* layout, gint* n_attrs);
// const ::PangoLogAttr** pango_layout_get_log_attrs_readonly (::PangoLayout* layout, gint* n_attrs);
// SKIP; inconsistent return  pointer depth (1 vs 2)

// void pango_layout_get_pixel_extents (PangoLayout* layout, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_layout_get_pixel_extents (::PangoLayout* layout, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
GI_INLINE_DECL void get_pixel_extents (Pango::Rectangle * ink_rect = nullptr, Pango::Rectangle * logical_rect = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_pixel_extents () noexcept;

// void pango_layout_get_pixel_size (PangoLayout* layout, int* width, int* height);
// void pango_layout_get_pixel_size (::PangoLayout* layout, gint* width, gint* height);
GI_INLINE_DECL void get_pixel_size (gint * width = nullptr, gint * height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_pixel_size () noexcept;

// guint pango_layout_get_serial (PangoLayout* layout);
// guint pango_layout_get_serial (::PangoLayout* layout);
GI_INLINE_DECL guint get_serial () noexcept;

// gboolean pango_layout_get_single_paragraph_mode (PangoLayout* layout);
// gboolean pango_layout_get_single_paragraph_mode (::PangoLayout* layout);
GI_INLINE_DECL bool get_single_paragraph_mode () noexcept;

// void pango_layout_get_size (PangoLayout* layout, int* width, int* height);
// void pango_layout_get_size (::PangoLayout* layout, gint* width, gint* height);
GI_INLINE_DECL void get_size (gint * width = nullptr, gint * height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_size () noexcept;

// int pango_layout_get_spacing (PangoLayout* layout);
// gint pango_layout_get_spacing (::PangoLayout* layout);
GI_INLINE_DECL gint get_spacing () noexcept;

// PangoTabArray* pango_layout_get_tabs (PangoLayout* layout);
// ::PangoTabArray* pango_layout_get_tabs (::PangoLayout* layout);
GI_INLINE_DECL Pango::TabArray get_tabs () noexcept;

// const char* pango_layout_get_text (PangoLayout* layout);
// const char* pango_layout_get_text (::PangoLayout* layout);
GI_INLINE_DECL std::string get_text () noexcept;

// int pango_layout_get_unknown_glyphs_count (PangoLayout* layout);
// gint pango_layout_get_unknown_glyphs_count (::PangoLayout* layout);
GI_INLINE_DECL gint get_unknown_glyphs_count () noexcept;

// int pango_layout_get_width (PangoLayout* layout);
// gint pango_layout_get_width (::PangoLayout* layout);
GI_INLINE_DECL gint get_width () noexcept;

// PangoWrapMode pango_layout_get_wrap (PangoLayout* layout);
// ::PangoWrapMode pango_layout_get_wrap (::PangoLayout* layout);
GI_INLINE_DECL Pango::WrapMode get_wrap () noexcept;

// void pango_layout_index_to_line_x (PangoLayout* layout, int index_, gboolean trailing, int* line, int* x_pos);
// void pango_layout_index_to_line_x (::PangoLayout* layout, gint index_, gboolean trailing, gint* line, gint* x_pos);
GI_INLINE_DECL void index_to_line_x (gint index_, gboolean trailing, gint * line = nullptr, gint * x_pos = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> index_to_line_x (gint index_, gboolean trailing) noexcept;

// void pango_layout_index_to_pos (PangoLayout* layout, int index_, PangoRectangle* pos);
// void pango_layout_index_to_pos (::PangoLayout* layout, gint index_, ::PangoRectangle* pos);
GI_INLINE_DECL void index_to_pos (gint index_, Pango::Rectangle & pos) noexcept;
GI_INLINE_DECL Pango::Rectangle index_to_pos (gint index_) noexcept;

// gboolean pango_layout_is_ellipsized (PangoLayout* layout);
// gboolean pango_layout_is_ellipsized (::PangoLayout* layout);
GI_INLINE_DECL bool is_ellipsized () noexcept;

// gboolean pango_layout_is_wrapped (PangoLayout* layout);
// gboolean pango_layout_is_wrapped (::PangoLayout* layout);
GI_INLINE_DECL bool is_wrapped () noexcept;

// void pango_layout_move_cursor_visually (PangoLayout* layout, gboolean strong, int old_index, int old_trailing, int direction, int* new_index, int* new_trailing);
// void pango_layout_move_cursor_visually (::PangoLayout* layout, gboolean strong, gint old_index, gint old_trailing, gint direction, gint* new_index, gint* new_trailing);
GI_INLINE_DECL void move_cursor_visually (gboolean strong, gint old_index, gint old_trailing, gint direction, gint & new_index, gint & new_trailing) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> move_cursor_visually (gboolean strong, gint old_index, gint old_trailing, gint direction) noexcept;

// GBytes* pango_layout_serialize (PangoLayout* layout, PangoLayoutSerializeFlags flags);
// ::GBytes* pango_layout_serialize (::PangoLayout* layout, ::PangoLayoutSerializeFlags flags);
GI_INLINE_DECL GLib::Bytes serialize (Pango::LayoutSerializeFlags flags) noexcept;

// void pango_layout_set_alignment (PangoLayout* layout, PangoAlignment alignment);
// void pango_layout_set_alignment (::PangoLayout* layout, ::PangoAlignment alignment);
GI_INLINE_DECL void set_alignment (Pango::Alignment alignment) noexcept;

// void pango_layout_set_attributes (PangoLayout* layout, PangoAttrList* attrs);
// void pango_layout_set_attributes (::PangoLayout* layout, ::PangoAttrList* attrs);
GI_INLINE_DECL void set_attributes (Pango::AttrList attrs) noexcept;
GI_INLINE_DECL void set_attributes () noexcept;

// void pango_layout_set_auto_dir (PangoLayout* layout, gboolean auto_dir);
// void pango_layout_set_auto_dir (::PangoLayout* layout, gboolean auto_dir);
GI_INLINE_DECL void set_auto_dir (gboolean auto_dir) noexcept;

// void pango_layout_set_ellipsize (PangoLayout* layout, PangoEllipsizeMode ellipsize);
// void pango_layout_set_ellipsize (::PangoLayout* layout, ::PangoEllipsizeMode ellipsize);
GI_INLINE_DECL void set_ellipsize (Pango::EllipsizeMode ellipsize) noexcept;

// void pango_layout_set_font_description (PangoLayout* layout, const PangoFontDescription* desc);
// void pango_layout_set_font_description (::PangoLayout* layout, const ::PangoFontDescription* desc);
GI_INLINE_DECL void set_font_description (const Pango::FontDescription & desc) noexcept;
GI_INLINE_DECL void set_font_description () noexcept;

// void pango_layout_set_height (PangoLayout* layout, int height);
// void pango_layout_set_height (::PangoLayout* layout, gint height);
GI_INLINE_DECL void set_height (gint height) noexcept;

// void pango_layout_set_indent (PangoLayout* layout, int indent);
// void pango_layout_set_indent (::PangoLayout* layout, gint indent);
GI_INLINE_DECL void set_indent (gint indent) noexcept;

// void pango_layout_set_justify (PangoLayout* layout, gboolean justify);
// void pango_layout_set_justify (::PangoLayout* layout, gboolean justify);
GI_INLINE_DECL void set_justify (gboolean justify) noexcept;

// void pango_layout_set_justify_last_line (PangoLayout* layout, gboolean justify);
// void pango_layout_set_justify_last_line (::PangoLayout* layout, gboolean justify);
GI_INLINE_DECL void set_justify_last_line (gboolean justify) noexcept;

// void pango_layout_set_line_spacing (PangoLayout* layout, float factor);
// void pango_layout_set_line_spacing (::PangoLayout* layout, gfloat factor);
GI_INLINE_DECL void set_line_spacing (gfloat factor) noexcept;

// void pango_layout_set_markup (PangoLayout* layout, const char* markup, int length);
// void pango_layout_set_markup (::PangoLayout* layout, const char* markup, gint length);
GI_INLINE_DECL void set_markup (const std::string & markup, gint length) noexcept;

// void pango_layout_set_markup_with_accel (PangoLayout* layout, const char* markup, int length, gunichar accel_marker, gunichar* accel_char);
// void pango_layout_set_markup_with_accel (::PangoLayout* layout, const char* markup, gint length, gunichar accel_marker, gunichar accel_char);
// SKIP; inconsistent out accel_char pointer depth (1 vs 0)

// void pango_layout_set_single_paragraph_mode (PangoLayout* layout, gboolean setting);
// void pango_layout_set_single_paragraph_mode (::PangoLayout* layout, gboolean setting);
GI_INLINE_DECL void set_single_paragraph_mode (gboolean setting) noexcept;

// void pango_layout_set_spacing (PangoLayout* layout, int spacing);
// void pango_layout_set_spacing (::PangoLayout* layout, gint spacing);
GI_INLINE_DECL void set_spacing (gint spacing) noexcept;

// void pango_layout_set_tabs (PangoLayout* layout, PangoTabArray* tabs);
// void pango_layout_set_tabs (::PangoLayout* layout, ::PangoTabArray* tabs);
GI_INLINE_DECL void set_tabs (Pango::TabArray tabs) noexcept;
GI_INLINE_DECL void set_tabs () noexcept;

// void pango_layout_set_text (PangoLayout* layout, const char* text, int length);
// void pango_layout_set_text (::PangoLayout* layout, const char* text, gint length);
GI_INLINE_DECL void set_text (const std::string & text, gint length) noexcept;

// void pango_layout_set_width (PangoLayout* layout, int width);
// void pango_layout_set_width (::PangoLayout* layout, gint width);
GI_INLINE_DECL void set_width (gint width) noexcept;

// void pango_layout_set_wrap (PangoLayout* layout, PangoWrapMode wrap);
// void pango_layout_set_wrap (::PangoLayout* layout, ::PangoWrapMode wrap);
GI_INLINE_DECL void set_wrap (Pango::WrapMode wrap) noexcept;

// gboolean pango_layout_write_to_file (PangoLayout* layout, PangoLayoutSerializeFlags flags, const char* filename, GError ** error);
// gboolean pango_layout_write_to_file (::PangoLayout* layout, ::PangoLayoutSerializeFlags flags, const char* filename, GError ** error);
GI_INLINE_DECL bool write_to_file (Pango::LayoutSerializeFlags flags, const std::string & filename);
GI_INLINE_DECL bool write_to_file (Pango::LayoutSerializeFlags flags, const std::string & filename, GLib::Error * _error) noexcept;

// gboolean pango_layout_xy_to_index (PangoLayout* layout, int x, int y, int* index_, int* trailing);
// gboolean pango_layout_xy_to_index (::PangoLayout* layout, gint x, gint y, gint* index_, gint* trailing);
GI_INLINE_DECL bool xy_to_index (gint x, gint y, gint & index_, gint & trailing) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> xy_to_index (gint x, gint y) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/layout_extra_def.hpp>)
#include <pango/layout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/layout_extra.hpp>)
#include <pango/layout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Layout : public GI_PANGO_LAYOUT_BASE
{ typedef GI_PANGO_LAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoLayout>
{ typedef Pango::Layout type; }; 

} // namespace repository

} // namespace gi

#endif
