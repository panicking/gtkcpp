// AUTO-GENERATED

#ifndef _GI_PANGO_LAYOUTITER_HPP_
#define _GI_PANGO_LAYOUTITER_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Layout;
class LayoutLine;
class Rectangle;

class LayoutIter;

namespace base {


#define GI_PANGO_LAYOUTITER_BASE base::LayoutIterBase
class LayoutIterBase : public gi::detail::GBoxedWrapper<LayoutIterBase, ::PangoLayoutIter>
{
typedef gi::detail::GBoxedWrapper<LayoutIterBase, ::PangoLayoutIter> super_type;
public:

LayoutIterBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_layout_iter_get_type(); } 

// gboolean pango_layout_iter_at_last_line (PangoLayoutIter* iter);
// gboolean pango_layout_iter_at_last_line (::PangoLayoutIter* iter);
GI_INLINE_DECL bool at_last_line () noexcept;

// PangoLayoutIter* pango_layout_iter_copy (PangoLayoutIter* iter);
// ::PangoLayoutIter* pango_layout_iter_copy (::PangoLayoutIter* iter);
GI_INLINE_DECL Pango::LayoutIter copy () noexcept;

// void pango_layout_iter_free (PangoLayoutIter* iter);
// void pango_layout_iter_free (::PangoLayoutIter* iter);
// IGNORE; marked ignore

// int pango_layout_iter_get_baseline (PangoLayoutIter* iter);
// gint pango_layout_iter_get_baseline (::PangoLayoutIter* iter);
GI_INLINE_DECL gint get_baseline () noexcept;

// void pango_layout_iter_get_char_extents (PangoLayoutIter* iter, PangoRectangle* logical_rect);
// void pango_layout_iter_get_char_extents (::PangoLayoutIter* iter, ::PangoRectangle* logical_rect);
GI_INLINE_DECL void get_char_extents (Pango::Rectangle & logical_rect) noexcept;
GI_INLINE_DECL Pango::Rectangle get_char_extents () noexcept;

// void pango_layout_iter_get_cluster_extents (PangoLayoutIter* iter, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_layout_iter_get_cluster_extents (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
GI_INLINE_DECL void get_cluster_extents (Pango::Rectangle * ink_rect = nullptr, Pango::Rectangle * logical_rect = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_cluster_extents () noexcept;

// int pango_layout_iter_get_index (PangoLayoutIter* iter);
// gint pango_layout_iter_get_index (::PangoLayoutIter* iter);
GI_INLINE_DECL gint get_index () noexcept;

// PangoLayout* pango_layout_iter_get_layout (PangoLayoutIter* iter);
// ::PangoLayout* pango_layout_iter_get_layout (::PangoLayoutIter* iter);
GI_INLINE_DECL Pango::Layout get_layout () noexcept;

// void pango_layout_iter_get_layout_extents (PangoLayoutIter* iter, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_layout_iter_get_layout_extents (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
GI_INLINE_DECL void get_layout_extents (Pango::Rectangle * ink_rect = nullptr, Pango::Rectangle * logical_rect = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_layout_extents () noexcept;

// PangoLayoutLine* pango_layout_iter_get_line (PangoLayoutIter* iter);
// ::PangoLayoutLine* pango_layout_iter_get_line (::PangoLayoutIter* iter);
GI_INLINE_DECL Pango::LayoutLine get_line () noexcept;

// void pango_layout_iter_get_line_extents (PangoLayoutIter* iter, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_layout_iter_get_line_extents (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
GI_INLINE_DECL void get_line_extents (Pango::Rectangle * ink_rect = nullptr, Pango::Rectangle * logical_rect = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_line_extents () noexcept;

// PangoLayoutLine* pango_layout_iter_get_line_readonly (PangoLayoutIter* iter);
// ::PangoLayoutLine* pango_layout_iter_get_line_readonly (::PangoLayoutIter* iter);
GI_INLINE_DECL Pango::LayoutLine get_line_readonly () noexcept;

// void pango_layout_iter_get_line_yrange (PangoLayoutIter* iter, int* y0_, int* y1_);
// void pango_layout_iter_get_line_yrange (::PangoLayoutIter* iter, gint* y0_, gint* y1_);
GI_INLINE_DECL void get_line_yrange (gint * y0_ = nullptr, gint * y1_ = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_line_yrange () noexcept;

// PangoLayoutRun* pango_layout_iter_get_run (PangoLayoutIter* iter);
//  pango_layout_iter_get_run (::PangoLayoutIter* iter);
// SKIP;  type  not supported

// int pango_layout_iter_get_run_baseline (PangoLayoutIter* iter);
// gint pango_layout_iter_get_run_baseline (::PangoLayoutIter* iter);
GI_INLINE_DECL gint get_run_baseline () noexcept;

// void pango_layout_iter_get_run_extents (PangoLayoutIter* iter, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_layout_iter_get_run_extents (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
GI_INLINE_DECL void get_run_extents (Pango::Rectangle * ink_rect = nullptr, Pango::Rectangle * logical_rect = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_run_extents () noexcept;

// PangoLayoutRun* pango_layout_iter_get_run_readonly (PangoLayoutIter* iter);
//  pango_layout_iter_get_run_readonly (::PangoLayoutIter* iter);
// SKIP;  type  not supported

// gboolean pango_layout_iter_next_char (PangoLayoutIter* iter);
// gboolean pango_layout_iter_next_char (::PangoLayoutIter* iter);
GI_INLINE_DECL bool next_char () noexcept;

// gboolean pango_layout_iter_next_cluster (PangoLayoutIter* iter);
// gboolean pango_layout_iter_next_cluster (::PangoLayoutIter* iter);
GI_INLINE_DECL bool next_cluster () noexcept;

// gboolean pango_layout_iter_next_line (PangoLayoutIter* iter);
// gboolean pango_layout_iter_next_line (::PangoLayoutIter* iter);
GI_INLINE_DECL bool next_line () noexcept;

// gboolean pango_layout_iter_next_run (PangoLayoutIter* iter);
// gboolean pango_layout_iter_next_run (::PangoLayoutIter* iter);
GI_INLINE_DECL bool next_run () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/layoutiter_extra_def.hpp>)
#include <pango/layoutiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/layoutiter_extra.hpp>)
#include <pango/layoutiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class LayoutIter : public GI_PANGO_LAYOUTITER_BASE
{ typedef GI_PANGO_LAYOUTITER_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoLayoutIter>
{ typedef Pango::LayoutIter type; }; 

} // namespace repository

} // namespace gi

#endif
