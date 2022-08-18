// AUTO-GENERATED

#ifndef _GI_GTK_MENUSHELL_HPP_
#define _GI_GTK_MENUSHELL_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class MenuItem;
class Widget;

class MenuShell;

namespace base {


#define GI_GTK_MENUSHELL_BASE base::MenuShellBase
class MenuShellBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkMenuShell BaseObjectType;

MenuShellBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_menu_shell_get_type(); } 

// void gtk_menu_shell_activate_item (GtkMenuShell* menu_shell, GtkWidget* menu_item, gboolean force_deactivate);
// void gtk_menu_shell_activate_item (::GtkMenuShell* menu_shell, ::GtkWidget* menu_item, gboolean force_deactivate);
GI_INLINE_DECL void activate_item (Gtk::Widget menu_item, gboolean force_deactivate) noexcept;

// void gtk_menu_shell_append (GtkMenuShell* menu_shell, GtkWidget* child);
// void gtk_menu_shell_append (::GtkMenuShell* menu_shell, ::GtkMenuItem* child);
GI_INLINE_DECL void append (Gtk::MenuItem child) noexcept;

// void gtk_menu_shell_bind_model (GtkMenuShell* menu_shell, GMenuModel* model, const gchar* action_namespace, gboolean with_separators);
// void gtk_menu_shell_bind_model (::GtkMenuShell* menu_shell, ::GMenuModel* model, const char* action_namespace, gboolean with_separators);
GI_INLINE_DECL void bind_model (Gio::MenuModel model, const std::string & action_namespace, gboolean with_separators) noexcept;
GI_INLINE_DECL void bind_model (gboolean with_separators) noexcept;

// void gtk_menu_shell_cancel (GtkMenuShell* menu_shell);
// void gtk_menu_shell_cancel (::GtkMenuShell* menu_shell);
GI_INLINE_DECL void cancel () noexcept;

// void gtk_menu_shell_deactivate (GtkMenuShell* menu_shell);
// void gtk_menu_shell_deactivate (::GtkMenuShell* menu_shell);
GI_INLINE_DECL void deactivate () noexcept;

// void gtk_menu_shell_deselect (GtkMenuShell* menu_shell);
// void gtk_menu_shell_deselect (::GtkMenuShell* menu_shell);
GI_INLINE_DECL void deselect () noexcept;

// GtkWidget* gtk_menu_shell_get_parent_shell (GtkMenuShell* menu_shell);
// ::GtkWidget* gtk_menu_shell_get_parent_shell (::GtkMenuShell* menu_shell);
GI_INLINE_DECL Gtk::Widget get_parent_shell () noexcept;

// GtkWidget* gtk_menu_shell_get_selected_item (GtkMenuShell* menu_shell);
// ::GtkWidget* gtk_menu_shell_get_selected_item (::GtkMenuShell* menu_shell);
GI_INLINE_DECL Gtk::Widget get_selected_item () noexcept;

// gboolean gtk_menu_shell_get_take_focus (GtkMenuShell* menu_shell);
// gboolean gtk_menu_shell_get_take_focus (::GtkMenuShell* menu_shell);
GI_INLINE_DECL bool get_take_focus () noexcept;

// void gtk_menu_shell_insert (GtkMenuShell* menu_shell, GtkWidget* child, gint position);
// void gtk_menu_shell_insert (::GtkMenuShell* menu_shell, ::GtkWidget* child, gint position);
GI_INLINE_DECL void insert (Gtk::Widget child, gint position) noexcept;

// void gtk_menu_shell_prepend (GtkMenuShell* menu_shell, GtkWidget* child);
// void gtk_menu_shell_prepend (::GtkMenuShell* menu_shell, ::GtkWidget* child);
GI_INLINE_DECL void prepend (Gtk::Widget child) noexcept;

// void gtk_menu_shell_select_first (GtkMenuShell* menu_shell, gboolean search_sensitive);
// void gtk_menu_shell_select_first (::GtkMenuShell* menu_shell, gboolean search_sensitive);
GI_INLINE_DECL void select_first (gboolean search_sensitive) noexcept;

// void gtk_menu_shell_select_item (GtkMenuShell* menu_shell, GtkWidget* menu_item);
// void gtk_menu_shell_select_item (::GtkMenuShell* menu_shell, ::GtkWidget* menu_item);
GI_INLINE_DECL void select_item (Gtk::Widget menu_item) noexcept;

// void gtk_menu_shell_set_take_focus (GtkMenuShell* menu_shell, gboolean take_focus);
// void gtk_menu_shell_set_take_focus (::GtkMenuShell* menu_shell, gboolean take_focus);
GI_INLINE_DECL void set_take_focus (gboolean take_focus) noexcept;

gi::property_proxy<bool, base::MenuShellBase> property_take_focus()
{ return gi::property_proxy<bool, base::MenuShellBase> (*this, "take-focus"); }
const gi::property_proxy<bool, base::MenuShellBase> property_take_focus() const
{ return gi::property_proxy<bool, base::MenuShellBase> (*this, "take-focus"); }

// signal activate-current
gi::signal_proxy<void(Gtk::MenuShell, gboolean force_hide)> signal_activate_current()
{ return gi::signal_proxy<void(Gtk::MenuShell, gboolean force_hide)> (*this, "activate-current"); }

// signal cancel
gi::signal_proxy<void(Gtk::MenuShell)> signal_cancel()
{ return gi::signal_proxy<void(Gtk::MenuShell)> (*this, "cancel"); }

// signal cycle-focus
gi::signal_proxy<void(Gtk::MenuShell, Gtk::DirectionType direction)> signal_cycle_focus()
{ return gi::signal_proxy<void(Gtk::MenuShell, Gtk::DirectionType direction)> (*this, "cycle-focus"); }

// signal deactivate
gi::signal_proxy<void(Gtk::MenuShell)> signal_deactivate()
{ return gi::signal_proxy<void(Gtk::MenuShell)> (*this, "deactivate"); }

// signal insert
gi::signal_proxy<void(Gtk::MenuShell, Gtk::Widget child, gint position)> signal_insert()
{ return gi::signal_proxy<void(Gtk::MenuShell, Gtk::Widget child, gint position)> (*this, "insert"); }

// signal move-current
gi::signal_proxy<void(Gtk::MenuShell, Gtk::MenuDirectionType direction)> signal_move_current()
{ return gi::signal_proxy<void(Gtk::MenuShell, Gtk::MenuDirectionType direction)> (*this, "move-current"); }

// signal move-selected
gi::signal_proxy<bool(Gtk::MenuShell, gint distance)> signal_move_selected()
{ return gi::signal_proxy<bool(Gtk::MenuShell, gint distance)> (*this, "move-selected"); }

// signal selection-done
gi::signal_proxy<void(Gtk::MenuShell)> signal_selection_done()
{ return gi::signal_proxy<void(Gtk::MenuShell)> (*this, "selection-done"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menushell_extra_def.hpp>)
#include <gtk/menushell_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menushell_extra.hpp>)
#include <gtk/menushell_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MenuShell : public GI_GTK_MENUSHELL_BASE
{ typedef GI_GTK_MENUSHELL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMenuShell>
{ typedef Gtk::MenuShell type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MenuShellClassDef
{
typedef MenuShellClassDef self;
public:
typedef Gtk::MenuShell instance_type;
typedef ::GtkMenuShellClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void MenuShell::activate_current (GtkMenuShell* menu_shell, gboolean force_hide);
// void MenuShell::activate_current (::GtkMenuShell* menu_shell, gboolean force_hide);
virtual void activate_current_ (gboolean force_hide) noexcept = 0;

// void MenuShell::cancel (GtkMenuShell* menu_shell);
// void MenuShell::cancel (::GtkMenuShell* menu_shell);
virtual void cancel_ () noexcept = 0;

// void MenuShell::deactivate (GtkMenuShell* menu_shell);
// void MenuShell::deactivate (::GtkMenuShell* menu_shell);
virtual void deactivate_ () noexcept = 0;

// gint MenuShell::get_popup_delay (GtkMenuShell* menu_shell);
// gint MenuShell::get_popup_delay (::GtkMenuShell* menu_shell);
virtual gint get_popup_delay_ () noexcept = 0;

// void MenuShell::insert (GtkMenuShell* menu_shell, GtkWidget* child, gint position);
// void MenuShell::insert (::GtkMenuShell* menu_shell, ::GtkWidget* child, gint position);
virtual void insert_ (Gtk::Widget child, gint position) noexcept = 0;

// void MenuShell::move_current (GtkMenuShell* menu_shell, GtkMenuDirectionType direction);
// void MenuShell::move_current (::GtkMenuShell* menu_shell, ::GtkMenuDirectionType direction);
virtual void move_current_ (Gtk::MenuDirectionType direction) noexcept = 0;

// gboolean MenuShell::move_selected (GtkMenuShell* menu_shell, gint distance);
// gboolean MenuShell::move_selected (::GtkMenuShell* menu_shell, gint distance);
virtual bool move_selected_ (gint distance) noexcept = 0;

// void MenuShell::select_item (GtkMenuShell* menu_shell, GtkWidget* menu_item);
// void MenuShell::select_item (::GtkMenuShell* menu_shell, ::GtkWidget* menu_item);
virtual void select_item_ (Gtk::Widget menu_item) noexcept = 0;

// void MenuShell::selection_done (GtkMenuShell* menu_shell);
// void MenuShell::selection_done (::GtkMenuShell* menu_shell);
virtual void selection_done_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class MenuShellClass: public detail::ClassTemplate<Gtk::impl::internal::MenuShellClassDef, Gtk::impl::internal::ContainerClass>
{
typedef MenuShellClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MenuShellClassDef, Gtk::impl::internal::ContainerClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void MenuShell::activate_current (GtkMenuShell* menu_shell, gboolean force_hide);
// void MenuShell::activate_current (::GtkMenuShell* menu_shell, gboolean force_hide);
GI_INLINE_DECL void activate_current_ (gboolean force_hide) noexcept override;

// void MenuShell::cancel (GtkMenuShell* menu_shell);
// void MenuShell::cancel (::GtkMenuShell* menu_shell);
GI_INLINE_DECL void cancel_ () noexcept override;

// void MenuShell::deactivate (GtkMenuShell* menu_shell);
// void MenuShell::deactivate (::GtkMenuShell* menu_shell);
GI_INLINE_DECL void deactivate_ () noexcept override;

// gint MenuShell::get_popup_delay (GtkMenuShell* menu_shell);
// gint MenuShell::get_popup_delay (::GtkMenuShell* menu_shell);
GI_INLINE_DECL gint get_popup_delay_ () noexcept override;

// void MenuShell::insert (GtkMenuShell* menu_shell, GtkWidget* child, gint position);
// void MenuShell::insert (::GtkMenuShell* menu_shell, ::GtkWidget* child, gint position);
GI_INLINE_DECL void insert_ (Gtk::Widget child, gint position) noexcept override;

// void MenuShell::move_current (GtkMenuShell* menu_shell, GtkMenuDirectionType direction);
// void MenuShell::move_current (::GtkMenuShell* menu_shell, ::GtkMenuDirectionType direction);
GI_INLINE_DECL void move_current_ (Gtk::MenuDirectionType direction) noexcept override;

// gboolean MenuShell::move_selected (GtkMenuShell* menu_shell, gint distance);
// gboolean MenuShell::move_selected (::GtkMenuShell* menu_shell, gint distance);
GI_INLINE_DECL bool move_selected_ (gint distance) noexcept override;

// void MenuShell::select_item (GtkMenuShell* menu_shell, GtkWidget* menu_item);
// void MenuShell::select_item (::GtkMenuShell* menu_shell, ::GtkWidget* menu_item);
GI_INLINE_DECL void select_item_ (Gtk::Widget menu_item) noexcept override;

// void MenuShell::selection_done (GtkMenuShell* menu_shell);
// void MenuShell::selection_done (::GtkMenuShell* menu_shell);
GI_INLINE_DECL void selection_done_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using MenuShellImpl = detail::ObjectImpl<MenuShell, internal::MenuShellClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
