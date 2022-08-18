// AUTO-GENERATED

#ifndef _GI_GTK_MODELBUTTON_IMPL_HPP_
#define _GI_GTK_MODELBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_model_button_new ();
// ::GtkModelButton* gtk_model_button_new ();
Gtk::ModelButton base::ModelButtonBase::new_ () noexcept
{
  typedef ::GtkModelButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_model_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/modelbutton_extra_def_impl.hpp>)
#include <gtk/modelbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/modelbutton_extra_impl.hpp>)
#include <gtk/modelbutton_extra_impl.hpp>
#endif
#endif

#endif
