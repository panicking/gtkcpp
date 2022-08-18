// AUTO-GENERATED

#ifndef _GI_GTK_POPOVER_IMPL_HPP_
#define _GI_GTK_POPOVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_popover_new (GtkWidget* relative_to);
// ::GtkPopover* gtk_popover_new (::GtkWidget* relative_to);
Gtk::Popover base::PopoverBase::new_ (Gtk::Widget relative_to) noexcept
{
  typedef ::GtkPopover* (*call_wrap_t) (::GtkWidget* relative_to);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_new;
  auto relative_to_to_c = gi::unwrap (relative_to, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (relative_to_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Popover base::PopoverBase::new_ () noexcept
{
  typedef ::GtkPopover* (*call_wrap_t) (::GtkWidget* relative_to);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_new;
  auto relative_to_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (relative_to_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_popover_new_from_model (GtkWidget* relative_to, GMenuModel* model);
// ::GtkPopover* gtk_popover_new_from_model (::GtkWidget* relative_to, ::GMenuModel* model);
Gtk::Popover base::PopoverBase::new_from_model (Gtk::Widget relative_to, Gio::MenuModel model) noexcept
{
  typedef ::GtkPopover* (*call_wrap_t) (::GtkWidget* relative_to, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_new_from_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto relative_to_to_c = gi::unwrap (relative_to, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (relative_to_to_c), (::GMenuModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Popover base::PopoverBase::new_from_model (Gio::MenuModel model) noexcept
{
  typedef ::GtkPopover* (*call_wrap_t) (::GtkWidget* relative_to, ::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_new_from_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto relative_to_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (relative_to_to_c), (::GMenuModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_popover_bind_model (GtkPopover* popover, GMenuModel* model, const gchar* action_namespace);
// void gtk_popover_bind_model (::GtkPopover* popover, ::GMenuModel* model, const char* action_namespace);
void base::PopoverBase::bind_model (Gio::MenuModel model, const std::string & action_namespace) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GMenuModel* model, const char* action_namespace);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_bind_model;
  auto action_namespace_to_c = gi::unwrap (action_namespace, gi::transfer_none, gi::direction_in);
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GMenuModel*) (model_to_c), (const char*) (action_namespace_to_c));
}
void base::PopoverBase::bind_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GMenuModel* model, const char* action_namespace);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_bind_model;
  auto action_namespace_to_c = nullptr;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GMenuModel*) (model_to_c), (const char*) (action_namespace_to_c));
}

// GtkPopoverConstraint gtk_popover_get_constrain_to (GtkPopover* popover);
// ::GtkPopoverConstraint gtk_popover_get_constrain_to (::GtkPopover* popover);
Gtk::PopoverConstraint base::PopoverBase::get_constrain_to () noexcept
{
  typedef ::GtkPopoverConstraint (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_get_constrain_to;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* gtk_popover_get_default_widget (GtkPopover* popover);
// ::GtkWidget* gtk_popover_get_default_widget (::GtkPopover* popover);
Gtk::Widget base::PopoverBase::get_default_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_get_default_widget;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_popover_get_modal (GtkPopover* popover);
// gboolean gtk_popover_get_modal (::GtkPopover* popover);
bool base::PopoverBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_popover_get_pointing_to (GtkPopover* popover, GdkRectangle* rect);
// gboolean gtk_popover_get_pointing_to (::GtkPopover* popover, ::GdkRectangle* rect);
bool base::PopoverBase::get_pointing_to (Gdk::Rectangle & rect) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopover* popover, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_get_pointing_to;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gdk::Rectangle> base::PopoverBase::get_pointing_to () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPopover* popover, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_get_pointing_to;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out));
}

// GtkPositionType gtk_popover_get_position (GtkPopover* popover);
// ::GtkPositionType gtk_popover_get_position (::GtkPopover* popover);
Gtk::PositionType base::PopoverBase::get_position () noexcept
{
  typedef ::GtkPositionType (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_get_position;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* gtk_popover_get_relative_to (GtkPopover* popover);
// ::GtkWidget* gtk_popover_get_relative_to (::GtkPopover* popover);
Gtk::Widget base::PopoverBase::get_relative_to () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_get_relative_to;
  auto _temp_ret = call_wrap_v ((::GtkPopover*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_popover_get_transitions_enabled (GtkPopover* popover);
// gboolean gtk_popover_get_transitions_enabled (::GtkPopover* popover);
// IGNORE; deprecated

// void gtk_popover_popdown (GtkPopover* popover);
// void gtk_popover_popdown (::GtkPopover* popover);
void base::PopoverBase::popdown () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_popdown;
  call_wrap_v ((::GtkPopover*) (gobj_()));
}

// void gtk_popover_popup (GtkPopover* popover);
// void gtk_popover_popup (::GtkPopover* popover);
void base::PopoverBase::popup () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_popup;
  call_wrap_v ((::GtkPopover*) (gobj_()));
}

// void gtk_popover_set_constrain_to (GtkPopover* popover, GtkPopoverConstraint constraint);
// void gtk_popover_set_constrain_to (::GtkPopover* popover, ::GtkPopoverConstraint constraint);
void base::PopoverBase::set_constrain_to (Gtk::PopoverConstraint constraint) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GtkPopoverConstraint constraint);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_set_constrain_to;
  auto constraint_to_c = gi::unwrap (constraint);
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GtkPopoverConstraint) (constraint_to_c));
}

// void gtk_popover_set_default_widget (GtkPopover* popover, GtkWidget* widget);
// void gtk_popover_set_default_widget (::GtkPopover* popover, ::GtkWidget* widget);
void base::PopoverBase::set_default_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_set_default_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::PopoverBase::set_default_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_set_default_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_popover_set_modal (GtkPopover* popover, gboolean modal);
// void gtk_popover_set_modal (::GtkPopover* popover, gboolean modal);
void base::PopoverBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkPopover*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_popover_set_pointing_to (GtkPopover* popover, const GdkRectangle* rect);
// void gtk_popover_set_pointing_to (::GtkPopover* popover, const ::GdkRectangle* rect);
void base::PopoverBase::set_pointing_to (const Gdk::Rectangle & rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, const ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_set_pointing_to;
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPopover*) (gobj_()), (const ::GdkRectangle*) (rect_to_c));
}

// void gtk_popover_set_position (GtkPopover* popover, GtkPositionType position);
// void gtk_popover_set_position (::GtkPopover* popover, ::GtkPositionType position);
void base::PopoverBase::set_position (Gtk::PositionType position) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GtkPositionType position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_set_position;
  auto position_to_c = gi::unwrap (position);
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GtkPositionType) (position_to_c));
}

// void gtk_popover_set_relative_to (GtkPopover* popover, GtkWidget* relative_to);
// void gtk_popover_set_relative_to (::GtkPopover* popover, ::GtkWidget* relative_to);
void base::PopoverBase::set_relative_to (Gtk::Widget relative_to) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GtkWidget* relative_to);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_set_relative_to;
  auto relative_to_to_c = gi::unwrap (relative_to, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GtkWidget*) (relative_to_to_c));
}
void base::PopoverBase::set_relative_to () noexcept
{
  typedef void (*call_wrap_t) (::GtkPopover* popover, ::GtkWidget* relative_to);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_set_relative_to;
  auto relative_to_to_c = nullptr;
  call_wrap_v ((::GtkPopover*) (gobj_()), (::GtkWidget*) (relative_to_to_c));
}

// void gtk_popover_set_transitions_enabled (GtkPopover* popover, gboolean transitions_enabled);
// void gtk_popover_set_transitions_enabled (::GtkPopover* popover, gboolean transitions_enabled);
// IGNORE; deprecated



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popover_extra_def_impl.hpp>)
#include <gtk/popover_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popover_extra_impl.hpp>)
#include <gtk/popover_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PopoverClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkPopoverClass *methods = (::GtkPopoverClass *) class_struct;
  (void) methods;

  methods->closed = (decltype (methods->closed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::closed_>;
}

// void Popover::closed (GtkPopover* popover);
// void Popover::closed (::GtkPopover* popover);
void PopoverClass::closed_ () noexcept
{
  if (!get_struct_()->closed) return ;
  typedef void (*call_wrap_t) (::GtkPopover* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->closed;
  call_wrap_v ((::GtkPopover*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
