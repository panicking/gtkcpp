// AUTO-GENERATED

#ifndef _GI_GTK_INVISIBLE_HPP_
#define _GI_GTK_INVISIBLE_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Invisible;

namespace base {


#define GI_GTK_INVISIBLE_BASE base::InvisibleBase
class InvisibleBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkInvisible BaseObjectType;

InvisibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_invisible_get_type(); } 

// GtkWidget* gtk_invisible_new ();
// ::GtkInvisible* gtk_invisible_new ();
static GI_INLINE_DECL Gtk::Invisible new_ () noexcept;

// GtkWidget* gtk_invisible_new_for_screen (GdkScreen* screen);
// ::GtkInvisible* gtk_invisible_new_for_screen (::GdkScreen* screen);
static GI_INLINE_DECL Gtk::Invisible new_for_screen (Gdk::Screen screen) noexcept;

// GdkScreen* gtk_invisible_get_screen (GtkInvisible* invisible);
// ::GdkScreen* gtk_invisible_get_screen (::GtkInvisible* invisible);
GI_INLINE_DECL Gdk::Screen get_screen () noexcept;

// void gtk_invisible_set_screen (GtkInvisible* invisible, GdkScreen* screen);
// void gtk_invisible_set_screen (::GtkInvisible* invisible, ::GdkScreen* screen);
GI_INLINE_DECL void set_screen (Gdk::Screen screen) noexcept;

gi::property_proxy<Gdk::Screen, base::InvisibleBase> property_screen()
{ return gi::property_proxy<Gdk::Screen, base::InvisibleBase> (*this, "screen"); }
const gi::property_proxy<Gdk::Screen, base::InvisibleBase> property_screen() const
{ return gi::property_proxy<Gdk::Screen, base::InvisibleBase> (*this, "screen"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/invisible_extra_def.hpp>)
#include <gtk/invisible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/invisible_extra.hpp>)
#include <gtk/invisible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Invisible : public GI_GTK_INVISIBLE_BASE
{ typedef GI_GTK_INVISIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkInvisible>
{ typedef Gtk::Invisible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class InvisibleClassDef
{
typedef InvisibleClassDef self;
public:
typedef Gtk::Invisible instance_type;
typedef ::GtkInvisibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class InvisibleClass: public detail::ClassTemplate<Gtk::impl::internal::InvisibleClassDef, Gtk::impl::internal::WidgetClass>
{
typedef InvisibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::InvisibleClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using InvisibleImpl = detail::ObjectImpl<Invisible, internal::InvisibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
