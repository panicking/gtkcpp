// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACE_HPP_
#define _GI_GIO_DBUSINTERFACE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceInfo;
class DBusObject;

class DBusInterface;

namespace base {


#define GI_GIO_DBUSINTERFACE_BASE base::DBusInterfaceBase
class DBusInterfaceBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDBusInterface BaseObjectType;

DBusInterfaceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_interface_get_type(); } 

// GDBusObject* g_dbus_interface_dup_object (GDBusInterface* interface_);
// ::GDBusObject* g_dbus_interface_dup_object (::GDBusInterface* interface_);
GI_INLINE_DECL Gio::DBusObject get_object () noexcept;

// GDBusInterfaceInfo* g_dbus_interface_get_info (GDBusInterface* interface_);
// ::GDBusInterfaceInfo* g_dbus_interface_get_info (::GDBusInterface* interface_);
GI_INLINE_DECL Gio::DBusInterfaceInfo get_info () noexcept;

// GDBusObject* g_dbus_interface_get_object (GDBusInterface* interface_);
// ::GDBusObject* g_dbus_interface_get_object (::GDBusInterface* interface_);
// IGNORE; not introspectable; shadowed-by dup_object

// void g_dbus_interface_set_object (GDBusInterface* interface_, GDBusObject* object);
// void g_dbus_interface_set_object (::GDBusInterface* interface_, ::GDBusObject* object);
GI_INLINE_DECL void set_object (Gio::DBusObject object) noexcept;
GI_INLINE_DECL void set_object () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterface_extra_def.hpp>)
#include <gio/dbusinterface_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterface_extra.hpp>)
#include <gio/dbusinterface_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusInterface : public GI_GIO_DBUSINTERFACE_BASE
{ typedef GI_GIO_DBUSINTERFACE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusInterface>
{ typedef Gio::DBusInterface type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusInterfaceIfaceDef
{
typedef DBusInterfaceIfaceDef self;
public:
typedef Gio::DBusInterface instance_type;
typedef ::GDBusInterfaceIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GDBusObject* DBusInterface::dup_object (GDBusInterface* interface_);
// ::GDBusObject* DBusInterface::dup_object (::GDBusInterface* interface_);
virtual Gio::DBusObject dup_object_ () noexcept = 0;

// GDBusInterfaceInfo* DBusInterface::get_info (GDBusInterface* interface_);
// ::GDBusInterfaceInfo* DBusInterface::get_info (::GDBusInterface* interface_);
// SKIP; invalid callback return transfer none

// void DBusInterface::set_object (GDBusInterface* interface_, GDBusObject* object);
// void DBusInterface::set_object (::GDBusInterface* interface_, ::GDBusObject* object);
virtual void set_object_ (Gio::DBusObject object) noexcept = 0;


};

using DBusInterfaceImpl = detail::InterfaceImpl<DBusInterfaceIfaceDef>;

class DBusInterfaceIfaceClassImpl: public detail::InterfaceClassImpl<DBusInterfaceImpl>
{
typedef DBusInterfaceIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusInterfaceImpl> super;

protected:
using super::super;

// GDBusObject* DBusInterface::dup_object (GDBusInterface* interface_);
// ::GDBusObject* DBusInterface::dup_object (::GDBusInterface* interface_);
GI_INLINE_DECL Gio::DBusObject dup_object_ () noexcept override;

// GDBusInterfaceInfo* DBusInterface::get_info (GDBusInterface* interface_);
// ::GDBusInterfaceInfo* DBusInterface::get_info (::GDBusInterface* interface_);
// SKIP; invalid callback return transfer none

// void DBusInterface::set_object (GDBusInterface* interface_, GDBusObject* object);
// void DBusInterface::set_object (::GDBusInterface* interface_, ::GDBusObject* object);
GI_INLINE_DECL void set_object_ (Gio::DBusObject object) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
