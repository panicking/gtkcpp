// AUTO-GENERATED

#ifndef _GI_ATK_HYPERTEXT_IMPL_HPP_
#define _GI_ATK_HYPERTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// AtkHyperlink* atk_hypertext_get_link (AtkHypertext* hypertext, gint link_index);
// ::AtkHyperlink* atk_hypertext_get_link (::AtkHypertext* hypertext, gint link_index);
Atk::Hyperlink base::HypertextBase::get_link (gint link_index) noexcept
{
  typedef ::AtkHyperlink* (*call_wrap_t) (::AtkHypertext* hypertext, gint link_index);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_hypertext_get_link;
  auto link_index_to_c = link_index;
  auto _temp_ret = call_wrap_v ((::AtkHypertext*) (gobj_()), (gint) (link_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint atk_hypertext_get_link_index (AtkHypertext* hypertext, gint char_index);
// gint atk_hypertext_get_link_index (::AtkHypertext* hypertext, gint char_index);
gint base::HypertextBase::get_link_index (gint char_index) noexcept
{
  typedef gint (*call_wrap_t) (::AtkHypertext* hypertext, gint char_index);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_hypertext_get_link_index;
  auto char_index_to_c = char_index;
  auto _temp_ret = call_wrap_v ((::AtkHypertext*) (gobj_()), (gint) (char_index_to_c));
  return _temp_ret;
}

// gint atk_hypertext_get_n_links (AtkHypertext* hypertext);
// gint atk_hypertext_get_n_links (::AtkHypertext* hypertext);
gint base::HypertextBase::get_n_links () noexcept
{
  typedef gint (*call_wrap_t) (::AtkHypertext* hypertext);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_hypertext_get_n_links;
  auto _temp_ret = call_wrap_v ((::AtkHypertext*) (gobj_()));
  return _temp_ret;
}



} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/hypertext_extra_def_impl.hpp>)
#include <atk/hypertext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/hypertext_extra_impl.hpp>)
#include <atk/hypertext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void HypertextIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkHypertextIface *methods = (::AtkHypertextIface *) interface_struct;
  (void) methods;

  methods->get_link = (decltype (methods->get_link)) detail::method_wrapper<self, Atk::Hyperlink (*) (gint link_index), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_link_>;
  methods->get_link_index = (decltype (methods->get_link_index)) detail::method_wrapper<self, gint (*) (gint char_index), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_link_index_>;
  methods->get_n_links = (decltype (methods->get_n_links)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_n_links_>;
  methods->link_selected = (decltype (methods->link_selected)) detail::method_wrapper<self, void (*) (gint link_index), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::link_selected_>;
}

// AtkHyperlink* Hypertext::get_link (AtkHypertext* hypertext, gint link_index);
// ::AtkHyperlink* Hypertext::get_link (::AtkHypertext* hypertext, gint link_index);
Atk::Hyperlink HypertextIfaceClassImpl::get_link_ (gint link_index) noexcept
{
  if (!get_struct_()->get_link) return Atk::Hyperlink{};
  typedef ::AtkHyperlink* (*call_wrap_t) (::AtkHypertext* hypertext, gint link_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_link;
  auto link_index_to_c = link_index;
  auto _temp_ret = call_wrap_v ((::AtkHypertext*) (gobj_()), (gint) (link_index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint Hypertext::get_link_index (AtkHypertext* hypertext, gint char_index);
// gint Hypertext::get_link_index (::AtkHypertext* hypertext, gint char_index);
gint HypertextIfaceClassImpl::get_link_index_ (gint char_index) noexcept
{
  if (!get_struct_()->get_link_index) return gint{};
  typedef gint (*call_wrap_t) (::AtkHypertext* hypertext, gint char_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_link_index;
  auto char_index_to_c = char_index;
  auto _temp_ret = call_wrap_v ((::AtkHypertext*) (gobj_()), (gint) (char_index_to_c));
  return _temp_ret;
}

// gint Hypertext::get_n_links (AtkHypertext* hypertext);
// gint Hypertext::get_n_links (::AtkHypertext* hypertext);
gint HypertextIfaceClassImpl::get_n_links_ () noexcept
{
  if (!get_struct_()->get_n_links) return gint{};
  typedef gint (*call_wrap_t) (::AtkHypertext* hypertext);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_links;
  auto _temp_ret = call_wrap_v ((::AtkHypertext*) (gobj_()));
  return _temp_ret;
}

// void Hypertext::link_selected (AtkHypertext* hypertext, gint link_index);
// void Hypertext::link_selected (::AtkHypertext* hypertext, gint link_index);
void HypertextIfaceClassImpl::link_selected_ (gint link_index) noexcept
{
  if (!get_struct_()->link_selected) return ;
  typedef void (*call_wrap_t) (::AtkHypertext* hypertext, gint link_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->link_selected;
  auto link_index_to_c = link_index;
  call_wrap_v ((::AtkHypertext*) (gobj_()), (gint) (link_index_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
