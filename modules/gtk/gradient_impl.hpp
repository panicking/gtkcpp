// AUTO-GENERATED

#ifndef _GI_GTK_GRADIENT_IMPL_HPP_
#define _GI_GTK_GRADIENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGradient* gtk_gradient_new_linear (gdouble x0, gdouble y0, gdouble x1, gdouble y1);
// ::GtkGradient* gtk_gradient_new_linear (gdouble x0, gdouble y0, gdouble x1, gdouble y1);
// IGNORE; deprecated

// GtkGradient* gtk_gradient_new_radial (gdouble x0, gdouble y0, gdouble radius0, gdouble x1, gdouble y1, gdouble radius1);
// ::GtkGradient* gtk_gradient_new_radial (gdouble x0, gdouble y0, gdouble radius0, gdouble x1, gdouble y1, gdouble radius1);
// IGNORE; deprecated

// void gtk_gradient_add_color_stop (GtkGradient* gradient, gdouble offset, GtkSymbolicColor* color);
// void gtk_gradient_add_color_stop (::GtkGradient* gradient, gdouble offset, ::GtkSymbolicColor* color);
// IGNORE; deprecated

// GtkGradient* gtk_gradient_ref (GtkGradient* gradient);
// ::GtkGradient* gtk_gradient_ref (::GtkGradient* gradient);
// IGNORE; marked ignore

// gboolean gtk_gradient_resolve (GtkGradient* gradient, GtkStyleProperties* props, cairo_pattern_t** resolved_gradient);
// gboolean gtk_gradient_resolve (::GtkGradient* gradient, ::GtkStyleProperties* props, ::cairo_pattern_t** resolved_gradient);
// IGNORE; deprecated

// cairo_pattern_t* gtk_gradient_resolve_for_context (GtkGradient* gradient, GtkStyleContext* context);
// ::cairo_pattern_t* gtk_gradient_resolve_for_context (::GtkGradient* gradient, ::GtkStyleContext* context);
cairo::Pattern base::GradientBase::resolve_for_context (Gtk::StyleContext context) noexcept
{
  typedef ::cairo_pattern_t* (*call_wrap_t) (::GtkGradient* gradient, ::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gradient_resolve_for_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkGradient*) (gobj_()), (::GtkStyleContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* gtk_gradient_to_string (GtkGradient* gradient);
// char* gtk_gradient_to_string (::GtkGradient* gradient);
// IGNORE; deprecated

// void gtk_gradient_unref (GtkGradient* gradient);
// void gtk_gradient_unref (::GtkGradient* gradient);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gradient_extra_def_impl.hpp>)
#include <gtk/gradient_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gradient_extra_impl.hpp>)
#include <gtk/gradient_extra_impl.hpp>
#endif
#endif

#endif
