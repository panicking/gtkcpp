// AUTO-GENERATED

#ifndef _GI_GTK_STACKSIDEBAR_IMPL_HPP_
#define _GI_GTK_STACKSIDEBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_stack_sidebar_new ();
// ::GtkStackSidebar* gtk_stack_sidebar_new ();
Gtk::StackSidebar base::StackSidebarBase::new_ () noexcept
{
  typedef ::GtkStackSidebar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_sidebar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkStack* gtk_stack_sidebar_get_stack (GtkStackSidebar* sidebar);
// ::GtkStack* gtk_stack_sidebar_get_stack (::GtkStackSidebar* sidebar);
Gtk::Stack base::StackSidebarBase::get_stack () noexcept
{
  typedef ::GtkStack* (*call_wrap_t) (::GtkStackSidebar* sidebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_sidebar_get_stack;
  auto _temp_ret = call_wrap_v ((::GtkStackSidebar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_stack_sidebar_set_stack (GtkStackSidebar* sidebar, GtkStack* stack);
// void gtk_stack_sidebar_set_stack (::GtkStackSidebar* sidebar, ::GtkStack* stack);
void base::StackSidebarBase::set_stack (Gtk::Stack stack) noexcept
{
  typedef void (*call_wrap_t) (::GtkStackSidebar* sidebar, ::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_sidebar_set_stack;
  auto stack_to_c = gi::unwrap (stack, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStackSidebar*) (gobj_()), (::GtkStack*) (stack_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stacksidebar_extra_def_impl.hpp>)
#include <gtk/stacksidebar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stacksidebar_extra_impl.hpp>)
#include <gtk/stacksidebar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StackSidebarClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkStackSidebarClass *methods = (::GtkStackSidebarClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
