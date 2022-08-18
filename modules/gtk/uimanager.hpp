// AUTO-GENERATED

#ifndef _GI_GTK_UIMANAGER_HPP_
#define _GI_GTK_UIMANAGER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class AccelGroup;
class Action;
class ActionGroup;
class Buildable;
class Widget;

class UIManager;

namespace base {


#define GI_GTK_UIMANAGER_BASE base::UIManagerBase
class UIManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkUIManager BaseObjectType;

UIManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_ui_manager_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkUIManager* gtk_ui_manager_new ();
// ::GtkUIManager* gtk_ui_manager_new ();
// IGNORE; deprecated

// void gtk_ui_manager_add_ui (GtkUIManager* manager, guint merge_id, const gchar* path, const gchar* name, const gchar* action, GtkUIManagerItemType type, gboolean top);
// void gtk_ui_manager_add_ui (::GtkUIManager* manager, guint merge_id, const char* path, const char* name, const char* action,  type, gboolean top);
// IGNORE; deprecated

// guint gtk_ui_manager_add_ui_from_file (GtkUIManager* manager, const gchar* filename, GError ** error);
// guint gtk_ui_manager_add_ui_from_file (::GtkUIManager* manager, const char* filename, GError ** error);
// IGNORE; deprecated

// guint gtk_ui_manager_add_ui_from_resource (GtkUIManager* manager, const gchar* resource_path, GError ** error);
// guint gtk_ui_manager_add_ui_from_resource (::GtkUIManager* manager, const char* resource_path, GError ** error);
// IGNORE; deprecated

// guint gtk_ui_manager_add_ui_from_string (GtkUIManager* manager, const gchar* buffer, gssize length, GError ** error);
// guint gtk_ui_manager_add_ui_from_string (::GtkUIManager* manager, const char* buffer, gssize length, GError ** error);
// IGNORE; deprecated

// void gtk_ui_manager_ensure_update (GtkUIManager* manager);
// void gtk_ui_manager_ensure_update (::GtkUIManager* manager);
// IGNORE; deprecated

// GtkAccelGroup* gtk_ui_manager_get_accel_group (GtkUIManager* manager);
// ::GtkAccelGroup* gtk_ui_manager_get_accel_group (::GtkUIManager* manager);
// IGNORE; deprecated

// GtkAction* gtk_ui_manager_get_action (GtkUIManager* manager, const gchar* path);
// ::GtkAction* gtk_ui_manager_get_action (::GtkUIManager* manager, const char* path);
// IGNORE; deprecated

// GList* gtk_ui_manager_get_action_groups (GtkUIManager* manager);
// ::GList* gtk_ui_manager_get_action_groups (::GtkUIManager* manager);
// IGNORE; deprecated

// gboolean gtk_ui_manager_get_add_tearoffs (GtkUIManager* manager);
// gboolean gtk_ui_manager_get_add_tearoffs (::GtkUIManager* manager);
// IGNORE; deprecated

// GSList* gtk_ui_manager_get_toplevels (GtkUIManager* manager, GtkUIManagerItemType types);
// ::GSList* gtk_ui_manager_get_toplevels (::GtkUIManager* manager,  types);
// IGNORE; deprecated

// gchar* gtk_ui_manager_get_ui (GtkUIManager* manager);
// char* gtk_ui_manager_get_ui (::GtkUIManager* manager);
// IGNORE; deprecated

// GtkWidget* gtk_ui_manager_get_widget (GtkUIManager* manager, const gchar* path);
// ::GtkWidget* gtk_ui_manager_get_widget (::GtkUIManager* manager, const char* path);
// IGNORE; deprecated

// void gtk_ui_manager_insert_action_group (GtkUIManager* manager, GtkActionGroup* action_group, gint pos);
// void gtk_ui_manager_insert_action_group (::GtkUIManager* manager, ::GtkActionGroup* action_group, gint pos);
// IGNORE; deprecated

// guint gtk_ui_manager_new_merge_id (GtkUIManager* manager);
// guint gtk_ui_manager_new_merge_id (::GtkUIManager* manager);
// IGNORE; deprecated

// void gtk_ui_manager_remove_action_group (GtkUIManager* manager, GtkActionGroup* action_group);
// void gtk_ui_manager_remove_action_group (::GtkUIManager* manager, ::GtkActionGroup* action_group);
// IGNORE; deprecated

// void gtk_ui_manager_remove_ui (GtkUIManager* manager, guint merge_id);
// void gtk_ui_manager_remove_ui (::GtkUIManager* manager, guint merge_id);
// IGNORE; deprecated

// void gtk_ui_manager_set_add_tearoffs (GtkUIManager* manager, gboolean add_tearoffs);
// void gtk_ui_manager_set_add_tearoffs (::GtkUIManager* manager, gboolean add_tearoffs);
// IGNORE; deprecated

gi::property_proxy<bool, base::UIManagerBase> property_add_tearoffs()
{ return gi::property_proxy<bool, base::UIManagerBase> (*this, "add-tearoffs"); }
const gi::property_proxy<bool, base::UIManagerBase> property_add_tearoffs() const
{ return gi::property_proxy<bool, base::UIManagerBase> (*this, "add-tearoffs"); }

gi::property_proxy<std::string, base::UIManagerBase> property_ui()
{ return gi::property_proxy<std::string, base::UIManagerBase> (*this, "ui"); }
const gi::property_proxy<std::string, base::UIManagerBase> property_ui() const
{ return gi::property_proxy<std::string, base::UIManagerBase> (*this, "ui"); }

// signal actions-changed
// IGNORE; deprecated

// signal add-widget
// IGNORE; deprecated

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
#if __has_include(<gtk/uimanager_extra_def.hpp>)
#include <gtk/uimanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/uimanager_extra.hpp>)
#include <gtk/uimanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class UIManager : public GI_GTK_UIMANAGER_BASE
{ typedef GI_GTK_UIMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkUIManager>
{ typedef Gtk::UIManager type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class UIManagerClassDef
{
typedef UIManagerClassDef self;
public:
typedef Gtk::UIManager instance_type;
typedef ::GtkUIManagerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void UIManager::actions_changed (GtkUIManager* manager);
// void UIManager::actions_changed (::GtkUIManager* manager);
virtual void actions_changed_ () noexcept = 0;

// void UIManager::add_widget (GtkUIManager* manager, GtkWidget* widget);
// void UIManager::add_widget (::GtkUIManager* manager, ::GtkWidget* widget);
virtual void add_widget_ (Gtk::Widget widget) noexcept = 0;

// void UIManager::connect_proxy (GtkUIManager* manager, GtkAction* action, GtkWidget* proxy);
// void UIManager::connect_proxy (::GtkUIManager* manager, ::GtkAction* action, ::GtkWidget* proxy);
virtual void connect_proxy_ (Gtk::Action action, Gtk::Widget proxy) noexcept = 0;

// void UIManager::disconnect_proxy (GtkUIManager* manager, GtkAction* action, GtkWidget* proxy);
// void UIManager::disconnect_proxy (::GtkUIManager* manager, ::GtkAction* action, ::GtkWidget* proxy);
virtual void disconnect_proxy_ (Gtk::Action action, Gtk::Widget proxy) noexcept = 0;

// GtkAction* UIManager::get_action (GtkUIManager* manager, const gchar* path);
// ::GtkAction* UIManager::get_action (::GtkUIManager* manager, const char* path);
// IGNORE; deprecated

// GtkWidget* UIManager::get_widget (GtkUIManager* manager, const gchar* path);
// ::GtkWidget* UIManager::get_widget (::GtkUIManager* manager, const char* path);
// IGNORE; deprecated

// void UIManager::post_activate (GtkUIManager* manager, GtkAction* action);
// void UIManager::post_activate (::GtkUIManager* manager, ::GtkAction* action);
virtual void post_activate_ (Gtk::Action action) noexcept = 0;

// void UIManager::pre_activate (GtkUIManager* manager, GtkAction* action);
// void UIManager::pre_activate (::GtkUIManager* manager, ::GtkAction* action);
virtual void pre_activate_ (Gtk::Action action) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class UIManagerClass: public detail::ClassTemplate<Gtk::impl::internal::UIManagerClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl>
{
typedef UIManagerClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::UIManagerClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;


// void UIManager::actions_changed (GtkUIManager* manager);
// void UIManager::actions_changed (::GtkUIManager* manager);
GI_INLINE_DECL void actions_changed_ () noexcept override;

// void UIManager::add_widget (GtkUIManager* manager, GtkWidget* widget);
// void UIManager::add_widget (::GtkUIManager* manager, ::GtkWidget* widget);
GI_INLINE_DECL void add_widget_ (Gtk::Widget widget) noexcept override;

// void UIManager::connect_proxy (GtkUIManager* manager, GtkAction* action, GtkWidget* proxy);
// void UIManager::connect_proxy (::GtkUIManager* manager, ::GtkAction* action, ::GtkWidget* proxy);
GI_INLINE_DECL void connect_proxy_ (Gtk::Action action, Gtk::Widget proxy) noexcept override;

// void UIManager::disconnect_proxy (GtkUIManager* manager, GtkAction* action, GtkWidget* proxy);
// void UIManager::disconnect_proxy (::GtkUIManager* manager, ::GtkAction* action, ::GtkWidget* proxy);
GI_INLINE_DECL void disconnect_proxy_ (Gtk::Action action, Gtk::Widget proxy) noexcept override;

// GtkAction* UIManager::get_action (GtkUIManager* manager, const gchar* path);
// ::GtkAction* UIManager::get_action (::GtkUIManager* manager, const char* path);
// IGNORE; deprecated

// GtkWidget* UIManager::get_widget (GtkUIManager* manager, const gchar* path);
// ::GtkWidget* UIManager::get_widget (::GtkUIManager* manager, const char* path);
// IGNORE; deprecated

// void UIManager::post_activate (GtkUIManager* manager, GtkAction* action);
// void UIManager::post_activate (::GtkUIManager* manager, ::GtkAction* action);
GI_INLINE_DECL void post_activate_ (Gtk::Action action) noexcept override;

// void UIManager::pre_activate (GtkUIManager* manager, GtkAction* action);
// void UIManager::pre_activate (::GtkUIManager* manager, ::GtkAction* action);
GI_INLINE_DECL void pre_activate_ (Gtk::Action action) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using UIManagerImpl = detail::ObjectImpl<UIManager, internal::UIManagerClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
