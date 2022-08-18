// AUTO-GENERATED

#ifndef _GI_GTK_TEXTTAG_HPP_
#define _GI_GTK_TEXTTAG_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TextIter;

class TextTag;

namespace base {


#define GI_GTK_TEXTTAG_BASE base::TextTagBase
class TextTagBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTextTag BaseObjectType;

TextTagBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_tag_get_type(); } 

// GtkTextTag* gtk_text_tag_new (const gchar* name);
// ::GtkTextTag* gtk_text_tag_new (const char* name);
static GI_INLINE_DECL Gtk::TextTag new_ (const std::string & name) noexcept;
static GI_INLINE_DECL Gtk::TextTag new_ () noexcept;

// void gtk_text_tag_changed (GtkTextTag* tag, gboolean size_changed);
// void gtk_text_tag_changed (::GtkTextTag* tag, gboolean size_changed);
GI_INLINE_DECL void changed (gboolean size_changed) noexcept;

// gboolean gtk_text_tag_event (GtkTextTag* tag, GObject* event_object, GdkEvent* event, const GtkTextIter* iter);
// gboolean gtk_text_tag_event (::GtkTextTag* tag, ::GObject* event_object,  event, const ::GtkTextIter* iter);
// SKIP; event type  not supported

// gint gtk_text_tag_get_priority (GtkTextTag* tag);
// gint gtk_text_tag_get_priority (::GtkTextTag* tag);
GI_INLINE_DECL gint get_priority () noexcept;

// void gtk_text_tag_set_priority (GtkTextTag* tag, gint priority);
// void gtk_text_tag_set_priority (::GtkTextTag* tag, gint priority);
GI_INLINE_DECL void set_priority (gint priority) noexcept;

gi::property_proxy<bool, base::TextTagBase> property_accumulative_margin()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "accumulative-margin"); }
const gi::property_proxy<bool, base::TextTagBase> property_accumulative_margin() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "accumulative-margin"); }

gi::property_proxy_write<std::string, base::TextTagBase> property_background()
{ return gi::property_proxy_write<std::string, base::TextTagBase> (*this, "background"); }

gi::property_proxy<bool, base::TextTagBase> property_background_full_height()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "background-full-height"); }
const gi::property_proxy<bool, base::TextTagBase> property_background_full_height() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "background-full-height"); }

gi::property_proxy<bool, base::TextTagBase> property_background_full_height_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "background-full-height-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_background_full_height_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "background-full-height-set"); }

gi::property_proxy<Gdk::RGBA, base::TextTagBase> property_background_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::TextTagBase> (*this, "background-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::TextTagBase> property_background_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::TextTagBase> (*this, "background-rgba"); }

gi::property_proxy<bool, base::TextTagBase> property_background_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "background-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_background_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "background-set"); }

gi::property_proxy<Gtk::TextDirection, base::TextTagBase> property_direction()
{ return gi::property_proxy<Gtk::TextDirection, base::TextTagBase> (*this, "direction"); }
const gi::property_proxy<Gtk::TextDirection, base::TextTagBase> property_direction() const
{ return gi::property_proxy<Gtk::TextDirection, base::TextTagBase> (*this, "direction"); }

gi::property_proxy<bool, base::TextTagBase> property_editable()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "editable"); }
const gi::property_proxy<bool, base::TextTagBase> property_editable() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "editable"); }

gi::property_proxy<bool, base::TextTagBase> property_editable_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "editable-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_editable_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "editable-set"); }

gi::property_proxy<bool, base::TextTagBase> property_fallback()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "fallback"); }
const gi::property_proxy<bool, base::TextTagBase> property_fallback() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "fallback"); }

gi::property_proxy<bool, base::TextTagBase> property_fallback_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "fallback-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_fallback_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "fallback-set"); }

gi::property_proxy<std::string, base::TextTagBase> property_family()
{ return gi::property_proxy<std::string, base::TextTagBase> (*this, "family"); }
const gi::property_proxy<std::string, base::TextTagBase> property_family() const
{ return gi::property_proxy<std::string, base::TextTagBase> (*this, "family"); }

gi::property_proxy<bool, base::TextTagBase> property_family_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "family-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_family_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "family-set"); }

gi::property_proxy<std::string, base::TextTagBase> property_font()
{ return gi::property_proxy<std::string, base::TextTagBase> (*this, "font"); }
const gi::property_proxy<std::string, base::TextTagBase> property_font() const
{ return gi::property_proxy<std::string, base::TextTagBase> (*this, "font"); }

gi::property_proxy<Pango::FontDescription, base::TextTagBase> property_font_desc()
{ return gi::property_proxy<Pango::FontDescription, base::TextTagBase> (*this, "font-desc"); }
const gi::property_proxy<Pango::FontDescription, base::TextTagBase> property_font_desc() const
{ return gi::property_proxy<Pango::FontDescription, base::TextTagBase> (*this, "font-desc"); }

gi::property_proxy<std::string, base::TextTagBase> property_font_features()
{ return gi::property_proxy<std::string, base::TextTagBase> (*this, "font-features"); }
const gi::property_proxy<std::string, base::TextTagBase> property_font_features() const
{ return gi::property_proxy<std::string, base::TextTagBase> (*this, "font-features"); }

gi::property_proxy<bool, base::TextTagBase> property_font_features_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "font-features-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_font_features_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "font-features-set"); }

gi::property_proxy_write<std::string, base::TextTagBase> property_foreground()
{ return gi::property_proxy_write<std::string, base::TextTagBase> (*this, "foreground"); }

gi::property_proxy<Gdk::RGBA, base::TextTagBase> property_foreground_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::TextTagBase> (*this, "foreground-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::TextTagBase> property_foreground_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::TextTagBase> (*this, "foreground-rgba"); }

gi::property_proxy<bool, base::TextTagBase> property_foreground_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "foreground-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_foreground_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "foreground-set"); }

gi::property_proxy<gint, base::TextTagBase> property_indent()
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "indent"); }
const gi::property_proxy<gint, base::TextTagBase> property_indent() const
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "indent"); }

gi::property_proxy<bool, base::TextTagBase> property_indent_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "indent-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_indent_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "indent-set"); }

gi::property_proxy<bool, base::TextTagBase> property_invisible()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "invisible"); }
const gi::property_proxy<bool, base::TextTagBase> property_invisible() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "invisible"); }

gi::property_proxy<bool, base::TextTagBase> property_invisible_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "invisible-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_invisible_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "invisible-set"); }

gi::property_proxy<Gtk::Justification, base::TextTagBase> property_justification()
{ return gi::property_proxy<Gtk::Justification, base::TextTagBase> (*this, "justification"); }
const gi::property_proxy<Gtk::Justification, base::TextTagBase> property_justification() const
{ return gi::property_proxy<Gtk::Justification, base::TextTagBase> (*this, "justification"); }

gi::property_proxy<bool, base::TextTagBase> property_justification_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "justification-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_justification_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "justification-set"); }

gi::property_proxy<std::string, base::TextTagBase> property_language()
{ return gi::property_proxy<std::string, base::TextTagBase> (*this, "language"); }
const gi::property_proxy<std::string, base::TextTagBase> property_language() const
{ return gi::property_proxy<std::string, base::TextTagBase> (*this, "language"); }

gi::property_proxy<bool, base::TextTagBase> property_language_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "language-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_language_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "language-set"); }

gi::property_proxy<gint, base::TextTagBase> property_left_margin()
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "left-margin"); }
const gi::property_proxy<gint, base::TextTagBase> property_left_margin() const
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "left-margin"); }

gi::property_proxy<bool, base::TextTagBase> property_left_margin_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "left-margin-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_left_margin_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "left-margin-set"); }

gi::property_proxy<gint, base::TextTagBase> property_letter_spacing()
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "letter-spacing"); }
const gi::property_proxy<gint, base::TextTagBase> property_letter_spacing() const
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "letter-spacing"); }

gi::property_proxy<bool, base::TextTagBase> property_letter_spacing_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "letter-spacing-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_letter_spacing_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "letter-spacing-set"); }

gi::property_proxy<std::string, base::TextTagBase> property_name()
{ return gi::property_proxy<std::string, base::TextTagBase> (*this, "name"); }
const gi::property_proxy<std::string, base::TextTagBase> property_name() const
{ return gi::property_proxy<std::string, base::TextTagBase> (*this, "name"); }

gi::property_proxy_write<std::string, base::TextTagBase> property_paragraph_background()
{ return gi::property_proxy_write<std::string, base::TextTagBase> (*this, "paragraph-background"); }

gi::property_proxy<Gdk::RGBA, base::TextTagBase> property_paragraph_background_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::TextTagBase> (*this, "paragraph-background-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::TextTagBase> property_paragraph_background_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::TextTagBase> (*this, "paragraph-background-rgba"); }

gi::property_proxy<bool, base::TextTagBase> property_paragraph_background_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "paragraph-background-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_paragraph_background_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "paragraph-background-set"); }

gi::property_proxy<gint, base::TextTagBase> property_pixels_above_lines()
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "pixels-above-lines"); }
const gi::property_proxy<gint, base::TextTagBase> property_pixels_above_lines() const
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "pixels-above-lines"); }

gi::property_proxy<bool, base::TextTagBase> property_pixels_above_lines_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "pixels-above-lines-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_pixels_above_lines_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "pixels-above-lines-set"); }

gi::property_proxy<gint, base::TextTagBase> property_pixels_below_lines()
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "pixels-below-lines"); }
const gi::property_proxy<gint, base::TextTagBase> property_pixels_below_lines() const
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "pixels-below-lines"); }

gi::property_proxy<bool, base::TextTagBase> property_pixels_below_lines_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "pixels-below-lines-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_pixels_below_lines_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "pixels-below-lines-set"); }

gi::property_proxy<gint, base::TextTagBase> property_pixels_inside_wrap()
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "pixels-inside-wrap"); }
const gi::property_proxy<gint, base::TextTagBase> property_pixels_inside_wrap() const
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "pixels-inside-wrap"); }

gi::property_proxy<bool, base::TextTagBase> property_pixels_inside_wrap_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "pixels-inside-wrap-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_pixels_inside_wrap_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "pixels-inside-wrap-set"); }

gi::property_proxy<gint, base::TextTagBase> property_right_margin()
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "right-margin"); }
const gi::property_proxy<gint, base::TextTagBase> property_right_margin() const
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "right-margin"); }

gi::property_proxy<bool, base::TextTagBase> property_right_margin_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "right-margin-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_right_margin_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "right-margin-set"); }

gi::property_proxy<gint, base::TextTagBase> property_rise()
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "rise"); }
const gi::property_proxy<gint, base::TextTagBase> property_rise() const
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "rise"); }

gi::property_proxy<bool, base::TextTagBase> property_rise_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "rise-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_rise_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "rise-set"); }

gi::property_proxy<gdouble, base::TextTagBase> property_scale()
{ return gi::property_proxy<gdouble, base::TextTagBase> (*this, "scale"); }
const gi::property_proxy<gdouble, base::TextTagBase> property_scale() const
{ return gi::property_proxy<gdouble, base::TextTagBase> (*this, "scale"); }

gi::property_proxy<bool, base::TextTagBase> property_scale_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "scale-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_scale_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "scale-set"); }

gi::property_proxy<gint, base::TextTagBase> property_size()
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "size"); }
const gi::property_proxy<gint, base::TextTagBase> property_size() const
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "size"); }

gi::property_proxy<gdouble, base::TextTagBase> property_size_points()
{ return gi::property_proxy<gdouble, base::TextTagBase> (*this, "size-points"); }
const gi::property_proxy<gdouble, base::TextTagBase> property_size_points() const
{ return gi::property_proxy<gdouble, base::TextTagBase> (*this, "size-points"); }

gi::property_proxy<bool, base::TextTagBase> property_size_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "size-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_size_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "size-set"); }

gi::property_proxy<Pango::Stretch, base::TextTagBase> property_stretch()
{ return gi::property_proxy<Pango::Stretch, base::TextTagBase> (*this, "stretch"); }
const gi::property_proxy<Pango::Stretch, base::TextTagBase> property_stretch() const
{ return gi::property_proxy<Pango::Stretch, base::TextTagBase> (*this, "stretch"); }

gi::property_proxy<bool, base::TextTagBase> property_stretch_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "stretch-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_stretch_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "stretch-set"); }

gi::property_proxy<bool, base::TextTagBase> property_strikethrough()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "strikethrough"); }
const gi::property_proxy<bool, base::TextTagBase> property_strikethrough() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "strikethrough"); }

gi::property_proxy<Gdk::RGBA, base::TextTagBase> property_strikethrough_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::TextTagBase> (*this, "strikethrough-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::TextTagBase> property_strikethrough_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::TextTagBase> (*this, "strikethrough-rgba"); }

gi::property_proxy<bool, base::TextTagBase> property_strikethrough_rgba_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "strikethrough-rgba-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_strikethrough_rgba_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "strikethrough-rgba-set"); }

gi::property_proxy<bool, base::TextTagBase> property_strikethrough_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "strikethrough-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_strikethrough_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "strikethrough-set"); }

gi::property_proxy<Pango::Style, base::TextTagBase> property_style()
{ return gi::property_proxy<Pango::Style, base::TextTagBase> (*this, "style"); }
const gi::property_proxy<Pango::Style, base::TextTagBase> property_style() const
{ return gi::property_proxy<Pango::Style, base::TextTagBase> (*this, "style"); }

gi::property_proxy<bool, base::TextTagBase> property_style_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "style-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_style_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "style-set"); }

gi::property_proxy<Pango::TabArray, base::TextTagBase> property_tabs()
{ return gi::property_proxy<Pango::TabArray, base::TextTagBase> (*this, "tabs"); }
const gi::property_proxy<Pango::TabArray, base::TextTagBase> property_tabs() const
{ return gi::property_proxy<Pango::TabArray, base::TextTagBase> (*this, "tabs"); }

gi::property_proxy<bool, base::TextTagBase> property_tabs_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "tabs-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_tabs_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "tabs-set"); }

gi::property_proxy<Pango::Underline, base::TextTagBase> property_underline()
{ return gi::property_proxy<Pango::Underline, base::TextTagBase> (*this, "underline"); }
const gi::property_proxy<Pango::Underline, base::TextTagBase> property_underline() const
{ return gi::property_proxy<Pango::Underline, base::TextTagBase> (*this, "underline"); }

gi::property_proxy<Gdk::RGBA, base::TextTagBase> property_underline_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::TextTagBase> (*this, "underline-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::TextTagBase> property_underline_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::TextTagBase> (*this, "underline-rgba"); }

gi::property_proxy<bool, base::TextTagBase> property_underline_rgba_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "underline-rgba-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_underline_rgba_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "underline-rgba-set"); }

gi::property_proxy<bool, base::TextTagBase> property_underline_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "underline-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_underline_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "underline-set"); }

gi::property_proxy<Pango::Variant, base::TextTagBase> property_variant()
{ return gi::property_proxy<Pango::Variant, base::TextTagBase> (*this, "variant"); }
const gi::property_proxy<Pango::Variant, base::TextTagBase> property_variant() const
{ return gi::property_proxy<Pango::Variant, base::TextTagBase> (*this, "variant"); }

gi::property_proxy<bool, base::TextTagBase> property_variant_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "variant-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_variant_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "variant-set"); }

gi::property_proxy<gint, base::TextTagBase> property_weight()
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "weight"); }
const gi::property_proxy<gint, base::TextTagBase> property_weight() const
{ return gi::property_proxy<gint, base::TextTagBase> (*this, "weight"); }

gi::property_proxy<bool, base::TextTagBase> property_weight_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "weight-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_weight_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "weight-set"); }

gi::property_proxy<Gtk::WrapMode, base::TextTagBase> property_wrap_mode()
{ return gi::property_proxy<Gtk::WrapMode, base::TextTagBase> (*this, "wrap-mode"); }
const gi::property_proxy<Gtk::WrapMode, base::TextTagBase> property_wrap_mode() const
{ return gi::property_proxy<Gtk::WrapMode, base::TextTagBase> (*this, "wrap-mode"); }

gi::property_proxy<bool, base::TextTagBase> property_wrap_mode_set()
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "wrap-mode-set"); }
const gi::property_proxy<bool, base::TextTagBase> property_wrap_mode_set() const
{ return gi::property_proxy<bool, base::TextTagBase> (*this, "wrap-mode-set"); }

// signal event
// SKIP; event type  not supported

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/texttag_extra_def.hpp>)
#include <gtk/texttag_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/texttag_extra.hpp>)
#include <gtk/texttag_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextTag : public GI_GTK_TEXTTAG_BASE
{ typedef GI_GTK_TEXTTAG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextTag>
{ typedef Gtk::TextTag type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TextTagClassDef
{
typedef TextTagClassDef self;
public:
typedef Gtk::TextTag instance_type;
typedef ::GtkTextTagClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean TextTag::event (GtkTextTag* tag, GObject* event_object, GdkEvent* event, const GtkTextIter* iter);
// gboolean TextTag::event (::GtkTextTag* tag, ::GObject* event_object,  event, const ::GtkTextIter* iter);
// SKIP; event type  not supported


};

GI_CLASS_IMPL_BEGIN


class TextTagClass: public detail::ClassTemplate<Gtk::impl::internal::TextTagClassDef, GObject::impl::internal::ObjectClass>
{
typedef TextTagClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TextTagClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean TextTag::event (GtkTextTag* tag, GObject* event_object, GdkEvent* event, const GtkTextIter* iter);
// gboolean TextTag::event (::GtkTextTag* tag, ::GObject* event_object,  event, const ::GtkTextIter* iter);
// SKIP; event type  not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using TextTagImpl = detail::ObjectImpl<TextTag, internal::TextTagClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
