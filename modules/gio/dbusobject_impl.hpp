// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECT_IMPL_HPP_
#define _GI_GIO_DBUSOBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusInterface* g_dbus_object_get_interface (GDBusObject* object, const gchar* interface_name);
// ::GDBusInterface* g_dbus_object_get_interface (::GDBusObject* object, const char* interface_name);
Gio::DBusInterface base::DBusObjectBase::get_interface (const std::string & interface_name) noexcept
{
  typedef ::GDBusInterface* (*call_wrap_t) (::GDBusObject* object, const char* interface_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_get_interface;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusObject*) (gobj_()), (const char*) (interface_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* g_dbus_object_get_interfaces (GDBusObject* object);
// ::GList* g_dbus_object_get_interfaces (::GDBusObject* object);
std::vector<Gio::DBusInterface> base::DBusObjectBase::get_interfaces () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_get_interfaces;
  auto _temp_ret = call_wrap_v ((::GDBusObject*) (gobj_()));
  return gi::detail::wrap_list<Gio::DBusInterface> (_temp_ret, gi::transfer_full);
}

// const gchar* g_dbus_object_get_object_path (GDBusObject* object);
// const char* g_dbus_object_get_object_path (::GDBusObject* object);
std::string base::DBusObjectBase::get_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}




} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobject_extra_def_impl.hpp>)
#include <gio/dbusobject_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobject_extra_impl.hpp>)
#include <gio/dbusobject_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusObjectIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GDBusObjectIface *methods = (::GDBusObjectIface *) interface_struct;
  (void) methods;

  methods->get_interface = (decltype (methods->get_interface)) detail::method_wrapper<self, Gio::DBusInterface (*) (const std::string & interface_name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_interface_>;
  methods->interface_added = (decltype (methods->interface_added)) detail::method_wrapper<self, void (*) (Gio::DBusInterface interface_), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::interface_added_>;
  methods->interface_removed = (decltype (methods->interface_removed)) detail::method_wrapper<self, void (*) (Gio::DBusInterface interface_), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::interface_removed_>;
}

// GDBusInterface* DBusObject::get_interface (GDBusObject* object, const gchar* interface_name);
// ::GDBusInterface* DBusObject::get_interface (::GDBusObject* object, const char* interface_name);
Gio::DBusInterface DBusObjectIfaceClassImpl::get_interface_ (const std::string & interface_name) noexcept
{
  if (!get_struct_()->get_interface) return Gio::DBusInterface{};
  typedef ::GDBusInterface* (*call_wrap_t) (::GDBusObject* object, const char* interface_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_interface;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusObject*) (gobj_()), (const char*) (interface_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* DBusObject::get_interfaces (GDBusObject* object);
// ::GList* DBusObject::get_interfaces (::GDBusObject* object);
// SKIP; container return not supported

// const gchar* DBusObject::get_object_path (GDBusObject* object);
// const char* DBusObject::get_object_path (::GDBusObject* object);
// SKIP; invalid callback return transfer none

// void DBusObject::interface_added (GDBusObject* object, GDBusInterface* interface_);
// void DBusObject::interface_added (::GDBusObject* object, ::GDBusInterface* interface_);
void DBusObjectIfaceClassImpl::interface_added_ (Gio::DBusInterface interface_) noexcept
{
  if (!get_struct_()->interface_added) return ;
  typedef void (*call_wrap_t) (::GDBusObject* object, ::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->interface_added;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusObject*) (gobj_()), (::GDBusInterface*) (interface__to_c));
}

// void DBusObject::interface_removed (GDBusObject* object, GDBusInterface* interface_);
// void DBusObject::interface_removed (::GDBusObject* object, ::GDBusInterface* interface_);
void DBusObjectIfaceClassImpl::interface_removed_ (Gio::DBusInterface interface_) noexcept
{
  if (!get_struct_()->interface_removed) return ;
  typedef void (*call_wrap_t) (::GDBusObject* object, ::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->interface_removed;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusObject*) (gobj_()), (::GDBusInterface*) (interface__to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
