// AUTO-GENERATED

#ifndef _GI_GTK_ADJUSTMENT_HPP_
#define _GI_GTK_ADJUSTMENT_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class Adjustment;

namespace base {


#define GI_GTK_ADJUSTMENT_BASE base::AdjustmentBase
class AdjustmentBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::GtkAdjustment BaseObjectType;

AdjustmentBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_adjustment_get_type(); } 

// GtkAdjustment* gtk_adjustment_new (gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size);
// ::GtkAdjustment* gtk_adjustment_new (gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size);
static GI_INLINE_DECL Gtk::Adjustment new_ (gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size) noexcept;

// void gtk_adjustment_changed (GtkAdjustment* adjustment);
// void gtk_adjustment_changed (::GtkAdjustment* adjustment);
// IGNORE; deprecated

// void gtk_adjustment_clamp_page (GtkAdjustment* adjustment, gdouble lower, gdouble upper);
// void gtk_adjustment_clamp_page (::GtkAdjustment* adjustment, gdouble lower, gdouble upper);
GI_INLINE_DECL void clamp_page (gdouble lower, gdouble upper) noexcept;

// void gtk_adjustment_configure (GtkAdjustment* adjustment, gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size);
// void gtk_adjustment_configure (::GtkAdjustment* adjustment, gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size);
GI_INLINE_DECL void configure (gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size) noexcept;

// gdouble gtk_adjustment_get_lower (GtkAdjustment* adjustment);
// gdouble gtk_adjustment_get_lower (::GtkAdjustment* adjustment);
GI_INLINE_DECL gdouble get_lower () noexcept;

// gdouble gtk_adjustment_get_minimum_increment (GtkAdjustment* adjustment);
// gdouble gtk_adjustment_get_minimum_increment (::GtkAdjustment* adjustment);
GI_INLINE_DECL gdouble get_minimum_increment () noexcept;

// gdouble gtk_adjustment_get_page_increment (GtkAdjustment* adjustment);
// gdouble gtk_adjustment_get_page_increment (::GtkAdjustment* adjustment);
GI_INLINE_DECL gdouble get_page_increment () noexcept;

// gdouble gtk_adjustment_get_page_size (GtkAdjustment* adjustment);
// gdouble gtk_adjustment_get_page_size (::GtkAdjustment* adjustment);
GI_INLINE_DECL gdouble get_page_size () noexcept;

// gdouble gtk_adjustment_get_step_increment (GtkAdjustment* adjustment);
// gdouble gtk_adjustment_get_step_increment (::GtkAdjustment* adjustment);
GI_INLINE_DECL gdouble get_step_increment () noexcept;

// gdouble gtk_adjustment_get_upper (GtkAdjustment* adjustment);
// gdouble gtk_adjustment_get_upper (::GtkAdjustment* adjustment);
GI_INLINE_DECL gdouble get_upper () noexcept;

// gdouble gtk_adjustment_get_value (GtkAdjustment* adjustment);
// gdouble gtk_adjustment_get_value (::GtkAdjustment* adjustment);
GI_INLINE_DECL gdouble get_value () noexcept;

// void gtk_adjustment_set_lower (GtkAdjustment* adjustment, gdouble lower);
// void gtk_adjustment_set_lower (::GtkAdjustment* adjustment, gdouble lower);
GI_INLINE_DECL void set_lower (gdouble lower) noexcept;

// void gtk_adjustment_set_page_increment (GtkAdjustment* adjustment, gdouble page_increment);
// void gtk_adjustment_set_page_increment (::GtkAdjustment* adjustment, gdouble page_increment);
GI_INLINE_DECL void set_page_increment (gdouble page_increment) noexcept;

// void gtk_adjustment_set_page_size (GtkAdjustment* adjustment, gdouble page_size);
// void gtk_adjustment_set_page_size (::GtkAdjustment* adjustment, gdouble page_size);
GI_INLINE_DECL void set_page_size (gdouble page_size) noexcept;

// void gtk_adjustment_set_step_increment (GtkAdjustment* adjustment, gdouble step_increment);
// void gtk_adjustment_set_step_increment (::GtkAdjustment* adjustment, gdouble step_increment);
GI_INLINE_DECL void set_step_increment (gdouble step_increment) noexcept;

// void gtk_adjustment_set_upper (GtkAdjustment* adjustment, gdouble upper);
// void gtk_adjustment_set_upper (::GtkAdjustment* adjustment, gdouble upper);
GI_INLINE_DECL void set_upper (gdouble upper) noexcept;

// void gtk_adjustment_set_value (GtkAdjustment* adjustment, gdouble value);
// void gtk_adjustment_set_value (::GtkAdjustment* adjustment, gdouble value);
GI_INLINE_DECL void set_value (gdouble value) noexcept;

// void gtk_adjustment_value_changed (GtkAdjustment* adjustment);
// void gtk_adjustment_value_changed (::GtkAdjustment* adjustment);
// IGNORE; deprecated

gi::property_proxy<gdouble, base::AdjustmentBase> property_lower()
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "lower"); }
const gi::property_proxy<gdouble, base::AdjustmentBase> property_lower() const
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "lower"); }

gi::property_proxy<gdouble, base::AdjustmentBase> property_page_increment()
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "page-increment"); }
const gi::property_proxy<gdouble, base::AdjustmentBase> property_page_increment() const
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "page-increment"); }

gi::property_proxy<gdouble, base::AdjustmentBase> property_page_size()
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "page-size"); }
const gi::property_proxy<gdouble, base::AdjustmentBase> property_page_size() const
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "page-size"); }

gi::property_proxy<gdouble, base::AdjustmentBase> property_step_increment()
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "step-increment"); }
const gi::property_proxy<gdouble, base::AdjustmentBase> property_step_increment() const
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "step-increment"); }

gi::property_proxy<gdouble, base::AdjustmentBase> property_upper()
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "upper"); }
const gi::property_proxy<gdouble, base::AdjustmentBase> property_upper() const
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "upper"); }

gi::property_proxy<gdouble, base::AdjustmentBase> property_value()
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "value"); }
const gi::property_proxy<gdouble, base::AdjustmentBase> property_value() const
{ return gi::property_proxy<gdouble, base::AdjustmentBase> (*this, "value"); }

// signal changed
gi::signal_proxy<void(Gtk::Adjustment)> signal_changed()
{ return gi::signal_proxy<void(Gtk::Adjustment)> (*this, "changed"); }

// signal value-changed
gi::signal_proxy<void(Gtk::Adjustment)> signal_value_changed()
{ return gi::signal_proxy<void(Gtk::Adjustment)> (*this, "value-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/adjustment_extra_def.hpp>)
#include <gtk/adjustment_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/adjustment_extra.hpp>)
#include <gtk/adjustment_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment : public GI_GTK_ADJUSTMENT_BASE
{ typedef GI_GTK_ADJUSTMENT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAdjustment>
{ typedef Gtk::Adjustment type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AdjustmentClassDef
{
typedef AdjustmentClassDef self;
public:
typedef Gtk::Adjustment instance_type;
typedef ::GtkAdjustmentClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Adjustment::changed (GtkAdjustment* adjustment);
// void Adjustment::changed (::GtkAdjustment* adjustment);
// IGNORE; deprecated

// void Adjustment::value_changed (GtkAdjustment* adjustment);
// void Adjustment::value_changed (::GtkAdjustment* adjustment);
// IGNORE; deprecated


};

GI_CLASS_IMPL_BEGIN


class AdjustmentClass: public detail::ClassTemplate<Gtk::impl::internal::AdjustmentClassDef, GObject::impl::internal::InitiallyUnownedClass>
{
typedef AdjustmentClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AdjustmentClassDef, GObject::impl::internal::InitiallyUnownedClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Adjustment::changed (GtkAdjustment* adjustment);
// void Adjustment::changed (::GtkAdjustment* adjustment);
// IGNORE; deprecated

// void Adjustment::value_changed (GtkAdjustment* adjustment);
// void Adjustment::value_changed (::GtkAdjustment* adjustment);
// IGNORE; deprecated


};

} // namespace internal

GI_CLASS_IMPL_END

using AdjustmentImpl = detail::ObjectImpl<Adjustment, internal::AdjustmentClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
