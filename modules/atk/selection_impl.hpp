// AUTO-GENERATED

#ifndef _GI_ATK_SELECTION_IMPL_HPP_
#define _GI_ATK_SELECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// gboolean atk_selection_add_selection (AtkSelection* selection, gint i);
// gboolean atk_selection_add_selection (::AtkSelection* selection, gint i);
bool base::SelectionBase::add_selection (gint i) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkSelection* selection, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_selection_add_selection;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()), (gint) (i_to_c));
  return _temp_ret;
}

// gboolean atk_selection_clear_selection (AtkSelection* selection);
// gboolean atk_selection_clear_selection (::AtkSelection* selection);
bool base::SelectionBase::clear_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_selection_clear_selection;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()));
  return _temp_ret;
}

// gint atk_selection_get_selection_count (AtkSelection* selection);
// gint atk_selection_get_selection_count (::AtkSelection* selection);
gint base::SelectionBase::get_selection_count () noexcept
{
  typedef gint (*call_wrap_t) (::AtkSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_selection_get_selection_count;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()));
  return _temp_ret;
}

// gboolean atk_selection_is_child_selected (AtkSelection* selection, gint i);
// gboolean atk_selection_is_child_selected (::AtkSelection* selection, gint i);
bool base::SelectionBase::is_child_selected (gint i) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkSelection* selection, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_selection_is_child_selected;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()), (gint) (i_to_c));
  return _temp_ret;
}

// AtkObject* atk_selection_ref_selection (AtkSelection* selection, gint i);
// ::AtkObject* atk_selection_ref_selection (::AtkSelection* selection, gint i);
Atk::Object base::SelectionBase::ref_selection (gint i) noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkSelection* selection, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_selection_ref_selection;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean atk_selection_remove_selection (AtkSelection* selection, gint i);
// gboolean atk_selection_remove_selection (::AtkSelection* selection, gint i);
bool base::SelectionBase::remove_selection (gint i) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkSelection* selection, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_selection_remove_selection;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()), (gint) (i_to_c));
  return _temp_ret;
}

// gboolean atk_selection_select_all_selection (AtkSelection* selection);
// gboolean atk_selection_select_all_selection (::AtkSelection* selection);
bool base::SelectionBase::select_all_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_selection_select_all_selection;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()));
  return _temp_ret;
}



} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/selection_extra_def_impl.hpp>)
#include <atk/selection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/selection_extra_impl.hpp>)
#include <atk/selection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void SelectionIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkSelectionIface *methods = (::AtkSelectionIface *) interface_struct;
  (void) methods;

  methods->add_selection = (decltype (methods->add_selection)) detail::method_wrapper<self, bool (*) (gint i), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::add_selection_>;
  methods->clear_selection = (decltype (methods->clear_selection)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::clear_selection_>;
  methods->get_selection_count = (decltype (methods->get_selection_count)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_selection_count_>;
  methods->is_child_selected = (decltype (methods->is_child_selected)) detail::method_wrapper<self, bool (*) (gint i), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::is_child_selected_>;
  methods->ref_selection = (decltype (methods->ref_selection)) detail::method_wrapper<self, Atk::Object (*) (gint i), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::ref_selection_>;
  methods->remove_selection = (decltype (methods->remove_selection)) detail::method_wrapper<self, bool (*) (gint i), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::remove_selection_>;
  methods->select_all_selection = (decltype (methods->select_all_selection)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::select_all_selection_>;
  methods->selection_changed = (decltype (methods->selection_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::selection_changed_>;
}

// gboolean Selection::add_selection (AtkSelection* selection, gint i);
// gboolean Selection::add_selection (::AtkSelection* selection, gint i);
bool SelectionIfaceClassImpl::add_selection_ (gint i) noexcept
{
  if (!get_struct_()->add_selection) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkSelection* selection, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_selection;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()), (gint) (i_to_c));
  return _temp_ret;
}

// gboolean Selection::clear_selection (AtkSelection* selection);
// gboolean Selection::clear_selection (::AtkSelection* selection);
bool SelectionIfaceClassImpl::clear_selection_ () noexcept
{
  if (!get_struct_()->clear_selection) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->clear_selection;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()));
  return _temp_ret;
}

// gint Selection::get_selection_count (AtkSelection* selection);
// gint Selection::get_selection_count (::AtkSelection* selection);
gint SelectionIfaceClassImpl::get_selection_count_ () noexcept
{
  if (!get_struct_()->get_selection_count) return gint{};
  typedef gint (*call_wrap_t) (::AtkSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_selection_count;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()));
  return _temp_ret;
}

// gboolean Selection::is_child_selected (AtkSelection* selection, gint i);
// gboolean Selection::is_child_selected (::AtkSelection* selection, gint i);
bool SelectionIfaceClassImpl::is_child_selected_ (gint i) noexcept
{
  if (!get_struct_()->is_child_selected) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkSelection* selection, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_child_selected;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()), (gint) (i_to_c));
  return _temp_ret;
}

// AtkObject* Selection::ref_selection (AtkSelection* selection, gint i);
// ::AtkObject* Selection::ref_selection (::AtkSelection* selection, gint i);
Atk::Object SelectionIfaceClassImpl::ref_selection_ (gint i) noexcept
{
  if (!get_struct_()->ref_selection) return Atk::Object{};
  typedef ::AtkObject* (*call_wrap_t) (::AtkSelection* selection, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ref_selection;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean Selection::remove_selection (AtkSelection* selection, gint i);
// gboolean Selection::remove_selection (::AtkSelection* selection, gint i);
bool SelectionIfaceClassImpl::remove_selection_ (gint i) noexcept
{
  if (!get_struct_()->remove_selection) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkSelection* selection, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_selection;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()), (gint) (i_to_c));
  return _temp_ret;
}

// gboolean Selection::select_all_selection (AtkSelection* selection);
// gboolean Selection::select_all_selection (::AtkSelection* selection);
bool SelectionIfaceClassImpl::select_all_selection_ () noexcept
{
  if (!get_struct_()->select_all_selection) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_all_selection;
  auto _temp_ret = call_wrap_v ((::AtkSelection*) (gobj_()));
  return _temp_ret;
}

// void Selection::selection_changed (AtkSelection* selection);
// void Selection::selection_changed (::AtkSelection* selection);
void SelectionIfaceClassImpl::selection_changed_ () noexcept
{
  if (!get_struct_()->selection_changed) return ;
  typedef void (*call_wrap_t) (::AtkSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->selection_changed;
  call_wrap_v ((::AtkSelection*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
