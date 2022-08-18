// AUTO-GENERATED

#ifndef _GI_GIO_ACTIONMAP_IMPL_HPP_
#define _GI_GIO_ACTIONMAP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_action_map_add_action (GActionMap* action_map, GAction* action);
// void g_action_map_add_action (::GActionMap* action_map, ::GAction* action);
void base::ActionMapBase::add_action (Gio::Action action) noexcept
{
  typedef void (*call_wrap_t) (::GActionMap* action_map, ::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_map_add_action;
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionMap*) (gobj_()), (::GAction*) (action_to_c));
}

// void g_action_map_add_action_entries (GActionMap* action_map, const GActionEntry* entries, gint n_entries, gpointer user_data);
// void g_action_map_add_action_entries (::GActionMap* action_map, const ::GActionEntry** entries, gint n_entries, void* user_data);
// SKIP; inconsistent in entries pointer depth (1 vs 2)

// GAction* g_action_map_lookup_action (GActionMap* action_map, const gchar* action_name);
// ::GAction* g_action_map_lookup_action (::GActionMap* action_map, const char* action_name);
Gio::Action base::ActionMapBase::lookup_action (const std::string & action_name) noexcept
{
  typedef ::GAction* (*call_wrap_t) (::GActionMap* action_map, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_map_lookup_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionMap*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_action_map_remove_action (GActionMap* action_map, const gchar* action_name);
// void g_action_map_remove_action (::GActionMap* action_map, const char* action_name);
void base::ActionMapBase::remove_action (const std::string & action_name) noexcept
{
  typedef void (*call_wrap_t) (::GActionMap* action_map, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_map_remove_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionMap*) (gobj_()), (const char*) (action_name_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/actionmap_extra_def_impl.hpp>)
#include <gio/actionmap_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/actionmap_extra_impl.hpp>)
#include <gio/actionmap_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ActionMapInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GActionMapInterface *methods = (::GActionMapInterface *) interface_struct;
  (void) methods;

  methods->add_action = (decltype (methods->add_action)) detail::method_wrapper<self, void (*) (Gio::Action action), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::add_action_>;
  methods->lookup_action = (decltype (methods->lookup_action)) detail::method_wrapper<self, Gio::Action (*) (const std::string & action_name), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::lookup_action_>;
  methods->remove_action = (decltype (methods->remove_action)) detail::method_wrapper<self, void (*) (const std::string & action_name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::remove_action_>;
}

// void ActionMap::add_action (GActionMap* action_map, GAction* action);
// void ActionMap::add_action (::GActionMap* action_map, ::GAction* action);
void ActionMapInterfaceClassImpl::add_action_ (Gio::Action action) noexcept
{
  if (!get_struct_()->add_action) return ;
  typedef void (*call_wrap_t) (::GActionMap* action_map, ::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_action;
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionMap*) (gobj_()), (::GAction*) (action_to_c));
}

// GAction* ActionMap::lookup_action (GActionMap* action_map, const gchar* action_name);
// ::GAction* ActionMap::lookup_action (::GActionMap* action_map, const char* action_name);
Gio::Action ActionMapInterfaceClassImpl::lookup_action_ (const std::string & action_name) noexcept
{
  if (!get_struct_()->lookup_action) return Gio::Action{};
  typedef ::GAction* (*call_wrap_t) (::GActionMap* action_map, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->lookup_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionMap*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void ActionMap::remove_action (GActionMap* action_map, const gchar* action_name);
// void ActionMap::remove_action (::GActionMap* action_map, const char* action_name);
void ActionMapInterfaceClassImpl::remove_action_ (const std::string & action_name) noexcept
{
  if (!get_struct_()->remove_action) return ;
  typedef void (*call_wrap_t) (::GActionMap* action_map, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionMap*) (gobj_()), (const char*) (action_name_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
