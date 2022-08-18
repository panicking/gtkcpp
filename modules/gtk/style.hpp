// AUTO-GENERATED

#ifndef _GI_GTK_STYLE_HPP_
#define _GI_GTK_STYLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class IconSet;
class IconSource;
class RcStyle;
class StyleContext;
class Widget;

class Style;

namespace base {


#define GI_GTK_STYLE_BASE base::StyleBase
class StyleBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkStyle BaseObjectType;

StyleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_style_get_type(); } 

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
GI_INLINE_DECL void get_style_property (GType widget_type, const std::string & property_name, GObject::Value & value) noexcept;
GI_INLINE_DECL GObject::Value get_style_property (GType widget_type, const std::string & property_name) noexcept;

// void gtk_style_get_valist (GtkStyle* style, GType widget_type, const gchar* first_property_name, va_list var_args);
// void gtk_style_get_valist (::GtkStyle* style, GType widget_type, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// gboolean gtk_style_has_context (GtkStyle* style);
// gboolean gtk_style_has_context (::GtkStyle* style);
GI_INLINE_DECL bool has_context () noexcept;

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

gi::property_proxy<Gtk::StyleContext, base::StyleBase> property_context()
{ return gi::property_proxy<Gtk::StyleContext, base::StyleBase> (*this, "context"); }
const gi::property_proxy<Gtk::StyleContext, base::StyleBase> property_context() const
{ return gi::property_proxy<Gtk::StyleContext, base::StyleBase> (*this, "context"); }

// ::PangoFontDescription* Style::font_desc (const ::GtkStyle* obj);
// ::PangoFontDescription* Style::font_desc (const ::GtkStyle* obj);
GI_INLINE_DECL Pango::FontDescription font_desc_ () const noexcept;

// gint Style::xthickness (const ::GtkStyle* obj);
// gint Style::xthickness (const ::GtkStyle* obj);
GI_INLINE_DECL gint xthickness_ () const noexcept;

//  Style::xthickness (::GtkStyle* obj, gint _value);
// void Style::xthickness (::GtkStyle* obj, gint _value);
GI_INLINE_DECL void xthickness_ (gint _value) noexcept;

// gint Style::ythickness (const ::GtkStyle* obj);
// gint Style::ythickness (const ::GtkStyle* obj);
GI_INLINE_DECL gint ythickness_ () const noexcept;

//  Style::ythickness (::GtkStyle* obj, gint _value);
// void Style::ythickness (::GtkStyle* obj, gint _value);
GI_INLINE_DECL void ythickness_ (gint _value) noexcept;

// signal realize
gi::signal_proxy<void(Gtk::Style)> signal_realize()
{ return gi::signal_proxy<void(Gtk::Style)> (*this, "realize"); }

// signal unrealize
gi::signal_proxy<void(Gtk::Style)> signal_unrealize()
{ return gi::signal_proxy<void(Gtk::Style)> (*this, "unrealize"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/style_extra_def.hpp>)
#include <gtk/style_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/style_extra.hpp>)
#include <gtk/style_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Style : public GI_GTK_STYLE_BASE
{ typedef GI_GTK_STYLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStyle>
{ typedef Gtk::Style type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StyleClassDef
{
typedef StyleClassDef self;
public:
typedef Gtk::Style instance_type;
typedef ::GtkStyleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Style::copy (GtkStyle* style, GtkStyle* src);
// void Style::copy (::GtkStyle* style, ::GtkStyle* src);
virtual void copy_ (Gtk::Style src) noexcept = 0;

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
virtual void init_from_rc_ (Gtk::RcStyle rc_style) noexcept = 0;

// void Style::realize (GtkStyle* style);
// void Style::realize (::GtkStyle* style);
virtual void realize_ () noexcept = 0;

// GdkPixbuf* Style::render_icon (GtkStyle* style, const GtkIconSource* source, GtkTextDirection direction, GtkStateType state, GtkIconSize size, GtkWidget* widget, const gchar* detail);
// ::GdkPixbuf* Style::render_icon (::GtkStyle* style, const ::GtkIconSource* source, ::GtkTextDirection direction,  state, gint size, ::GtkWidget* widget, const char* detail);
// IGNORE; deprecated

// void Style::set_background (GtkStyle* style, GdkWindow* window, GtkStateType state_type);
// void Style::set_background (::GtkStyle* style, ::GdkWindow* window,  state_type);
// IGNORE; deprecated

// void Style::unrealize (GtkStyle* style);
// void Style::unrealize (::GtkStyle* style);
virtual void unrealize_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class StyleClass: public detail::ClassTemplate<Gtk::impl::internal::StyleClassDef, GObject::impl::internal::ObjectClass>
{
typedef StyleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StyleClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Style::copy (GtkStyle* style, GtkStyle* src);
// void Style::copy (::GtkStyle* style, ::GtkStyle* src);
GI_INLINE_DECL void copy_ (Gtk::Style src) noexcept override;

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
GI_INLINE_DECL void init_from_rc_ (Gtk::RcStyle rc_style) noexcept override;

// void Style::realize (GtkStyle* style);
// void Style::realize (::GtkStyle* style);
GI_INLINE_DECL void realize_ () noexcept override;

// GdkPixbuf* Style::render_icon (GtkStyle* style, const GtkIconSource* source, GtkTextDirection direction, GtkStateType state, GtkIconSize size, GtkWidget* widget, const gchar* detail);
// ::GdkPixbuf* Style::render_icon (::GtkStyle* style, const ::GtkIconSource* source, ::GtkTextDirection direction,  state, gint size, ::GtkWidget* widget, const char* detail);
// IGNORE; deprecated

// void Style::set_background (GtkStyle* style, GdkWindow* window, GtkStateType state_type);
// void Style::set_background (::GtkStyle* style, ::GdkWindow* window,  state_type);
// IGNORE; deprecated

// void Style::unrealize (GtkStyle* style);
// void Style::unrealize (::GtkStyle* style);
GI_INLINE_DECL void unrealize_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using StyleImpl = detail::ObjectImpl<Style, internal::StyleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
