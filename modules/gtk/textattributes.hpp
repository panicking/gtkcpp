// AUTO-GENERATED

#ifndef _GI_GTK_TEXTATTRIBUTES_HPP_
#define _GI_GTK_TEXTATTRIBUTES_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class TextAttributes;

namespace base {


#define GI_GTK_TEXTATTRIBUTES_BASE base::TextAttributesBase
class TextAttributesBase : public gi::detail::GBoxedWrapper<TextAttributesBase, ::GtkTextAttributes>
{
typedef gi::detail::GBoxedWrapper<TextAttributesBase, ::GtkTextAttributes> super_type;
public:

TextAttributesBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_text_attributes_get_type(); } 

// ::GtkJustification TextAttributes::justification (const ::GtkTextAttributes* obj);
// ::GtkJustification TextAttributes::justification (const ::GtkTextAttributes* obj);
GI_INLINE_DECL Gtk::Justification justification_ () const noexcept;

//  TextAttributes::justification (::GtkTextAttributes* obj, ::GtkJustification _value);
// void TextAttributes::justification (::GtkTextAttributes* obj, ::GtkJustification _value);
GI_INLINE_DECL void justification_ (Gtk::Justification _value) noexcept;

// ::GtkTextDirection TextAttributes::direction (const ::GtkTextAttributes* obj);
// ::GtkTextDirection TextAttributes::direction (const ::GtkTextAttributes* obj);
GI_INLINE_DECL Gtk::TextDirection direction_ () const noexcept;

//  TextAttributes::direction (::GtkTextAttributes* obj, ::GtkTextDirection _value);
// void TextAttributes::direction (::GtkTextAttributes* obj, ::GtkTextDirection _value);
GI_INLINE_DECL void direction_ (Gtk::TextDirection _value) noexcept;

// ::PangoFontDescription* TextAttributes::font (const ::GtkTextAttributes* obj);
// ::PangoFontDescription* TextAttributes::font (const ::GtkTextAttributes* obj);
GI_INLINE_DECL Pango::FontDescription font_ () const noexcept;

// gdouble TextAttributes::font_scale (const ::GtkTextAttributes* obj);
// gdouble TextAttributes::font_scale (const ::GtkTextAttributes* obj);
GI_INLINE_DECL gdouble font_scale_ () const noexcept;

//  TextAttributes::font_scale (::GtkTextAttributes* obj, gdouble _value);
// void TextAttributes::font_scale (::GtkTextAttributes* obj, gdouble _value);
GI_INLINE_DECL void font_scale_ (gdouble _value) noexcept;

// gint TextAttributes::left_margin (const ::GtkTextAttributes* obj);
// gint TextAttributes::left_margin (const ::GtkTextAttributes* obj);
GI_INLINE_DECL gint left_margin_ () const noexcept;

//  TextAttributes::left_margin (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::left_margin (::GtkTextAttributes* obj, gint _value);
GI_INLINE_DECL void left_margin_ (gint _value) noexcept;

// gint TextAttributes::right_margin (const ::GtkTextAttributes* obj);
// gint TextAttributes::right_margin (const ::GtkTextAttributes* obj);
GI_INLINE_DECL gint right_margin_ () const noexcept;

//  TextAttributes::right_margin (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::right_margin (::GtkTextAttributes* obj, gint _value);
GI_INLINE_DECL void right_margin_ (gint _value) noexcept;

// gint TextAttributes::indent (const ::GtkTextAttributes* obj);
// gint TextAttributes::indent (const ::GtkTextAttributes* obj);
GI_INLINE_DECL gint indent_ () const noexcept;

//  TextAttributes::indent (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::indent (::GtkTextAttributes* obj, gint _value);
GI_INLINE_DECL void indent_ (gint _value) noexcept;

// gint TextAttributes::pixels_above_lines (const ::GtkTextAttributes* obj);
// gint TextAttributes::pixels_above_lines (const ::GtkTextAttributes* obj);
GI_INLINE_DECL gint pixels_above_lines_ () const noexcept;

//  TextAttributes::pixels_above_lines (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::pixels_above_lines (::GtkTextAttributes* obj, gint _value);
GI_INLINE_DECL void pixels_above_lines_ (gint _value) noexcept;

// gint TextAttributes::pixels_below_lines (const ::GtkTextAttributes* obj);
// gint TextAttributes::pixels_below_lines (const ::GtkTextAttributes* obj);
GI_INLINE_DECL gint pixels_below_lines_ () const noexcept;

//  TextAttributes::pixels_below_lines (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::pixels_below_lines (::GtkTextAttributes* obj, gint _value);
GI_INLINE_DECL void pixels_below_lines_ (gint _value) noexcept;

// gint TextAttributes::pixels_inside_wrap (const ::GtkTextAttributes* obj);
// gint TextAttributes::pixels_inside_wrap (const ::GtkTextAttributes* obj);
GI_INLINE_DECL gint pixels_inside_wrap_ () const noexcept;

//  TextAttributes::pixels_inside_wrap (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::pixels_inside_wrap (::GtkTextAttributes* obj, gint _value);
GI_INLINE_DECL void pixels_inside_wrap_ (gint _value) noexcept;

// ::PangoTabArray* TextAttributes::tabs (const ::GtkTextAttributes* obj);
// ::PangoTabArray* TextAttributes::tabs (const ::GtkTextAttributes* obj);
GI_INLINE_DECL Pango::TabArray tabs_ () const noexcept;

// ::GtkWrapMode TextAttributes::wrap_mode (const ::GtkTextAttributes* obj);
// ::GtkWrapMode TextAttributes::wrap_mode (const ::GtkTextAttributes* obj);
GI_INLINE_DECL Gtk::WrapMode wrap_mode_ () const noexcept;

//  TextAttributes::wrap_mode (::GtkTextAttributes* obj, ::GtkWrapMode _value);
// void TextAttributes::wrap_mode (::GtkTextAttributes* obj, ::GtkWrapMode _value);
GI_INLINE_DECL void wrap_mode_ (Gtk::WrapMode _value) noexcept;

// ::PangoLanguage* TextAttributes::language (const ::GtkTextAttributes* obj);
// ::PangoLanguage* TextAttributes::language (const ::GtkTextAttributes* obj);
GI_INLINE_DECL Pango::Language language_ () const noexcept;

// guint TextAttributes::invisible (const ::GtkTextAttributes* obj);
// guint TextAttributes::invisible (const ::GtkTextAttributes* obj);
GI_INLINE_DECL guint invisible_ () const noexcept;

//  TextAttributes::invisible (::GtkTextAttributes* obj, guint _value);
// void TextAttributes::invisible (::GtkTextAttributes* obj, guint _value);
GI_INLINE_DECL void invisible_ (guint _value) noexcept;

// guint TextAttributes::bg_full_height (const ::GtkTextAttributes* obj);
// guint TextAttributes::bg_full_height (const ::GtkTextAttributes* obj);
GI_INLINE_DECL guint bg_full_height_ () const noexcept;

//  TextAttributes::bg_full_height (::GtkTextAttributes* obj, guint _value);
// void TextAttributes::bg_full_height (::GtkTextAttributes* obj, guint _value);
GI_INLINE_DECL void bg_full_height_ (guint _value) noexcept;

// guint TextAttributes::editable (const ::GtkTextAttributes* obj);
// guint TextAttributes::editable (const ::GtkTextAttributes* obj);
GI_INLINE_DECL guint editable_ () const noexcept;

//  TextAttributes::editable (::GtkTextAttributes* obj, guint _value);
// void TextAttributes::editable (::GtkTextAttributes* obj, guint _value);
GI_INLINE_DECL void editable_ (guint _value) noexcept;

// guint TextAttributes::no_fallback (const ::GtkTextAttributes* obj);
// guint TextAttributes::no_fallback (const ::GtkTextAttributes* obj);
GI_INLINE_DECL guint no_fallback_ () const noexcept;

//  TextAttributes::no_fallback (::GtkTextAttributes* obj, guint _value);
// void TextAttributes::no_fallback (::GtkTextAttributes* obj, guint _value);
GI_INLINE_DECL void no_fallback_ (guint _value) noexcept;

// gint TextAttributes::letter_spacing (const ::GtkTextAttributes* obj);
// gint TextAttributes::letter_spacing (const ::GtkTextAttributes* obj);
GI_INLINE_DECL gint letter_spacing_ () const noexcept;

//  TextAttributes::letter_spacing (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::letter_spacing (::GtkTextAttributes* obj, gint _value);
GI_INLINE_DECL void letter_spacing_ (gint _value) noexcept;

// GtkTextAttributes* gtk_text_attributes_new ();
// ::GtkTextAttributes* gtk_text_attributes_new ();
static GI_INLINE_DECL Gtk::TextAttributes new_ () noexcept;

// GtkTextAttributes* gtk_text_attributes_copy (GtkTextAttributes* src);
// ::GtkTextAttributes* gtk_text_attributes_copy (::GtkTextAttributes* src);
GI_INLINE_DECL Gtk::TextAttributes copy () noexcept;

// void gtk_text_attributes_copy_values (GtkTextAttributes* src, GtkTextAttributes* dest);
// void gtk_text_attributes_copy_values (::GtkTextAttributes* src, ::GtkTextAttributes* dest);
GI_INLINE_DECL void copy_values (Gtk::TextAttributes dest) noexcept;

// GtkTextAttributes* gtk_text_attributes_ref (GtkTextAttributes* values);
// ::GtkTextAttributes* gtk_text_attributes_ref (::GtkTextAttributes* values);
// IGNORE; marked ignore

// void gtk_text_attributes_unref (GtkTextAttributes* values);
// void gtk_text_attributes_unref (::GtkTextAttributes* values);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textattributes_extra_def.hpp>)
#include <gtk/textattributes_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textattributes_extra.hpp>)
#include <gtk/textattributes_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextAttributes : public GI_GTK_TEXTATTRIBUTES_BASE
{ typedef GI_GTK_TEXTATTRIBUTES_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextAttributes>
{ typedef Gtk::TextAttributes type; }; 

} // namespace repository

} // namespace gi

#endif
