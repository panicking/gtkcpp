// AUTO-GENERATED

#ifndef _GI_GTK_TEXTATTRIBUTES_IMPL_HPP_
#define _GI_GTK_TEXTATTRIBUTES_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static ::GtkJustification _field_justification_get (const ::GtkTextAttributes* obj) { return (::GtkJustification) obj->justification; }
// ::GtkJustification TextAttributes::justification (const ::GtkTextAttributes* obj);
// ::GtkJustification TextAttributes::justification (const ::GtkTextAttributes* obj);
Gtk::Justification base::TextAttributesBase::justification_ () const noexcept
{
  typedef ::GtkJustification (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_justification_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_justification_set (::GtkTextAttributes* obj, ::GtkJustification _value) { obj->justification = (decltype(obj->justification)) _value; }
//  TextAttributes::justification (::GtkTextAttributes* obj, ::GtkJustification _value);
// void TextAttributes::justification (::GtkTextAttributes* obj, ::GtkJustification _value);
void base::TextAttributesBase::justification_ (Gtk::Justification _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, ::GtkJustification _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_justification_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (::GtkJustification) (_value_to_c));
}

static ::GtkTextDirection _field_direction_get (const ::GtkTextAttributes* obj) { return (::GtkTextDirection) obj->direction; }
// ::GtkTextDirection TextAttributes::direction (const ::GtkTextAttributes* obj);
// ::GtkTextDirection TextAttributes::direction (const ::GtkTextAttributes* obj);
Gtk::TextDirection base::TextAttributesBase::direction_ () const noexcept
{
  typedef ::GtkTextDirection (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_direction_set (::GtkTextAttributes* obj, ::GtkTextDirection _value) { obj->direction = (decltype(obj->direction)) _value; }
//  TextAttributes::direction (::GtkTextAttributes* obj, ::GtkTextDirection _value);
// void TextAttributes::direction (::GtkTextAttributes* obj, ::GtkTextDirection _value);
void base::TextAttributesBase::direction_ (Gtk::TextDirection _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, ::GtkTextDirection _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (::GtkTextDirection) (_value_to_c));
}

static ::PangoFontDescription* _field_font_get (const ::GtkTextAttributes* obj) { return (::PangoFontDescription*) obj->font; }
// ::PangoFontDescription* TextAttributes::font (const ::GtkTextAttributes* obj);
// ::PangoFontDescription* TextAttributes::font (const ::GtkTextAttributes* obj);
Pango::FontDescription base::TextAttributesBase::font_ () const noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_font_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gdouble _field_font_scale_get (const ::GtkTextAttributes* obj) { return (gdouble) obj->font_scale; }
// gdouble TextAttributes::font_scale (const ::GtkTextAttributes* obj);
// gdouble TextAttributes::font_scale (const ::GtkTextAttributes* obj);
gdouble base::TextAttributesBase::font_scale_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_font_scale_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_font_scale_set (::GtkTextAttributes* obj, gdouble _value) { obj->font_scale = (decltype(obj->font_scale)) _value; }
//  TextAttributes::font_scale (::GtkTextAttributes* obj, gdouble _value);
// void TextAttributes::font_scale (::GtkTextAttributes* obj, gdouble _value);
void base::TextAttributesBase::font_scale_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_font_scale_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (gdouble) (_value_to_c));
}

static gint _field_left_margin_get (const ::GtkTextAttributes* obj) { return (gint) obj->left_margin; }
// gint TextAttributes::left_margin (const ::GtkTextAttributes* obj);
// gint TextAttributes::left_margin (const ::GtkTextAttributes* obj);
gint base::TextAttributesBase::left_margin_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_left_margin_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_left_margin_set (::GtkTextAttributes* obj, gint _value) { obj->left_margin = (decltype(obj->left_margin)) _value; }
//  TextAttributes::left_margin (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::left_margin (::GtkTextAttributes* obj, gint _value);
void base::TextAttributesBase::left_margin_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_left_margin_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_right_margin_get (const ::GtkTextAttributes* obj) { return (gint) obj->right_margin; }
// gint TextAttributes::right_margin (const ::GtkTextAttributes* obj);
// gint TextAttributes::right_margin (const ::GtkTextAttributes* obj);
gint base::TextAttributesBase::right_margin_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_right_margin_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_right_margin_set (::GtkTextAttributes* obj, gint _value) { obj->right_margin = (decltype(obj->right_margin)) _value; }
//  TextAttributes::right_margin (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::right_margin (::GtkTextAttributes* obj, gint _value);
void base::TextAttributesBase::right_margin_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_right_margin_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_indent_get (const ::GtkTextAttributes* obj) { return (gint) obj->indent; }
// gint TextAttributes::indent (const ::GtkTextAttributes* obj);
// gint TextAttributes::indent (const ::GtkTextAttributes* obj);
gint base::TextAttributesBase::indent_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_indent_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_indent_set (::GtkTextAttributes* obj, gint _value) { obj->indent = (decltype(obj->indent)) _value; }
//  TextAttributes::indent (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::indent (::GtkTextAttributes* obj, gint _value);
void base::TextAttributesBase::indent_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_indent_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_pixels_above_lines_get (const ::GtkTextAttributes* obj) { return (gint) obj->pixels_above_lines; }
// gint TextAttributes::pixels_above_lines (const ::GtkTextAttributes* obj);
// gint TextAttributes::pixels_above_lines (const ::GtkTextAttributes* obj);
gint base::TextAttributesBase::pixels_above_lines_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pixels_above_lines_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_pixels_above_lines_set (::GtkTextAttributes* obj, gint _value) { obj->pixels_above_lines = (decltype(obj->pixels_above_lines)) _value; }
//  TextAttributes::pixels_above_lines (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::pixels_above_lines (::GtkTextAttributes* obj, gint _value);
void base::TextAttributesBase::pixels_above_lines_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pixels_above_lines_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_pixels_below_lines_get (const ::GtkTextAttributes* obj) { return (gint) obj->pixels_below_lines; }
// gint TextAttributes::pixels_below_lines (const ::GtkTextAttributes* obj);
// gint TextAttributes::pixels_below_lines (const ::GtkTextAttributes* obj);
gint base::TextAttributesBase::pixels_below_lines_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pixels_below_lines_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_pixels_below_lines_set (::GtkTextAttributes* obj, gint _value) { obj->pixels_below_lines = (decltype(obj->pixels_below_lines)) _value; }
//  TextAttributes::pixels_below_lines (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::pixels_below_lines (::GtkTextAttributes* obj, gint _value);
void base::TextAttributesBase::pixels_below_lines_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pixels_below_lines_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_pixels_inside_wrap_get (const ::GtkTextAttributes* obj) { return (gint) obj->pixels_inside_wrap; }
// gint TextAttributes::pixels_inside_wrap (const ::GtkTextAttributes* obj);
// gint TextAttributes::pixels_inside_wrap (const ::GtkTextAttributes* obj);
gint base::TextAttributesBase::pixels_inside_wrap_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pixels_inside_wrap_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_pixels_inside_wrap_set (::GtkTextAttributes* obj, gint _value) { obj->pixels_inside_wrap = (decltype(obj->pixels_inside_wrap)) _value; }
//  TextAttributes::pixels_inside_wrap (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::pixels_inside_wrap (::GtkTextAttributes* obj, gint _value);
void base::TextAttributesBase::pixels_inside_wrap_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pixels_inside_wrap_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (gint) (_value_to_c));
}

static ::PangoTabArray* _field_tabs_get (const ::GtkTextAttributes* obj) { return (::PangoTabArray*) obj->tabs; }
// ::PangoTabArray* TextAttributes::tabs (const ::GtkTextAttributes* obj);
// ::PangoTabArray* TextAttributes::tabs (const ::GtkTextAttributes* obj);
Pango::TabArray base::TextAttributesBase::tabs_ () const noexcept
{
  typedef ::PangoTabArray* (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_tabs_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GtkWrapMode _field_wrap_mode_get (const ::GtkTextAttributes* obj) { return (::GtkWrapMode) obj->wrap_mode; }
// ::GtkWrapMode TextAttributes::wrap_mode (const ::GtkTextAttributes* obj);
// ::GtkWrapMode TextAttributes::wrap_mode (const ::GtkTextAttributes* obj);
Gtk::WrapMode base::TextAttributesBase::wrap_mode_ () const noexcept
{
  typedef ::GtkWrapMode (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_wrap_mode_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_wrap_mode_set (::GtkTextAttributes* obj, ::GtkWrapMode _value) { obj->wrap_mode = (decltype(obj->wrap_mode)) _value; }
//  TextAttributes::wrap_mode (::GtkTextAttributes* obj, ::GtkWrapMode _value);
// void TextAttributes::wrap_mode (::GtkTextAttributes* obj, ::GtkWrapMode _value);
void base::TextAttributesBase::wrap_mode_ (Gtk::WrapMode _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, ::GtkWrapMode _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_wrap_mode_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (::GtkWrapMode) (_value_to_c));
}

static ::PangoLanguage* _field_language_get (const ::GtkTextAttributes* obj) { return (::PangoLanguage*) obj->language; }
// ::PangoLanguage* TextAttributes::language (const ::GtkTextAttributes* obj);
// ::PangoLanguage* TextAttributes::language (const ::GtkTextAttributes* obj);
Pango::Language base::TextAttributesBase::language_ () const noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_language_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint _field_invisible_get (const ::GtkTextAttributes* obj) { return (guint) obj->invisible; }
// guint TextAttributes::invisible (const ::GtkTextAttributes* obj);
// guint TextAttributes::invisible (const ::GtkTextAttributes* obj);
guint base::TextAttributesBase::invisible_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_invisible_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_invisible_set (::GtkTextAttributes* obj, guint _value) { obj->invisible = (decltype(obj->invisible)) _value; }
//  TextAttributes::invisible (::GtkTextAttributes* obj, guint _value);
// void TextAttributes::invisible (::GtkTextAttributes* obj, guint _value);
void base::TextAttributesBase::invisible_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_invisible_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_bg_full_height_get (const ::GtkTextAttributes* obj) { return (guint) obj->bg_full_height; }
// guint TextAttributes::bg_full_height (const ::GtkTextAttributes* obj);
// guint TextAttributes::bg_full_height (const ::GtkTextAttributes* obj);
guint base::TextAttributesBase::bg_full_height_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bg_full_height_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_bg_full_height_set (::GtkTextAttributes* obj, guint _value) { obj->bg_full_height = (decltype(obj->bg_full_height)) _value; }
//  TextAttributes::bg_full_height (::GtkTextAttributes* obj, guint _value);
// void TextAttributes::bg_full_height (::GtkTextAttributes* obj, guint _value);
void base::TextAttributesBase::bg_full_height_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_bg_full_height_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_editable_get (const ::GtkTextAttributes* obj) { return (guint) obj->editable; }
// guint TextAttributes::editable (const ::GtkTextAttributes* obj);
// guint TextAttributes::editable (const ::GtkTextAttributes* obj);
guint base::TextAttributesBase::editable_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_editable_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_editable_set (::GtkTextAttributes* obj, guint _value) { obj->editable = (decltype(obj->editable)) _value; }
//  TextAttributes::editable (::GtkTextAttributes* obj, guint _value);
// void TextAttributes::editable (::GtkTextAttributes* obj, guint _value);
void base::TextAttributesBase::editable_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_editable_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_no_fallback_get (const ::GtkTextAttributes* obj) { return (guint) obj->no_fallback; }
// guint TextAttributes::no_fallback (const ::GtkTextAttributes* obj);
// guint TextAttributes::no_fallback (const ::GtkTextAttributes* obj);
guint base::TextAttributesBase::no_fallback_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_no_fallback_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_no_fallback_set (::GtkTextAttributes* obj, guint _value) { obj->no_fallback = (decltype(obj->no_fallback)) _value; }
//  TextAttributes::no_fallback (::GtkTextAttributes* obj, guint _value);
// void TextAttributes::no_fallback (::GtkTextAttributes* obj, guint _value);
void base::TextAttributesBase::no_fallback_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_no_fallback_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (guint) (_value_to_c));
}

static gint _field_letter_spacing_get (const ::GtkTextAttributes* obj) { return (gint) obj->letter_spacing; }
// gint TextAttributes::letter_spacing (const ::GtkTextAttributes* obj);
// gint TextAttributes::letter_spacing (const ::GtkTextAttributes* obj);
gint base::TextAttributesBase::letter_spacing_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTextAttributes* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_letter_spacing_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTextAttributes*) (gobj_()));
  return _temp_ret;
}

static void _field_letter_spacing_set (::GtkTextAttributes* obj, gint _value) { obj->letter_spacing = (decltype(obj->letter_spacing)) _value; }
//  TextAttributes::letter_spacing (::GtkTextAttributes* obj, gint _value);
// void TextAttributes::letter_spacing (::GtkTextAttributes* obj, gint _value);
void base::TextAttributesBase::letter_spacing_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_letter_spacing_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (gint) (_value_to_c));
}

// GtkTextAttributes* gtk_text_attributes_new ();
// ::GtkTextAttributes* gtk_text_attributes_new ();
Gtk::TextAttributes base::TextAttributesBase::new_ () noexcept
{
  typedef ::GtkTextAttributes* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_attributes_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkTextAttributes* gtk_text_attributes_copy (GtkTextAttributes* src);
// ::GtkTextAttributes* gtk_text_attributes_copy (::GtkTextAttributes* src);
Gtk::TextAttributes base::TextAttributesBase::copy () noexcept
{
  typedef ::GtkTextAttributes* (*call_wrap_t) (::GtkTextAttributes* src);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_attributes_copy;
  auto _temp_ret = call_wrap_v ((::GtkTextAttributes*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_text_attributes_copy_values (GtkTextAttributes* src, GtkTextAttributes* dest);
// void gtk_text_attributes_copy_values (::GtkTextAttributes* src, ::GtkTextAttributes* dest);
void base::TextAttributesBase::copy_values (Gtk::TextAttributes dest) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextAttributes* src, ::GtkTextAttributes* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_attributes_copy_values;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextAttributes*) (gobj_()), (::GtkTextAttributes*) (dest_to_c));
}

// GtkTextAttributes* gtk_text_attributes_ref (GtkTextAttributes* values);
// ::GtkTextAttributes* gtk_text_attributes_ref (::GtkTextAttributes* values);
// IGNORE; marked ignore

// void gtk_text_attributes_unref (GtkTextAttributes* values);
// void gtk_text_attributes_unref (::GtkTextAttributes* values);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textattributes_extra_def_impl.hpp>)
#include <gtk/textattributes_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textattributes_extra_impl.hpp>)
#include <gtk/textattributes_extra_impl.hpp>
#endif
#endif

#endif
