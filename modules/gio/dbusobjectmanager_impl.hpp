// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTMANAGER_IMPL_HPP_
#define _GI_GIO_DBUSOBJECTMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusInterface* g_dbus_object_manager_get_interface (GDBusObjectManager* manager, const gchar* object_path, const gchar* interface_name);
// ::GDBusInterface* g_dbus_object_manager_get_interface (::GDBusObjectManager* manager, const char* object_path, const char* interface_name);
Gio::DBusInterface base::DBusObjectManagerBase::get_interface (const std::string & object_path, const std::string & interface_name) noexcept
{
  typedef ::GDBusInterface* (*call_wrap_t) (::GDBusObjectManager* manager, const char* object_path, const char* interface_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_get_interface;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()), (const char*) (object_path_to_c), (const char*) (interface_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusObject* g_dbus_object_manager_get_object (GDBusObjectManager* manager, const gchar* object_path);
// ::GDBusObject* g_dbus_object_manager_get_object (::GDBusObjectManager* manager, const char* object_path);
Gio::DBusObject base::DBusObjectManagerBase::get_object (const std::string & object_path) noexcept
{
  typedef ::GDBusObject* (*call_wrap_t) (::GDBusObjectManager* manager, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_get_object;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()), (const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_dbus_object_manager_get_object_path (GDBusObjectManager* manager);
// const char* g_dbus_object_manager_get_object_path (::GDBusObjectManager* manager);
std::string base::DBusObjectManagerBase::get_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusObjectManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* g_dbus_object_manager_get_objects (GDBusObjectManager* manager);
// ::GList* g_dbus_object_manager_get_objects (::GDBusObjectManager* manager);
std::vector<Gio::DBusObject> base::DBusObjectManagerBase::get_objects () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GDBusObjectManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_get_objects;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()));
  return gi::detail::wrap_list<Gio::DBusObject> (_temp_ret, gi::transfer_full);
}






} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanager_extra_def_impl.hpp>)
#include <gio/dbusobjectmanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanager_extra_impl.hpp>)
#include <gio/dbusobjectmanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusObjectManagerIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GDBusObjectManagerIface *methods = (::GDBusObjectManagerIface *) interface_struct;
  (void) methods;

  methods->get_interface = (decltype (methods->get_interface)) detail::method_wrapper<self, Gio::DBusInterface (*) (const std::string & object_path, const std::string & interface_name), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_interface_>;
  methods->get_object = (decltype (methods->get_object)) detail::method_wrapper<self, Gio::DBusObject (*) (const std::string & object_path), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_object_>;
  methods->interface_added = (decltype (methods->interface_added)) detail::method_wrapper<self, void (*) (Gio::DBusObject object, Gio::DBusInterface interface_), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::interface_added_>;
  methods->interface_removed = (decltype (methods->interface_removed)) detail::method_wrapper<self, void (*) (Gio::DBusObject object, Gio::DBusInterface interface_), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::interface_removed_>;
  methods->object_added = (decltype (methods->object_added)) detail::method_wrapper<self, void (*) (Gio::DBusObject object), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::object_added_>;
  methods->object_removed = (decltype (methods->object_removed)) detail::method_wrapper<self, void (*) (Gio::DBusObject object), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::object_removed_>;
}

// GDBusInterface* DBusObjectManager::get_interface (GDBusObjectManager* manager, const gchar* object_path, const gchar* interface_name);
// ::GDBusInterface* DBusObjectManager::get_interface (::GDBusObjectManager* manager, const char* object_path, const char* interface_name);
Gio::DBusInterface DBusObjectManagerIfaceClassImpl::get_interface_ (const std::string & object_path, const std::string & interface_name) noexcept
{
  if (!get_struct_()->get_interface) return Gio::DBusInterface{};
  typedef ::GDBusInterface* (*call_wrap_t) (::GDBusObjectManager* manager, const char* object_path, const char* interface_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_interface;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()), (const char*) (object_path_to_c), (const char*) (interface_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusObject* DBusObjectManager::get_object (GDBusObjectManager* manager, const gchar* object_path);
// ::GDBusObject* DBusObjectManager::get_object (::GDBusObjectManager* manager, const char* object_path);
Gio::DBusObject DBusObjectManagerIfaceClassImpl::get_object_ (const std::string & object_path) noexcept
{
  if (!get_struct_()->get_object) return Gio::DBusObject{};
  typedef ::GDBusObject* (*call_wrap_t) (::GDBusObjectManager* manager, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_object;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManager*) (gobj_()), (const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* DBusObjectManager::get_object_path (GDBusObjectManager* manager);
// const char* DBusObjectManager::get_object_path (::GDBusObjectManager* manager);
// SKIP; invalid callback return transfer none

// GList* DBusObjectManager::get_objects (GDBusObjectManager* manager);
// ::GList* DBusObjectManager::get_objects (::GDBusObjectManager* manager);
// SKIP; container return not supported

// void DBusObjectManager::interface_added (GDBusObjectManager* manager, GDBusObject* object, GDBusInterface* interface_);
// void DBusObjectManager::interface_added (::GDBusObjectManager* manager, ::GDBusObject* object, ::GDBusInterface* interface_);
void DBusObjectManagerIfaceClassImpl::interface_added_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept
{
  if (!get_struct_()->interface_added) return ;
  typedef void (*call_wrap_t) (::GDBusObjectManager* manager, ::GDBusObject* object, ::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->interface_added;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none, gi::direction_in);
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusObjectManager*) (gobj_()), (::GDBusObject*) (object_to_c), (::GDBusInterface*) (interface__to_c));
}

// void DBusObjectManager::interface_removed (GDBusObjectManager* manager, GDBusObject* object, GDBusInterface* interface_);
// void DBusObjectManager::interface_removed (::GDBusObjectManager* manager, ::GDBusObject* object, ::GDBusInterface* interface_);
void DBusObjectManagerIfaceClassImpl::interface_removed_ (Gio::DBusObject object, Gio::DBusInterface interface_) noexcept
{
  if (!get_struct_()->interface_removed) return ;
  typedef void (*call_wrap_t) (::GDBusObjectManager* manager, ::GDBusObject* object, ::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->interface_removed;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none, gi::direction_in);
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusObjectManager*) (gobj_()), (::GDBusObject*) (object_to_c), (::GDBusInterface*) (interface__to_c));
}

// void DBusObjectManager::object_added (GDBusObjectManager* manager, GDBusObject* object);
// void DBusObjectManager::object_added (::GDBusObjectManager* manager, ::GDBusObject* object);
void DBusObjectManagerIfaceClassImpl::object_added_ (Gio::DBusObject object) noexcept
{
  if (!get_struct_()->object_added) return ;
  typedef void (*call_wrap_t) (::GDBusObjectManager* manager, ::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->object_added;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusObjectManager*) (gobj_()), (::GDBusObject*) (object_to_c));
}

// void DBusObjectManager::object_removed (GDBusObjectManager* manager, GDBusObject* object);
// void DBusObjectManager::object_removed (::GDBusObjectManager* manager, ::GDBusObject* object);
void DBusObjectManagerIfaceClassImpl::object_removed_ (Gio::DBusObject object) noexcept
{
  if (!get_struct_()->object_removed) return ;
  typedef void (*call_wrap_t) (::GDBusObjectManager* manager, ::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->object_removed;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusObjectManager*) (gobj_()), (::GDBusObject*) (object_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
