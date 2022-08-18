// AUTO-GENERATED

#ifndef _GI_ATK_IMPLEMENTORIFACE_HPP_
#define _GI_ATK_IMPLEMENTORIFACE_HPP_


namespace gi {

namespace repository {

namespace Atk {


class ImplementorIface;

namespace base {


#define GI_ATK_IMPLEMENTORIFACE_BASE base::ImplementorIfaceBase
class ImplementorIfaceBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkImplementorIface BaseObjectType;

ImplementorIfaceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_implementor_get_type(); } 

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/implementoriface_extra_def.hpp>)
#include <atk/implementoriface_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/implementoriface_extra.hpp>)
#include <atk/implementoriface_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class ImplementorIface : public GI_ATK_IMPLEMENTORIFACE_BASE
{ typedef GI_ATK_IMPLEMENTORIFACE_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkImplementorIface>
{ typedef Atk::ImplementorIface type; }; 

} // namespace repository

} // namespace gi

#endif
