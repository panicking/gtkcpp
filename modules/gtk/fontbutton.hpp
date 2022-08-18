// AUTO-GENERATED

#ifndef _GI_GTK_FONTBUTTON_HPP_
#define _GI_GTK_FONTBUTTON_HPP_

#include "button.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class FontChooser;

class FontButton;

namespace base {


#define GI_GTK_FONTBUTTON_BASE base::FontButtonBase
class FontButtonBase : public Gtk::Button
{
typedef Gtk::Button super_type;
public:
typedef ::GtkFontButton BaseObjectType;

FontButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_font_button_get_type(); } 

GI_INLINE_DECL Gtk::FontChooser interface_ (gi::interface_tag<Gtk::FontChooser>);

GI_INLINE_DECL operator Gtk::FontChooser ();

// GtkWidget* gtk_font_button_new ();
// ::GtkFontButton* gtk_font_button_new ();
static GI_INLINE_DECL Gtk::FontButton new_ () noexcept;

// GtkWidget* gtk_font_button_new_with_font (const gchar* fontname);
// ::GtkFontButton* gtk_font_button_new_with_font (const char* fontname);
static GI_INLINE_DECL Gtk::FontButton new_with_font (const std::string & fontname) noexcept;

// const gchar* gtk_font_button_get_font_name (GtkFontButton* font_button);
// const char* gtk_font_button_get_font_name (::GtkFontButton* font_button);
// IGNORE; deprecated

// gboolean gtk_font_button_get_show_size (GtkFontButton* font_button);
// gboolean gtk_font_button_get_show_size (::GtkFontButton* font_button);
GI_INLINE_DECL bool get_show_size () noexcept;

// gboolean gtk_font_button_get_show_style (GtkFontButton* font_button);
// gboolean gtk_font_button_get_show_style (::GtkFontButton* font_button);
GI_INLINE_DECL bool get_show_style () noexcept;

// const gchar* gtk_font_button_get_title (GtkFontButton* font_button);
// const char* gtk_font_button_get_title (::GtkFontButton* font_button);
GI_INLINE_DECL std::string get_title () noexcept;

// gboolean gtk_font_button_get_use_font (GtkFontButton* font_button);
// gboolean gtk_font_button_get_use_font (::GtkFontButton* font_button);
GI_INLINE_DECL bool get_use_font () noexcept;

// gboolean gtk_font_button_get_use_size (GtkFontButton* font_button);
// gboolean gtk_font_button_get_use_size (::GtkFontButton* font_button);
GI_INLINE_DECL bool get_use_size () noexcept;

// gboolean gtk_font_button_set_font_name (GtkFontButton* font_button, const gchar* fontname);
// gboolean gtk_font_button_set_font_name (::GtkFontButton* font_button, const char* fontname);
// IGNORE; deprecated

// void gtk_font_button_set_show_size (GtkFontButton* font_button, gboolean show_size);
// void gtk_font_button_set_show_size (::GtkFontButton* font_button, gboolean show_size);
GI_INLINE_DECL void set_show_size (gboolean show_size) noexcept;

// void gtk_font_button_set_show_style (GtkFontButton* font_button, gboolean show_style);
// void gtk_font_button_set_show_style (::GtkFontButton* font_button, gboolean show_style);
GI_INLINE_DECL void set_show_style (gboolean show_style) noexcept;

// void gtk_font_button_set_title (GtkFontButton* font_button, const gchar* title);
// void gtk_font_button_set_title (::GtkFontButton* font_button, const char* title);
GI_INLINE_DECL void set_title (const std::string & title) noexcept;

// void gtk_font_button_set_use_font (GtkFontButton* font_button, gboolean use_font);
// void gtk_font_button_set_use_font (::GtkFontButton* font_button, gboolean use_font);
GI_INLINE_DECL void set_use_font (gboolean use_font) noexcept;

// void gtk_font_button_set_use_size (GtkFontButton* font_button, gboolean use_size);
// void gtk_font_button_set_use_size (::GtkFontButton* font_button, gboolean use_size);
GI_INLINE_DECL void set_use_size (gboolean use_size) noexcept;

gi::property_proxy<std::string, base::FontButtonBase> property_font_name()
{ return gi::property_proxy<std::string, base::FontButtonBase> (*this, "font-name"); }
const gi::property_proxy<std::string, base::FontButtonBase> property_font_name() const
{ return gi::property_proxy<std::string, base::FontButtonBase> (*this, "font-name"); }

gi::property_proxy<bool, base::FontButtonBase> property_show_size()
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "show-size"); }
const gi::property_proxy<bool, base::FontButtonBase> property_show_size() const
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "show-size"); }

gi::property_proxy<bool, base::FontButtonBase> property_show_style()
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "show-style"); }
const gi::property_proxy<bool, base::FontButtonBase> property_show_style() const
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "show-style"); }

gi::property_proxy<std::string, base::FontButtonBase> property_title()
{ return gi::property_proxy<std::string, base::FontButtonBase> (*this, "title"); }
const gi::property_proxy<std::string, base::FontButtonBase> property_title() const
{ return gi::property_proxy<std::string, base::FontButtonBase> (*this, "title"); }

gi::property_proxy<bool, base::FontButtonBase> property_use_font()
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "use-font"); }
const gi::property_proxy<bool, base::FontButtonBase> property_use_font() const
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "use-font"); }

gi::property_proxy<bool, base::FontButtonBase> property_use_size()
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "use-size"); }
const gi::property_proxy<bool, base::FontButtonBase> property_use_size() const
{ return gi::property_proxy<bool, base::FontButtonBase> (*this, "use-size"); }

// signal font-set
gi::signal_proxy<void(Gtk::FontButton)> signal_font_set()
{ return gi::signal_proxy<void(Gtk::FontButton)> (*this, "font-set"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontbutton_extra_def.hpp>)
#include <gtk/fontbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontbutton_extra.hpp>)
#include <gtk/fontbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FontButton : public GI_GTK_FONTBUTTON_BASE
{ typedef GI_GTK_FONTBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFontButton>
{ typedef Gtk::FontButton type; }; 

} // namespace repository

} // namespace gi

#include "fontchooser.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FontButtonClassDef
{
typedef FontButtonClassDef self;
public:
typedef Gtk::FontButton instance_type;
typedef ::GtkFontButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void FontButton::font_set (GtkFontButton* gfp);
// void FontButton::font_set (::GtkFontButton* gfp);
virtual void font_set_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FontButtonClass: public detail::ClassTemplate<Gtk::impl::internal::FontButtonClassDef, Gtk::impl::internal::ButtonClass, Gtk::impl::internal::FontChooserIfaceClassImpl>
{
typedef FontButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FontButtonClassDef, Gtk::impl::internal::ButtonClass, Gtk::impl::internal::FontChooserIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::FontChooserIfaceClassImpl GtkFontChooserIface_type;


// void FontButton::font_set (GtkFontButton* gfp);
// void FontButton::font_set (::GtkFontButton* gfp);
GI_INLINE_DECL void font_set_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using FontButtonImpl = detail::ObjectImpl<FontButton, internal::FontButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
