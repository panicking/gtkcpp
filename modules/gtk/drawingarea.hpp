// AUTO-GENERATED

#ifndef _GI_GTK_DRAWINGAREA_HPP_
#define _GI_GTK_DRAWINGAREA_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class DrawingArea;

namespace base {


#define GI_GTK_DRAWINGAREA_BASE base::DrawingAreaBase
class DrawingAreaBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkDrawingArea BaseObjectType;

DrawingAreaBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_drawing_area_get_type(); } 

// GtkWidget* gtk_drawing_area_new ();
// ::GtkDrawingArea* gtk_drawing_area_new ();
static GI_INLINE_DECL Gtk::DrawingArea new_ () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/drawingarea_extra_def.hpp>)
#include <gtk/drawingarea_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/drawingarea_extra.hpp>)
#include <gtk/drawingarea_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class DrawingArea : public GI_GTK_DRAWINGAREA_BASE
{ typedef GI_GTK_DRAWINGAREA_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkDrawingArea>
{ typedef Gtk::DrawingArea type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class DrawingAreaClassDef
{
typedef DrawingAreaClassDef self;
public:
typedef Gtk::DrawingArea instance_type;
typedef ::GtkDrawingAreaClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DrawingAreaClass: public detail::ClassTemplate<Gtk::impl::internal::DrawingAreaClassDef, Gtk::impl::internal::WidgetClass>
{
typedef DrawingAreaClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::DrawingAreaClassDef, Gtk::impl::internal::WidgetClass> super;

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

using DrawingAreaImpl = detail::ObjectImpl<DrawingArea, internal::DrawingAreaClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
