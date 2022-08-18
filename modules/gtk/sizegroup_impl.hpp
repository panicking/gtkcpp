// AUTO-GENERATED

#ifndef _GI_GTK_SIZEGROUP_IMPL_HPP_
#define _GI_GTK_SIZEGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable SizeGroupBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SizeGroupBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkSizeGroup* gtk_size_group_new (GtkSizeGroupMode mode);
// ::GtkSizeGroup* gtk_size_group_new (::GtkSizeGroupMode mode);
Gtk::SizeGroup base::SizeGroupBase::new_ (Gtk::SizeGroupMode mode) noexcept
{
  typedef ::GtkSizeGroup* (*call_wrap_t) (::GtkSizeGroupMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_size_group_new;
  auto mode_to_c = gi::unwrap (mode);
  auto _temp_ret = call_wrap_v ((::GtkSizeGroupMode) (mode_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_size_group_add_widget (GtkSizeGroup* size_group, GtkWidget* widget);
// void gtk_size_group_add_widget (::GtkSizeGroup* size_group, ::GtkWidget* widget);
void base::SizeGroupBase::add_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkSizeGroup* size_group, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_size_group_add_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkSizeGroup*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// gboolean gtk_size_group_get_ignore_hidden (GtkSizeGroup* size_group);
// gboolean gtk_size_group_get_ignore_hidden (::GtkSizeGroup* size_group);
// IGNORE; deprecated

// GtkSizeGroupMode gtk_size_group_get_mode (GtkSizeGroup* size_group);
// ::GtkSizeGroupMode gtk_size_group_get_mode (::GtkSizeGroup* size_group);
Gtk::SizeGroupMode base::SizeGroupBase::get_mode () noexcept
{
  typedef ::GtkSizeGroupMode (*call_wrap_t) (::GtkSizeGroup* size_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_size_group_get_mode;
  auto _temp_ret = call_wrap_v ((::GtkSizeGroup*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GSList* gtk_size_group_get_widgets (GtkSizeGroup* size_group);
// ::GSList* gtk_size_group_get_widgets (::GtkSizeGroup* size_group);
std::vector<Gtk::Widget> base::SizeGroupBase::get_widgets () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GtkSizeGroup* size_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_size_group_get_widgets;
  auto _temp_ret = call_wrap_v ((::GtkSizeGroup*) (gobj_()));
  return gi::detail::wrap_list<Gtk::Widget> (_temp_ret, gi::transfer_none);
}

// void gtk_size_group_remove_widget (GtkSizeGroup* size_group, GtkWidget* widget);
// void gtk_size_group_remove_widget (::GtkSizeGroup* size_group, ::GtkWidget* widget);
void base::SizeGroupBase::remove_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkSizeGroup* size_group, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_size_group_remove_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkSizeGroup*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_size_group_set_ignore_hidden (GtkSizeGroup* size_group, gboolean ignore_hidden);
// void gtk_size_group_set_ignore_hidden (::GtkSizeGroup* size_group, gboolean ignore_hidden);
// IGNORE; deprecated

// void gtk_size_group_set_mode (GtkSizeGroup* size_group, GtkSizeGroupMode mode);
// void gtk_size_group_set_mode (::GtkSizeGroup* size_group, ::GtkSizeGroupMode mode);
void base::SizeGroupBase::set_mode (Gtk::SizeGroupMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkSizeGroup* size_group, ::GtkSizeGroupMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_size_group_set_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GtkSizeGroup*) (gobj_()), (::GtkSizeGroupMode) (mode_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/sizegroup_extra_def_impl.hpp>)
#include <gtk/sizegroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/sizegroup_extra_impl.hpp>)
#include <gtk/sizegroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SizeGroupClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSizeGroupClass *methods = (::GtkSizeGroupClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
