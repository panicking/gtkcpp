// AUTO-GENERATED

#ifndef _GI_GST_CLOCK_HPP_
#define _GI_GST_CLOCK_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class ClockEntry;

class Clock;

namespace base {


#define GI_GST_CLOCK_BASE base::ClockBase
class ClockBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstClock BaseObjectType;

ClockBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_clock_get_type(); } 

// gint gst_clock_id_compare_func (gconstpointer id1, gconstpointer id2);
// gint gst_clock_id_compare_func (const void* id1, const void* id2);
static GI_INLINE_DECL gint id_compare_func (const void* id1, const void* id2) noexcept;

// GstClock* gst_clock_id_get_clock (GstClockID id);
// ::GstClock* gst_clock_id_get_clock (::GstClockID id);
static GI_INLINE_DECL Gst::Clock id_get_clock (::GstClockID id) noexcept;

// GstClockTime gst_clock_id_get_time (GstClockID id);
// ::GstClockTime gst_clock_id_get_time (::GstClockID id);
static GI_INLINE_DECL Gst::ClockTime id_get_time (::GstClockID id) noexcept;

// GstClockID gst_clock_id_ref (GstClockID id);
// ::GstClockID gst_clock_id_ref (::GstClockID id);
// IGNORE; marked ignore

// void gst_clock_id_unref (GstClockID id);
// void gst_clock_id_unref (::GstClockID id);
// IGNORE; marked ignore

// void gst_clock_id_unschedule (GstClockID id);
// void gst_clock_id_unschedule (::GstClockID id);
static GI_INLINE_DECL void id_unschedule (::GstClockID id) noexcept;

// gboolean gst_clock_id_uses_clock (GstClockID id, GstClock* clock);
// gboolean gst_clock_id_uses_clock (::GstClockID id, ::GstClock* clock);
static GI_INLINE_DECL bool id_uses_clock (::GstClockID id, Gst::Clock clock) noexcept;

// GstClockReturn gst_clock_id_wait (GstClockID id, GstClockTimeDiff* jitter);
// ::GstClockReturn gst_clock_id_wait (::GstClockID id, ::GstClockTimeDiff* jitter);
static GI_INLINE_DECL Gst::ClockReturn id_wait (::GstClockID id, Gst::ClockTimeDiff * jitter = nullptr) noexcept;
static GI_INLINE_DECL std::tuple<Gst::ClockReturn, Gst::ClockTimeDiff> id_wait (::GstClockID id) noexcept;

// GstClockReturn gst_clock_id_wait_async (GstClockID id, GstClockCallback func, gpointer user_data, GDestroyNotify destroy_data);
// ::GstClockReturn gst_clock_id_wait_async (::GstClockID id, Gst::ClockCallback::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type destroy_data);
static GI_INLINE_DECL Gst::ClockReturn id_wait_async (::GstClockID id, Gst::ClockCallback func) noexcept;

// gboolean gst_clock_add_observation (GstClock* clock, GstClockTime slave, GstClockTime master, gdouble* r_squared);
// gboolean gst_clock_add_observation (::GstClock* clock, ::GstClockTime slave, ::GstClockTime master, gdouble* r_squared);
GI_INLINE_DECL bool add_observation (::GstClockTime slave, ::GstClockTime master, gdouble & r_squared) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> add_observation (::GstClockTime slave, ::GstClockTime master) noexcept;

// gboolean gst_clock_add_observation_unapplied (GstClock* clock, GstClockTime slave, GstClockTime master, gdouble* r_squared, GstClockTime* internal, GstClockTime* external, GstClockTime* rate_num, GstClockTime* rate_denom);
// gboolean gst_clock_add_observation_unapplied (::GstClock* clock, ::GstClockTime slave, ::GstClockTime master, gdouble* r_squared, ::GstClockTime* internal, ::GstClockTime* external, ::GstClockTime* rate_num, ::GstClockTime* rate_denom);
GI_INLINE_DECL bool add_observation_unapplied (::GstClockTime slave, ::GstClockTime master, gdouble & r_squared, Gst::ClockTime * internal = nullptr, Gst::ClockTime * external = nullptr, Gst::ClockTime * rate_num = nullptr, Gst::ClockTime * rate_denom = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble, Gst::ClockTime, Gst::ClockTime, Gst::ClockTime, Gst::ClockTime> add_observation_unapplied (::GstClockTime slave, ::GstClockTime master) noexcept;

// GstClockTime gst_clock_adjust_unlocked (GstClock* clock, GstClockTime internal);
// ::GstClockTime gst_clock_adjust_unlocked (::GstClock* clock, ::GstClockTime internal);
GI_INLINE_DECL Gst::ClockTime adjust_unlocked (::GstClockTime internal) noexcept;

// GstClockTime gst_clock_adjust_with_calibration (GstClock* clock, GstClockTime internal_target, GstClockTime cinternal, GstClockTime cexternal, GstClockTime cnum, GstClockTime cdenom);
// ::GstClockTime gst_clock_adjust_with_calibration (::GstClock* clock, ::GstClockTime internal_target, ::GstClockTime cinternal, ::GstClockTime cexternal, ::GstClockTime cnum, ::GstClockTime cdenom);
GI_INLINE_DECL Gst::ClockTime adjust_with_calibration (::GstClockTime internal_target, ::GstClockTime cinternal, ::GstClockTime cexternal, ::GstClockTime cnum, ::GstClockTime cdenom) noexcept;

// void gst_clock_get_calibration (GstClock* clock, GstClockTime* internal, GstClockTime* external, GstClockTime* rate_num, GstClockTime* rate_denom);
// void gst_clock_get_calibration (::GstClock* clock, ::GstClockTime* internal, ::GstClockTime* external, ::GstClockTime* rate_num, ::GstClockTime* rate_denom);
GI_INLINE_DECL void get_calibration (Gst::ClockTime * internal = nullptr, Gst::ClockTime * external = nullptr, Gst::ClockTime * rate_num = nullptr, Gst::ClockTime * rate_denom = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gst::ClockTime, Gst::ClockTime, Gst::ClockTime, Gst::ClockTime> get_calibration () noexcept;

// GstClockTime gst_clock_get_internal_time (GstClock* clock);
// ::GstClockTime gst_clock_get_internal_time (::GstClock* clock);
GI_INLINE_DECL Gst::ClockTime get_internal_time () noexcept;

// GstClock* gst_clock_get_master (GstClock* clock);
// ::GstClock* gst_clock_get_master (::GstClock* clock);
GI_INLINE_DECL Gst::Clock get_master () noexcept;

// GstClockTime gst_clock_get_resolution (GstClock* clock);
// ::GstClockTime gst_clock_get_resolution (::GstClock* clock);
GI_INLINE_DECL Gst::ClockTime get_resolution () noexcept;

// GstClockTime gst_clock_get_time (GstClock* clock);
// ::GstClockTime gst_clock_get_time (::GstClock* clock);
GI_INLINE_DECL Gst::ClockTime get_time () noexcept;

// GstClockTime gst_clock_get_timeout (GstClock* clock);
// ::GstClockTime gst_clock_get_timeout (::GstClock* clock);
GI_INLINE_DECL Gst::ClockTime get_timeout () noexcept;

// gboolean gst_clock_is_synced (GstClock* clock);
// gboolean gst_clock_is_synced (::GstClock* clock);
GI_INLINE_DECL bool is_synced () noexcept;

// GstClockID gst_clock_new_periodic_id (GstClock* clock, GstClockTime start_time, GstClockTime interval);
// ::GstClockID gst_clock_new_periodic_id (::GstClock* clock, ::GstClockTime start_time, ::GstClockTime interval);
GI_INLINE_DECL Gst::ClockID new_periodic_id (::GstClockTime start_time, ::GstClockTime interval) noexcept;

// GstClockID gst_clock_new_single_shot_id (GstClock* clock, GstClockTime time);
// ::GstClockID gst_clock_new_single_shot_id (::GstClock* clock, ::GstClockTime time);
GI_INLINE_DECL Gst::ClockID new_single_shot_id (::GstClockTime time) noexcept;

// gboolean gst_clock_periodic_id_reinit (GstClock* clock, GstClockID id, GstClockTime start_time, GstClockTime interval);
// gboolean gst_clock_periodic_id_reinit (::GstClock* clock, ::GstClockID id, ::GstClockTime start_time, ::GstClockTime interval);
GI_INLINE_DECL bool periodic_id_reinit (::GstClockID id, ::GstClockTime start_time, ::GstClockTime interval) noexcept;

// void gst_clock_set_calibration (GstClock* clock, GstClockTime internal, GstClockTime external, GstClockTime rate_num, GstClockTime rate_denom);
// void gst_clock_set_calibration (::GstClock* clock, ::GstClockTime internal, ::GstClockTime external, ::GstClockTime rate_num, ::GstClockTime rate_denom);
GI_INLINE_DECL void set_calibration (::GstClockTime internal, ::GstClockTime external, ::GstClockTime rate_num, ::GstClockTime rate_denom) noexcept;

// gboolean gst_clock_set_master (GstClock* clock, GstClock* master);
// gboolean gst_clock_set_master (::GstClock* clock, ::GstClock* master);
GI_INLINE_DECL bool set_master (Gst::Clock master) noexcept;
GI_INLINE_DECL bool set_master () noexcept;

// GstClockTime gst_clock_set_resolution (GstClock* clock, GstClockTime resolution);
// ::GstClockTime gst_clock_set_resolution (::GstClock* clock, ::GstClockTime resolution);
GI_INLINE_DECL Gst::ClockTime set_resolution (::GstClockTime resolution) noexcept;

// void gst_clock_set_synced (GstClock* clock, gboolean synced);
// void gst_clock_set_synced (::GstClock* clock, gboolean synced);
GI_INLINE_DECL void set_synced (gboolean synced) noexcept;

// void gst_clock_set_timeout (GstClock* clock, GstClockTime timeout);
// void gst_clock_set_timeout (::GstClock* clock, ::GstClockTime timeout);
GI_INLINE_DECL void set_timeout (::GstClockTime timeout) noexcept;

// gboolean gst_clock_single_shot_id_reinit (GstClock* clock, GstClockID id, GstClockTime time);
// gboolean gst_clock_single_shot_id_reinit (::GstClock* clock, ::GstClockID id, ::GstClockTime time);
GI_INLINE_DECL bool single_shot_id_reinit (::GstClockID id, ::GstClockTime time) noexcept;

// GstClockTime gst_clock_unadjust_unlocked (GstClock* clock, GstClockTime external);
// ::GstClockTime gst_clock_unadjust_unlocked (::GstClock* clock, ::GstClockTime external);
GI_INLINE_DECL Gst::ClockTime unadjust_unlocked (::GstClockTime external) noexcept;

// GstClockTime gst_clock_unadjust_with_calibration (GstClock* clock, GstClockTime external_target, GstClockTime cinternal, GstClockTime cexternal, GstClockTime cnum, GstClockTime cdenom);
// ::GstClockTime gst_clock_unadjust_with_calibration (::GstClock* clock, ::GstClockTime external_target, ::GstClockTime cinternal, ::GstClockTime cexternal, ::GstClockTime cnum, ::GstClockTime cdenom);
GI_INLINE_DECL Gst::ClockTime unadjust_with_calibration (::GstClockTime external_target, ::GstClockTime cinternal, ::GstClockTime cexternal, ::GstClockTime cnum, ::GstClockTime cdenom) noexcept;

// gboolean gst_clock_wait_for_sync (GstClock* clock, GstClockTime timeout);
// gboolean gst_clock_wait_for_sync (::GstClock* clock, ::GstClockTime timeout);
GI_INLINE_DECL bool wait_for_sync (::GstClockTime timeout) noexcept;

gi::property_proxy<guint64, base::ClockBase> property_timeout()
{ return gi::property_proxy<guint64, base::ClockBase> (*this, "timeout"); }
const gi::property_proxy<guint64, base::ClockBase> property_timeout() const
{ return gi::property_proxy<guint64, base::ClockBase> (*this, "timeout"); }

gi::property_proxy<gint, base::ClockBase> property_window_size()
{ return gi::property_proxy<gint, base::ClockBase> (*this, "window-size"); }
const gi::property_proxy<gint, base::ClockBase> property_window_size() const
{ return gi::property_proxy<gint, base::ClockBase> (*this, "window-size"); }

gi::property_proxy<gint, base::ClockBase> property_window_threshold()
{ return gi::property_proxy<gint, base::ClockBase> (*this, "window-threshold"); }
const gi::property_proxy<gint, base::ClockBase> property_window_threshold() const
{ return gi::property_proxy<gint, base::ClockBase> (*this, "window-threshold"); }

// signal synced
gi::signal_proxy<void(Gst::Clock, gboolean synced)> signal_synced()
{ return gi::signal_proxy<void(Gst::Clock, gboolean synced)> (*this, "synced"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/clock_extra_def.hpp>)
#include <gst/clock_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/clock_extra.hpp>)
#include <gst/clock_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Clock : public GI_GST_CLOCK_BASE
{ typedef GI_GST_CLOCK_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstClock>
{ typedef Gst::Clock type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class ClockClassDef
{
typedef ClockClassDef self;
public:
typedef Gst::Clock instance_type;
typedef ::GstClockClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GstClockTime Clock::change_resolution (GstClock* clock, GstClockTime old_resolution, GstClockTime new_resolution);
// ::GstClockTime Clock::change_resolution (::GstClock* clock, ::GstClockTime old_resolution, ::GstClockTime new_resolution);
virtual Gst::ClockTime change_resolution_ (::GstClockTime old_resolution, ::GstClockTime new_resolution) noexcept = 0;

// GstClockTime Clock::get_internal_time (GstClock* clock);
// ::GstClockTime Clock::get_internal_time (::GstClock* clock);
virtual Gst::ClockTime get_internal_time_ () noexcept = 0;

// GstClockTime Clock::get_resolution (GstClock* clock);
// ::GstClockTime Clock::get_resolution (::GstClock* clock);
virtual Gst::ClockTime get_resolution_ () noexcept = 0;

// void Clock::unschedule (GstClock* clock, GstClockEntry* entry);
// void Clock::unschedule (::GstClock* clock, ::GstClockEntry* entry);
virtual void unschedule_ (Gst::ClockEntry entry) noexcept = 0;

// GstClockReturn Clock::wait (GstClock* clock, GstClockEntry* entry, GstClockTimeDiff* jitter);
// ::GstClockReturn Clock::wait (::GstClock* clock, ::GstClockEntry* entry, ::GstClockTimeDiff* jitter);
// SKIP; virtual-method out parameter not supported

// GstClockReturn Clock::wait_async (GstClock* clock, GstClockEntry* entry);
// ::GstClockReturn Clock::wait_async (::GstClock* clock, ::GstClockEntry* entry);
virtual Gst::ClockReturn wait_async_ (Gst::ClockEntry entry) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ClockClass: public detail::ClassTemplate<Gst::impl::internal::ClockClassDef, Gst::impl::internal::ObjectClass>
{
typedef ClockClass self;
typedef detail::ClassTemplate<Gst::impl::internal::ClockClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GstClockTime Clock::change_resolution (GstClock* clock, GstClockTime old_resolution, GstClockTime new_resolution);
// ::GstClockTime Clock::change_resolution (::GstClock* clock, ::GstClockTime old_resolution, ::GstClockTime new_resolution);
GI_INLINE_DECL Gst::ClockTime change_resolution_ (::GstClockTime old_resolution, ::GstClockTime new_resolution) noexcept override;

// GstClockTime Clock::get_internal_time (GstClock* clock);
// ::GstClockTime Clock::get_internal_time (::GstClock* clock);
GI_INLINE_DECL Gst::ClockTime get_internal_time_ () noexcept override;

// GstClockTime Clock::get_resolution (GstClock* clock);
// ::GstClockTime Clock::get_resolution (::GstClock* clock);
GI_INLINE_DECL Gst::ClockTime get_resolution_ () noexcept override;

// void Clock::unschedule (GstClock* clock, GstClockEntry* entry);
// void Clock::unschedule (::GstClock* clock, ::GstClockEntry* entry);
GI_INLINE_DECL void unschedule_ (Gst::ClockEntry entry) noexcept override;

// GstClockReturn Clock::wait (GstClock* clock, GstClockEntry* entry, GstClockTimeDiff* jitter);
// ::GstClockReturn Clock::wait (::GstClock* clock, ::GstClockEntry* entry, ::GstClockTimeDiff* jitter);
// SKIP; virtual-method out parameter not supported

// GstClockReturn Clock::wait_async (GstClock* clock, GstClockEntry* entry);
// ::GstClockReturn Clock::wait_async (::GstClock* clock, ::GstClockEntry* entry);
GI_INLINE_DECL Gst::ClockReturn wait_async_ (Gst::ClockEntry entry) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ClockImpl = detail::ObjectImpl<Clock, internal::ClockClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
