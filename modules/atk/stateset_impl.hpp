// AUTO-GENERATED

#ifndef _GI_ATK_STATESET_IMPL_HPP_
#define _GI_ATK_STATESET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// AtkStateSet* atk_state_set_new ();
// ::AtkStateSet* atk_state_set_new ();
Atk::StateSet base::StateSetBase::new_ () noexcept
{
  typedef ::AtkStateSet* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_set_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean atk_state_set_add_state (AtkStateSet* set, AtkStateType type);
// gboolean atk_state_set_add_state (::AtkStateSet* set, ::AtkStateType type);
bool base::StateSetBase::add_state (Atk::StateType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkStateSet* set, ::AtkStateType type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_set_add_state;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::AtkStateSet*) (gobj_()), (::AtkStateType) (type_to_c));
  return _temp_ret;
}

// void atk_state_set_add_states (AtkStateSet* set, AtkStateType* types, gint n_types);
// void atk_state_set_add_states (::AtkStateSet* set, ::AtkStateType* types, gint n_types);
void base::StateSetBase::add_states (Atk::StateType * types, gint n_types) noexcept
{
  typedef void (*call_wrap_t) (::AtkStateSet* set, ::AtkStateType* types, gint n_types);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_set_add_states;
  auto types_i = detail::make_list_unwrap_range (types, n_types, false);
  auto types_w = unwrap (types_i, gi::transfer_none, direction_in);
  auto types_to_c = types_w.gobj_(false);
  call_wrap_v ((::AtkStateSet*) (gobj_()), (::AtkStateType*) (types_to_c), (gint) (types_w.size()));
}

// AtkStateSet* atk_state_set_and_sets (AtkStateSet* set, AtkStateSet* compare_set);
// ::AtkStateSet* atk_state_set_and_sets (::AtkStateSet* set, ::AtkStateSet* compare_set);
Atk::StateSet base::StateSetBase::and_sets (Atk::StateSet compare_set) noexcept
{
  typedef ::AtkStateSet* (*call_wrap_t) (::AtkStateSet* set, ::AtkStateSet* compare_set);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_set_and_sets;
  auto compare_set_to_c = gi::unwrap (compare_set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkStateSet*) (gobj_()), (::AtkStateSet*) (compare_set_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void atk_state_set_clear_states (AtkStateSet* set);
// void atk_state_set_clear_states (::AtkStateSet* set);
void base::StateSetBase::clear_states () noexcept
{
  typedef void (*call_wrap_t) (::AtkStateSet* set);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_set_clear_states;
  call_wrap_v ((::AtkStateSet*) (gobj_()));
}

// gboolean atk_state_set_contains_state (AtkStateSet* set, AtkStateType type);
// gboolean atk_state_set_contains_state (::AtkStateSet* set, ::AtkStateType type);
bool base::StateSetBase::contains_state (Atk::StateType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkStateSet* set, ::AtkStateType type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_set_contains_state;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::AtkStateSet*) (gobj_()), (::AtkStateType) (type_to_c));
  return _temp_ret;
}

// gboolean atk_state_set_contains_states (AtkStateSet* set, AtkStateType* types, gint n_types);
// gboolean atk_state_set_contains_states (::AtkStateSet* set, ::AtkStateType* types, gint n_types);
bool base::StateSetBase::contains_states (Atk::StateType * types, gint n_types) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkStateSet* set, ::AtkStateType* types, gint n_types);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_set_contains_states;
  auto types_i = detail::make_list_unwrap_range (types, n_types, false);
  auto types_w = unwrap (types_i, gi::transfer_none, direction_in);
  auto types_to_c = types_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::AtkStateSet*) (gobj_()), (::AtkStateType*) (types_to_c), (gint) (types_w.size()));
  return _temp_ret;
}

// gboolean atk_state_set_is_empty (AtkStateSet* set);
// gboolean atk_state_set_is_empty (::AtkStateSet* set);
bool base::StateSetBase::is_empty () noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkStateSet* set);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_set_is_empty;
  auto _temp_ret = call_wrap_v ((::AtkStateSet*) (gobj_()));
  return _temp_ret;
}

// AtkStateSet* atk_state_set_or_sets (AtkStateSet* set, AtkStateSet* compare_set);
// ::AtkStateSet* atk_state_set_or_sets (::AtkStateSet* set, ::AtkStateSet* compare_set);
Atk::StateSet base::StateSetBase::or_sets (Atk::StateSet compare_set) noexcept
{
  typedef ::AtkStateSet* (*call_wrap_t) (::AtkStateSet* set, ::AtkStateSet* compare_set);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_set_or_sets;
  auto compare_set_to_c = gi::unwrap (compare_set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkStateSet*) (gobj_()), (::AtkStateSet*) (compare_set_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean atk_state_set_remove_state (AtkStateSet* set, AtkStateType type);
// gboolean atk_state_set_remove_state (::AtkStateSet* set, ::AtkStateType type);
bool base::StateSetBase::remove_state (Atk::StateType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkStateSet* set, ::AtkStateType type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_set_remove_state;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::AtkStateSet*) (gobj_()), (::AtkStateType) (type_to_c));
  return _temp_ret;
}

// AtkStateSet* atk_state_set_xor_sets (AtkStateSet* set, AtkStateSet* compare_set);
// ::AtkStateSet* atk_state_set_xor_sets (::AtkStateSet* set, ::AtkStateSet* compare_set);
Atk::StateSet base::StateSetBase::xor_sets (Atk::StateSet compare_set) noexcept
{
  typedef ::AtkStateSet* (*call_wrap_t) (::AtkStateSet* set, ::AtkStateSet* compare_set);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_set_xor_sets;
  auto compare_set_to_c = gi::unwrap (compare_set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkStateSet*) (gobj_()), (::AtkStateSet*) (compare_set_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/stateset_extra_def_impl.hpp>)
#include <atk/stateset_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/stateset_extra_impl.hpp>)
#include <atk/stateset_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void StateSetClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkStateSetClass *methods = (::AtkStateSetClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
