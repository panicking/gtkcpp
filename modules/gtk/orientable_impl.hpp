// AUTO-GENERATED

#ifndef _GI_GTK_ORIENTABLE_IMPL_HPP_
#define _GI_GTK_ORIENTABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkOrientation gtk_orientable_get_orientation (GtkOrientable* orientable);
// ::GtkOrientation gtk_orientable_get_orientation (::GtkOrientable* orientable);
Gtk::Orientation base::OrientableBase::get_orientation () noexcept
{
  typedef ::GtkOrientation (*call_wrap_t) (::GtkOrientable* orientable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_orientable_get_orientation;
  auto _temp_ret = call_wrap_v ((::GtkOrientable*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_orientable_set_orientation (GtkOrientable* orientable, GtkOrientation orientation);
// void gtk_orientable_set_orientation (::GtkOrientable* orientable, ::GtkOrientation orientation);
void base::OrientableBase::set_orientation (Gtk::Orientation orientation) noexcept
{
  typedef void (*call_wrap_t) (::GtkOrientable* orientable, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_orientable_set_orientation;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkOrientable*) (gobj_()), (::GtkOrientation) (orientation_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/orientable_extra_def_impl.hpp>)
#include <gtk/orientable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/orientable_extra_impl.hpp>)
#include <gtk/orientable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void OrientableIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkOrientableIface *methods = (::GtkOrientableIface *) interface_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
