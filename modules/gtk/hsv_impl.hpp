// AUTO-GENERATED

#ifndef _GI_GTK_HSV_IMPL_HPP_
#define _GI_GTK_HSV_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_hsv_new ();
// ::GtkHSV* gtk_hsv_new ();
Gtk::HSV base::HSVBase::new_ () noexcept
{
  typedef ::GtkHSV* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_hsv_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_hsv_to_rgb (gdouble h, gdouble s, gdouble v, gdouble* r, gdouble* g, gdouble* b);
// void gtk_hsv_to_rgb (gdouble h, gdouble s, gdouble v, gdouble* r, gdouble* g, gdouble* b);
void base::HSVBase::to_rgb (gdouble h, gdouble s, gdouble v, gdouble & r, gdouble & g, gdouble & b) noexcept
{
  typedef void (*call_wrap_t) (gdouble h, gdouble s, gdouble v, gdouble* r, gdouble* g, gdouble* b);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_hsv_to_rgb;
  gdouble b_o {};
  gdouble g_o {};
  gdouble r_o {};
  auto v_to_c = v;
  auto s_to_c = s;
  auto h_to_c = h;
  call_wrap_v ((gdouble) (h_to_c), (gdouble) (s_to_c), (gdouble) (v_to_c), (gdouble*) (&r_o), (gdouble*) (&g_o), (gdouble*) (&b_o));
  b = b_o;
  g = g_o;
  r = r_o;
}
std::tuple<gdouble, gdouble, gdouble> base::HSVBase::to_rgb (gdouble h, gdouble s, gdouble v) noexcept
{
  typedef void (*call_wrap_t) (gdouble h, gdouble s, gdouble v, gdouble* r, gdouble* g, gdouble* b);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_hsv_to_rgb;
  gdouble b_o {};
  gdouble g_o {};
  gdouble r_o {};
  auto v_to_c = v;
  auto s_to_c = s;
  auto h_to_c = h;
  call_wrap_v ((gdouble) (h_to_c), (gdouble) (s_to_c), (gdouble) (v_to_c), (gdouble*) (&r_o), (gdouble*) (&g_o), (gdouble*) (&b_o));
  return std::make_tuple (r_o, g_o, b_o);
}

// void gtk_hsv_get_color (GtkHSV* hsv, gdouble* h, gdouble* s, gdouble* v);
// void gtk_hsv_get_color (::GtkHSV* hsv, gdouble* h, gdouble* s, gdouble* v);
void base::HSVBase::get_color (gdouble & h, gdouble & s, gdouble & v) noexcept
{
  typedef void (*call_wrap_t) (::GtkHSV* hsv, gdouble* h, gdouble* s, gdouble* v);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_hsv_get_color;
  gdouble v_o {};
  gdouble s_o {};
  gdouble h_o {};
  call_wrap_v ((::GtkHSV*) (gobj_()), (gdouble*) (&h_o), (gdouble*) (&s_o), (gdouble*) (&v_o));
  v = v_o;
  s = s_o;
  h = h_o;
}
std::tuple<gdouble, gdouble, gdouble> base::HSVBase::get_color () noexcept
{
  typedef void (*call_wrap_t) (::GtkHSV* hsv, gdouble* h, gdouble* s, gdouble* v);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_hsv_get_color;
  gdouble v_o {};
  gdouble s_o {};
  gdouble h_o {};
  call_wrap_v ((::GtkHSV*) (gobj_()), (gdouble*) (&h_o), (gdouble*) (&s_o), (gdouble*) (&v_o));
  return std::make_tuple (h_o, s_o, v_o);
}

// void gtk_hsv_get_metrics (GtkHSV* hsv, gint* size, gint* ring_width);
// void gtk_hsv_get_metrics (::GtkHSV* hsv, gint* size, gint* ring_width);
void base::HSVBase::get_metrics (gint & size, gint & ring_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkHSV* hsv, gint* size, gint* ring_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_hsv_get_metrics;
  gint ring_width_o {};
  gint size_o {};
  call_wrap_v ((::GtkHSV*) (gobj_()), (gint*) (&size_o), (gint*) (&ring_width_o));
  ring_width = ring_width_o;
  size = size_o;
}
std::tuple<gint, gint> base::HSVBase::get_metrics () noexcept
{
  typedef void (*call_wrap_t) (::GtkHSV* hsv, gint* size, gint* ring_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_hsv_get_metrics;
  gint ring_width_o {};
  gint size_o {};
  call_wrap_v ((::GtkHSV*) (gobj_()), (gint*) (&size_o), (gint*) (&ring_width_o));
  return std::make_tuple (size_o, ring_width_o);
}

// gboolean gtk_hsv_is_adjusting (GtkHSV* hsv);
// gboolean gtk_hsv_is_adjusting (::GtkHSV* hsv);
bool base::HSVBase::is_adjusting () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkHSV* hsv);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_hsv_is_adjusting;
  auto _temp_ret = call_wrap_v ((::GtkHSV*) (gobj_()));
  return _temp_ret;
}

// void gtk_hsv_set_color (GtkHSV* hsv, double h, double s, double v);
// void gtk_hsv_set_color (::GtkHSV* hsv, gdouble h, gdouble s, gdouble v);
void base::HSVBase::set_color (gdouble h, gdouble s, gdouble v) noexcept
{
  typedef void (*call_wrap_t) (::GtkHSV* hsv, gdouble h, gdouble s, gdouble v);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_hsv_set_color;
  auto v_to_c = v;
  auto s_to_c = s;
  auto h_to_c = h;
  call_wrap_v ((::GtkHSV*) (gobj_()), (gdouble) (h_to_c), (gdouble) (s_to_c), (gdouble) (v_to_c));
}

// void gtk_hsv_set_metrics (GtkHSV* hsv, gint size, gint ring_width);
// void gtk_hsv_set_metrics (::GtkHSV* hsv, gint size, gint ring_width);
void base::HSVBase::set_metrics (gint size, gint ring_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkHSV* hsv, gint size, gint ring_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_hsv_set_metrics;
  auto ring_width_to_c = ring_width;
  auto size_to_c = size;
  call_wrap_v ((::GtkHSV*) (gobj_()), (gint) (size_to_c), (gint) (ring_width_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/hsv_extra_def_impl.hpp>)
#include <gtk/hsv_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/hsv_extra_impl.hpp>)
#include <gtk/hsv_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void HSVClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkHSVClass *methods = (::GtkHSVClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
  methods->move = (decltype (methods->move)) detail::method_wrapper<self, void (*) (Gtk::DirectionType type), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::move_>;
}

// void HSV::changed (GtkHSV* hsv);
// void HSV::changed (::GtkHSV* hsv);
void HSVClass::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GtkHSV* hsv);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkHSV*) (gobj_()));
}

// void HSV::move (GtkHSV* hsv, GtkDirectionType type);
// void HSV::move (::GtkHSV* hsv, ::GtkDirectionType type);
void HSVClass::move_ (Gtk::DirectionType type) noexcept
{
  if (!get_struct_()->move) return ;
  typedef void (*call_wrap_t) (::GtkHSV* hsv, ::GtkDirectionType type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GtkHSV*) (gobj_()), (::GtkDirectionType) (type_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
