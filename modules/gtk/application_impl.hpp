// AUTO-GENERATED

#ifndef _GI_GTK_APPLICATION_IMPL_HPP_
#define _GI_GTK_APPLICATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkApplication* gtk_application_new (const gchar* application_id, GApplicationFlags flags);
// ::GtkApplication* gtk_application_new (const char* application_id, ::GApplicationFlags flags);
Gtk::Application base::ApplicationBase::new_ (const std::string & application_id, Gio::ApplicationFlags flags) noexcept
{
  typedef ::GtkApplication* (*call_wrap_t) (const char* application_id, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_new;
  auto flags_to_c = gi::unwrap (flags);
  auto application_id_to_c = gi::unwrap (application_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c), (::GApplicationFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::Application base::ApplicationBase::new_ (Gio::ApplicationFlags flags) noexcept
{
  typedef ::GtkApplication* (*call_wrap_t) (const char* application_id, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_new;
  auto flags_to_c = gi::unwrap (flags);
  auto application_id_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c), (::GApplicationFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_application_add_accelerator (GtkApplication* application, const gchar* accelerator, const gchar* action_name, GVariant* parameter);
// void gtk_application_add_accelerator (::GtkApplication* application, const char* accelerator, const char* action_name, ::GVariant* parameter);
// IGNORE; deprecated

// void gtk_application_add_window (GtkApplication* application, GtkWindow* window);
// void gtk_application_add_window (::GtkApplication* application, ::GtkWindow* window);
void base::ApplicationBase::add_window (Gtk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_add_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c));
}

// gchar** gtk_application_get_accels_for_action (GtkApplication* application, const gchar* detailed_action_name);
// char** gtk_application_get_accels_for_action (::GtkApplication* application, const char* detailed_action_name);
std::vector<std::string> base::ApplicationBase::get_accels_for_action (const std::string & detailed_action_name) noexcept
{
  typedef char** (*call_wrap_t) (::GtkApplication* application, const char* detailed_action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_get_accels_for_action;
  auto detailed_action_name_to_c = gi::unwrap (detailed_action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (const char*) (detailed_action_name_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gchar** gtk_application_get_actions_for_accel (GtkApplication* application, const gchar* accel);
// char** gtk_application_get_actions_for_accel (::GtkApplication* application, const char* accel);
std::vector<std::string> base::ApplicationBase::get_actions_for_accel (const std::string & accel) noexcept
{
  typedef char** (*call_wrap_t) (::GtkApplication* application, const char* accel);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_get_actions_for_accel;
  auto accel_to_c = gi::unwrap (accel, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (const char*) (accel_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GtkWindow* gtk_application_get_active_window (GtkApplication* application);
// ::GtkWindow* gtk_application_get_active_window (::GtkApplication* application);
Gtk::Window base::ApplicationBase::get_active_window () noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) (::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_get_active_window;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GMenuModel* gtk_application_get_app_menu (GtkApplication* application);
// ::GMenuModel* gtk_application_get_app_menu (::GtkApplication* application);
Gio::MenuModel base::ApplicationBase::get_app_menu () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_get_app_menu;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GMenu* gtk_application_get_menu_by_id (GtkApplication* application, const gchar* id);
// ::GMenu* gtk_application_get_menu_by_id (::GtkApplication* application, const char* id);
Gio::Menu base::ApplicationBase::get_menu_by_id (const std::string & id) noexcept
{
  typedef ::GMenu* (*call_wrap_t) (::GtkApplication* application, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_get_menu_by_id;
  auto id_to_c = gi::unwrap (id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (const char*) (id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GMenuModel* gtk_application_get_menubar (GtkApplication* application);
// ::GMenuModel* gtk_application_get_menubar (::GtkApplication* application);
Gio::MenuModel base::ApplicationBase::get_menubar () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_get_menubar;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWindow* gtk_application_get_window_by_id (GtkApplication* application, guint id);
// ::GtkWindow* gtk_application_get_window_by_id (::GtkApplication* application, guint id);
Gtk::Window base::ApplicationBase::get_window_by_id (guint id) noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) (::GtkApplication* application, guint id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_get_window_by_id;
  auto id_to_c = id;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (guint) (id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gtk_application_get_windows (GtkApplication* application);
// ::GList* gtk_application_get_windows (::GtkApplication* application);
std::vector<Gtk::Window> base::ApplicationBase::get_windows () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_get_windows;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()));
  return gi::detail::wrap_list<Gtk::Window> (_temp_ret, gi::transfer_none);
}

// guint gtk_application_inhibit (GtkApplication* application, GtkWindow* window, GtkApplicationInhibitFlags flags, const gchar* reason);
// guint gtk_application_inhibit (::GtkApplication* application, ::GtkWindow* window, ::GtkApplicationInhibitFlags flags, const char* reason);
guint base::ApplicationBase::inhibit (Gtk::Window window, Gtk::ApplicationInhibitFlags flags, const std::string & reason) noexcept
{
  typedef guint (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window, ::GtkApplicationInhibitFlags flags, const char* reason);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_inhibit;
  auto reason_to_c = gi::unwrap (reason, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c), (::GtkApplicationInhibitFlags) (flags_to_c), (const char*) (reason_to_c));
  return _temp_ret;
}
guint base::ApplicationBase::inhibit (Gtk::ApplicationInhibitFlags flags) noexcept
{
  typedef guint (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window, ::GtkApplicationInhibitFlags flags, const char* reason);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_inhibit;
  auto reason_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto window_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c), (::GtkApplicationInhibitFlags) (flags_to_c), (const char*) (reason_to_c));
  return _temp_ret;
}

// gboolean gtk_application_is_inhibited (GtkApplication* application, GtkApplicationInhibitFlags flags);
// gboolean gtk_application_is_inhibited (::GtkApplication* application, ::GtkApplicationInhibitFlags flags);
bool base::ApplicationBase::is_inhibited (Gtk::ApplicationInhibitFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkApplication* application, ::GtkApplicationInhibitFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_is_inhibited;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkApplicationInhibitFlags) (flags_to_c));
  return _temp_ret;
}

// gchar** gtk_application_list_action_descriptions (GtkApplication* application);
// char** gtk_application_list_action_descriptions (::GtkApplication* application);
std::vector<std::string> base::ApplicationBase::list_action_descriptions () noexcept
{
  typedef char** (*call_wrap_t) (::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_list_action_descriptions;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean gtk_application_prefers_app_menu (GtkApplication* application);
// gboolean gtk_application_prefers_app_menu (::GtkApplication* application);
bool base::ApplicationBase::prefers_app_menu () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_prefers_app_menu;
  auto _temp_ret = call_wrap_v ((::GtkApplication*) (gobj_()));
  return _temp_ret;
}

// void gtk_application_remove_accelerator (GtkApplication* application, const gchar* action_name, GVariant* parameter);
// void gtk_application_remove_accelerator (::GtkApplication* application, const char* action_name, ::GVariant* parameter);
// IGNORE; deprecated

// void gtk_application_remove_window (GtkApplication* application, GtkWindow* window);
// void gtk_application_remove_window (::GtkApplication* application, ::GtkWindow* window);
void base::ApplicationBase::remove_window (Gtk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_remove_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c));
}

// void gtk_application_set_accels_for_action (GtkApplication* application, const gchar* detailed_action_name, const gchar* const* accels);
// void gtk_application_set_accels_for_action (::GtkApplication* application, const char* detailed_action_name, const char** accels);
void base::ApplicationBase::set_accels_for_action (const std::string & detailed_action_name, const std::vector<std::string> & accels) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, const char* detailed_action_name, const char** accels);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_set_accels_for_action;
  auto accels_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (accels);
  auto accels_w = unwrap (accels_i, gi::transfer_none, direction_in);
  auto accels_to_c = accels_w.gobj_(false);
  auto detailed_action_name_to_c = gi::unwrap (detailed_action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkApplication*) (gobj_()), (const char*) (detailed_action_name_to_c), (const char**) (accels_to_c));
}

// void gtk_application_set_app_menu (GtkApplication* application, GMenuModel* app_menu);
// void gtk_application_set_app_menu (::GtkApplication* application, ::GMenuModel* app_menu);
void base::ApplicationBase::set_app_menu (Gio::MenuModel app_menu) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GMenuModel* app_menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_set_app_menu;
  auto app_menu_to_c = gi::unwrap (app_menu, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GMenuModel*) (app_menu_to_c));
}
void base::ApplicationBase::set_app_menu () noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GMenuModel* app_menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_set_app_menu;
  auto app_menu_to_c = nullptr;
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GMenuModel*) (app_menu_to_c));
}

// void gtk_application_set_menubar (GtkApplication* application, GMenuModel* menubar);
// void gtk_application_set_menubar (::GtkApplication* application, ::GMenuModel* menubar);
void base::ApplicationBase::set_menubar (Gio::MenuModel menubar) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GMenuModel* menubar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_set_menubar;
  auto menubar_to_c = gi::unwrap (menubar, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GMenuModel*) (menubar_to_c));
}
void base::ApplicationBase::set_menubar () noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GMenuModel* menubar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_set_menubar;
  auto menubar_to_c = nullptr;
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GMenuModel*) (menubar_to_c));
}

// void gtk_application_uninhibit (GtkApplication* application, guint cookie);
// void gtk_application_uninhibit (::GtkApplication* application, guint cookie);
void base::ApplicationBase::uninhibit (guint cookie) noexcept
{
  typedef void (*call_wrap_t) (::GtkApplication* application, guint cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_application_uninhibit;
  auto cookie_to_c = cookie;
  call_wrap_v ((::GtkApplication*) (gobj_()), (guint) (cookie_to_c));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/application_extra_def_impl.hpp>)
#include <gtk/application_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/application_extra_impl.hpp>)
#include <gtk/application_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ApplicationClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkApplicationClass *methods = (::GtkApplicationClass *) class_struct;
  (void) methods;

  methods->window_added = (decltype (methods->window_added)) detail::method_wrapper<self, void (*) (Gtk::Window window), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::window_added_>;
  methods->window_removed = (decltype (methods->window_removed)) detail::method_wrapper<self, void (*) (Gtk::Window window), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::window_removed_>;
}

// void Application::window_added (GtkApplication* application, GtkWindow* window);
// void Application::window_added (::GtkApplication* application, ::GtkWindow* window);
void ApplicationClass::window_added_ (Gtk::Window window) noexcept
{
  if (!get_struct_()->window_added) return ;
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->window_added;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c));
}

// void Application::window_removed (GtkApplication* application, GtkWindow* window);
// void Application::window_removed (::GtkApplication* application, ::GtkWindow* window);
void ApplicationClass::window_removed_ (Gtk::Window window) noexcept
{
  if (!get_struct_()->window_removed) return ;
  typedef void (*call_wrap_t) (::GtkApplication* application, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->window_removed;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkApplication*) (gobj_()), (::GtkWindow*) (window_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
