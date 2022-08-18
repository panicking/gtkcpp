// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTMANAGER_HPP_
#define _GI_GIO_DBUSOBJECTMANAGER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusInterface;
class DBusObject;

class DBusObjectManager;

namespace base {


#define GI_GIO_DBUSOBJECTMANAGER_BASE base::DBusObjectManagerBase
class DBusObjectManagerBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDBusObjectManager BaseObjectType;

DBusObjectManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_object_manager_get_type(); } 

// GDBusInterface* g_dbus_object_manager_get_interface (GDBusObjectManager* manager, const gchar* object_path, const gchar* interface_name);
// ::GDBusInterface* g_dbus_object_manager_get_interface (::GDBusObjectManager* manager, const char* object_path, const char* interface_name);
GI_INLINE_DECL Gio::DBusInterface get_interface (const std::string & object_path, const std::string & interface_name) noexcept;

// GDBusObject* g_dbus_object_manager_get_object (GDBusObjectManager* manager, const gchar* object_path);
// ::GDBusObject* g_dbus_object_manager_get_object (::GDBusObjectManager* manager, const char* object_path);
GI_INLINE_DECL Gio::DBusObject get_object (const std::string & object_path) noexcept;

// const gchar* g_dbus_object_manager_get_object_path (GDBusObjectManager* manager);
// const char* g_dbus_object_manager_get_object_path (::GDBusObjectManager* manager);
GI_INLINE_DECL std::string get_object_path () noexcept;

// GList* g_dbus_object_manager_get_objects (GDBusObjectManager* manager);
// ::GList* g_dbus_object_manager_get_objects (::GDBusObjectManager* manager);
GI_INLINE_DECL std::vector<Gio::DBusObject> get_objects () noexcept;

// signal interface-added
gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object, Gio::DBusInterface interface)> signal_interface_added()
{ return gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object, Gio::DBusInterface interface)> (*this, "interface-added"); }

// signal interface-removed
gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object, Gio::DBusInterface interface)> signal_interface_removed()
{ return gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object, Gio::DBusInterface interface)> (*this, "interface-removed"); }

// signal object-added
gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object)> signal_object_added()
{ return gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object)> (*this, "object-added"); }

// signal object-removed
gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object)> signal_object_removed()
{ return gi::signal_proxy<void(Gio::DBusObjectManager, Gio::DBusObject object)> (*this, "object-removed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanager_extra_def.hpp>)
#include <gio/dbusobjectmanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanager_extra.hpp>)
#include <gio/dbusobjectmanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusObjectManager : public GI_GIO_DBUSOBJECTMANAGER_BASE
{ typedef GI_GIO_DBUSOBJECTMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusObjectManager>
{ typedef Gio::DBusObjectManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusObjectManagerIfaceDef
{
typedef DBusObjectManagerIfaceDef self;
public:
typedef Gio::DBusObjectManager instance_type;
typedef ::GDBusObjectManagerIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GDBusInterface* DBusObjectManager::get_interface (GDBusObjectManager* manager, const gchar* object_path, const gchar* interface_name);
// ::GDBusInterface* DBusObjectManager::get_interface (::GDBusObjectManager* manager, const char* object_path, const char* interface_name);
virtual Gio::DBusInterface get_interface_ (const std::string & object_path, const std::string & interface_name) noexcept = 0;

// GDBusObject* DBusObjectManager::get_object (GDBusObjectManager* manager, const gchar* object_path);
// ::GDBusObject* DBusObjectManager::get_object (::GDBusObjectManager* manager, const char* object_path);
virtual Gio::DBusObject get_object_ (const std::string & object_path) noexcept = 0;

// const gchar* DBusObjectManager::get_object_path (GDBusObjectManager* manager);
// const char* DBusObjectManager::get_object_path (::GDBusObjectManager* manager);
// SKIP; invalid callback return transfer none

// GList* DBusObjectManager::get_objects (GDBusObjectManager* manager);
// ::GList* DBusObjectManager::get_objects (::GDBusObjectManager* manager);
// SKIP; container return not supported

// void DBusObjectManager::interface_added (GDBusObjectManager* manager, GDBusObject* object, GDBusInterface* interface_);
// void DBusObjectManager::interface_added (::GDBusObjectManager* manager, ::GDBusObject* object, ::GDBusInterface* interface_);
virtual void interface_added_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept = 0;

// void DBusObjectManager::interface_removed (GDBusObjectManager* manager, GDBusObject* object, GDBusInterface* interface_);
// void DBusObjectManager::interface_removed (::GDBusObjectManager* manager, ::GDBusObject* object, ::GDBusInterface* interface_);
virtual void interface_removed_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept = 0;

// void DBusObjectManager::object_added (GDBusObjectManager* manager, GDBusObject* object);
// void DBusObjectManager::object_added (::GDBusObjectManager* manager, ::GDBusObject* object);
virtual void object_added_ (Gio::DBusObject object) noexcept = 0;

// void DBusObjectManager::object_removed (GDBusObjectManager* manager, GDBusObject* object);
// void DBusObjectManager::object_removed (::GDBusObjectManager* manager, ::GDBusObject* object);
virtual void object_removed_ (Gio::DBusObject object) noexcept = 0;


};

using DBusObjectManagerImpl = detail::InterfaceImpl<DBusObjectManagerIfaceDef>;

class DBusObjectManagerIfaceClassImpl: public detail::InterfaceClassImpl<DBusObjectManagerImpl>
{
typedef DBusObjectManagerIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusObjectManagerImpl> super;

protected:
using super::super;

// GDBusInterface* DBusObjectManager::get_interface (GDBusObjectManager* manager, const gchar* object_path, const gchar* interface_name);
// ::GDBusInterface* DBusObjectManager::get_interface (::GDBusObjectManager* manager, const char* object_path, const char* interface_name);
GI_INLINE_DECL Gio::DBusInterface get_interface_ (const std::string & object_path, const std::string & interface_name) noexcept override;

// GDBusObject* DBusObjectManager::get_object (GDBusObjectManager* manager, const gchar* object_path);
// ::GDBusObject* DBusObjectManager::get_object (::GDBusObjectManager* manager, const char* object_path);
GI_INLINE_DECL Gio::DBusObject get_object_ (const std::string & object_path) noexcept override;

// const gchar* DBusObjectManager::get_object_path (GDBusObjectManager* manager);
// const char* DBusObjectManager::get_object_path (::GDBusObjectManager* manager);
// SKIP; invalid callback return transfer none

// GList* DBusObjectManager::get_objects (GDBusObjectManager* manager);
// ::GList* DBusObjectManager::get_objects (::GDBusObjectManager* manager);
// SKIP; container return not supported

// void DBusObjectManager::interface_added (GDBusObjectManager* manager, GDBusObject* object, GDBusInterface* interface_);
// void DBusObjectManager::interface_added (::GDBusObjectManager* manager, ::GDBusObject* object, ::GDBusInterface* interface_);
GI_INLINE_DECL void interface_added_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept override;

// void DBusObjectManager::interface_removed (GDBusObjectManager* manager, GDBusObject* object, GDBusInterface* interface_);
// void DBusObjectManager::interface_removed (::GDBusObjectManager* manager, ::GDBusObject* object, ::GDBusInterface* interface_);
GI_INLINE_DECL void interface_removed_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept override;

// void DBusObjectManager::object_added (GDBusObjectManager* manager, GDBusObject* object);
// void DBusObjectManager::object_added (::GDBusObjectManager* manager, ::GDBusObject* object);
GI_INLINE_DECL void object_added_ (Gio::DBusObject object) noexcept override;

// void DBusObjectManager::object_removed (GDBusObjectManager* manager, GDBusObject* object);
// void DBusObjectManager::object_removed (::GDBusObjectManager* manager, ::GDBusObject* object);
GI_INLINE_DECL void object_removed_ (Gio::DBusObject object) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
