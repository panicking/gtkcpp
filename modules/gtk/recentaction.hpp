// AUTO-GENERATED

#ifndef _GI_GTK_RECENTACTION_HPP_
#define _GI_GTK_RECENTACTION_HPP_

#include "action.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class RecentChooser;
class RecentManager;

class RecentAction;

namespace base {


#define GI_GTK_RECENTACTION_BASE base::RecentActionBase
class RecentActionBase : public Gtk::Action
{
typedef Gtk::Action super_type;
public:
typedef ::GtkRecentAction BaseObjectType;

RecentActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_recent_action_get_type(); } 

GI_INLINE_DECL Gtk::RecentChooser interface_ (gi::interface_tag<Gtk::RecentChooser>);

GI_INLINE_DECL operator Gtk::RecentChooser ();

// GtkAction* gtk_recent_action_new (const gchar* name, const gchar* label, const gchar* tooltip, const gchar* stock_id);
// ::GtkRecentAction* gtk_recent_action_new (const char* name, const char* label, const char* tooltip, const char* stock_id);
// IGNORE; deprecated

// GtkAction* gtk_recent_action_new_for_manager (const gchar* name, const gchar* label, const gchar* tooltip, const gchar* stock_id, GtkRecentManager* manager);
// ::GtkRecentAction* gtk_recent_action_new_for_manager (const char* name, const char* label, const char* tooltip, const char* stock_id, ::GtkRecentManager* manager);
// IGNORE; deprecated

// gboolean gtk_recent_action_get_show_numbers (GtkRecentAction* action);
// gboolean gtk_recent_action_get_show_numbers (::GtkRecentAction* action);
// IGNORE; deprecated

// void gtk_recent_action_set_show_numbers (GtkRecentAction* action, gboolean show_numbers);
// void gtk_recent_action_set_show_numbers (::GtkRecentAction* action, gboolean show_numbers);
// IGNORE; deprecated

gi::property_proxy<bool, base::RecentActionBase> property_show_numbers()
{ return gi::property_proxy<bool, base::RecentActionBase> (*this, "show-numbers"); }
const gi::property_proxy<bool, base::RecentActionBase> property_show_numbers() const
{ return gi::property_proxy<bool, base::RecentActionBase> (*this, "show-numbers"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentaction_extra_def.hpp>)
#include <gtk/recentaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentaction_extra.hpp>)
#include <gtk/recentaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentAction : public GI_GTK_RECENTACTION_BASE
{ typedef GI_GTK_RECENTACTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentAction>
{ typedef Gtk::RecentAction type; }; 

} // namespace repository

} // namespace gi

#include "recentchooser.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RecentActionClassDef
{
typedef RecentActionClassDef self;
public:
typedef Gtk::RecentAction instance_type;
typedef ::GtkRecentActionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RecentActionClass: public detail::ClassTemplate<Gtk::impl::internal::RecentActionClassDef, Gtk::impl::internal::ActionClass, Gtk::impl::internal::RecentChooserIfaceClassImpl>
{
typedef RecentActionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RecentActionClassDef, Gtk::impl::internal::ActionClass, Gtk::impl::internal::RecentChooserIfaceClassImpl> super;

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

using RecentActionImpl = detail::ObjectImpl<RecentAction, internal::RecentActionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
