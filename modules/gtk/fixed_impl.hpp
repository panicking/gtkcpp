// AUTO-GENERATED

#ifndef _GI_GTK_FIXED_IMPL_HPP_
#define _GI_GTK_FIXED_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_fixed_new ();
// ::GtkFixed* gtk_fixed_new ();
Gtk::Fixed base::FixedBase::new_ () noexcept
{
  typedef ::GtkFixed* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_fixed_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_fixed_move (GtkFixed* fixed, GtkWidget* widget, gint x, gint y);
// void gtk_fixed_move (::GtkFixed* fixed, ::GtkWidget* widget, gint x, gint y);
void base::FixedBase::move (Gtk::Widget widget, gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixed* fixed, ::GtkWidget* widget, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_fixed_move;
  auto y_to_c = y;
  auto x_to_c = x;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFixed*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (x_to_c), (gint) (y_to_c));
}

// void gtk_fixed_put (GtkFixed* fixed, GtkWidget* widget, gint x, gint y);
// void gtk_fixed_put (::GtkFixed* fixed, ::GtkWidget* widget, gint x, gint y);
void base::FixedBase::put (Gtk::Widget widget, gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixed* fixed, ::GtkWidget* widget, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_fixed_put;
  auto y_to_c = y;
  auto x_to_c = x;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFixed*) (gobj_()), (::GtkWidget*) (widget_to_c), (gint) (x_to_c), (gint) (y_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fixed_extra_def_impl.hpp>)
#include <gtk/fixed_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fixed_extra_impl.hpp>)
#include <gtk/fixed_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FixedClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkFixedClass *methods = (::GtkFixedClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
