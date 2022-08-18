// AUTO-GENERATED

#ifndef _GI_GTK_SPINNER_IMPL_HPP_
#define _GI_GTK_SPINNER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_spinner_new ();
// ::GtkSpinner* gtk_spinner_new ();
Gtk::Spinner base::SpinnerBase::new_ () noexcept
{
  typedef ::GtkSpinner* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spinner_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_spinner_start (GtkSpinner* spinner);
// void gtk_spinner_start (::GtkSpinner* spinner);
void base::SpinnerBase::start () noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinner* spinner);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spinner_start;
  call_wrap_v ((::GtkSpinner*) (gobj_()));
}

// void gtk_spinner_stop (GtkSpinner* spinner);
// void gtk_spinner_stop (::GtkSpinner* spinner);
void base::SpinnerBase::stop () noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinner* spinner);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spinner_stop;
  call_wrap_v ((::GtkSpinner*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/spinner_extra_def_impl.hpp>)
#include <gtk/spinner_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/spinner_extra_impl.hpp>)
#include <gtk/spinner_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SpinnerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSpinnerClass *methods = (::GtkSpinnerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
