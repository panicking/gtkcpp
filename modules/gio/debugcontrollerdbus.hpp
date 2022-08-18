// AUTO-GENERATED

#ifndef _GI_GIO_DEBUGCONTROLLERDBUS_HPP_
#define _GI_GIO_DEBUGCONTROLLERDBUS_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;
class DBusConnection;
class DBusMethodInvocation;
class DebugController;
class Initable;

class DebugControllerDBus;

namespace base {


#define GI_GIO_DEBUGCONTROLLERDBUS_BASE base::DebugControllerDBusBase
class DebugControllerDBusBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDebugControllerDBus BaseObjectType;

DebugControllerDBusBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_debug_controller_dbus_get_type(); } 

GI_INLINE_DECL Gio::DebugController interface_ (gi::interface_tag<Gio::DebugController>);

GI_INLINE_DECL operator Gio::DebugController ();

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GDebugControllerDBus* g_debug_controller_dbus_new (GDBusConnection* connection, GCancellable* cancellable, GError ** error);
// ::GDebugControllerDBus* g_debug_controller_dbus_new (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
static GI_INLINE_DECL Gio::DebugControllerDBus new_ (Gio::DBusConnection connection, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DebugControllerDBus new_ (Gio::DBusConnection connection);
static GI_INLINE_DECL Gio::DebugControllerDBus new_ (Gio::DBusConnection connection, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DebugControllerDBus new_ (Gio::DBusConnection connection, GLib::Error * _error) noexcept;

// void g_debug_controller_dbus_stop (GDebugControllerDBus* self);
// void g_debug_controller_dbus_stop (::GDebugControllerDBus* self);
GI_INLINE_DECL void stop () noexcept;

gi::property_proxy<Gio::DBusConnection, base::DebugControllerDBusBase> property_connection()
{ return gi::property_proxy<Gio::DBusConnection, base::DebugControllerDBusBase> (*this, "connection"); }
const gi::property_proxy<Gio::DBusConnection, base::DebugControllerDBusBase> property_connection() const
{ return gi::property_proxy<Gio::DBusConnection, base::DebugControllerDBusBase> (*this, "connection"); }

// signal authorize
gi::signal_proxy<bool(Gio::DebugControllerDBus, Gio::DBusMethodInvocation invocation)> signal_authorize()
{ return gi::signal_proxy<bool(Gio::DebugControllerDBus, Gio::DBusMethodInvocation invocation)> (*this, "authorize"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/debugcontrollerdbus_extra_def.hpp>)
#include <gio/debugcontrollerdbus_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/debugcontrollerdbus_extra.hpp>)
#include <gio/debugcontrollerdbus_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DebugControllerDBus : public GI_GIO_DEBUGCONTROLLERDBUS_BASE
{ typedef GI_GIO_DEBUGCONTROLLERDBUS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDebugControllerDBus>
{ typedef Gio::DebugControllerDBus type; }; 

} // namespace repository

} // namespace gi

#include "debugcontroller.hpp"
#include "initable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DebugControllerDBusClassDef
{
typedef DebugControllerDBusClassDef self;
public:
typedef Gio::DebugControllerDBus instance_type;
typedef ::GDebugControllerDBusClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean DebugControllerDBus::authorize (GDebugControllerDBus* controller, GDBusMethodInvocation* invocation);
// gboolean DebugControllerDBus::authorize (::GDebugControllerDBus* controller, ::GDBusMethodInvocation* invocation);
virtual bool authorize_ (Gio::DBusMethodInvocation invocation) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DebugControllerDBusClass: public detail::ClassTemplate<Gio::impl::internal::DebugControllerDBusClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DebugControllerInterfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl>
{
typedef DebugControllerDBusClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DebugControllerDBusClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DebugControllerInterfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::DebugControllerInterfaceClassImpl GDebugControllerInterface_type;
typedef Gio::impl::internal::InitableIfaceClassImpl GInitableIface_type;


// gboolean DebugControllerDBus::authorize (GDebugControllerDBus* controller, GDBusMethodInvocation* invocation);
// gboolean DebugControllerDBus::authorize (::GDebugControllerDBus* controller, ::GDBusMethodInvocation* invocation);
GI_INLINE_DECL bool authorize_ (Gio::DBusMethodInvocation invocation) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using DebugControllerDBusImpl = detail::ObjectImpl<DebugControllerDBus, internal::DebugControllerDBusClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
