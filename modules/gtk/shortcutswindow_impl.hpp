// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTSWINDOW_IMPL_HPP_
#define _GI_GTK_SHORTCUTSWINDOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutswindow_extra_def_impl.hpp>)
#include <gtk/shortcutswindow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutswindow_extra_impl.hpp>)
#include <gtk/shortcutswindow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ShortcutsWindowClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkShortcutsWindowClass *methods = (::GtkShortcutsWindowClass *) class_struct;
  (void) methods;

  methods->close = (decltype (methods->close)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::close_>;
  methods->search = (decltype (methods->search)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::search_>;
}

// void ShortcutsWindow::close (GtkShortcutsWindow* self);
// void ShortcutsWindow::close (::GtkShortcutsWindow* self);
void ShortcutsWindowClass::close_ () noexcept
{
  if (!get_struct_()->close) return ;
  typedef void (*call_wrap_t) (::GtkShortcutsWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close;
  call_wrap_v ((::GtkShortcutsWindow*) (gobj_()));
}

// void ShortcutsWindow::search (GtkShortcutsWindow* self);
// void ShortcutsWindow::search (::GtkShortcutsWindow* self);
void ShortcutsWindowClass::search_ () noexcept
{
  if (!get_struct_()->search) return ;
  typedef void (*call_wrap_t) (::GtkShortcutsWindow* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->search;
  call_wrap_v ((::GtkShortcutsWindow*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
