// AUTO-GENERATED

#ifndef _GI_GTK_GESTUREDRAG_HPP_
#define _GI_GTK_GESTUREDRAG_HPP_

#include "gesturesingle.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class GestureDrag;

namespace base {


#define GI_GTK_GESTUREDRAG_BASE base::GestureDragBase
class GestureDragBase : public Gtk::GestureSingle
{
typedef Gtk::GestureSingle super_type;
public:
typedef ::GtkGestureDrag BaseObjectType;

GestureDragBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_gesture_drag_get_type(); } 

// GtkGesture* gtk_gesture_drag_new (GtkWidget* widget);
// ::GtkGestureDrag* gtk_gesture_drag_new (::GtkWidget* widget);
static GI_INLINE_DECL Gtk::GestureDrag new_ (Gtk::Widget widget) noexcept;

// gboolean gtk_gesture_drag_get_offset (GtkGestureDrag* gesture, gdouble* x, gdouble* y);
// gboolean gtk_gesture_drag_get_offset (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
GI_INLINE_DECL bool get_offset (gdouble & x, gdouble & y) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble> get_offset () noexcept;

// gboolean gtk_gesture_drag_get_start_point (GtkGestureDrag* gesture, gdouble* x, gdouble* y);
// gboolean gtk_gesture_drag_get_start_point (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
GI_INLINE_DECL bool get_start_point (gdouble & x, gdouble & y) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, gdouble> get_start_point () noexcept;

// signal drag-begin
gi::signal_proxy<void(Gtk::GestureDrag, gdouble start_x, gdouble start_y)> signal_drag_begin()
{ return gi::signal_proxy<void(Gtk::GestureDrag, gdouble start_x, gdouble start_y)> (*this, "drag-begin"); }

// signal drag-end
gi::signal_proxy<void(Gtk::GestureDrag, gdouble offset_x, gdouble offset_y)> signal_drag_end()
{ return gi::signal_proxy<void(Gtk::GestureDrag, gdouble offset_x, gdouble offset_y)> (*this, "drag-end"); }

// signal drag-update
gi::signal_proxy<void(Gtk::GestureDrag, gdouble offset_x, gdouble offset_y)> signal_drag_update()
{ return gi::signal_proxy<void(Gtk::GestureDrag, gdouble offset_x, gdouble offset_y)> (*this, "drag-update"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturedrag_extra_def.hpp>)
#include <gtk/gesturedrag_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturedrag_extra.hpp>)
#include <gtk/gesturedrag_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class GestureDrag : public GI_GTK_GESTUREDRAG_BASE
{ typedef GI_GTK_GESTUREDRAG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGestureDrag>
{ typedef Gtk::GestureDrag type; }; 

} // namespace repository

} // namespace gi

#endif
