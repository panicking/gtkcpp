// AUTO-GENERATED

#ifndef _GI_GST_PROMISE_IMPL_HPP_
#define _GI_GST_PROMISE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstPromise* gst_promise_new ();
// ::GstPromise* gst_promise_new ();
Gst::Promise base::PromiseBase::new_ () noexcept
{
  typedef ::GstPromise* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_promise_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstPromise* gst_promise_new_with_change_func (GstPromiseChangeFunc func, gpointer user_data, GDestroyNotify notify);
// ::GstPromise* gst_promise_new_with_change_func (Gst::PromiseChangeFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
Gst::Promise base::PromiseBase::new_with_change_func (Gst::PromiseChangeFunc func) noexcept
{
  typedef ::GstPromise* (*call_wrap_t) (Gst::PromiseChangeFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_promise_new_with_change_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto _temp_ret = call_wrap_v ((Gst::PromiseChangeFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_promise_expire (GstPromise* promise);
// void gst_promise_expire (::GstPromise* promise);
void base::PromiseBase::expire () noexcept
{
  typedef void (*call_wrap_t) (::GstPromise* promise);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_promise_expire;
  call_wrap_v ((::GstPromise*) (gobj_()));
}

// const GstStructure* gst_promise_get_reply (GstPromise* promise);
// const ::GstStructure* gst_promise_get_reply (::GstPromise* promise);
Gst::Structure base::PromiseBase::get_reply () noexcept
{
  typedef const ::GstStructure* (*call_wrap_t) (::GstPromise* promise);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_promise_get_reply;
  auto _temp_ret = call_wrap_v ((::GstPromise*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_promise_interrupt (GstPromise* promise);
// void gst_promise_interrupt (::GstPromise* promise);
void base::PromiseBase::interrupt () noexcept
{
  typedef void (*call_wrap_t) (::GstPromise* promise);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_promise_interrupt;
  call_wrap_v ((::GstPromise*) (gobj_()));
}

// void gst_promise_reply (GstPromise* promise, GstStructure* s);
// void gst_promise_reply (::GstPromise* promise, ::GstStructure* s);
void base::PromiseBase::reply (Gst::Structure s) noexcept
{
  typedef void (*call_wrap_t) (::GstPromise* promise, ::GstStructure* s);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_promise_reply;
  auto s_to_c = gi::unwrap (s, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstPromise*) (gobj_()), (::GstStructure*) (s_to_c));
}
void base::PromiseBase::reply () noexcept
{
  typedef void (*call_wrap_t) (::GstPromise* promise, ::GstStructure* s);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_promise_reply;
  auto s_to_c = nullptr;
  call_wrap_v ((::GstPromise*) (gobj_()), (::GstStructure*) (s_to_c));
}

// GstPromiseResult gst_promise_wait (GstPromise* promise);
// ::GstPromiseResult gst_promise_wait (::GstPromise* promise);
Gst::PromiseResult base::PromiseBase::wait () noexcept
{
  typedef ::GstPromiseResult (*call_wrap_t) (::GstPromise* promise);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_promise_wait;
  auto _temp_ret = call_wrap_v ((::GstPromise*) (gobj_()));
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/promise_extra_def_impl.hpp>)
#include <gst/promise_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/promise_extra_impl.hpp>)
#include <gst/promise_extra_impl.hpp>
#endif
#endif

#endif
