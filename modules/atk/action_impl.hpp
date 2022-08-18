// AUTO-GENERATED

#ifndef _GI_ATK_ACTION_IMPL_HPP_
#define _GI_ATK_ACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// gboolean atk_action_do_action (AtkAction* action, gint i);
// gboolean atk_action_do_action (::AtkAction* action, gint i);
bool base::ActionBase::do_action (gint i) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkAction* action, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_action_do_action;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkAction*) (gobj_()), (gint) (i_to_c));
  return _temp_ret;
}

// const gchar* atk_action_get_description (AtkAction* action, gint i);
// const char* atk_action_get_description (::AtkAction* action, gint i);
std::string base::ActionBase::get_description (gint i) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkAction* action, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_action_get_description;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkAction*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* atk_action_get_keybinding (AtkAction* action, gint i);
// const char* atk_action_get_keybinding (::AtkAction* action, gint i);
std::string base::ActionBase::get_keybinding (gint i) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkAction* action, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_action_get_keybinding;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkAction*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* atk_action_get_localized_name (AtkAction* action, gint i);
// const char* atk_action_get_localized_name (::AtkAction* action, gint i);
std::string base::ActionBase::get_localized_name (gint i) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkAction* action, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_action_get_localized_name;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkAction*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint atk_action_get_n_actions (AtkAction* action);
// gint atk_action_get_n_actions (::AtkAction* action);
gint base::ActionBase::get_n_actions () noexcept
{
  typedef gint (*call_wrap_t) (::AtkAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_action_get_n_actions;
  auto _temp_ret = call_wrap_v ((::AtkAction*) (gobj_()));
  return _temp_ret;
}

// const gchar* atk_action_get_name (AtkAction* action, gint i);
// const char* atk_action_get_name (::AtkAction* action, gint i);
std::string base::ActionBase::get_name (gint i) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkAction* action, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_action_get_name;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkAction*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean atk_action_set_description (AtkAction* action, gint i, const gchar* desc);
// gboolean atk_action_set_description (::AtkAction* action, gint i, const char* desc);
bool base::ActionBase::set_description (gint i, const std::string & desc) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkAction* action, gint i, const char* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_action_set_description;
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none, gi::direction_in);
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkAction*) (gobj_()), (gint) (i_to_c), (const char*) (desc_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/action_extra_def_impl.hpp>)
#include <atk/action_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/action_extra_impl.hpp>)
#include <atk/action_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void ActionIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkActionIface *methods = (::AtkActionIface *) interface_struct;
  (void) methods;

  methods->do_action = (decltype (methods->do_action)) detail::method_wrapper<self, bool (*) (gint i), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::do_action_>;
  methods->get_n_actions = (decltype (methods->get_n_actions)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_n_actions_>;
  methods->set_description = (decltype (methods->set_description)) detail::method_wrapper<self, bool (*) (gint i, const std::string & desc), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_description_>;
}

// gboolean Action::do_action (AtkAction* action, gint i);
// gboolean Action::do_action (::AtkAction* action, gint i);
bool ActionIfaceClassImpl::do_action_ (gint i) noexcept
{
  if (!get_struct_()->do_action) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkAction* action, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->do_action;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkAction*) (gobj_()), (gint) (i_to_c));
  return _temp_ret;
}

// const gchar* Action::get_description (AtkAction* action, gint i);
// const char* Action::get_description (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// const gchar* Action::get_keybinding (AtkAction* action, gint i);
// const char* Action::get_keybinding (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// const gchar* Action::get_localized_name (AtkAction* action, gint i);
// const char* Action::get_localized_name (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// gint Action::get_n_actions (AtkAction* action);
// gint Action::get_n_actions (::AtkAction* action);
gint ActionIfaceClassImpl::get_n_actions_ () noexcept
{
  if (!get_struct_()->get_n_actions) return gint{};
  typedef gint (*call_wrap_t) (::AtkAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_actions;
  auto _temp_ret = call_wrap_v ((::AtkAction*) (gobj_()));
  return _temp_ret;
}

// const gchar* Action::get_name (AtkAction* action, gint i);
// const char* Action::get_name (::AtkAction* action, gint i);
// SKIP; invalid callback return transfer none

// gboolean Action::set_description (AtkAction* action, gint i, const gchar* desc);
// gboolean Action::set_description (::AtkAction* action, gint i, const char* desc);
bool ActionIfaceClassImpl::set_description_ (gint i, const std::string & desc) noexcept
{
  if (!get_struct_()->set_description) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkAction* action, gint i, const char* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_description;
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none, gi::direction_in);
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkAction*) (gobj_()), (gint) (i_to_c), (const char*) (desc_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
