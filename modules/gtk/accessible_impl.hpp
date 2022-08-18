// AUTO-GENERATED

#ifndef _GI_GTK_ACCESSIBLE_IMPL_HPP_
#define _GI_GTK_ACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_accessible_connect_widget_destroyed (GtkAccessible* accessible);
// void gtk_accessible_connect_widget_destroyed (::GtkAccessible* accessible);
// IGNORE; deprecated

// GtkWidget* gtk_accessible_get_widget (GtkAccessible* accessible);
// ::GtkWidget* gtk_accessible_get_widget (::GtkAccessible* accessible);
Gtk::Widget base::AccessibleBase::get_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkAccessible* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accessible_get_widget;
  auto _temp_ret = call_wrap_v ((::GtkAccessible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_accessible_set_widget (GtkAccessible* accessible, GtkWidget* widget);
// void gtk_accessible_set_widget (::GtkAccessible* accessible, ::GtkWidget* widget);
void base::AccessibleBase::set_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessible* accessible, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accessible_set_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAccessible*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::AccessibleBase::set_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkAccessible* accessible, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accessible_set_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkAccessible*) (gobj_()), (::GtkWidget*) (widget_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accessible_extra_def_impl.hpp>)
#include <gtk/accessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accessible_extra_impl.hpp>)
#include <gtk/accessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkAccessibleClass *methods = (::GtkAccessibleClass *) class_struct;
  (void) methods;

  methods->widget_set = (decltype (methods->widget_set)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::widget_set_>;
  methods->widget_unset = (decltype (methods->widget_unset)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::widget_unset_>;
}

// void Accessible::connect_widget_destroyed (GtkAccessible* accessible);
// void Accessible::connect_widget_destroyed (::GtkAccessible* accessible);
// IGNORE; deprecated

// void Accessible::widget_set (GtkAccessible* accessible);
// void Accessible::widget_set (::GtkAccessible* accessible);
void AccessibleClass::widget_set_ () noexcept
{
  if (!get_struct_()->widget_set) return ;
  typedef void (*call_wrap_t) (::GtkAccessible* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->widget_set;
  call_wrap_v ((::GtkAccessible*) (gobj_()));
}

// void Accessible::widget_unset (GtkAccessible* accessible);
// void Accessible::widget_unset (::GtkAccessible* accessible);
void AccessibleClass::widget_unset_ () noexcept
{
  if (!get_struct_()->widget_unset) return ;
  typedef void (*call_wrap_t) (::GtkAccessible* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->widget_unset;
  call_wrap_v ((::GtkAccessible*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
