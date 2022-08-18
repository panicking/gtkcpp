// AUTO-GENERATED

#ifndef _GI_ATK_HYPERTEXT_HPP_
#define _GI_ATK_HYPERTEXT_HPP_


namespace gi {

namespace repository {

namespace Atk {

class Hyperlink;

class Hypertext;

namespace base {


#define GI_ATK_HYPERTEXT_BASE base::HypertextBase
class HypertextBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkHypertext BaseObjectType;

HypertextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_hypertext_get_type(); } 

// AtkHyperlink* atk_hypertext_get_link (AtkHypertext* hypertext, gint link_index);
// ::AtkHyperlink* atk_hypertext_get_link (::AtkHypertext* hypertext, gint link_index);
GI_INLINE_DECL Atk::Hyperlink get_link (gint link_index) noexcept;

// gint atk_hypertext_get_link_index (AtkHypertext* hypertext, gint char_index);
// gint atk_hypertext_get_link_index (::AtkHypertext* hypertext, gint char_index);
GI_INLINE_DECL gint get_link_index (gint char_index) noexcept;

// gint atk_hypertext_get_n_links (AtkHypertext* hypertext);
// gint atk_hypertext_get_n_links (::AtkHypertext* hypertext);
GI_INLINE_DECL gint get_n_links () noexcept;

// signal link-selected
gi::signal_proxy<void(Atk::Hypertext, gint arg1)> signal_link_selected()
{ return gi::signal_proxy<void(Atk::Hypertext, gint arg1)> (*this, "link-selected"); }

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/hypertext_extra_def.hpp>)
#include <atk/hypertext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/hypertext_extra.hpp>)
#include <atk/hypertext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Hypertext : public GI_ATK_HYPERTEXT_BASE
{ typedef GI_ATK_HYPERTEXT_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkHypertext>
{ typedef Atk::Hypertext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class HypertextIfaceDef
{
typedef HypertextIfaceDef self;
public:
typedef Atk::Hypertext instance_type;
typedef ::AtkHypertextIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// AtkHyperlink* Hypertext::get_link (AtkHypertext* hypertext, gint link_index);
// ::AtkHyperlink* Hypertext::get_link (::AtkHypertext* hypertext, gint link_index);
virtual Atk::Hyperlink get_link_ (gint link_index) noexcept = 0;

// gint Hypertext::get_link_index (AtkHypertext* hypertext, gint char_index);
// gint Hypertext::get_link_index (::AtkHypertext* hypertext, gint char_index);
virtual gint get_link_index_ (gint char_index) noexcept = 0;

// gint Hypertext::get_n_links (AtkHypertext* hypertext);
// gint Hypertext::get_n_links (::AtkHypertext* hypertext);
virtual gint get_n_links_ () noexcept = 0;

// void Hypertext::link_selected (AtkHypertext* hypertext, gint link_index);
// void Hypertext::link_selected (::AtkHypertext* hypertext, gint link_index);
virtual void link_selected_ (gint link_index) noexcept = 0;


};

using HypertextImpl = detail::InterfaceImpl<HypertextIfaceDef>;

class HypertextIfaceClassImpl: public detail::InterfaceClassImpl<HypertextImpl>
{
typedef HypertextIfaceClassImpl self;
typedef detail::InterfaceClassImpl<HypertextImpl> super;

protected:
using super::super;

// AtkHyperlink* Hypertext::get_link (AtkHypertext* hypertext, gint link_index);
// ::AtkHyperlink* Hypertext::get_link (::AtkHypertext* hypertext, gint link_index);
GI_INLINE_DECL Atk::Hyperlink get_link_ (gint link_index) noexcept override;

// gint Hypertext::get_link_index (AtkHypertext* hypertext, gint char_index);
// gint Hypertext::get_link_index (::AtkHypertext* hypertext, gint char_index);
GI_INLINE_DECL gint get_link_index_ (gint char_index) noexcept override;

// gint Hypertext::get_n_links (AtkHypertext* hypertext);
// gint Hypertext::get_n_links (::AtkHypertext* hypertext);
GI_INLINE_DECL gint get_n_links_ () noexcept override;

// void Hypertext::link_selected (AtkHypertext* hypertext, gint link_index);
// void Hypertext::link_selected (::AtkHypertext* hypertext, gint link_index);
GI_INLINE_DECL void link_selected_ (gint link_index) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
