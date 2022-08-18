// AUTO-GENERATED

#ifndef _GI_GDK_SCREEN_HPP_
#define _GI_GDK_SCREEN_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Display;
class Rectangle;
class Visual;
class Window;

class Screen;

namespace base {


#define GI_GDK_SCREEN_BASE base::ScreenBase
class ScreenBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkScreen BaseObjectType;

ScreenBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_screen_get_type(); } 

// GdkScreen* gdk_screen_get_default ();
// ::GdkScreen* gdk_screen_get_default ();
static GI_INLINE_DECL Gdk::Screen get_default () noexcept;

// gint gdk_screen_height ();
// gint gdk_screen_height ();
// IGNORE; deprecated

// gint gdk_screen_height_mm ();
// gint gdk_screen_height_mm ();
// IGNORE; deprecated

// gint gdk_screen_width ();
// gint gdk_screen_width ();
// IGNORE; deprecated

// gint gdk_screen_width_mm ();
// gint gdk_screen_width_mm ();
// IGNORE; deprecated

// GdkWindow* gdk_screen_get_active_window (GdkScreen* screen);
// ::GdkWindow* gdk_screen_get_active_window (::GdkScreen* screen);
// IGNORE; deprecated

// GdkDisplay* gdk_screen_get_display (GdkScreen* screen);
// ::GdkDisplay* gdk_screen_get_display (::GdkScreen* screen);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// const cairo_font_options_t* gdk_screen_get_font_options (GdkScreen* screen);
// const ::cairo_font_options_t* gdk_screen_get_font_options (::GdkScreen* screen);
GI_INLINE_DECL cairo::FontOptions get_font_options () noexcept;

// gint gdk_screen_get_height (GdkScreen* screen);
// gint gdk_screen_get_height (::GdkScreen* screen);
// IGNORE; deprecated

// gint gdk_screen_get_height_mm (GdkScreen* screen);
// gint gdk_screen_get_height_mm (::GdkScreen* screen);
// IGNORE; deprecated

// gint gdk_screen_get_monitor_at_point (GdkScreen* screen, gint x, gint y);
// gint gdk_screen_get_monitor_at_point (::GdkScreen* screen, gint x, gint y);
// IGNORE; deprecated

// gint gdk_screen_get_monitor_at_window (GdkScreen* screen, GdkWindow* window);
// gint gdk_screen_get_monitor_at_window (::GdkScreen* screen, ::GdkWindow* window);
// IGNORE; deprecated

// void gdk_screen_get_monitor_geometry (GdkScreen* screen, gint monitor_num, GdkRectangle* dest);
// void gdk_screen_get_monitor_geometry (::GdkScreen* screen, gint monitor_num, ::GdkRectangle* dest);
// IGNORE; deprecated

// gint gdk_screen_get_monitor_height_mm (GdkScreen* screen, gint monitor_num);
// gint gdk_screen_get_monitor_height_mm (::GdkScreen* screen, gint monitor_num);
// IGNORE; deprecated

// gchar* gdk_screen_get_monitor_plug_name (GdkScreen* screen, gint monitor_num);
// char* gdk_screen_get_monitor_plug_name (::GdkScreen* screen, gint monitor_num);
// IGNORE; deprecated

// gint gdk_screen_get_monitor_scale_factor (GdkScreen* screen, gint monitor_num);
// gint gdk_screen_get_monitor_scale_factor (::GdkScreen* screen, gint monitor_num);
// IGNORE; deprecated

// gint gdk_screen_get_monitor_width_mm (GdkScreen* screen, gint monitor_num);
// gint gdk_screen_get_monitor_width_mm (::GdkScreen* screen, gint monitor_num);
// IGNORE; deprecated

// void gdk_screen_get_monitor_workarea (GdkScreen* screen, gint monitor_num, GdkRectangle* dest);
// void gdk_screen_get_monitor_workarea (::GdkScreen* screen, gint monitor_num, ::GdkRectangle* dest);
// IGNORE; deprecated

// gint gdk_screen_get_n_monitors (GdkScreen* screen);
// gint gdk_screen_get_n_monitors (::GdkScreen* screen);
// IGNORE; deprecated

// gint gdk_screen_get_number (GdkScreen* screen);
// gint gdk_screen_get_number (::GdkScreen* screen);
// IGNORE; deprecated

// gint gdk_screen_get_primary_monitor (GdkScreen* screen);
// gint gdk_screen_get_primary_monitor (::GdkScreen* screen);
// IGNORE; deprecated

// gdouble gdk_screen_get_resolution (GdkScreen* screen);
// gdouble gdk_screen_get_resolution (::GdkScreen* screen);
GI_INLINE_DECL gdouble get_resolution () noexcept;

// GdkVisual* gdk_screen_get_rgba_visual (GdkScreen* screen);
// ::GdkVisual* gdk_screen_get_rgba_visual (::GdkScreen* screen);
GI_INLINE_DECL Gdk::Visual get_rgba_visual () noexcept;

// GdkWindow* gdk_screen_get_root_window (GdkScreen* screen);
// ::GdkWindow* gdk_screen_get_root_window (::GdkScreen* screen);
GI_INLINE_DECL Gdk::Window get_root_window () noexcept;

// gboolean gdk_screen_get_setting (GdkScreen* screen, const gchar* name, GValue* value);
// gboolean gdk_screen_get_setting (::GdkScreen* screen, const char* name, ::GValue* value);
GI_INLINE_DECL bool get_setting (const std::string & name, GObject::Value value) noexcept;

// GdkVisual* gdk_screen_get_system_visual (GdkScreen* screen);
// ::GdkVisual* gdk_screen_get_system_visual (::GdkScreen* screen);
GI_INLINE_DECL Gdk::Visual get_system_visual () noexcept;

// GList* gdk_screen_get_toplevel_windows (GdkScreen* screen);
// ::GList* gdk_screen_get_toplevel_windows (::GdkScreen* screen);
GI_INLINE_DECL std::vector<Gdk::Window> get_toplevel_windows () noexcept;

// gint gdk_screen_get_width (GdkScreen* screen);
// gint gdk_screen_get_width (::GdkScreen* screen);
// IGNORE; deprecated

// gint gdk_screen_get_width_mm (GdkScreen* screen);
// gint gdk_screen_get_width_mm (::GdkScreen* screen);
// IGNORE; deprecated

// GList* gdk_screen_get_window_stack (GdkScreen* screen);
// ::GList* gdk_screen_get_window_stack (::GdkScreen* screen);
GI_INLINE_DECL std::vector<Gdk::Window> get_window_stack () noexcept;

// gboolean gdk_screen_is_composited (GdkScreen* screen);
// gboolean gdk_screen_is_composited (::GdkScreen* screen);
GI_INLINE_DECL bool is_composited () noexcept;

// GList* gdk_screen_list_visuals (GdkScreen* screen);
// ::GList* gdk_screen_list_visuals (::GdkScreen* screen);
GI_INLINE_DECL std::vector<Gdk::Visual> list_visuals () noexcept;

// gchar* gdk_screen_make_display_name (GdkScreen* screen);
// char* gdk_screen_make_display_name (::GdkScreen* screen);
// IGNORE; deprecated

// void gdk_screen_set_font_options (GdkScreen* screen, const cairo_font_options_t* options);
// void gdk_screen_set_font_options (::GdkScreen* screen, const ::cairo_font_options_t* options);
GI_INLINE_DECL void set_font_options (const cairo::FontOptions & options) noexcept;
GI_INLINE_DECL void set_font_options () noexcept;

// void gdk_screen_set_resolution (GdkScreen* screen, gdouble dpi);
// void gdk_screen_set_resolution (::GdkScreen* screen, gdouble dpi);
GI_INLINE_DECL void set_resolution (gdouble dpi) noexcept;

gi::property_proxy<gpointer, base::ScreenBase> property_font_options()
{ return gi::property_proxy<gpointer, base::ScreenBase> (*this, "font-options"); }
const gi::property_proxy<gpointer, base::ScreenBase> property_font_options() const
{ return gi::property_proxy<gpointer, base::ScreenBase> (*this, "font-options"); }

gi::property_proxy<gdouble, base::ScreenBase> property_resolution()
{ return gi::property_proxy<gdouble, base::ScreenBase> (*this, "resolution"); }
const gi::property_proxy<gdouble, base::ScreenBase> property_resolution() const
{ return gi::property_proxy<gdouble, base::ScreenBase> (*this, "resolution"); }

// signal composited-changed
gi::signal_proxy<void(Gdk::Screen)> signal_composited_changed()
{ return gi::signal_proxy<void(Gdk::Screen)> (*this, "composited-changed"); }

// signal monitors-changed
gi::signal_proxy<void(Gdk::Screen)> signal_monitors_changed()
{ return gi::signal_proxy<void(Gdk::Screen)> (*this, "monitors-changed"); }

// signal size-changed
gi::signal_proxy<void(Gdk::Screen)> signal_size_changed()
{ return gi::signal_proxy<void(Gdk::Screen)> (*this, "size-changed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/screen_extra_def.hpp>)
#include <gdk/screen_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/screen_extra.hpp>)
#include <gdk/screen_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Screen : public GI_GDK_SCREEN_BASE
{ typedef GI_GDK_SCREEN_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkScreen>
{ typedef Gdk::Screen type; }; 

} // namespace repository

} // namespace gi

#endif
