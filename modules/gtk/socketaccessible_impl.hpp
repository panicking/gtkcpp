// AUTO-GENERATED

#ifndef _GI_GTK_SOCKETACCESSIBLE_IMPL_HPP_
#define _GI_GTK_SOCKETACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_socket_accessible_embed (GtkSocketAccessible* socket, gchar* path);
// void gtk_socket_accessible_embed (::GtkSocketAccessible* socket, char* path);
void base::SocketAccessibleBase::embed (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::GtkSocketAccessible* socket, char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_socket_accessible_embed;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkSocketAccessible*) (gobj_()), (char*) (path_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/socketaccessible_extra_def_impl.hpp>)
#include <gtk/socketaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/socketaccessible_extra_impl.hpp>)
#include <gtk/socketaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SocketAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSocketAccessibleClass *methods = (::GtkSocketAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
