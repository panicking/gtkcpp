// AUTO-GENERATED

#ifndef _GI_GST_SYSTEMCLOCK_HPP_
#define _GI_GST_SYSTEMCLOCK_HPP_

#include "clock.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Clock;

class SystemClock;

namespace base {


#define GI_GST_SYSTEMCLOCK_BASE base::SystemClockBase
class SystemClockBase : public Gst::Clock
{
typedef Gst::Clock super_type;
public:
typedef ::GstSystemClock BaseObjectType;

SystemClockBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_system_clock_get_type(); } 

// GstClock* gst_system_clock_obtain ();
// ::GstClock* gst_system_clock_obtain ();
static GI_INLINE_DECL Gst::Clock obtain () noexcept;

// void gst_system_clock_set_default (GstClock* new_clock);
// void gst_system_clock_set_default (::GstClock* new_clock);
static GI_INLINE_DECL void set_default (Gst::Clock new_clock) noexcept;
static GI_INLINE_DECL void set_default () noexcept;

gi::property_proxy<Gst::ClockType, base::SystemClockBase> property_clock_type()
{ return gi::property_proxy<Gst::ClockType, base::SystemClockBase> (*this, "clock-type"); }
const gi::property_proxy<Gst::ClockType, base::SystemClockBase> property_clock_type() const
{ return gi::property_proxy<Gst::ClockType, base::SystemClockBase> (*this, "clock-type"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/systemclock_extra_def.hpp>)
#include <gst/systemclock_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/systemclock_extra.hpp>)
#include <gst/systemclock_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class SystemClock : public GI_GST_SYSTEMCLOCK_BASE
{ typedef GI_GST_SYSTEMCLOCK_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstSystemClock>
{ typedef Gst::SystemClock type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class SystemClockClassDef
{
typedef SystemClockClassDef self;
public:
typedef Gst::SystemClock instance_type;
typedef ::GstSystemClockClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SystemClockClass: public detail::ClassTemplate<Gst::impl::internal::SystemClockClassDef, Gst::impl::internal::ClockClass>
{
typedef SystemClockClass self;
typedef detail::ClassTemplate<Gst::impl::internal::SystemClockClassDef, Gst::impl::internal::ClockClass> super;

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

using SystemClockImpl = detail::ObjectImpl<SystemClock, internal::SystemClockClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
