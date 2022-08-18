// AUTO-GENERATED

#ifndef _GI_GTK_PLUGACCESSIBLE_IMPL_HPP_
#define _GI_GTK_PLUGACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gchar* gtk_plug_accessible_get_id (GtkPlugAccessible* plug);
// char* gtk_plug_accessible_get_id (::GtkPlugAccessible* plug);
std::string base::PlugAccessibleBase::get_id () noexcept
{
  typedef char* (*call_wrap_t) (::GtkPlugAccessible* plug);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_plug_accessible_get_id;
  auto _temp_ret = call_wrap_v ((::GtkPlugAccessible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/plugaccessible_extra_def_impl.hpp>)
#include <gtk/plugaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/plugaccessible_extra_impl.hpp>)
#include <gtk/plugaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PlugAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkPlugAccessibleClass *methods = (::GtkPlugAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
