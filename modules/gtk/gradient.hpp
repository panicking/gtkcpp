// AUTO-GENERATED

#ifndef _GI_GTK_GRADIENT_HPP_
#define _GI_GTK_GRADIENT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class StyleContext;
class StyleProperties;
class SymbolicColor;

class Gradient;

namespace base {


#define GI_GTK_GRADIENT_BASE base::GradientBase
class GradientBase : public gi::detail::GBoxedWrapper<GradientBase, ::GtkGradient>
{
typedef gi::detail::GBoxedWrapper<GradientBase, ::GtkGradient> super_type;
public:

GradientBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_gradient_get_type(); } 

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
GI_INLINE_DECL cairo::Pattern resolve_for_context (Gtk::StyleContext context) noexcept;

// char* gtk_gradient_to_string (GtkGradient* gradient);
// char* gtk_gradient_to_string (::GtkGradient* gradient);
// IGNORE; deprecated

// void gtk_gradient_unref (GtkGradient* gradient);
// void gtk_gradient_unref (::GtkGradient* gradient);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gradient_extra_def.hpp>)
#include <gtk/gradient_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gradient_extra.hpp>)
#include <gtk/gradient_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Gradient : public GI_GTK_GRADIENT_BASE
{ typedef GI_GTK_GRADIENT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGradient>
{ typedef Gtk::Gradient type; }; 

} // namespace repository

} // namespace gi

#endif
