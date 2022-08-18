// AUTO-GENERATED

#ifndef _GI_GTK_STACKSWITCHER_IMPL_HPP_
#define _GI_GTK_STACKSWITCHER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_stack_switcher_new ();
// ::GtkStackSwitcher* gtk_stack_switcher_new ();
Gtk::StackSwitcher base::StackSwitcherBase::new_ () noexcept
{
  typedef ::GtkStackSwitcher* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_switcher_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkStack* gtk_stack_switcher_get_stack (GtkStackSwitcher* switcher);
// ::GtkStack* gtk_stack_switcher_get_stack (::GtkStackSwitcher* switcher);
Gtk::Stack base::StackSwitcherBase::get_stack () noexcept
{
  typedef ::GtkStack* (*call_wrap_t) (::GtkStackSwitcher* switcher);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_switcher_get_stack;
  auto _temp_ret = call_wrap_v ((::GtkStackSwitcher*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_stack_switcher_set_stack (GtkStackSwitcher* switcher, GtkStack* stack);
// void gtk_stack_switcher_set_stack (::GtkStackSwitcher* switcher, ::GtkStack* stack);
void base::StackSwitcherBase::set_stack (Gtk::Stack stack) noexcept
{
  typedef void (*call_wrap_t) (::GtkStackSwitcher* switcher, ::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_switcher_set_stack;
  auto stack_to_c = gi::unwrap (stack, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStackSwitcher*) (gobj_()), (::GtkStack*) (stack_to_c));
}
void base::StackSwitcherBase::set_stack () noexcept
{
  typedef void (*call_wrap_t) (::GtkStackSwitcher* switcher, ::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_switcher_set_stack;
  auto stack_to_c = nullptr;
  call_wrap_v ((::GtkStackSwitcher*) (gobj_()), (::GtkStack*) (stack_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stackswitcher_extra_def_impl.hpp>)
#include <gtk/stackswitcher_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stackswitcher_extra_impl.hpp>)
#include <gtk/stackswitcher_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StackSwitcherClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkStackSwitcherClass *methods = (::GtkStackSwitcherClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
