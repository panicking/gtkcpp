// AUTO-GENERATED

#ifndef _GI_GTK_APPLICATION_HPP_
#define _GI_GTK_APPLICATION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Window;

class Application;

namespace base {


#define GI_GTK_APPLICATION_BASE base::ApplicationBase
class ApplicationBase : public Gio::Application
{
typedef Gio::Application super_type;
public:
typedef ::GtkApplication BaseObjectType;

ApplicationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_application_get_type(); } 

// GtkApplication* gtk_application_new (const gchar* application_id, GApplicationFlags flags);
// ::GtkApplication* gtk_application_new (const char* application_id, ::GApplicationFlags flags);
static GI_INLINE_DECL Gtk::Application new_ (const std::string & application_id, Gio::ApplicationFlags flags) noexcept;
static GI_INLINE_DECL Gtk::Application new_ (Gio::ApplicationFlags flags) noexcept;

// void gtk_application_add_accelerator (GtkApplication* application, const gchar* accelerator, const gchar* action_name, GVariant* parameter);
// void gtk_application_add_accelerator (::GtkApplication* application, const char* accelerator, const char* action_name, ::GVariant* parameter);
// IGNORE; deprecated

// void gtk_application_add_window (GtkApplication* application, GtkWindow* window);
// void gtk_application_add_window (::GtkApplication* application, ::GtkWindow* window);
GI_INLINE_DECL void add_window (Gtk::Window window) noexcept;

// gchar** gtk_application_get_accels_for_action (GtkApplication* application, const gchar* detailed_action_name);
// char** gtk_application_get_accels_for_action (::GtkApplication* application, const char* detailed_action_name);
GI_INLINE_DECL std::vector<std::string> get_accels_for_action (const std::string & detailed_action_name) noexcept;

// gchar** gtk_application_get_actions_for_accel (GtkApplication* application, const gchar* accel);
// char** gtk_application_get_actions_for_accel (::GtkApplication* application, const char* accel);
GI_INLINE_DECL std::vector<std::string> get_actions_for_accel (const std::string & accel) noexcept;

// GtkWindow* gtk_application_get_active_window (GtkApplication* application);
// ::GtkWindow* gtk_application_get_active_window (::GtkApplication* application);
GI_INLINE_DECL Gtk::Window get_active_window () noexcept;

// GMenuModel* gtk_application_get_app_menu (GtkApplication* application);
// ::GMenuModel* gtk_application_get_app_menu (::GtkApplication* application);
GI_INLINE_DECL Gio::MenuModel get_app_menu () noexcept;

// GMenu* gtk_application_get_menu_by_id (GtkApplication* application, const gchar* id);
// ::GMenu* gtk_application_get_menu_by_id (::GtkApplication* application, const char* id);
GI_INLINE_DECL Gio::Menu get_menu_by_id (const std::string & id) noexcept;

// GMenuModel* gtk_application_get_menubar (GtkApplication* application);
// ::GMenuModel* gtk_application_get_menubar (::GtkApplication* application);
GI_INLINE_DECL Gio::MenuModel get_menubar () noexcept;

// GtkWindow* gtk_application_get_window_by_id (GtkApplication* application, guint id);
// ::GtkWindow* gtk_application_get_window_by_id (::GtkApplication* application, guint id);
GI_INLINE_DECL Gtk::Window get_window_by_id (guint id) noexcept;

// GList* gtk_application_get_windows (GtkApplication* application);
// ::GList* gtk_application_get_windows (::GtkApplication* application);
GI_INLINE_DECL std::vector<Gtk::Window> get_windows () noexcept;

// guint gtk_application_inhibit (GtkApplication* application, GtkWindow* window, GtkApplicationInhibitFlags flags, const gchar* reason);
// guint gtk_application_inhibit (::GtkApplication* application, ::GtkWindow* window, ::GtkApplicationInhibitFlags flags, const char* reason);
GI_INLINE_DECL guint inhibit (Gtk::Window window, Gtk::ApplicationInhibitFlags flags, const std::string & reason) noexcept;
GI_INLINE_DECL guint inhibit (Gtk::ApplicationInhibitFlags flags) noexcept;

// gboolean gtk_application_is_inhibited (GtkApplication* application, GtkApplicationInhibitFlags flags);
// gboolean gtk_application_is_inhibited (::GtkApplication* application, ::GtkApplicationInhibitFlags flags);
GI_INLINE_DECL bool is_inhibited (Gtk::ApplicationInhibitFlags flags) noexcept;

// gchar** gtk_application_list_action_descriptions (GtkApplication* application);
// char** gtk_application_list_action_descriptions (::GtkApplication* application);
GI_INLINE_DECL std::vector<std::string> list_action_descriptions () noexcept;

// gboolean gtk_application_prefers_app_menu (GtkApplication* application);
// gboolean gtk_application_prefers_app_menu (::GtkApplication* application);
GI_INLINE_DECL bool prefers_app_menu () noexcept;

// void gtk_application_remove_accelerator (GtkApplication* application, const gchar* action_name, GVariant* parameter);
// void gtk_application_remove_accelerator (::GtkApplication* application, const char* action_name, ::GVariant* parameter);
// IGNORE; deprecated

// void gtk_application_remove_window (GtkApplication* application, GtkWindow* window);
// void gtk_application_remove_window (::GtkApplication* application, ::GtkWindow* window);
GI_INLINE_DECL void remove_window (Gtk::Window window) noexcept;

// void gtk_application_set_accels_for_action (GtkApplication* application, const gchar* detailed_action_name, const gchar* const* accels);
// void gtk_application_set_accels_for_action (::GtkApplication* application, const char* detailed_action_name, const char** accels);
GI_INLINE_DECL void set_accels_for_action (const std::string & detailed_action_name, const std::vector<std::string> & accels) noexcept;

// void gtk_application_set_app_menu (GtkApplication* application, GMenuModel* app_menu);
// void gtk_application_set_app_menu (::GtkApplication* application, ::GMenuModel* app_menu);
GI_INLINE_DECL void set_app_menu (Gio::MenuModel app_menu) noexcept;
GI_INLINE_DECL void set_app_menu () noexcept;

// void gtk_application_set_menubar (GtkApplication* application, GMenuModel* menubar);
// void gtk_application_set_menubar (::GtkApplication* application, ::GMenuModel* menubar);
GI_INLINE_DECL void set_menubar (Gio::MenuModel menubar) noexcept;
GI_INLINE_DECL void set_menubar () noexcept;

// void gtk_application_uninhibit (GtkApplication* application, guint cookie);
// void gtk_application_uninhibit (::GtkApplication* application, guint cookie);
GI_INLINE_DECL void uninhibit (guint cookie) noexcept;

gi::property_proxy<Gtk::Window, base::ApplicationBase> property_active_window()
{ return gi::property_proxy<Gtk::Window, base::ApplicationBase> (*this, "active-window"); }
const gi::property_proxy<Gtk::Window, base::ApplicationBase> property_active_window() const
{ return gi::property_proxy<Gtk::Window, base::ApplicationBase> (*this, "active-window"); }

gi::property_proxy<Gio::MenuModel, base::ApplicationBase> property_app_menu()
{ return gi::property_proxy<Gio::MenuModel, base::ApplicationBase> (*this, "app-menu"); }
const gi::property_proxy<Gio::MenuModel, base::ApplicationBase> property_app_menu() const
{ return gi::property_proxy<Gio::MenuModel, base::ApplicationBase> (*this, "app-menu"); }

gi::property_proxy<Gio::MenuModel, base::ApplicationBase> property_menubar()
{ return gi::property_proxy<Gio::MenuModel, base::ApplicationBase> (*this, "menubar"); }
const gi::property_proxy<Gio::MenuModel, base::ApplicationBase> property_menubar() const
{ return gi::property_proxy<Gio::MenuModel, base::ApplicationBase> (*this, "menubar"); }

gi::property_proxy<bool, base::ApplicationBase> property_register_session()
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "register-session"); }
const gi::property_proxy<bool, base::ApplicationBase> property_register_session() const
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "register-session"); }

gi::property_proxy<bool, base::ApplicationBase> property_screensaver_active()
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "screensaver-active"); }
const gi::property_proxy<bool, base::ApplicationBase> property_screensaver_active() const
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "screensaver-active"); }

// signal query-end
gi::signal_proxy<void(Gtk::Application)> signal_query_end()
{ return gi::signal_proxy<void(Gtk::Application)> (*this, "query-end"); }

// signal window-added
gi::signal_proxy<void(Gtk::Application, Gtk::Window window)> signal_window_added()
{ return gi::signal_proxy<void(Gtk::Application, Gtk::Window window)> (*this, "window-added"); }

// signal window-removed
gi::signal_proxy<void(Gtk::Application, Gtk::Window window)> signal_window_removed()
{ return gi::signal_proxy<void(Gtk::Application, Gtk::Window window)> (*this, "window-removed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/application_extra_def.hpp>)
#include <gtk/application_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/application_extra.hpp>)
#include <gtk/application_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Application : public GI_GTK_APPLICATION_BASE
{ typedef GI_GTK_APPLICATION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkApplication>
{ typedef Gtk::Application type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ApplicationClassDef
{
typedef ApplicationClassDef self;
public:
typedef Gtk::Application instance_type;
typedef ::GtkApplicationClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Application::window_added (GtkApplication* application, GtkWindow* window);
// void Application::window_added (::GtkApplication* application, ::GtkWindow* window);
virtual void window_added_ (Gtk::Window window) noexcept = 0;

// void Application::window_removed (GtkApplication* application, GtkWindow* window);
// void Application::window_removed (::GtkApplication* application, ::GtkWindow* window);
virtual void window_removed_ (Gtk::Window window) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ApplicationClass: public detail::ClassTemplate<Gtk::impl::internal::ApplicationClassDef, Gio::impl::internal::ApplicationClass>
{
typedef ApplicationClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ApplicationClassDef, Gio::impl::internal::ApplicationClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Application::window_added (GtkApplication* application, GtkWindow* window);
// void Application::window_added (::GtkApplication* application, ::GtkWindow* window);
GI_INLINE_DECL void window_added_ (Gtk::Window window) noexcept override;

// void Application::window_removed (GtkApplication* application, GtkWindow* window);
// void Application::window_removed (::GtkApplication* application, ::GtkWindow* window);
GI_INLINE_DECL void window_removed_ (Gtk::Window window) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ApplicationImpl = detail::ObjectImpl<Application, internal::ApplicationClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
