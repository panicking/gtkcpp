// AUTO-GENERATED

#ifndef _GI_GTK_RCSTYLE_IMPL_HPP_
#define _GI_GTK_RCSTYLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkRcStyle* gtk_rc_style_new ();
// ::GtkRcStyle* gtk_rc_style_new ();
// IGNORE; deprecated

// GtkRcStyle* gtk_rc_style_copy (GtkRcStyle* orig);
// ::GtkRcStyle* gtk_rc_style_copy (::GtkRcStyle* orig);
// IGNORE; deprecated

static char* _field_name_get (const ::GtkRcStyle* obj) { return (char*) obj->name; }
// char* RcStyle::name (const ::GtkRcStyle* obj);
// char* RcStyle::name (const ::GtkRcStyle* obj);
std::string base::RcStyleBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkRcStyle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRcStyle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::PangoFontDescription* _field_font_desc_get (const ::GtkRcStyle* obj) { return (::PangoFontDescription*) obj->font_desc; }
// ::PangoFontDescription* RcStyle::font_desc (const ::GtkRcStyle* obj);
// ::PangoFontDescription* RcStyle::font_desc (const ::GtkRcStyle* obj);
Pango::FontDescription base::RcStyleBase::font_desc_ () const noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (const ::GtkRcStyle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_font_desc_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRcStyle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint _field_xthickness_get (const ::GtkRcStyle* obj) { return (gint) obj->xthickness; }
// gint RcStyle::xthickness (const ::GtkRcStyle* obj);
// gint RcStyle::xthickness (const ::GtkRcStyle* obj);
gint base::RcStyleBase::xthickness_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkRcStyle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xthickness_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRcStyle*) (gobj_()));
  return _temp_ret;
}

static void _field_xthickness_set (::GtkRcStyle* obj, gint _value) { obj->xthickness = (decltype(obj->xthickness)) _value; }
//  RcStyle::xthickness (::GtkRcStyle* obj, gint _value);
// void RcStyle::xthickness (::GtkRcStyle* obj, gint _value);
void base::RcStyleBase::xthickness_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRcStyle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xthickness_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkRcStyle*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_ythickness_get (const ::GtkRcStyle* obj) { return (gint) obj->ythickness; }
// gint RcStyle::ythickness (const ::GtkRcStyle* obj);
// gint RcStyle::ythickness (const ::GtkRcStyle* obj);
gint base::RcStyleBase::ythickness_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkRcStyle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ythickness_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRcStyle*) (gobj_()));
  return _temp_ret;
}

static void _field_ythickness_set (::GtkRcStyle* obj, gint _value) { obj->ythickness = (decltype(obj->ythickness)) _value; }
//  RcStyle::ythickness (::GtkRcStyle* obj, gint _value);
// void RcStyle::ythickness (::GtkRcStyle* obj, gint _value);
void base::RcStyleBase::ythickness_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRcStyle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ythickness_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkRcStyle*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/rcstyle_extra_def_impl.hpp>)
#include <gtk/rcstyle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/rcstyle_extra_impl.hpp>)
#include <gtk/rcstyle_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RcStyleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRcStyleClass *methods = (::GtkRcStyleClass *) class_struct;
  (void) methods;

  methods->merge = (decltype (methods->merge)) detail::method_wrapper<self, void (*) (Gtk::RcStyle src), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::merge_>;
  methods->parse = (decltype (methods->parse)) detail::method_wrapper<self, guint (*) (Gtk::Settings settings, GLib::Scanner scanner), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::parse_>;
}

// void RcStyle::merge (GtkRcStyle* dest, GtkRcStyle* src);
// void RcStyle::merge (::GtkRcStyle* dest, ::GtkRcStyle* src);
void RcStyleClass::merge_ (Gtk::RcStyle src) noexcept
{
  if (!get_struct_()->merge) return ;
  typedef void (*call_wrap_t) (::GtkRcStyle* dest, ::GtkRcStyle* src);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->merge;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRcStyle*) (gobj_()), (::GtkRcStyle*) (src_to_c));
}

// guint RcStyle::parse (GtkRcStyle* rc_style, GtkSettings* settings, GScanner* scanner);
// guint RcStyle::parse (::GtkRcStyle* rc_style, ::GtkSettings* settings, ::GScanner* scanner);
guint RcStyleClass::parse_ (Gtk::Settings settings, GLib::Scanner scanner) noexcept
{
  if (!get_struct_()->parse) return guint{};
  typedef guint (*call_wrap_t) (::GtkRcStyle* rc_style, ::GtkSettings* settings, ::GScanner* scanner);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->parse;
  auto scanner_to_c = gi::unwrap (scanner, gi::transfer_none, gi::direction_in);
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRcStyle*) (gobj_()), (::GtkSettings*) (settings_to_c), (::GScanner*) (scanner_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
