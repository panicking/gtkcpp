// AUTO-GENERATED

#ifndef _GI_GIO_ACTIONGROUP_IMPL_HPP_
#define _GI_GIO_ACTIONGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_action_group_action_added (GActionGroup* action_group, const gchar* action_name);
// void g_action_group_action_added (::GActionGroup* action_group, const char* action_name);
void base::ActionGroupBase::action_added (const std::string & action_name) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_action_added;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
}

// void g_action_group_action_enabled_changed (GActionGroup* action_group, const gchar* action_name, gboolean enabled);
// void g_action_group_action_enabled_changed (::GActionGroup* action_group, const char* action_name, gboolean enabled);
void base::ActionGroupBase::action_enabled_changed (const std::string & action_name, gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_action_enabled_changed;
  auto enabled_to_c = enabled;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (gboolean) (enabled_to_c));
}

// void g_action_group_action_removed (GActionGroup* action_group, const gchar* action_name);
// void g_action_group_action_removed (::GActionGroup* action_group, const char* action_name);
void base::ActionGroupBase::action_removed (const std::string & action_name) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_action_removed;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
}

// void g_action_group_action_state_changed (GActionGroup* action_group, const gchar* action_name, GVariant* state);
// void g_action_group_action_state_changed (::GActionGroup* action_group, const char* action_name, ::GVariant* state);
void base::ActionGroupBase::action_state_changed (const std::string & action_name, GLib::Variant state) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* state);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_action_state_changed;
  auto state_to_c = gi::unwrap (state, gi::transfer_none, gi::direction_in);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (state_to_c));
}

// void g_action_group_activate_action (GActionGroup* action_group, const gchar* action_name, GVariant* parameter);
// void g_action_group_activate_action (::GActionGroup* action_group, const char* action_name, ::GVariant* parameter);
void base::ActionGroupBase::activate_action (const std::string & action_name, GLib::Variant parameter) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_activate_action;
  auto parameter_to_c = gi::unwrap (parameter, gi::transfer_none, gi::direction_in);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (parameter_to_c));
}
void base::ActionGroupBase::activate_action (const std::string & action_name) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_activate_action;
  auto parameter_to_c = nullptr;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (parameter_to_c));
}

// void g_action_group_change_action_state (GActionGroup* action_group, const gchar* action_name, GVariant* value);
// void g_action_group_change_action_state (::GActionGroup* action_group, const char* action_name, ::GVariant* value);
void base::ActionGroupBase::change_action_state (const std::string & action_name, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_change_action_state;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (value_to_c));
}

// gboolean g_action_group_get_action_enabled (GActionGroup* action_group, const gchar* action_name);
// gboolean g_action_group_get_action_enabled (::GActionGroup* action_group, const char* action_name);
bool base::ActionGroupBase::get_action_enabled (const std::string & action_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_get_action_enabled;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return _temp_ret;
}

// const GVariantType* g_action_group_get_action_parameter_type (GActionGroup* action_group, const gchar* action_name);
// const ::GVariantType* g_action_group_get_action_parameter_type (::GActionGroup* action_group, const char* action_name);
GLib::VariantType base::ActionGroupBase::get_action_parameter_type (const std::string & action_name) noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_get_action_parameter_type;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_action_group_get_action_state (GActionGroup* action_group, const gchar* action_name);
// ::GVariant* g_action_group_get_action_state (::GActionGroup* action_group, const char* action_name);
GLib::Variant base::ActionGroupBase::get_action_state (const std::string & action_name) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_get_action_state;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* g_action_group_get_action_state_hint (GActionGroup* action_group, const gchar* action_name);
// ::GVariant* g_action_group_get_action_state_hint (::GActionGroup* action_group, const char* action_name);
GLib::Variant base::ActionGroupBase::get_action_state_hint (const std::string & action_name) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_get_action_state_hint;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const GVariantType* g_action_group_get_action_state_type (GActionGroup* action_group, const gchar* action_name);
// const ::GVariantType* g_action_group_get_action_state_type (::GActionGroup* action_group, const char* action_name);
GLib::VariantType base::ActionGroupBase::get_action_state_type (const std::string & action_name) noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_get_action_state_type;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_action_group_has_action (GActionGroup* action_group, const gchar* action_name);
// gboolean g_action_group_has_action (::GActionGroup* action_group, const char* action_name);
bool base::ActionGroupBase::has_action (const std::string & action_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_has_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return _temp_ret;
}

// gchar** g_action_group_list_actions (GActionGroup* action_group);
// char** g_action_group_list_actions (::GActionGroup* action_group);
std::vector<std::string> base::ActionGroupBase::list_actions () noexcept
{
  typedef char** (*call_wrap_t) (::GActionGroup* action_group);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_list_actions;
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean g_action_group_query_action (GActionGroup* action_group, const gchar* action_name, gboolean* enabled, const GVariantType** parameter_type, const GVariantType** state_type, GVariant** state_hint, GVariant** state);
// gboolean g_action_group_query_action (::GActionGroup* action_group, const char* action_name, gboolean* enabled, const ::GVariantType** parameter_type, const ::GVariantType** state_type, ::GVariant** state_hint, ::GVariant** state);
bool base::ActionGroupBase::query_action (const std::string & action_name, bool & enabled, GLib::VariantType * parameter_type, GLib::VariantType * state_type, GLib::Variant * state_hint, GLib::Variant * state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, gboolean* enabled, const ::GVariantType** parameter_type, const ::GVariantType** state_type, ::GVariant** state_hint, ::GVariant** state);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_query_action;
  ::GVariant* state_o {};
  ::GVariant* state_hint_o {};
  const ::GVariantType* state_type_o {};
  const ::GVariantType* parameter_type_o {};
  gboolean enabled_o {};
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (gboolean*) (&enabled_o), (const ::GVariantType**) (parameter_type ? &parameter_type_o : nullptr), (const ::GVariantType**) (state_type ? &state_type_o : nullptr), (::GVariant**) (state_hint ? &state_hint_o : nullptr), (::GVariant**) (state ? &state_o : nullptr));
  if (state) *state = gi::wrap (state_o, gi::transfer_full, gi::direction_out);
  if (state_hint) *state_hint = gi::wrap (state_hint_o, gi::transfer_full, gi::direction_out);
  if (state_type) *state_type = gi::wrap (state_type_o, gi::transfer_full, gi::direction_out);
  if (parameter_type) *parameter_type = gi::wrap (parameter_type_o, gi::transfer_full, gi::direction_out);
  enabled = enabled_o;
  return _temp_ret;
}
std::tuple<bool, bool, GLib::VariantType, GLib::VariantType, GLib::Variant, GLib::Variant> base::ActionGroupBase::query_action (const std::string & action_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, gboolean* enabled, const ::GVariantType** parameter_type, const ::GVariantType** state_type, ::GVariant** state_hint, ::GVariant** state);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_group_query_action;
  ::GVariant* state_o {};
  ::GVariant* state_hint_o {};
  const ::GVariantType* state_type_o {};
  const ::GVariantType* parameter_type_o {};
  gboolean enabled_o {};
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (gboolean*) (&enabled_o), (const ::GVariantType**) (&parameter_type_o), (const ::GVariantType**) (&state_type_o), (::GVariant**) (&state_hint_o), (::GVariant**) (&state_o));
  return std::make_tuple (_temp_ret, enabled_o, gi::wrap (parameter_type_o, gi::transfer_full, gi::direction_out), gi::wrap (state_type_o, gi::transfer_full, gi::direction_out), gi::wrap (state_hint_o, gi::transfer_full, gi::direction_out), gi::wrap (state_o, gi::transfer_full, gi::direction_out));
}






} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/actiongroup_extra_def_impl.hpp>)
#include <gio/actiongroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/actiongroup_extra_impl.hpp>)
#include <gio/actiongroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ActionGroupInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GActionGroupInterface *methods = (::GActionGroupInterface *) interface_struct;
  (void) methods;

  methods->action_added = (decltype (methods->action_added)) detail::method_wrapper<self, void (*) (const std::string & action_name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::action_added_>;
  methods->action_enabled_changed = (decltype (methods->action_enabled_changed)) detail::method_wrapper<self, void (*) (const std::string & action_name, gboolean enabled), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::action_enabled_changed_>;
  methods->action_removed = (decltype (methods->action_removed)) detail::method_wrapper<self, void (*) (const std::string & action_name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::action_removed_>;
  methods->action_state_changed = (decltype (methods->action_state_changed)) detail::method_wrapper<self, void (*) (const std::string & action_name, GLib::Variant state), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::action_state_changed_>;
  methods->activate_action = (decltype (methods->activate_action)) detail::method_wrapper<self, void (*) (const std::string & action_name, GLib::Variant parameter), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::activate_action_>;
  methods->change_action_state = (decltype (methods->change_action_state)) detail::method_wrapper<self, void (*) (const std::string & action_name, GLib::Variant value), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::change_action_state_>;
  methods->get_action_enabled = (decltype (methods->get_action_enabled)) detail::method_wrapper<self, bool (*) (const std::string & action_name), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_action_enabled_>;
  methods->get_action_state = (decltype (methods->get_action_state)) detail::method_wrapper<self, GLib::Variant (*) (const std::string & action_name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_action_state_>;
  methods->get_action_state_hint = (decltype (methods->get_action_state_hint)) detail::method_wrapper<self, GLib::Variant (*) (const std::string & action_name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_action_state_hint_>;
  methods->has_action = (decltype (methods->has_action)) detail::method_wrapper<self, bool (*) (const std::string & action_name), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::has_action_>;
}

// void ActionGroup::action_added (GActionGroup* action_group, const gchar* action_name);
// void ActionGroup::action_added (::GActionGroup* action_group, const char* action_name);
void ActionGroupInterfaceClassImpl::action_added_ (const std::string & action_name) noexcept
{
  if (!get_struct_()->action_added) return ;
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->action_added;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
}

// void ActionGroup::action_enabled_changed (GActionGroup* action_group, const gchar* action_name, gboolean enabled);
// void ActionGroup::action_enabled_changed (::GActionGroup* action_group, const char* action_name, gboolean enabled);
void ActionGroupInterfaceClassImpl::action_enabled_changed_ (const std::string & action_name, gboolean enabled) noexcept
{
  if (!get_struct_()->action_enabled_changed) return ;
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->action_enabled_changed;
  auto enabled_to_c = enabled;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (gboolean) (enabled_to_c));
}

// void ActionGroup::action_removed (GActionGroup* action_group, const gchar* action_name);
// void ActionGroup::action_removed (::GActionGroup* action_group, const char* action_name);
void ActionGroupInterfaceClassImpl::action_removed_ (const std::string & action_name) noexcept
{
  if (!get_struct_()->action_removed) return ;
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->action_removed;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
}

// void ActionGroup::action_state_changed (GActionGroup* action_group, const gchar* action_name, GVariant* state);
// void ActionGroup::action_state_changed (::GActionGroup* action_group, const char* action_name, ::GVariant* state);
void ActionGroupInterfaceClassImpl::action_state_changed_ (const std::string & action_name, GLib::Variant state) noexcept
{
  if (!get_struct_()->action_state_changed) return ;
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* state);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->action_state_changed;
  auto state_to_c = gi::unwrap (state, gi::transfer_none, gi::direction_in);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (state_to_c));
}

// void ActionGroup::activate_action (GActionGroup* action_group, const gchar* action_name, GVariant* parameter);
// void ActionGroup::activate_action (::GActionGroup* action_group, const char* action_name, ::GVariant* parameter);
void ActionGroupInterfaceClassImpl::activate_action_ (const std::string & action_name, GLib::Variant parameter) noexcept
{
  if (!get_struct_()->activate_action) return ;
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_action;
  auto parameter_to_c = gi::unwrap (parameter, gi::transfer_none, gi::direction_in);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (parameter_to_c));
}

// void ActionGroup::change_action_state (GActionGroup* action_group, const gchar* action_name, GVariant* value);
// void ActionGroup::change_action_state (::GActionGroup* action_group, const char* action_name, ::GVariant* value);
void ActionGroupInterfaceClassImpl::change_action_state_ (const std::string & action_name, GLib::Variant value) noexcept
{
  if (!get_struct_()->change_action_state) return ;
  typedef void (*call_wrap_t) (::GActionGroup* action_group, const char* action_name, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->change_action_state;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c), (::GVariant*) (value_to_c));
}

// gboolean ActionGroup::get_action_enabled (GActionGroup* action_group, const gchar* action_name);
// gboolean ActionGroup::get_action_enabled (::GActionGroup* action_group, const char* action_name);
bool ActionGroupInterfaceClassImpl::get_action_enabled_ (const std::string & action_name) noexcept
{
  if (!get_struct_()->get_action_enabled) return bool{};
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_action_enabled;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return _temp_ret;
}

// const GVariantType* ActionGroup::get_action_parameter_type (GActionGroup* action_group, const gchar* action_name);
// const ::GVariantType* ActionGroup::get_action_parameter_type (::GActionGroup* action_group, const char* action_name);
// SKIP; invalid callback return transfer none

// GVariant* ActionGroup::get_action_state (GActionGroup* action_group, const gchar* action_name);
// ::GVariant* ActionGroup::get_action_state (::GActionGroup* action_group, const char* action_name);
GLib::Variant ActionGroupInterfaceClassImpl::get_action_state_ (const std::string & action_name) noexcept
{
  if (!get_struct_()->get_action_state) return GLib::Variant{};
  typedef ::GVariant* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_action_state;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* ActionGroup::get_action_state_hint (GActionGroup* action_group, const gchar* action_name);
// ::GVariant* ActionGroup::get_action_state_hint (::GActionGroup* action_group, const char* action_name);
GLib::Variant ActionGroupInterfaceClassImpl::get_action_state_hint_ (const std::string & action_name) noexcept
{
  if (!get_struct_()->get_action_state_hint) return GLib::Variant{};
  typedef ::GVariant* (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_action_state_hint;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const GVariantType* ActionGroup::get_action_state_type (GActionGroup* action_group, const gchar* action_name);
// const ::GVariantType* ActionGroup::get_action_state_type (::GActionGroup* action_group, const char* action_name);
// SKIP; invalid callback return transfer none

// gboolean ActionGroup::has_action (GActionGroup* action_group, const gchar* action_name);
// gboolean ActionGroup::has_action (::GActionGroup* action_group, const char* action_name);
bool ActionGroupInterfaceClassImpl::has_action_ (const std::string & action_name) noexcept
{
  if (!get_struct_()->has_action) return bool{};
  typedef gboolean (*call_wrap_t) (::GActionGroup* action_group, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->has_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GActionGroup*) (gobj_()), (const char*) (action_name_to_c));
  return _temp_ret;
}

// gchar** ActionGroup::list_actions (GActionGroup* action_group);
// char** ActionGroup::list_actions (::GActionGroup* action_group);
// SKIP; container return not supported

// gboolean ActionGroup::query_action (GActionGroup* action_group, const gchar* action_name, gboolean* enabled, const GVariantType** parameter_type, const GVariantType** state_type, GVariant** state_hint, GVariant** state);
// gboolean ActionGroup::query_action (::GActionGroup* action_group, const char* action_name, gboolean* enabled, const ::GVariantType** parameter_type, const ::GVariantType** state_type, ::GVariant** state_hint, ::GVariant** state);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
