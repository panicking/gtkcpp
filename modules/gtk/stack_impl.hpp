// AUTO-GENERATED

#ifndef _GI_GTK_STACK_IMPL_HPP_
#define _GI_GTK_STACK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_stack_new ();
// ::GtkStack* gtk_stack_new ();
Gtk::Stack base::StackBase::new_ () noexcept
{
  typedef ::GtkStack* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_stack_add_named (GtkStack* stack, GtkWidget* child, const gchar* name);
// void gtk_stack_add_named (::GtkStack* stack, ::GtkWidget* child, const char* name);
void base::StackBase::add_named (Gtk::Widget child, const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, ::GtkWidget* child, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_add_named;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c));
}

// void gtk_stack_add_titled (GtkStack* stack, GtkWidget* child, const gchar* name, const gchar* title);
// void gtk_stack_add_titled (::GtkStack* stack, ::GtkWidget* child, const char* name, const char* title);
void base::StackBase::add_titled (Gtk::Widget child, const std::string & name, const std::string & title) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, ::GtkWidget* child, const char* name, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_add_titled;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStack*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (name_to_c), (const char*) (title_to_c));
}

// GtkWidget* gtk_stack_get_child_by_name (GtkStack* stack, const gchar* name);
// ::GtkWidget* gtk_stack_get_child_by_name (::GtkStack* stack, const char* name);
Gtk::Widget base::StackBase::get_child_by_name (const std::string & name) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkStack* stack, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_get_child_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_stack_get_hhomogeneous (GtkStack* stack);
// gboolean gtk_stack_get_hhomogeneous (::GtkStack* stack);
bool base::StackBase::get_hhomogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_get_hhomogeneous;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_stack_get_homogeneous (GtkStack* stack);
// gboolean gtk_stack_get_homogeneous (::GtkStack* stack);
bool base::StackBase::get_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_get_homogeneous;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_stack_get_interpolate_size (GtkStack* stack);
// gboolean gtk_stack_get_interpolate_size (::GtkStack* stack);
bool base::StackBase::get_interpolate_size () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_get_interpolate_size;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return _temp_ret;
}

// guint gtk_stack_get_transition_duration (GtkStack* stack);
// guint gtk_stack_get_transition_duration (::GtkStack* stack);
guint base::StackBase::get_transition_duration () noexcept
{
  typedef guint (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_get_transition_duration;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_stack_get_transition_running (GtkStack* stack);
// gboolean gtk_stack_get_transition_running (::GtkStack* stack);
bool base::StackBase::get_transition_running () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_get_transition_running;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return _temp_ret;
}

// GtkStackTransitionType gtk_stack_get_transition_type (GtkStack* stack);
// ::GtkStackTransitionType gtk_stack_get_transition_type (::GtkStack* stack);
Gtk::StackTransitionType base::StackBase::get_transition_type () noexcept
{
  typedef ::GtkStackTransitionType (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_get_transition_type;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_stack_get_vhomogeneous (GtkStack* stack);
// gboolean gtk_stack_get_vhomogeneous (::GtkStack* stack);
bool base::StackBase::get_vhomogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_get_vhomogeneous;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* gtk_stack_get_visible_child (GtkStack* stack);
// ::GtkWidget* gtk_stack_get_visible_child (::GtkStack* stack);
Gtk::Widget base::StackBase::get_visible_child () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_get_visible_child;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_stack_get_visible_child_name (GtkStack* stack);
// const char* gtk_stack_get_visible_child_name (::GtkStack* stack);
std::string base::StackBase::get_visible_child_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkStack* stack);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_get_visible_child_name;
  auto _temp_ret = call_wrap_v ((::GtkStack*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_stack_set_hhomogeneous (GtkStack* stack, gboolean hhomogeneous);
// void gtk_stack_set_hhomogeneous (::GtkStack* stack, gboolean hhomogeneous);
void base::StackBase::set_hhomogeneous (gboolean hhomogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, gboolean hhomogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_set_hhomogeneous;
  auto hhomogeneous_to_c = hhomogeneous;
  call_wrap_v ((::GtkStack*) (gobj_()), (gboolean) (hhomogeneous_to_c));
}

// void gtk_stack_set_homogeneous (GtkStack* stack, gboolean homogeneous);
// void gtk_stack_set_homogeneous (::GtkStack* stack, gboolean homogeneous);
void base::StackBase::set_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_set_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::GtkStack*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void gtk_stack_set_interpolate_size (GtkStack* stack, gboolean interpolate_size);
// void gtk_stack_set_interpolate_size (::GtkStack* stack, gboolean interpolate_size);
void base::StackBase::set_interpolate_size (gboolean interpolate_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, gboolean interpolate_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_set_interpolate_size;
  auto interpolate_size_to_c = interpolate_size;
  call_wrap_v ((::GtkStack*) (gobj_()), (gboolean) (interpolate_size_to_c));
}

// void gtk_stack_set_transition_duration (GtkStack* stack, guint duration);
// void gtk_stack_set_transition_duration (::GtkStack* stack, guint duration);
void base::StackBase::set_transition_duration (guint duration) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, guint duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_set_transition_duration;
  auto duration_to_c = duration;
  call_wrap_v ((::GtkStack*) (gobj_()), (guint) (duration_to_c));
}

// void gtk_stack_set_transition_type (GtkStack* stack, GtkStackTransitionType transition);
// void gtk_stack_set_transition_type (::GtkStack* stack, ::GtkStackTransitionType transition);
void base::StackBase::set_transition_type (Gtk::StackTransitionType transition) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, ::GtkStackTransitionType transition);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_set_transition_type;
  auto transition_to_c = gi::unwrap (transition);
  call_wrap_v ((::GtkStack*) (gobj_()), (::GtkStackTransitionType) (transition_to_c));
}

// void gtk_stack_set_vhomogeneous (GtkStack* stack, gboolean vhomogeneous);
// void gtk_stack_set_vhomogeneous (::GtkStack* stack, gboolean vhomogeneous);
void base::StackBase::set_vhomogeneous (gboolean vhomogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, gboolean vhomogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_set_vhomogeneous;
  auto vhomogeneous_to_c = vhomogeneous;
  call_wrap_v ((::GtkStack*) (gobj_()), (gboolean) (vhomogeneous_to_c));
}

// void gtk_stack_set_visible_child (GtkStack* stack, GtkWidget* child);
// void gtk_stack_set_visible_child (::GtkStack* stack, ::GtkWidget* child);
void base::StackBase::set_visible_child (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_set_visible_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStack*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_stack_set_visible_child_full (GtkStack* stack, const gchar* name, GtkStackTransitionType transition);
// void gtk_stack_set_visible_child_full (::GtkStack* stack, const char* name, ::GtkStackTransitionType transition);
void base::StackBase::set_visible_child_full (const std::string & name, Gtk::StackTransitionType transition) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, const char* name, ::GtkStackTransitionType transition);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_set_visible_child_full;
  auto transition_to_c = gi::unwrap (transition);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStack*) (gobj_()), (const char*) (name_to_c), (::GtkStackTransitionType) (transition_to_c));
}

// void gtk_stack_set_visible_child_name (GtkStack* stack, const gchar* name);
// void gtk_stack_set_visible_child_name (::GtkStack* stack, const char* name);
void base::StackBase::set_visible_child_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkStack* stack, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_stack_set_visible_child_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStack*) (gobj_()), (const char*) (name_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stack_extra_def_impl.hpp>)
#include <gtk/stack_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stack_extra_impl.hpp>)
#include <gtk/stack_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StackClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkStackClass *methods = (::GtkStackClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
