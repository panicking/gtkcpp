// AUTO-GENERATED

#ifndef _GI_GTK_SWITCH_IMPL_HPP_
#define _GI_GTK_SWITCH_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Actionable SwitchBase::interface_ (gi::interface_tag<Gtk::Actionable>)
{ return gi::wrap ((Gtk::Actionable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SwitchBase::operator Gtk::Actionable ()
{ return interface_ (gi::interface_tag<Gtk::Actionable>()); }

Gtk::Activatable SwitchBase::interface_ (gi::interface_tag<Gtk::Activatable>)
{ return gi::wrap ((Gtk::Activatable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SwitchBase::operator Gtk::Activatable ()
{ return interface_ (gi::interface_tag<Gtk::Activatable>()); }

// GtkWidget* gtk_switch_new ();
// ::GtkSwitch* gtk_switch_new ();
Gtk::Switch base::SwitchBase::new_ () noexcept
{
  typedef ::GtkSwitch* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_switch_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_switch_get_active (GtkSwitch* sw);
// gboolean gtk_switch_get_active (::GtkSwitch* sw);
bool base::SwitchBase::get_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSwitch* sw);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_switch_get_active;
  auto _temp_ret = call_wrap_v ((::GtkSwitch*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_switch_get_state (GtkSwitch* sw);
// gboolean gtk_switch_get_state (::GtkSwitch* sw);
bool base::SwitchBase::get_state () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSwitch* sw);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_switch_get_state;
  auto _temp_ret = call_wrap_v ((::GtkSwitch*) (gobj_()));
  return _temp_ret;
}

// void gtk_switch_set_active (GtkSwitch* sw, gboolean is_active);
// void gtk_switch_set_active (::GtkSwitch* sw, gboolean is_active);
void base::SwitchBase::set_active (gboolean is_active) noexcept
{
  typedef void (*call_wrap_t) (::GtkSwitch* sw, gboolean is_active);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_switch_set_active;
  auto is_active_to_c = is_active;
  call_wrap_v ((::GtkSwitch*) (gobj_()), (gboolean) (is_active_to_c));
}

// void gtk_switch_set_state (GtkSwitch* sw, gboolean state);
// void gtk_switch_set_state (::GtkSwitch* sw, gboolean state);
void base::SwitchBase::set_state (gboolean state) noexcept
{
  typedef void (*call_wrap_t) (::GtkSwitch* sw, gboolean state);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_switch_set_state;
  auto state_to_c = state;
  call_wrap_v ((::GtkSwitch*) (gobj_()), (gboolean) (state_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/switch_extra_def_impl.hpp>)
#include <gtk/switch_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/switch_extra_impl.hpp>)
#include <gtk/switch_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SwitchClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSwitchClass *methods = (::GtkSwitchClass *) class_struct;
  (void) methods;

  methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_>;
  methods->state_set = (decltype (methods->state_set)) detail::method_wrapper<self, bool (*) (gboolean state), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::state_set_>;
}

// void Switch::activate (GtkSwitch* sw);
// void Switch::activate (::GtkSwitch* sw);
void SwitchClass::activate_ () noexcept
{
  if (!get_struct_()->activate) return ;
  typedef void (*call_wrap_t) (::GtkSwitch* sw);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkSwitch*) (gobj_()));
}

// gboolean Switch::state_set (GtkSwitch* sw, gboolean state);
// gboolean Switch::state_set (::GtkSwitch* sw, gboolean state);
bool SwitchClass::state_set_ (gboolean state) noexcept
{
  if (!get_struct_()->state_set) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkSwitch* sw, gboolean state);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->state_set;
  auto state_to_c = state;
  auto _temp_ret = call_wrap_v ((::GtkSwitch*) (gobj_()), (gboolean) (state_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
