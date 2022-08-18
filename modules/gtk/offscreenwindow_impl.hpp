// AUTO-GENERATED

#ifndef _GI_GTK_OFFSCREENWINDOW_IMPL_HPP_
#define _GI_GTK_OFFSCREENWINDOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_offscreen_window_new ();
// ::GtkOffscreenWindow* gtk_offscreen_window_new ();
Gtk::OffscreenWindow base::OffscreenWindowBase::new_ () noexcept
{
  typedef ::GtkOffscreenWindow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_offscreen_window_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkPixbuf* gtk_offscreen_window_get_pixbuf (GtkOffscreenWindow* offscreen);
// ::GdkPixbuf* gtk_offscreen_window_get_pixbuf (::GtkOffscreenWindow* offscreen);
GdkPixbuf::Pixbuf base::OffscreenWindowBase::get_pixbuf () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkOffscreenWindow* offscreen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_offscreen_window_get_pixbuf;
  auto _temp_ret = call_wrap_v ((::GtkOffscreenWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// cairo_surface_t* gtk_offscreen_window_get_surface (GtkOffscreenWindow* offscreen);
// ::cairo_surface_t* gtk_offscreen_window_get_surface (::GtkOffscreenWindow* offscreen);
cairo::Surface base::OffscreenWindowBase::get_surface () noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkOffscreenWindow* offscreen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_offscreen_window_get_surface;
  auto _temp_ret = call_wrap_v ((::GtkOffscreenWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/offscreenwindow_extra_def_impl.hpp>)
#include <gtk/offscreenwindow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/offscreenwindow_extra_impl.hpp>)
#include <gtk/offscreenwindow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void OffscreenWindowClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkOffscreenWindowClass *methods = (::GtkOffscreenWindowClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
