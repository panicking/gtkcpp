// AUTO-GENERATED

#ifndef _GI_GDK_DRAWINGCONTEXT_HPP_
#define _GI_GDK_DRAWINGCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Window;

class DrawingContext;

namespace base {


#define GI_GDK_DRAWINGCONTEXT_BASE base::DrawingContextBase
class DrawingContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDrawingContext BaseObjectType;

DrawingContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_drawing_context_get_type(); } 

// cairo_t* gdk_drawing_context_get_cairo_context (GdkDrawingContext* context);
// ::cairo_t* gdk_drawing_context_get_cairo_context (::GdkDrawingContext* context);
GI_INLINE_DECL cairo::Context get_cairo_context () noexcept;

// cairo_region_t* gdk_drawing_context_get_clip (GdkDrawingContext* context);
// ::cairo_region_t* gdk_drawing_context_get_clip (::GdkDrawingContext* context);
GI_INLINE_DECL cairo::Region get_clip () noexcept;

// GdkWindow* gdk_drawing_context_get_window (GdkDrawingContext* context);
// ::GdkWindow* gdk_drawing_context_get_window (::GdkDrawingContext* context);
GI_INLINE_DECL Gdk::Window get_window () noexcept;

// gboolean gdk_drawing_context_is_valid (GdkDrawingContext* context);
// gboolean gdk_drawing_context_is_valid (::GdkDrawingContext* context);
GI_INLINE_DECL bool is_valid () noexcept;

gi::property_proxy<cairo::Region, base::DrawingContextBase> property_clip()
{ return gi::property_proxy<cairo::Region, base::DrawingContextBase> (*this, "clip"); }
const gi::property_proxy<cairo::Region, base::DrawingContextBase> property_clip() const
{ return gi::property_proxy<cairo::Region, base::DrawingContextBase> (*this, "clip"); }

gi::property_proxy<Gdk::Window, base::DrawingContextBase> property_window()
{ return gi::property_proxy<Gdk::Window, base::DrawingContextBase> (*this, "window"); }
const gi::property_proxy<Gdk::Window, base::DrawingContextBase> property_window() const
{ return gi::property_proxy<Gdk::Window, base::DrawingContextBase> (*this, "window"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/drawingcontext_extra_def.hpp>)
#include <gdk/drawingcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/drawingcontext_extra.hpp>)
#include <gdk/drawingcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class DrawingContext : public GI_GDK_DRAWINGCONTEXT_BASE
{ typedef GI_GDK_DRAWINGCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDrawingContext>
{ typedef Gdk::DrawingContext type; }; 

} // namespace repository

} // namespace gi

#endif
