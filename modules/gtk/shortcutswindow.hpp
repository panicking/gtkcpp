// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTSWINDOW_HPP_
#define _GI_GTK_SHORTCUTSWINDOW_HPP_

#include "window.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ShortcutsWindow;

namespace base {


#define GI_GTK_SHORTCUTSWINDOW_BASE base::ShortcutsWindowBase
class ShortcutsWindowBase : public Gtk::Window
{
typedef Gtk::Window super_type;
public:
typedef ::GtkShortcutsWindow BaseObjectType;

ShortcutsWindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_shortcuts_window_get_type(); } 

gi::property_proxy<std::string, base::ShortcutsWindowBase> property_section_name()
{ return gi::property_proxy<std::string, base::ShortcutsWindowBase> (*this, "section-name"); }
const gi::property_proxy<std::string, base::ShortcutsWindowBase> property_section_name() const
{ return gi::property_proxy<std::string, base::ShortcutsWindowBase> (*this, "section-name"); }

gi::property_proxy<std::string, base::ShortcutsWindowBase> property_view_name()
{ return gi::property_proxy<std::string, base::ShortcutsWindowBase> (*this, "view-name"); }
const gi::property_proxy<std::string, base::ShortcutsWindowBase> property_view_name() const
{ return gi::property_proxy<std::string, base::ShortcutsWindowBase> (*this, "view-name"); }

// signal close
gi::signal_proxy<void(Gtk::ShortcutsWindow)> signal_close()
{ return gi::signal_proxy<void(Gtk::ShortcutsWindow)> (*this, "close"); }

// signal search
gi::signal_proxy<void(Gtk::ShortcutsWindow)> signal_search()
{ return gi::signal_proxy<void(Gtk::ShortcutsWindow)> (*this, "search"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutswindow_extra_def.hpp>)
#include <gtk/shortcutswindow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutswindow_extra.hpp>)
#include <gtk/shortcutswindow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ShortcutsWindow : public GI_GTK_SHORTCUTSWINDOW_BASE
{ typedef GI_GTK_SHORTCUTSWINDOW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkShortcutsWindow>
{ typedef Gtk::ShortcutsWindow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ShortcutsWindowClassDef
{
typedef ShortcutsWindowClassDef self;
public:
typedef Gtk::ShortcutsWindow instance_type;
typedef ::GtkShortcutsWindowClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ShortcutsWindow::close (GtkShortcutsWindow* self);
// void ShortcutsWindow::close (::GtkShortcutsWindow* self);
virtual void close_ () noexcept = 0;

// void ShortcutsWindow::search (GtkShortcutsWindow* self);
// void ShortcutsWindow::search (::GtkShortcutsWindow* self);
virtual void search_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ShortcutsWindowClass: public detail::ClassTemplate<Gtk::impl::internal::ShortcutsWindowClassDef, Gtk::impl::internal::WindowClass>
{
typedef ShortcutsWindowClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ShortcutsWindowClassDef, Gtk::impl::internal::WindowClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ShortcutsWindow::close (GtkShortcutsWindow* self);
// void ShortcutsWindow::close (::GtkShortcutsWindow* self);
GI_INLINE_DECL void close_ () noexcept override;

// void ShortcutsWindow::search (GtkShortcutsWindow* self);
// void ShortcutsWindow::search (::GtkShortcutsWindow* self);
GI_INLINE_DECL void search_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ShortcutsWindowImpl = detail::ObjectImpl<ShortcutsWindow, internal::ShortcutsWindowClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
