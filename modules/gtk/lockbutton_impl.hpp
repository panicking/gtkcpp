// AUTO-GENERATED

#ifndef _GI_GTK_LOCKBUTTON_IMPL_HPP_
#define _GI_GTK_LOCKBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_lock_button_new (GPermission* permission);
// ::GtkLockButton* gtk_lock_button_new (::GPermission* permission);
Gtk::LockButton base::LockButtonBase::new_ (Gio::Permission permission) noexcept
{
  typedef ::GtkLockButton* (*call_wrap_t) (::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_lock_button_new;
  auto permission_to_c = gi::unwrap (permission, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GPermission*) (permission_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::LockButton base::LockButtonBase::new_ () noexcept
{
  typedef ::GtkLockButton* (*call_wrap_t) (::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_lock_button_new;
  auto permission_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GPermission*) (permission_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GPermission* gtk_lock_button_get_permission (GtkLockButton* button);
// ::GPermission* gtk_lock_button_get_permission (::GtkLockButton* button);
Gio::Permission base::LockButtonBase::get_permission () noexcept
{
  typedef ::GPermission* (*call_wrap_t) (::GtkLockButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_lock_button_get_permission;
  auto _temp_ret = call_wrap_v ((::GtkLockButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_lock_button_set_permission (GtkLockButton* button, GPermission* permission);
// void gtk_lock_button_set_permission (::GtkLockButton* button, ::GPermission* permission);
void base::LockButtonBase::set_permission (Gio::Permission permission) noexcept
{
  typedef void (*call_wrap_t) (::GtkLockButton* button, ::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_lock_button_set_permission;
  auto permission_to_c = gi::unwrap (permission, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLockButton*) (gobj_()), (::GPermission*) (permission_to_c));
}
void base::LockButtonBase::set_permission () noexcept
{
  typedef void (*call_wrap_t) (::GtkLockButton* button, ::GPermission* permission);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_lock_button_set_permission;
  auto permission_to_c = nullptr;
  call_wrap_v ((::GtkLockButton*) (gobj_()), (::GPermission*) (permission_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/lockbutton_extra_def_impl.hpp>)
#include <gtk/lockbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/lockbutton_extra_impl.hpp>)
#include <gtk/lockbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void LockButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkLockButtonClass *methods = (::GtkLockButtonClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
