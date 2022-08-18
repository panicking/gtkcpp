// AUTO-GENERATED

#ifndef _GI_GTK_SPINBUTTON_HPP_
#define _GI_GTK_SPINBUTTON_HPP_

#include "entry.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Orientable;

class SpinButton;

namespace base {


#define GI_GTK_SPINBUTTON_BASE base::SpinButtonBase
class SpinButtonBase : public Gtk::Entry
{
typedef Gtk::Entry super_type;
public:
typedef ::GtkSpinButton BaseObjectType;

SpinButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_spin_button_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* gtk_spin_button_new (GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
// ::GtkSpinButton* gtk_spin_button_new (::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
static GI_INLINE_DECL Gtk::SpinButton new_ (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept;
static GI_INLINE_DECL Gtk::SpinButton new_ (gdouble climb_rate, guint digits) noexcept;

// GtkWidget* gtk_spin_button_new_with_range (gdouble min, gdouble max, gdouble step);
// ::GtkSpinButton* gtk_spin_button_new_with_range (gdouble min, gdouble max, gdouble step);
static GI_INLINE_DECL Gtk::SpinButton new_with_range (gdouble min, gdouble max, gdouble step) noexcept;

// void gtk_spin_button_configure (GtkSpinButton* spin_button, GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
// void gtk_spin_button_configure (::GtkSpinButton* spin_button, ::GtkAdjustment* adjustment, gdouble climb_rate, guint digits);
GI_INLINE_DECL void configure (Gtk::Adjustment adjustment, gdouble climb_rate, guint digits) noexcept;
GI_INLINE_DECL void configure (gdouble climb_rate, guint digits) noexcept;

// GtkAdjustment* gtk_spin_button_get_adjustment (GtkSpinButton* spin_button);
// ::GtkAdjustment* gtk_spin_button_get_adjustment (::GtkSpinButton* spin_button);
GI_INLINE_DECL Gtk::Adjustment get_adjustment () noexcept;

// guint gtk_spin_button_get_digits (GtkSpinButton* spin_button);
// guint gtk_spin_button_get_digits (::GtkSpinButton* spin_button);
GI_INLINE_DECL guint get_digits () noexcept;

// void gtk_spin_button_get_increments (GtkSpinButton* spin_button, gdouble* step, gdouble* page);
// void gtk_spin_button_get_increments (::GtkSpinButton* spin_button, gdouble* step, gdouble* page);
GI_INLINE_DECL void get_increments (gdouble * step = nullptr, gdouble * page = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble> get_increments () noexcept;

// gboolean gtk_spin_button_get_numeric (GtkSpinButton* spin_button);
// gboolean gtk_spin_button_get_numeric (::GtkSpinButton* spin_button);
GI_INLINE_DECL bool get_numeric () noexcept;

// void gtk_spin_button_get_range (GtkSpinButton* spin_button, gdouble* min, gdouble* max);
// void gtk_spin_button_get_range (::GtkSpinButton* spin_button, gdouble* min, gdouble* max);
GI_INLINE_DECL void get_range (gdouble * min = nullptr, gdouble * max = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble> get_range () noexcept;

// gboolean gtk_spin_button_get_snap_to_ticks (GtkSpinButton* spin_button);
// gboolean gtk_spin_button_get_snap_to_ticks (::GtkSpinButton* spin_button);
GI_INLINE_DECL bool get_snap_to_ticks () noexcept;

// GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy (GtkSpinButton* spin_button);
// ::GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy (::GtkSpinButton* spin_button);
GI_INLINE_DECL Gtk::SpinButtonUpdatePolicy get_update_policy () noexcept;

// gdouble gtk_spin_button_get_value (GtkSpinButton* spin_button);
// gdouble gtk_spin_button_get_value (::GtkSpinButton* spin_button);
GI_INLINE_DECL gdouble get_value () noexcept;

// gint gtk_spin_button_get_value_as_int (GtkSpinButton* spin_button);
// gint gtk_spin_button_get_value_as_int (::GtkSpinButton* spin_button);
GI_INLINE_DECL gint get_value_as_int () noexcept;

// gboolean gtk_spin_button_get_wrap (GtkSpinButton* spin_button);
// gboolean gtk_spin_button_get_wrap (::GtkSpinButton* spin_button);
GI_INLINE_DECL bool get_wrap () noexcept;

// void gtk_spin_button_set_adjustment (GtkSpinButton* spin_button, GtkAdjustment* adjustment);
// void gtk_spin_button_set_adjustment (::GtkSpinButton* spin_button, ::GtkAdjustment* adjustment);
GI_INLINE_DECL void set_adjustment (Gtk::Adjustment adjustment) noexcept;

// void gtk_spin_button_set_digits (GtkSpinButton* spin_button, guint digits);
// void gtk_spin_button_set_digits (::GtkSpinButton* spin_button, guint digits);
GI_INLINE_DECL void set_digits (guint digits) noexcept;

// void gtk_spin_button_set_increments (GtkSpinButton* spin_button, gdouble step, gdouble page);
// void gtk_spin_button_set_increments (::GtkSpinButton* spin_button, gdouble step, gdouble page);
GI_INLINE_DECL void set_increments (gdouble step, gdouble page) noexcept;

// void gtk_spin_button_set_numeric (GtkSpinButton* spin_button, gboolean numeric);
// void gtk_spin_button_set_numeric (::GtkSpinButton* spin_button, gboolean numeric);
GI_INLINE_DECL void set_numeric (gboolean numeric) noexcept;

// void gtk_spin_button_set_range (GtkSpinButton* spin_button, gdouble min, gdouble max);
// void gtk_spin_button_set_range (::GtkSpinButton* spin_button, gdouble min, gdouble max);
GI_INLINE_DECL void set_range (gdouble min, gdouble max) noexcept;

// void gtk_spin_button_set_snap_to_ticks (GtkSpinButton* spin_button, gboolean snap_to_ticks);
// void gtk_spin_button_set_snap_to_ticks (::GtkSpinButton* spin_button, gboolean snap_to_ticks);
GI_INLINE_DECL void set_snap_to_ticks (gboolean snap_to_ticks) noexcept;

// void gtk_spin_button_set_update_policy (GtkSpinButton* spin_button, GtkSpinButtonUpdatePolicy policy);
// void gtk_spin_button_set_update_policy (::GtkSpinButton* spin_button, ::GtkSpinButtonUpdatePolicy policy);
GI_INLINE_DECL void set_update_policy (Gtk::SpinButtonUpdatePolicy policy) noexcept;

// void gtk_spin_button_set_value (GtkSpinButton* spin_button, gdouble value);
// void gtk_spin_button_set_value (::GtkSpinButton* spin_button, gdouble value);
GI_INLINE_DECL void set_value (gdouble value) noexcept;

// void gtk_spin_button_set_wrap (GtkSpinButton* spin_button, gboolean wrap);
// void gtk_spin_button_set_wrap (::GtkSpinButton* spin_button, gboolean wrap);
GI_INLINE_DECL void set_wrap (gboolean wrap) noexcept;

// void gtk_spin_button_spin (GtkSpinButton* spin_button, GtkSpinType direction, gdouble increment);
// void gtk_spin_button_spin (::GtkSpinButton* spin_button, ::GtkSpinType direction, gdouble increment);
GI_INLINE_DECL void spin (Gtk::SpinType direction, gdouble increment) noexcept;

// void gtk_spin_button_update (GtkSpinButton* spin_button);
// void gtk_spin_button_update (::GtkSpinButton* spin_button);
GI_INLINE_DECL void update () noexcept;

gi::property_proxy<Gtk::Adjustment, base::SpinButtonBase> property_adjustment()
{ return gi::property_proxy<Gtk::Adjustment, base::SpinButtonBase> (*this, "adjustment"); }
const gi::property_proxy<Gtk::Adjustment, base::SpinButtonBase> property_adjustment() const
{ return gi::property_proxy<Gtk::Adjustment, base::SpinButtonBase> (*this, "adjustment"); }

gi::property_proxy<gdouble, base::SpinButtonBase> property_climb_rate()
{ return gi::property_proxy<gdouble, base::SpinButtonBase> (*this, "climb-rate"); }
const gi::property_proxy<gdouble, base::SpinButtonBase> property_climb_rate() const
{ return gi::property_proxy<gdouble, base::SpinButtonBase> (*this, "climb-rate"); }

gi::property_proxy<guint, base::SpinButtonBase> property_digits()
{ return gi::property_proxy<guint, base::SpinButtonBase> (*this, "digits"); }
const gi::property_proxy<guint, base::SpinButtonBase> property_digits() const
{ return gi::property_proxy<guint, base::SpinButtonBase> (*this, "digits"); }

gi::property_proxy<bool, base::SpinButtonBase> property_numeric()
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "numeric"); }
const gi::property_proxy<bool, base::SpinButtonBase> property_numeric() const
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "numeric"); }

gi::property_proxy<bool, base::SpinButtonBase> property_snap_to_ticks()
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "snap-to-ticks"); }
const gi::property_proxy<bool, base::SpinButtonBase> property_snap_to_ticks() const
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "snap-to-ticks"); }

gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinButtonBase> property_update_policy()
{ return gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinButtonBase> (*this, "update-policy"); }
const gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinButtonBase> property_update_policy() const
{ return gi::property_proxy<Gtk::SpinButtonUpdatePolicy, base::SpinButtonBase> (*this, "update-policy"); }

gi::property_proxy<gdouble, base::SpinButtonBase> property_value()
{ return gi::property_proxy<gdouble, base::SpinButtonBase> (*this, "value"); }
const gi::property_proxy<gdouble, base::SpinButtonBase> property_value() const
{ return gi::property_proxy<gdouble, base::SpinButtonBase> (*this, "value"); }

gi::property_proxy<bool, base::SpinButtonBase> property_wrap()
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "wrap"); }
const gi::property_proxy<bool, base::SpinButtonBase> property_wrap() const
{ return gi::property_proxy<bool, base::SpinButtonBase> (*this, "wrap"); }

// signal change-value
gi::signal_proxy<void(Gtk::SpinButton, Gtk::ScrollType scroll)> signal_change_value()
{ return gi::signal_proxy<void(Gtk::SpinButton, Gtk::ScrollType scroll)> (*this, "change-value"); }

// signal input
// SKIP; glib:signal out parameter not supported

// signal output
gi::signal_proxy<bool(Gtk::SpinButton)> signal_output()
{ return gi::signal_proxy<bool(Gtk::SpinButton)> (*this, "output"); }

// signal value-changed
gi::signal_proxy<void(Gtk::SpinButton)> signal_value_changed()
{ return gi::signal_proxy<void(Gtk::SpinButton)> (*this, "value-changed"); }

// signal wrapped
gi::signal_proxy<void(Gtk::SpinButton)> signal_wrapped()
{ return gi::signal_proxy<void(Gtk::SpinButton)> (*this, "wrapped"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/spinbutton_extra_def.hpp>)
#include <gtk/spinbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/spinbutton_extra.hpp>)
#include <gtk/spinbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SpinButton : public GI_GTK_SPINBUTTON_BASE
{ typedef GI_GTK_SPINBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSpinButton>
{ typedef Gtk::SpinButton type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SpinButtonClassDef
{
typedef SpinButtonClassDef self;
public:
typedef Gtk::SpinButton instance_type;
typedef ::GtkSpinButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void SpinButton::change_value (GtkSpinButton* spin_button, GtkScrollType scroll);
// void SpinButton::change_value (::GtkSpinButton* spin_button, ::GtkScrollType scroll);
virtual void change_value_ (Gtk::ScrollType scroll) noexcept = 0;

// gint SpinButton::input (GtkSpinButton* spin_button, gdouble* new_value);
// gint SpinButton::input (::GtkSpinButton* spin_button, gdouble new_value);
// SKIP; inconsistent in new_value pointer depth (1 vs 0)

// gint SpinButton::output (GtkSpinButton* spin_button);
// gint SpinButton::output (::GtkSpinButton* spin_button);
virtual gint output_ () noexcept = 0;

// void SpinButton::value_changed (GtkSpinButton* spin_button);
// void SpinButton::value_changed (::GtkSpinButton* spin_button);
virtual void value_changed_ () noexcept = 0;

// void SpinButton::wrapped (GtkSpinButton* spin_button);
// void SpinButton::wrapped (::GtkSpinButton* spin_button);
virtual void wrapped_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SpinButtonClass: public detail::ClassTemplate<Gtk::impl::internal::SpinButtonClassDef, Gtk::impl::internal::EntryClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef SpinButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SpinButtonClassDef, Gtk::impl::internal::EntryClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;


// void SpinButton::change_value (GtkSpinButton* spin_button, GtkScrollType scroll);
// void SpinButton::change_value (::GtkSpinButton* spin_button, ::GtkScrollType scroll);
GI_INLINE_DECL void change_value_ (Gtk::ScrollType scroll) noexcept override;

// gint SpinButton::input (GtkSpinButton* spin_button, gdouble* new_value);
// gint SpinButton::input (::GtkSpinButton* spin_button, gdouble new_value);
// SKIP; inconsistent in new_value pointer depth (1 vs 0)

// gint SpinButton::output (GtkSpinButton* spin_button);
// gint SpinButton::output (::GtkSpinButton* spin_button);
GI_INLINE_DECL gint output_ () noexcept override;

// void SpinButton::value_changed (GtkSpinButton* spin_button);
// void SpinButton::value_changed (::GtkSpinButton* spin_button);
GI_INLINE_DECL void value_changed_ () noexcept override;

// void SpinButton::wrapped (GtkSpinButton* spin_button);
// void SpinButton::wrapped (::GtkSpinButton* spin_button);
GI_INLINE_DECL void wrapped_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using SpinButtonImpl = detail::ObjectImpl<SpinButton, internal::SpinButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
