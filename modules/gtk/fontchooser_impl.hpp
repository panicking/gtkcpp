// AUTO-GENERATED

#ifndef _GI_GTK_FONTCHOOSER_IMPL_HPP_
#define _GI_GTK_FONTCHOOSER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gchar* gtk_font_chooser_get_font (GtkFontChooser* fontchooser);
// char* gtk_font_chooser_get_font (::GtkFontChooser* fontchooser);
std::string base::FontChooserBase::get_font () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_get_font;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontDescription* gtk_font_chooser_get_font_desc (GtkFontChooser* fontchooser);
// ::PangoFontDescription* gtk_font_chooser_get_font_desc (::GtkFontChooser* fontchooser);
Pango::FontDescription base::FontChooserBase::get_font_desc () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_get_font_desc;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontFace* gtk_font_chooser_get_font_face (GtkFontChooser* fontchooser);
// ::PangoFontFace* gtk_font_chooser_get_font_face (::GtkFontChooser* fontchooser);
Pango::FontFace base::FontChooserBase::get_font_face () noexcept
{
  typedef ::PangoFontFace* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_get_font_face;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoFontFamily* gtk_font_chooser_get_font_family (GtkFontChooser* fontchooser);
// ::PangoFontFamily* gtk_font_chooser_get_font_family (::GtkFontChooser* fontchooser);
Pango::FontFamily base::FontChooserBase::get_font_family () noexcept
{
  typedef ::PangoFontFamily* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_get_font_family;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// char* gtk_font_chooser_get_font_features (GtkFontChooser* fontchooser);
// char* gtk_font_chooser_get_font_features (::GtkFontChooser* fontchooser);
std::string base::FontChooserBase::get_font_features () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_get_font_features;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontMap* gtk_font_chooser_get_font_map (GtkFontChooser* fontchooser);
// ::PangoFontMap* gtk_font_chooser_get_font_map (::GtkFontChooser* fontchooser);
Pango::FontMap base::FontChooserBase::get_font_map () noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_get_font_map;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint gtk_font_chooser_get_font_size (GtkFontChooser* fontchooser);
// gint gtk_font_chooser_get_font_size (::GtkFontChooser* fontchooser);
gint base::FontChooserBase::get_font_size () noexcept
{
  typedef gint (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_get_font_size;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return _temp_ret;
}

// char* gtk_font_chooser_get_language (GtkFontChooser* fontchooser);
// char* gtk_font_chooser_get_language (::GtkFontChooser* fontchooser);
std::string base::FontChooserBase::get_language () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_get_language;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkFontChooserLevel gtk_font_chooser_get_level (GtkFontChooser* fontchooser);
// ::GtkFontChooserLevel gtk_font_chooser_get_level (::GtkFontChooser* fontchooser);
Gtk::FontChooserLevel base::FontChooserBase::get_level () noexcept
{
  typedef ::GtkFontChooserLevel (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_get_level;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gchar* gtk_font_chooser_get_preview_text (GtkFontChooser* fontchooser);
// char* gtk_font_chooser_get_preview_text (::GtkFontChooser* fontchooser);
std::string base::FontChooserBase::get_preview_text () noexcept
{
  typedef char* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_get_preview_text;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_font_chooser_get_show_preview_entry (GtkFontChooser* fontchooser);
// gboolean gtk_font_chooser_get_show_preview_entry (::GtkFontChooser* fontchooser);
bool base::FontChooserBase::get_show_preview_entry () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_get_show_preview_entry;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return _temp_ret;
}

// void gtk_font_chooser_set_filter_func (GtkFontChooser* fontchooser, GtkFontFilterFunc filter, gpointer user_data, GDestroyNotify destroy);
// void gtk_font_chooser_set_filter_func (::GtkFontChooser* fontchooser, Gtk::FontFilterFunc::cfunction_type filter, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
void base::FontChooserBase::set_filter_func (Gtk::FontFilterFunc filter) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, Gtk::FontFilterFunc::cfunction_type filter, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_set_filter_func;
  auto filter_wrap_ = filter ? unwrap (std::move (filter), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (Gtk::FontFilterFunc::cfunction_type) (filter_wrap_ ? &filter_wrap_->wrapper : nullptr), (void*) (filter_wrap_), (GLib::DestroyNotify::cfunction_type) (filter_wrap_ ? &filter_wrap_->destroy : nullptr));
}

// void gtk_font_chooser_set_font (GtkFontChooser* fontchooser, const gchar* fontname);
// void gtk_font_chooser_set_font (::GtkFontChooser* fontchooser, const char* fontname);
void base::FontChooserBase::set_font (const std::string & fontname) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, const char* fontname);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_set_font;
  auto fontname_to_c = gi::unwrap (fontname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (const char*) (fontname_to_c));
}

// void gtk_font_chooser_set_font_desc (GtkFontChooser* fontchooser, const PangoFontDescription* font_desc);
// void gtk_font_chooser_set_font_desc (::GtkFontChooser* fontchooser, const ::PangoFontDescription* font_desc);
void base::FontChooserBase::set_font_desc (const Pango::FontDescription & font_desc) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, const ::PangoFontDescription* font_desc);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_set_font_desc;
  auto font_desc_to_c = gi::unwrap (font_desc, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (const ::PangoFontDescription*) (font_desc_to_c));
}

// void gtk_font_chooser_set_font_map (GtkFontChooser* fontchooser, PangoFontMap* fontmap);
// void gtk_font_chooser_set_font_map (::GtkFontChooser* fontchooser, ::PangoFontMap* fontmap);
void base::FontChooserBase::set_font_map (Pango::FontMap fontmap) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, ::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_set_font_map;
  auto fontmap_to_c = gi::unwrap (fontmap, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (::PangoFontMap*) (fontmap_to_c));
}
void base::FontChooserBase::set_font_map () noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, ::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_set_font_map;
  auto fontmap_to_c = nullptr;
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (::PangoFontMap*) (fontmap_to_c));
}

// void gtk_font_chooser_set_language (GtkFontChooser* fontchooser, const char* language);
// void gtk_font_chooser_set_language (::GtkFontChooser* fontchooser, const char* language);
void base::FontChooserBase::set_language (const std::string & language) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, const char* language);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_set_language;
  auto language_to_c = gi::unwrap (language, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (const char*) (language_to_c));
}

// void gtk_font_chooser_set_level (GtkFontChooser* fontchooser, GtkFontChooserLevel level);
// void gtk_font_chooser_set_level (::GtkFontChooser* fontchooser, ::GtkFontChooserLevel level);
void base::FontChooserBase::set_level (Gtk::FontChooserLevel level) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, ::GtkFontChooserLevel level);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_set_level;
  auto level_to_c = gi::unwrap (level);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (::GtkFontChooserLevel) (level_to_c));
}

// void gtk_font_chooser_set_preview_text (GtkFontChooser* fontchooser, const gchar* text);
// void gtk_font_chooser_set_preview_text (::GtkFontChooser* fontchooser, const char* text);
void base::FontChooserBase::set_preview_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_set_preview_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_font_chooser_set_show_preview_entry (GtkFontChooser* fontchooser, gboolean show_preview_entry);
// void gtk_font_chooser_set_show_preview_entry (::GtkFontChooser* fontchooser, gboolean show_preview_entry);
void base::FontChooserBase::set_show_preview_entry (gboolean show_preview_entry) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, gboolean show_preview_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_chooser_set_show_preview_entry;
  auto show_preview_entry_to_c = show_preview_entry;
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (gboolean) (show_preview_entry_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontchooser_extra_def_impl.hpp>)
#include <gtk/fontchooser_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontchooser_extra_impl.hpp>)
#include <gtk/fontchooser_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FontChooserIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkFontChooserIface *methods = (::GtkFontChooserIface *) interface_struct;
  (void) methods;

  methods->font_activated = (decltype (methods->font_activated)) detail::method_wrapper<self, void (*) (const std::string & fontname), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::font_activated_>;
  methods->get_font_face = (decltype (methods->get_font_face)) detail::method_wrapper<self, Pango::FontFace (*) (), gi::transfer_none_t>::wrapper<&self::get_font_face_>;
  methods->get_font_family = (decltype (methods->get_font_family)) detail::method_wrapper<self, Pango::FontFamily (*) (), gi::transfer_none_t>::wrapper<&self::get_font_family_>;
  methods->get_font_map = (decltype (methods->get_font_map)) detail::method_wrapper<self, Pango::FontMap (*) (), gi::transfer_full_t>::wrapper<&self::get_font_map_>;
  methods->get_font_size = (decltype (methods->get_font_size)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_font_size_>;
  methods->set_font_map = (decltype (methods->set_font_map)) detail::method_wrapper<self, void (*) (Pango::FontMap fontmap), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_font_map_>;
}

// void FontChooser::font_activated (GtkFontChooser* chooser, const gchar* fontname);
// void FontChooser::font_activated (::GtkFontChooser* chooser, const char* fontname);
void FontChooserIfaceClassImpl::font_activated_ (const std::string & fontname) noexcept
{
  if (!get_struct_()->font_activated) return ;
  typedef void (*call_wrap_t) (::GtkFontChooser* chooser, const char* fontname);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->font_activated;
  auto fontname_to_c = gi::unwrap (fontname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (const char*) (fontname_to_c));
}

// PangoFontFace* FontChooser::get_font_face (GtkFontChooser* fontchooser);
// ::PangoFontFace* FontChooser::get_font_face (::GtkFontChooser* fontchooser);
Pango::FontFace FontChooserIfaceClassImpl::get_font_face_ () noexcept
{
  if (!get_struct_()->get_font_face) return Pango::FontFace{};
  typedef ::PangoFontFace* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font_face;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoFontFamily* FontChooser::get_font_family (GtkFontChooser* fontchooser);
// ::PangoFontFamily* FontChooser::get_font_family (::GtkFontChooser* fontchooser);
Pango::FontFamily FontChooserIfaceClassImpl::get_font_family_ () noexcept
{
  if (!get_struct_()->get_font_family) return Pango::FontFamily{};
  typedef ::PangoFontFamily* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font_family;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoFontMap* FontChooser::get_font_map (GtkFontChooser* fontchooser);
// ::PangoFontMap* FontChooser::get_font_map (::GtkFontChooser* fontchooser);
Pango::FontMap FontChooserIfaceClassImpl::get_font_map_ () noexcept
{
  if (!get_struct_()->get_font_map) return Pango::FontMap{};
  typedef ::PangoFontMap* (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font_map;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint FontChooser::get_font_size (GtkFontChooser* fontchooser);
// gint FontChooser::get_font_size (::GtkFontChooser* fontchooser);
gint FontChooserIfaceClassImpl::get_font_size_ () noexcept
{
  if (!get_struct_()->get_font_size) return gint{};
  typedef gint (*call_wrap_t) (::GtkFontChooser* fontchooser);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font_size;
  auto _temp_ret = call_wrap_v ((::GtkFontChooser*) (gobj_()));
  return _temp_ret;
}

// void FontChooser::set_filter_func (GtkFontChooser* fontchooser, GtkFontFilterFunc filter, gpointer user_data, GDestroyNotify destroy);
// void FontChooser::set_filter_func (::GtkFontChooser* fontchooser, Gtk::FontFilterFunc::cfunction_type filter, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void FontChooser::set_font_map (GtkFontChooser* fontchooser, PangoFontMap* fontmap);
// void FontChooser::set_font_map (::GtkFontChooser* fontchooser, ::PangoFontMap* fontmap);
void FontChooserIfaceClassImpl::set_font_map_ (Pango::FontMap fontmap) noexcept
{
  if (!get_struct_()->set_font_map) return ;
  typedef void (*call_wrap_t) (::GtkFontChooser* fontchooser, ::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_font_map;
  auto fontmap_to_c = gi::unwrap (fontmap, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFontChooser*) (gobj_()), (::PangoFontMap*) (fontmap_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
