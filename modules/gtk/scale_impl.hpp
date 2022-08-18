// AUTO-GENERATED

#ifndef _GI_GTK_SCALE_IMPL_HPP_
#define _GI_GTK_SCALE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_scale_new (GtkOrientation orientation, GtkAdjustment* adjustment);
// ::GtkScale* gtk_scale_new (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
Gtk::Scale base::ScaleBase::new_ (Gtk::Orientation orientation, Gtk::Adjustment adjustment) noexcept
{
  typedef ::GtkScale* (*call_wrap_t) (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_new;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (::GtkAdjustment*) (adjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Scale base::ScaleBase::new_ (Gtk::Orientation orientation) noexcept
{
  typedef ::GtkScale* (*call_wrap_t) (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_new;
  auto adjustment_to_c = nullptr;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (::GtkAdjustment*) (adjustment_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_scale_new_with_range (GtkOrientation orientation, gdouble min, gdouble max, gdouble step);
// ::GtkScale* gtk_scale_new_with_range (::GtkOrientation orientation, gdouble min, gdouble max, gdouble step);
Gtk::Scale base::ScaleBase::new_with_range (Gtk::Orientation orientation, gdouble min, gdouble max, gdouble step) noexcept
{
  typedef ::GtkScale* (*call_wrap_t) (::GtkOrientation orientation, gdouble min, gdouble max, gdouble step);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_new_with_range;
  auto step_to_c = step;
  auto max_to_c = max;
  auto min_to_c = min;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (gdouble) (min_to_c), (gdouble) (max_to_c), (gdouble) (step_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_scale_add_mark (GtkScale* scale, gdouble value, GtkPositionType position, const gchar* markup);
// void gtk_scale_add_mark (::GtkScale* scale, gdouble value, ::GtkPositionType position, const char* markup);
void base::ScaleBase::add_mark (gdouble value, Gtk::PositionType position, const std::string & markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gdouble value, ::GtkPositionType position, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_add_mark;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none, gi::direction_in);
  auto position_to_c = gi::unwrap (position);
  auto value_to_c = value;
  call_wrap_v ((::GtkScale*) (gobj_()), (gdouble) (value_to_c), (::GtkPositionType) (position_to_c), (const char*) (markup_to_c));
}
void base::ScaleBase::add_mark (gdouble value, Gtk::PositionType position) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gdouble value, ::GtkPositionType position, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_add_mark;
  auto markup_to_c = nullptr;
  auto position_to_c = gi::unwrap (position);
  auto value_to_c = value;
  call_wrap_v ((::GtkScale*) (gobj_()), (gdouble) (value_to_c), (::GtkPositionType) (position_to_c), (const char*) (markup_to_c));
}

// void gtk_scale_clear_marks (GtkScale* scale);
// void gtk_scale_clear_marks (::GtkScale* scale);
void base::ScaleBase::clear_marks () noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_clear_marks;
  call_wrap_v ((::GtkScale*) (gobj_()));
}

// gint gtk_scale_get_digits (GtkScale* scale);
// gint gtk_scale_get_digits (::GtkScale* scale);
gint base::ScaleBase::get_digits () noexcept
{
  typedef gint (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_get_digits;
  auto _temp_ret = call_wrap_v ((::GtkScale*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_scale_get_draw_value (GtkScale* scale);
// gboolean gtk_scale_get_draw_value (::GtkScale* scale);
bool base::ScaleBase::get_draw_value () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_get_draw_value;
  auto _temp_ret = call_wrap_v ((::GtkScale*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_scale_get_has_origin (GtkScale* scale);
// gboolean gtk_scale_get_has_origin (::GtkScale* scale);
bool base::ScaleBase::get_has_origin () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_get_has_origin;
  auto _temp_ret = call_wrap_v ((::GtkScale*) (gobj_()));
  return _temp_ret;
}

// PangoLayout* gtk_scale_get_layout (GtkScale* scale);
// ::PangoLayout* gtk_scale_get_layout (::GtkScale* scale);
Pango::Layout base::ScaleBase::get_layout () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_get_layout;
  auto _temp_ret = call_wrap_v ((::GtkScale*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_scale_get_layout_offsets (GtkScale* scale, gint* x, gint* y);
// void gtk_scale_get_layout_offsets (::GtkScale* scale, gint* x, gint* y);
void base::ScaleBase::get_layout_offsets (gint * x, gint * y) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_get_layout_offsets;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GtkScale*) (gobj_()), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
}
std::tuple<gint, gint> base::ScaleBase::get_layout_offsets () noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_get_layout_offsets;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GtkScale*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o));
  return std::make_tuple (x_o, y_o);
}

// GtkPositionType gtk_scale_get_value_pos (GtkScale* scale);
// ::GtkPositionType gtk_scale_get_value_pos (::GtkScale* scale);
Gtk::PositionType base::ScaleBase::get_value_pos () noexcept
{
  typedef ::GtkPositionType (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_get_value_pos;
  auto _temp_ret = call_wrap_v ((::GtkScale*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_scale_set_digits (GtkScale* scale, gint digits);
// void gtk_scale_set_digits (::GtkScale* scale, gint digits);
void base::ScaleBase::set_digits (gint digits) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gint digits);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_set_digits;
  auto digits_to_c = digits;
  call_wrap_v ((::GtkScale*) (gobj_()), (gint) (digits_to_c));
}

// void gtk_scale_set_draw_value (GtkScale* scale, gboolean draw_value);
// void gtk_scale_set_draw_value (::GtkScale* scale, gboolean draw_value);
void base::ScaleBase::set_draw_value (gboolean draw_value) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gboolean draw_value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_set_draw_value;
  auto draw_value_to_c = draw_value;
  call_wrap_v ((::GtkScale*) (gobj_()), (gboolean) (draw_value_to_c));
}

// void gtk_scale_set_has_origin (GtkScale* scale, gboolean has_origin);
// void gtk_scale_set_has_origin (::GtkScale* scale, gboolean has_origin);
void base::ScaleBase::set_has_origin (gboolean has_origin) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, gboolean has_origin);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_set_has_origin;
  auto has_origin_to_c = has_origin;
  call_wrap_v ((::GtkScale*) (gobj_()), (gboolean) (has_origin_to_c));
}

// void gtk_scale_set_value_pos (GtkScale* scale, GtkPositionType pos);
// void gtk_scale_set_value_pos (::GtkScale* scale, ::GtkPositionType pos);
void base::ScaleBase::set_value_pos (Gtk::PositionType pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkScale* scale, ::GtkPositionType pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_scale_set_value_pos;
  auto pos_to_c = gi::unwrap (pos);
  call_wrap_v ((::GtkScale*) (gobj_()), (::GtkPositionType) (pos_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scale_extra_def_impl.hpp>)
#include <gtk/scale_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scale_extra_impl.hpp>)
#include <gtk/scale_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ScaleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkScaleClass *methods = (::GtkScaleClass *) class_struct;
  (void) methods;

  methods->draw_value = (decltype (methods->draw_value)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::draw_value_>;
  methods->format_value = (decltype (methods->format_value)) detail::method_wrapper<self, std::string (*) (gdouble value), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::format_value_>;
}

// void Scale::draw_value (GtkScale* scale);
// void Scale::draw_value (::GtkScale* scale);
void ScaleClass::draw_value_ () noexcept
{
  if (!get_struct_()->draw_value) return ;
  typedef void (*call_wrap_t) (::GtkScale* scale);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw_value;
  call_wrap_v ((::GtkScale*) (gobj_()));
}

// gchar* Scale::format_value (GtkScale* scale, gdouble value);
// char* Scale::format_value (::GtkScale* scale, gdouble value);
std::string ScaleClass::format_value_ (gdouble value) noexcept
{
  if (!get_struct_()->format_value) return std::string{};
  typedef char* (*call_wrap_t) (::GtkScale* scale, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->format_value;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((::GtkScale*) (gobj_()), (gdouble) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void Scale::get_layout_offsets (GtkScale* scale, gint* x, gint* y);
// void Scale::get_layout_offsets (::GtkScale* scale, gint* x, gint* y);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
