// AUTO-GENERATED

#ifndef _GI_ATK_HYPERLINKIMPL_HPP_
#define _GI_ATK_HYPERLINKIMPL_HPP_


namespace gi {

namespace repository {

namespace Atk {

class Hyperlink;

class HyperlinkImpl;

namespace base {


#define GI_ATK_HYPERLINKIMPL_BASE base::HyperlinkImplBase
class HyperlinkImplBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkHyperlinkImpl BaseObjectType;

HyperlinkImplBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_hyperlink_impl_get_type(); } 

// AtkHyperlink* atk_hyperlink_impl_get_hyperlink (AtkHyperlinkImpl* impl);
// ::AtkHyperlink* atk_hyperlink_impl_get_hyperlink (::AtkHyperlinkImpl* impl);
GI_INLINE_DECL Atk::Hyperlink get_hyperlink () noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/hyperlinkimpl_extra_def.hpp>)
#include <atk/hyperlinkimpl_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/hyperlinkimpl_extra.hpp>)
#include <atk/hyperlinkimpl_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class HyperlinkImpl : public GI_ATK_HYPERLINKIMPL_BASE
{ typedef GI_ATK_HYPERLINKIMPL_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkHyperlinkImpl>
{ typedef Atk::HyperlinkImpl type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class HyperlinkImplIfaceDef
{
typedef HyperlinkImplIfaceDef self;
public:
typedef Atk::HyperlinkImpl instance_type;
typedef ::AtkHyperlinkImplIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// AtkHyperlink* HyperlinkImpl::get_hyperlink (AtkHyperlinkImpl* impl);
// ::AtkHyperlink* HyperlinkImpl::get_hyperlink (::AtkHyperlinkImpl* impl);
virtual Atk::Hyperlink get_hyperlink_ () noexcept = 0;


};

using HyperlinkImplImpl = detail::InterfaceImpl<HyperlinkImplIfaceDef>;

class HyperlinkImplIfaceClassImpl: public detail::InterfaceClassImpl<HyperlinkImplImpl>
{
typedef HyperlinkImplIfaceClassImpl self;
typedef detail::InterfaceClassImpl<HyperlinkImplImpl> super;

protected:
using super::super;

// AtkHyperlink* HyperlinkImpl::get_hyperlink (AtkHyperlinkImpl* impl);
// ::AtkHyperlink* HyperlinkImpl::get_hyperlink (::AtkHyperlinkImpl* impl);
GI_INLINE_DECL Atk::Hyperlink get_hyperlink_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
