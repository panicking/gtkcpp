// AUTO-GENERATED

#ifndef _GI_GTK_BIN_IMPL_HPP_
#define _GI_GTK_BIN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_bin_get_child (GtkBin* bin);
// ::GtkWidget* gtk_bin_get_child (::GtkBin* bin);
Gtk::Widget base::BinBase::get_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkBin* bin);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_bin_get_child;
  auto _temp_ret = call_wrap_v ((::GtkBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bin_extra_def_impl.hpp>)
#include <gtk/bin_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bin_extra_impl.hpp>)
#include <gtk/bin_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void BinClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkBinClass *methods = (::GtkBinClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
