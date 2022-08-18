// AUTO-GENERATED

#ifndef _GI_GTK_RANGE_HPP_
#define _GI_GTK_RANGE_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Border;
class Orientable;

class Range;

namespace base {


#define GI_GTK_RANGE_BASE base::RangeBase
class RangeBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkRange BaseObjectType;

RangeBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_range_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkAdjustment* gtk_range_get_adjustment (GtkRange* range);
// ::GtkAdjustment* gtk_range_get_adjustment (::GtkRange* range);
GI_INLINE_DECL Gtk::Adjustment get_adjustment () noexcept;

// gdouble gtk_range_get_fill_level (GtkRange* range);
// gdouble gtk_range_get_fill_level (::GtkRange* range);
GI_INLINE_DECL gdouble get_fill_level () noexcept;

// gboolean gtk_range_get_flippable (GtkRange* range);
// gboolean gtk_range_get_flippable (::GtkRange* range);
GI_INLINE_DECL bool get_flippable () noexcept;

// gboolean gtk_range_get_inverted (GtkRange* range);
// gboolean gtk_range_get_inverted (::GtkRange* range);
GI_INLINE_DECL bool get_inverted () noexcept;

// GtkSensitivityType gtk_range_get_lower_stepper_sensitivity (GtkRange* range);
// ::GtkSensitivityType gtk_range_get_lower_stepper_sensitivity (::GtkRange* range);
GI_INLINE_DECL Gtk::SensitivityType get_lower_stepper_sensitivity () noexcept;

// gint gtk_range_get_min_slider_size (GtkRange* range);
// gint gtk_range_get_min_slider_size (::GtkRange* range);
// IGNORE; deprecated

// void gtk_range_get_range_rect (GtkRange* range, GdkRectangle* range_rect);
// void gtk_range_get_range_rect (::GtkRange* range, ::GdkRectangle* range_rect);
GI_INLINE_DECL void get_range_rect (Gdk::Rectangle & range_rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_range_rect () noexcept;

// gboolean gtk_range_get_restrict_to_fill_level (GtkRange* range);
// gboolean gtk_range_get_restrict_to_fill_level (::GtkRange* range);
GI_INLINE_DECL bool get_restrict_to_fill_level () noexcept;

// gint gtk_range_get_round_digits (GtkRange* range);
// gint gtk_range_get_round_digits (::GtkRange* range);
GI_INLINE_DECL gint get_round_digits () noexcept;

// gboolean gtk_range_get_show_fill_level (GtkRange* range);
// gboolean gtk_range_get_show_fill_level (::GtkRange* range);
GI_INLINE_DECL bool get_show_fill_level () noexcept;

// void gtk_range_get_slider_range (GtkRange* range, gint* slider_start, gint* slider_end);
// void gtk_range_get_slider_range (::GtkRange* range, gint* slider_start, gint* slider_end);
GI_INLINE_DECL void get_slider_range (gint * slider_start = nullptr, gint * slider_end = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_slider_range () noexcept;

// gboolean gtk_range_get_slider_size_fixed (GtkRange* range);
// gboolean gtk_range_get_slider_size_fixed (::GtkRange* range);
GI_INLINE_DECL bool get_slider_size_fixed () noexcept;

// GtkSensitivityType gtk_range_get_upper_stepper_sensitivity (GtkRange* range);
// ::GtkSensitivityType gtk_range_get_upper_stepper_sensitivity (::GtkRange* range);
GI_INLINE_DECL Gtk::SensitivityType get_upper_stepper_sensitivity () noexcept;

// gdouble gtk_range_get_value (GtkRange* range);
// gdouble gtk_range_get_value (::GtkRange* range);
GI_INLINE_DECL gdouble get_value () noexcept;

// void gtk_range_set_adjustment (GtkRange* range, GtkAdjustment* adjustment);
// void gtk_range_set_adjustment (::GtkRange* range, ::GtkAdjustment* adjustment);
GI_INLINE_DECL void set_adjustment (Gtk::Adjustment adjustment) noexcept;

// void gtk_range_set_fill_level (GtkRange* range, gdouble fill_level);
// void gtk_range_set_fill_level (::GtkRange* range, gdouble fill_level);
GI_INLINE_DECL void set_fill_level (gdouble fill_level) noexcept;

// void gtk_range_set_flippable (GtkRange* range, gboolean flippable);
// void gtk_range_set_flippable (::GtkRange* range, gboolean flippable);
GI_INLINE_DECL void set_flippable (gboolean flippable) noexcept;

// void gtk_range_set_increments (GtkRange* range, gdouble step, gdouble page);
// void gtk_range_set_increments (::GtkRange* range, gdouble step, gdouble page);
GI_INLINE_DECL void set_increments (gdouble step, gdouble page) noexcept;

// void gtk_range_set_inverted (GtkRange* range, gboolean setting);
// void gtk_range_set_inverted (::GtkRange* range, gboolean setting);
GI_INLINE_DECL void set_inverted (gboolean setting) noexcept;

// void gtk_range_set_lower_stepper_sensitivity (GtkRange* range, GtkSensitivityType sensitivity);
// void gtk_range_set_lower_stepper_sensitivity (::GtkRange* range, ::GtkSensitivityType sensitivity);
GI_INLINE_DECL void set_lower_stepper_sensitivity (Gtk::SensitivityType sensitivity) noexcept;

// void gtk_range_set_min_slider_size (GtkRange* range, gint min_size);
// void gtk_range_set_min_slider_size (::GtkRange* range, gint min_size);
// IGNORE; deprecated

// void gtk_range_set_range (GtkRange* range, gdouble min, gdouble max);
// void gtk_range_set_range (::GtkRange* range, gdouble min, gdouble max);
GI_INLINE_DECL void set_range (gdouble min, gdouble max) noexcept;

// void gtk_range_set_restrict_to_fill_level (GtkRange* range, gboolean restrict_to_fill_level);
// void gtk_range_set_restrict_to_fill_level (::GtkRange* range, gboolean restrict_to_fill_level);
GI_INLINE_DECL void set_restrict_to_fill_level (gboolean restrict_to_fill_level) noexcept;

// void gtk_range_set_round_digits (GtkRange* range, gint round_digits);
// void gtk_range_set_round_digits (::GtkRange* range, gint round_digits);
GI_INLINE_DECL void set_round_digits (gint round_digits) noexcept;

// void gtk_range_set_show_fill_level (GtkRange* range, gboolean show_fill_level);
// void gtk_range_set_show_fill_level (::GtkRange* range, gboolean show_fill_level);
GI_INLINE_DECL void set_show_fill_level (gboolean show_fill_level) noexcept;

// void gtk_range_set_slider_size_fixed (GtkRange* range, gboolean size_fixed);
// void gtk_range_set_slider_size_fixed (::GtkRange* range, gboolean size_fixed);
GI_INLINE_DECL void set_slider_size_fixed (gboolean size_fixed) noexcept;

// void gtk_range_set_upper_stepper_sensitivity (GtkRange* range, GtkSensitivityType sensitivity);
// void gtk_range_set_upper_stepper_sensitivity (::GtkRange* range, ::GtkSensitivityType sensitivity);
GI_INLINE_DECL void set_upper_stepper_sensitivity (Gtk::SensitivityType sensitivity) noexcept;

// void gtk_range_set_value (GtkRange* range, gdouble value);
// void gtk_range_set_value (::GtkRange* range, gdouble value);
GI_INLINE_DECL void set_value (gdouble value) noexcept;

gi::property_proxy<Gtk::Adjustment, base::RangeBase> property_adjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::RangeBase> (*this, "adjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::RangeBase> property_adjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::RangeBase> (*this, "adjustment"); }

gi::property_proxy<gdouble, base::RangeBase> property_fill_level()
{ return gi::property_proxy<gdouble, base::RangeBase> (*this, "fill-level"); }
const gi::property_proxy<gdouble, base::RangeBase> property_fill_level() const
{ return gi::property_proxy<gdouble, base::RangeBase> (*this, "fill-level"); }

gi::property_proxy<bool, base::RangeBase> property_inverted()
{ return gi::property_proxy<bool, base::RangeBase> (*this, "inverted"); }
const gi::property_proxy<bool, base::RangeBase> property_inverted() const
{ return gi::property_proxy<bool, base::RangeBase> (*this, "inverted"); }

gi::property_proxy<Gtk::SensitivityType, base::RangeBase> property_lower_stepper_sensitivity()
{ return gi::property_proxy<Gtk::SensitivityType, base::RangeBase> (*this, "lower-stepper-sensitivity"); }
const gi::property_proxy<Gtk::SensitivityType, base::RangeBase> property_lower_stepper_sensitivity() const
{ return gi::property_proxy<Gtk::SensitivityType, base::RangeBase> (*this, "lower-stepper-sensitivity"); }

gi::property_proxy<bool, base::RangeBase> property_restrict_to_fill_level()
{ return gi::property_proxy<bool, base::RangeBase> (*this, "restrict-to-fill-level"); }
const gi::property_proxy<bool, base::RangeBase> property_restrict_to_fill_level() const
{ return gi::property_proxy<bool, base::RangeBase> (*this, "restrict-to-fill-level"); }

gi::property_proxy<gint, base::RangeBase> property_round_digits()
{ return gi::property_proxy<gint, base::RangeBase> (*this, "round-digits"); }
const gi::property_proxy<gint, base::RangeBase> property_round_digits() const
{ return gi::property_proxy<gint, base::RangeBase> (*this, "round-digits"); }

gi::property_proxy<bool, base::RangeBase> property_show_fill_level()
{ return gi::property_proxy<bool, base::RangeBase> (*this, "show-fill-level"); }
const gi::property_proxy<bool, base::RangeBase> property_show_fill_level() const
{ return gi::property_proxy<bool, base::RangeBase> (*this, "show-fill-level"); }

gi::property_proxy<Gtk::SensitivityType, base::RangeBase> property_upper_stepper_sensitivity()
{ return gi::property_proxy<Gtk::SensitivityType, base::RangeBase> (*this, "upper-stepper-sensitivity"); }
const gi::property_proxy<Gtk::SensitivityType, base::RangeBase> property_upper_stepper_sensitivity() const
{ return gi::property_proxy<Gtk::SensitivityType, base::RangeBase> (*this, "upper-stepper-sensitivity"); }

// signal adjust-bounds
gi::signal_proxy<void(Gtk::Range, gdouble value)> signal_adjust_bounds()
{ return gi::signal_proxy<void(Gtk::Range, gdouble value)> (*this, "adjust-bounds"); }

// signal change-value
gi::signal_proxy<bool(Gtk::Range, Gtk::ScrollType scroll, gdouble value)> signal_change_value()
{ return gi::signal_proxy<bool(Gtk::Range, Gtk::ScrollType scroll, gdouble value)> (*this, "change-value"); }

// signal move-slider
gi::signal_proxy<void(Gtk::Range, Gtk::ScrollType step)> signal_move_slider()
{ return gi::signal_proxy<void(Gtk::Range, Gtk::ScrollType step)> (*this, "move-slider"); }

// signal value-changed
gi::signal_proxy<void(Gtk::Range)> signal_value_changed()
{ return gi::signal_proxy<void(Gtk::Range)> (*this, "value-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/range_extra_def.hpp>)
#include <gtk/range_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/range_extra.hpp>)
#include <gtk/range_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Range : public GI_GTK_RANGE_BASE
{ typedef GI_GTK_RANGE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRange>
{ typedef Gtk::Range type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RangeClassDef
{
typedef RangeClassDef self;
public:
typedef Gtk::Range instance_type;
typedef ::GtkRangeClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Range::adjust_bounds (GtkRange* range, gdouble new_value);
// void Range::adjust_bounds (::GtkRange* range, gdouble new_value);
virtual void adjust_bounds_ (gdouble new_value) noexcept = 0;

// gboolean Range::change_value (GtkRange* range, GtkScrollType scroll, gdouble new_value);
// gboolean Range::change_value (::GtkRange* range, ::GtkScrollType scroll, gdouble new_value);
virtual bool change_value_ (Gtk::ScrollType scroll, gdouble new_value) noexcept = 0;

// void Range::get_range_border (GtkRange* range, GtkBorder* border_);
// void Range::get_range_border (::GtkRange* range, ::GtkBorder* border_);
virtual void get_range_border_ (Gtk::Border border_) noexcept = 0;

// void Range::get_range_size_request (GtkRange* range, GtkOrientation orientation, gint* minimum, gint* natural);
// void Range::get_range_size_request (::GtkRange* range, ::GtkOrientation orientation, gint minimum, gint natural);
// SKIP; inconsistent in natural pointer depth (1 vs 0), inconsistent in minimum pointer depth (1 vs 0)

// void Range::move_slider (GtkRange* range, GtkScrollType scroll);
// void Range::move_slider (::GtkRange* range, ::GtkScrollType scroll);
virtual void move_slider_ (Gtk::ScrollType scroll) noexcept = 0;

// void Range::value_changed (GtkRange* range);
// void Range::value_changed (::GtkRange* range);
virtual void value_changed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class RangeClass: public detail::ClassTemplate<Gtk::impl::internal::RangeClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef RangeClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RangeClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;


// void Range::adjust_bounds (GtkRange* range, gdouble new_value);
// void Range::adjust_bounds (::GtkRange* range, gdouble new_value);
GI_INLINE_DECL void adjust_bounds_ (gdouble new_value) noexcept override;

// gboolean Range::change_value (GtkRange* range, GtkScrollType scroll, gdouble new_value);
// gboolean Range::change_value (::GtkRange* range, ::GtkScrollType scroll, gdouble new_value);
GI_INLINE_DECL bool change_value_ (Gtk::ScrollType scroll, gdouble new_value) noexcept override;

// void Range::get_range_border (GtkRange* range, GtkBorder* border_);
// void Range::get_range_border (::GtkRange* range, ::GtkBorder* border_);
GI_INLINE_DECL void get_range_border_ (Gtk::Border border_) noexcept override;

// void Range::get_range_size_request (GtkRange* range, GtkOrientation orientation, gint* minimum, gint* natural);
// void Range::get_range_size_request (::GtkRange* range, ::GtkOrientation orientation, gint minimum, gint natural);
// SKIP; inconsistent in natural pointer depth (1 vs 0), inconsistent in minimum pointer depth (1 vs 0)

// void Range::move_slider (GtkRange* range, GtkScrollType scroll);
// void Range::move_slider (::GtkRange* range, ::GtkScrollType scroll);
GI_INLINE_DECL void move_slider_ (Gtk::ScrollType scroll) noexcept override;

// void Range::value_changed (GtkRange* range);
// void Range::value_changed (::GtkRange* range);
GI_INLINE_DECL void value_changed_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using RangeImpl = detail::ObjectImpl<Range, internal::RangeClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
