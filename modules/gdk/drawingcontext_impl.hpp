// AUTO-GENERATED

#ifndef _GI_GDK_DRAWINGCONTEXT_IMPL_HPP_
#define _GI_GDK_DRAWINGCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// cairo_t* gdk_drawing_context_get_cairo_context (GdkDrawingContext* context);
// ::cairo_t* gdk_drawing_context_get_cairo_context (::GdkDrawingContext* context);
cairo::Context base::DrawingContextBase::get_cairo_context () noexcept
{
  typedef ::cairo_t* (*call_wrap_t) (::GdkDrawingContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drawing_context_get_cairo_context;
  auto _temp_ret = call_wrap_v ((::GdkDrawingContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// cairo_region_t* gdk_drawing_context_get_clip (GdkDrawingContext* context);
// ::cairo_region_t* gdk_drawing_context_get_clip (::GdkDrawingContext* context);
cairo::Region base::DrawingContextBase::get_clip () noexcept
{
  typedef ::cairo_region_t* (*call_wrap_t) (::GdkDrawingContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drawing_context_get_clip;
  auto _temp_ret = call_wrap_v ((::GdkDrawingContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkWindow* gdk_drawing_context_get_window (GdkDrawingContext* context);
// ::GdkWindow* gdk_drawing_context_get_window (::GdkDrawingContext* context);
Gdk::Window base::DrawingContextBase::get_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkDrawingContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drawing_context_get_window;
  auto _temp_ret = call_wrap_v ((::GdkDrawingContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_drawing_context_is_valid (GdkDrawingContext* context);
// gboolean gdk_drawing_context_is_valid (::GdkDrawingContext* context);
bool base::DrawingContextBase::is_valid () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDrawingContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drawing_context_is_valid;
  auto _temp_ret = call_wrap_v ((::GdkDrawingContext*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/drawingcontext_extra_def_impl.hpp>)
#include <gdk/drawingcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/drawingcontext_extra_impl.hpp>)
#include <gdk/drawingcontext_extra_impl.hpp>
#endif
#endif

#endif
