// AUTO-GENERATED

#ifndef _GI_GTK_MENU_HPP_
#define _GI_GTK_MENU_HPP_

#include "menushell.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AccelGroup;
class Widget;

class Menu;

namespace base {


#define GI_GTK_MENU_BASE base::MenuBase
class MenuBase : public Gtk::MenuShell
{
typedef Gtk::MenuShell super_type;
public:
typedef ::GtkMenu BaseObjectType;

MenuBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_menu_get_type(); } 

// GtkWidget* gtk_menu_new ();
// ::GtkMenu* gtk_menu_new ();
static GI_INLINE_DECL Gtk::Menu new_ () noexcept;

// GtkWidget* gtk_menu_new_from_model (GMenuModel* model);
// ::GtkMenu* gtk_menu_new_from_model (::GMenuModel* model);
static GI_INLINE_DECL Gtk::Menu new_from_model (Gio::MenuModel model) noexcept;

// GList* gtk_menu_get_for_attach_widget (GtkWidget* widget);
// ::GList* gtk_menu_get_for_attach_widget (::GtkWidget* widget);
static GI_INLINE_DECL std::vector<Gtk::Widget> get_for_attach_widget (Gtk::Widget widget) noexcept;

// void gtk_menu_attach (GtkMenu* menu, GtkWidget* child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach);
// void gtk_menu_attach (::GtkMenu* menu, ::GtkWidget* child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach);
GI_INLINE_DECL void attach (Gtk::Widget child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach) noexcept;

// void gtk_menu_attach_to_widget (GtkMenu* menu, GtkWidget* attach_widget, GtkMenuDetachFunc detacher);
// void gtk_menu_attach_to_widget (::GtkMenu* menu, ::GtkWidget* attach_widget,  detacher);
// SKIP; detacher type  not supported

// void gtk_menu_detach (GtkMenu* menu);
// void gtk_menu_detach (::GtkMenu* menu);
GI_INLINE_DECL void detach () noexcept;

// GtkAccelGroup* gtk_menu_get_accel_group (GtkMenu* menu);
// ::GtkAccelGroup* gtk_menu_get_accel_group (::GtkMenu* menu);
GI_INLINE_DECL Gtk::AccelGroup get_accel_group () noexcept;

// const gchar* gtk_menu_get_accel_path (GtkMenu* menu);
// const char* gtk_menu_get_accel_path (::GtkMenu* menu);
GI_INLINE_DECL std::string get_accel_path () noexcept;

// GtkWidget* gtk_menu_get_active (GtkMenu* menu);
// ::GtkWidget* gtk_menu_get_active (::GtkMenu* menu);
GI_INLINE_DECL Gtk::Widget get_active () noexcept;

// GtkWidget* gtk_menu_get_attach_widget (GtkMenu* menu);
// ::GtkWidget* gtk_menu_get_attach_widget (::GtkMenu* menu);
GI_INLINE_DECL Gtk::Widget get_attach_widget () noexcept;

// gint gtk_menu_get_monitor (GtkMenu* menu);
// gint gtk_menu_get_monitor (::GtkMenu* menu);
GI_INLINE_DECL gint get_monitor () noexcept;

// gboolean gtk_menu_get_reserve_toggle_size (GtkMenu* menu);
// gboolean gtk_menu_get_reserve_toggle_size (::GtkMenu* menu);
GI_INLINE_DECL bool get_reserve_toggle_size () noexcept;

// gboolean gtk_menu_get_tearoff_state (GtkMenu* menu);
// gboolean gtk_menu_get_tearoff_state (::GtkMenu* menu);
// IGNORE; deprecated

// const gchar* gtk_menu_get_title (GtkMenu* menu);
// const char* gtk_menu_get_title (::GtkMenu* menu);
// IGNORE; deprecated

// void gtk_menu_place_on_monitor (GtkMenu* menu, GdkMonitor* monitor);
// void gtk_menu_place_on_monitor (::GtkMenu* menu, ::GdkMonitor* monitor);
GI_INLINE_DECL void place_on_monitor (Gdk::Monitor monitor) noexcept;

// void gtk_menu_popdown (GtkMenu* menu);
// void gtk_menu_popdown (::GtkMenu* menu);
GI_INLINE_DECL void popdown () noexcept;

// void gtk_menu_popup (GtkMenu* menu, GtkWidget* parent_menu_shell, GtkWidget* parent_menu_item, GtkMenuPositionFunc func, gpointer data, guint button, guint32 activate_time);
// void gtk_menu_popup (::GtkMenu* menu, ::GtkWidget* parent_menu_shell, ::GtkWidget* parent_menu_item,  func, void* data, guint button, guint32 activate_time);
// IGNORE; deprecated

// void gtk_menu_popup_at_pointer (GtkMenu* menu, const GdkEvent* trigger_event);
// void gtk_menu_popup_at_pointer (::GtkMenu* menu, const  trigger_event);
// SKIP; trigger_event type  not supported

// void gtk_menu_popup_at_rect (GtkMenu* menu, GdkWindow* rect_window, const GdkRectangle* rect, GdkGravity rect_anchor, GdkGravity menu_anchor, const GdkEvent* trigger_event);
// void gtk_menu_popup_at_rect (::GtkMenu* menu, ::GdkWindow* rect_window, const ::GdkRectangle* rect, ::GdkGravity rect_anchor, ::GdkGravity menu_anchor, const  trigger_event);
// SKIP; trigger_event type  not supported

// void gtk_menu_popup_at_widget (GtkMenu* menu, GtkWidget* widget, GdkGravity widget_anchor, GdkGravity menu_anchor, const GdkEvent* trigger_event);
// void gtk_menu_popup_at_widget (::GtkMenu* menu, ::GtkWidget* widget, ::GdkGravity widget_anchor, ::GdkGravity menu_anchor, const  trigger_event);
// SKIP; trigger_event type  not supported

// void gtk_menu_popup_for_device (GtkMenu* menu, GdkDevice* device, GtkWidget* parent_menu_shell, GtkWidget* parent_menu_item, GtkMenuPositionFunc func, gpointer data, GDestroyNotify destroy, guint button, guint32 activate_time);
// void gtk_menu_popup_for_device (::GtkMenu* menu, ::GdkDevice* device, ::GtkWidget* parent_menu_shell, ::GtkWidget* parent_menu_item,  func, void* data, GLib::DestroyNotify::cfunction_type destroy, guint button, guint32 activate_time);
// IGNORE; deprecated

// void gtk_menu_reorder_child (GtkMenu* menu, GtkWidget* child, gint position);
// void gtk_menu_reorder_child (::GtkMenu* menu, ::GtkWidget* child, gint position);
GI_INLINE_DECL void reorder_child (Gtk::Widget child, gint position) noexcept;

// void gtk_menu_reposition (GtkMenu* menu);
// void gtk_menu_reposition (::GtkMenu* menu);
GI_INLINE_DECL void reposition () noexcept;

// void gtk_menu_set_accel_group (GtkMenu* menu, GtkAccelGroup* accel_group);
// void gtk_menu_set_accel_group (::GtkMenu* menu, ::GtkAccelGroup* accel_group);
GI_INLINE_DECL void set_accel_group (Gtk::AccelGroup accel_group) noexcept;
GI_INLINE_DECL void set_accel_group () noexcept;

// void gtk_menu_set_accel_path (GtkMenu* menu, const gchar* accel_path);
// void gtk_menu_set_accel_path (::GtkMenu* menu, const char* accel_path);
GI_INLINE_DECL void set_accel_path (const std::string & accel_path) noexcept;
GI_INLINE_DECL void set_accel_path () noexcept;

// void gtk_menu_set_active (GtkMenu* menu, guint index);
// void gtk_menu_set_active (::GtkMenu* menu, guint index);
GI_INLINE_DECL void set_active (guint index) noexcept;

// void gtk_menu_set_monitor (GtkMenu* menu, gint monitor_num);
// void gtk_menu_set_monitor (::GtkMenu* menu, gint monitor_num);
GI_INLINE_DECL void set_monitor (gint monitor_num) noexcept;

// void gtk_menu_set_reserve_toggle_size (GtkMenu* menu, gboolean reserve_toggle_size);
// void gtk_menu_set_reserve_toggle_size (::GtkMenu* menu, gboolean reserve_toggle_size);
GI_INLINE_DECL void set_reserve_toggle_size (gboolean reserve_toggle_size) noexcept;

// void gtk_menu_set_screen (GtkMenu* menu, GdkScreen* screen);
// void gtk_menu_set_screen (::GtkMenu* menu, ::GdkScreen* screen);
GI_INLINE_DECL void set_screen (Gdk::Screen screen) noexcept;
GI_INLINE_DECL void set_screen () noexcept;

// void gtk_menu_set_tearoff_state (GtkMenu* menu, gboolean torn_off);
// void gtk_menu_set_tearoff_state (::GtkMenu* menu, gboolean torn_off);
// IGNORE; deprecated

// void gtk_menu_set_title (GtkMenu* menu, const gchar* title);
// void gtk_menu_set_title (::GtkMenu* menu, const char* title);
// IGNORE; deprecated

gi::property_proxy<Gtk::AccelGroup, base::MenuBase> property_accel_group()
{ return gi::property_proxy<Gtk::AccelGroup, base::MenuBase> (*this, "accel-group"); }
const gi::property_proxy<Gtk::AccelGroup, base::MenuBase> property_accel_group() const
{ return gi::property_proxy<Gtk::AccelGroup, base::MenuBase> (*this, "accel-group"); }

gi::property_proxy<std::string, base::MenuBase> property_accel_path()
{ return gi::property_proxy<std::string, base::MenuBase> (*this, "accel-path"); }
const gi::property_proxy<std::string, base::MenuBase> property_accel_path() const
{ return gi::property_proxy<std::string, base::MenuBase> (*this, "accel-path"); }

gi::property_proxy<gint, base::MenuBase> property_active()
{ return gi::property_proxy<gint, base::MenuBase> (*this, "active"); }
const gi::property_proxy<gint, base::MenuBase> property_active() const
{ return gi::property_proxy<gint, base::MenuBase> (*this, "active"); }

gi::property_proxy<Gdk::AnchorHints, base::MenuBase> property_anchor_hints()
{ return gi::property_proxy<Gdk::AnchorHints, base::MenuBase> (*this, "anchor-hints"); }
const gi::property_proxy<Gdk::AnchorHints, base::MenuBase> property_anchor_hints() const
{ return gi::property_proxy<Gdk::AnchorHints, base::MenuBase> (*this, "anchor-hints"); }

gi::property_proxy<Gtk::Widget, base::MenuBase> property_attach_widget()
{ return gi::property_proxy<Gtk::Widget, base::MenuBase> (*this, "attach-widget"); }
const gi::property_proxy<Gtk::Widget, base::MenuBase> property_attach_widget() const
{ return gi::property_proxy<Gtk::Widget, base::MenuBase> (*this, "attach-widget"); }

gi::property_proxy<Gdk::WindowTypeHint, base::MenuBase> property_menu_type_hint()
{ return gi::property_proxy<Gdk::WindowTypeHint, base::MenuBase> (*this, "menu-type-hint"); }
const gi::property_proxy<Gdk::WindowTypeHint, base::MenuBase> property_menu_type_hint() const
{ return gi::property_proxy<Gdk::WindowTypeHint, base::MenuBase> (*this, "menu-type-hint"); }

gi::property_proxy<gint, base::MenuBase> property_monitor()
{ return gi::property_proxy<gint, base::MenuBase> (*this, "monitor"); }
const gi::property_proxy<gint, base::MenuBase> property_monitor() const
{ return gi::property_proxy<gint, base::MenuBase> (*this, "monitor"); }

gi::property_proxy<gint, base::MenuBase> property_rect_anchor_dx()
{ return gi::property_proxy<gint, base::MenuBase> (*this, "rect-anchor-dx"); }
const gi::property_proxy<gint, base::MenuBase> property_rect_anchor_dx() const
{ return gi::property_proxy<gint, base::MenuBase> (*this, "rect-anchor-dx"); }

gi::property_proxy<gint, base::MenuBase> property_rect_anchor_dy()
{ return gi::property_proxy<gint, base::MenuBase> (*this, "rect-anchor-dy"); }
const gi::property_proxy<gint, base::MenuBase> property_rect_anchor_dy() const
{ return gi::property_proxy<gint, base::MenuBase> (*this, "rect-anchor-dy"); }

gi::property_proxy<bool, base::MenuBase> property_reserve_toggle_size()
{ return gi::property_proxy<bool, base::MenuBase> (*this, "reserve-toggle-size"); }
const gi::property_proxy<bool, base::MenuBase> property_reserve_toggle_size() const
{ return gi::property_proxy<bool, base::MenuBase> (*this, "reserve-toggle-size"); }

gi::property_proxy<bool, base::MenuBase> property_tearoff_state()
{ return gi::property_proxy<bool, base::MenuBase> (*this, "tearoff-state"); }
const gi::property_proxy<bool, base::MenuBase> property_tearoff_state() const
{ return gi::property_proxy<bool, base::MenuBase> (*this, "tearoff-state"); }

gi::property_proxy<std::string, base::MenuBase> property_tearoff_title()
{ return gi::property_proxy<std::string, base::MenuBase> (*this, "tearoff-title"); }
const gi::property_proxy<std::string, base::MenuBase> property_tearoff_title() const
{ return gi::property_proxy<std::string, base::MenuBase> (*this, "tearoff-title"); }

// signal move-scroll
gi::signal_proxy<void(Gtk::Menu, Gtk::ScrollType scroll_type)> signal_move_scroll()
{ return gi::signal_proxy<void(Gtk::Menu, Gtk::ScrollType scroll_type)> (*this, "move-scroll"); }

// signal popped-up
gi::signal_proxy<void(Gtk::Menu, void* flipped_rect, void* final_rect, gboolean flipped_x, gboolean flipped_y)> signal_popped_up()
{ return gi::signal_proxy<void(Gtk::Menu, void* flipped_rect, void* final_rect, gboolean flipped_x, gboolean flipped_y)> (*this, "popped-up"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menu_extra_def.hpp>)
#include <gtk/menu_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menu_extra.hpp>)
#include <gtk/menu_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Menu : public GI_GTK_MENU_BASE
{ typedef GI_GTK_MENU_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMenu>
{ typedef Gtk::Menu type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MenuClassDef
{
typedef MenuClassDef self;
public:
typedef Gtk::Menu instance_type;
typedef ::GtkMenuClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MenuClass: public detail::ClassTemplate<Gtk::impl::internal::MenuClassDef, Gtk::impl::internal::MenuShellClass>
{
typedef MenuClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MenuClassDef, Gtk::impl::internal::MenuShellClass> super;

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

using MenuImpl = detail::ObjectImpl<Menu, internal::MenuClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
