// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEACTIONGROUP_IMPL_HPP_
#define _GI_GIO_SIMPLEACTIONGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::ActionGroup SimpleActionGroupBase::interface_ (gi::interface_tag<Gio::ActionGroup>)
{ return gi::wrap ((Gio::ActionGroup::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SimpleActionGroupBase::operator Gio::ActionGroup ()
{ return interface_ (gi::interface_tag<Gio::ActionGroup>()); }

Gio::ActionMap SimpleActionGroupBase::interface_ (gi::interface_tag<Gio::ActionMap>)
{ return gi::wrap ((Gio::ActionMap::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SimpleActionGroupBase::operator Gio::ActionMap ()
{ return interface_ (gi::interface_tag<Gio::ActionMap>()); }

// GSimpleActionGroup* g_simple_action_group_new ();
// ::GSimpleActionGroup* g_simple_action_group_new ();
Gio::SimpleActionGroup base::SimpleActionGroupBase::new_ () noexcept
{
  typedef ::GSimpleActionGroup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_action_group_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

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


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleactiongroup_extra_def_impl.hpp>)
#include <gio/simpleactiongroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleactiongroup_extra_impl.hpp>)
#include <gio/simpleactiongroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SimpleActionGroupClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GSimpleActionGroupClass *methods = (::GSimpleActionGroupClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
