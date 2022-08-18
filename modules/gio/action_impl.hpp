// AUTO-GENERATED

#ifndef _GI_GIO_ACTION_IMPL_HPP_
#define _GI_GIO_ACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_action_name_is_valid (const gchar* action_name);
// gboolean g_action_name_is_valid (const char* action_name);
bool base::ActionBase::name_is_valid (const std::string & action_name) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_name_is_valid;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (action_name_to_c));
  return _temp_ret;
}

// gboolean g_action_parse_detailed_name (const gchar* detailed_name, gchar** action_name, GVariant** target_value, GError ** error);
// gboolean g_action_parse_detailed_name (const char* detailed_name, char** action_name, ::GVariant** target_value, GError ** error);
bool base::ActionBase::parse_detailed_name (const std::string & detailed_name, std::string & action_name, GLib::Variant & target_value)
{
  typedef gboolean (*call_wrap_t) (const char* detailed_name, char** action_name, ::GVariant** target_value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_parse_detailed_name;
  ::GVariant* target_value_o {};
  char* action_name_o {};
  auto detailed_name_to_c = gi::unwrap (detailed_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (detailed_name_to_c), (char**) (&action_name_o), (::GVariant**) (&target_value_o), &error);
  target_value = gi::wrap (target_value_o, gi::transfer_full, gi::direction_out);
  action_name = gi::wrap (action_name_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ActionBase::parse_detailed_name (const std::string & detailed_name, std::string & action_name, GLib::Variant & target_value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* detailed_name, char** action_name, ::GVariant** target_value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_parse_detailed_name;
  ::GVariant* target_value_o {};
  char* action_name_o {};
  auto detailed_name_to_c = gi::unwrap (detailed_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (detailed_name_to_c), (char**) (&action_name_o), (::GVariant**) (&target_value_o), _error ? &_error_o : nullptr);
  target_value = gi::wrap (target_value_o, gi::transfer_full, gi::direction_out);
  action_name = gi::wrap (action_name_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, GLib::Variant> base::ActionBase::parse_detailed_name (const std::string & detailed_name)
{
  typedef gboolean (*call_wrap_t) (const char* detailed_name, char** action_name, ::GVariant** target_value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_parse_detailed_name;
  ::GVariant* target_value_o {};
  char* action_name_o {};
  auto detailed_name_to_c = gi::unwrap (detailed_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (detailed_name_to_c), (char**) (&action_name_o), (::GVariant**) (&target_value_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (action_name_o, gi::transfer_full, gi::direction_out), gi::wrap (target_value_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string, GLib::Variant> base::ActionBase::parse_detailed_name (const std::string & detailed_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* detailed_name, char** action_name, ::GVariant** target_value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_parse_detailed_name;
  ::GVariant* target_value_o {};
  char* action_name_o {};
  auto detailed_name_to_c = gi::unwrap (detailed_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (detailed_name_to_c), (char**) (&action_name_o), (::GVariant**) (&target_value_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (action_name_o, gi::transfer_full, gi::direction_out), gi::wrap (target_value_o, gi::transfer_full, gi::direction_out));
}

// gchar* g_action_print_detailed_name (const gchar* action_name, GVariant* target_value);
// char* g_action_print_detailed_name (const char* action_name, ::GVariant* target_value);
std::string base::ActionBase::print_detailed_name (const std::string & action_name, GLib::Variant target_value) noexcept
{
  typedef char* (*call_wrap_t) (const char* action_name, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_print_detailed_name;
  auto target_value_to_c = gi::unwrap (target_value, gi::transfer_none, gi::direction_in);
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (action_name_to_c), (::GVariant*) (target_value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::ActionBase::print_detailed_name (const std::string & action_name) noexcept
{
  typedef char* (*call_wrap_t) (const char* action_name, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_print_detailed_name;
  auto target_value_to_c = nullptr;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (action_name_to_c), (::GVariant*) (target_value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_action_activate (GAction* action, GVariant* parameter);
// void g_action_activate (::GAction* action, ::GVariant* parameter);
void base::ActionBase::activate (GLib::Variant parameter) noexcept
{
  typedef void (*call_wrap_t) (::GAction* action, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_activate;
  auto parameter_to_c = gi::unwrap (parameter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GAction*) (gobj_()), (::GVariant*) (parameter_to_c));
}
void base::ActionBase::activate () noexcept
{
  typedef void (*call_wrap_t) (::GAction* action, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_activate;
  auto parameter_to_c = nullptr;
  call_wrap_v ((::GAction*) (gobj_()), (::GVariant*) (parameter_to_c));
}

// void g_action_change_state (GAction* action, GVariant* value);
// void g_action_change_state (::GAction* action, ::GVariant* value);
void base::ActionBase::change_state (GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GAction* action, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_change_state;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GAction*) (gobj_()), (::GVariant*) (value_to_c));
}

// gboolean g_action_get_enabled (GAction* action);
// gboolean g_action_get_enabled (::GAction* action);
bool base::ActionBase::get_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_get_enabled;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_action_get_name (GAction* action);
// const char* g_action_get_name (::GAction* action);
std::string base::ActionBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_get_name;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GVariantType* g_action_get_parameter_type (GAction* action);
// const ::GVariantType* g_action_get_parameter_type (::GAction* action);
GLib::VariantType base::ActionBase::get_parameter_type () noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_get_parameter_type;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_action_get_state (GAction* action);
// ::GVariant* g_action_get_state (::GAction* action);
GLib::Variant base::ActionBase::get_state () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_get_state;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* g_action_get_state_hint (GAction* action);
// ::GVariant* g_action_get_state_hint (::GAction* action);
GLib::Variant base::ActionBase::get_state_hint () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_get_state_hint;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const GVariantType* g_action_get_state_type (GAction* action);
// const ::GVariantType* g_action_get_state_type (::GAction* action);
GLib::VariantType base::ActionBase::get_state_type () noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) g_action_get_state_type;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/action_extra_def_impl.hpp>)
#include <gio/action_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/action_extra_impl.hpp>)
#include <gio/action_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ActionInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GActionInterface *methods = (::GActionInterface *) interface_struct;
  (void) methods;

  methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (GLib::Variant parameter), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::activate_>;
  methods->change_state = (decltype (methods->change_state)) detail::method_wrapper<self, void (*) (GLib::Variant value), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::change_state_>;
  methods->get_enabled = (decltype (methods->get_enabled)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::get_enabled_>;
  methods->get_state = (decltype (methods->get_state)) detail::method_wrapper<self, GLib::Variant (*) (), gi::transfer_full_t>::wrapper<&self::get_state_>;
  methods->get_state_hint = (decltype (methods->get_state_hint)) detail::method_wrapper<self, GLib::Variant (*) (), gi::transfer_full_t>::wrapper<&self::get_state_hint_>;
}

// void Action::activate (GAction* action, GVariant* parameter);
// void Action::activate (::GAction* action, ::GVariant* parameter);
void ActionInterfaceClassImpl::activate_ (GLib::Variant parameter) noexcept
{
  if (!get_struct_()->activate) return ;
  typedef void (*call_wrap_t) (::GAction* action, ::GVariant* parameter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  auto parameter_to_c = gi::unwrap (parameter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GAction*) (gobj_()), (::GVariant*) (parameter_to_c));
}

// void Action::change_state (GAction* action, GVariant* value);
// void Action::change_state (::GAction* action, ::GVariant* value);
void ActionInterfaceClassImpl::change_state_ (GLib::Variant value) noexcept
{
  if (!get_struct_()->change_state) return ;
  typedef void (*call_wrap_t) (::GAction* action, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->change_state;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GAction*) (gobj_()), (::GVariant*) (value_to_c));
}

// gboolean Action::get_enabled (GAction* action);
// gboolean Action::get_enabled (::GAction* action);
bool ActionInterfaceClassImpl::get_enabled_ () noexcept
{
  if (!get_struct_()->get_enabled) return bool{};
  typedef gboolean (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_enabled;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return _temp_ret;
}

// const gchar* Action::get_name (GAction* action);
// const char* Action::get_name (::GAction* action);
// SKIP; invalid callback return transfer none

// const GVariantType* Action::get_parameter_type (GAction* action);
// const ::GVariantType* Action::get_parameter_type (::GAction* action);
// SKIP; invalid callback return transfer none

// GVariant* Action::get_state (GAction* action);
// ::GVariant* Action::get_state (::GAction* action);
GLib::Variant ActionInterfaceClassImpl::get_state_ () noexcept
{
  if (!get_struct_()->get_state) return GLib::Variant{};
  typedef ::GVariant* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_state;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* Action::get_state_hint (GAction* action);
// ::GVariant* Action::get_state_hint (::GAction* action);
GLib::Variant ActionInterfaceClassImpl::get_state_hint_ () noexcept
{
  if (!get_struct_()->get_state_hint) return GLib::Variant{};
  typedef ::GVariant* (*call_wrap_t) (::GAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_state_hint;
  auto _temp_ret = call_wrap_v ((::GAction*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const GVariantType* Action::get_state_type (GAction* action);
// const ::GVariantType* Action::get_state_type (::GAction* action);
// SKIP; invalid callback return transfer none

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
