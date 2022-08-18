// AUTO-GENERATED

#ifndef _GI_PANGO_LAYOUTITER_IMPL_HPP_
#define _GI_PANGO_LAYOUTITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// gboolean pango_layout_iter_at_last_line (PangoLayoutIter* iter);
// gboolean pango_layout_iter_at_last_line (::PangoLayoutIter* iter);
bool base::LayoutIterBase::at_last_line () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_at_last_line;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// PangoLayoutIter* pango_layout_iter_copy (PangoLayoutIter* iter);
// ::PangoLayoutIter* pango_layout_iter_copy (::PangoLayoutIter* iter);
Pango::LayoutIter base::LayoutIterBase::copy () noexcept
{
  typedef ::PangoLayoutIter* (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_copy;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_layout_iter_free (PangoLayoutIter* iter);
// void pango_layout_iter_free (::PangoLayoutIter* iter);
// IGNORE; marked ignore

// int pango_layout_iter_get_baseline (PangoLayoutIter* iter);
// gint pango_layout_iter_get_baseline (::PangoLayoutIter* iter);
gint base::LayoutIterBase::get_baseline () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_baseline;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// void pango_layout_iter_get_char_extents (PangoLayoutIter* iter, PangoRectangle* logical_rect);
// void pango_layout_iter_get_char_extents (::PangoLayoutIter* iter, ::PangoRectangle* logical_rect);
void base::LayoutIterBase::get_char_extents (Pango::Rectangle & logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_char_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) ((::PangoRectangle*) &logical_rect_c));
  logical_rect = gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out);
}
Pango::Rectangle base::LayoutIterBase::get_char_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_char_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) ((::PangoRectangle*) &logical_rect_c));
  return gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out);
}

// void pango_layout_iter_get_cluster_extents (PangoLayoutIter* iter, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_layout_iter_get_cluster_extents (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
void base::LayoutIterBase::get_cluster_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_cluster_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  traits::unset_wrapper<::PangoRectangle>::type ink_rect_c;
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) &ink_rect_c : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) &logical_rect_c : nullptr));
  if (logical_rect) *logical_rect = gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out);
  if (ink_rect) *ink_rect = gi::wrap ((::PangoRectangle*) &ink_rect_c, gi::transfer_none, gi::direction_out);
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutIterBase::get_cluster_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_cluster_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  traits::unset_wrapper<::PangoRectangle>::type ink_rect_c;
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) ((::PangoRectangle*) &ink_rect_c), (::PangoRectangle*) ((::PangoRectangle*) &logical_rect_c));
  return std::make_tuple (gi::wrap ((::PangoRectangle*) &ink_rect_c, gi::transfer_none, gi::direction_out), gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out));
}

// int pango_layout_iter_get_index (PangoLayoutIter* iter);
// gint pango_layout_iter_get_index (::PangoLayoutIter* iter);
gint base::LayoutIterBase::get_index () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_index;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// PangoLayout* pango_layout_iter_get_layout (PangoLayoutIter* iter);
// ::PangoLayout* pango_layout_iter_get_layout (::PangoLayoutIter* iter);
Pango::Layout base::LayoutIterBase::get_layout () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_layout;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void pango_layout_iter_get_layout_extents (PangoLayoutIter* iter, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_layout_iter_get_layout_extents (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
void base::LayoutIterBase::get_layout_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_layout_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  traits::unset_wrapper<::PangoRectangle>::type ink_rect_c;
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) &ink_rect_c : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) &logical_rect_c : nullptr));
  if (logical_rect) *logical_rect = gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out);
  if (ink_rect) *ink_rect = gi::wrap ((::PangoRectangle*) &ink_rect_c, gi::transfer_none, gi::direction_out);
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutIterBase::get_layout_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_layout_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  traits::unset_wrapper<::PangoRectangle>::type ink_rect_c;
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) ((::PangoRectangle*) &ink_rect_c), (::PangoRectangle*) ((::PangoRectangle*) &logical_rect_c));
  return std::make_tuple (gi::wrap ((::PangoRectangle*) &ink_rect_c, gi::transfer_none, gi::direction_out), gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out));
}

// PangoLayoutLine* pango_layout_iter_get_line (PangoLayoutIter* iter);
// ::PangoLayoutLine* pango_layout_iter_get_line (::PangoLayoutIter* iter);
Pango::LayoutLine base::LayoutIterBase::get_line () noexcept
{
  typedef ::PangoLayoutLine* (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_line;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void pango_layout_iter_get_line_extents (PangoLayoutIter* iter, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_layout_iter_get_line_extents (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
void base::LayoutIterBase::get_line_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_line_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  traits::unset_wrapper<::PangoRectangle>::type ink_rect_c;
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) &ink_rect_c : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) &logical_rect_c : nullptr));
  if (logical_rect) *logical_rect = gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out);
  if (ink_rect) *ink_rect = gi::wrap ((::PangoRectangle*) &ink_rect_c, gi::transfer_none, gi::direction_out);
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutIterBase::get_line_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_line_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  traits::unset_wrapper<::PangoRectangle>::type ink_rect_c;
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) ((::PangoRectangle*) &ink_rect_c), (::PangoRectangle*) ((::PangoRectangle*) &logical_rect_c));
  return std::make_tuple (gi::wrap ((::PangoRectangle*) &ink_rect_c, gi::transfer_none, gi::direction_out), gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out));
}

// PangoLayoutLine* pango_layout_iter_get_line_readonly (PangoLayoutIter* iter);
// ::PangoLayoutLine* pango_layout_iter_get_line_readonly (::PangoLayoutIter* iter);
Pango::LayoutLine base::LayoutIterBase::get_line_readonly () noexcept
{
  typedef ::PangoLayoutLine* (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_line_readonly;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void pango_layout_iter_get_line_yrange (PangoLayoutIter* iter, int* y0_, int* y1_);
// void pango_layout_iter_get_line_yrange (::PangoLayoutIter* iter, gint* y0_, gint* y1_);
void base::LayoutIterBase::get_line_yrange (gint * y0_, gint * y1_) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, gint* y0_, gint* y1_);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_line_yrange;
  gint y1__o {};
  gint y0__o {};
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (gint*) (y0_ ? &y0__o : nullptr), (gint*) (y1_ ? &y1__o : nullptr));
  if (y1_) *y1_ = y1__o;
  if (y0_) *y0_ = y0__o;
}
std::tuple<gint, gint> base::LayoutIterBase::get_line_yrange () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, gint* y0_, gint* y1_);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_line_yrange;
  gint y1__o {};
  gint y0__o {};
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (gint*) (&y0__o), (gint*) (&y1__o));
  return std::make_tuple (y0__o, y1__o);
}

// PangoLayoutRun* pango_layout_iter_get_run (PangoLayoutIter* iter);
//  pango_layout_iter_get_run (::PangoLayoutIter* iter);
// SKIP;  type  not supported

// int pango_layout_iter_get_run_baseline (PangoLayoutIter* iter);
// gint pango_layout_iter_get_run_baseline (::PangoLayoutIter* iter);
gint base::LayoutIterBase::get_run_baseline () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_run_baseline;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// void pango_layout_iter_get_run_extents (PangoLayoutIter* iter, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_layout_iter_get_run_extents (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
void base::LayoutIterBase::get_run_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_run_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  traits::unset_wrapper<::PangoRectangle>::type ink_rect_c;
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) &ink_rect_c : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) &logical_rect_c : nullptr));
  if (logical_rect) *logical_rect = gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out);
  if (ink_rect) *ink_rect = gi::wrap ((::PangoRectangle*) &ink_rect_c, gi::transfer_none, gi::direction_out);
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutIterBase::get_run_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayoutIter* iter, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_get_run_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  traits::unset_wrapper<::PangoRectangle>::type ink_rect_c;
  call_wrap_v ((::PangoLayoutIter*) (gobj_()), (::PangoRectangle*) ((::PangoRectangle*) &ink_rect_c), (::PangoRectangle*) ((::PangoRectangle*) &logical_rect_c));
  return std::make_tuple (gi::wrap ((::PangoRectangle*) &ink_rect_c, gi::transfer_none, gi::direction_out), gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out));
}

// PangoLayoutRun* pango_layout_iter_get_run_readonly (PangoLayoutIter* iter);
//  pango_layout_iter_get_run_readonly (::PangoLayoutIter* iter);
// SKIP;  type  not supported

// gboolean pango_layout_iter_next_char (PangoLayoutIter* iter);
// gboolean pango_layout_iter_next_char (::PangoLayoutIter* iter);
bool base::LayoutIterBase::next_char () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_next_char;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_layout_iter_next_cluster (PangoLayoutIter* iter);
// gboolean pango_layout_iter_next_cluster (::PangoLayoutIter* iter);
bool base::LayoutIterBase::next_cluster () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_next_cluster;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_layout_iter_next_line (PangoLayoutIter* iter);
// gboolean pango_layout_iter_next_line (::PangoLayoutIter* iter);
bool base::LayoutIterBase::next_line () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_next_line;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_layout_iter_next_run (PangoLayoutIter* iter);
// gboolean pango_layout_iter_next_run (::PangoLayoutIter* iter);
bool base::LayoutIterBase::next_run () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayoutIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_iter_next_run;
  auto _temp_ret = call_wrap_v ((::PangoLayoutIter*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/layoutiter_extra_def_impl.hpp>)
#include <pango/layoutiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/layoutiter_extra_impl.hpp>)
#include <pango/layoutiter_extra_impl.hpp>
#endif
#endif

#endif
