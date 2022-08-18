// AUTO-GENERATED

#ifndef _GI_GTK_CSSSECTION_HPP_
#define _GI_GTK_CSSSECTION_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class CssSection;

namespace base {


#define GI_GTK_CSSSECTION_BASE base::CssSectionBase
class CssSectionBase : public gi::detail::GBoxedWrapper<CssSectionBase, ::GtkCssSection>
{
typedef gi::detail::GBoxedWrapper<CssSectionBase, ::GtkCssSection> super_type;
public:

CssSectionBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_css_section_get_type(); } 

// guint gtk_css_section_get_end_line (const GtkCssSection* section);
// guint gtk_css_section_get_end_line (const ::GtkCssSection* section);
GI_INLINE_DECL guint get_end_line () const noexcept;

// guint gtk_css_section_get_end_position (const GtkCssSection* section);
// guint gtk_css_section_get_end_position (const ::GtkCssSection* section);
GI_INLINE_DECL guint get_end_position () const noexcept;

// GFile* gtk_css_section_get_file (const GtkCssSection* section);
// ::GFile* gtk_css_section_get_file (const ::GtkCssSection* section);
GI_INLINE_DECL Gio::File get_file () const noexcept;

// GtkCssSection* gtk_css_section_get_parent (const GtkCssSection* section);
// ::GtkCssSection* gtk_css_section_get_parent (const ::GtkCssSection* section);
GI_INLINE_DECL Gtk::CssSection get_parent () const noexcept;

// GtkCssSectionType gtk_css_section_get_section_type (const GtkCssSection* section);
// ::GtkCssSectionType gtk_css_section_get_section_type (const ::GtkCssSection* section);
GI_INLINE_DECL Gtk::CssSectionType get_section_type () const noexcept;

// guint gtk_css_section_get_start_line (const GtkCssSection* section);
// guint gtk_css_section_get_start_line (const ::GtkCssSection* section);
GI_INLINE_DECL guint get_start_line () const noexcept;

// guint gtk_css_section_get_start_position (const GtkCssSection* section);
// guint gtk_css_section_get_start_position (const ::GtkCssSection* section);
GI_INLINE_DECL guint get_start_position () const noexcept;

// GtkCssSection* gtk_css_section_ref (GtkCssSection* section);
// ::GtkCssSection* gtk_css_section_ref (::GtkCssSection* section);
// IGNORE; marked ignore

// void gtk_css_section_unref (GtkCssSection* section);
// void gtk_css_section_unref (::GtkCssSection* section);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/csssection_extra_def.hpp>)
#include <gtk/csssection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/csssection_extra.hpp>)
#include <gtk/csssection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CssSection : public GI_GTK_CSSSECTION_BASE
{ typedef GI_GTK_CSSSECTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCssSection>
{ typedef Gtk::CssSection type; }; 

} // namespace repository

} // namespace gi

#endif
