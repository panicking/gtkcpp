// AUTO-GENERATED

#ifndef _GI_GTK_PANED_HPP_
#define _GI_GTK_PANED_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;
class Widget;

class Paned;

namespace base {


#define GI_GTK_PANED_BASE base::PanedBase
class PanedBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkPaned BaseObjectType;

PanedBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_paned_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* gtk_paned_new (GtkOrientation orientation);
// ::GtkPaned* gtk_paned_new (::GtkOrientation orientation);
static GI_INLINE_DECL Gtk::Paned new_ (Gtk::Orientation orientation) noexcept;

// void gtk_paned_add1 (GtkPaned* paned, GtkWidget* child);
// void gtk_paned_add1 (::GtkPaned* paned, ::GtkWidget* child);
GI_INLINE_DECL void add1 (Gtk::Widget child) noexcept;

// void gtk_paned_add2 (GtkPaned* paned, GtkWidget* child);
// void gtk_paned_add2 (::GtkPaned* paned, ::GtkWidget* child);
GI_INLINE_DECL void add2 (Gtk::Widget child) noexcept;

// GtkWidget* gtk_paned_get_child1 (GtkPaned* paned);
// ::GtkWidget* gtk_paned_get_child1 (::GtkPaned* paned);
GI_INLINE_DECL Gtk::Widget get_child1 () noexcept;

// GtkWidget* gtk_paned_get_child2 (GtkPaned* paned);
// ::GtkWidget* gtk_paned_get_child2 (::GtkPaned* paned);
GI_INLINE_DECL Gtk::Widget get_child2 () noexcept;

// GdkWindow* gtk_paned_get_handle_window (GtkPaned* paned);
// ::GdkWindow* gtk_paned_get_handle_window (::GtkPaned* paned);
GI_INLINE_DECL Gdk::Window get_handle_window () noexcept;

// gint gtk_paned_get_position (GtkPaned* paned);
// gint gtk_paned_get_position (::GtkPaned* paned);
GI_INLINE_DECL gint get_position () noexcept;

// gboolean gtk_paned_get_wide_handle (GtkPaned* paned);
// gboolean gtk_paned_get_wide_handle (::GtkPaned* paned);
GI_INLINE_DECL bool get_wide_handle () noexcept;

// void gtk_paned_pack1 (GtkPaned* paned, GtkWidget* child, gboolean resize, gboolean shrink);
// void gtk_paned_pack1 (::GtkPaned* paned, ::GtkWidget* child, gboolean resize, gboolean shrink);
GI_INLINE_DECL void pack1 (Gtk::Widget child, gboolean resize, gboolean shrink) noexcept;

// void gtk_paned_pack2 (GtkPaned* paned, GtkWidget* child, gboolean resize, gboolean shrink);
// void gtk_paned_pack2 (::GtkPaned* paned, ::GtkWidget* child, gboolean resize, gboolean shrink);
GI_INLINE_DECL void pack2 (Gtk::Widget child, gboolean resize, gboolean shrink) noexcept;

// void gtk_paned_set_position (GtkPaned* paned, gint position);
// void gtk_paned_set_position (::GtkPaned* paned, gint position);
GI_INLINE_DECL void set_position (gint position) noexcept;

// void gtk_paned_set_wide_handle (GtkPaned* paned, gboolean wide);
// void gtk_paned_set_wide_handle (::GtkPaned* paned, gboolean wide);
GI_INLINE_DECL void set_wide_handle (gboolean wide) noexcept;

gi::property_proxy<gint, base::PanedBase> property_max_position()
{ return gi::property_proxy<gint, base::PanedBase> (*this, "max-position"); }
const gi::property_proxy<gint, base::PanedBase> property_max_position() const
{ return gi::property_proxy<gint, base::PanedBase> (*this, "max-position"); }

gi::property_proxy<gint, base::PanedBase> property_min_position()
{ return gi::property_proxy<gint, base::PanedBase> (*this, "min-position"); }
const gi::property_proxy<gint, base::PanedBase> property_min_position() const
{ return gi::property_proxy<gint, base::PanedBase> (*this, "min-position"); }

gi::property_proxy<gint, base::PanedBase> property_position()
{ return gi::property_proxy<gint, base::PanedBase> (*this, "position"); }
const gi::property_proxy<gint, base::PanedBase> property_position() const
{ return gi::property_proxy<gint, base::PanedBase> (*this, "position"); }

gi::property_proxy<bool, base::PanedBase> property_position_set()
{ return gi::property_proxy<bool, base::PanedBase> (*this, "position-set"); }
const gi::property_proxy<bool, base::PanedBase> property_position_set() const
{ return gi::property_proxy<bool, base::PanedBase> (*this, "position-set"); }

gi::property_proxy<bool, base::PanedBase> property_wide_handle()
{ return gi::property_proxy<bool, base::PanedBase> (*this, "wide-handle"); }
const gi::property_proxy<bool, base::PanedBase> property_wide_handle() const
{ return gi::property_proxy<bool, base::PanedBase> (*this, "wide-handle"); }

// signal accept-position
gi::signal_proxy<bool(Gtk::Paned)> signal_accept_position()
{ return gi::signal_proxy<bool(Gtk::Paned)> (*this, "accept-position"); }

// signal cancel-position
gi::signal_proxy<bool(Gtk::Paned)> signal_cancel_position()
{ return gi::signal_proxy<bool(Gtk::Paned)> (*this, "cancel-position"); }

// signal cycle-child-focus
gi::signal_proxy<bool(Gtk::Paned, gboolean reversed)> signal_cycle_child_focus()
{ return gi::signal_proxy<bool(Gtk::Paned, gboolean reversed)> (*this, "cycle-child-focus"); }

// signal cycle-handle-focus
gi::signal_proxy<bool(Gtk::Paned, gboolean reversed)> signal_cycle_handle_focus()
{ return gi::signal_proxy<bool(Gtk::Paned, gboolean reversed)> (*this, "cycle-handle-focus"); }

// signal move-handle
gi::signal_proxy<bool(Gtk::Paned, Gtk::ScrollType scroll_type)> signal_move_handle()
{ return gi::signal_proxy<bool(Gtk::Paned, Gtk::ScrollType scroll_type)> (*this, "move-handle"); }

// signal toggle-handle-focus
gi::signal_proxy<bool(Gtk::Paned)> signal_toggle_handle_focus()
{ return gi::signal_proxy<bool(Gtk::Paned)> (*this, "toggle-handle-focus"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/paned_extra_def.hpp>)
#include <gtk/paned_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/paned_extra.hpp>)
#include <gtk/paned_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Paned : public GI_GTK_PANED_BASE
{ typedef GI_GTK_PANED_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPaned>
{ typedef Gtk::Paned type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PanedClassDef
{
typedef PanedClassDef self;
public:
typedef Gtk::Paned instance_type;
typedef ::GtkPanedClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean Paned::accept_position (GtkPaned* paned);
// gboolean Paned::accept_position (::GtkPaned* paned);
virtual bool accept_position_ () noexcept = 0;

// gboolean Paned::cancel_position (GtkPaned* paned);
// gboolean Paned::cancel_position (::GtkPaned* paned);
virtual bool cancel_position_ () noexcept = 0;

// gboolean Paned::cycle_child_focus (GtkPaned* paned, gboolean reverse);
// gboolean Paned::cycle_child_focus (::GtkPaned* paned, gboolean reverse);
virtual bool cycle_child_focus_ (gboolean reverse) noexcept = 0;

// gboolean Paned::cycle_handle_focus (GtkPaned* paned, gboolean reverse);
// gboolean Paned::cycle_handle_focus (::GtkPaned* paned, gboolean reverse);
virtual bool cycle_handle_focus_ (gboolean reverse) noexcept = 0;

// gboolean Paned::move_handle (GtkPaned* paned, GtkScrollType scroll);
// gboolean Paned::move_handle (::GtkPaned* paned, ::GtkScrollType scroll);
virtual bool move_handle_ (Gtk::ScrollType scroll) noexcept = 0;

// gboolean Paned::toggle_handle_focus (GtkPaned* paned);
// gboolean Paned::toggle_handle_focus (::GtkPaned* paned);
virtual bool toggle_handle_focus_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PanedClass: public detail::ClassTemplate<Gtk::impl::internal::PanedClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef PanedClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PanedClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;


// gboolean Paned::accept_position (GtkPaned* paned);
// gboolean Paned::accept_position (::GtkPaned* paned);
GI_INLINE_DECL bool accept_position_ () noexcept override;

// gboolean Paned::cancel_position (GtkPaned* paned);
// gboolean Paned::cancel_position (::GtkPaned* paned);
GI_INLINE_DECL bool cancel_position_ () noexcept override;

// gboolean Paned::cycle_child_focus (GtkPaned* paned, gboolean reverse);
// gboolean Paned::cycle_child_focus (::GtkPaned* paned, gboolean reverse);
GI_INLINE_DECL bool cycle_child_focus_ (gboolean reverse) noexcept override;

// gboolean Paned::cycle_handle_focus (GtkPaned* paned, gboolean reverse);
// gboolean Paned::cycle_handle_focus (::GtkPaned* paned, gboolean reverse);
GI_INLINE_DECL bool cycle_handle_focus_ (gboolean reverse) noexcept override;

// gboolean Paned::move_handle (GtkPaned* paned, GtkScrollType scroll);
// gboolean Paned::move_handle (::GtkPaned* paned, ::GtkScrollType scroll);
GI_INLINE_DECL bool move_handle_ (Gtk::ScrollType scroll) noexcept override;

// gboolean Paned::toggle_handle_focus (GtkPaned* paned);
// gboolean Paned::toggle_handle_focus (::GtkPaned* paned);
GI_INLINE_DECL bool toggle_handle_focus_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using PanedImpl = detail::ObjectImpl<Paned, internal::PanedClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
