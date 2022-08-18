// AUTO-GENERATED

#ifndef _GI_GTK_FONTCHOOSERWIDGET_HPP_
#define _GI_GTK_FONTCHOOSERWIDGET_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class FontChooser;

class FontChooserWidget;

namespace base {


#define GI_GTK_FONTCHOOSERWIDGET_BASE base::FontChooserWidgetBase
class FontChooserWidgetBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkFontChooserWidget BaseObjectType;

FontChooserWidgetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_font_chooser_widget_get_type(); } 

GI_INLINE_DECL Gtk::FontChooser interface_ (gi::interface_tag<Gtk::FontChooser>);

GI_INLINE_DECL operator Gtk::FontChooser ();

// GtkWidget* gtk_font_chooser_widget_new ();
// ::GtkFontChooserWidget* gtk_font_chooser_widget_new ();
static GI_INLINE_DECL Gtk::FontChooserWidget new_ () noexcept;

gi::property_proxy<Gio::Action, base::FontChooserWidgetBase> property_tweak_action()
{ return gi::property_proxy<Gio::Action, base::FontChooserWidgetBase> (*this, "tweak-action"); }
const gi::property_proxy<Gio::Action, base::FontChooserWidgetBase> property_tweak_action() const
{ return gi::property_proxy<Gio::Action, base::FontChooserWidgetBase> (*this, "tweak-action"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontchooserwidget_extra_def.hpp>)
#include <gtk/fontchooserwidget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontchooserwidget_extra.hpp>)
#include <gtk/fontchooserwidget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FontChooserWidget : public GI_GTK_FONTCHOOSERWIDGET_BASE
{ typedef GI_GTK_FONTCHOOSERWIDGET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFontChooserWidget>
{ typedef Gtk::FontChooserWidget type; }; 

} // namespace repository

} // namespace gi

#include "fontchooser.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FontChooserWidgetClassDef
{
typedef FontChooserWidgetClassDef self;
public:
typedef Gtk::FontChooserWidget instance_type;
typedef ::GtkFontChooserWidgetClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FontChooserWidgetClass: public detail::ClassTemplate<Gtk::impl::internal::FontChooserWidgetClassDef, Gtk::impl::internal::BoxClass, Gtk::impl::internal::FontChooserIfaceClassImpl>
{
typedef FontChooserWidgetClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FontChooserWidgetClassDef, Gtk::impl::internal::BoxClass, Gtk::impl::internal::FontChooserIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::FontChooserIfaceClassImpl GtkFontChooserIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using FontChooserWidgetImpl = detail::ObjectImpl<FontChooserWidget, internal::FontChooserWidgetClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
