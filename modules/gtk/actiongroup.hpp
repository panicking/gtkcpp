// AUTO-GENERATED

#ifndef _GI_GTK_ACTIONGROUP_HPP_
#define _GI_GTK_ACTIONGROUP_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class AccelGroup;
class Action;
class Buildable;
class Widget;

class ActionGroup;

namespace base {


#define GI_GTK_ACTIONGROUP_BASE base::ActionGroupBase
class ActionGroupBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkActionGroup BaseObjectType;

ActionGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_action_group_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkActionGroup* gtk_action_group_new (const gchar* name);
// ::GtkActionGroup* gtk_action_group_new (const char* name);
// IGNORE; deprecated

// void gtk_action_group_add_action (GtkActionGroup* action_group, GtkAction* action);
// void gtk_action_group_add_action (::GtkActionGroup* action_group, ::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_group_add_action_with_accel (GtkActionGroup* action_group, GtkAction* action, const gchar* accelerator);
// void gtk_action_group_add_action_with_accel (::GtkActionGroup* action_group, ::GtkAction* action, const char* accelerator);
// IGNORE; deprecated

// void gtk_action_group_add_actions (GtkActionGroup* action_group, guint n_entries, gpointer user_data);
// void gtk_action_group_add_actions (::GtkActionGroup* action_group, guint n_entries, void* user_data);
// IGNORE; deprecated, container element not supported

// void gtk_action_group_add_actions_full (GtkActionGroup* action_group, guint n_entries, gpointer user_data, GDestroyNotify destroy);
// void gtk_action_group_add_actions_full (::GtkActionGroup* action_group, guint n_entries, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; deprecated, container element not supported

// void gtk_action_group_add_radio_actions (GtkActionGroup* action_group, guint n_entries, gint value, GCallback on_change, gpointer user_data);
// void gtk_action_group_add_radio_actions (::GtkActionGroup* action_group, guint n_entries, gint value,  on_change, void* user_data);
// IGNORE; deprecated, container element not supported

// void gtk_action_group_add_radio_actions_full (GtkActionGroup* action_group, guint n_entries, gint value, GCallback on_change, gpointer user_data, GDestroyNotify destroy);
// void gtk_action_group_add_radio_actions_full (::GtkActionGroup* action_group, guint n_entries, gint value,  on_change, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; deprecated, container element not supported

// void gtk_action_group_add_toggle_actions (GtkActionGroup* action_group, guint n_entries, gpointer user_data);
// void gtk_action_group_add_toggle_actions (::GtkActionGroup* action_group, guint n_entries, void* user_data);
// IGNORE; deprecated, container element not supported

// void gtk_action_group_add_toggle_actions_full (GtkActionGroup* action_group, guint n_entries, gpointer user_data, GDestroyNotify destroy);
// void gtk_action_group_add_toggle_actions_full (::GtkActionGroup* action_group, guint n_entries, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; deprecated, container element not supported

// GtkAccelGroup* gtk_action_group_get_accel_group (GtkActionGroup* action_group);
// ::GtkAccelGroup* gtk_action_group_get_accel_group (::GtkActionGroup* action_group);
// IGNORE; deprecated

// GtkAction* gtk_action_group_get_action (GtkActionGroup* action_group, const gchar* action_name);
// ::GtkAction* gtk_action_group_get_action (::GtkActionGroup* action_group, const char* action_name);
// IGNORE; deprecated

// const gchar* gtk_action_group_get_name (GtkActionGroup* action_group);
// const char* gtk_action_group_get_name (::GtkActionGroup* action_group);
// IGNORE; deprecated

// gboolean gtk_action_group_get_sensitive (GtkActionGroup* action_group);
// gboolean gtk_action_group_get_sensitive (::GtkActionGroup* action_group);
// IGNORE; deprecated

// gboolean gtk_action_group_get_visible (GtkActionGroup* action_group);
// gboolean gtk_action_group_get_visible (::GtkActionGroup* action_group);
// IGNORE; deprecated

// GList* gtk_action_group_list_actions (GtkActionGroup* action_group);
// ::GList* gtk_action_group_list_actions (::GtkActionGroup* action_group);
// IGNORE; deprecated

// void gtk_action_group_remove_action (GtkActionGroup* action_group, GtkAction* action);
// void gtk_action_group_remove_action (::GtkActionGroup* action_group, ::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_group_set_accel_group (GtkActionGroup* action_group, GtkAccelGroup* accel_group);
// void gtk_action_group_set_accel_group (::GtkActionGroup* action_group, ::GtkAccelGroup* accel_group);
// IGNORE; deprecated

// void gtk_action_group_set_sensitive (GtkActionGroup* action_group, gboolean sensitive);
// void gtk_action_group_set_sensitive (::GtkActionGroup* action_group, gboolean sensitive);
// IGNORE; deprecated

// void gtk_action_group_set_translate_func (GtkActionGroup* action_group, GtkTranslateFunc func, gpointer data, GDestroyNotify notify);
// void gtk_action_group_set_translate_func (::GtkActionGroup* action_group,  func, void* data, GLib::DestroyNotify::cfunction_type notify);
// IGNORE; deprecated

// void gtk_action_group_set_translation_domain (GtkActionGroup* action_group, const gchar* domain);
// void gtk_action_group_set_translation_domain (::GtkActionGroup* action_group, const char* domain);
// IGNORE; deprecated

// void gtk_action_group_set_visible (GtkActionGroup* action_group, gboolean visible);
// void gtk_action_group_set_visible (::GtkActionGroup* action_group, gboolean visible);
// IGNORE; deprecated

// const gchar* gtk_action_group_translate_string (GtkActionGroup* action_group, const gchar* string);
// const char* gtk_action_group_translate_string (::GtkActionGroup* action_group, const char* string);
// IGNORE; deprecated

gi::property_proxy<Gtk::AccelGroup, base::ActionGroupBase> property_accel_group()
{ return gi::property_proxy<Gtk::AccelGroup, base::ActionGroupBase> (*this, "accel-group"); }
const gi::property_proxy<Gtk::AccelGroup, base::ActionGroupBase> property_accel_group() const
{ return gi::property_proxy<Gtk::AccelGroup, base::ActionGroupBase> (*this, "accel-group"); }

gi::property_proxy<std::string, base::ActionGroupBase> property_name()
{ return gi::property_proxy<std::string, base::ActionGroupBase> (*this, "name"); }
const gi::property_proxy<std::string, base::ActionGroupBase> property_name() const
{ return gi::property_proxy<std::string, base::ActionGroupBase> (*this, "name"); }

gi::property_proxy<bool, base::ActionGroupBase> property_sensitive()
{ return gi::property_proxy<bool, base::ActionGroupBase> (*this, "sensitive"); }
const gi::property_proxy<bool, base::ActionGroupBase> property_sensitive() const
{ return gi::property_proxy<bool, base::ActionGroupBase> (*this, "sensitive"); }

gi::property_proxy<bool, base::ActionGroupBase> property_visible()
{ return gi::property_proxy<bool, base::ActionGroupBase> (*this, "visible"); }
const gi::property_proxy<bool, base::ActionGroupBase> property_visible() const
{ return gi::property_proxy<bool, base::ActionGroupBase> (*this, "visible"); }

// signal connect-proxy
// IGNORE; deprecated

// signal disconnect-proxy
// IGNORE; deprecated

// signal post-activate
// IGNORE; deprecated

// signal pre-activate
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/actiongroup_extra_def.hpp>)
#include <gtk/actiongroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/actiongroup_extra.hpp>)
#include <gtk/actiongroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ActionGroup : public GI_GTK_ACTIONGROUP_BASE
{ typedef GI_GTK_ACTIONGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkActionGroup>
{ typedef Gtk::ActionGroup type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ActionGroupClassDef
{
typedef ActionGroupClassDef self;
public:
typedef Gtk::ActionGroup instance_type;
typedef ::GtkActionGroupClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GtkAction* ActionGroup::get_action (GtkActionGroup* action_group, const gchar* action_name);
// ::GtkAction* ActionGroup::get_action (::GtkActionGroup* action_group, const char* action_name);
// IGNORE; deprecated


};

GI_CLASS_IMPL_BEGIN


class ActionGroupClass: public detail::ClassTemplate<Gtk::impl::internal::ActionGroupClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl>
{
typedef ActionGroupClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ActionGroupClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;


// GtkAction* ActionGroup::get_action (GtkActionGroup* action_group, const gchar* action_name);
// ::GtkAction* ActionGroup::get_action (::GtkActionGroup* action_group, const char* action_name);
// IGNORE; deprecated


};

} // namespace internal

GI_CLASS_IMPL_END

using ActionGroupImpl = detail::ObjectImpl<ActionGroup, internal::ActionGroupClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
