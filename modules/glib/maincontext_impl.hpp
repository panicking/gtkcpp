// AUTO-GENERATED

#ifndef _GI_GLIB_MAINCONTEXT_IMPL_HPP_
#define _GI_GLIB_MAINCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GMainContext* g_main_context_new ();
// ::GMainContext* g_main_context_new ();
GLib::MainContext base::MainContextBase::new_ () noexcept
{
  typedef ::GMainContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMainContext* g_main_context_new_with_flags (GMainContextFlags flags);
// ::GMainContext* g_main_context_new_with_flags (::GMainContextFlags flags);
GLib::MainContext base::MainContextBase::new_with_flags (GLib::MainContextFlags flags) noexcept
{
  typedef ::GMainContext* (*call_wrap_t) (::GMainContextFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_new_with_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GMainContextFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_main_context_acquire (GMainContext* context);
// gboolean g_main_context_acquire (::GMainContext* context);
bool base::MainContextBase::acquire () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMainContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_acquire;
  auto _temp_ret = call_wrap_v ((::GMainContext*) (gobj_()));
  return _temp_ret;
}

// void g_main_context_add_poll (GMainContext* context, GPollFD* fd, gint priority);
// void g_main_context_add_poll (::GMainContext* context, ::GPollFD* fd, gint priority);
void base::MainContextBase::add_poll (GLib::PollFD fd, gint priority) noexcept
{
  typedef void (*call_wrap_t) (::GMainContext* context, ::GPollFD* fd, gint priority);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_add_poll;
  auto priority_to_c = priority;
  auto fd_to_c = gi::unwrap (fd, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMainContext*) (gobj_()), (::GPollFD*) (fd_to_c), (gint) (priority_to_c));
}

// gboolean g_main_context_check (GMainContext* context, gint max_priority, GPollFD* fds, gint n_fds);
// gboolean g_main_context_check (::GMainContext* context, gint max_priority, ::GPollFD** fds, gint n_fds);
// SKIP; inconsistent in fds pointer depth (1 vs 2)

// void g_main_context_dispatch (GMainContext* context);
// void g_main_context_dispatch (::GMainContext* context);
void base::MainContextBase::dispatch () noexcept
{
  typedef void (*call_wrap_t) (::GMainContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_dispatch;
  call_wrap_v ((::GMainContext*) (gobj_()));
}

// GSource* g_main_context_find_source_by_funcs_user_data (GMainContext* context, GSourceFuncs* funcs, gpointer user_data);
// ::GSource* g_main_context_find_source_by_funcs_user_data (::GMainContext* context, ::GSourceFuncs* funcs, void* user_data);
GLib::Source base::MainContextBase::find_source_by_funcs_user_data (GLib::SourceFuncs funcs, void* user_data) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GMainContext* context, ::GSourceFuncs* funcs, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_find_source_by_funcs_user_data;
  auto user_data_to_c = user_data;
  auto funcs_to_c = gi::unwrap (funcs, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GMainContext*) (gobj_()), (::GSourceFuncs*) (funcs_to_c), (void*) (user_data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSource* g_main_context_find_source_by_id (GMainContext* context, guint source_id);
// ::GSource* g_main_context_find_source_by_id (::GMainContext* context, guint source_id);
GLib::Source base::MainContextBase::find_source_by_id (guint source_id) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GMainContext* context, guint source_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_find_source_by_id;
  auto source_id_to_c = source_id;
  auto _temp_ret = call_wrap_v ((::GMainContext*) (gobj_()), (guint) (source_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSource* g_main_context_find_source_by_user_data (GMainContext* context, gpointer user_data);
// ::GSource* g_main_context_find_source_by_user_data (::GMainContext* context, void* user_data);
GLib::Source base::MainContextBase::find_source_by_user_data (void* user_data) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GMainContext* context, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_find_source_by_user_data;
  auto user_data_to_c = user_data;
  auto _temp_ret = call_wrap_v ((::GMainContext*) (gobj_()), (void*) (user_data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// FAILURE on g_main_context_get_poll_func; No such node (<xmlattr>.transfer-ownership)
// void g_main_context_invoke (GMainContext* context, GSourceFunc function, gpointer data);
// void g_main_context_invoke (::GMainContext* context, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable, callback misses scope info

// void g_main_context_invoke_full (GMainContext* context, gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);
// void g_main_context_invoke_full (::GMainContext* context, gint priority, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
void base::MainContextBase::invoke_full (gint priority, GLib::SourceFunc function) noexcept
{
  typedef void (*call_wrap_t) (::GMainContext* context, gint priority, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_invoke_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto priority_to_c = priority;
  call_wrap_v ((::GMainContext*) (gobj_()), (gint) (priority_to_c), (GLib::SourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
}

// gboolean g_main_context_is_owner (GMainContext* context);
// gboolean g_main_context_is_owner (::GMainContext* context);
bool base::MainContextBase::is_owner () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMainContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_is_owner;
  auto _temp_ret = call_wrap_v ((::GMainContext*) (gobj_()));
  return _temp_ret;
}

// gboolean g_main_context_iteration (GMainContext* context, gboolean may_block);
// gboolean g_main_context_iteration (::GMainContext* context, gboolean may_block);
bool base::MainContextBase::iteration (gboolean may_block) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMainContext* context, gboolean may_block);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_iteration;
  auto may_block_to_c = may_block;
  auto _temp_ret = call_wrap_v ((::GMainContext*) (gobj_()), (gboolean) (may_block_to_c));
  return _temp_ret;
}

// gboolean g_main_context_pending (GMainContext* context);
// gboolean g_main_context_pending (::GMainContext* context);
bool base::MainContextBase::pending () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMainContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_pending;
  auto _temp_ret = call_wrap_v ((::GMainContext*) (gobj_()));
  return _temp_ret;
}

// void g_main_context_pop_thread_default (GMainContext* context);
// void g_main_context_pop_thread_default (::GMainContext* context);
void base::MainContextBase::pop_thread_default () noexcept
{
  typedef void (*call_wrap_t) (::GMainContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_pop_thread_default;
  call_wrap_v ((::GMainContext*) (gobj_()));
}

// gboolean g_main_context_prepare (GMainContext* context, gint* priority);
// gboolean g_main_context_prepare (::GMainContext* context, gint* priority);
bool base::MainContextBase::prepare (gint * priority) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMainContext* context, gint* priority);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_prepare;
  gint priority_o {};
  auto _temp_ret = call_wrap_v ((::GMainContext*) (gobj_()), (gint*) (priority ? &priority_o : nullptr));
  if (priority) *priority = priority_o;
  return _temp_ret;
}
std::tuple<bool, gint> base::MainContextBase::prepare () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMainContext* context, gint* priority);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_prepare;
  gint priority_o {};
  auto _temp_ret = call_wrap_v ((::GMainContext*) (gobj_()), (gint*) (&priority_o));
  return std::make_tuple (_temp_ret, priority_o);
}

// void g_main_context_push_thread_default (GMainContext* context);
// void g_main_context_push_thread_default (::GMainContext* context);
void base::MainContextBase::push_thread_default () noexcept
{
  typedef void (*call_wrap_t) (::GMainContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_push_thread_default;
  call_wrap_v ((::GMainContext*) (gobj_()));
}

// gint g_main_context_query (GMainContext* context, gint max_priority, gint* timeout_, GPollFD* fds, gint n_fds);
// gint g_main_context_query (::GMainContext* context, gint max_priority, gint* timeout_, ::GPollFD** fds, gint n_fds);
// SKIP; inconsistent out fds pointer depth (1 vs 2)

// GMainContext* g_main_context_ref (GMainContext* context);
// ::GMainContext* g_main_context_ref (::GMainContext* context);
// IGNORE; marked ignore

// void g_main_context_release (GMainContext* context);
// void g_main_context_release (::GMainContext* context);
void base::MainContextBase::release () noexcept
{
  typedef void (*call_wrap_t) (::GMainContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_release;
  call_wrap_v ((::GMainContext*) (gobj_()));
}

// void g_main_context_remove_poll (GMainContext* context, GPollFD* fd);
// void g_main_context_remove_poll (::GMainContext* context, ::GPollFD* fd);
void base::MainContextBase::remove_poll (GLib::PollFD fd) noexcept
{
  typedef void (*call_wrap_t) (::GMainContext* context, ::GPollFD* fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_remove_poll;
  auto fd_to_c = gi::unwrap (fd, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GMainContext*) (gobj_()), (::GPollFD*) (fd_to_c));
}

// void g_main_context_set_poll_func (GMainContext* context, GPollFunc func);
// void g_main_context_set_poll_func (::GMainContext* context,  func);
// IGNORE; not introspectable, func type  not supported

// void g_main_context_unref (GMainContext* context);
// void g_main_context_unref (::GMainContext* context);
// IGNORE; marked ignore

// gboolean g_main_context_wait (GMainContext* context, GCond* cond, GMutex* mutex);
// gboolean g_main_context_wait (::GMainContext* context, ::GCond* cond,  mutex);
// IGNORE; deprecated

// void g_main_context_wakeup (GMainContext* context);
// void g_main_context_wakeup (::GMainContext* context);
void base::MainContextBase::wakeup () noexcept
{
  typedef void (*call_wrap_t) (::GMainContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_wakeup;
  call_wrap_v ((::GMainContext*) (gobj_()));
}

// GMainContext* g_main_context_default ();
// ::GMainContext* g_main_context_default ();
GLib::MainContext base::MainContextBase::default_ () noexcept
{
  typedef ::GMainContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GMainContext* g_main_context_get_thread_default ();
// ::GMainContext* g_main_context_get_thread_default ();
GLib::MainContext base::MainContextBase::get_thread_default () noexcept
{
  typedef ::GMainContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_get_thread_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GMainContext* g_main_context_ref_thread_default ();
// ::GMainContext* g_main_context_ref_thread_default ();
GLib::MainContext base::MainContextBase::ref_thread_default () noexcept
{
  typedef ::GMainContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_main_context_ref_thread_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/maincontext_extra_def_impl.hpp>)
#include <glib/maincontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/maincontext_extra_impl.hpp>)
#include <glib/maincontext_extra_impl.hpp>
#endif
#endif

#endif
