// AUTO-GENERATED

#ifndef _GI_GTK_DRAWINGAREA_IMPL_HPP_
#define _GI_GTK_DRAWINGAREA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_drawing_area_new ();
// ::GtkDrawingArea* gtk_drawing_area_new ();
Gtk::DrawingArea base::DrawingAreaBase::new_ () noexcept
{
  typedef ::GtkDrawingArea* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drawing_area_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/drawingarea_extra_def_impl.hpp>)
#include <gtk/drawingarea_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/drawingarea_extra_impl.hpp>)
#include <gtk/drawingarea_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void DrawingAreaClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkDrawingAreaClass *methods = (::GtkDrawingAreaClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
