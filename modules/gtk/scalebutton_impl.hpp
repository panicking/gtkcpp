// AUTO-GENERATED

#ifndef _GI_GTK_SCALEBUTTON_IMPL_HPP_
#define _GI_GTK_SCALEBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable ScaleButtonBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ScaleButtonBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* gtk_scale_button_new (GtkIconSize size, gdouble min, gdouble max, gdouble step, const gchar** icons);
// ::GtkScaleButton* gtk_scale_button_new (gint size, gdouble min, gdouble max, gdouble step, const char** icons);
Gtk::ScaleButton base::ScaleButtonBase::new_ (gint size, gdouble min, gdouble max, gdouble step, const std::vector<std::string> & icons) noexcept
{
  typedef ::GtkScaleButton* (*call_wrap_t) (gint size, gdouble min, gdouble max, gdouble step, const char** icons);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_button_new;
  auto icons_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (icons);
  auto icons_w = unwrap (icons_i, gi::transfer_none, direction_in);
  auto icons_to_c = icons_w.gobj_(false);
  auto step_to_c = step;
  auto max_to_c = max;
  auto min_to_c = min;
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((gint) (size_to_c), (gdouble) (min_to_c), (gdouble) (max_to_c), (gdouble) (step_to_c), (const char**) (icons_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkAdjustment* gtk_scale_button_get_adjustment (GtkScaleButton* button);
// ::GtkAdjustment* gtk_scale_button_get_adjustment (::GtkScaleButton* button);
Gtk::Adjustment base::ScaleButtonBase::get_adjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkScaleButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_button_get_adjustment;
  auto _temp_ret = call_wrap_v ((::GtkScaleButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_scale_button_get_minus_button (GtkScaleButton* button);
// ::GtkButton* gtk_scale_button_get_minus_button (::GtkScaleButton* button);
Gtk::Button base::ScaleButtonBase::get_minus_button () noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (::GtkScaleButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_button_get_minus_button;
  auto _temp_ret = call_wrap_v ((::GtkScaleButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_scale_button_get_plus_button (GtkScaleButton* button);
// ::GtkButton* gtk_scale_button_get_plus_button (::GtkScaleButton* button);
Gtk::Button base::ScaleButtonBase::get_plus_button () noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (::GtkScaleButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_button_get_plus_button;
  auto _temp_ret = call_wrap_v ((::GtkScaleButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_scale_button_get_popup (GtkScaleButton* button);
// ::GtkWidget* gtk_scale_button_get_popup (::GtkScaleButton* button);
Gtk::Widget base::ScaleButtonBase::get_popup () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkScaleButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_button_get_popup;
  auto _temp_ret = call_wrap_v ((::GtkScaleButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble gtk_scale_button_get_value (GtkScaleButton* button);
// gdouble gtk_scale_button_get_value (::GtkScaleButton* button);
gdouble base::ScaleButtonBase::get_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkScaleButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_button_get_value;
  auto _temp_ret = call_wrap_v ((::GtkScaleButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_scale_button_set_adjustment (GtkScaleButton* button, GtkAdjustment* adjustment);
// void gtk_scale_button_set_adjustment (::GtkScaleButton* button, ::GtkAdjustment* adjustment);
void base::ScaleButtonBase::set_adjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkScaleButton* button, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_button_set_adjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkScaleButton*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_scale_button_set_icons (GtkScaleButton* button, const gchar** icons);
// void gtk_scale_button_set_icons (::GtkScaleButton* button, const char** icons);
void base::ScaleButtonBase::set_icons (const std::vector<std::string> & icons) noexcept
{
  typedef void (*call_wrap_t) (::GtkScaleButton* button, const char** icons);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_button_set_icons;
  auto icons_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (icons);
  auto icons_w = unwrap (icons_i, gi::transfer_none, direction_in);
  auto icons_to_c = icons_w.gobj_(false);
  call_wrap_v ((::GtkScaleButton*) (gobj_()), (const char**) (icons_to_c));
}

// void gtk_scale_button_set_value (GtkScaleButton* button, gdouble value);
// void gtk_scale_button_set_value (::GtkScaleButton* button, gdouble value);
void base::ScaleButtonBase::set_value (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkScaleButton* button, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_button_set_value;
  auto value_to_c = value;
  call_wrap_v ((::GtkScaleButton*) (gobj_()), (gdouble) (value_to_c));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scalebutton_extra_def_impl.hpp>)
#include <gtk/scalebutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scalebutton_extra_impl.hpp>)
#include <gtk/scalebutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ScaleButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkScaleButtonClass *methods = (::GtkScaleButtonClass *) class_struct;
  (void) methods;

  methods->value_changed = (decltype (methods->value_changed)) detail::method_wrapper<self, void (*) (gdouble value), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::value_changed_>;
}

// void ScaleButton::value_changed (GtkScaleButton* button, gdouble value);
// void ScaleButton::value_changed (::GtkScaleButton* button, gdouble value);
void ScaleButtonClass::value_changed_ (gdouble value) noexcept
{
  if (!get_struct_()->value_changed) return ;
  typedef void (*call_wrap_t) (::GtkScaleButton* button, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->value_changed;
  auto value_to_c = value;
  call_wrap_v ((::GtkScaleButton*) (gobj_()), (gdouble) (value_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
