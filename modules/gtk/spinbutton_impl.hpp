// AUTO-GENERATED

#ifndef _GI_GTK_SPINBUTTON_IMPL_HPP_
#define _GI_GTK_SPINBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable SpinButtonBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SpinButtonBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* gtk_spin_button_new (GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
// ::GtkSpinButton* gtk_spin_button_new (::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
Gtk::SpinButton base::SpinButtonBase::new_ (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept
{
  typedef ::GtkSpinButton* (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_new;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::SpinButton base::SpinButtonBase::new_ (gdouble climb_rate, guint digits) noexcept
{
  typedef ::GtkSpinButton* (*call_wrap_t) (::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_new;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_spin_button_new_with_range (gdouble min, gdouble max, gdouble step);
// ::GtkSpinButton* gtk_spin_button_new_with_range (gdouble min, gdouble max, gdouble step);
Gtk::SpinButton base::SpinButtonBase::new_with_range (gdouble min, gdouble max, gdouble step) noexcept
{
  typedef ::GtkSpinButton* (*call_wrap_t) (gdouble min, gdouble max, gdouble step);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_new_with_range;
  auto step_to_c = step;
  auto max_to_c = max;
  auto min_to_c = min;
  auto _temp_ret = call_wrap_v ((gdouble) (min_to_c), (gdouble) (max_to_c), (gdouble) (step_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_spin_button_configure (GtkSpinButton* spin_button, GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
// void gtk_spin_button_configure (::GtkSpinButton* spin_button, ::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
void base::SpinButtonBase::configure (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, ::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_configure;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
}
void base::SpinButtonBase::configure (gdouble climb_rate, guint digits) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, ::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_configure;
  auto digits_to_c = digits;
  auto climb_rate_to_c = climb_rate;
  auto adjustment_to_c = nullptr;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c), (gdouble) (climb_rate_to_c), (guint) (digits_to_c));
}

// GtkAdjustment* gtk_spin_button_get_adjustment (GtkSpinButton* spin_button);
// ::GtkAdjustment* gtk_spin_button_get_adjustment (::GtkSpinButton* spin_button);
Gtk::Adjustment base::SpinButtonBase::get_adjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_adjustment;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gtk_spin_button_get_digits (GtkSpinButton* spin_button);
// guint gtk_spin_button_get_digits (::GtkSpinButton* spin_button);
guint base::SpinButtonBase::get_digits () noexcept
{
  typedef guint (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_digits;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_spin_button_get_increments (GtkSpinButton* spin_button, gdouble* step, gdouble* page);
// void gtk_spin_button_get_increments (::GtkSpinButton* spin_button, gdouble* step, gdouble* page);
void base::SpinButtonBase::get_increments (gdouble * step, gdouble * page) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble* step, gdouble* page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_increments;
  gdouble page_o {};
  gdouble step_o {};
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble*) (step ? &step_o : nullptr), (gdouble*) (page ? &page_o : nullptr));
  if (page) *page = page_o;
  if (step) *step = step_o;
}
std::tuple<gdouble, gdouble> base::SpinButtonBase::get_increments () noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble* step, gdouble* page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_increments;
  gdouble page_o {};
  gdouble step_o {};
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble*) (&step_o), (gdouble*) (&page_o));
  return std::make_tuple (step_o, page_o);
}

// gboolean gtk_spin_button_get_numeric (GtkSpinButton* spin_button);
// gboolean gtk_spin_button_get_numeric (::GtkSpinButton* spin_button);
bool base::SpinButtonBase::get_numeric () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_numeric;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_spin_button_get_range (GtkSpinButton* spin_button, gdouble* min, gdouble* max);
// void gtk_spin_button_get_range (::GtkSpinButton* spin_button, gdouble* min, gdouble* max);
void base::SpinButtonBase::get_range (gdouble * min, gdouble * max) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble* min, gdouble* max);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_range;
  gdouble max_o {};
  gdouble min_o {};
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble*) (min ? &min_o : nullptr), (gdouble*) (max ? &max_o : nullptr));
  if (max) *max = max_o;
  if (min) *min = min_o;
}
std::tuple<gdouble, gdouble> base::SpinButtonBase::get_range () noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble* min, gdouble* max);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_range;
  gdouble max_o {};
  gdouble min_o {};
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble*) (&min_o), (gdouble*) (&max_o));
  return std::make_tuple (min_o, max_o);
}

// gboolean gtk_spin_button_get_snap_to_ticks (GtkSpinButton* spin_button);
// gboolean gtk_spin_button_get_snap_to_ticks (::GtkSpinButton* spin_button);
bool base::SpinButtonBase::get_snap_to_ticks () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_snap_to_ticks;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy (GtkSpinButton* spin_button);
// ::GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy (::GtkSpinButton* spin_button);
Gtk::SpinButtonUpdatePolicy base::SpinButtonBase::get_update_policy () noexcept
{
  typedef ::GtkSpinButtonUpdatePolicy (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_update_policy;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gdouble gtk_spin_button_get_value (GtkSpinButton* spin_button);
// gdouble gtk_spin_button_get_value (::GtkSpinButton* spin_button);
gdouble base::SpinButtonBase::get_value () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_value;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// gint gtk_spin_button_get_value_as_int (GtkSpinButton* spin_button);
// gint gtk_spin_button_get_value_as_int (::GtkSpinButton* spin_button);
gint base::SpinButtonBase::get_value_as_int () noexcept
{
  typedef gint (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_value_as_int;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_spin_button_get_wrap (GtkSpinButton* spin_button);
// gboolean gtk_spin_button_get_wrap (::GtkSpinButton* spin_button);
bool base::SpinButtonBase::get_wrap () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_get_wrap;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_spin_button_set_adjustment (GtkSpinButton* spin_button, GtkAdjustment* adjustment);
// void gtk_spin_button_set_adjustment (::GtkSpinButton* spin_button, ::GtkAdjustment* adjustment);
void base::SpinButtonBase::set_adjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_set_adjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_spin_button_set_digits (GtkSpinButton* spin_button, guint digits);
// void gtk_spin_button_set_digits (::GtkSpinButton* spin_button, guint digits);
void base::SpinButtonBase::set_digits (guint digits) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, guint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_set_digits;
  auto digits_to_c = digits;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (guint) (digits_to_c));
}

// void gtk_spin_button_set_increments (GtkSpinButton* spin_button, gdouble step, gdouble page);
// void gtk_spin_button_set_increments (::GtkSpinButton* spin_button, gdouble step, gdouble page);
void base::SpinButtonBase::set_increments (gdouble step, gdouble page) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble step, gdouble page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_set_increments;
  auto page_to_c = page;
  auto step_to_c = step;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble) (step_to_c), (gdouble) (page_to_c));
}

// void gtk_spin_button_set_numeric (GtkSpinButton* spin_button, gboolean numeric);
// void gtk_spin_button_set_numeric (::GtkSpinButton* spin_button, gboolean numeric);
void base::SpinButtonBase::set_numeric (gboolean numeric) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gboolean numeric);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_set_numeric;
  auto numeric_to_c = numeric;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gboolean) (numeric_to_c));
}

// void gtk_spin_button_set_range (GtkSpinButton* spin_button, gdouble min, gdouble max);
// void gtk_spin_button_set_range (::GtkSpinButton* spin_button, gdouble min, gdouble max);
void base::SpinButtonBase::set_range (gdouble min, gdouble max) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble min, gdouble max);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_set_range;
  auto max_to_c = max;
  auto min_to_c = min;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble) (min_to_c), (gdouble) (max_to_c));
}

// void gtk_spin_button_set_snap_to_ticks (GtkSpinButton* spin_button, gboolean snap_to_ticks);
// void gtk_spin_button_set_snap_to_ticks (::GtkSpinButton* spin_button, gboolean snap_to_ticks);
void base::SpinButtonBase::set_snap_to_ticks (gboolean snap_to_ticks) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gboolean snap_to_ticks);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_set_snap_to_ticks;
  auto snap_to_ticks_to_c = snap_to_ticks;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gboolean) (snap_to_ticks_to_c));
}

// void gtk_spin_button_set_update_policy (GtkSpinButton* spin_button, GtkSpinButtonUpdatePolicy policy);
// void gtk_spin_button_set_update_policy (::GtkSpinButton* spin_button, ::GtkSpinButtonUpdatePolicy policy);
void base::SpinButtonBase::set_update_policy (Gtk::SpinButtonUpdatePolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, ::GtkSpinButtonUpdatePolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_set_update_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (::GtkSpinButtonUpdatePolicy) (policy_to_c));
}

// void gtk_spin_button_set_value (GtkSpinButton* spin_button, gdouble value);
// void gtk_spin_button_set_value (::GtkSpinButton* spin_button, gdouble value);
void base::SpinButtonBase::set_value (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_set_value;
  auto value_to_c = value;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gdouble) (value_to_c));
}

// void gtk_spin_button_set_wrap (GtkSpinButton* spin_button, gboolean wrap);
// void gtk_spin_button_set_wrap (::GtkSpinButton* spin_button, gboolean wrap);
void base::SpinButtonBase::set_wrap (gboolean wrap) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, gboolean wrap);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_set_wrap;
  auto wrap_to_c = wrap;
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (gboolean) (wrap_to_c));
}

// void gtk_spin_button_spin (GtkSpinButton* spin_button, GtkSpinType direction, gdouble increment);
// void gtk_spin_button_spin (::GtkSpinButton* spin_button, ::GtkSpinType direction, gdouble increment);
void base::SpinButtonBase::spin (Gtk::SpinType direction, gdouble increment) noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, ::GtkSpinType direction, gdouble increment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_spin;
  auto increment_to_c = increment;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (::GtkSpinType) (direction_to_c), (gdouble) (increment_to_c));
}

// void gtk_spin_button_update (GtkSpinButton* spin_button);
// void gtk_spin_button_update (::GtkSpinButton* spin_button);
void base::SpinButtonBase::update () noexcept
{
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_spin_button_update;
  call_wrap_v ((::GtkSpinButton*) (gobj_()));
}


// SKIP; glib:signal out parameter not supported





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/spinbutton_extra_def_impl.hpp>)
#include <gtk/spinbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/spinbutton_extra_impl.hpp>)
#include <gtk/spinbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SpinButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSpinButtonClass *methods = (::GtkSpinButtonClass *) class_struct;
  (void) methods;

  methods->change_value = (decltype (methods->change_value)) detail::method_wrapper<self, void (*) (Gtk::ScrollType scroll), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::change_value_>;
  methods->output = (decltype (methods->output)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::output_>;
  methods->value_changed = (decltype (methods->value_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::value_changed_>;
  methods->wrapped = (decltype (methods->wrapped)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::wrapped_>;
}

// void SpinButton::change_value (GtkSpinButton* spin_button, GtkScrollType scroll);
// void SpinButton::change_value (::GtkSpinButton* spin_button, ::GtkScrollType scroll);
void SpinButtonClass::change_value_ (Gtk::ScrollType scroll) noexcept
{
  if (!get_struct_()->change_value) return ;
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button, ::GtkScrollType scroll);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->change_value;
  auto scroll_to_c = gi::unwrap (scroll);
  call_wrap_v ((::GtkSpinButton*) (gobj_()), (::GtkScrollType) (scroll_to_c));
}

// gint SpinButton::input (GtkSpinButton* spin_button, gdouble* new_value);
// gint SpinButton::input (::GtkSpinButton* spin_button, gdouble new_value);
// SKIP; inconsistent in new_value pointer depth (1 vs 0)

// gint SpinButton::output (GtkSpinButton* spin_button);
// gint SpinButton::output (::GtkSpinButton* spin_button);
gint SpinButtonClass::output_ () noexcept
{
  if (!get_struct_()->output) return gint{};
  typedef gint (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->output;
  auto _temp_ret = call_wrap_v ((::GtkSpinButton*) (gobj_()));
  return _temp_ret;
}

// void SpinButton::value_changed (GtkSpinButton* spin_button);
// void SpinButton::value_changed (::GtkSpinButton* spin_button);
void SpinButtonClass::value_changed_ () noexcept
{
  if (!get_struct_()->value_changed) return ;
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->value_changed;
  call_wrap_v ((::GtkSpinButton*) (gobj_()));
}

// void SpinButton::wrapped (GtkSpinButton* spin_button);
// void SpinButton::wrapped (::GtkSpinButton* spin_button);
void SpinButtonClass::wrapped_ () noexcept
{
  if (!get_struct_()->wrapped) return ;
  typedef void (*call_wrap_t) (::GtkSpinButton* spin_button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->wrapped;
  call_wrap_v ((::GtkSpinButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
