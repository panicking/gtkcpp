// AUTO-GENERATED

#ifndef _GI_GTK_THEMINGENGINE_HPP_
#define _GI_GTK_THEMINGENGINE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Border;
class WidgetPath;

class ThemingEngine;

namespace base {


#define GI_GTK_THEMINGENGINE_BASE base::ThemingEngineBase
class ThemingEngineBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkThemingEngine BaseObjectType;

ThemingEngineBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_theming_engine_get_type(); } 

// GtkThemingEngine* gtk_theming_engine_load (const gchar* name);
// ::GtkThemingEngine* gtk_theming_engine_load (const char* name);
// IGNORE; deprecated

// void gtk_theming_engine_register_property (const gchar* name_space, GtkStylePropertyParser parse_func, GParamSpec* pspec);
// void gtk_theming_engine_register_property (const char* name_space,  parse_func, ::GParamSpec* pspec);
// IGNORE; deprecated

// void gtk_theming_engine_get (GtkThemingEngine* engine, GtkStateFlags state);
// void gtk_theming_engine_get (::GtkThemingEngine* engine, ::GtkStateFlags state);
// IGNORE; deprecated, varargs not supported

// void gtk_theming_engine_get_background_color (GtkThemingEngine* engine, GtkStateFlags state, GdkRGBA* color);
// void gtk_theming_engine_get_background_color (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GdkRGBA* color);
// IGNORE; deprecated

// void gtk_theming_engine_get_border (GtkThemingEngine* engine, GtkStateFlags state, GtkBorder* border);
// void gtk_theming_engine_get_border (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GtkBorder* border);
// IGNORE; deprecated

// void gtk_theming_engine_get_border_color (GtkThemingEngine* engine, GtkStateFlags state, GdkRGBA* color);
// void gtk_theming_engine_get_border_color (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GdkRGBA* color);
// IGNORE; deprecated

// void gtk_theming_engine_get_color (GtkThemingEngine* engine, GtkStateFlags state, GdkRGBA* color);
// void gtk_theming_engine_get_color (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GdkRGBA* color);
// IGNORE; deprecated

// GtkTextDirection gtk_theming_engine_get_direction (GtkThemingEngine* engine);
// ::GtkTextDirection gtk_theming_engine_get_direction (::GtkThemingEngine* engine);
// IGNORE; deprecated

// const PangoFontDescription* gtk_theming_engine_get_font (GtkThemingEngine* engine, GtkStateFlags state);
// const ::PangoFontDescription* gtk_theming_engine_get_font (::GtkThemingEngine* engine, ::GtkStateFlags state);
// IGNORE; deprecated

// GtkJunctionSides gtk_theming_engine_get_junction_sides (GtkThemingEngine* engine);
// ::GtkJunctionSides gtk_theming_engine_get_junction_sides (::GtkThemingEngine* engine);
// IGNORE; deprecated

// void gtk_theming_engine_get_margin (GtkThemingEngine* engine, GtkStateFlags state, GtkBorder* margin);
// void gtk_theming_engine_get_margin (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GtkBorder* margin);
// IGNORE; deprecated

// void gtk_theming_engine_get_padding (GtkThemingEngine* engine, GtkStateFlags state, GtkBorder* padding);
// void gtk_theming_engine_get_padding (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GtkBorder* padding);
// IGNORE; deprecated

// const GtkWidgetPath* gtk_theming_engine_get_path (GtkThemingEngine* engine);
// const ::GtkWidgetPath* gtk_theming_engine_get_path (::GtkThemingEngine* engine);
// IGNORE; deprecated

// void gtk_theming_engine_get_property (GtkThemingEngine* engine, const gchar* property, GtkStateFlags state, GValue* value);
// void gtk_theming_engine_get_property (::GtkThemingEngine* engine, const char* property, ::GtkStateFlags state, ::GValue* value);
// IGNORE; deprecated

// GdkScreen* gtk_theming_engine_get_screen (GtkThemingEngine* engine);
// ::GdkScreen* gtk_theming_engine_get_screen (::GtkThemingEngine* engine);
// IGNORE; deprecated

// GtkStateFlags gtk_theming_engine_get_state (GtkThemingEngine* engine);
// ::GtkStateFlags gtk_theming_engine_get_state (::GtkThemingEngine* engine);
// IGNORE; deprecated

// void gtk_theming_engine_get_style (GtkThemingEngine* engine);
// void gtk_theming_engine_get_style (::GtkThemingEngine* engine);
// IGNORE; deprecated, varargs not supported

// void gtk_theming_engine_get_style_property (GtkThemingEngine* engine, const gchar* property_name, GValue* value);
// void gtk_theming_engine_get_style_property (::GtkThemingEngine* engine, const char* property_name, ::GValue* value);
// IGNORE; deprecated

// void gtk_theming_engine_get_style_valist (GtkThemingEngine* engine, va_list args);
// void gtk_theming_engine_get_style_valist (::GtkThemingEngine* engine,  args);
// IGNORE; deprecated

// void gtk_theming_engine_get_valist (GtkThemingEngine* engine, GtkStateFlags state, va_list args);
// void gtk_theming_engine_get_valist (::GtkThemingEngine* engine, ::GtkStateFlags state,  args);
// IGNORE; deprecated

// gboolean gtk_theming_engine_has_class (GtkThemingEngine* engine, const gchar* style_class);
// gboolean gtk_theming_engine_has_class (::GtkThemingEngine* engine, const char* style_class);
// IGNORE; deprecated

// gboolean gtk_theming_engine_has_region (GtkThemingEngine* engine, const gchar* style_region, GtkRegionFlags* flags);
// gboolean gtk_theming_engine_has_region (::GtkThemingEngine* engine, const char* style_region, ::GtkRegionFlags* flags);
// IGNORE; deprecated

// gboolean gtk_theming_engine_lookup_color (GtkThemingEngine* engine, const gchar* color_name, GdkRGBA* color);
// gboolean gtk_theming_engine_lookup_color (::GtkThemingEngine* engine, const char* color_name, ::GdkRGBA* color);
// IGNORE; deprecated

// gboolean gtk_theming_engine_state_is_running (GtkThemingEngine* engine, GtkStateType state, gdouble* progress);
// gboolean gtk_theming_engine_state_is_running (::GtkThemingEngine* engine,  state, gdouble* progress);
// IGNORE; deprecated

gi::property_proxy<std::string, base::ThemingEngineBase> property_name()
{ return gi::property_proxy<std::string, base::ThemingEngineBase> (*this, "name"); }
const gi::property_proxy<std::string, base::ThemingEngineBase> property_name() const
{ return gi::property_proxy<std::string, base::ThemingEngineBase> (*this, "name"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/themingengine_extra_def.hpp>)
#include <gtk/themingengine_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/themingengine_extra.hpp>)
#include <gtk/themingengine_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ThemingEngine : public GI_GTK_THEMINGENGINE_BASE
{ typedef GI_GTK_THEMINGENGINE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkThemingEngine>
{ typedef Gtk::ThemingEngine type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ThemingEngineClassDef
{
typedef ThemingEngineClassDef self;
public:
typedef Gtk::ThemingEngine instance_type;
typedef ::GtkThemingEngineClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ThemingEngine::render_activity (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_activity (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
virtual void render_activity_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept = 0;

// void ThemingEngine::render_arrow (GtkThemingEngine* engine, cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
// void ThemingEngine::render_arrow (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
virtual void render_arrow_ (cairo::Context cr, gdouble angle, gdouble x, gdouble y, gdouble size) noexcept = 0;

// void ThemingEngine::render_background (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_background (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
virtual void render_background_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept = 0;

// void ThemingEngine::render_check (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_check (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
virtual void render_check_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept = 0;

// void ThemingEngine::render_expander (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_expander (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
virtual void render_expander_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept = 0;

// void ThemingEngine::render_extension (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkPositionType gap_side);
// void ThemingEngine::render_extension (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkPositionType gap_side);
virtual void render_extension_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::PositionType gap_side) noexcept = 0;

// void ThemingEngine::render_focus (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_focus (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
virtual void render_focus_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept = 0;

// void ThemingEngine::render_frame (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_frame (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
virtual void render_frame_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept = 0;

// void ThemingEngine::render_frame_gap (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkPositionType gap_side, gdouble xy0_gap, gdouble xy1_gap);
// void ThemingEngine::render_frame_gap (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkPositionType gap_side, gdouble xy0_gap, gdouble xy1_gap);
virtual void render_frame_gap_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::PositionType gap_side, gdouble xy0_gap, gdouble xy1_gap) noexcept = 0;

// void ThemingEngine::render_handle (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_handle (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
virtual void render_handle_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept = 0;

// void ThemingEngine::render_icon (GtkThemingEngine* engine, cairo_t* cr, GdkPixbuf* pixbuf, gdouble x, gdouble y);
// void ThemingEngine::render_icon (::GtkThemingEngine* engine, ::cairo_t* cr, ::GdkPixbuf* pixbuf, gdouble x, gdouble y);
virtual void render_icon_ (cairo::Context cr, GdkPixbuf::Pixbuf pixbuf, gdouble x, gdouble y) noexcept = 0;

// void ThemingEngine::render_icon_surface (GtkThemingEngine* engine, cairo_t* cr, cairo_surface_t* surface, gdouble x, gdouble y);
// void ThemingEngine::render_icon_surface (::GtkThemingEngine* engine, ::cairo_t* cr, ::cairo_surface_t* surface, gdouble x, gdouble y);
virtual void render_icon_surface_ (cairo::Context cr, cairo::Surface surface, gdouble x, gdouble y) noexcept = 0;

// void ThemingEngine::render_layout (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, PangoLayout* layout);
// void ThemingEngine::render_layout (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, ::PangoLayout* layout);
virtual void render_layout_ (cairo::Context cr, gdouble x, gdouble y, Pango::Layout layout) noexcept = 0;

// void ThemingEngine::render_line (GtkThemingEngine* engine, cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
// void ThemingEngine::render_line (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
virtual void render_line_ (cairo::Context cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1) noexcept = 0;

// void ThemingEngine::render_option (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_option (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
virtual void render_option_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept = 0;

// void ThemingEngine::render_slider (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkOrientation orientation);
// void ThemingEngine::render_slider (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkOrientation orientation);
virtual void render_slider_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::Orientation orientation) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ThemingEngineClass: public detail::ClassTemplate<Gtk::impl::internal::ThemingEngineClassDef, GObject::impl::internal::ObjectClass>
{
typedef ThemingEngineClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ThemingEngineClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ThemingEngine::render_activity (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_activity (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_activity_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept override;

// void ThemingEngine::render_arrow (GtkThemingEngine* engine, cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
// void ThemingEngine::render_arrow (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
GI_INLINE_DECL void render_arrow_ (cairo::Context cr, gdouble angle, gdouble x, gdouble y, gdouble size) noexcept override;

// void ThemingEngine::render_background (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_background (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_background_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept override;

// void ThemingEngine::render_check (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_check (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_check_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept override;

// void ThemingEngine::render_expander (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_expander (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_expander_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept override;

// void ThemingEngine::render_extension (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkPositionType gap_side);
// void ThemingEngine::render_extension (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkPositionType gap_side);
GI_INLINE_DECL void render_extension_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::PositionType gap_side) noexcept override;

// void ThemingEngine::render_focus (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_focus (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_focus_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept override;

// void ThemingEngine::render_frame (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_frame (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_frame_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept override;

// void ThemingEngine::render_frame_gap (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkPositionType gap_side, gdouble xy0_gap, gdouble xy1_gap);
// void ThemingEngine::render_frame_gap (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkPositionType gap_side, gdouble xy0_gap, gdouble xy1_gap);
GI_INLINE_DECL void render_frame_gap_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::PositionType gap_side, gdouble xy0_gap, gdouble xy1_gap) noexcept override;

// void ThemingEngine::render_handle (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_handle (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_handle_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept override;

// void ThemingEngine::render_icon (GtkThemingEngine* engine, cairo_t* cr, GdkPixbuf* pixbuf, gdouble x, gdouble y);
// void ThemingEngine::render_icon (::GtkThemingEngine* engine, ::cairo_t* cr, ::GdkPixbuf* pixbuf, gdouble x, gdouble y);
GI_INLINE_DECL void render_icon_ (cairo::Context cr, GdkPixbuf::Pixbuf pixbuf, gdouble x, gdouble y) noexcept override;

// void ThemingEngine::render_icon_surface (GtkThemingEngine* engine, cairo_t* cr, cairo_surface_t* surface, gdouble x, gdouble y);
// void ThemingEngine::render_icon_surface (::GtkThemingEngine* engine, ::cairo_t* cr, ::cairo_surface_t* surface, gdouble x, gdouble y);
GI_INLINE_DECL void render_icon_surface_ (cairo::Context cr, cairo::Surface surface, gdouble x, gdouble y) noexcept override;

// void ThemingEngine::render_layout (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, PangoLayout* layout);
// void ThemingEngine::render_layout (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, ::PangoLayout* layout);
GI_INLINE_DECL void render_layout_ (cairo::Context cr, gdouble x, gdouble y, Pango::Layout layout) noexcept override;

// void ThemingEngine::render_line (GtkThemingEngine* engine, cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
// void ThemingEngine::render_line (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
GI_INLINE_DECL void render_line_ (cairo::Context cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1) noexcept override;

// void ThemingEngine::render_option (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_option (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_option_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept override;

// void ThemingEngine::render_slider (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkOrientation orientation);
// void ThemingEngine::render_slider (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkOrientation orientation);
GI_INLINE_DECL void render_slider_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::Orientation orientation) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ThemingEngineImpl = detail::ObjectImpl<ThemingEngine, internal::ThemingEngineClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
