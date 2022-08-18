// AUTO-GENERATED

#ifndef _GI_GTK_BUTTONBOX_IMPL_HPP_
#define _GI_GTK_BUTTONBOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_button_box_new (GtkOrientation orientation);
// ::GtkButtonBox* gtk_button_box_new (::GtkOrientation orientation);
Gtk::ButtonBox base::ButtonBoxBase::new_ (Gtk::Orientation orientation) noexcept
{
  typedef ::GtkButtonBox* (*call_wrap_t) (::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_box_new;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_button_box_get_child_non_homogeneous (GtkButtonBox* widget, GtkWidget* child);
// gboolean gtk_button_box_get_child_non_homogeneous (::GtkButtonBox* widget, ::GtkWidget* child);
bool base::ButtonBoxBase::get_child_non_homogeneous (Gtk::Widget child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkButtonBox* widget, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_box_get_child_non_homogeneous;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkButtonBox*) (gobj_()), (::GtkWidget*) (child_to_c));
  return _temp_ret;
}

// gboolean gtk_button_box_get_child_secondary (GtkButtonBox* widget, GtkWidget* child);
// gboolean gtk_button_box_get_child_secondary (::GtkButtonBox* widget, ::GtkWidget* child);
bool base::ButtonBoxBase::get_child_secondary (Gtk::Widget child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkButtonBox* widget, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_box_get_child_secondary;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkButtonBox*) (gobj_()), (::GtkWidget*) (child_to_c));
  return _temp_ret;
}

// GtkButtonBoxStyle gtk_button_box_get_layout (GtkButtonBox* widget);
// ::GtkButtonBoxStyle gtk_button_box_get_layout (::GtkButtonBox* widget);
Gtk::ButtonBoxStyle base::ButtonBoxBase::get_layout () noexcept
{
  typedef ::GtkButtonBoxStyle (*call_wrap_t) (::GtkButtonBox* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_box_get_layout;
  auto _temp_ret = call_wrap_v ((::GtkButtonBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_button_box_set_child_non_homogeneous (GtkButtonBox* widget, GtkWidget* child, gboolean non_homogeneous);
// void gtk_button_box_set_child_non_homogeneous (::GtkButtonBox* widget, ::GtkWidget* child, gboolean non_homogeneous);
void base::ButtonBoxBase::set_child_non_homogeneous (Gtk::Widget child, gboolean non_homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkButtonBox* widget, ::GtkWidget* child, gboolean non_homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_box_set_child_non_homogeneous;
  auto non_homogeneous_to_c = non_homogeneous;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkButtonBox*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean) (non_homogeneous_to_c));
}

// void gtk_button_box_set_child_secondary (GtkButtonBox* widget, GtkWidget* child, gboolean is_secondary);
// void gtk_button_box_set_child_secondary (::GtkButtonBox* widget, ::GtkWidget* child, gboolean is_secondary);
void base::ButtonBoxBase::set_child_secondary (Gtk::Widget child, gboolean is_secondary) noexcept
{
  typedef void (*call_wrap_t) (::GtkButtonBox* widget, ::GtkWidget* child, gboolean is_secondary);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_box_set_child_secondary;
  auto is_secondary_to_c = is_secondary;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkButtonBox*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean) (is_secondary_to_c));
}

// void gtk_button_box_set_layout (GtkButtonBox* widget, GtkButtonBoxStyle layout_style);
// void gtk_button_box_set_layout (::GtkButtonBox* widget, ::GtkButtonBoxStyle layout_style);
void base::ButtonBoxBase::set_layout (Gtk::ButtonBoxStyle layout_style) noexcept
{
  typedef void (*call_wrap_t) (::GtkButtonBox* widget, ::GtkButtonBoxStyle layout_style);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_box_set_layout;
  auto layout_style_to_c = gi::unwrap (layout_style);
  call_wrap_v ((::GtkButtonBox*) (gobj_()), (::GtkButtonBoxStyle) (layout_style_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/buttonbox_extra_def_impl.hpp>)
#include <gtk/buttonbox_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/buttonbox_extra_impl.hpp>)
#include <gtk/buttonbox_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ButtonBoxClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkButtonBoxClass *methods = (::GtkButtonBoxClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
