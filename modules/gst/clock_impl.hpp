// AUTO-GENERATED

#ifndef _GI_GST_CLOCK_IMPL_HPP_
#define _GI_GST_CLOCK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// gint gst_clock_id_compare_func (gconstpointer id1, gconstpointer id2);
// gint gst_clock_id_compare_func (const void* id1, const void* id2);
gint base::ClockBase::id_compare_func (const void* id1, const void* id2) noexcept
{
  typedef gint (*call_wrap_t) (const void* id1, const void* id2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_id_compare_func;
  auto id2_to_c = id2;
  auto id1_to_c = id1;
  auto _temp_ret = call_wrap_v ((const void*) (id1_to_c), (const void*) (id2_to_c));
  return _temp_ret;
}

// GstClock* gst_clock_id_get_clock (GstClockID id);
// ::GstClock* gst_clock_id_get_clock (::GstClockID id);
Gst::Clock base::ClockBase::id_get_clock (::GstClockID id) noexcept
{
  typedef ::GstClock* (*call_wrap_t) (::GstClockID id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_id_get_clock;
  auto id_to_c = id;
  auto _temp_ret = call_wrap_v ((::GstClockID) (id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstClockTime gst_clock_id_get_time (GstClockID id);
// ::GstClockTime gst_clock_id_get_time (::GstClockID id);
Gst::ClockTime base::ClockBase::id_get_time (::GstClockID id) noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstClockID id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_id_get_time;
  auto id_to_c = id;
  auto _temp_ret = call_wrap_v ((::GstClockID) (id_to_c));
  return _temp_ret;
}

// GstClockID gst_clock_id_ref (GstClockID id);
// ::GstClockID gst_clock_id_ref (::GstClockID id);
// IGNORE; marked ignore

// void gst_clock_id_unref (GstClockID id);
// void gst_clock_id_unref (::GstClockID id);
// IGNORE; marked ignore

// void gst_clock_id_unschedule (GstClockID id);
// void gst_clock_id_unschedule (::GstClockID id);
void base::ClockBase::id_unschedule (::GstClockID id) noexcept
{
  typedef void (*call_wrap_t) (::GstClockID id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_id_unschedule;
  auto id_to_c = id;
  call_wrap_v ((::GstClockID) (id_to_c));
}

// gboolean gst_clock_id_uses_clock (GstClockID id, GstClock* clock);
// gboolean gst_clock_id_uses_clock (::GstClockID id, ::GstClock* clock);
bool base::ClockBase::id_uses_clock (::GstClockID id, Gst::Clock clock) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstClockID id, ::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_id_uses_clock;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none, gi::direction_in);
  auto id_to_c = id;
  auto _temp_ret = call_wrap_v ((::GstClockID) (id_to_c), (::GstClock*) (clock_to_c));
  return _temp_ret;
}

// GstClockReturn gst_clock_id_wait (GstClockID id, GstClockTimeDiff* jitter);
// ::GstClockReturn gst_clock_id_wait (::GstClockID id, ::GstClockTimeDiff* jitter);
Gst::ClockReturn base::ClockBase::id_wait (::GstClockID id, Gst::ClockTimeDiff * jitter) noexcept
{
  typedef ::GstClockReturn (*call_wrap_t) (::GstClockID id, ::GstClockTimeDiff* jitter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_id_wait;
  ::GstClockTimeDiff jitter_o {};
  auto id_to_c = id;
  auto _temp_ret = call_wrap_v ((::GstClockID) (id_to_c), (::GstClockTimeDiff*) (jitter ? &jitter_o : nullptr));
  if (jitter) *jitter = jitter_o;
  return gi::wrap (_temp_ret);
}
std::tuple<Gst::ClockReturn, Gst::ClockTimeDiff> base::ClockBase::id_wait (::GstClockID id) noexcept
{
  typedef ::GstClockReturn (*call_wrap_t) (::GstClockID id, ::GstClockTimeDiff* jitter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_id_wait;
  ::GstClockTimeDiff jitter_o {};
  auto id_to_c = id;
  auto _temp_ret = call_wrap_v ((::GstClockID) (id_to_c), (::GstClockTimeDiff*) (&jitter_o));
  return std::make_tuple (gi::wrap (_temp_ret), jitter_o);
}

// GstClockReturn gst_clock_id_wait_async (GstClockID id, GstClockCallback func, gpointer user_data, GDestroyNotify destroy_data);
// ::GstClockReturn gst_clock_id_wait_async (::GstClockID id, Gst::ClockCallback::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type destroy_data);
Gst::ClockReturn base::ClockBase::id_wait_async (::GstClockID id, Gst::ClockCallback func) noexcept
{
  typedef ::GstClockReturn (*call_wrap_t) (::GstClockID id, Gst::ClockCallback::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type destroy_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_id_wait_async;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto id_to_c = id;
  auto _temp_ret = call_wrap_v ((::GstClockID) (id_to_c), (Gst::ClockCallback::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
  return gi::wrap (_temp_ret);
}

// gboolean gst_clock_add_observation (GstClock* clock, GstClockTime slave, GstClockTime master, gdouble* r_squared);
// gboolean gst_clock_add_observation (::GstClock* clock, ::GstClockTime slave, ::GstClockTime master, gdouble* r_squared);
bool base::ClockBase::add_observation (::GstClockTime slave, ::GstClockTime master, gdouble & r_squared) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstClock* clock, ::GstClockTime slave, ::GstClockTime master, gdouble* r_squared);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_add_observation;
  gdouble r_squared_o {};
  auto master_to_c = master;
  auto slave_to_c = slave;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (slave_to_c), (::GstClockTime) (master_to_c), (gdouble*) (&r_squared_o));
  r_squared = r_squared_o;
  return _temp_ret;
}
std::tuple<bool, gdouble> base::ClockBase::add_observation (::GstClockTime slave, ::GstClockTime master) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstClock* clock, ::GstClockTime slave, ::GstClockTime master, gdouble* r_squared);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_add_observation;
  gdouble r_squared_o {};
  auto master_to_c = master;
  auto slave_to_c = slave;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (slave_to_c), (::GstClockTime) (master_to_c), (gdouble*) (&r_squared_o));
  return std::make_tuple (_temp_ret, r_squared_o);
}

// gboolean gst_clock_add_observation_unapplied (GstClock* clock, GstClockTime slave, GstClockTime master, gdouble* r_squared, GstClockTime* internal, GstClockTime* external, GstClockTime* rate_num, GstClockTime* rate_denom);
// gboolean gst_clock_add_observation_unapplied (::GstClock* clock, ::GstClockTime slave, ::GstClockTime master, gdouble* r_squared, ::GstClockTime* internal, ::GstClockTime* external, ::GstClockTime* rate_num, ::GstClockTime* rate_denom);
bool base::ClockBase::add_observation_unapplied (::GstClockTime slave, ::GstClockTime master, gdouble & r_squared, Gst::ClockTime * internal, Gst::ClockTime * external, Gst::ClockTime * rate_num, Gst::ClockTime * rate_denom) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstClock* clock, ::GstClockTime slave, ::GstClockTime master, gdouble* r_squared, ::GstClockTime* internal, ::GstClockTime* external, ::GstClockTime* rate_num, ::GstClockTime* rate_denom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_add_observation_unapplied;
  ::GstClockTime rate_denom_o {};
  ::GstClockTime rate_num_o {};
  ::GstClockTime external_o {};
  ::GstClockTime internal_o {};
  gdouble r_squared_o {};
  auto master_to_c = master;
  auto slave_to_c = slave;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (slave_to_c), (::GstClockTime) (master_to_c), (gdouble*) (&r_squared_o), (::GstClockTime*) (internal ? &internal_o : nullptr), (::GstClockTime*) (external ? &external_o : nullptr), (::GstClockTime*) (rate_num ? &rate_num_o : nullptr), (::GstClockTime*) (rate_denom ? &rate_denom_o : nullptr));
  if (rate_denom) *rate_denom = rate_denom_o;
  if (rate_num) *rate_num = rate_num_o;
  if (external) *external = external_o;
  if (internal) *internal = internal_o;
  r_squared = r_squared_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, Gst::ClockTime, Gst::ClockTime, Gst::ClockTime, Gst::ClockTime> base::ClockBase::add_observation_unapplied (::GstClockTime slave, ::GstClockTime master) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstClock* clock, ::GstClockTime slave, ::GstClockTime master, gdouble* r_squared, ::GstClockTime* internal, ::GstClockTime* external, ::GstClockTime* rate_num, ::GstClockTime* rate_denom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_add_observation_unapplied;
  ::GstClockTime rate_denom_o {};
  ::GstClockTime rate_num_o {};
  ::GstClockTime external_o {};
  ::GstClockTime internal_o {};
  gdouble r_squared_o {};
  auto master_to_c = master;
  auto slave_to_c = slave;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (slave_to_c), (::GstClockTime) (master_to_c), (gdouble*) (&r_squared_o), (::GstClockTime*) (&internal_o), (::GstClockTime*) (&external_o), (::GstClockTime*) (&rate_num_o), (::GstClockTime*) (&rate_denom_o));
  return std::make_tuple (_temp_ret, r_squared_o, internal_o, external_o, rate_num_o, rate_denom_o);
}

// GstClockTime gst_clock_adjust_unlocked (GstClock* clock, GstClockTime internal);
// ::GstClockTime gst_clock_adjust_unlocked (::GstClock* clock, ::GstClockTime internal);
Gst::ClockTime base::ClockBase::adjust_unlocked (::GstClockTime internal) noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock, ::GstClockTime internal);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_adjust_unlocked;
  auto internal_to_c = internal;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (internal_to_c));
  return _temp_ret;
}

// GstClockTime gst_clock_adjust_with_calibration (GstClock* clock, GstClockTime internal_target, GstClockTime cinternal, GstClockTime cexternal, GstClockTime cnum, GstClockTime cdenom);
// ::GstClockTime gst_clock_adjust_with_calibration (::GstClock* clock, ::GstClockTime internal_target, ::GstClockTime cinternal, ::GstClockTime cexternal, ::GstClockTime cnum, ::GstClockTime cdenom);
Gst::ClockTime base::ClockBase::adjust_with_calibration (::GstClockTime internal_target, ::GstClockTime cinternal, ::GstClockTime cexternal, ::GstClockTime cnum, ::GstClockTime cdenom) noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock, ::GstClockTime internal_target, ::GstClockTime cinternal, ::GstClockTime cexternal, ::GstClockTime cnum, ::GstClockTime cdenom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_adjust_with_calibration;
  auto cdenom_to_c = cdenom;
  auto cnum_to_c = cnum;
  auto cexternal_to_c = cexternal;
  auto cinternal_to_c = cinternal;
  auto internal_target_to_c = internal_target;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (internal_target_to_c), (::GstClockTime) (cinternal_to_c), (::GstClockTime) (cexternal_to_c), (::GstClockTime) (cnum_to_c), (::GstClockTime) (cdenom_to_c));
  return _temp_ret;
}

// void gst_clock_get_calibration (GstClock* clock, GstClockTime* internal, GstClockTime* external, GstClockTime* rate_num, GstClockTime* rate_denom);
// void gst_clock_get_calibration (::GstClock* clock, ::GstClockTime* internal, ::GstClockTime* external, ::GstClockTime* rate_num, ::GstClockTime* rate_denom);
void base::ClockBase::get_calibration (Gst::ClockTime * internal, Gst::ClockTime * external, Gst::ClockTime * rate_num, Gst::ClockTime * rate_denom) noexcept
{
  typedef void (*call_wrap_t) (::GstClock* clock, ::GstClockTime* internal, ::GstClockTime* external, ::GstClockTime* rate_num, ::GstClockTime* rate_denom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_get_calibration;
  ::GstClockTime rate_denom_o {};
  ::GstClockTime rate_num_o {};
  ::GstClockTime external_o {};
  ::GstClockTime internal_o {};
  call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime*) (internal ? &internal_o : nullptr), (::GstClockTime*) (external ? &external_o : nullptr), (::GstClockTime*) (rate_num ? &rate_num_o : nullptr), (::GstClockTime*) (rate_denom ? &rate_denom_o : nullptr));
  if (rate_denom) *rate_denom = rate_denom_o;
  if (rate_num) *rate_num = rate_num_o;
  if (external) *external = external_o;
  if (internal) *internal = internal_o;
}
std::tuple<Gst::ClockTime, Gst::ClockTime, Gst::ClockTime, Gst::ClockTime> base::ClockBase::get_calibration () noexcept
{
  typedef void (*call_wrap_t) (::GstClock* clock, ::GstClockTime* internal, ::GstClockTime* external, ::GstClockTime* rate_num, ::GstClockTime* rate_denom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_get_calibration;
  ::GstClockTime rate_denom_o {};
  ::GstClockTime rate_num_o {};
  ::GstClockTime external_o {};
  ::GstClockTime internal_o {};
  call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime*) (&internal_o), (::GstClockTime*) (&external_o), (::GstClockTime*) (&rate_num_o), (::GstClockTime*) (&rate_denom_o));
  return std::make_tuple (internal_o, external_o, rate_num_o, rate_denom_o);
}

// GstClockTime gst_clock_get_internal_time (GstClock* clock);
// ::GstClockTime gst_clock_get_internal_time (::GstClock* clock);
Gst::ClockTime base::ClockBase::get_internal_time () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_get_internal_time;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()));
  return _temp_ret;
}

// GstClock* gst_clock_get_master (GstClock* clock);
// ::GstClock* gst_clock_get_master (::GstClock* clock);
Gst::Clock base::ClockBase::get_master () noexcept
{
  typedef ::GstClock* (*call_wrap_t) (::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_get_master;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstClockTime gst_clock_get_resolution (GstClock* clock);
// ::GstClockTime gst_clock_get_resolution (::GstClock* clock);
Gst::ClockTime base::ClockBase::get_resolution () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_get_resolution;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()));
  return _temp_ret;
}

// GstClockTime gst_clock_get_time (GstClock* clock);
// ::GstClockTime gst_clock_get_time (::GstClock* clock);
Gst::ClockTime base::ClockBase::get_time () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_get_time;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()));
  return _temp_ret;
}

// GstClockTime gst_clock_get_timeout (GstClock* clock);
// ::GstClockTime gst_clock_get_timeout (::GstClock* clock);
Gst::ClockTime base::ClockBase::get_timeout () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_get_timeout;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_clock_is_synced (GstClock* clock);
// gboolean gst_clock_is_synced (::GstClock* clock);
bool base::ClockBase::is_synced () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_is_synced;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()));
  return _temp_ret;
}

// GstClockID gst_clock_new_periodic_id (GstClock* clock, GstClockTime start_time, GstClockTime interval);
// ::GstClockID gst_clock_new_periodic_id (::GstClock* clock, ::GstClockTime start_time, ::GstClockTime interval);
Gst::ClockID base::ClockBase::new_periodic_id (::GstClockTime start_time, ::GstClockTime interval) noexcept
{
  typedef ::GstClockID (*call_wrap_t) (::GstClock* clock, ::GstClockTime start_time, ::GstClockTime interval);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_new_periodic_id;
  auto interval_to_c = interval;
  auto start_time_to_c = start_time;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (start_time_to_c), (::GstClockTime) (interval_to_c));
  return _temp_ret;
}

// GstClockID gst_clock_new_single_shot_id (GstClock* clock, GstClockTime time);
// ::GstClockID gst_clock_new_single_shot_id (::GstClock* clock, ::GstClockTime time);
Gst::ClockID base::ClockBase::new_single_shot_id (::GstClockTime time) noexcept
{
  typedef ::GstClockID (*call_wrap_t) (::GstClock* clock, ::GstClockTime time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_new_single_shot_id;
  auto time_to_c = time;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (time_to_c));
  return _temp_ret;
}

// gboolean gst_clock_periodic_id_reinit (GstClock* clock, GstClockID id, GstClockTime start_time, GstClockTime interval);
// gboolean gst_clock_periodic_id_reinit (::GstClock* clock, ::GstClockID id, ::GstClockTime start_time, ::GstClockTime interval);
bool base::ClockBase::periodic_id_reinit (::GstClockID id, ::GstClockTime start_time, ::GstClockTime interval) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstClock* clock, ::GstClockID id, ::GstClockTime start_time, ::GstClockTime interval);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_periodic_id_reinit;
  auto interval_to_c = interval;
  auto start_time_to_c = start_time;
  auto id_to_c = id;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockID) (id_to_c), (::GstClockTime) (start_time_to_c), (::GstClockTime) (interval_to_c));
  return _temp_ret;
}

// void gst_clock_set_calibration (GstClock* clock, GstClockTime internal, GstClockTime external, GstClockTime rate_num, GstClockTime rate_denom);
// void gst_clock_set_calibration (::GstClock* clock, ::GstClockTime internal, ::GstClockTime external, ::GstClockTime rate_num, ::GstClockTime rate_denom);
void base::ClockBase::set_calibration (::GstClockTime internal, ::GstClockTime external, ::GstClockTime rate_num, ::GstClockTime rate_denom) noexcept
{
  typedef void (*call_wrap_t) (::GstClock* clock, ::GstClockTime internal, ::GstClockTime external, ::GstClockTime rate_num, ::GstClockTime rate_denom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_set_calibration;
  auto rate_denom_to_c = rate_denom;
  auto rate_num_to_c = rate_num;
  auto external_to_c = external;
  auto internal_to_c = internal;
  call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (internal_to_c), (::GstClockTime) (external_to_c), (::GstClockTime) (rate_num_to_c), (::GstClockTime) (rate_denom_to_c));
}

// gboolean gst_clock_set_master (GstClock* clock, GstClock* master);
// gboolean gst_clock_set_master (::GstClock* clock, ::GstClock* master);
bool base::ClockBase::set_master (Gst::Clock master) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstClock* clock, ::GstClock* master);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_set_master;
  auto master_to_c = gi::unwrap (master, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClock*) (master_to_c));
  return _temp_ret;
}
bool base::ClockBase::set_master () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstClock* clock, ::GstClock* master);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_set_master;
  auto master_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClock*) (master_to_c));
  return _temp_ret;
}

// GstClockTime gst_clock_set_resolution (GstClock* clock, GstClockTime resolution);
// ::GstClockTime gst_clock_set_resolution (::GstClock* clock, ::GstClockTime resolution);
Gst::ClockTime base::ClockBase::set_resolution (::GstClockTime resolution) noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock, ::GstClockTime resolution);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_set_resolution;
  auto resolution_to_c = resolution;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (resolution_to_c));
  return _temp_ret;
}

// void gst_clock_set_synced (GstClock* clock, gboolean synced);
// void gst_clock_set_synced (::GstClock* clock, gboolean synced);
void base::ClockBase::set_synced (gboolean synced) noexcept
{
  typedef void (*call_wrap_t) (::GstClock* clock, gboolean synced);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_set_synced;
  auto synced_to_c = synced;
  call_wrap_v ((::GstClock*) (gobj_()), (gboolean) (synced_to_c));
}

// void gst_clock_set_timeout (GstClock* clock, GstClockTime timeout);
// void gst_clock_set_timeout (::GstClock* clock, ::GstClockTime timeout);
void base::ClockBase::set_timeout (::GstClockTime timeout) noexcept
{
  typedef void (*call_wrap_t) (::GstClock* clock, ::GstClockTime timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_set_timeout;
  auto timeout_to_c = timeout;
  call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (timeout_to_c));
}

// gboolean gst_clock_single_shot_id_reinit (GstClock* clock, GstClockID id, GstClockTime time);
// gboolean gst_clock_single_shot_id_reinit (::GstClock* clock, ::GstClockID id, ::GstClockTime time);
bool base::ClockBase::single_shot_id_reinit (::GstClockID id, ::GstClockTime time) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstClock* clock, ::GstClockID id, ::GstClockTime time);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_single_shot_id_reinit;
  auto time_to_c = time;
  auto id_to_c = id;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockID) (id_to_c), (::GstClockTime) (time_to_c));
  return _temp_ret;
}

// GstClockTime gst_clock_unadjust_unlocked (GstClock* clock, GstClockTime external);
// ::GstClockTime gst_clock_unadjust_unlocked (::GstClock* clock, ::GstClockTime external);
Gst::ClockTime base::ClockBase::unadjust_unlocked (::GstClockTime external) noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock, ::GstClockTime external);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_unadjust_unlocked;
  auto external_to_c = external;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (external_to_c));
  return _temp_ret;
}

// GstClockTime gst_clock_unadjust_with_calibration (GstClock* clock, GstClockTime external_target, GstClockTime cinternal, GstClockTime cexternal, GstClockTime cnum, GstClockTime cdenom);
// ::GstClockTime gst_clock_unadjust_with_calibration (::GstClock* clock, ::GstClockTime external_target, ::GstClockTime cinternal, ::GstClockTime cexternal, ::GstClockTime cnum, ::GstClockTime cdenom);
Gst::ClockTime base::ClockBase::unadjust_with_calibration (::GstClockTime external_target, ::GstClockTime cinternal, ::GstClockTime cexternal, ::GstClockTime cnum, ::GstClockTime cdenom) noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock, ::GstClockTime external_target, ::GstClockTime cinternal, ::GstClockTime cexternal, ::GstClockTime cnum, ::GstClockTime cdenom);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_unadjust_with_calibration;
  auto cdenom_to_c = cdenom;
  auto cnum_to_c = cnum;
  auto cexternal_to_c = cexternal;
  auto cinternal_to_c = cinternal;
  auto external_target_to_c = external_target;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (external_target_to_c), (::GstClockTime) (cinternal_to_c), (::GstClockTime) (cexternal_to_c), (::GstClockTime) (cnum_to_c), (::GstClockTime) (cdenom_to_c));
  return _temp_ret;
}

// gboolean gst_clock_wait_for_sync (GstClock* clock, GstClockTime timeout);
// gboolean gst_clock_wait_for_sync (::GstClock* clock, ::GstClockTime timeout);
bool base::ClockBase::wait_for_sync (::GstClockTime timeout) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstClock* clock, ::GstClockTime timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_clock_wait_for_sync;
  auto timeout_to_c = timeout;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (timeout_to_c));
  return _temp_ret;
}



} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/clock_extra_def_impl.hpp>)
#include <gst/clock_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/clock_extra_impl.hpp>)
#include <gst/clock_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void ClockClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstClockClass *methods = (::GstClockClass *) class_struct;
  (void) methods;

  methods->change_resolution = (decltype (methods->change_resolution)) detail::method_wrapper<self, Gst::ClockTime (*) (::GstClockTime old_resolution, ::GstClockTime new_resolution), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::change_resolution_>;
  methods->get_internal_time = (decltype (methods->get_internal_time)) detail::method_wrapper<self, Gst::ClockTime (*) (), gi::transfer_none_t>::wrapper<&self::get_internal_time_>;
  methods->get_resolution = (decltype (methods->get_resolution)) detail::method_wrapper<self, Gst::ClockTime (*) (), gi::transfer_none_t>::wrapper<&self::get_resolution_>;
  methods->unschedule = (decltype (methods->unschedule)) detail::method_wrapper<self, void (*) (Gst::ClockEntry entry), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::unschedule_>;
  methods->wait_async = (decltype (methods->wait_async)) detail::method_wrapper<self, Gst::ClockReturn (*) (Gst::ClockEntry entry), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::wait_async_>;
}

// GstClockTime Clock::change_resolution (GstClock* clock, GstClockTime old_resolution, GstClockTime new_resolution);
// ::GstClockTime Clock::change_resolution (::GstClock* clock, ::GstClockTime old_resolution, ::GstClockTime new_resolution);
Gst::ClockTime ClockClass::change_resolution_ (::GstClockTime old_resolution, ::GstClockTime new_resolution) noexcept
{
  if (!get_struct_()->change_resolution) return Gst::ClockTime{};
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock, ::GstClockTime old_resolution, ::GstClockTime new_resolution);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->change_resolution;
  auto new_resolution_to_c = new_resolution;
  auto old_resolution_to_c = old_resolution;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockTime) (old_resolution_to_c), (::GstClockTime) (new_resolution_to_c));
  return _temp_ret;
}

// GstClockTime Clock::get_internal_time (GstClock* clock);
// ::GstClockTime Clock::get_internal_time (::GstClock* clock);
Gst::ClockTime ClockClass::get_internal_time_ () noexcept
{
  if (!get_struct_()->get_internal_time) return Gst::ClockTime{};
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_internal_time;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()));
  return _temp_ret;
}

// GstClockTime Clock::get_resolution (GstClock* clock);
// ::GstClockTime Clock::get_resolution (::GstClock* clock);
Gst::ClockTime ClockClass::get_resolution_ () noexcept
{
  if (!get_struct_()->get_resolution) return Gst::ClockTime{};
  typedef ::GstClockTime (*call_wrap_t) (::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_resolution;
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()));
  return _temp_ret;
}

// void Clock::unschedule (GstClock* clock, GstClockEntry* entry);
// void Clock::unschedule (::GstClock* clock, ::GstClockEntry* entry);
void ClockClass::unschedule_ (Gst::ClockEntry entry) noexcept
{
  if (!get_struct_()->unschedule) return ;
  typedef void (*call_wrap_t) (::GstClock* clock, ::GstClockEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unschedule;
  auto entry_to_c = gi::unwrap (entry, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstClock*) (gobj_()), (::GstClockEntry*) (entry_to_c));
}

// GstClockReturn Clock::wait (GstClock* clock, GstClockEntry* entry, GstClockTimeDiff* jitter);
// ::GstClockReturn Clock::wait (::GstClock* clock, ::GstClockEntry* entry, ::GstClockTimeDiff* jitter);
// SKIP; virtual-method out parameter not supported

// GstClockReturn Clock::wait_async (GstClock* clock, GstClockEntry* entry);
// ::GstClockReturn Clock::wait_async (::GstClock* clock, ::GstClockEntry* entry);
Gst::ClockReturn ClockClass::wait_async_ (Gst::ClockEntry entry) noexcept
{
  if (!get_struct_()->wait_async) return Gst::ClockReturn{};
  typedef ::GstClockReturn (*call_wrap_t) (::GstClock* clock, ::GstClockEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->wait_async;
  auto entry_to_c = gi::unwrap (entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstClock*) (gobj_()), (::GstClockEntry*) (entry_to_c));
  return gi::wrap (_temp_ret);
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
