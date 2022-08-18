// AUTO-GENERATED

#ifndef _GI_GTK_OFFSCREENWINDOW_HPP_
#define _GI_GTK_OFFSCREENWINDOW_HPP_

#include "window.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class OffscreenWindow;

namespace base {


#define GI_GTK_OFFSCREENWINDOW_BASE base::OffscreenWindowBase
class OffscreenWindowBase : public Gtk::Window
{
typedef Gtk::Window super_type;
public:
typedef ::GtkOffscreenWindow BaseObjectType;

OffscreenWindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_offscreen_window_get_type(); } 

// GtkWidget* gtk_offscreen_window_new ();
// ::GtkOffscreenWindow* gtk_offscreen_window_new ();
static GI_INLINE_DECL Gtk::OffscreenWindow new_ () noexcept;

// GdkPixbuf* gtk_offscreen_window_get_pixbuf (GtkOffscreenWindow* offscreen);
// ::GdkPixbuf* gtk_offscreen_window_get_pixbuf (::GtkOffscreenWindow* offscreen);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_pixbuf () noexcept;

// cairo_surface_t* gtk_offscreen_window_get_surface (GtkOffscreenWindow* offscreen);
// ::cairo_surface_t* gtk_offscreen_window_get_surface (::GtkOffscreenWindow* offscreen);
GI_INLINE_DECL cairo::Surface get_surface () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/offscreenwindow_extra_def.hpp>)
#include <gtk/offscreenwindow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/offscreenwindow_extra.hpp>)
#include <gtk/offscreenwindow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class OffscreenWindow : public GI_GTK_OFFSCREENWINDOW_BASE
{ typedef GI_GTK_OFFSCREENWINDOW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkOffscreenWindow>
{ typedef Gtk::OffscreenWindow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class OffscreenWindowClassDef
{
typedef OffscreenWindowClassDef self;
public:
typedef Gtk::OffscreenWindow instance_type;
typedef ::GtkOffscreenWindowClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class OffscreenWindowClass: public detail::ClassTemplate<Gtk::impl::internal::OffscreenWindowClassDef, Gtk::impl::internal::WindowClass>
{
typedef OffscreenWindowClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::OffscreenWindowClassDef, Gtk::impl::internal::WindowClass> super;

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

using OffscreenWindowImpl = detail::ObjectImpl<OffscreenWindow, internal::OffscreenWindowClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
