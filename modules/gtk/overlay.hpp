// AUTO-GENERATED

#ifndef _GI_GTK_OVERLAY_HPP_
#define _GI_GTK_OVERLAY_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Overlay;

namespace base {


#define GI_GTK_OVERLAY_BASE base::OverlayBase
class OverlayBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkOverlay BaseObjectType;

OverlayBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_overlay_get_type(); } 

// GtkWidget* gtk_overlay_new ();
// ::GtkOverlay* gtk_overlay_new ();
static GI_INLINE_DECL Gtk::Overlay new_ () noexcept;

// void gtk_overlay_add_overlay (GtkOverlay* overlay, GtkWidget* widget);
// void gtk_overlay_add_overlay (::GtkOverlay* overlay, ::GtkWidget* widget);
GI_INLINE_DECL void add_overlay (Gtk::Widget widget) noexcept;

// gboolean gtk_overlay_get_overlay_pass_through (GtkOverlay* overlay, GtkWidget* widget);
// gboolean gtk_overlay_get_overlay_pass_through (::GtkOverlay* overlay, ::GtkWidget* widget);
GI_INLINE_DECL bool get_overlay_pass_through (Gtk::Widget widget) noexcept;

// void gtk_overlay_reorder_overlay (GtkOverlay* overlay, GtkWidget* child, int index_);
// void gtk_overlay_reorder_overlay (::GtkOverlay* overlay, ::GtkWidget* child, gint index_);
GI_INLINE_DECL void reorder_overlay (Gtk::Widget child, gint index_) noexcept;

// void gtk_overlay_set_overlay_pass_through (GtkOverlay* overlay, GtkWidget* widget, gboolean pass_through);
// void gtk_overlay_set_overlay_pass_through (::GtkOverlay* overlay, ::GtkWidget* widget, gboolean pass_through);
GI_INLINE_DECL void set_overlay_pass_through (Gtk::Widget widget, gboolean pass_through) noexcept;

// signal get-child-position
// SKIP; glib:signal out parameter not supported

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/overlay_extra_def.hpp>)
#include <gtk/overlay_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/overlay_extra.hpp>)
#include <gtk/overlay_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Overlay : public GI_GTK_OVERLAY_BASE
{ typedef GI_GTK_OVERLAY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkOverlay>
{ typedef Gtk::Overlay type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class OverlayClassDef
{
typedef OverlayClassDef self;
public:
typedef Gtk::Overlay instance_type;
typedef ::GtkOverlayClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean Overlay::get_child_position (GtkOverlay* overlay, GtkWidget* widget, GtkAllocation* allocation);
// gboolean Overlay::get_child_position (::GtkOverlay* overlay, ::GtkWidget* widget, ::GtkAllocation* allocation);
virtual bool get_child_position_ (Gtk::Widget widget, Gtk::Allocation allocation) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class OverlayClass: public detail::ClassTemplate<Gtk::impl::internal::OverlayClassDef, Gtk::impl::internal::BinClass>
{
typedef OverlayClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::OverlayClassDef, Gtk::impl::internal::BinClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean Overlay::get_child_position (GtkOverlay* overlay, GtkWidget* widget, GtkAllocation* allocation);
// gboolean Overlay::get_child_position (::GtkOverlay* overlay, ::GtkWidget* widget, ::GtkAllocation* allocation);
GI_INLINE_DECL bool get_child_position_ (Gtk::Widget widget, Gtk::Allocation allocation) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using OverlayImpl = detail::ObjectImpl<Overlay, internal::OverlayClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
