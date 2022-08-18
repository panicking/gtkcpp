// AUTO-GENERATED

#ifndef _GI_GTK_LAYOUT_HPP_
#define _GI_GTK_LAYOUT_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Scrollable;
class Widget;

class Layout;

namespace base {


#define GI_GTK_LAYOUT_BASE base::LayoutBase
class LayoutBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkLayout BaseObjectType;

LayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_layout_get_type(); } 

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* gtk_layout_new (GtkAdjustment* hadjustment, GtkAdjustment* vadjustment);
// ::GtkLayout* gtk_layout_new (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
static GI_INLINE_DECL Gtk::Layout new_ (Gtk::Adjustment hadjustment, Gtk::Adjustment vadjustment) noexcept;
static GI_INLINE_DECL Gtk::Layout new_ () noexcept;

// GdkWindow* gtk_layout_get_bin_window (GtkLayout* layout);
// ::GdkWindow* gtk_layout_get_bin_window (::GtkLayout* layout);
GI_INLINE_DECL Gdk::Window get_bin_window () noexcept;

// GtkAdjustment* gtk_layout_get_hadjustment (GtkLayout* layout);
// ::GtkAdjustment* gtk_layout_get_hadjustment (::GtkLayout* layout);
// IGNORE; deprecated

// void gtk_layout_get_size (GtkLayout* layout, guint* width, guint* height);
// void gtk_layout_get_size (::GtkLayout* layout, guint* width, guint* height);
GI_INLINE_DECL void get_size (guint * width = nullptr, guint * height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<guint, guint> get_size () noexcept;

// GtkAdjustment* gtk_layout_get_vadjustment (GtkLayout* layout);
// ::GtkAdjustment* gtk_layout_get_vadjustment (::GtkLayout* layout);
// IGNORE; deprecated

// void gtk_layout_move (GtkLayout* layout, GtkWidget* child_widget, gint x, gint y);
// void gtk_layout_move (::GtkLayout* layout, ::GtkWidget* child_widget, gint x, gint y);
GI_INLINE_DECL void move (Gtk::Widget child_widget, gint x, gint y) noexcept;

// void gtk_layout_put (GtkLayout* layout, GtkWidget* child_widget, gint x, gint y);
// void gtk_layout_put (::GtkLayout* layout, ::GtkWidget* child_widget, gint x, gint y);
GI_INLINE_DECL void put (Gtk::Widget child_widget, gint x, gint y) noexcept;

// void gtk_layout_set_hadjustment (GtkLayout* layout, GtkAdjustment* adjustment);
// void gtk_layout_set_hadjustment (::GtkLayout* layout, ::GtkAdjustment* adjustment);
// IGNORE; deprecated

// void gtk_layout_set_size (GtkLayout* layout, guint width, guint height);
// void gtk_layout_set_size (::GtkLayout* layout, guint width, guint height);
GI_INLINE_DECL void set_size (guint width, guint height) noexcept;

// void gtk_layout_set_vadjustment (GtkLayout* layout, GtkAdjustment* adjustment);
// void gtk_layout_set_vadjustment (::GtkLayout* layout, ::GtkAdjustment* adjustment);
// IGNORE; deprecated

gi::property_proxy<guint, base::LayoutBase> property_height()
{ return gi::property_proxy<guint, base::LayoutBase> (*this, "height"); }
const gi::property_proxy<guint, base::LayoutBase> property_height() const
{ return gi::property_proxy<guint, base::LayoutBase> (*this, "height"); }

gi::property_proxy<guint, base::LayoutBase> property_width()
{ return gi::property_proxy<guint, base::LayoutBase> (*this, "width"); }
const gi::property_proxy<guint, base::LayoutBase> property_width() const
{ return gi::property_proxy<guint, base::LayoutBase> (*this, "width"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/layout_extra_def.hpp>)
#include <gtk/layout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/layout_extra.hpp>)
#include <gtk/layout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Layout : public GI_GTK_LAYOUT_BASE
{ typedef GI_GTK_LAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLayout>
{ typedef Gtk::Layout type; }; 

} // namespace repository

} // namespace gi

#include "scrollable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class LayoutClassDef
{
typedef LayoutClassDef self;
public:
typedef Gtk::Layout instance_type;
typedef ::GtkLayoutClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class LayoutClass: public detail::ClassTemplate<Gtk::impl::internal::LayoutClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::ScrollableInterfaceClassImpl>
{
typedef LayoutClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::LayoutClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::ScrollableInterfaceClassImpl> super;

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

using LayoutImpl = detail::ObjectImpl<Layout, internal::LayoutClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
