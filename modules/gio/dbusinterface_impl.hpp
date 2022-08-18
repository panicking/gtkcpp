// AUTO-GENERATED

#ifndef _GI_GIO_DBUSINTERFACE_IMPL_HPP_
#define _GI_GIO_DBUSINTERFACE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusObject* g_dbus_interface_dup_object (GDBusInterface* interface_);
// ::GDBusObject* g_dbus_interface_dup_object (::GDBusInterface* interface_);
Gio::DBusObject base::DBusInterfaceBase::get_object () noexcept
{
  typedef ::GDBusObject* (*call_wrap_t) (::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_dup_object;
  auto _temp_ret = call_wrap_v ((::GDBusInterface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusInterfaceInfo* g_dbus_interface_get_info (GDBusInterface* interface_);
// ::GDBusInterfaceInfo* g_dbus_interface_get_info (::GDBusInterface* interface_);
Gio::DBusInterfaceInfo base::DBusInterfaceBase::get_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) (::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_get_info;
  auto _temp_ret = call_wrap_v ((::GDBusInterface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDBusObject* g_dbus_interface_get_object (GDBusInterface* interface_);
// ::GDBusObject* g_dbus_interface_get_object (::GDBusInterface* interface_);
// IGNORE; not introspectable; shadowed-by dup_object

// void g_dbus_interface_set_object (GDBusInterface* interface_, GDBusObject* object);
// void g_dbus_interface_set_object (::GDBusInterface* interface_, ::GDBusObject* object);
void base::DBusInterfaceBase::set_object (Gio::DBusObject object) noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterface* interface_, ::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_set_object;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusInterface*) (gobj_()), (::GDBusObject*) (object_to_c));
}
void base::DBusInterfaceBase::set_object () noexcept
{
  typedef void (*call_wrap_t) (::GDBusInterface* interface_, ::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_interface_set_object;
  auto object_to_c = nullptr;
  call_wrap_v ((::GDBusInterface*) (gobj_()), (::GDBusObject*) (object_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusinterface_extra_def_impl.hpp>)
#include <gio/dbusinterface_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusinterface_extra_impl.hpp>)
#include <gio/dbusinterface_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusInterfaceIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GDBusInterfaceIface *methods = (::GDBusInterfaceIface *) interface_struct;
  (void) methods;

  methods->dup_object = (decltype (methods->dup_object)) detail::method_wrapper<self, Gio::DBusObject (*) (), gi::transfer_full_t>::wrapper<&self::dup_object_>;
  methods->set_object = (decltype (methods->set_object)) detail::method_wrapper<self, void (*) (Gio::DBusObject object), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_object_>;
}

// GDBusObject* DBusInterface::dup_object (GDBusInterface* interface_);
// ::GDBusObject* DBusInterface::dup_object (::GDBusInterface* interface_);
Gio::DBusObject DBusInterfaceIfaceClassImpl::dup_object_ () noexcept
{
  if (!get_struct_()->dup_object) return Gio::DBusObject{};
  typedef ::GDBusObject* (*call_wrap_t) (::GDBusInterface* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->dup_object;
  auto _temp_ret = call_wrap_v ((::GDBusInterface*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusInterfaceInfo* DBusInterface::get_info (GDBusInterface* interface_);
// ::GDBusInterfaceInfo* DBusInterface::get_info (::GDBusInterface* interface_);
// SKIP; invalid callback return transfer none

// void DBusInterface::set_object (GDBusInterface* interface_, GDBusObject* object);
// void DBusInterface::set_object (::GDBusInterface* interface_, ::GDBusObject* object);
void DBusInterfaceIfaceClassImpl::set_object_ (Gio::DBusObject object) noexcept
{
  if (!get_struct_()->set_object) return ;
  typedef void (*call_wrap_t) (::GDBusInterface* interface_, ::GDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_object;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusInterface*) (gobj_()), (::GDBusObject*) (object_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
