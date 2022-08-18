// AUTO-GENERATED

#ifndef _GI_GTK_RECENTCHOOSERWIDGET_IMPL_HPP_
#define _GI_GTK_RECENTCHOOSERWIDGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::RecentChooser RecentChooserWidgetBase::interface_ (gi::interface_tag<Gtk::RecentChooser>)
{ return gi::wrap ((Gtk::RecentChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

RecentChooserWidgetBase::operator Gtk::RecentChooser ()
{ return interface_ (gi::interface_tag<Gtk::RecentChooser>()); }

// GtkWidget* gtk_recent_chooser_widget_new ();
// ::GtkRecentChooserWidget* gtk_recent_chooser_widget_new ();
Gtk::RecentChooserWidget base::RecentChooserWidgetBase::new_ () noexcept
{
  typedef ::GtkRecentChooserWidget* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_widget_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_recent_chooser_widget_new_for_manager (GtkRecentManager* manager);
// ::GtkRecentChooserWidget* gtk_recent_chooser_widget_new_for_manager (::GtkRecentManager* manager);
Gtk::RecentChooserWidget base::RecentChooserWidgetBase::new_for_manager (Gtk::RecentManager manager) noexcept
{
  typedef ::GtkRecentChooserWidget* (*call_wrap_t) (::GtkRecentManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_widget_new_for_manager;
  auto manager_to_c = gi::unwrap (manager, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (manager_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentchooserwidget_extra_def_impl.hpp>)
#include <gtk/recentchooserwidget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentchooserwidget_extra_impl.hpp>)
#include <gtk/recentchooserwidget_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RecentChooserWidgetClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRecentChooserWidgetClass *methods = (::GtkRecentChooserWidgetClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
