// AUTO-GENERATED

#ifndef _GI_GTK_ACTIONABLE_IMPL_HPP_
#define _GI_GTK_ACTIONABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// const gchar* gtk_actionable_get_action_name (GtkActionable* actionable);
// const char* gtk_actionable_get_action_name (::GtkActionable* actionable);
std::string base::ActionableBase::get_action_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkActionable* actionable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_actionable_get_action_name;
  auto _temp_ret = call_wrap_v ((::GtkActionable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* gtk_actionable_get_action_target_value (GtkActionable* actionable);
// ::GVariant* gtk_actionable_get_action_target_value (::GtkActionable* actionable);
GLib::Variant base::ActionableBase::get_action_target_value () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GtkActionable* actionable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_actionable_get_action_target_value;
  auto _temp_ret = call_wrap_v ((::GtkActionable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_actionable_set_action_name (GtkActionable* actionable, const gchar* action_name);
// void gtk_actionable_set_action_name (::GtkActionable* actionable, const char* action_name);
void base::ActionableBase::set_action_name (const std::string & action_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkActionable* actionable, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_actionable_set_action_name;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkActionable*) (gobj_()), (const char*) (action_name_to_c));
}
void base::ActionableBase::set_action_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkActionable* actionable, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_actionable_set_action_name;
  auto action_name_to_c = nullptr;
  call_wrap_v ((::GtkActionable*) (gobj_()), (const char*) (action_name_to_c));
}

// void gtk_actionable_set_action_target (GtkActionable* actionable, const gchar* format_string);
// void gtk_actionable_set_action_target (::GtkActionable* actionable, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// void gtk_actionable_set_action_target_value (GtkActionable* actionable, GVariant* target_value);
// void gtk_actionable_set_action_target_value (::GtkActionable* actionable, ::GVariant* target_value);
void base::ActionableBase::set_action_target_value (GLib::Variant target_value) noexcept
{
  typedef void (*call_wrap_t) (::GtkActionable* actionable, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_actionable_set_action_target_value;
  auto target_value_to_c = gi::unwrap (target_value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkActionable*) (gobj_()), (::GVariant*) (target_value_to_c));
}
void base::ActionableBase::set_action_target_value () noexcept
{
  typedef void (*call_wrap_t) (::GtkActionable* actionable, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_actionable_set_action_target_value;
  auto target_value_to_c = nullptr;
  call_wrap_v ((::GtkActionable*) (gobj_()), (::GVariant*) (target_value_to_c));
}

// void gtk_actionable_set_detailed_action_name (GtkActionable* actionable, const gchar* detailed_action_name);
// void gtk_actionable_set_detailed_action_name (::GtkActionable* actionable, const char* detailed_action_name);
void base::ActionableBase::set_detailed_action_name (const std::string & detailed_action_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkActionable* actionable, const char* detailed_action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_actionable_set_detailed_action_name;
  auto detailed_action_name_to_c = gi::unwrap (detailed_action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkActionable*) (gobj_()), (const char*) (detailed_action_name_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/actionable_extra_def_impl.hpp>)
#include <gtk/actionable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/actionable_extra_impl.hpp>)
#include <gtk/actionable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ActionableInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkActionableInterface *methods = (::GtkActionableInterface *) interface_struct;
  (void) methods;

  methods->set_action_name = (decltype (methods->set_action_name)) detail::method_wrapper<self, void (*) (const std::string & action_name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_action_name_>;
  methods->set_action_target_value = (decltype (methods->set_action_target_value)) detail::method_wrapper<self, void (*) (GLib::Variant target_value), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_action_target_value_>;
}

// const gchar* Actionable::get_action_name (GtkActionable* actionable);
// const char* Actionable::get_action_name (::GtkActionable* actionable);
// SKIP; invalid callback return transfer none

// GVariant* Actionable::get_action_target_value (GtkActionable* actionable);
// ::GVariant* Actionable::get_action_target_value (::GtkActionable* actionable);
// SKIP; invalid callback return transfer none

// void Actionable::set_action_name (GtkActionable* actionable, const gchar* action_name);
// void Actionable::set_action_name (::GtkActionable* actionable, const char* action_name);
void ActionableInterfaceClassImpl::set_action_name_ (const std::string & action_name) noexcept
{
  if (!get_struct_()->set_action_name) return ;
  typedef void (*call_wrap_t) (::GtkActionable* actionable, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_action_name;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkActionable*) (gobj_()), (const char*) (action_name_to_c));
}

// void Actionable::set_action_target_value (GtkActionable* actionable, GVariant* target_value);
// void Actionable::set_action_target_value (::GtkActionable* actionable, ::GVariant* target_value);
void ActionableInterfaceClassImpl::set_action_target_value_ (GLib::Variant target_value) noexcept
{
  if (!get_struct_()->set_action_target_value) return ;
  typedef void (*call_wrap_t) (::GtkActionable* actionable, ::GVariant* target_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_action_target_value;
  auto target_value_to_c = gi::unwrap (target_value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkActionable*) (gobj_()), (::GVariant*) (target_value_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
