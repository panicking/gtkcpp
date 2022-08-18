// AUTO-GENERATED

#ifndef _GI_GTK_PRINTCONTEXT_HPP_
#define _GI_GTK_PRINTCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageSetup;

class PrintContext;

namespace base {


#define GI_GTK_PRINTCONTEXT_BASE base::PrintContextBase
class PrintContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkPrintContext BaseObjectType;

PrintContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_print_context_get_type(); } 

// PangoContext* gtk_print_context_create_pango_context (GtkPrintContext* context);
// ::PangoContext* gtk_print_context_create_pango_context (::GtkPrintContext* context);
GI_INLINE_DECL Pango::Context create_pango_context () noexcept;

// PangoLayout* gtk_print_context_create_pango_layout (GtkPrintContext* context);
// ::PangoLayout* gtk_print_context_create_pango_layout (::GtkPrintContext* context);
GI_INLINE_DECL Pango::Layout create_pango_layout () noexcept;

// cairo_t* gtk_print_context_get_cairo_context (GtkPrintContext* context);
// ::cairo_t* gtk_print_context_get_cairo_context (::GtkPrintContext* context);
GI_INLINE_DECL cairo::Context get_cairo_context () noexcept;

// gdouble gtk_print_context_get_dpi_x (GtkPrintContext* context);
// gdouble gtk_print_context_get_dpi_x (::GtkPrintContext* context);
GI_INLINE_DECL gdouble get_dpi_x () noexcept;

// gdouble gtk_print_context_get_dpi_y (GtkPrintContext* context);
// gdouble gtk_print_context_get_dpi_y (::GtkPrintContext* context);
GI_INLINE_DECL gdouble get_dpi_y () noexcept;

// gboolean gtk_print_context_get_hard_margins (GtkPrintContext* context, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
// gboolean gtk_print_context_get_hard_margins (::GtkPrintContext* context, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right);
GI_INLINE_DECL bool get_hard_margins (gdouble & top, gdouble & bottom, gdouble & left, gdouble & right) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble, gdouble, gdouble> get_hard_margins () noexcept;

// gdouble gtk_print_context_get_height (GtkPrintContext* context);
// gdouble gtk_print_context_get_height (::GtkPrintContext* context);
GI_INLINE_DECL gdouble get_height () noexcept;

// GtkPageSetup* gtk_print_context_get_page_setup (GtkPrintContext* context);
// ::GtkPageSetup* gtk_print_context_get_page_setup (::GtkPrintContext* context);
GI_INLINE_DECL Gtk::PageSetup get_page_setup () noexcept;

// PangoFontMap* gtk_print_context_get_pango_fontmap (GtkPrintContext* context);
// ::PangoFontMap* gtk_print_context_get_pango_fontmap (::GtkPrintContext* context);
GI_INLINE_DECL Pango::FontMap get_pango_fontmap () noexcept;

// gdouble gtk_print_context_get_width (GtkPrintContext* context);
// gdouble gtk_print_context_get_width (::GtkPrintContext* context);
GI_INLINE_DECL gdouble get_width () noexcept;

// void gtk_print_context_set_cairo_context (GtkPrintContext* context, cairo_t* cr, double dpi_x, double dpi_y);
// void gtk_print_context_set_cairo_context (::GtkPrintContext* context, ::cairo_t* cr, gdouble dpi_x, gdouble dpi_y);
GI_INLINE_DECL void set_cairo_context (cairo::Context cr, gdouble dpi_x, gdouble dpi_y) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printcontext_extra_def.hpp>)
#include <gtk/printcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printcontext_extra.hpp>)
#include <gtk/printcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PrintContext : public GI_GTK_PRINTCONTEXT_BASE
{ typedef GI_GTK_PRINTCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrintContext>
{ typedef Gtk::PrintContext type; }; 

} // namespace repository

} // namespace gi

#endif
