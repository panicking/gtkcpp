// AUTO-GENERATED

#ifndef _GI_GTK_MENUBAR_HPP_
#define _GI_GTK_MENUBAR_HPP_

#include "menushell.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class MenuBar;

namespace base {


#define GI_GTK_MENUBAR_BASE base::MenuBarBase
class MenuBarBase : public Gtk::MenuShell
{
typedef Gtk::MenuShell super_type;
public:
typedef ::GtkMenuBar BaseObjectType;

MenuBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_menu_bar_get_type(); } 

// GtkWidget* gtk_menu_bar_new ();
// ::GtkMenuBar* gtk_menu_bar_new ();
static GI_INLINE_DECL Gtk::MenuBar new_ () noexcept;

// GtkWidget* gtk_menu_bar_new_from_model (GMenuModel* model);
// ::GtkMenuBar* gtk_menu_bar_new_from_model (::GMenuModel* model);
static GI_INLINE_DECL Gtk::MenuBar new_from_model (Gio::MenuModel model) noexcept;

// GtkPackDirection gtk_menu_bar_get_child_pack_direction (GtkMenuBar* menubar);
// ::GtkPackDirection gtk_menu_bar_get_child_pack_direction (::GtkMenuBar* menubar);
GI_INLINE_DECL Gtk::PackDirection get_child_pack_direction () noexcept;

// GtkPackDirection gtk_menu_bar_get_pack_direction (GtkMenuBar* menubar);
// ::GtkPackDirection gtk_menu_bar_get_pack_direction (::GtkMenuBar* menubar);
GI_INLINE_DECL Gtk::PackDirection get_pack_direction () noexcept;

// void gtk_menu_bar_set_child_pack_direction (GtkMenuBar* menubar, GtkPackDirection child_pack_dir);
// void gtk_menu_bar_set_child_pack_direction (::GtkMenuBar* menubar, ::GtkPackDirection child_pack_dir);
GI_INLINE_DECL void set_child_pack_direction (Gtk::PackDirection child_pack_dir) noexcept;

// void gtk_menu_bar_set_pack_direction (GtkMenuBar* menubar, GtkPackDirection pack_dir);
// void gtk_menu_bar_set_pack_direction (::GtkMenuBar* menubar, ::GtkPackDirection pack_dir);
GI_INLINE_DECL void set_pack_direction (Gtk::PackDirection pack_dir) noexcept;

gi::property_proxy<Gtk::PackDirection, base::MenuBarBase> property_child_pack_direction()
{ return gi::property_proxy<Gtk::PackDirection, base::MenuBarBase> (*this, "child-pack-direction"); }
const gi::property_proxy<Gtk::PackDirection, base::MenuBarBase> property_child_pack_direction() const
{ return gi::property_proxy<Gtk::PackDirection, base::MenuBarBase> (*this, "child-pack-direction"); }

gi::property_proxy<Gtk::PackDirection, base::MenuBarBase> property_pack_direction()
{ return gi::property_proxy<Gtk::PackDirection, base::MenuBarBase> (*this, "pack-direction"); }
const gi::property_proxy<Gtk::PackDirection, base::MenuBarBase> property_pack_direction() const
{ return gi::property_proxy<Gtk::PackDirection, base::MenuBarBase> (*this, "pack-direction"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menubar_extra_def.hpp>)
#include <gtk/menubar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menubar_extra.hpp>)
#include <gtk/menubar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MenuBar : public GI_GTK_MENUBAR_BASE
{ typedef GI_GTK_MENUBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMenuBar>
{ typedef Gtk::MenuBar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MenuBarClassDef
{
typedef MenuBarClassDef self;
public:
typedef Gtk::MenuBar instance_type;
typedef ::GtkMenuBarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MenuBarClass: public detail::ClassTemplate<Gtk::impl::internal::MenuBarClassDef, Gtk::impl::internal::MenuShellClass>
{
typedef MenuBarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MenuBarClassDef, Gtk::impl::internal::MenuShellClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using MenuBarImpl = detail::ObjectImpl<MenuBar, internal::MenuBarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
