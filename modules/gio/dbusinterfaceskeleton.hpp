// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACESKELETON_HPP_
#define _GI_GIO_DBUSINTERFACESKELETON_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusConnection;
class DBusInterface;
class DBusInterfaceInfo;
class DBusMethodInvocation;

class DBusInterfaceSkeleton;

namespace base {


#define GI_GIO_DBUSINTERFACESKELETON_BASE base::DBusInterfaceSkeletonBase
class DBusInterfaceSkeletonBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusInterfaceSkeleton BaseObjectType;

DBusInterfaceSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_interface_skeleton_get_type(); } 

GI_INLINE_DECL Gio::DBusInterface interface_ (gi::interface_tag<Gio::DBusInterface>);

GI_INLINE_DECL operator Gio::DBusInterface ();

// gboolean g_dbus_interface_skeleton_export (GDBusInterfaceSkeleton* interface_, GDBusConnection* connection, const gchar* object_path, GError ** error);
// gboolean g_dbus_interface_skeleton_export (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection, const char* object_path, GError ** error);
GI_INLINE_DECL bool export_ (Gio::DBusConnection connection, const std::string & object_path);
GI_INLINE_DECL bool export_ (Gio::DBusConnection connection, const std::string & object_path, GLib::Error * _error) noexcept;

// void g_dbus_interface_skeleton_flush (GDBusInterfaceSkeleton* interface_);
// void g_dbus_interface_skeleton_flush (::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL void flush () noexcept;

// GDBusConnection* g_dbus_interface_skeleton_get_connection (GDBusInterfaceSkeleton* interface_);
// ::GDBusConnection* g_dbus_interface_skeleton_get_connection (::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL Gio::DBusConnection get_connection () noexcept;

// GList* g_dbus_interface_skeleton_get_connections (GDBusInterfaceSkeleton* interface_);
// ::GList* g_dbus_interface_skeleton_get_connections (::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL std::vector<Gio::DBusConnection> get_connections () noexcept;

// GDBusInterfaceSkeletonFlags g_dbus_interface_skeleton_get_flags (GDBusInterfaceSkeleton* interface_);
// ::GDBusInterfaceSkeletonFlags g_dbus_interface_skeleton_get_flags (::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL Gio::DBusInterfaceSkeletonFlags get_flags () noexcept;

// GDBusInterfaceInfo* g_dbus_interface_skeleton_get_info (GDBusInterfaceSkeleton* interface_);
// ::GDBusInterfaceInfo* g_dbus_interface_skeleton_get_info (::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL Gio::DBusInterfaceInfo get_info () noexcept;

// const gchar* g_dbus_interface_skeleton_get_object_path (GDBusInterfaceSkeleton* interface_);
// const char* g_dbus_interface_skeleton_get_object_path (::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL std::string get_object_path () noexcept;

// GVariant* g_dbus_interface_skeleton_get_properties (GDBusInterfaceSkeleton* interface_);
// ::GVariant* g_dbus_interface_skeleton_get_properties (::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL GLib::Variant get_properties () noexcept;

// FAILURE on g_dbus_interface_skeleton_get_vtable; No such node (<xmlattr>.transfer-ownership)
// gboolean g_dbus_interface_skeleton_has_connection (GDBusInterfaceSkeleton* interface_, GDBusConnection* connection);
// gboolean g_dbus_interface_skeleton_has_connection (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection);
GI_INLINE_DECL bool has_connection (Gio::DBusConnection connection) noexcept;

// void g_dbus_interface_skeleton_set_flags (GDBusInterfaceSkeleton* interface_, GDBusInterfaceSkeletonFlags flags);
// void g_dbus_interface_skeleton_set_flags (::GDBusInterfaceSkeleton* interface_, ::GDBusInterfaceSkeletonFlags flags);
GI_INLINE_DECL void set_flags (Gio::DBusInterfaceSkeletonFlags flags) noexcept;

// void g_dbus_interface_skeleton_unexport (GDBusInterfaceSkeleton* interface_);
// void g_dbus_interface_skeleton_unexport (::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL void unexport () noexcept;

// void g_dbus_interface_skeleton_unexport_from_connection (GDBusInterfaceSkeleton* interface_, GDBusConnection* connection);
// void g_dbus_interface_skeleton_unexport_from_connection (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection);
GI_INLINE_DECL void unexport_from_connection (Gio::DBusConnection connection) noexcept;

gi::property_proxy<Gio::DBusInterfaceSkeletonFlags, base::DBusInterfaceSkeletonBase> property_g_flags()
{ return gi::property_proxy<Gio::DBusInterfaceSkeletonFlags, base::DBusInterfaceSkeletonBase> (*this, "g-flags"); }
const gi::property_proxy<Gio::DBusInterfaceSkeletonFlags, base::DBusInterfaceSkeletonBase> property_g_flags() const
{ return gi::property_proxy<Gio::DBusInterfaceSkeletonFlags, base::DBusInterfaceSkeletonBase> (*this, "g-flags"); }

// signal g-authorize-method
gi::signal_proxy<bool(Gio::DBusInterfaceSkeleton, Gio::DBusMethodInvocation invocation)> signal_g_authorize_method()
{ return gi::signal_proxy<bool(Gio::DBusInterfaceSkeleton, Gio::DBusMethodInvocation invocation)> (*this, "g-authorize-method"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceskeleton_extra_def.hpp>)
#include <gio/dbusinterfaceskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceskeleton_extra.hpp>)
#include <gio/dbusinterfaceskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceSkeleton : public GI_GIO_DBUSINTERFACESKELETON_BASE
{ typedef GI_GIO_DBUSINTERFACESKELETON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusInterfaceSkeleton>
{ typedef Gio::DBusInterfaceSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "dbusinterface.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusInterfaceSkeletonClassDef
{
typedef DBusInterfaceSkeletonClassDef self;
public:
typedef Gio::DBusInterfaceSkeleton instance_type;
typedef ::GDBusInterfaceSkeletonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void DBusInterfaceSkeleton::flush (GDBusInterfaceSkeleton* interface_);
// void DBusInterfaceSkeleton::flush (::GDBusInterfaceSkeleton* interface_);
virtual void flush_ () noexcept = 0;

// gboolean DBusInterfaceSkeleton::g_authorize_method (GDBusInterfaceSkeleton* interface_, GDBusMethodInvocation* invocation);
// gboolean DBusInterfaceSkeleton::g_authorize_method (::GDBusInterfaceSkeleton* interface_, ::GDBusMethodInvocation* invocation);
virtual bool g_authorize_method_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// GDBusInterfaceInfo* DBusInterfaceSkeleton::get_info (GDBusInterfaceSkeleton* interface_);
// ::GDBusInterfaceInfo* DBusInterfaceSkeleton::get_info (::GDBusInterfaceSkeleton* interface_);
// SKIP; invalid callback return transfer none

// GVariant* DBusInterfaceSkeleton::get_properties (GDBusInterfaceSkeleton* interface_);
// ::GVariant* DBusInterfaceSkeleton::get_properties (::GDBusInterfaceSkeleton* interface_);
virtual GLib::Variant get_properties_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DBusInterfaceSkeletonClass: public detail::ClassTemplate<Gio::impl::internal::DBusInterfaceSkeletonClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusInterfaceIfaceClassImpl>
{
typedef DBusInterfaceSkeletonClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DBusInterfaceSkeletonClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusInterfaceIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::DBusInterfaceIfaceClassImpl GDBusInterfaceIface_type;


// void DBusInterfaceSkeleton::flush (GDBusInterfaceSkeleton* interface_);
// void DBusInterfaceSkeleton::flush (::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL void flush_ () noexcept override;

// gboolean DBusInterfaceSkeleton::g_authorize_method (GDBusInterfaceSkeleton* interface_, GDBusMethodInvocation* invocation);
// gboolean DBusInterfaceSkeleton::g_authorize_method (::GDBusInterfaceSkeleton* interface_, ::GDBusMethodInvocation* invocation);
GI_INLINE_DECL bool g_authorize_method_ (Gio::DBusMethodInvocation invocation) noexcept override;

// GDBusInterfaceInfo* DBusInterfaceSkeleton::get_info (GDBusInterfaceSkeleton* interface_);
// ::GDBusInterfaceInfo* DBusInterfaceSkeleton::get_info (::GDBusInterfaceSkeleton* interface_);
// SKIP; invalid callback return transfer none

// GVariant* DBusInterfaceSkeleton::get_properties (GDBusInterfaceSkeleton* interface_);
// ::GVariant* DBusInterfaceSkeleton::get_properties (::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL GLib::Variant get_properties_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using DBusInterfaceSkeletonImpl = detail::ObjectImpl<DBusInterfaceSkeleton, internal::DBusInterfaceSkeletonClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
