// AUTO-GENERATED

#ifndef _GI_GTK_VIEWPORT_HPP_
#define _GI_GTK_VIEWPORT_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Scrollable;

class Viewport;

namespace base {


#define GI_GTK_VIEWPORT_BASE base::ViewportBase
class ViewportBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkViewport BaseObjectType;

ViewportBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_viewport_get_type(); } 

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* gtk_viewport_new (GtkAdjustment* hadjustment, GtkAdjustment* vadjustment);
// ::GtkViewport* gtk_viewport_new (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
static GI_INLINE_DECL Gtk::Viewport new_ (Gtk::Adjustment hadjustment, Gtk::Adjustment vadjustment) noexcept;
static GI_INLINE_DECL Gtk::Viewport new_ () noexcept;

// GdkWindow* gtk_viewport_get_bin_window (GtkViewport* viewport);
// ::GdkWindow* gtk_viewport_get_bin_window (::GtkViewport* viewport);
GI_INLINE_DECL Gdk::Window get_bin_window () noexcept;

// GtkAdjustment* gtk_viewport_get_hadjustment (GtkViewport* viewport);
// ::GtkAdjustment* gtk_viewport_get_hadjustment (::GtkViewport* viewport);
// IGNORE; deprecated

// GtkShadowType gtk_viewport_get_shadow_type (GtkViewport* viewport);
// ::GtkShadowType gtk_viewport_get_shadow_type (::GtkViewport* viewport);
GI_INLINE_DECL Gtk::ShadowType get_shadow_type () noexcept;

// GtkAdjustment* gtk_viewport_get_vadjustment (GtkViewport* viewport);
// ::GtkAdjustment* gtk_viewport_get_vadjustment (::GtkViewport* viewport);
// IGNORE; deprecated

// GdkWindow* gtk_viewport_get_view_window (GtkViewport* viewport);
// ::GdkWindow* gtk_viewport_get_view_window (::GtkViewport* viewport);
GI_INLINE_DECL Gdk::Window get_view_window () noexcept;

// void gtk_viewport_set_hadjustment (GtkViewport* viewport, GtkAdjustment* adjustment);
// void gtk_viewport_set_hadjustment (::GtkViewport* viewport, ::GtkAdjustment* adjustment);
// IGNORE; deprecated

// void gtk_viewport_set_shadow_type (GtkViewport* viewport, GtkShadowType type);
// void gtk_viewport_set_shadow_type (::GtkViewport* viewport, ::GtkShadowType type);
GI_INLINE_DECL void set_shadow_type (Gtk::ShadowType type) noexcept;

// void gtk_viewport_set_vadjustment (GtkViewport* viewport, GtkAdjustment* adjustment);
// void gtk_viewport_set_vadjustment (::GtkViewport* viewport, ::GtkAdjustment* adjustment);
// IGNORE; deprecated

gi::property_proxy<Gtk::ShadowType, base::ViewportBase> property_shadow_type()
{ return gi::property_proxy<Gtk::ShadowType, base::ViewportBase> (*this, "shadow-type"); }
const gi::property_proxy<Gtk::ShadowType, base::ViewportBase> property_shadow_type() const
{ return gi::property_proxy<Gtk::ShadowType, base::ViewportBase> (*this, "shadow-type"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/viewport_extra_def.hpp>)
#include <gtk/viewport_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/viewport_extra.hpp>)
#include <gtk/viewport_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Viewport : public GI_GTK_VIEWPORT_BASE
{ typedef GI_GTK_VIEWPORT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkViewport>
{ typedef Gtk::Viewport type; }; 

} // namespace repository

} // namespace gi

#include "scrollable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ViewportClassDef
{
typedef ViewportClassDef self;
public:
typedef Gtk::Viewport instance_type;
typedef ::GtkViewportClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ViewportClass: public detail::ClassTemplate<Gtk::impl::internal::ViewportClassDef, Gtk::impl::internal::BinClass, Gtk::impl::internal::ScrollableInterfaceClassImpl>
{
typedef ViewportClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ViewportClassDef, Gtk::impl::internal::BinClass, Gtk::impl::internal::ScrollableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ScrollableInterfaceClassImpl GtkScrollableInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ViewportImpl = detail::ObjectImpl<Viewport, internal::ViewportClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
