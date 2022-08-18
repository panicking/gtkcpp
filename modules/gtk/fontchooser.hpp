// AUTO-GENERATED

#ifndef _GI_GTK_FONTCHOOSER_HPP_
#define _GI_GTK_FONTCHOOSER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class FontChooser;

namespace base {


#define GI_GTK_FONTCHOOSER_BASE base::FontChooserBase
class FontChooserBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkFontChooser BaseObjectType;

FontChooserBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_font_chooser_get_type(); } 

// gchar* gtk_font_chooser_get_font (GtkFontChooser* fontchooser);
// char* gtk_font_chooser_get_font (::GtkFontChooser* fontchooser);
GI_INLINE_DECL std::string get_font () noexcept;

// PangoFontDescription* gtk_font_chooser_get_font_desc (GtkFontChooser* fontchooser);
// ::PangoFontDescription* gtk_font_chooser_get_font_desc (::GtkFontChooser* fontchooser);
GI_INLINE_DECL Pango::FontDescription get_font_desc () noexcept;

// PangoFontFace* gtk_font_chooser_get_font_face (GtkFontChooser* fontchooser);
// ::PangoFontFace* gtk_font_chooser_get_font_face (::GtkFontChooser* fontchooser);
GI_INLINE_DECL Pango::FontFace get_font_face () noexcept;

// PangoFontFamily* gtk_font_chooser_get_font_family (GtkFontChooser* fontchooser);
// ::PangoFontFamily* gtk_font_chooser_get_font_family (::GtkFontChooser* fontchooser);
GI_INLINE_DECL Pango::FontFamily get_font_family () noexcept;

// char* gtk_font_chooser_get_font_features (GtkFontChooser* fontchooser);
// char* gtk_font_chooser_get_font_features (::GtkFontChooser* fontchooser);
GI_INLINE_DECL std::string get_font_features () noexcept;

// PangoFontMap* gtk_font_chooser_get_font_map (GtkFontChooser* fontchooser);
// ::PangoFontMap* gtk_font_chooser_get_font_map (::GtkFontChooser* fontchooser);
GI_INLINE_DECL Pango::FontMap get_font_map () noexcept;

// gint gtk_font_chooser_get_font_size (GtkFontChooser* fontchooser);
// gint gtk_font_chooser_get_font_size (::GtkFontChooser* fontchooser);
GI_INLINE_DECL gint get_font_size () noexcept;

// char* gtk_font_chooser_get_language (GtkFontChooser* fontchooser);
// char* gtk_font_chooser_get_language (::GtkFontChooser* fontchooser);
GI_INLINE_DECL std::string get_language () noexcept;

// GtkFontChooserLevel gtk_font_chooser_get_level (GtkFontChooser* fontchooser);
// ::GtkFontChooserLevel gtk_font_chooser_get_level (::GtkFontChooser* fontchooser);
GI_INLINE_DECL Gtk::FontChooserLevel get_level () noexcept;

// gchar* gtk_font_chooser_get_preview_text (GtkFontChooser* fontchooser);
// char* gtk_font_chooser_get_preview_text (::GtkFontChooser* fontchooser);
GI_INLINE_DECL std::string get_preview_text () noexcept;

// gboolean gtk_font_chooser_get_show_preview_entry (GtkFontChooser* fontchooser);
// gboolean gtk_font_chooser_get_show_preview_entry (::GtkFontChooser* fontchooser);
GI_INLINE_DECL bool get_show_preview_entry () noexcept;

// void gtk_font_chooser_set_filter_func (GtkFontChooser* fontchooser, GtkFontFilterFunc filter, gpointer user_data, GDestroyNotify destroy);
// void gtk_font_chooser_set_filter_func (::GtkFontChooser* fontchooser, Gtk::FontFilterFunc::cfunction_type filter, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_filter_func (Gtk::FontFilterFunc filter) noexcept;

// void gtk_font_chooser_set_font (GtkFontChooser* fontchooser, const gchar* fontname);
// void gtk_font_chooser_set_font (::GtkFontChooser* fontchooser, const char* fontname);
GI_INLINE_DECL void set_font (const std::string & fontname) noexcept;

// void gtk_font_chooser_set_font_desc (GtkFontChooser* fontchooser, const PangoFontDescription* font_desc);
// void gtk_font_chooser_set_font_desc (::GtkFontChooser* fontchooser, const ::PangoFontDescription* font_desc);
GI_INLINE_DECL void set_font_desc (const Pango::FontDescription & font_desc) noexcept;

// void gtk_font_chooser_set_font_map (GtkFontChooser* fontchooser, PangoFontMap* fontmap);
// void gtk_font_chooser_set_font_map (::GtkFontChooser* fontchooser, ::PangoFontMap* fontmap);
GI_INLINE_DECL void set_font_map (Pango::FontMap fontmap) noexcept;
GI_INLINE_DECL void set_font_map () noexcept;

// void gtk_font_chooser_set_language (GtkFontChooser* fontchooser, const char* language);
// void gtk_font_chooser_set_language (::GtkFontChooser* fontchooser, const char* language);
GI_INLINE_DECL void set_language (const std::string & language) noexcept;

// void gtk_font_chooser_set_level (GtkFontChooser* fontchooser, GtkFontChooserLevel level);
// void gtk_font_chooser_set_level (::GtkFontChooser* fontchooser, ::GtkFontChooserLevel level);
GI_INLINE_DECL void set_level (Gtk::FontChooserLevel level) noexcept;

// void gtk_font_chooser_set_preview_text (GtkFontChooser* fontchooser, const gchar* text);
// void gtk_font_chooser_set_preview_text (::GtkFontChooser* fontchooser, const char* text);
GI_INLINE_DECL void set_preview_text (const std::string & text) noexcept;

// void gtk_font_chooser_set_show_preview_entry (GtkFontChooser* fontchooser, gboolean show_preview_entry);
// void gtk_font_chooser_set_show_preview_entry (::GtkFontChooser* fontchooser, gboolean show_preview_entry);
GI_INLINE_DECL void set_show_preview_entry (gboolean show_preview_entry) noexcept;

gi::property_proxy<std::string, base::FontChooserBase> property_font()
{ return gi::property_proxy<std::string, base::FontChooserBase> (*this, "font"); }
const gi::property_proxy<std::string, base::FontChooserBase> property_font() const
{ return gi::property_proxy<std::string, base::FontChooserBase> (*this, "font"); }

gi::property_proxy<Pango::FontDescription, base::FontChooserBase> property_font_desc()
{ return gi::property_proxy<Pango::FontDescription, base::FontChooserBase> (*this, "font-desc"); }
const gi::property_proxy<Pango::FontDescription, base::FontChooserBase> property_font_desc() const
{ return gi::property_proxy<Pango::FontDescription, base::FontChooserBase> (*this, "font-desc"); }

gi::property_proxy<std::string, base::FontChooserBase> property_font_features()
{ return gi::property_proxy<std::string, base::FontChooserBase> (*this, "font-features"); }
const gi::property_proxy<std::string, base::FontChooserBase> property_font_features() const
{ return gi::property_proxy<std::string, base::FontChooserBase> (*this, "font-features"); }

gi::property_proxy<std::string, base::FontChooserBase> property_language()
{ return gi::property_proxy<std::string, base::FontChooserBase> (*this, "language"); }
const gi::property_proxy<std::string, base::FontChooserBase> property_language() const
{ return gi::property_proxy<std::string, base::FontChooserBase> (*this, "language"); }

gi::property_proxy<Gtk::FontChooserLevel, base::FontChooserBase> property_level()
{ return gi::property_proxy<Gtk::FontChooserLevel, base::FontChooserBase> (*this, "level"); }
const gi::property_proxy<Gtk::FontChooserLevel, base::FontChooserBase> property_level() const
{ return gi::property_proxy<Gtk::FontChooserLevel, base::FontChooserBase> (*this, "level"); }

gi::property_proxy<std::string, base::FontChooserBase> property_preview_text()
{ return gi::property_proxy<std::string, base::FontChooserBase> (*this, "preview-text"); }
const gi::property_proxy<std::string, base::FontChooserBase> property_preview_text() const
{ return gi::property_proxy<std::string, base::FontChooserBase> (*this, "preview-text"); }

gi::property_proxy<bool, base::FontChooserBase> property_show_preview_entry()
{ return gi::property_proxy<bool, base::FontChooserBase> (*this, "show-preview-entry"); }
const gi::property_proxy<bool, base::FontChooserBase> property_show_preview_entry() const
{ return gi::property_proxy<bool, base::FontChooserBase> (*this, "show-preview-entry"); }

// signal font-activated
gi::signal_proxy<void(Gtk::FontChooser, const std::string & fontname)> signal_font_activated()
{ return gi::signal_proxy<void(Gtk::FontChooser, const std::string & fontname)> (*this, "font-activated"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontchooser_extra_def.hpp>)
#include <gtk/fontchooser_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontchooser_extra.hpp>)
#include <gtk/fontchooser_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FontChooser : public GI_GTK_FONTCHOOSER_BASE
{ typedef GI_GTK_FONTCHOOSER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFontChooser>
{ typedef Gtk::FontChooser type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FontChooserIfaceDef
{
typedef FontChooserIfaceDef self;
public:
typedef Gtk::FontChooser instance_type;
typedef ::GtkFontChooserIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void FontChooser::font_activated (GtkFontChooser* chooser, const gchar* fontname);
// void FontChooser::font_activated (::GtkFontChooser* chooser, const char* fontname);
virtual void font_activated_ (const std::string & fontname) noexcept = 0;

// PangoFontFace* FontChooser::get_font_face (GtkFontChooser* fontchooser);
// ::PangoFontFace* FontChooser::get_font_face (::GtkFontChooser* fontchooser);
virtual Pango::FontFace get_font_face_ () noexcept = 0;

// PangoFontFamily* FontChooser::get_font_family (GtkFontChooser* fontchooser);
// ::PangoFontFamily* FontChooser::get_font_family (::GtkFontChooser* fontchooser);
virtual Pango::FontFamily get_font_family_ () noexcept = 0;

// PangoFontMap* FontChooser::get_font_map (GtkFontChooser* fontchooser);
// ::PangoFontMap* FontChooser::get_font_map (::GtkFontChooser* fontchooser);
virtual Pango::FontMap get_font_map_ () noexcept = 0;

// gint FontChooser::get_font_size (GtkFontChooser* fontchooser);
// gint FontChooser::get_font_size (::GtkFontChooser* fontchooser);
virtual gint get_font_size_ () noexcept = 0;

// void FontChooser::set_filter_func (GtkFontChooser* fontchooser, GtkFontFilterFunc filter, gpointer user_data, GDestroyNotify destroy);
// void FontChooser::set_filter_func (::GtkFontChooser* fontchooser, Gtk::FontFilterFunc::cfunction_type filter, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void FontChooser::set_font_map (GtkFontChooser* fontchooser, PangoFontMap* fontmap);
// void FontChooser::set_font_map (::GtkFontChooser* fontchooser, ::PangoFontMap* fontmap);
virtual void set_font_map_ (Pango::FontMap fontmap) noexcept = 0;


};

using FontChooserImpl = detail::InterfaceImpl<FontChooserIfaceDef>;

class FontChooserIfaceClassImpl: public detail::InterfaceClassImpl<FontChooserImpl>
{
typedef FontChooserIfaceClassImpl self;
typedef detail::InterfaceClassImpl<FontChooserImpl> super;

protected:
using super::super;

// void FontChooser::font_activated (GtkFontChooser* chooser, const gchar* fontname);
// void FontChooser::font_activated (::GtkFontChooser* chooser, const char* fontname);
GI_INLINE_DECL void font_activated_ (const std::string & fontname) noexcept override;

// PangoFontFace* FontChooser::get_font_face (GtkFontChooser* fontchooser);
// ::PangoFontFace* FontChooser::get_font_face (::GtkFontChooser* fontchooser);
GI_INLINE_DECL Pango::FontFace get_font_face_ () noexcept override;

// PangoFontFamily* FontChooser::get_font_family (GtkFontChooser* fontchooser);
// ::PangoFontFamily* FontChooser::get_font_family (::GtkFontChooser* fontchooser);
GI_INLINE_DECL Pango::FontFamily get_font_family_ () noexcept override;

// PangoFontMap* FontChooser::get_font_map (GtkFontChooser* fontchooser);
// ::PangoFontMap* FontChooser::get_font_map (::GtkFontChooser* fontchooser);
GI_INLINE_DECL Pango::FontMap get_font_map_ () noexcept override;

// gint FontChooser::get_font_size (GtkFontChooser* fontchooser);
// gint FontChooser::get_font_size (::GtkFontChooser* fontchooser);
GI_INLINE_DECL gint get_font_size_ () noexcept override;

// void FontChooser::set_filter_func (GtkFontChooser* fontchooser, GtkFontFilterFunc filter, gpointer user_data, GDestroyNotify destroy);
// void FontChooser::set_filter_func (::GtkFontChooser* fontchooser, Gtk::FontFilterFunc::cfunction_type filter, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void FontChooser::set_font_map (GtkFontChooser* fontchooser, PangoFontMap* fontmap);
// void FontChooser::set_font_map (::GtkFontChooser* fontchooser, ::PangoFontMap* fontmap);
GI_INLINE_DECL void set_font_map_ (Pango::FontMap fontmap) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
