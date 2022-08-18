// AUTO-GENERATED

#ifndef _GI_GST_TASK_IMPL_HPP_
#define _GI_GST_TASK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstTask* gst_task_new (GstTaskFunction func, gpointer user_data, GDestroyNotify notify);
// ::GstTask* gst_task_new (Gst::TaskFunction::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
Gst::Task base::TaskBase::new_ (Gst::TaskFunction func) noexcept
{
  typedef ::GstTask* (*call_wrap_t) (Gst::TaskFunction::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_new;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto _temp_ret = call_wrap_v ((Gst::TaskFunction::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_task_cleanup_all ();
// void gst_task_cleanup_all ();
void base::TaskBase::cleanup_all () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_cleanup_all;
  call_wrap_v ();
}

// GstTaskPool* gst_task_get_pool (GstTask* task);
// ::GstTaskPool* gst_task_get_pool (::GstTask* task);
Gst::TaskPool base::TaskBase::get_pool () noexcept
{
  typedef ::GstTaskPool* (*call_wrap_t) (::GstTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_get_pool;
  auto _temp_ret = call_wrap_v ((::GstTask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstTaskState gst_task_get_state (GstTask* task);
// ::GstTaskState gst_task_get_state (::GstTask* task);
Gst::TaskState base::TaskBase::get_state () noexcept
{
  typedef ::GstTaskState (*call_wrap_t) (::GstTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_get_state;
  auto _temp_ret = call_wrap_v ((::GstTask*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gst_task_join (GstTask* task);
// gboolean gst_task_join (::GstTask* task);
bool base::TaskBase::join () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_join;
  auto _temp_ret = call_wrap_v ((::GstTask*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_task_pause (GstTask* task);
// gboolean gst_task_pause (::GstTask* task);
bool base::TaskBase::pause () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_pause;
  auto _temp_ret = call_wrap_v ((::GstTask*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_task_resume (GstTask* task);
// gboolean gst_task_resume (::GstTask* task);
bool base::TaskBase::resume () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_resume;
  auto _temp_ret = call_wrap_v ((::GstTask*) (gobj_()));
  return _temp_ret;
}

// void gst_task_set_enter_callback (GstTask* task, GstTaskThreadFunc enter_func, gpointer user_data, GDestroyNotify notify);
// void gst_task_set_enter_callback (::GstTask* task, Gst::TaskThreadFunc::cfunction_type enter_func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
void base::TaskBase::set_enter_callback (Gst::TaskThreadFunc enter_func) noexcept
{
  typedef void (*call_wrap_t) (::GstTask* task, Gst::TaskThreadFunc::cfunction_type enter_func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_set_enter_callback;
  auto enter_func_wrap_ = enter_func ? unwrap (std::move (enter_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GstTask*) (gobj_()), (Gst::TaskThreadFunc::cfunction_type) (enter_func_wrap_ ? &enter_func_wrap_->wrapper : nullptr), (void*) (enter_func_wrap_), (GLib::DestroyNotify::cfunction_type) (enter_func_wrap_ ? &enter_func_wrap_->destroy : nullptr));
}

// void gst_task_set_leave_callback (GstTask* task, GstTaskThreadFunc leave_func, gpointer user_data, GDestroyNotify notify);
// void gst_task_set_leave_callback (::GstTask* task, Gst::TaskThreadFunc::cfunction_type leave_func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
void base::TaskBase::set_leave_callback (Gst::TaskThreadFunc leave_func) noexcept
{
  typedef void (*call_wrap_t) (::GstTask* task, Gst::TaskThreadFunc::cfunction_type leave_func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_set_leave_callback;
  auto leave_func_wrap_ = leave_func ? unwrap (std::move (leave_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GstTask*) (gobj_()), (Gst::TaskThreadFunc::cfunction_type) (leave_func_wrap_ ? &leave_func_wrap_->wrapper : nullptr), (void*) (leave_func_wrap_), (GLib::DestroyNotify::cfunction_type) (leave_func_wrap_ ? &leave_func_wrap_->destroy : nullptr));
}

// void gst_task_set_lock (GstTask* task, GRecMutex* mutex);
// void gst_task_set_lock (::GstTask* task, ::GRecMutex* mutex);
void base::TaskBase::set_lock (GLib::RecMutex mutex) noexcept
{
  typedef void (*call_wrap_t) (::GstTask* task, ::GRecMutex* mutex);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_set_lock;
  auto mutex_to_c = gi::unwrap (mutex, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstTask*) (gobj_()), (::GRecMutex*) (mutex_to_c));
}

// void gst_task_set_pool (GstTask* task, GstTaskPool* pool);
// void gst_task_set_pool (::GstTask* task, ::GstTaskPool* pool);
void base::TaskBase::set_pool (Gst::TaskPool pool) noexcept
{
  typedef void (*call_wrap_t) (::GstTask* task, ::GstTaskPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_set_pool;
  auto pool_to_c = gi::unwrap (pool, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstTask*) (gobj_()), (::GstTaskPool*) (pool_to_c));
}

// gboolean gst_task_set_state (GstTask* task, GstTaskState state);
// gboolean gst_task_set_state (::GstTask* task, ::GstTaskState state);
bool base::TaskBase::set_state (Gst::TaskState state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstTask* task, ::GstTaskState state);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_set_state;
  auto state_to_c = gi::unwrap (state);
  auto _temp_ret = call_wrap_v ((::GstTask*) (gobj_()), (::GstTaskState) (state_to_c));
  return _temp_ret;
}

// gboolean gst_task_start (GstTask* task);
// gboolean gst_task_start (::GstTask* task);
bool base::TaskBase::start () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_start;
  auto _temp_ret = call_wrap_v ((::GstTask*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_task_stop (GstTask* task);
// gboolean gst_task_stop (::GstTask* task);
bool base::TaskBase::stop () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_stop;
  auto _temp_ret = call_wrap_v ((::GstTask*) (gobj_()));
  return _temp_ret;
}

static ::GstTaskState _field_state_get (const ::GstTask* obj) { return (::GstTaskState) obj->state; }
// ::GstTaskState Task::state (const ::GstTask* obj);
// ::GstTaskState Task::state (const ::GstTask* obj);
Gst::TaskState base::TaskBase::state_ () const noexcept
{
  typedef ::GstTaskState (*call_wrap_t) (const ::GstTask* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::GstTask*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_state_set (::GstTask* obj, ::GstTaskState _value) { obj->state = (decltype(obj->state)) _value; }
//  Task::state (::GstTask* obj, ::GstTaskState _value);
// void Task::state (::GstTask* obj, ::GstTaskState _value);
void base::TaskBase::state_ (Gst::TaskState _value) noexcept
{
  typedef void (*call_wrap_t) (::GstTask* obj, ::GstTaskState _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstTask*) (gobj_()), (::GstTaskState) (_value_to_c));
}

static ::GRecMutex* _field_lock_get (const ::GstTask* obj) { return (::GRecMutex*) obj->lock; }
// ::GRecMutex* Task::lock (const ::GstTask* obj);
// ::GRecMutex* Task::lock (const ::GstTask* obj);
GLib::RecMutex base::TaskBase::lock_ () const noexcept
{
  typedef ::GRecMutex* (*call_wrap_t) (const ::GstTask* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_lock_get;
  auto _temp_ret = call_wrap_v ((const ::GstTask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gboolean _field_running_get (const ::GstTask* obj) { return (gboolean) obj->running; }
// gboolean Task::running (const ::GstTask* obj);
// gboolean Task::running (const ::GstTask* obj);
bool base::TaskBase::running_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTask* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_running_get;
  auto _temp_ret = call_wrap_v ((const ::GstTask*) (gobj_()));
  return _temp_ret;
}

static void _field_running_set (::GstTask* obj, gboolean _value) { obj->running = (decltype(obj->running)) _value; }
//  Task::running (::GstTask* obj, gboolean _value);
// void Task::running (::GstTask* obj, gboolean _value);
void base::TaskBase::running_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GstTask* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_running_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstTask*) (gobj_()), (gboolean) (_value_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/task_extra_def_impl.hpp>)
#include <gst/task_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/task_extra_impl.hpp>)
#include <gst/task_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void TaskClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstTaskClass *methods = (::GstTaskClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
