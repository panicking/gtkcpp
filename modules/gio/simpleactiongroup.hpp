// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEACTIONGROUP_HPP_
#define _GI_GIO_SIMPLEACTIONGROUP_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Action;
class ActionEntry;
class ActionGroup;
class ActionMap;

class SimpleActionGroup;

namespace base {


#define GI_GIO_SIMPLEACTIONGROUP_BASE base::SimpleActionGroupBase
class SimpleActionGroupBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSimpleActionGroup BaseObjectType;

SimpleActionGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_simple_action_group_get_type(); } 

GI_INLINE_DECL Gio::ActionGroup interface_ (gi::interface_tag<Gio::ActionGroup>);

GI_INLINE_DECL operator Gio::ActionGroup ();

GI_INLINE_DECL Gio::ActionMap interface_ (gi::interface_tag<Gio::ActionMap>);

GI_INLINE_DECL operator Gio::ActionMap ();

// GSimpleActionGroup* g_simple_action_group_new ();
// ::GSimpleActionGroup* g_simple_action_group_new ();
static GI_INLINE_DECL Gio::SimpleActionGroup new_ () noexcept;

// void g_simple_action_group_add_entries (GSimpleActionGroup* simple, const GActionEntry* entries, gint n_entries, gpointer user_data);
// void g_simple_action_group_add_entries (::GSimpleActionGroup* simple, const ::GActionEntry** entries, gint n_entries, void* user_data);
// IGNORE; deprecated

// void g_simple_action_group_insert (GSimpleActionGroup* simple, GAction* action);
// void g_simple_action_group_insert (::GSimpleActionGroup* simple, ::GAction* action);
// IGNORE; deprecated

// GAction* g_simple_action_group_lookup (GSimpleActionGroup* simple, const gchar* action_name);
// ::GAction* g_simple_action_group_lookup (::GSimpleActionGroup* simple, const char* action_name);
// IGNORE; deprecated

// void g_simple_action_group_remove (GSimpleActionGroup* simple, const gchar* action_name);
// void g_simple_action_group_remove (::GSimpleActionGroup* simple, const char* action_name);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleactiongroup_extra_def.hpp>)
#include <gio/simpleactiongroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleactiongroup_extra.hpp>)
#include <gio/simpleactiongroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SimpleActionGroup : public GI_GIO_SIMPLEACTIONGROUP_BASE
{ typedef GI_GIO_SIMPLEACTIONGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSimpleActionGroup>
{ typedef Gio::SimpleActionGroup type; }; 

} // namespace repository

} // namespace gi

#include "actiongroup.hpp"
#include "actionmap.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SimpleActionGroupClassDef
{
typedef SimpleActionGroupClassDef self;
public:
typedef Gio::SimpleActionGroup instance_type;
typedef ::GSimpleActionGroupClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SimpleActionGroupClass: public detail::ClassTemplate<Gio::impl::internal::SimpleActionGroupClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ActionGroupInterfaceClassImpl, Gio::impl::internal::ActionMapInterfaceClassImpl>
{
typedef SimpleActionGroupClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SimpleActionGroupClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ActionGroupInterfaceClassImpl, Gio::impl::internal::ActionMapInterfaceClassImpl> super;

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

using SimpleActionGroupImpl = detail::ObjectImpl<SimpleActionGroup, internal::SimpleActionGroupClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
