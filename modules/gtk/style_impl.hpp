// AUTO-GENERATED

#ifndef _GI_GTK_STYLE_IMPL_HPP_
#define _GI_GTK_STYLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkStyle* gtk_style_new ();
// ::GtkStyle* gtk_style_new ();
// IGNORE; deprecated

// void gtk_style_apply_default_background (GtkStyle* style, cairo_t* cr, GdkWindow* window, GtkStateType state_type, gint x, gint y, gint width, gint height);
// void gtk_style_apply_default_background (::GtkStyle* style, ::cairo_t* cr, ::GdkWindow* window,  state_type, gint x, gint y, gint width, gint height);
// IGNORE; deprecated

// FAILURE on gtk_style_attach; No such node (<xmlattr>.transfer-ownership)
// GtkStyle* gtk_style_copy (GtkStyle* style);
// ::GtkStyle* gtk_style_copy (::GtkStyle* style);
// IGNORE; deprecated

// void gtk_style_detach (GtkStyle* style);
// void gtk_style_detach (::GtkStyle* style);
// IGNORE; deprecated

// void gtk_style_get (GtkStyle* style, GType widget_type, const gchar* first_property_name);
// void gtk_style_get (::GtkStyle* style, GType widget_type, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_style_get_style_property (GtkStyle* style, GType widget_type, const gchar* property_name, GValue* value);
// void gtk_style_get_style_property (::GtkStyle* style, GType widget_type, const char* property_name, ::GValue* value);
void base::StyleBase::get_style_property (GType widget_type, const std::string & property_name, GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyle* style, GType widget_type, const char* property_name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_get_style_property;
  traits::unset_wrapper<GValue>::type value_c;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto widget_type_to_c = widget_type;
  call_wrap_v ((::GtkStyle*) (gobj_()), (GType) (widget_type_to_c), (const char*) (property_name_to_c), (::GValue*) ((GValue*) &value_c));
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
}
GObject::Value base::StyleBase::get_style_property (GType widget_type, const std::string & property_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyle* style, GType widget_type, const char* property_name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_get_style_property;
  traits::unset_wrapper<GValue>::type value_c;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto widget_type_to_c = widget_type;
  call_wrap_v ((::GtkStyle*) (gobj_()), (GType) (widget_type_to_c), (const char*) (property_name_to_c), (::GValue*) ((GValue*) &value_c));
  return gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
}

// void gtk_style_get_valist (GtkStyle* style, GType widget_type, const gchar* first_property_name, va_list var_args);
// void gtk_style_get_valist (::GtkStyle* style, GType widget_type, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// gboolean gtk_style_has_context (GtkStyle* style);
// gboolean gtk_style_has_context (::GtkStyle* style);
bool base::StyleBase::has_context () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStyle* style);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_has_context;
  auto _temp_ret = call_wrap_v ((::GtkStyle*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_style_lookup_color (GtkStyle* style, const gchar* color_name, GdkColor* color);
// gboolean gtk_style_lookup_color (::GtkStyle* style, const char* color_name,  color);
// IGNORE; deprecated

// GtkIconSet* gtk_style_lookup_icon_set (GtkStyle* style, const gchar* stock_id);
// ::GtkIconSet* gtk_style_lookup_icon_set (::GtkStyle* style, const char* stock_id);
// IGNORE; deprecated

// GdkPixbuf* gtk_style_render_icon (GtkStyle* style, const GtkIconSource* source, GtkTextDirection direction, GtkStateType state, GtkIconSize size, GtkWidget* widget, const gchar* detail);
// ::GdkPixbuf* gtk_style_render_icon (::GtkStyle* style, const ::GtkIconSource* source, ::GtkTextDirection direction,  state, gint size, ::GtkWidget* widget, const char* detail);
// IGNORE; deprecated

// void gtk_style_set_background (GtkStyle* style, GdkWindow* window, GtkStateType state_type);
// void gtk_style_set_background (::GtkStyle* style, ::GdkWindow* window,  state_type);
// IGNORE; deprecated

static ::PangoFontDescription* _field_font_desc_get (const ::GtkStyle* obj) { return (::PangoFontDescription*) obj->font_desc; }
// ::PangoFontDescription* Style::font_desc (const ::GtkStyle* obj);
// ::PangoFontDescription* Style::font_desc (const ::GtkStyle* obj);
Pango::FontDescription base::StyleBase::font_desc_ () const noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (const ::GtkStyle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_font_desc_get;
  auto _temp_ret = call_wrap_v ((const ::GtkStyle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint _field_xthickness_get (const ::GtkStyle* obj) { return (gint) obj->xthickness; }
// gint Style::xthickness (const ::GtkStyle* obj);
// gint Style::xthickness (const ::GtkStyle* obj);
gint base::StyleBase::xthickness_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkStyle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xthickness_get;
  auto _temp_ret = call_wrap_v ((const ::GtkStyle*) (gobj_()));
  return _temp_ret;
}

static void _field_xthickness_set (::GtkStyle* obj, gint _value) { obj->xthickness = (decltype(obj->xthickness)) _value; }
//  Style::xthickness (::GtkStyle* obj, gint _value);
// void Style::xthickness (::GtkStyle* obj, gint _value);
void base::StyleBase::xthickness_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_xthickness_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkStyle*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_ythickness_get (const ::GtkStyle* obj) { return (gint) obj->ythickness; }
// gint Style::ythickness (const ::GtkStyle* obj);
// gint Style::ythickness (const ::GtkStyle* obj);
gint base::StyleBase::ythickness_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkStyle* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ythickness_get;
  auto _temp_ret = call_wrap_v ((const ::GtkStyle*) (gobj_()));
  return _temp_ret;
}

static void _field_ythickness_set (::GtkStyle* obj, gint _value) { obj->ythickness = (decltype(obj->ythickness)) _value; }
//  Style::ythickness (::GtkStyle* obj, gint _value);
// void Style::ythickness (::GtkStyle* obj, gint _value);
void base::StyleBase::ythickness_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyle* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ythickness_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkStyle*) (gobj_()), (gint) (_value_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/style_extra_def_impl.hpp>)
#include <gtk/style_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/style_extra_impl.hpp>)
#include <gtk/style_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StyleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkStyleClass *methods = (::GtkStyleClass *) class_struct;
  (void) methods;

  methods->copy = (decltype (methods->copy)) detail::method_wrapper<self, void (*) (Gtk::Style src), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::copy_>;
  methods->init_from_rc = (decltype (methods->init_from_rc)) detail::method_wrapper<self, void (*) (Gtk::RcStyle rc_style), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::init_from_rc_>;
  methods->realize = (decltype (methods->realize)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::realize_>;
  methods->unrealize = (decltype (methods->unrealize)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::unrealize_>;
}

// void Style::copy (GtkStyle* style, GtkStyle* src);
// void Style::copy (::GtkStyle* style, ::GtkStyle* src);
void StyleClass::copy_ (Gtk::Style src) noexcept
{
  if (!get_struct_()->copy) return ;
  typedef void (*call_wrap_t) (::GtkStyle* style, ::GtkStyle* src);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->copy;
  auto src_to_c = gi::unwrap (src, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyle*) (gobj_()), (::GtkStyle*) (src_to_c));
}

// void Style::draw_arrow (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, GtkArrowType arrow_type, gboolean fill, gint x, gint y, gint width, gint height);
// void Style::draw_arrow (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, ::GtkArrowType arrow_type, gboolean fill, gint x, gint y, gint width, gint height);
// SKIP; state_type type  not supported

// void Style::draw_box (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height);
// void Style::draw_box (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height);
// SKIP; state_type type  not supported

// void Style::draw_box_gap (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height, GtkPositionType gap_side, gint gap_x, gint gap_width);
// void Style::draw_box_gap (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height, ::GtkPositionType gap_side, gint gap_x, gint gap_width);
// SKIP; state_type type  not supported

// void Style::draw_check (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height);
// void Style::draw_check (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height);
// SKIP; state_type type  not supported

// void Style::draw_diamond (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height);
// void Style::draw_diamond (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height);
// SKIP; state_type type  not supported

// void Style::draw_expander (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkWidget* widget, const gchar* detail, gint x, gint y, GtkExpanderStyle expander_style);
// void Style::draw_expander (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkWidget* widget, const char* detail, gint x, gint y, ::GtkExpanderStyle expander_style);
// SKIP; state_type type  not supported

// void Style::draw_extension (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height, GtkPositionType gap_side);
// void Style::draw_extension (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height, ::GtkPositionType gap_side);
// SKIP; state_type type  not supported

// void Style::draw_flat_box (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height);
// void Style::draw_flat_box (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height);
// SKIP; state_type type  not supported

// void Style::draw_focus (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height);
// void Style::draw_focus (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height);
// SKIP; state_type type  not supported

// void Style::draw_handle (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height, GtkOrientation orientation);
// void Style::draw_handle (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height, ::GtkOrientation orientation);
// SKIP; state_type type  not supported

// void Style::draw_hline (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkWidget* widget, const gchar* detail, gint x1, gint x2, gint y);
// void Style::draw_hline (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkWidget* widget, const char* detail, gint x1, gint x2, gint y);
// SKIP; state_type type  not supported

// void Style::draw_layout (GtkStyle* style, cairo_t* cr, GtkStateType state_type, gboolean use_text, GtkWidget* widget, const gchar* detail, gint x, gint y, PangoLayout* layout);
// void Style::draw_layout (::GtkStyle* style, ::cairo_t* cr,  state_type, gboolean use_text, ::GtkWidget* widget, const char* detail, gint x, gint y, ::PangoLayout* layout);
// SKIP; state_type type  not supported

// void Style::draw_option (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height);
// void Style::draw_option (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height);
// SKIP; state_type type  not supported

// void Style::draw_resize_grip (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkWidget* widget, const gchar* detail, GdkWindowEdge edge, gint x, gint y, gint width, gint height);
// void Style::draw_resize_grip (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkWidget* widget, const char* detail, ::GdkWindowEdge edge, gint x, gint y, gint width, gint height);
// SKIP; state_type type  not supported

// void Style::draw_shadow (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height);
// void Style::draw_shadow (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height);
// SKIP; state_type type  not supported

// void Style::draw_shadow_gap (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height, GtkPositionType gap_side, gint gap_x, gint gap_width);
// void Style::draw_shadow_gap (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height, ::GtkPositionType gap_side, gint gap_x, gint gap_width);
// SKIP; state_type type  not supported

// void Style::draw_slider (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height, GtkOrientation orientation);
// void Style::draw_slider (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height, ::GtkOrientation orientation);
// SKIP; state_type type  not supported

// void Style::draw_spinner (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkWidget* widget, const gchar* detail, guint step, gint x, gint y, gint width, gint height);
// void Style::draw_spinner (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkWidget* widget, const char* detail, guint step, gint x, gint y, gint width, gint height);
// SKIP; state_type type  not supported

// void Style::draw_tab (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkShadowType shadow_type, GtkWidget* widget, const gchar* detail, gint x, gint y, gint width, gint height);
// void Style::draw_tab (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkShadowType shadow_type, ::GtkWidget* widget, const char* detail, gint x, gint y, gint width, gint height);
// SKIP; state_type type  not supported

// void Style::draw_vline (GtkStyle* style, cairo_t* cr, GtkStateType state_type, GtkWidget* widget, const gchar* detail, gint y1_, gint y2_, gint x);
// void Style::draw_vline (::GtkStyle* style, ::cairo_t* cr,  state_type, ::GtkWidget* widget, const char* detail, gint y1_, gint y2_, gint x);
// SKIP; state_type type  not supported

// void Style::init_from_rc (GtkStyle* style, GtkRcStyle* rc_style);
// void Style::init_from_rc (::GtkStyle* style, ::GtkRcStyle* rc_style);
void StyleClass::init_from_rc_ (Gtk::RcStyle rc_style) noexcept
{
  if (!get_struct_()->init_from_rc) return ;
  typedef void (*call_wrap_t) (::GtkStyle* style, ::GtkRcStyle* rc_style);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->init_from_rc;
  auto rc_style_to_c = gi::unwrap (rc_style, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyle*) (gobj_()), (::GtkRcStyle*) (rc_style_to_c));
}

// void Style::realize (GtkStyle* style);
// void Style::realize (::GtkStyle* style);
void StyleClass::realize_ () noexcept
{
  if (!get_struct_()->realize) return ;
  typedef void (*call_wrap_t) (::GtkStyle* style);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->realize;
  call_wrap_v ((::GtkStyle*) (gobj_()));
}

// GdkPixbuf* Style::render_icon (GtkStyle* style, const GtkIconSource* source, GtkTextDirection direction, GtkStateType state, GtkIconSize size, GtkWidget* widget, const gchar* detail);
// ::GdkPixbuf* Style::render_icon (::GtkStyle* style, const ::GtkIconSource* source, ::GtkTextDirection direction,  state, gint size, ::GtkWidget* widget, const char* detail);
// IGNORE; deprecated

// void Style::set_background (GtkStyle* style, GdkWindow* window, GtkStateType state_type);
// void Style::set_background (::GtkStyle* style, ::GdkWindow* window,  state_type);
// IGNORE; deprecated

// void Style::unrealize (GtkStyle* style);
// void Style::unrealize (::GtkStyle* style);
void StyleClass::unrealize_ () noexcept
{
  if (!get_struct_()->unrealize) return ;
  typedef void (*call_wrap_t) (::GtkStyle* style);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unrealize;
  call_wrap_v ((::GtkStyle*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
