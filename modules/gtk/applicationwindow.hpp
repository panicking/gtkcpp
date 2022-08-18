// AUTO-GENERATED

#ifndef _GI_GTK_APPLICATIONWINDOW_HPP_
#define _GI_GTK_APPLICATIONWINDOW_HPP_

#include "window.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Application;
class ShortcutsWindow;

class ApplicationWindow;

namespace base {


#define GI_GTK_APPLICATIONWINDOW_BASE base::ApplicationWindowBase
class ApplicationWindowBase : public Gtk::Window
{
typedef Gtk::Window super_type;
public:
typedef ::GtkApplicationWindow BaseObjectType;

ApplicationWindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_application_window_get_type(); } 

GI_INLINE_DECL Gio::ActionGroup interface_ (gi::interface_tag<Gio::ActionGroup>);

GI_INLINE_DECL operator Gio::ActionGroup ();

GI_INLINE_DECL Gio::ActionMap interface_ (gi::interface_tag<Gio::ActionMap>);

GI_INLINE_DECL operator Gio::ActionMap ();

// GtkWidget* gtk_application_window_new (GtkApplication* application);
// ::GtkApplicationWindow* gtk_application_window_new (::GtkApplication* application);
static GI_INLINE_DECL Gtk::ApplicationWindow new_ (Gtk::Application application) noexcept;

// GtkShortcutsWindow* gtk_application_window_get_help_overlay (GtkApplicationWindow* window);
// ::GtkShortcutsWindow* gtk_application_window_get_help_overlay (::GtkApplicationWindow* window);
GI_INLINE_DECL Gtk::ShortcutsWindow get_help_overlay () noexcept;

// guint gtk_application_window_get_id (GtkApplicationWindow* window);
// guint gtk_application_window_get_id (::GtkApplicationWindow* window);
GI_INLINE_DECL guint get_id () noexcept;

// gboolean gtk_application_window_get_show_menubar (GtkApplicationWindow* window);
// gboolean gtk_application_window_get_show_menubar (::GtkApplicationWindow* window);
GI_INLINE_DECL bool get_show_menubar () noexcept;

// void gtk_application_window_set_help_overlay (GtkApplicationWindow* window, GtkShortcutsWindow* help_overlay);
// void gtk_application_window_set_help_overlay (::GtkApplicationWindow* window, ::GtkShortcutsWindow* help_overlay);
GI_INLINE_DECL void set_help_overlay (Gtk::ShortcutsWindow help_overlay) noexcept;
GI_INLINE_DECL void set_help_overlay () noexcept;

// void gtk_application_window_set_show_menubar (GtkApplicationWindow* window, gboolean show_menubar);
// void gtk_application_window_set_show_menubar (::GtkApplicationWindow* window, gboolean show_menubar);
GI_INLINE_DECL void set_show_menubar (gboolean show_menubar) noexcept;

gi::property_proxy<bool, base::ApplicationWindowBase> property_show_menubar()
{ return gi::property_proxy<bool, base::ApplicationWindowBase> (*this, "show-menubar"); }
const gi::property_proxy<bool, base::ApplicationWindowBase> property_show_menubar() const
{ return gi::property_proxy<bool, base::ApplicationWindowBase> (*this, "show-menubar"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/applicationwindow_extra_def.hpp>)
#include <gtk/applicationwindow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/applicationwindow_extra.hpp>)
#include <gtk/applicationwindow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ApplicationWindow : public GI_GTK_APPLICATIONWINDOW_BASE
{ typedef GI_GTK_APPLICATIONWINDOW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkApplicationWindow>
{ typedef Gtk::ApplicationWindow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ApplicationWindowClassDef
{
typedef ApplicationWindowClassDef self;
public:
typedef Gtk::ApplicationWindow instance_type;
typedef ::GtkApplicationWindowClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ApplicationWindowClass: public detail::ClassTemplate<Gtk::impl::internal::ApplicationWindowClassDef, Gtk::impl::internal::WindowClass, Gio::impl::internal::ActionGroupInterfaceClassImpl, Gio::impl::internal::ActionMapInterfaceClassImpl>
{
typedef ApplicationWindowClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ApplicationWindowClassDef, Gtk::impl::internal::WindowClass, Gio::impl::internal::ActionGroupInterfaceClassImpl, Gio::impl::internal::ActionMapInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ActionGroupInterfaceClassImpl GActionGroupInterface_type;
typedef Gio::impl::internal::ActionMapInterfaceClassImpl GActionMapInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ApplicationWindowImpl = detail::ObjectImpl<ApplicationWindow, internal::ApplicationWindowClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
