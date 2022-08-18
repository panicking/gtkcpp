// AUTO-GENERATED

#ifndef _GI_GTK_TOPLEVELACCESSIBLE_IMPL_HPP_
#define _GI_GTK_TOPLEVELACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GList* gtk_toplevel_accessible_get_children (GtkToplevelAccessible* accessible);
// ::GList* gtk_toplevel_accessible_get_children (::GtkToplevelAccessible* accessible);
std::vector<Gtk::Window> base::ToplevelAccessibleBase::get_children () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkToplevelAccessible* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_toplevel_accessible_get_children;
  auto _temp_ret = call_wrap_v ((::GtkToplevelAccessible*) (gobj_()));
  return gi::detail::wrap_list<Gtk::Window> (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toplevelaccessible_extra_def_impl.hpp>)
#include <gtk/toplevelaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toplevelaccessible_extra_impl.hpp>)
#include <gtk/toplevelaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ToplevelAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkToplevelAccessibleClass *methods = (::GtkToplevelAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
