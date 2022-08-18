// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLEDWINDOW_HPP_
#define _GI_GTK_SCROLLEDWINDOW_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Widget;

class ScrolledWindow;

namespace base {


#define GI_GTK_SCROLLEDWINDOW_BASE base::ScrolledWindowBase
class ScrolledWindowBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkScrolledWindow BaseObjectType;

ScrolledWindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_scrolled_window_get_type(); } 

// GtkWidget* gtk_scrolled_window_new (GtkAdjustment* hadjustment, GtkAdjustment* vadjustment);
// ::GtkScrolledWindow* gtk_scrolled_window_new (::GtkAdjustment* hadjustment, ::GtkAdjustment* vadjustment);
static GI_INLINE_DECL Gtk::ScrolledWindow new_ (Gtk::Adjustment hadjustment, Gtk::Adjustment vadjustment) noexcept;
static GI_INLINE_DECL Gtk::ScrolledWindow new_ () noexcept;

// void gtk_scrolled_window_add_with_viewport (GtkScrolledWindow* scrolled_window, GtkWidget* child);
// void gtk_scrolled_window_add_with_viewport (::GtkScrolledWindow* scrolled_window, ::GtkWidget* child);
// IGNORE; deprecated

// gboolean gtk_scrolled_window_get_capture_button_press (GtkScrolledWindow* scrolled_window);
// gboolean gtk_scrolled_window_get_capture_button_press (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL bool get_capture_button_press () noexcept;

// GtkAdjustment* gtk_scrolled_window_get_hadjustment (GtkScrolledWindow* scrolled_window);
// ::GtkAdjustment* gtk_scrolled_window_get_hadjustment (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL Gtk::Adjustment get_hadjustment () noexcept;

// GtkWidget* gtk_scrolled_window_get_hscrollbar (GtkScrolledWindow* scrolled_window);
// ::GtkWidget* gtk_scrolled_window_get_hscrollbar (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL Gtk::Widget get_hscrollbar () noexcept;

// gboolean gtk_scrolled_window_get_kinetic_scrolling (GtkScrolledWindow* scrolled_window);
// gboolean gtk_scrolled_window_get_kinetic_scrolling (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL bool get_kinetic_scrolling () noexcept;

// gint gtk_scrolled_window_get_max_content_height (GtkScrolledWindow* scrolled_window);
// gint gtk_scrolled_window_get_max_content_height (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL gint get_max_content_height () noexcept;

// gint gtk_scrolled_window_get_max_content_width (GtkScrolledWindow* scrolled_window);
// gint gtk_scrolled_window_get_max_content_width (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL gint get_max_content_width () noexcept;

// gint gtk_scrolled_window_get_min_content_height (GtkScrolledWindow* scrolled_window);
// gint gtk_scrolled_window_get_min_content_height (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL gint get_min_content_height () noexcept;

// gint gtk_scrolled_window_get_min_content_width (GtkScrolledWindow* scrolled_window);
// gint gtk_scrolled_window_get_min_content_width (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL gint get_min_content_width () noexcept;

// gboolean gtk_scrolled_window_get_overlay_scrolling (GtkScrolledWindow* scrolled_window);
// gboolean gtk_scrolled_window_get_overlay_scrolling (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL bool get_overlay_scrolling () noexcept;

// GtkCornerType gtk_scrolled_window_get_placement (GtkScrolledWindow* scrolled_window);
// ::GtkCornerType gtk_scrolled_window_get_placement (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL Gtk::CornerType get_placement () noexcept;

// void gtk_scrolled_window_get_policy (GtkScrolledWindow* scrolled_window, GtkPolicyType* hscrollbar_policy, GtkPolicyType* vscrollbar_policy);
// void gtk_scrolled_window_get_policy (::GtkScrolledWindow* scrolled_window, ::GtkPolicyType* hscrollbar_policy, ::GtkPolicyType* vscrollbar_policy);
GI_INLINE_DECL void get_policy (Gtk::PolicyType * hscrollbar_policy = nullptr, Gtk::PolicyType * vscrollbar_policy = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gtk::PolicyType, Gtk::PolicyType> get_policy () noexcept;

// gboolean gtk_scrolled_window_get_propagate_natural_height (GtkScrolledWindow* scrolled_window);
// gboolean gtk_scrolled_window_get_propagate_natural_height (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL bool get_propagate_natural_height () noexcept;

// gboolean gtk_scrolled_window_get_propagate_natural_width (GtkScrolledWindow* scrolled_window);
// gboolean gtk_scrolled_window_get_propagate_natural_width (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL bool get_propagate_natural_width () noexcept;

// GtkShadowType gtk_scrolled_window_get_shadow_type (GtkScrolledWindow* scrolled_window);
// ::GtkShadowType gtk_scrolled_window_get_shadow_type (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL Gtk::ShadowType get_shadow_type () noexcept;

// GtkAdjustment* gtk_scrolled_window_get_vadjustment (GtkScrolledWindow* scrolled_window);
// ::GtkAdjustment* gtk_scrolled_window_get_vadjustment (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL Gtk::Adjustment get_vadjustment () noexcept;

// GtkWidget* gtk_scrolled_window_get_vscrollbar (GtkScrolledWindow* scrolled_window);
// ::GtkWidget* gtk_scrolled_window_get_vscrollbar (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL Gtk::Widget get_vscrollbar () noexcept;

// void gtk_scrolled_window_set_capture_button_press (GtkScrolledWindow* scrolled_window, gboolean capture_button_press);
// void gtk_scrolled_window_set_capture_button_press (::GtkScrolledWindow* scrolled_window, gboolean capture_button_press);
GI_INLINE_DECL void set_capture_button_press (gboolean capture_button_press) noexcept;

// void gtk_scrolled_window_set_hadjustment (GtkScrolledWindow* scrolled_window, GtkAdjustment* hadjustment);
// void gtk_scrolled_window_set_hadjustment (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* hadjustment);
GI_INLINE_DECL void set_hadjustment (Gtk::Adjustment hadjustment) noexcept;
GI_INLINE_DECL void set_hadjustment () noexcept;

// void gtk_scrolled_window_set_kinetic_scrolling (GtkScrolledWindow* scrolled_window, gboolean kinetic_scrolling);
// void gtk_scrolled_window_set_kinetic_scrolling (::GtkScrolledWindow* scrolled_window, gboolean kinetic_scrolling);
GI_INLINE_DECL void set_kinetic_scrolling (gboolean kinetic_scrolling) noexcept;

// void gtk_scrolled_window_set_max_content_height (GtkScrolledWindow* scrolled_window, gint height);
// void gtk_scrolled_window_set_max_content_height (::GtkScrolledWindow* scrolled_window, gint height);
GI_INLINE_DECL void set_max_content_height (gint height) noexcept;

// void gtk_scrolled_window_set_max_content_width (GtkScrolledWindow* scrolled_window, gint width);
// void gtk_scrolled_window_set_max_content_width (::GtkScrolledWindow* scrolled_window, gint width);
GI_INLINE_DECL void set_max_content_width (gint width) noexcept;

// void gtk_scrolled_window_set_min_content_height (GtkScrolledWindow* scrolled_window, gint height);
// void gtk_scrolled_window_set_min_content_height (::GtkScrolledWindow* scrolled_window, gint height);
GI_INLINE_DECL void set_min_content_height (gint height) noexcept;

// void gtk_scrolled_window_set_min_content_width (GtkScrolledWindow* scrolled_window, gint width);
// void gtk_scrolled_window_set_min_content_width (::GtkScrolledWindow* scrolled_window, gint width);
GI_INLINE_DECL void set_min_content_width (gint width) noexcept;

// void gtk_scrolled_window_set_overlay_scrolling (GtkScrolledWindow* scrolled_window, gboolean overlay_scrolling);
// void gtk_scrolled_window_set_overlay_scrolling (::GtkScrolledWindow* scrolled_window, gboolean overlay_scrolling);
GI_INLINE_DECL void set_overlay_scrolling (gboolean overlay_scrolling) noexcept;

// void gtk_scrolled_window_set_placement (GtkScrolledWindow* scrolled_window, GtkCornerType window_placement);
// void gtk_scrolled_window_set_placement (::GtkScrolledWindow* scrolled_window, ::GtkCornerType window_placement);
GI_INLINE_DECL void set_placement (Gtk::CornerType window_placement) noexcept;

// void gtk_scrolled_window_set_policy (GtkScrolledWindow* scrolled_window, GtkPolicyType hscrollbar_policy, GtkPolicyType vscrollbar_policy);
// void gtk_scrolled_window_set_policy (::GtkScrolledWindow* scrolled_window, ::GtkPolicyType hscrollbar_policy, ::GtkPolicyType vscrollbar_policy);
GI_INLINE_DECL void set_policy (Gtk::PolicyType hscrollbar_policy, Gtk::PolicyType vscrollbar_policy) noexcept;

// void gtk_scrolled_window_set_propagate_natural_height (GtkScrolledWindow* scrolled_window, gboolean propagate);
// void gtk_scrolled_window_set_propagate_natural_height (::GtkScrolledWindow* scrolled_window, gboolean propagate);
GI_INLINE_DECL void set_propagate_natural_height (gboolean propagate) noexcept;

// void gtk_scrolled_window_set_propagate_natural_width (GtkScrolledWindow* scrolled_window, gboolean propagate);
// void gtk_scrolled_window_set_propagate_natural_width (::GtkScrolledWindow* scrolled_window, gboolean propagate);
GI_INLINE_DECL void set_propagate_natural_width (gboolean propagate) noexcept;

// void gtk_scrolled_window_set_shadow_type (GtkScrolledWindow* scrolled_window, GtkShadowType type);
// void gtk_scrolled_window_set_shadow_type (::GtkScrolledWindow* scrolled_window, ::GtkShadowType type);
GI_INLINE_DECL void set_shadow_type (Gtk::ShadowType type) noexcept;

// void gtk_scrolled_window_set_vadjustment (GtkScrolledWindow* scrolled_window, GtkAdjustment* vadjustment);
// void gtk_scrolled_window_set_vadjustment (::GtkScrolledWindow* scrolled_window, ::GtkAdjustment* vadjustment);
GI_INLINE_DECL void set_vadjustment (Gtk::Adjustment vadjustment) noexcept;
GI_INLINE_DECL void set_vadjustment () noexcept;

// void gtk_scrolled_window_unset_placement (GtkScrolledWindow* scrolled_window);
// void gtk_scrolled_window_unset_placement (::GtkScrolledWindow* scrolled_window);
GI_INLINE_DECL void unset_placement () noexcept;

gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> property_hadjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> (*this, "hadjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> property_hadjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> (*this, "hadjustment"); }

gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> property_hscrollbar_policy()
{ return gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> (*this, "hscrollbar-policy"); }
const gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> property_hscrollbar_policy() const
{ return gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> (*this, "hscrollbar-policy"); }

gi::property_proxy<bool, base::ScrolledWindowBase> property_kinetic_scrolling()
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "kinetic-scrolling"); }
const gi::property_proxy<bool, base::ScrolledWindowBase> property_kinetic_scrolling() const
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "kinetic-scrolling"); }

gi::property_proxy<gint, base::ScrolledWindowBase> property_max_content_height()
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "max-content-height"); }
const gi::property_proxy<gint, base::ScrolledWindowBase> property_max_content_height() const
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "max-content-height"); }

gi::property_proxy<gint, base::ScrolledWindowBase> property_max_content_width()
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "max-content-width"); }
const gi::property_proxy<gint, base::ScrolledWindowBase> property_max_content_width() const
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "max-content-width"); }

gi::property_proxy<gint, base::ScrolledWindowBase> property_min_content_height()
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "min-content-height"); }
const gi::property_proxy<gint, base::ScrolledWindowBase> property_min_content_height() const
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "min-content-height"); }

gi::property_proxy<gint, base::ScrolledWindowBase> property_min_content_width()
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "min-content-width"); }
const gi::property_proxy<gint, base::ScrolledWindowBase> property_min_content_width() const
{ return gi::property_proxy<gint, base::ScrolledWindowBase> (*this, "min-content-width"); }

gi::property_proxy<bool, base::ScrolledWindowBase> property_overlay_scrolling()
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "overlay-scrolling"); }
const gi::property_proxy<bool, base::ScrolledWindowBase> property_overlay_scrolling() const
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "overlay-scrolling"); }

gi::property_proxy<bool, base::ScrolledWindowBase> property_propagate_natural_height()
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "propagate-natural-height"); }
const gi::property_proxy<bool, base::ScrolledWindowBase> property_propagate_natural_height() const
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "propagate-natural-height"); }

gi::property_proxy<bool, base::ScrolledWindowBase> property_propagate_natural_width()
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "propagate-natural-width"); }
const gi::property_proxy<bool, base::ScrolledWindowBase> property_propagate_natural_width() const
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "propagate-natural-width"); }

gi::property_proxy<Gtk::ShadowType, base::ScrolledWindowBase> property_shadow_type()
{ return gi::property_proxy<Gtk::ShadowType, base::ScrolledWindowBase> (*this, "shadow-type"); }
const gi::property_proxy<Gtk::ShadowType, base::ScrolledWindowBase> property_shadow_type() const
{ return gi::property_proxy<Gtk::ShadowType, base::ScrolledWindowBase> (*this, "shadow-type"); }

gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> property_vadjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> (*this, "vadjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> property_vadjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::ScrolledWindowBase> (*this, "vadjustment"); }

gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> property_vscrollbar_policy()
{ return gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> (*this, "vscrollbar-policy"); }
const gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> property_vscrollbar_policy() const
{ return gi::property_proxy<Gtk::PolicyType, base::ScrolledWindowBase> (*this, "vscrollbar-policy"); }

gi::property_proxy<Gtk::CornerType, base::ScrolledWindowBase> property_window_placement()
{ return gi::property_proxy<Gtk::CornerType, base::ScrolledWindowBase> (*this, "window-placement"); }
const gi::property_proxy<Gtk::CornerType, base::ScrolledWindowBase> property_window_placement() const
{ return gi::property_proxy<Gtk::CornerType, base::ScrolledWindowBase> (*this, "window-placement"); }

gi::property_proxy<bool, base::ScrolledWindowBase> property_window_placement_set()
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "window-placement-set"); }
const gi::property_proxy<bool, base::ScrolledWindowBase> property_window_placement_set() const
{ return gi::property_proxy<bool, base::ScrolledWindowBase> (*this, "window-placement-set"); }

// signal edge-overshot
gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::PositionType pos)> signal_edge_overshot()
{ return gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::PositionType pos)> (*this, "edge-overshot"); }

// signal edge-reached
gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::PositionType pos)> signal_edge_reached()
{ return gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::PositionType pos)> (*this, "edge-reached"); }

// signal move-focus-out
gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::DirectionType direction_type)> signal_move_focus_out()
{ return gi::signal_proxy<void(Gtk::ScrolledWindow, Gtk::DirectionType direction_type)> (*this, "move-focus-out"); }

// signal scroll-child
gi::signal_proxy<bool(Gtk::ScrolledWindow, Gtk::ScrollType scroll, gboolean horizontal)> signal_scroll_child()
{ return gi::signal_proxy<bool(Gtk::ScrolledWindow, Gtk::ScrollType scroll, gboolean horizontal)> (*this, "scroll-child"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrolledwindow_extra_def.hpp>)
#include <gtk/scrolledwindow_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrolledwindow_extra.hpp>)
#include <gtk/scrolledwindow_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ScrolledWindow : public GI_GTK_SCROLLEDWINDOW_BASE
{ typedef GI_GTK_SCROLLEDWINDOW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScrolledWindow>
{ typedef Gtk::ScrolledWindow type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ScrolledWindowClassDef
{
typedef ScrolledWindowClassDef self;
public:
typedef Gtk::ScrolledWindow instance_type;
typedef ::GtkScrolledWindowClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ScrolledWindow::move_focus_out (GtkScrolledWindow* scrolled_window, GtkDirectionType direction);
// void ScrolledWindow::move_focus_out (::GtkScrolledWindow* scrolled_window, ::GtkDirectionType direction);
virtual void move_focus_out_ (Gtk::DirectionType direction) noexcept = 0;

// gboolean ScrolledWindow::scroll_child (GtkScrolledWindow* scrolled_window, GtkScrollType scroll, gboolean horizontal);
// gboolean ScrolledWindow::scroll_child (::GtkScrolledWindow* scrolled_window, ::GtkScrollType scroll, gboolean horizontal);
virtual bool scroll_child_ (Gtk::ScrollType scroll, gboolean horizontal) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ScrolledWindowClass: public detail::ClassTemplate<Gtk::impl::internal::ScrolledWindowClassDef, Gtk::impl::internal::BinClass>
{
typedef ScrolledWindowClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ScrolledWindowClassDef, Gtk::impl::internal::BinClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ScrolledWindow::move_focus_out (GtkScrolledWindow* scrolled_window, GtkDirectionType direction);
// void ScrolledWindow::move_focus_out (::GtkScrolledWindow* scrolled_window, ::GtkDirectionType direction);
GI_INLINE_DECL void move_focus_out_ (Gtk::DirectionType direction) noexcept override;

// gboolean ScrolledWindow::scroll_child (GtkScrolledWindow* scrolled_window, GtkScrollType scroll, gboolean horizontal);
// gboolean ScrolledWindow::scroll_child (::GtkScrolledWindow* scrolled_window, ::GtkScrollType scroll, gboolean horizontal);
GI_INLINE_DECL bool scroll_child_ (Gtk::ScrollType scroll, gboolean horizontal) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ScrolledWindowImpl = detail::ObjectImpl<ScrolledWindow, internal::ScrolledWindowClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
