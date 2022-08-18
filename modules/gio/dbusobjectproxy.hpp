// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTPROXY_HPP_
#define _GI_GIO_DBUSOBJECTPROXY_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusConnection;
class DBusObject;

class DBusObjectProxy;

namespace base {


#define GI_GIO_DBUSOBJECTPROXY_BASE base::DBusObjectProxyBase
class DBusObjectProxyBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusObjectProxy BaseObjectType;

DBusObjectProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_object_proxy_get_type(); } 

GI_INLINE_DECL Gio::DBusObject interface_ (gi::interface_tag<Gio::DBusObject>);

GI_INLINE_DECL operator Gio::DBusObject ();

// GDBusObjectProxy* g_dbus_object_proxy_new (GDBusConnection* connection, const gchar* object_path);
// ::GDBusObjectProxy* g_dbus_object_proxy_new (::GDBusConnection* connection, const char* object_path);
static GI_INLINE_DECL Gio::DBusObjectProxy new_ (Gio::DBusConnection connection, const std::string & object_path) noexcept;

// GDBusConnection* g_dbus_object_proxy_get_connection (GDBusObjectProxy* proxy);
// ::GDBusConnection* g_dbus_object_proxy_get_connection (::GDBusObjectProxy* proxy);
GI_INLINE_DECL Gio::DBusConnection get_connection () noexcept;

gi::property_proxy<Gio::DBusConnection, base::DBusObjectProxyBase> property_g_connection()
{ return gi::property_proxy<Gio::DBusConnection, base::DBusObjectProxyBase> (*this, "g-connection"); }
const gi::property_proxy<Gio::DBusConnection, base::DBusObjectProxyBase> property_g_connection() const
{ return gi::property_proxy<Gio::DBusConnection, base::DBusObjectProxyBase> (*this, "g-connection"); }

gi::property_proxy<std::string, base::DBusObjectProxyBase> property_g_object_path()
{ return gi::property_proxy<std::string, base::DBusObjectProxyBase> (*this, "g-object-path"); }
const gi::property_proxy<std::string, base::DBusObjectProxyBase> property_g_object_path() const
{ return gi::property_proxy<std::string, base::DBusObjectProxyBase> (*this, "g-object-path"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectproxy_extra_def.hpp>)
#include <gio/dbusobjectproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectproxy_extra.hpp>)
#include <gio/dbusobjectproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusObjectProxy : public GI_GIO_DBUSOBJECTPROXY_BASE
{ typedef GI_GIO_DBUSOBJECTPROXY_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusObjectProxy>
{ typedef Gio::DBusObjectProxy type; }; 

} // namespace repository

} // namespace gi

#include "dbusobject.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusObjectProxyClassDef
{
typedef DBusObjectProxyClassDef self;
public:
typedef Gio::DBusObjectProxy instance_type;
typedef ::GDBusObjectProxyClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DBusObjectProxyClass: public detail::ClassTemplate<Gio::impl::internal::DBusObjectProxyClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusObjectIfaceClassImpl>
{
typedef DBusObjectProxyClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DBusObjectProxyClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::DBusObjectIfaceClassImpl GDBusObjectIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using DBusObjectProxyImpl = detail::ObjectImpl<DBusObjectProxy, internal::DBusObjectProxyClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
