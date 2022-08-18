// AUTO-GENERATED

#ifndef _GI_GDK_CURSOR_HPP_
#define _GI_GDK_CURSOR_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Display;

class Cursor;

namespace base {


#define GI_GDK_CURSOR_BASE base::CursorBase
class CursorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkCursor BaseObjectType;

CursorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_cursor_get_type(); } 

// GdkCursor* gdk_cursor_new (GdkCursorType cursor_type);
// ::GdkCursor* gdk_cursor_new (::GdkCursorType cursor_type);
// IGNORE; deprecated

// GdkCursor* gdk_cursor_new_for_display (GdkDisplay* display, GdkCursorType cursor_type);
// ::GdkCursor* gdk_cursor_new_for_display (::GdkDisplay* display, ::GdkCursorType cursor_type);
static GI_INLINE_DECL Gdk::Cursor new_for_display (Gdk::Display display, Gdk::CursorType cursor_type) noexcept;

// GdkCursor* gdk_cursor_new_from_name (GdkDisplay* display, const gchar* name);
// ::GdkCursor* gdk_cursor_new_from_name (::GdkDisplay* display, const char* name);
static GI_INLINE_DECL Gdk::Cursor new_from_name (Gdk::Display display, const std::string & name) noexcept;

// GdkCursor* gdk_cursor_new_from_pixbuf (GdkDisplay* display, GdkPixbuf* pixbuf, gint x, gint y);
// ::GdkCursor* gdk_cursor_new_from_pixbuf (::GdkDisplay* display, ::GdkPixbuf* pixbuf, gint x, gint y);
static GI_INLINE_DECL Gdk::Cursor new_from_pixbuf (Gdk::Display display, GdkPixbuf::Pixbuf pixbuf, gint x, gint y) noexcept;

// GdkCursor* gdk_cursor_new_from_surface (GdkDisplay* display, cairo_surface_t* surface, gdouble x, gdouble y);
// ::GdkCursor* gdk_cursor_new_from_surface (::GdkDisplay* display, ::cairo_surface_t* surface, gdouble x, gdouble y);
static GI_INLINE_DECL Gdk::Cursor new_from_surface (Gdk::Display display, cairo::Surface surface, gdouble x, gdouble y) noexcept;

// GdkCursorType gdk_cursor_get_cursor_type (GdkCursor* cursor);
// ::GdkCursorType gdk_cursor_get_cursor_type (::GdkCursor* cursor);
GI_INLINE_DECL Gdk::CursorType get_cursor_type () noexcept;

// GdkDisplay* gdk_cursor_get_display (GdkCursor* cursor);
// ::GdkDisplay* gdk_cursor_get_display (::GdkCursor* cursor);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GdkPixbuf* gdk_cursor_get_image (GdkCursor* cursor);
// ::GdkPixbuf* gdk_cursor_get_image (::GdkCursor* cursor);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_image () noexcept;

// cairo_surface_t* gdk_cursor_get_surface (GdkCursor* cursor, gdouble* x_hot, gdouble* y_hot);
// ::cairo_surface_t* gdk_cursor_get_surface (::GdkCursor* cursor, gdouble* x_hot, gdouble* y_hot);
GI_INLINE_DECL cairo::Surface get_surface (gdouble * x_hot = nullptr, gdouble * y_hot = nullptr) noexcept;
GI_INLINE_DECL std::tuple<cairo::Surface, gdouble, gdouble> get_surface () noexcept;

// GdkCursor* gdk_cursor_ref (GdkCursor* cursor);
// ::GdkCursor* gdk_cursor_ref (::GdkCursor* cursor);
// IGNORE; marked ignore

// void gdk_cursor_unref (GdkCursor* cursor);
// void gdk_cursor_unref (::GdkCursor* cursor);
// IGNORE; marked ignore

gi::property_proxy<Gdk::CursorType, base::CursorBase> property_cursor_type()
{ return gi::property_proxy<Gdk::CursorType, base::CursorBase> (*this, "cursor-type"); }
const gi::property_proxy<Gdk::CursorType, base::CursorBase> property_cursor_type() const
{ return gi::property_proxy<Gdk::CursorType, base::CursorBase> (*this, "cursor-type"); }

gi::property_proxy<Gdk::Display, base::CursorBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::CursorBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::CursorBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::CursorBase> (*this, "display"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/cursor_extra_def.hpp>)
#include <gdk/cursor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/cursor_extra.hpp>)
#include <gdk/cursor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Cursor : public GI_GDK_CURSOR_BASE
{ typedef GI_GDK_CURSOR_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkCursor>
{ typedef Gdk::Cursor type; }; 

} // namespace repository

} // namespace gi

#endif
