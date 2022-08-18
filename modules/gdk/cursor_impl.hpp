// AUTO-GENERATED

#ifndef _GI_GDK_CURSOR_IMPL_HPP_
#define _GI_GDK_CURSOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkCursor* gdk_cursor_new (GdkCursorType cursor_type);
// ::GdkCursor* gdk_cursor_new (::GdkCursorType cursor_type);
// IGNORE; deprecated

// GdkCursor* gdk_cursor_new_for_display (GdkDisplay* display, GdkCursorType cursor_type);
// ::GdkCursor* gdk_cursor_new_for_display (::GdkDisplay* display, ::GdkCursorType cursor_type);
Gdk::Cursor base::CursorBase::new_for_display (Gdk::Display display, Gdk::CursorType cursor_type) noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GdkDisplay* display, ::GdkCursorType cursor_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_new_for_display;
  auto cursor_type_to_c = gi::unwrap (cursor_type);
  auto display_to_c = gi::unwrap (display, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (::GdkCursorType) (cursor_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkCursor* gdk_cursor_new_from_name (GdkDisplay* display, const gchar* name);
// ::GdkCursor* gdk_cursor_new_from_name (::GdkDisplay* display, const char* name);
Gdk::Cursor base::CursorBase::new_from_name (Gdk::Display display, const std::string & name) noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GdkDisplay* display, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_new_from_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto display_to_c = gi::unwrap (display, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkCursor* gdk_cursor_new_from_pixbuf (GdkDisplay* display, GdkPixbuf* pixbuf, gint x, gint y);
// ::GdkCursor* gdk_cursor_new_from_pixbuf (::GdkDisplay* display, ::GdkPixbuf* pixbuf, gint x, gint y);
Gdk::Cursor base::CursorBase::new_from_pixbuf (Gdk::Display display, GdkPixbuf::Pixbuf pixbuf, gint x, gint y) noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GdkDisplay* display, ::GdkPixbuf* pixbuf, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_new_from_pixbuf;
  auto y_to_c = y;
  auto x_to_c = x;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto display_to_c = gi::unwrap (display, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (::GdkPixbuf*) (pixbuf_to_c), (gint) (x_to_c), (gint) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkCursor* gdk_cursor_new_from_surface (GdkDisplay* display, cairo_surface_t* surface, gdouble x, gdouble y);
// ::GdkCursor* gdk_cursor_new_from_surface (::GdkDisplay* display, ::cairo_surface_t* surface, gdouble x, gdouble y);
Gdk::Cursor base::CursorBase::new_from_surface (Gdk::Display display, cairo::Surface surface, gdouble x, gdouble y) noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GdkDisplay* display, ::cairo_surface_t* surface, gdouble x, gdouble y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_new_from_surface;
  auto y_to_c = y;
  auto x_to_c = x;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none, gi::direction_in);
  auto display_to_c = gi::unwrap (display, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (::cairo_surface_t*) (surface_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkCursorType gdk_cursor_get_cursor_type (GdkCursor* cursor);
// ::GdkCursorType gdk_cursor_get_cursor_type (::GdkCursor* cursor);
Gdk::CursorType base::CursorBase::get_cursor_type () noexcept
{
  typedef ::GdkCursorType (*call_wrap_t) (::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_get_cursor_type;
  auto _temp_ret = call_wrap_v ((::GdkCursor*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkDisplay* gdk_cursor_get_display (GdkCursor* cursor);
// ::GdkDisplay* gdk_cursor_get_display (::GdkCursor* cursor);
Gdk::Display base::CursorBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_get_display;
  auto _temp_ret = call_wrap_v ((::GdkCursor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkPixbuf* gdk_cursor_get_image (GdkCursor* cursor);
// ::GdkPixbuf* gdk_cursor_get_image (::GdkCursor* cursor);
GdkPixbuf::Pixbuf base::CursorBase::get_image () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_get_image;
  auto _temp_ret = call_wrap_v ((::GdkCursor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// cairo_surface_t* gdk_cursor_get_surface (GdkCursor* cursor, gdouble* x_hot, gdouble* y_hot);
// ::cairo_surface_t* gdk_cursor_get_surface (::GdkCursor* cursor, gdouble* x_hot, gdouble* y_hot);
cairo::Surface base::CursorBase::get_surface (gdouble * x_hot, gdouble * y_hot) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GdkCursor* cursor, gdouble* x_hot, gdouble* y_hot);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_get_surface;
  gdouble y_hot_o {};
  gdouble x_hot_o {};
  auto _temp_ret = call_wrap_v ((::GdkCursor*) (gobj_()), (gdouble*) (x_hot ? &x_hot_o : nullptr), (gdouble*) (y_hot ? &y_hot_o : nullptr));
  if (y_hot) *y_hot = y_hot_o;
  if (x_hot) *x_hot = x_hot_o;
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<cairo::Surface, gdouble, gdouble> base::CursorBase::get_surface () noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GdkCursor* cursor, gdouble* x_hot, gdouble* y_hot);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cursor_get_surface;
  gdouble y_hot_o {};
  gdouble x_hot_o {};
  auto _temp_ret = call_wrap_v ((::GdkCursor*) (gobj_()), (gdouble*) (&x_hot_o), (gdouble*) (&y_hot_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), x_hot_o, y_hot_o);
}

// GdkCursor* gdk_cursor_ref (GdkCursor* cursor);
// ::GdkCursor* gdk_cursor_ref (::GdkCursor* cursor);
// IGNORE; marked ignore

// void gdk_cursor_unref (GdkCursor* cursor);
// void gdk_cursor_unref (::GdkCursor* cursor);
// IGNORE; marked ignore


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/cursor_extra_def_impl.hpp>)
#include <gdk/cursor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/cursor_extra_impl.hpp>)
#include <gdk/cursor_extra_impl.hpp>
#endif
#endif

#endif
