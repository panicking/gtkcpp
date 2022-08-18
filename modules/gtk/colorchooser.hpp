// AUTO-GENERATED

#ifndef _GI_GTK_COLORCHOOSER_HPP_
#define _GI_GTK_COLORCHOOSER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class ColorChooser;

namespace base {


#define GI_GTK_COLORCHOOSER_BASE base::ColorChooserBase
class ColorChooserBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkColorChooser BaseObjectType;

ColorChooserBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_color_chooser_get_type(); } 

// void gtk_color_chooser_add_palette (GtkColorChooser* chooser, GtkOrientation orientation, gint colors_per_line, gint n_colors, GdkRGBA* colors);
// void gtk_color_chooser_add_palette (::GtkColorChooser* chooser, ::GtkOrientation orientation, gint colors_per_line, gint n_colors, ::GdkRGBA** colors);
// SKIP; inconsistent in colors pointer depth (1 vs 2)

// void gtk_color_chooser_get_rgba (GtkColorChooser* chooser, GdkRGBA* color);
// void gtk_color_chooser_get_rgba (::GtkColorChooser* chooser, ::GdkRGBA* color);
GI_INLINE_DECL void get_rgba (Gdk::RGBA & color) noexcept;
GI_INLINE_DECL Gdk::RGBA get_rgba () noexcept;

// gboolean gtk_color_chooser_get_use_alpha (GtkColorChooser* chooser);
// gboolean gtk_color_chooser_get_use_alpha (::GtkColorChooser* chooser);
GI_INLINE_DECL bool get_use_alpha () noexcept;

// void gtk_color_chooser_set_rgba (GtkColorChooser* chooser, const GdkRGBA* color);
// void gtk_color_chooser_set_rgba (::GtkColorChooser* chooser, const ::GdkRGBA* color);
GI_INLINE_DECL void set_rgba (const Gdk::RGBA & color) noexcept;

// void gtk_color_chooser_set_use_alpha (GtkColorChooser* chooser, gboolean use_alpha);
// void gtk_color_chooser_set_use_alpha (::GtkColorChooser* chooser, gboolean use_alpha);
GI_INLINE_DECL void set_use_alpha (gboolean use_alpha) noexcept;

gi::property_proxy<Gdk::RGBA, base::ColorChooserBase> property_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::ColorChooserBase> (*this, "rgba"); }
const gi::property_proxy<Gdk::RGBA, base::ColorChooserBase> property_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::ColorChooserBase> (*this, "rgba"); }

gi::property_proxy<bool, base::ColorChooserBase> property_use_alpha()
{ return gi::property_proxy<bool, base::ColorChooserBase> (*this, "use-alpha"); }
const gi::property_proxy<bool, base::ColorChooserBase> property_use_alpha() const
{ return gi::property_proxy<bool, base::ColorChooserBase> (*this, "use-alpha"); }

// signal color-activated
gi::signal_proxy<void(Gtk::ColorChooser, Gdk::RGBA color)> signal_color_activated()
{ return gi::signal_proxy<void(Gtk::ColorChooser, Gdk::RGBA color)> (*this, "color-activated"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorchooser_extra_def.hpp>)
#include <gtk/colorchooser_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorchooser_extra.hpp>)
#include <gtk/colorchooser_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColorChooser : public GI_GTK_COLORCHOOSER_BASE
{ typedef GI_GTK_COLORCHOOSER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColorChooser>
{ typedef Gtk::ColorChooser type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ColorChooserInterfaceDef
{
typedef ColorChooserInterfaceDef self;
public:
typedef Gtk::ColorChooser instance_type;
typedef ::GtkColorChooserInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void ColorChooser::add_palette (GtkColorChooser* chooser, GtkOrientation orientation, gint colors_per_line, gint n_colors, GdkRGBA* colors);
// void ColorChooser::add_palette (::GtkColorChooser* chooser, ::GtkOrientation orientation, gint colors_per_line, gint n_colors, ::GdkRGBA** colors);
// SKIP; virtual-method container parameter not supported

// void ColorChooser::color_activated (GtkColorChooser* chooser, const GdkRGBA* color);
// void ColorChooser::color_activated (::GtkColorChooser* chooser, const ::GdkRGBA* color);
virtual void color_activated_ (const Gdk::RGBA & color) noexcept = 0;

// void ColorChooser::get_rgba (GtkColorChooser* chooser, GdkRGBA* color);
// void ColorChooser::get_rgba (::GtkColorChooser* chooser, ::GdkRGBA* color);
// SKIP; virtual-method out parameter not supported

// void ColorChooser::set_rgba (GtkColorChooser* chooser, const GdkRGBA* color);
// void ColorChooser::set_rgba (::GtkColorChooser* chooser, const ::GdkRGBA* color);
virtual void set_rgba_ (const Gdk::RGBA & color) noexcept = 0;


};

using ColorChooserImpl = detail::InterfaceImpl<ColorChooserInterfaceDef>;

class ColorChooserInterfaceClassImpl: public detail::InterfaceClassImpl<ColorChooserImpl>
{
typedef ColorChooserInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ColorChooserImpl> super;

protected:
using super::super;

// void ColorChooser::add_palette (GtkColorChooser* chooser, GtkOrientation orientation, gint colors_per_line, gint n_colors, GdkRGBA* colors);
// void ColorChooser::add_palette (::GtkColorChooser* chooser, ::GtkOrientation orientation, gint colors_per_line, gint n_colors, ::GdkRGBA** colors);
// SKIP; virtual-method container parameter not supported

// void ColorChooser::color_activated (GtkColorChooser* chooser, const GdkRGBA* color);
// void ColorChooser::color_activated (::GtkColorChooser* chooser, const ::GdkRGBA* color);
GI_INLINE_DECL void color_activated_ (const Gdk::RGBA & color) noexcept override;

// void ColorChooser::get_rgba (GtkColorChooser* chooser, GdkRGBA* color);
// void ColorChooser::get_rgba (::GtkColorChooser* chooser, ::GdkRGBA* color);
// SKIP; virtual-method out parameter not supported

// void ColorChooser::set_rgba (GtkColorChooser* chooser, const GdkRGBA* color);
// void ColorChooser::set_rgba (::GtkColorChooser* chooser, const ::GdkRGBA* color);
GI_INLINE_DECL void set_rgba_ (const Gdk::RGBA & color) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
