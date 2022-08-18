// AUTO-GENERATED

#ifndef _GI_GTK_COLORCHOOSERWIDGET_IMPL_HPP_
#define _GI_GTK_COLORCHOOSERWIDGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::ColorChooser ColorChooserWidgetBase::interface_ (gi::interface_tag<Gtk::ColorChooser>)
{ return gi::wrap ((Gtk::ColorChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ColorChooserWidgetBase::operator Gtk::ColorChooser ()
{ return interface_ (gi::interface_tag<Gtk::ColorChooser>()); }

// GtkWidget* gtk_color_chooser_widget_new ();
// ::GtkColorChooserWidget* gtk_color_chooser_widget_new ();
Gtk::ColorChooserWidget base::ColorChooserWidgetBase::new_ () noexcept
{
  typedef ::GtkColorChooserWidget* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_chooser_widget_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorchooserwidget_extra_def_impl.hpp>)
#include <gtk/colorchooserwidget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorchooserwidget_extra_impl.hpp>)
#include <gtk/colorchooserwidget_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ColorChooserWidgetClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkColorChooserWidgetClass *methods = (::GtkColorChooserWidgetClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
