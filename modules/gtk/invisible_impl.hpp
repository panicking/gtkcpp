// AUTO-GENERATED

#ifndef _GI_GTK_INVISIBLE_IMPL_HPP_
#define _GI_GTK_INVISIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_invisible_new ();
// ::GtkInvisible* gtk_invisible_new ();
Gtk::Invisible base::InvisibleBase::new_ () noexcept
{
  typedef ::GtkInvisible* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_invisible_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_invisible_new_for_screen (GdkScreen* screen);
// ::GtkInvisible* gtk_invisible_new_for_screen (::GdkScreen* screen);
Gtk::Invisible base::InvisibleBase::new_for_screen (Gdk::Screen screen) noexcept
{
  typedef ::GtkInvisible* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_invisible_new_for_screen;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (screen_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkScreen* gtk_invisible_get_screen (GtkInvisible* invisible);
// ::GdkScreen* gtk_invisible_get_screen (::GtkInvisible* invisible);
Gdk::Screen base::InvisibleBase::get_screen () noexcept
{
  typedef ::GdkScreen* (*call_wrap_t) (::GtkInvisible* invisible);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_invisible_get_screen;
  auto _temp_ret = call_wrap_v ((::GtkInvisible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_invisible_set_screen (GtkInvisible* invisible, GdkScreen* screen);
// void gtk_invisible_set_screen (::GtkInvisible* invisible, ::GdkScreen* screen);
void base::InvisibleBase::set_screen (Gdk::Screen screen) noexcept
{
  typedef void (*call_wrap_t) (::GtkInvisible* invisible, ::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_invisible_set_screen;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkInvisible*) (gobj_()), (::GdkScreen*) (screen_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/invisible_extra_def_impl.hpp>)
#include <gtk/invisible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/invisible_extra_impl.hpp>)
#include <gtk/invisible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void InvisibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkInvisibleClass *methods = (::GtkInvisibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
