// AUTO-GENERATED

#ifndef _GI_GTK_ACTION_HPP_
#define _GI_GTK_ACTION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class AccelGroup;
class ActionGroup;
class Buildable;
class Widget;

class Action;

namespace base {


#define GI_GTK_ACTION_BASE base::ActionBase
class ActionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkAction BaseObjectType;

ActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_action_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkAction* gtk_action_new (const gchar* name, const gchar* label, const gchar* tooltip, const gchar* stock_id);
// ::GtkAction* gtk_action_new (const char* name, const char* label, const char* tooltip, const char* stock_id);
// IGNORE; deprecated

// void gtk_action_activate (GtkAction* action);
// void gtk_action_activate (::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_block_activate (GtkAction* action);
// void gtk_action_block_activate (::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_connect_accelerator (GtkAction* action);
// void gtk_action_connect_accelerator (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* gtk_action_create_icon (GtkAction* action, GtkIconSize icon_size);
// ::GtkWidget* gtk_action_create_icon (::GtkAction* action, gint icon_size);
// IGNORE; deprecated

// GtkWidget* gtk_action_create_menu (GtkAction* action);
// ::GtkWidget* gtk_action_create_menu (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* gtk_action_create_menu_item (GtkAction* action);
// ::GtkWidget* gtk_action_create_menu_item (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* gtk_action_create_tool_item (GtkAction* action);
// ::GtkWidget* gtk_action_create_tool_item (::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_disconnect_accelerator (GtkAction* action);
// void gtk_action_disconnect_accelerator (::GtkAction* action);
// IGNORE; deprecated

// GClosure* gtk_action_get_accel_closure (GtkAction* action);
// ::GClosure* gtk_action_get_accel_closure (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_accel_path (GtkAction* action);
// const char* gtk_action_get_accel_path (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_always_show_image (GtkAction* action);
// gboolean gtk_action_get_always_show_image (::GtkAction* action);
// IGNORE; deprecated

// GIcon* gtk_action_get_gicon (GtkAction* action);
// ::GIcon* gtk_action_get_gicon (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_icon_name (GtkAction* action);
// const char* gtk_action_get_icon_name (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_is_important (GtkAction* action);
// gboolean gtk_action_get_is_important (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_label (GtkAction* action);
// const char* gtk_action_get_label (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_name (GtkAction* action);
// const char* gtk_action_get_name (::GtkAction* action);
// IGNORE; deprecated

// GSList* gtk_action_get_proxies (GtkAction* action);
// ::GSList* gtk_action_get_proxies (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_sensitive (GtkAction* action);
// gboolean gtk_action_get_sensitive (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_short_label (GtkAction* action);
// const char* gtk_action_get_short_label (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_stock_id (GtkAction* action);
// const char* gtk_action_get_stock_id (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_tooltip (GtkAction* action);
// const char* gtk_action_get_tooltip (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_visible (GtkAction* action);
// gboolean gtk_action_get_visible (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_visible_horizontal (GtkAction* action);
// gboolean gtk_action_get_visible_horizontal (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_visible_vertical (GtkAction* action);
// gboolean gtk_action_get_visible_vertical (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_is_sensitive (GtkAction* action);
// gboolean gtk_action_is_sensitive (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_is_visible (GtkAction* action);
// gboolean gtk_action_is_visible (::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_set_accel_group (GtkAction* action, GtkAccelGroup* accel_group);
// void gtk_action_set_accel_group (::GtkAction* action, ::GtkAccelGroup* accel_group);
// IGNORE; deprecated

// void gtk_action_set_accel_path (GtkAction* action, const gchar* accel_path);
// void gtk_action_set_accel_path (::GtkAction* action, const char* accel_path);
// IGNORE; deprecated

// void gtk_action_set_always_show_image (GtkAction* action, gboolean always_show);
// void gtk_action_set_always_show_image (::GtkAction* action, gboolean always_show);
// IGNORE; deprecated

// void gtk_action_set_gicon (GtkAction* action, GIcon* icon);
// void gtk_action_set_gicon (::GtkAction* action, ::GIcon* icon);
// IGNORE; deprecated

// void gtk_action_set_icon_name (GtkAction* action, const gchar* icon_name);
// void gtk_action_set_icon_name (::GtkAction* action, const char* icon_name);
// IGNORE; deprecated

// void gtk_action_set_is_important (GtkAction* action, gboolean is_important);
// void gtk_action_set_is_important (::GtkAction* action, gboolean is_important);
// IGNORE; deprecated

// void gtk_action_set_label (GtkAction* action, const gchar* label);
// void gtk_action_set_label (::GtkAction* action, const char* label);
// IGNORE; deprecated

// void gtk_action_set_sensitive (GtkAction* action, gboolean sensitive);
// void gtk_action_set_sensitive (::GtkAction* action, gboolean sensitive);
// IGNORE; deprecated

// void gtk_action_set_short_label (GtkAction* action, const gchar* short_label);
// void gtk_action_set_short_label (::GtkAction* action, const char* short_label);
// IGNORE; deprecated

// void gtk_action_set_stock_id (GtkAction* action, const gchar* stock_id);
// void gtk_action_set_stock_id (::GtkAction* action, const char* stock_id);
// IGNORE; deprecated

// void gtk_action_set_tooltip (GtkAction* action, const gchar* tooltip);
// void gtk_action_set_tooltip (::GtkAction* action, const char* tooltip);
// IGNORE; deprecated

// void gtk_action_set_visible (GtkAction* action, gboolean visible);
// void gtk_action_set_visible (::GtkAction* action, gboolean visible);
// IGNORE; deprecated

// void gtk_action_set_visible_horizontal (GtkAction* action, gboolean visible_horizontal);
// void gtk_action_set_visible_horizontal (::GtkAction* action, gboolean visible_horizontal);
// IGNORE; deprecated

// void gtk_action_set_visible_vertical (GtkAction* action, gboolean visible_vertical);
// void gtk_action_set_visible_vertical (::GtkAction* action, gboolean visible_vertical);
// IGNORE; deprecated

// void gtk_action_unblock_activate (GtkAction* action);
// void gtk_action_unblock_activate (::GtkAction* action);
// IGNORE; deprecated

gi::property_proxy<Gtk::ActionGroup, base::ActionBase> property_action_group()
{ return gi::property_proxy<Gtk::ActionGroup, base::ActionBase> (*this, "action-group"); }
const gi::property_proxy<Gtk::ActionGroup, base::ActionBase> property_action_group() const
{ return gi::property_proxy<Gtk::ActionGroup, base::ActionBase> (*this, "action-group"); }

gi::property_proxy<bool, base::ActionBase> property_always_show_image()
{ return gi::property_proxy<bool, base::ActionBase> (*this, "always-show-image"); }
const gi::property_proxy<bool, base::ActionBase> property_always_show_image() const
{ return gi::property_proxy<bool, base::ActionBase> (*this, "always-show-image"); }

gi::property_proxy<Gio::Icon, base::ActionBase> property_gicon()
{ return gi::property_proxy<Gio::Icon, base::ActionBase> (*this, "gicon"); }
const gi::property_proxy<Gio::Icon, base::ActionBase> property_gicon() const
{ return gi::property_proxy<Gio::Icon, base::ActionBase> (*this, "gicon"); }

gi::property_proxy<bool, base::ActionBase> property_hide_if_empty()
{ return gi::property_proxy<bool, base::ActionBase> (*this, "hide-if-empty"); }
const gi::property_proxy<bool, base::ActionBase> property_hide_if_empty() const
{ return gi::property_proxy<bool, base::ActionBase> (*this, "hide-if-empty"); }

gi::property_proxy<std::string, base::ActionBase> property_icon_name()
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "icon-name"); }
const gi::property_proxy<std::string, base::ActionBase> property_icon_name() const
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "icon-name"); }

gi::property_proxy<bool, base::ActionBase> property_is_important()
{ return gi::property_proxy<bool, base::ActionBase> (*this, "is-important"); }
const gi::property_proxy<bool, base::ActionBase> property_is_important() const
{ return gi::property_proxy<bool, base::ActionBase> (*this, "is-important"); }

gi::property_proxy<std::string, base::ActionBase> property_label()
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "label"); }
const gi::property_proxy<std::string, base::ActionBase> property_label() const
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "label"); }

gi::property_proxy<std::string, base::ActionBase> property_name()
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "name"); }
const gi::property_proxy<std::string, base::ActionBase> property_name() const
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "name"); }

gi::property_proxy<bool, base::ActionBase> property_sensitive()
{ return gi::property_proxy<bool, base::ActionBase> (*this, "sensitive"); }
const gi::property_proxy<bool, base::ActionBase> property_sensitive() const
{ return gi::property_proxy<bool, base::ActionBase> (*this, "sensitive"); }

gi::property_proxy<std::string, base::ActionBase> property_short_label()
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "short-label"); }
const gi::property_proxy<std::string, base::ActionBase> property_short_label() const
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "short-label"); }

gi::property_proxy<std::string, base::ActionBase> property_stock_id()
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "stock-id"); }
const gi::property_proxy<std::string, base::ActionBase> property_stock_id() const
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "stock-id"); }

gi::property_proxy<std::string, base::ActionBase> property_tooltip()
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "tooltip"); }
const gi::property_proxy<std::string, base::ActionBase> property_tooltip() const
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "tooltip"); }

gi::property_proxy<bool, base::ActionBase> property_visible()
{ return gi::property_proxy<bool, base::ActionBase> (*this, "visible"); }
const gi::property_proxy<bool, base::ActionBase> property_visible() const
{ return gi::property_proxy<bool, base::ActionBase> (*this, "visible"); }

gi::property_proxy<bool, base::ActionBase> property_visible_horizontal()
{ return gi::property_proxy<bool, base::ActionBase> (*this, "visible-horizontal"); }
const gi::property_proxy<bool, base::ActionBase> property_visible_horizontal() const
{ return gi::property_proxy<bool, base::ActionBase> (*this, "visible-horizontal"); }

gi::property_proxy<bool, base::ActionBase> property_visible_overflown()
{ return gi::property_proxy<bool, base::ActionBase> (*this, "visible-overflown"); }
const gi::property_proxy<bool, base::ActionBase> property_visible_overflown() const
{ return gi::property_proxy<bool, base::ActionBase> (*this, "visible-overflown"); }

gi::property_proxy<bool, base::ActionBase> property_visible_vertical()
{ return gi::property_proxy<bool, base::ActionBase> (*this, "visible-vertical"); }
const gi::property_proxy<bool, base::ActionBase> property_visible_vertical() const
{ return gi::property_proxy<bool, base::ActionBase> (*this, "visible-vertical"); }

// signal activate
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/action_extra_def.hpp>)
#include <gtk/action_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/action_extra.hpp>)
#include <gtk/action_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Action : public GI_GTK_ACTION_BASE
{ typedef GI_GTK_ACTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAction>
{ typedef Gtk::Action type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ActionClassDef
{
typedef ActionClassDef self;
public:
typedef Gtk::Action instance_type;
typedef ::GtkActionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Action::activate (GtkAction* action);
// void Action::activate (::GtkAction* action);
// IGNORE; deprecated

// void Action::connect_proxy (GtkAction* action, GtkWidget* proxy);
// void Action::connect_proxy (::GtkAction* action, ::GtkWidget* proxy);
virtual void connect_proxy_ (Gtk::Widget proxy) noexcept = 0;

// GtkWidget* Action::create_menu (GtkAction* action);
// ::GtkWidget* Action::create_menu (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* Action::create_menu_item (GtkAction* action);
// ::GtkWidget* Action::create_menu_item (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* Action::create_tool_item (GtkAction* action);
// ::GtkWidget* Action::create_tool_item (::GtkAction* action);
// IGNORE; deprecated

// void Action::disconnect_proxy (GtkAction* action, GtkWidget* proxy);
// void Action::disconnect_proxy (::GtkAction* action, ::GtkWidget* proxy);
virtual void disconnect_proxy_ (Gtk::Widget proxy) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ActionClass: public detail::ClassTemplate<Gtk::impl::internal::ActionClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl>
{
typedef ActionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ActionClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;


// void Action::activate (GtkAction* action);
// void Action::activate (::GtkAction* action);
// IGNORE; deprecated

// void Action::connect_proxy (GtkAction* action, GtkWidget* proxy);
// void Action::connect_proxy (::GtkAction* action, ::GtkWidget* proxy);
GI_INLINE_DECL void connect_proxy_ (Gtk::Widget proxy) noexcept override;

// GtkWidget* Action::create_menu (GtkAction* action);
// ::GtkWidget* Action::create_menu (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* Action::create_menu_item (GtkAction* action);
// ::GtkWidget* Action::create_menu_item (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* Action::create_tool_item (GtkAction* action);
// ::GtkWidget* Action::create_tool_item (::GtkAction* action);
// IGNORE; deprecated

// void Action::disconnect_proxy (GtkAction* action, GtkWidget* proxy);
// void Action::disconnect_proxy (::GtkAction* action, ::GtkWidget* proxy);
GI_INLINE_DECL void disconnect_proxy_ (Gtk::Widget proxy) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ActionImpl = detail::ObjectImpl<Action, internal::ActionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
