// AUTO-GENERATED

#ifndef _GI_GTK_RECENTCHOOSERMENU_HPP_
#define _GI_GTK_RECENTCHOOSERMENU_HPP_

#include "menu.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Activatable;
class RecentChooser;
class RecentManager;

class RecentChooserMenu;

namespace base {


#define GI_GTK_RECENTCHOOSERMENU_BASE base::RecentChooserMenuBase
class RecentChooserMenuBase : public Gtk::Menu
{
typedef Gtk::Menu super_type;
public:
typedef ::GtkRecentChooserMenu BaseObjectType;

RecentChooserMenuBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_recent_chooser_menu_get_type(); } 

GI_INLINE_DECL Gtk::Activatable interface_ (gi::interface_tag<Gtk::Activatable>);

GI_INLINE_DECL operator Gtk::Activatable ();

GI_INLINE_DECL Gtk::RecentChooser interface_ (gi::interface_tag<Gtk::RecentChooser>);

GI_INLINE_DECL operator Gtk::RecentChooser ();

// GtkWidget* gtk_recent_chooser_menu_new ();
// ::GtkRecentChooserMenu* gtk_recent_chooser_menu_new ();
static GI_INLINE_DECL Gtk::RecentChooserMenu new_ () noexcept;

// GtkWidget* gtk_recent_chooser_menu_new_for_manager (GtkRecentManager* manager);
// ::GtkRecentChooserMenu* gtk_recent_chooser_menu_new_for_manager (::GtkRecentManager* manager);
static GI_INLINE_DECL Gtk::RecentChooserMenu new_for_manager (Gtk::RecentManager manager) noexcept;

// gboolean gtk_recent_chooser_menu_get_show_numbers (GtkRecentChooserMenu* menu);
// gboolean gtk_recent_chooser_menu_get_show_numbers (::GtkRecentChooserMenu* menu);
GI_INLINE_DECL bool get_show_numbers () noexcept;

// void gtk_recent_chooser_menu_set_show_numbers (GtkRecentChooserMenu* menu, gboolean show_numbers);
// void gtk_recent_chooser_menu_set_show_numbers (::GtkRecentChooserMenu* menu, gboolean show_numbers);
GI_INLINE_DECL void set_show_numbers (gboolean show_numbers) noexcept;

gi::property_proxy<bool, base::RecentChooserMenuBase> property_show_numbers()
{ return gi::property_proxy<bool, base::RecentChooserMenuBase> (*this, "show-numbers"); }
const gi::property_proxy<bool, base::RecentChooserMenuBase> property_show_numbers() const
{ return gi::property_proxy<bool, base::RecentChooserMenuBase> (*this, "show-numbers"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentchoosermenu_extra_def.hpp>)
#include <gtk/recentchoosermenu_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentchoosermenu_extra.hpp>)
#include <gtk/recentchoosermenu_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentChooserMenu : public GI_GTK_RECENTCHOOSERMENU_BASE
{ typedef GI_GTK_RECENTCHOOSERMENU_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentChooserMenu>
{ typedef Gtk::RecentChooserMenu type; }; 

} // namespace repository

} // namespace gi

#include "recentchooser.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RecentChooserMenuClassDef
{
typedef RecentChooserMenuClassDef self;
public:
typedef Gtk::RecentChooserMenu instance_type;
typedef ::GtkRecentChooserMenuClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RecentChooserMenuClass: public detail::ClassTemplate<Gtk::impl::internal::RecentChooserMenuClassDef, Gtk::impl::internal::MenuClass, Gtk::impl::internal::RecentChooserIfaceClassImpl>
{
typedef RecentChooserMenuClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RecentChooserMenuClassDef, Gtk::impl::internal::MenuClass, Gtk::impl::internal::RecentChooserIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::RecentChooserIfaceClassImpl GtkRecentChooserIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using RecentChooserMenuImpl = detail::ObjectImpl<RecentChooserMenu, internal::RecentChooserMenuClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
