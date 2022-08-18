// AUTO-GENERATED

#ifndef _GI_GTK_SEPARATOR_IMPL_HPP_
#define _GI_GTK_SEPARATOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable SeparatorBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SeparatorBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* gtk_separator_new (GtkOrientation orientation);
// ::GtkSeparator* gtk_separator_new (::GtkOrientation orientation);
Gtk::Separator base::SeparatorBase::new_ (Gtk::Orientation orientation) noexcept
{
  typedef ::GtkSeparator* (*call_wrap_t) (::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_separator_new;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/separator_extra_def_impl.hpp>)
#include <gtk/separator_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/separator_extra_impl.hpp>)
#include <gtk/separator_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SeparatorClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSeparatorClass *methods = (::GtkSeparatorClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
