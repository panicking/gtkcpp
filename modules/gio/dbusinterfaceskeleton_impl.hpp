// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACESKELETON_IMPL_HPP_
#define _GI_GIO_DBUSINTERFACESKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::DBusInterface DBusInterfaceSkeletonBase::interface_ (gi::interface_tag<Gio::DBusInterface>)
{ return gi::wrap ((Gio::DBusInterface::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DBusInterfaceSkeletonBase::operator Gio::DBusInterface ()
{ return interface_ (gi::interface_tag<Gio::DBusInterface>()); }

// gboolean g_dbus_interface_skeleton_export (GDBusInterfaceSkeleton* interface_, GDBusConnection* connection, const gchar* object_path, GError ** error);
// gboolean g_dbus_interface_skeleton_export (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection, const char* object_path, GError ** error);
bool base::DBusInterfaceSkeletonBase::export_ (Gio::DBusConnection connection, const std::string & object_path)
{
  typedef gboolean (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection, const char* object_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_export;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusConnection*) (connection_to_c), (const char*) (object_path_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusInterfaceSkeletonBase::export_ (Gio::DBusConnection connection, const std::string & object_path, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection, const char* object_path, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_export;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusConnection*) (connection_to_c), (const char*) (object_path_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_dbus_interface_skeleton_flush (GDBusInterfaceSkeleton* interface_);
// void g_dbus_interface_skeleton_flush (::GDBusInterfaceSkeleton* interface_);
void base::DBusInterfaceSkeletonBase::flush () noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_flush;
  call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
}

// GDBusConnection* g_dbus_interface_skeleton_get_connection (GDBusInterfaceSkeleton* interface_);
// ::GDBusConnection* g_dbus_interface_skeleton_get_connection (::GDBusInterfaceSkeleton* interface_);
Gio::DBusConnection base::DBusInterfaceSkeletonBase::get_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_get_connection;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* g_dbus_interface_skeleton_get_connections (GDBusInterfaceSkeleton* interface_);
// ::GList* g_dbus_interface_skeleton_get_connections (::GDBusInterfaceSkeleton* interface_);
std::vector<Gio::DBusConnection> base::DBusInterfaceSkeletonBase::get_connections () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_get_connections;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::detail::wrap_list<Gio::DBusConnection> (_temp_ret, gi::transfer_full);
}

// GDBusInterfaceSkeletonFlags g_dbus_interface_skeleton_get_flags (GDBusInterfaceSkeleton* interface_);
// ::GDBusInterfaceSkeletonFlags g_dbus_interface_skeleton_get_flags (::GDBusInterfaceSkeleton* interface_);
Gio::DBusInterfaceSkeletonFlags base::DBusInterfaceSkeletonBase::get_flags () noexcept
{
  typedef ::GDBusInterfaceSkeletonFlags (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_get_flags;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GDBusInterfaceInfo* g_dbus_interface_skeleton_get_info (GDBusInterfaceSkeleton* interface_);
// ::GDBusInterfaceInfo* g_dbus_interface_skeleton_get_info (::GDBusInterfaceSkeleton* interface_);
Gio::DBusInterfaceInfo base::DBusInterfaceSkeletonBase::get_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_get_info;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dbus_interface_skeleton_get_object_path (GDBusInterfaceSkeleton* interface_);
// const char* g_dbus_interface_skeleton_get_object_path (::GDBusInterfaceSkeleton* interface_);
std::string base::DBusInterfaceSkeletonBase::get_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_dbus_interface_skeleton_get_properties (GDBusInterfaceSkeleton* interface_);
// ::GVariant* g_dbus_interface_skeleton_get_properties (::GDBusInterfaceSkeleton* interface_);
GLib::Variant base::DBusInterfaceSkeletonBase::get_properties () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_get_properties;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// FAILURE on g_dbus_interface_skeleton_get_vtable; No such node (<xmlattr>.transfer-ownership)
// gboolean g_dbus_interface_skeleton_has_connection (GDBusInterfaceSkeleton* interface_, GDBusConnection* connection);
// gboolean g_dbus_interface_skeleton_has_connection (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection);
bool base::DBusInterfaceSkeletonBase::has_connection (Gio::DBusConnection connection) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_has_connection;
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusConnection*) (connection_to_c));
  return _temp_ret;
}

// void g_dbus_interface_skeleton_set_flags (GDBusInterfaceSkeleton* interface_, GDBusInterfaceSkeletonFlags flags);
// void g_dbus_interface_skeleton_set_flags (::GDBusInterfaceSkeleton* interface_, ::GDBusInterfaceSkeletonFlags flags);
void base::DBusInterfaceSkeletonBase::set_flags (Gio::DBusInterfaceSkeletonFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusInterfaceSkeletonFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusInterfaceSkeletonFlags) (flags_to_c));
}

// void g_dbus_interface_skeleton_unexport (GDBusInterfaceSkeleton* interface_);
// void g_dbus_interface_skeleton_unexport (::GDBusInterfaceSkeleton* interface_);
void base::DBusInterfaceSkeletonBase::unexport () noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_unexport;
  call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
}

// void g_dbus_interface_skeleton_unexport_from_connection (GDBusInterfaceSkeleton* interface_, GDBusConnection* connection);
// void g_dbus_interface_skeleton_unexport_from_connection (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection);
void base::DBusInterfaceSkeletonBase::unexport_from_connection (Gio::DBusConnection connection) noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_skeleton_unexport_from_connection;
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusConnection*) (connection_to_c));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceskeleton_extra_def_impl.hpp>)
#include <gio/dbusinterfaceskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterfaceskeleton_extra_impl.hpp>)
#include <gio/dbusinterfaceskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusInterfaceSkeletonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GDBusInterfaceSkeletonClass *methods = (::GDBusInterfaceSkeletonClass *) class_struct;
  (void) methods;

  methods->flush = (decltype (methods->flush)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::flush_>;
  methods->g_authorize_method = (decltype (methods->g_authorize_method)) detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::g_authorize_method_>;
  methods->get_properties = (decltype (methods->get_properties)) detail::method_wrapper<self, GLib::Variant (*) (), gi::transfer_full_t>::wrapper<&self::get_properties_>;
}

// void DBusInterfaceSkeleton::flush (GDBusInterfaceSkeleton* interface_);
// void DBusInterfaceSkeleton::flush (::GDBusInterfaceSkeleton* interface_);
void DBusInterfaceSkeletonClass::flush_ () noexcept
{
  if (!get_struct_()->flush) return ;
  typedef void (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->flush;
  call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
}

// gboolean DBusInterfaceSkeleton::g_authorize_method (GDBusInterfaceSkeleton* interface_, GDBusMethodInvocation* invocation);
// gboolean DBusInterfaceSkeleton::g_authorize_method (::GDBusInterfaceSkeleton* interface_, ::GDBusMethodInvocation* invocation);
bool DBusInterfaceSkeletonClass::g_authorize_method_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->g_authorize_method) return bool{};
  typedef gboolean (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->g_authorize_method;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// GDBusInterfaceInfo* DBusInterfaceSkeleton::get_info (GDBusInterfaceSkeleton* interface_);
// ::GDBusInterfaceInfo* DBusInterfaceSkeleton::get_info (::GDBusInterfaceSkeleton* interface_);
// SKIP; invalid callback return transfer none

// GVariant* DBusInterfaceSkeleton::get_properties (GDBusInterfaceSkeleton* interface_);
// ::GVariant* DBusInterfaceSkeleton::get_properties (::GDBusInterfaceSkeleton* interface_);
GLib::Variant DBusInterfaceSkeletonClass::get_properties_ () noexcept
{
  if (!get_struct_()->get_properties) return GLib::Variant{};
  typedef ::GVariant* (*call_wrap_t) (::GDBusInterfaceSkeleton* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_properties;
  auto _temp_ret = call_wrap_v ((::GDBusInterfaceSkeleton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
