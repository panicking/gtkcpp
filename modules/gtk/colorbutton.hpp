// AUTO-GENERATED

#ifndef _GI_GTK_COLORBUTTON_HPP_
#define _GI_GTK_COLORBUTTON_HPP_

#include "button.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ColorChooser;

class ColorButton;

namespace base {


#define GI_GTK_COLORBUTTON_BASE base::ColorButtonBase
class ColorButtonBase : public Gtk::Button
{
typedef Gtk::Button super_type;
public:
typedef ::GtkColorButton BaseObjectType;

ColorButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_color_button_get_type(); } 

GI_INLINE_DECL Gtk::ColorChooser interface_ (gi::interface_tag<Gtk::ColorChooser>);

GI_INLINE_DECL operator Gtk::ColorChooser ();

// GtkWidget* gtk_color_button_new ();
// ::GtkColorButton* gtk_color_button_new ();
static GI_INLINE_DECL Gtk::ColorButton new_ () noexcept;

// GtkWidget* gtk_color_button_new_with_color (const GdkColor* color);
// ::GtkColorButton* gtk_color_button_new_with_color (const  color);
// IGNORE; deprecated

// GtkWidget* gtk_color_button_new_with_rgba (const GdkRGBA* rgba);
// ::GtkColorButton* gtk_color_button_new_with_rgba (const ::GdkRGBA* rgba);
static GI_INLINE_DECL Gtk::ColorButton new_with_rgba (const Gdk::RGBA & rgba) noexcept;

// guint16 gtk_color_button_get_alpha (GtkColorButton* button);
// guint16 gtk_color_button_get_alpha (::GtkColorButton* button);
// IGNORE; deprecated

// void gtk_color_button_get_color (GtkColorButton* button, GdkColor* color);
// void gtk_color_button_get_color (::GtkColorButton* button,  color);
// IGNORE; deprecated

// void gtk_color_button_get_rgba (GtkColorButton* button, GdkRGBA* rgba);
// void gtk_color_button_get_rgba (::GtkColorButton* button, ::GdkRGBA* rgba);
// IGNORE; deprecated

// const gchar* gtk_color_button_get_title (GtkColorButton* button);
// const char* gtk_color_button_get_title (::GtkColorButton* button);
GI_INLINE_DECL std::string get_title () noexcept;

// gboolean gtk_color_button_get_use_alpha (GtkColorButton* button);
// gboolean gtk_color_button_get_use_alpha (::GtkColorButton* button);
// IGNORE; deprecated

// void gtk_color_button_set_alpha (GtkColorButton* button, guint16 alpha);
// void gtk_color_button_set_alpha (::GtkColorButton* button, guint16 alpha);
// IGNORE; deprecated

// void gtk_color_button_set_color (GtkColorButton* button, const GdkColor* color);
// void gtk_color_button_set_color (::GtkColorButton* button, const  color);
// IGNORE; deprecated

// void gtk_color_button_set_rgba (GtkColorButton* button, const GdkRGBA* rgba);
// void gtk_color_button_set_rgba (::GtkColorButton* button, const ::GdkRGBA* rgba);
// IGNORE; deprecated

// void gtk_color_button_set_title (GtkColorButton* button, const gchar* title);
// void gtk_color_button_set_title (::GtkColorButton* button, const char* title);
GI_INLINE_DECL void set_title (const std::string & title) noexcept;

// void gtk_color_button_set_use_alpha (GtkColorButton* button, gboolean use_alpha);
// void gtk_color_button_set_use_alpha (::GtkColorButton* button, gboolean use_alpha);
// IGNORE; deprecated

gi::property_proxy<guint, base::ColorButtonBase> property_alpha()
{ return gi::property_proxy<guint, base::ColorButtonBase> (*this, "alpha"); }
const gi::property_proxy<guint, base::ColorButtonBase> property_alpha() const
{ return gi::property_proxy<guint, base::ColorButtonBase> (*this, "alpha"); }

gi::property_proxy<Gdk::RGBA, base::ColorButtonBase> property_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::ColorButtonBase> (*this, "rgba"); }
const gi::property_proxy<Gdk::RGBA, base::ColorButtonBase> property_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::ColorButtonBase> (*this, "rgba"); }

gi::property_proxy<bool, base::ColorButtonBase> property_show_editor()
{ return gi::property_proxy<bool, base::ColorButtonBase> (*this, "show-editor"); }
const gi::property_proxy<bool, base::ColorButtonBase> property_show_editor() const
{ return gi::property_proxy<bool, base::ColorButtonBase> (*this, "show-editor"); }

gi::property_proxy<std::string, base::ColorButtonBase> property_title()
{ return gi::property_proxy<std::string, base::ColorButtonBase> (*this, "title"); }
const gi::property_proxy<std::string, base::ColorButtonBase> property_title() const
{ return gi::property_proxy<std::string, base::ColorButtonBase> (*this, "title"); }

gi::property_proxy<bool, base::ColorButtonBase> property_use_alpha()
{ return gi::property_proxy<bool, base::ColorButtonBase> (*this, "use-alpha"); }
const gi::property_proxy<bool, base::ColorButtonBase> property_use_alpha() const
{ return gi::property_proxy<bool, base::ColorButtonBase> (*this, "use-alpha"); }

// signal color-set
gi::signal_proxy<void(Gtk::ColorButton)> signal_color_set()
{ return gi::signal_proxy<void(Gtk::ColorButton)> (*this, "color-set"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorbutton_extra_def.hpp>)
#include <gtk/colorbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorbutton_extra.hpp>)
#include <gtk/colorbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColorButton : public GI_GTK_COLORBUTTON_BASE
{ typedef GI_GTK_COLORBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColorButton>
{ typedef Gtk::ColorButton type; }; 

} // namespace repository

} // namespace gi

#include "colorchooser.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ColorButtonClassDef
{
typedef ColorButtonClassDef self;
public:
typedef Gtk::ColorButton instance_type;
typedef ::GtkColorButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ColorButton::color_set (GtkColorButton* cp);
// void ColorButton::color_set (::GtkColorButton* cp);
virtual void color_set_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ColorButtonClass: public detail::ClassTemplate<Gtk::impl::internal::ColorButtonClassDef, Gtk::impl::internal::ButtonClass, Gtk::impl::internal::ColorChooserInterfaceClassImpl>
{
typedef ColorButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ColorButtonClassDef, Gtk::impl::internal::ButtonClass, Gtk::impl::internal::ColorChooserInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ColorChooserInterfaceClassImpl GtkColorChooserInterface_type;


// void ColorButton::color_set (GtkColorButton* cp);
// void ColorButton::color_set (::GtkColorButton* cp);
GI_INLINE_DECL void color_set_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ColorButtonImpl = detail::ObjectImpl<ColorButton, internal::ColorButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
