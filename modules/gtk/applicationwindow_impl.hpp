// AUTO-GENERATED

#ifndef _GI_GTK_APPLICATIONWINDOW_IMPL_HPP_
#define _GI_GTK_APPLICATIONWINDOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gio::ActionGroup ApplicationWindowBase::interface_ (gi::interface_tag<Gio::ActionGroup>)
{ return gi::wrap ((Gio::ActionGroup::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ApplicationWindowBase::operator Gio::ActionGroup ()
{ return interface_ (gi::interface_tag<Gio::ActionGroup>()); }

Gio::ActionMap ApplicationWindowBase::interface_ (gi::interface_tag<Gio::ActionMap>)
{ return gi::wrap ((Gio::ActionMap::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ApplicationWindowBase::operator Gio::ActionMap ()
{ return interface_ (gi::interface_tag<Gio::ActionMap>()); }

// GtkWidget* gtk_application_window_new (GtkApplication* application);
// ::GtkApplicationWindow* gtk_application_window_new (::GtkApplication* application);
Gtk::ApplicationWindow base::ApplicationWindowBase::new_ (Gtk::Application application) noexcept
{
  typedef ::GtkApplicationWindow* (*call_wrap_t) (::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_window_new;
  auto application_to_c = gi::unwrap (application, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (application_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkShortcutsWindow* gtk_application_window_get_help_overlay (GtkApplicationWindow* window);
// ::GtkShortcutsWindow* gtk_application_window_get_help_overlay (::GtkApplicationWindow* window);
Gtk::ShortcutsWindow base::ApplicationWindowBase::get_help_overlay () noexcept
{
  typedef ::GtkShortcutsWindow* (*call_wrap_t) (::GtkApplicationWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_window_get_help_overlay;
  auto _temp_ret = call_wrap_v ((::GtkApplicationWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gtk_application_window_get_id (GtkApplicationWindow* window);
// guint gtk_application_window_get_id (::GtkApplicationWindow* window);
guint base::ApplicationWindowBase::get_id () noexcept
{
  typedef guint (*call_wrap_t) (::GtkApplicationWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_window_get_id;
  auto _temp_ret = call_wrap_v ((::GtkApplicationWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_application_window_get_show_menubar (GtkApplicationWindow* window);
// gboolean gtk_application_window_get_show_menubar (::GtkApplicationWindow* window);
bool base::ApplicationWindowBase::get_show_menubar () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkApplicationWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_window_get_show_menubar;
  auto _temp_ret = call_wrap_v ((::GtkApplicationWindow*) (gobj_()));
  return _temp_ret;
}

// void gtk_application_window_set_help_overlay (GtkApplicationWindow* window, GtkShortcutsWindow* help_overlay);
// void gtk_application_window_set_help_overlay (::GtkApplicationWindow* window, ::GtkShortcutsWindow* help_overlay);
void base::ApplicationWindowBase::set_help_overlay (Gtk::ShortcutsWindow help_overlay) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplicationWindow* window, ::GtkShortcutsWindow* help_overlay);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_window_set_help_overlay;
  auto help_overlay_to_c = gi::unwrap (help_overlay, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkApplicationWindow*) (gobj_()), (::GtkShortcutsWindow*) (help_overlay_to_c));
}
void base::ApplicationWindowBase::set_help_overlay () noexcept
{
  typedef void (*call_wrap_t) (::GtkApplicationWindow* window, ::GtkShortcutsWindow* help_overlay);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_window_set_help_overlay;
  auto help_overlay_to_c = nullptr;
  call_wrap_v ((::GtkApplicationWindow*) (gobj_()), (::GtkShortcutsWindow*) (help_overlay_to_c));
}

// void gtk_application_window_set_show_menubar (GtkApplicationWindow* window, gboolean show_menubar);
// void gtk_application_window_set_show_menubar (::GtkApplicationWindow* window, gboolean show_menubar);
void base::ApplicationWindowBase::set_show_menubar (gboolean show_menubar) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplicationWindow* window, gboolean show_menubar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_window_set_show_menubar;
  auto show_menubar_to_c = show_menubar;
  call_wrap_v ((::GtkApplicationWindow*) (gobj_()), (gboolean) (show_menubar_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/applicationwindow_extra_def_impl.hpp>)
#include <gtk/applicationwindow_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/applicationwindow_extra_impl.hpp>)
#include <gtk/applicationwindow_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ApplicationWindowClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkApplicationWindowClass *methods = (::GtkApplicationWindowClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
