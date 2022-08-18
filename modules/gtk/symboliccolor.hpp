// AUTO-GENERATED

#ifndef _GI_GTK_SYMBOLICCOLOR_HPP_
#define _GI_GTK_SYMBOLICCOLOR_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class StyleProperties;

class SymbolicColor;

namespace base {


#define GI_GTK_SYMBOLICCOLOR_BASE base::SymbolicColorBase
class SymbolicColorBase : public gi::detail::GBoxedWrapper<SymbolicColorBase, ::GtkSymbolicColor>
{
typedef gi::detail::GBoxedWrapper<SymbolicColorBase, ::GtkSymbolicColor> super_type;
public:

SymbolicColorBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_symbolic_color_get_type(); } 

// GtkSymbolicColor* gtk_symbolic_color_new_alpha (GtkSymbolicColor* color, gdouble factor);
// ::GtkSymbolicColor* gtk_symbolic_color_new_alpha (::GtkSymbolicColor* color, gdouble factor);
// IGNORE; deprecated

// GtkSymbolicColor* gtk_symbolic_color_new_literal (const GdkRGBA* color);
// ::GtkSymbolicColor* gtk_symbolic_color_new_literal (const ::GdkRGBA* color);
// IGNORE; deprecated

// GtkSymbolicColor* gtk_symbolic_color_new_mix (GtkSymbolicColor* color1, GtkSymbolicColor* color2, gdouble factor);
// ::GtkSymbolicColor* gtk_symbolic_color_new_mix (::GtkSymbolicColor* color1, ::GtkSymbolicColor* color2, gdouble factor);
// IGNORE; deprecated

// GtkSymbolicColor* gtk_symbolic_color_new_name (const gchar* name);
// ::GtkSymbolicColor* gtk_symbolic_color_new_name (const char* name);
// IGNORE; deprecated

// GtkSymbolicColor* gtk_symbolic_color_new_shade (GtkSymbolicColor* color, gdouble factor);
// ::GtkSymbolicColor* gtk_symbolic_color_new_shade (::GtkSymbolicColor* color, gdouble factor);
// IGNORE; deprecated

// GtkSymbolicColor* gtk_symbolic_color_new_win32 (const gchar* theme_class, gint id);
// ::GtkSymbolicColor* gtk_symbolic_color_new_win32 (const char* theme_class, gint id);
// IGNORE; deprecated

// GtkSymbolicColor* gtk_symbolic_color_ref (GtkSymbolicColor* color);
// ::GtkSymbolicColor* gtk_symbolic_color_ref (::GtkSymbolicColor* color);
// IGNORE; marked ignore

// gboolean gtk_symbolic_color_resolve (GtkSymbolicColor* color, GtkStyleProperties* props, GdkRGBA* resolved_color);
// gboolean gtk_symbolic_color_resolve (::GtkSymbolicColor* color, ::GtkStyleProperties* props, ::GdkRGBA* resolved_color);
// IGNORE; deprecated

// char* gtk_symbolic_color_to_string (GtkSymbolicColor* color);
// char* gtk_symbolic_color_to_string (::GtkSymbolicColor* color);
// IGNORE; deprecated

// void gtk_symbolic_color_unref (GtkSymbolicColor* color);
// void gtk_symbolic_color_unref (::GtkSymbolicColor* color);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/symboliccolor_extra_def.hpp>)
#include <gtk/symboliccolor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/symboliccolor_extra.hpp>)
#include <gtk/symboliccolor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SymbolicColor : public GI_GTK_SYMBOLICCOLOR_BASE
{ typedef GI_GTK_SYMBOLICCOLOR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSymbolicColor>
{ typedef Gtk::SymbolicColor type; }; 

} // namespace repository

} // namespace gi

#endif
