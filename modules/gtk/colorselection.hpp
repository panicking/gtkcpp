// AUTO-GENERATED

#ifndef _GI_GTK_COLORSELECTION_HPP_
#define _GI_GTK_COLORSELECTION_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ColorSelection;

namespace base {


#define GI_GTK_COLORSELECTION_BASE base::ColorSelectionBase
class ColorSelectionBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkColorSelection BaseObjectType;

ColorSelectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_color_selection_get_type(); } 

// GtkWidget* gtk_color_selection_new ();
// ::GtkColorSelection* gtk_color_selection_new ();
static GI_INLINE_DECL Gtk::ColorSelection new_ () noexcept;

// gboolean gtk_color_selection_palette_from_string (const gchar* str, gint* n_colors);
// gboolean gtk_color_selection_palette_from_string (const char* str, gint* n_colors);
// SKIP; container element not supported

// gchar* gtk_color_selection_palette_to_string (gint n_colors);
// char* gtk_color_selection_palette_to_string (gint n_colors);
// SKIP; container element not supported

// FAILURE on gtk_color_selection_set_change_palette_with_screen_hook; No such node (<xmlattr>.transfer-ownership)
// guint16 gtk_color_selection_get_current_alpha (GtkColorSelection* colorsel);
// guint16 gtk_color_selection_get_current_alpha (::GtkColorSelection* colorsel);
GI_INLINE_DECL guint16 get_current_alpha () noexcept;

// void gtk_color_selection_get_current_color (GtkColorSelection* colorsel, GdkColor* color);
// void gtk_color_selection_get_current_color (::GtkColorSelection* colorsel,  color);
// IGNORE; deprecated

// void gtk_color_selection_get_current_rgba (GtkColorSelection* colorsel, GdkRGBA* rgba);
// void gtk_color_selection_get_current_rgba (::GtkColorSelection* colorsel, ::GdkRGBA* rgba);
GI_INLINE_DECL void get_current_rgba (Gdk::RGBA & rgba) noexcept;
GI_INLINE_DECL Gdk::RGBA get_current_rgba () noexcept;

// gboolean gtk_color_selection_get_has_opacity_control (GtkColorSelection* colorsel);
// gboolean gtk_color_selection_get_has_opacity_control (::GtkColorSelection* colorsel);
GI_INLINE_DECL bool get_has_opacity_control () noexcept;

// gboolean gtk_color_selection_get_has_palette (GtkColorSelection* colorsel);
// gboolean gtk_color_selection_get_has_palette (::GtkColorSelection* colorsel);
GI_INLINE_DECL bool get_has_palette () noexcept;

// guint16 gtk_color_selection_get_previous_alpha (GtkColorSelection* colorsel);
// guint16 gtk_color_selection_get_previous_alpha (::GtkColorSelection* colorsel);
GI_INLINE_DECL guint16 get_previous_alpha () noexcept;

// void gtk_color_selection_get_previous_color (GtkColorSelection* colorsel, GdkColor* color);
// void gtk_color_selection_get_previous_color (::GtkColorSelection* colorsel,  color);
// IGNORE; deprecated

// void gtk_color_selection_get_previous_rgba (GtkColorSelection* colorsel, GdkRGBA* rgba);
// void gtk_color_selection_get_previous_rgba (::GtkColorSelection* colorsel, ::GdkRGBA* rgba);
GI_INLINE_DECL void get_previous_rgba (Gdk::RGBA & rgba) noexcept;
GI_INLINE_DECL Gdk::RGBA get_previous_rgba () noexcept;

// gboolean gtk_color_selection_is_adjusting (GtkColorSelection* colorsel);
// gboolean gtk_color_selection_is_adjusting (::GtkColorSelection* colorsel);
GI_INLINE_DECL bool is_adjusting () noexcept;

// void gtk_color_selection_set_current_alpha (GtkColorSelection* colorsel, guint16 alpha);
// void gtk_color_selection_set_current_alpha (::GtkColorSelection* colorsel, guint16 alpha);
GI_INLINE_DECL void set_current_alpha (guint16 alpha) noexcept;

// void gtk_color_selection_set_current_color (GtkColorSelection* colorsel, const GdkColor* color);
// void gtk_color_selection_set_current_color (::GtkColorSelection* colorsel, const  color);
// IGNORE; deprecated

// void gtk_color_selection_set_current_rgba (GtkColorSelection* colorsel, const GdkRGBA* rgba);
// void gtk_color_selection_set_current_rgba (::GtkColorSelection* colorsel, const ::GdkRGBA* rgba);
GI_INLINE_DECL void set_current_rgba (const Gdk::RGBA & rgba) noexcept;

// void gtk_color_selection_set_has_opacity_control (GtkColorSelection* colorsel, gboolean has_opacity);
// void gtk_color_selection_set_has_opacity_control (::GtkColorSelection* colorsel, gboolean has_opacity);
GI_INLINE_DECL void set_has_opacity_control (gboolean has_opacity) noexcept;

// void gtk_color_selection_set_has_palette (GtkColorSelection* colorsel, gboolean has_palette);
// void gtk_color_selection_set_has_palette (::GtkColorSelection* colorsel, gboolean has_palette);
GI_INLINE_DECL void set_has_palette (gboolean has_palette) noexcept;

// void gtk_color_selection_set_previous_alpha (GtkColorSelection* colorsel, guint16 alpha);
// void gtk_color_selection_set_previous_alpha (::GtkColorSelection* colorsel, guint16 alpha);
GI_INLINE_DECL void set_previous_alpha (guint16 alpha) noexcept;

// void gtk_color_selection_set_previous_color (GtkColorSelection* colorsel, const GdkColor* color);
// void gtk_color_selection_set_previous_color (::GtkColorSelection* colorsel, const  color);
// IGNORE; deprecated

// void gtk_color_selection_set_previous_rgba (GtkColorSelection* colorsel, const GdkRGBA* rgba);
// void gtk_color_selection_set_previous_rgba (::GtkColorSelection* colorsel, const ::GdkRGBA* rgba);
GI_INLINE_DECL void set_previous_rgba (const Gdk::RGBA & rgba) noexcept;

gi::property_proxy<guint, base::ColorSelectionBase> property_current_alpha()
{ return gi::property_proxy<guint, base::ColorSelectionBase> (*this, "current-alpha"); }
const gi::property_proxy<guint, base::ColorSelectionBase> property_current_alpha() const
{ return gi::property_proxy<guint, base::ColorSelectionBase> (*this, "current-alpha"); }

gi::property_proxy<Gdk::RGBA, base::ColorSelectionBase> property_current_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::ColorSelectionBase> (*this, "current-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::ColorSelectionBase> property_current_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::ColorSelectionBase> (*this, "current-rgba"); }

gi::property_proxy<bool, base::ColorSelectionBase> property_has_opacity_control()
{ return gi::property_proxy<bool, base::ColorSelectionBase> (*this, "has-opacity-control"); }
const gi::property_proxy<bool, base::ColorSelectionBase> property_has_opacity_control() const
{ return gi::property_proxy<bool, base::ColorSelectionBase> (*this, "has-opacity-control"); }

gi::property_proxy<bool, base::ColorSelectionBase> property_has_palette()
{ return gi::property_proxy<bool, base::ColorSelectionBase> (*this, "has-palette"); }
const gi::property_proxy<bool, base::ColorSelectionBase> property_has_palette() const
{ return gi::property_proxy<bool, base::ColorSelectionBase> (*this, "has-palette"); }

// signal color-changed
gi::signal_proxy<void(Gtk::ColorSelection)> signal_color_changed()
{ return gi::signal_proxy<void(Gtk::ColorSelection)> (*this, "color-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorselection_extra_def.hpp>)
#include <gtk/colorselection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorselection_extra.hpp>)
#include <gtk/colorselection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColorSelection : public GI_GTK_COLORSELECTION_BASE
{ typedef GI_GTK_COLORSELECTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColorSelection>
{ typedef Gtk::ColorSelection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ColorSelectionClassDef
{
typedef ColorSelectionClassDef self;
public:
typedef Gtk::ColorSelection instance_type;
typedef ::GtkColorSelectionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ColorSelection::color_changed (GtkColorSelection* color_selection);
// void ColorSelection::color_changed (::GtkColorSelection* color_selection);
virtual void color_changed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ColorSelectionClass: public detail::ClassTemplate<Gtk::impl::internal::ColorSelectionClassDef, Gtk::impl::internal::BoxClass>
{
typedef ColorSelectionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ColorSelectionClassDef, Gtk::impl::internal::BoxClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ColorSelection::color_changed (GtkColorSelection* color_selection);
// void ColorSelection::color_changed (::GtkColorSelection* color_selection);
GI_INLINE_DECL void color_changed_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ColorSelectionImpl = detail::ObjectImpl<ColorSelection, internal::ColorSelectionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
