// AUTO-GENERATED

#ifndef _GI_GIO_DEBUGCONTROLLER_HPP_
#define _GI_GIO_DEBUGCONTROLLER_HPP_


namespace gi {

namespace repository {

namespace Gio {


class DebugController;

namespace base {


#define GI_GIO_DEBUGCONTROLLER_BASE base::DebugControllerBase
class DebugControllerBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDebugController BaseObjectType;

DebugControllerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_debug_controller_get_type(); } 

// gboolean g_debug_controller_get_debug_enabled (GDebugController* self);
// gboolean g_debug_controller_get_debug_enabled (::GDebugController* self);
GI_INLINE_DECL bool get_debug_enabled () noexcept;

// void g_debug_controller_set_debug_enabled (GDebugController* self, gboolean debug_enabled);
// void g_debug_controller_set_debug_enabled (::GDebugController* self, gboolean debug_enabled);
GI_INLINE_DECL void set_debug_enabled (gboolean debug_enabled) noexcept;

gi::property_proxy<bool, base::DebugControllerBase> property_debug_enabled()
{ return gi::property_proxy<bool, base::DebugControllerBase> (*this, "debug-enabled"); }
const gi::property_proxy<bool, base::DebugControllerBase> property_debug_enabled() const
{ return gi::property_proxy<bool, base::DebugControllerBase> (*this, "debug-enabled"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/debugcontroller_extra_def.hpp>)
#include <gio/debugcontroller_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/debugcontroller_extra.hpp>)
#include <gio/debugcontroller_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DebugController : public GI_GIO_DEBUGCONTROLLER_BASE
{ typedef GI_GIO_DEBUGCONTROLLER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDebugController>
{ typedef Gio::DebugController type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DebugControllerInterfaceDef
{
typedef DebugControllerInterfaceDef self;
public:
typedef Gio::DebugController instance_type;
typedef ::GDebugControllerInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using DebugControllerImpl = detail::InterfaceImpl<DebugControllerInterfaceDef>;

class DebugControllerInterfaceClassImpl: public detail::InterfaceClassImpl<DebugControllerImpl>
{
typedef DebugControllerInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<DebugControllerImpl> super;

protected:
using super::super;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
