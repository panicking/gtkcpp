// AUTO-GENERATED

#ifndef _GI_GTK_RANGE_IMPL_HPP_
#define _GI_GTK_RANGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable RangeBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

RangeBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkAdjustment* gtk_range_get_adjustment (GtkRange* range);
// ::GtkAdjustment* gtk_range_get_adjustment (::GtkRange* range);
Gtk::Adjustment base::RangeBase::get_adjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_adjustment;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble gtk_range_get_fill_level (GtkRange* range);
// gdouble gtk_range_get_fill_level (::GtkRange* range);
gdouble base::RangeBase::get_fill_level () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_fill_level;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_range_get_flippable (GtkRange* range);
// gboolean gtk_range_get_flippable (::GtkRange* range);
bool base::RangeBase::get_flippable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_flippable;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_range_get_inverted (GtkRange* range);
// gboolean gtk_range_get_inverted (::GtkRange* range);
bool base::RangeBase::get_inverted () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_inverted;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// GtkSensitivityType gtk_range_get_lower_stepper_sensitivity (GtkRange* range);
// ::GtkSensitivityType gtk_range_get_lower_stepper_sensitivity (::GtkRange* range);
Gtk::SensitivityType base::RangeBase::get_lower_stepper_sensitivity () noexcept
{
  typedef ::GtkSensitivityType (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_lower_stepper_sensitivity;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint gtk_range_get_min_slider_size (GtkRange* range);
// gint gtk_range_get_min_slider_size (::GtkRange* range);
// IGNORE; deprecated

// void gtk_range_get_range_rect (GtkRange* range, GdkRectangle* range_rect);
// void gtk_range_get_range_rect (::GtkRange* range, ::GdkRectangle* range_rect);
void base::RangeBase::get_range_rect (Gdk::Rectangle & range_rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, ::GdkRectangle* range_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_range_rect;
  traits::unset_wrapper<::GdkRectangle>::type range_rect_c;
  call_wrap_v ((::GtkRange*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &range_rect_c));
  range_rect = gi::wrap ((::GdkRectangle*) &range_rect_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::RangeBase::get_range_rect () noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, ::GdkRectangle* range_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_range_rect;
  traits::unset_wrapper<::GdkRectangle>::type range_rect_c;
  call_wrap_v ((::GtkRange*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &range_rect_c));
  return gi::wrap ((::GdkRectangle*) &range_rect_c, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_range_get_restrict_to_fill_level (GtkRange* range);
// gboolean gtk_range_get_restrict_to_fill_level (::GtkRange* range);
bool base::RangeBase::get_restrict_to_fill_level () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_restrict_to_fill_level;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// gint gtk_range_get_round_digits (GtkRange* range);
// gint gtk_range_get_round_digits (::GtkRange* range);
gint base::RangeBase::get_round_digits () noexcept
{
  typedef gint (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_round_digits;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_range_get_show_fill_level (GtkRange* range);
// gboolean gtk_range_get_show_fill_level (::GtkRange* range);
bool base::RangeBase::get_show_fill_level () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_show_fill_level;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// void gtk_range_get_slider_range (GtkRange* range, gint* slider_start, gint* slider_end);
// void gtk_range_get_slider_range (::GtkRange* range, gint* slider_start, gint* slider_end);
void base::RangeBase::get_slider_range (gint * slider_start, gint * slider_end) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gint* slider_start, gint* slider_end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_slider_range;
  gint slider_end_o {};
  gint slider_start_o {};
  call_wrap_v ((::GtkRange*) (gobj_()), (gint*) (slider_start ? &slider_start_o : nullptr), (gint*) (slider_end ? &slider_end_o : nullptr));
  if (slider_end) *slider_end = slider_end_o;
  if (slider_start) *slider_start = slider_start_o;
}
std::tuple<gint, gint> base::RangeBase::get_slider_range () noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gint* slider_start, gint* slider_end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_slider_range;
  gint slider_end_o {};
  gint slider_start_o {};
  call_wrap_v ((::GtkRange*) (gobj_()), (gint*) (&slider_start_o), (gint*) (&slider_end_o));
  return std::make_tuple (slider_start_o, slider_end_o);
}

// gboolean gtk_range_get_slider_size_fixed (GtkRange* range);
// gboolean gtk_range_get_slider_size_fixed (::GtkRange* range);
bool base::RangeBase::get_slider_size_fixed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_slider_size_fixed;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// GtkSensitivityType gtk_range_get_upper_stepper_sensitivity (GtkRange* range);
// ::GtkSensitivityType gtk_range_get_upper_stepper_sensitivity (::GtkRange* range);
Gtk::SensitivityType base::RangeBase::get_upper_stepper_sensitivity () noexcept
{
  typedef ::GtkSensitivityType (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_upper_stepper_sensitivity;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gdouble gtk_range_get_value (GtkRange* range);
// gdouble gtk_range_get_value (::GtkRange* range);
gdouble base::RangeBase::get_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_get_value;
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()));
  return _temp_ret;
}

// void gtk_range_set_adjustment (GtkRange* range, GtkAdjustment* adjustment);
// void gtk_range_set_adjustment (::GtkRange* range, ::GtkAdjustment* adjustment);
void base::RangeBase::set_adjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_adjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRange*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_range_set_fill_level (GtkRange* range, gdouble fill_level);
// void gtk_range_set_fill_level (::GtkRange* range, gdouble fill_level);
void base::RangeBase::set_fill_level (gdouble fill_level) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gdouble fill_level);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_fill_level;
  auto fill_level_to_c = fill_level;
  call_wrap_v ((::GtkRange*) (gobj_()), (gdouble) (fill_level_to_c));
}

// void gtk_range_set_flippable (GtkRange* range, gboolean flippable);
// void gtk_range_set_flippable (::GtkRange* range, gboolean flippable);
void base::RangeBase::set_flippable (gboolean flippable) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gboolean flippable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_flippable;
  auto flippable_to_c = flippable;
  call_wrap_v ((::GtkRange*) (gobj_()), (gboolean) (flippable_to_c));
}

// void gtk_range_set_increments (GtkRange* range, gdouble step, gdouble page);
// void gtk_range_set_increments (::GtkRange* range, gdouble step, gdouble page);
void base::RangeBase::set_increments (gdouble step, gdouble page) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gdouble step, gdouble page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_increments;
  auto page_to_c = page;
  auto step_to_c = step;
  call_wrap_v ((::GtkRange*) (gobj_()), (gdouble) (step_to_c), (gdouble) (page_to_c));
}

// void gtk_range_set_inverted (GtkRange* range, gboolean setting);
// void gtk_range_set_inverted (::GtkRange* range, gboolean setting);
void base::RangeBase::set_inverted (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_inverted;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkRange*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_range_set_lower_stepper_sensitivity (GtkRange* range, GtkSensitivityType sensitivity);
// void gtk_range_set_lower_stepper_sensitivity (::GtkRange* range, ::GtkSensitivityType sensitivity);
void base::RangeBase::set_lower_stepper_sensitivity (Gtk::SensitivityType sensitivity) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, ::GtkSensitivityType sensitivity);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_lower_stepper_sensitivity;
  auto sensitivity_to_c = gi::unwrap (sensitivity);
  call_wrap_v ((::GtkRange*) (gobj_()), (::GtkSensitivityType) (sensitivity_to_c));
}

// void gtk_range_set_min_slider_size (GtkRange* range, gint min_size);
// void gtk_range_set_min_slider_size (::GtkRange* range, gint min_size);
// IGNORE; deprecated

// void gtk_range_set_range (GtkRange* range, gdouble min, gdouble max);
// void gtk_range_set_range (::GtkRange* range, gdouble min, gdouble max);
void base::RangeBase::set_range (gdouble min, gdouble max) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gdouble min, gdouble max);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_range;
  auto max_to_c = max;
  auto min_to_c = min;
  call_wrap_v ((::GtkRange*) (gobj_()), (gdouble) (min_to_c), (gdouble) (max_to_c));
}

// void gtk_range_set_restrict_to_fill_level (GtkRange* range, gboolean restrict_to_fill_level);
// void gtk_range_set_restrict_to_fill_level (::GtkRange* range, gboolean restrict_to_fill_level);
void base::RangeBase::set_restrict_to_fill_level (gboolean restrict_to_fill_level) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gboolean restrict_to_fill_level);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_restrict_to_fill_level;
  auto restrict_to_fill_level_to_c = restrict_to_fill_level;
  call_wrap_v ((::GtkRange*) (gobj_()), (gboolean) (restrict_to_fill_level_to_c));
}

// void gtk_range_set_round_digits (GtkRange* range, gint round_digits);
// void gtk_range_set_round_digits (::GtkRange* range, gint round_digits);
void base::RangeBase::set_round_digits (gint round_digits) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gint round_digits);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_round_digits;
  auto round_digits_to_c = round_digits;
  call_wrap_v ((::GtkRange*) (gobj_()), (gint) (round_digits_to_c));
}

// void gtk_range_set_show_fill_level (GtkRange* range, gboolean show_fill_level);
// void gtk_range_set_show_fill_level (::GtkRange* range, gboolean show_fill_level);
void base::RangeBase::set_show_fill_level (gboolean show_fill_level) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gboolean show_fill_level);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_show_fill_level;
  auto show_fill_level_to_c = show_fill_level;
  call_wrap_v ((::GtkRange*) (gobj_()), (gboolean) (show_fill_level_to_c));
}

// void gtk_range_set_slider_size_fixed (GtkRange* range, gboolean size_fixed);
// void gtk_range_set_slider_size_fixed (::GtkRange* range, gboolean size_fixed);
void base::RangeBase::set_slider_size_fixed (gboolean size_fixed) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gboolean size_fixed);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_slider_size_fixed;
  auto size_fixed_to_c = size_fixed;
  call_wrap_v ((::GtkRange*) (gobj_()), (gboolean) (size_fixed_to_c));
}

// void gtk_range_set_upper_stepper_sensitivity (GtkRange* range, GtkSensitivityType sensitivity);
// void gtk_range_set_upper_stepper_sensitivity (::GtkRange* range, ::GtkSensitivityType sensitivity);
void base::RangeBase::set_upper_stepper_sensitivity (Gtk::SensitivityType sensitivity) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, ::GtkSensitivityType sensitivity);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_upper_stepper_sensitivity;
  auto sensitivity_to_c = gi::unwrap (sensitivity);
  call_wrap_v ((::GtkRange*) (gobj_()), (::GtkSensitivityType) (sensitivity_to_c));
}

// void gtk_range_set_value (GtkRange* range, gdouble value);
// void gtk_range_set_value (::GtkRange* range, gdouble value);
void base::RangeBase::set_value (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRange* range, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_range_set_value;
  auto value_to_c = value;
  call_wrap_v ((::GtkRange*) (gobj_()), (gdouble) (value_to_c));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/range_extra_def_impl.hpp>)
#include <gtk/range_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/range_extra_impl.hpp>)
#include <gtk/range_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RangeClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRangeClass *methods = (::GtkRangeClass *) class_struct;
  (void) methods;

  methods->adjust_bounds = (decltype (methods->adjust_bounds)) detail::method_wrapper<self, void (*) (gdouble new_value), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::adjust_bounds_>;
  methods->change_value = (decltype (methods->change_value)) detail::method_wrapper<self, bool (*) (Gtk::ScrollType scroll, gdouble new_value), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::change_value_>;
  methods->get_range_border = (decltype (methods->get_range_border)) detail::method_wrapper<self, void (*) (Gtk::Border border_), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_range_border_>;
  methods->move_slider = (decltype (methods->move_slider)) detail::method_wrapper<self, void (*) (Gtk::ScrollType scroll), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::move_slider_>;
  methods->value_changed = (decltype (methods->value_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::value_changed_>;
}

// void Range::adjust_bounds (GtkRange* range, gdouble new_value);
// void Range::adjust_bounds (::GtkRange* range, gdouble new_value);
void RangeClass::adjust_bounds_ (gdouble new_value) noexcept
{
  if (!get_struct_()->adjust_bounds) return ;
  typedef void (*call_wrap_t) (::GtkRange* range, gdouble new_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->adjust_bounds;
  auto new_value_to_c = new_value;
  call_wrap_v ((::GtkRange*) (gobj_()), (gdouble) (new_value_to_c));
}

// gboolean Range::change_value (GtkRange* range, GtkScrollType scroll, gdouble new_value);
// gboolean Range::change_value (::GtkRange* range, ::GtkScrollType scroll, gdouble new_value);
bool RangeClass::change_value_ (Gtk::ScrollType scroll, gdouble new_value) noexcept
{
  if (!get_struct_()->change_value) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkRange* range, ::GtkScrollType scroll, gdouble new_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->change_value;
  auto new_value_to_c = new_value;
  auto scroll_to_c = gi::unwrap (scroll);
  auto _temp_ret = call_wrap_v ((::GtkRange*) (gobj_()), (::GtkScrollType) (scroll_to_c), (gdouble) (new_value_to_c));
  return _temp_ret;
}

// void Range::get_range_border (GtkRange* range, GtkBorder* border_);
// void Range::get_range_border (::GtkRange* range, ::GtkBorder* border_);
void RangeClass::get_range_border_ (Gtk::Border border_) noexcept
{
  if (!get_struct_()->get_range_border) return ;
  typedef void (*call_wrap_t) (::GtkRange* range, ::GtkBorder* border_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_range_border;
  auto border__to_c = gi::unwrap (border_, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRange*) (gobj_()), (::GtkBorder*) (border__to_c));
}

// void Range::get_range_size_request (GtkRange* range, GtkOrientation orientation, gint* minimum, gint* natural);
// void Range::get_range_size_request (::GtkRange* range, ::GtkOrientation orientation, gint minimum, gint natural);
// SKIP; inconsistent in natural pointer depth (1 vs 0), inconsistent in minimum pointer depth (1 vs 0)

// void Range::move_slider (GtkRange* range, GtkScrollType scroll);
// void Range::move_slider (::GtkRange* range, ::GtkScrollType scroll);
void RangeClass::move_slider_ (Gtk::ScrollType scroll) noexcept
{
  if (!get_struct_()->move_slider) return ;
  typedef void (*call_wrap_t) (::GtkRange* range, ::GtkScrollType scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_slider;
  auto scroll_to_c = gi::unwrap (scroll);
  call_wrap_v ((::GtkRange*) (gobj_()), (::GtkScrollType) (scroll_to_c));
}

// void Range::value_changed (GtkRange* range);
// void Range::value_changed (::GtkRange* range);
void RangeClass::value_changed_ () noexcept
{
  if (!get_struct_()->value_changed) return ;
  typedef void (*call_wrap_t) (::GtkRange* range);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->value_changed;
  call_wrap_v ((::GtkRange*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
