// AUTO-GENERATED

#ifndef _GI_GTK_LAYOUT_IMPL_HPP_
#define _GI_GTK_LAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Scrollable LayoutBase::interface_ (gi::interface_tag<Gtk::Scrollable>)
{ return gi::wrap ((Gtk::Scrollable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

LayoutBase::operator Gtk::Scrollable ()
{ return interface_ (gi::interface_tag<Gtk::Scrollable>()); }

// GtkWidget* gtk_layout_new (GtkAdjustment* hadjustment, GtkAdjustment* vadjustment);
// ::GtkLayout* gtk_layout_new (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
Gtk::Layout base::LayoutBase::new_ (Gtk::Adjustment hadjustment, Gtk::Adjustment vadjustment) noexcept
{
  typedef ::GtkLayout* (*call_wrap_t) (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_layout_new;
  auto vadjustment_to_c = gi::unwrap (vadjustment, gi::transfer_none, gi::direction_in);
  auto hadjustment_to_c = gi::unwrap (hadjustment, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (hadjustment_to_c), (::GtkAdjustment*) (vadjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Layout base::LayoutBase::new_ () noexcept
{
  typedef ::GtkLayout* (*call_wrap_t) (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_layout_new;
  auto vadjustment_to_c = nullptr;
  auto hadjustment_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (hadjustment_to_c), (::GtkAdjustment*) (vadjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkWindow* gtk_layout_get_bin_window (GtkLayout* layout);
// ::GdkWindow* gtk_layout_get_bin_window (::GtkLayout* layout);
Gdk::Window base::LayoutBase::get_bin_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GtkLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_layout_get_bin_window;
  auto _temp_ret = call_wrap_v ((::GtkLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkAdjustment* gtk_layout_get_hadjustment (GtkLayout* layout);
// ::GtkAdjustment* gtk_layout_get_hadjustment (::GtkLayout* layout);
// IGNORE; deprecated

// void gtk_layout_get_size (GtkLayout* layout, guint* width, guint* height);
// void gtk_layout_get_size (::GtkLayout* layout, guint* width, guint* height);
void base::LayoutBase::get_size (guint * width, guint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkLayout* layout, guint* width, guint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_layout_get_size;
  guint height_o {};
  guint width_o {};
  call_wrap_v ((::GtkLayout*) (gobj_()), (guint*) (width ? &width_o : nullptr), (guint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<guint, guint> base::LayoutBase::get_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkLayout* layout, guint* width, guint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_layout_get_size;
  guint height_o {};
  guint width_o {};
  call_wrap_v ((::GtkLayout*) (gobj_()), (guint*) (&width_o), (guint*) (&height_o));
  return std::make_tuple (width_o, height_o);
}

// GtkAdjustment* gtk_layout_get_vadjustment (GtkLayout* layout);
// ::GtkAdjustment* gtk_layout_get_vadjustment (::GtkLayout* layout);
// IGNORE; deprecated

// void gtk_layout_move (GtkLayout* layout, GtkWidget* child_widget, gint x, gint y);
// void gtk_layout_move (::GtkLayout* layout, ::GtkWidget* child_widget, gint x, gint y);
void base::LayoutBase::move (Gtk::Widget child_widget, gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::GtkLayout* layout, ::GtkWidget* child_widget, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_layout_move;
  auto y_to_c = y;
  auto x_to_c = x;
  auto child_widget_to_c = gi::unwrap (child_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLayout*) (gobj_()), (::GtkWidget*) (child_widget_to_c), (gint) (x_to_c), (gint) (y_to_c));
}

// void gtk_layout_put (GtkLayout* layout, GtkWidget* child_widget, gint x, gint y);
// void gtk_layout_put (::GtkLayout* layout, ::GtkWidget* child_widget, gint x, gint y);
void base::LayoutBase::put (Gtk::Widget child_widget, gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::GtkLayout* layout, ::GtkWidget* child_widget, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_layout_put;
  auto y_to_c = y;
  auto x_to_c = x;
  auto child_widget_to_c = gi::unwrap (child_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLayout*) (gobj_()), (::GtkWidget*) (child_widget_to_c), (gint) (x_to_c), (gint) (y_to_c));
}

// void gtk_layout_set_hadjustment (GtkLayout* layout, GtkAdjustment* adjustment);
// void gtk_layout_set_hadjustment (::GtkLayout* layout, ::GtkAdjustment* adjustment);
// IGNORE; deprecated

// void gtk_layout_set_size (GtkLayout* layout, guint width, guint height);
// void gtk_layout_set_size (::GtkLayout* layout, guint width, guint height);
void base::LayoutBase::set_size (guint width, guint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkLayout* layout, guint width, guint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_layout_set_size;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkLayout*) (gobj_()), (guint) (width_to_c), (guint) (height_to_c));
}

// void gtk_layout_set_vadjustment (GtkLayout* layout, GtkAdjustment* adjustment);
// void gtk_layout_set_vadjustment (::GtkLayout* layout, ::GtkAdjustment* adjustment);
// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/layout_extra_def_impl.hpp>)
#include <gtk/layout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/layout_extra_impl.hpp>)
#include <gtk/layout_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void LayoutClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkLayoutClass *methods = (::GtkLayoutClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
