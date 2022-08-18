// AUTO-GENERATED

#ifndef _GI_ATK_HYPERLINKIMPL_IMPL_HPP_
#define _GI_ATK_HYPERLINKIMPL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// AtkHyperlink* atk_hyperlink_impl_get_hyperlink (AtkHyperlinkImpl* impl);
// ::AtkHyperlink* atk_hyperlink_impl_get_hyperlink (::AtkHyperlinkImpl* impl);
Atk::Hyperlink base::HyperlinkImplBase::get_hyperlink () noexcept
{
  typedef ::AtkHyperlink* (*call_wrap_t) (::AtkHyperlinkImpl* impl);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_hyperlink_impl_get_hyperlink;
  auto _temp_ret = call_wrap_v ((::AtkHyperlinkImpl*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/hyperlinkimpl_extra_def_impl.hpp>)
#include <atk/hyperlinkimpl_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/hyperlinkimpl_extra_impl.hpp>)
#include <atk/hyperlinkimpl_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void HyperlinkImplIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkHyperlinkImplIface *methods = (::AtkHyperlinkImplIface *) interface_struct;
  (void) methods;

  methods->get_hyperlink = (decltype (methods->get_hyperlink)) detail::method_wrapper<self, Atk::Hyperlink (*) (), gi::transfer_full_t>::wrapper<&self::get_hyperlink_>;
}

// AtkHyperlink* HyperlinkImpl::get_hyperlink (AtkHyperlinkImpl* impl);
// ::AtkHyperlink* HyperlinkImpl::get_hyperlink (::AtkHyperlinkImpl* impl);
Atk::Hyperlink HyperlinkImplIfaceClassImpl::get_hyperlink_ () noexcept
{
  if (!get_struct_()->get_hyperlink) return Atk::Hyperlink{};
  typedef ::AtkHyperlink* (*call_wrap_t) (::AtkHyperlinkImpl* impl);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_hyperlink;
  auto _temp_ret = call_wrap_v ((::AtkHyperlinkImpl*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
