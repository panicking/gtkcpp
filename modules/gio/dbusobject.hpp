// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECT_HPP_
#define _GI_GIO_DBUSOBJECT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusInterface;

class DBusObject;

namespace base {


#define GI_GIO_DBUSOBJECT_BASE base::DBusObjectBase
class DBusObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDBusObject BaseObjectType;

DBusObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_object_get_type(); } 

// GDBusInterface* g_dbus_object_get_interface (GDBusObject* object, const gchar* interface_name);
// ::GDBusInterface* g_dbus_object_get_interface (::GDBusObject* object, const char* interface_name);
GI_INLINE_DECL Gio::DBusInterface get_interface (const std::string & interface_name) noexcept;

// GList* g_dbus_object_get_interfaces (GDBusObject* object);
// ::GList* g_dbus_object_get_interfaces (::GDBusObject* object);
GI_INLINE_DECL std::vector<Gio::DBusInterface> get_interfaces () noexcept;

// const gchar* g_dbus_object_get_object_path (GDBusObject* object);
// const char* g_dbus_object_get_object_path (::GDBusObject* object);
GI_INLINE_DECL std::string get_object_path () noexcept;

// signal interface-added
gi::signal_proxy<void(Gio::DBusObject, Gio::DBusInterface interface)> signal_interface_added()
{ return gi::signal_proxy<void(Gio::DBusObject, Gio::DBusInterface interface)> (*this, "interface-added"); }

// signal interface-removed
gi::signal_proxy<void(Gio::DBusObject, Gio::DBusInterface interface)> signal_interface_removed()
{ return gi::signal_proxy<void(Gio::DBusObject, Gio::DBusInterface interface)> (*this, "interface-removed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobject_extra_def.hpp>)
#include <gio/dbusobject_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobject_extra.hpp>)
#include <gio/dbusobject_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusObject : public GI_GIO_DBUSOBJECT_BASE
{ typedef GI_GIO_DBUSOBJECT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusObject>
{ typedef Gio::DBusObject type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusObjectIfaceDef
{
typedef DBusObjectIfaceDef self;
public:
typedef Gio::DBusObject instance_type;
typedef ::GDBusObjectIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GDBusInterface* DBusObject::get_interface (GDBusObject* object, const gchar* interface_name);
// ::GDBusInterface* DBusObject::get_interface (::GDBusObject* object, const char* interface_name);
virtual Gio::DBusInterface get_interface_ (const std::string & interface_name) noexcept = 0;

// GList* DBusObject::get_interfaces (GDBusObject* object);
// ::GList* DBusObject::get_interfaces (::GDBusObject* object);
// SKIP; container return not supported

// const gchar* DBusObject::get_object_path (GDBusObject* object);
// const char* DBusObject::get_object_path (::GDBusObject* object);
// SKIP; invalid callback return transfer none

// void DBusObject::interface_added (GDBusObject* object, GDBusInterface* interface_);
// void DBusObject::interface_added (::GDBusObject* object, ::GDBusInterface* interface_);
virtual void interface_added_ (Gio::DBusInterface interface_) noexcept = 0;

// void DBusObject::interface_removed (GDBusObject* object, GDBusInterface* interface_);
// void DBusObject::interface_removed (::GDBusObject* object, ::GDBusInterface* interface_);
virtual void interface_removed_ (Gio::DBusInterface interface_) noexcept = 0;


};

using DBusObjectImpl = detail::InterfaceImpl<DBusObjectIfaceDef>;

class DBusObjectIfaceClassImpl: public detail::InterfaceClassImpl<DBusObjectImpl>
{
typedef DBusObjectIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusObjectImpl> super;

protected:
using super::super;

// GDBusInterface* DBusObject::get_interface (GDBusObject* object, const gchar* interface_name);
// ::GDBusInterface* DBusObject::get_interface (::GDBusObject* object, const char* interface_name);
GI_INLINE_DECL Gio::DBusInterface get_interface_ (const std::string & interface_name) noexcept override;

// GList* DBusObject::get_interfaces (GDBusObject* object);
// ::GList* DBusObject::get_interfaces (::GDBusObject* object);
// SKIP; container return not supported

// const gchar* DBusObject::get_object_path (GDBusObject* object);
// const char* DBusObject::get_object_path (::GDBusObject* object);
// SKIP; invalid callback return transfer none

// void DBusObject::interface_added (GDBusObject* object, GDBusInterface* interface_);
// void DBusObject::interface_added (::GDBusObject* object, ::GDBusInterface* interface_);
GI_INLINE_DECL void interface_added_ (Gio::DBusInterface interface_) noexcept override;

// void DBusObject::interface_removed (GDBusObject* object, GDBusInterface* interface_);
// void DBusObject::interface_removed (::GDBusObject* object, ::GDBusInterface* interface_);
GI_INLINE_DECL void interface_removed_ (Gio::DBusInterface interface_) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
