// AUTO-GENERATED

#ifndef _GI_ATK_WINDOW_HPP_
#define _GI_ATK_WINDOW_HPP_


namespace gi {

namespace repository {

namespace Atk {


class Window;

namespace base {


#define GI_ATK_WINDOW_BASE base::WindowBase
class WindowBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkWindow BaseObjectType;

WindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_window_get_type(); } 

// signal activate
gi::signal_proxy<void(Atk::Window)> signal_activate()
{ return gi::signal_proxy<void(Atk::Window)> (*this, "activate"); }

// signal create
gi::signal_proxy<void(Atk::Window)> signal_create()
{ return gi::signal_proxy<void(Atk::Window)> (*this, "create"); }

// signal deactivate
gi::signal_proxy<void(Atk::Window)> signal_deactivate()
{ return gi::signal_proxy<void(Atk::Window)> (*this, "deactivate"); }

// signal destroy
gi::signal_proxy<void(Atk::Window)> signal_destroy()
{ return gi::signal_proxy<void(Atk::Window)> (*this, "destroy"); }

// signal maximize
gi::signal_proxy<void(Atk::Window)> signal_maximize()
{ return gi::signal_proxy<void(Atk::Window)> (*this, "maximize"); }

// signal minimize
gi::signal_proxy<void(Atk::Window)> signal_minimize()
{ return gi::signal_proxy<void(Atk::Window)> (*this, "minimize"); }

// signal move
gi::signal_proxy<void(Atk::Window)> signal_move()
{ return gi::signal_proxy<void(Atk::Window)> (*this, "move"); }

// signal resize
gi::signal_proxy<void(Atk::Window)> signal_resize()
{ return gi::signal_proxy<void(Atk::Window)> (*this, "resize"); }

// signal restore
gi::signal_proxy<void(Atk::Window)> signal_restore()
{ return gi::signal_proxy<void(Atk::Window)> (*this, "restore"); }

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/window_extra_def.hpp>)
#include <atk/window_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/window_extra.hpp>)
#include <atk/window_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Window : public GI_ATK_WINDOW_BASE
{ typedef GI_ATK_WINDOW_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkWindow>
{ typedef Atk::Window type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class WindowIfaceDef
{
typedef WindowIfaceDef self;
public:
typedef Atk::Window instance_type;
typedef ::AtkWindowIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using WindowImpl = detail::InterfaceImpl<WindowIfaceDef>;

class WindowIfaceClassImpl: public detail::InterfaceClassImpl<WindowImpl>
{
typedef WindowIfaceClassImpl self;
typedef detail::InterfaceClassImpl<WindowImpl> super;

protected:
using super::super;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
