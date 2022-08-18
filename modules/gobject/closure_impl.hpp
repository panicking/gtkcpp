// AUTO-GENERATED

#ifndef _GI_GOBJECT_CLOSURE_IMPL_HPP_
#define _GI_GOBJECT_CLOSURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static guint _field_in_marshal_get (const ::GClosure* obj) { return (guint) obj->in_marshal; }
// guint Closure::in_marshal (const ::GClosure* obj);
// guint Closure::in_marshal (const ::GClosure* obj);
guint base::ClosureBase::in_marshal_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GClosure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_in_marshal_get;
  auto _temp_ret = call_wrap_v ((const ::GClosure*) (gobj_()));
  return _temp_ret;
}

static void _field_in_marshal_set (::GClosure* obj, guint _value) { obj->in_marshal = (decltype(obj->in_marshal)) _value; }
//  Closure::in_marshal (::GClosure* obj, guint _value);
// void Closure::in_marshal (::GClosure* obj, guint _value);
void base::ClosureBase::in_marshal_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_in_marshal_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GClosure*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_is_invalid_get (const ::GClosure* obj) { return (guint) obj->is_invalid; }
// guint Closure::is_invalid (const ::GClosure* obj);
// guint Closure::is_invalid (const ::GClosure* obj);
guint base::ClosureBase::is_invalid_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GClosure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_invalid_get;
  auto _temp_ret = call_wrap_v ((const ::GClosure*) (gobj_()));
  return _temp_ret;
}

static void _field_is_invalid_set (::GClosure* obj, guint _value) { obj->is_invalid = (decltype(obj->is_invalid)) _value; }
//  Closure::is_invalid (::GClosure* obj, guint _value);
// void Closure::is_invalid (::GClosure* obj, guint _value);
void base::ClosureBase::is_invalid_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GClosure* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_invalid_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GClosure*) (gobj_()), (guint) (_value_to_c));
}

// GClosure* g_closure_new_object (guint sizeof_closure, GObject* object);
// ::GClosure* g_closure_new_object (guint sizeof_closure, ::GObject* object);
GObject::Closure base::ClosureBase::new_object (guint sizeof_closure, GObject::Object object) noexcept
{
  typedef ::GClosure* (*call_wrap_t) (guint sizeof_closure, ::GObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) g_closure_new_object;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto sizeof_closure_to_c = sizeof_closure;
  auto _temp_ret = call_wrap_v ((guint) (sizeof_closure_to_c), (::GObject*) (object_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GClosure* g_closure_new_simple (guint sizeof_closure, gpointer data);
// ::GClosure* g_closure_new_simple (guint sizeof_closure, void* data);
GObject::Closure base::ClosureBase::new_simple (guint sizeof_closure, void* data) noexcept
{
  typedef ::GClosure* (*call_wrap_t) (guint sizeof_closure, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_closure_new_simple;
  auto data_to_c = data;
  auto sizeof_closure_to_c = sizeof_closure;
  auto _temp_ret = call_wrap_v ((guint) (sizeof_closure_to_c), (void*) (data_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_closure_add_finalize_notifier (GClosure* closure, gpointer notify_data, GClosureNotify notify_func);
// void g_closure_add_finalize_notifier (::GClosure* closure, void* notify_data,  notify_func);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_add_invalidate_notifier (GClosure* closure, gpointer notify_data, GClosureNotify notify_func);
// void g_closure_add_invalidate_notifier (::GClosure* closure, void* notify_data,  notify_func);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_add_marshal_guards (GClosure* closure, gpointer pre_marshal_data, GClosureNotify pre_marshal_notify, gpointer post_marshal_data, GClosureNotify post_marshal_notify);
// void g_closure_add_marshal_guards (::GClosure* closure, void* pre_marshal_data,  pre_marshal_notify, void* post_marshal_data,  post_marshal_notify);
// IGNORE; not introspectable, post_marshal_notify type  not supported, pre_marshal_notify type  not supported

// void g_closure_invalidate (GClosure* closure);
// void g_closure_invalidate (::GClosure* closure);
void base::ClosureBase::invalidate () noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_closure_invalidate;
  call_wrap_v ((::GClosure*) (gobj_()));
}

// void g_closure_invoke (GClosure* closure, GValue* return_value, guint n_param_values, const GValue* param_values, gpointer invocation_hint);
// void g_closure_invoke (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue** param_values, void* invocation_hint);
// SKIP; inconsistent in param_values pointer depth (1 vs 2)

// GClosure* g_closure_ref (GClosure* closure);
// ::GClosure* g_closure_ref (::GClosure* closure);
// IGNORE; marked ignore

// void g_closure_remove_finalize_notifier (GClosure* closure, gpointer notify_data, GClosureNotify notify_func);
// void g_closure_remove_finalize_notifier (::GClosure* closure, void* notify_data,  notify_func);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_remove_invalidate_notifier (GClosure* closure, gpointer notify_data, GClosureNotify notify_func);
// void g_closure_remove_invalidate_notifier (::GClosure* closure, void* notify_data,  notify_func);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_set_marshal (GClosure* closure, GClosureMarshal marshal);
// void g_closure_set_marshal (::GClosure* closure,  marshal);
// IGNORE; not introspectable, marshal type  not supported

// void g_closure_set_meta_marshal (GClosure* closure, gpointer marshal_data, GClosureMarshal meta_marshal);
// void g_closure_set_meta_marshal (::GClosure* closure, void* marshal_data,  meta_marshal);
// IGNORE; not introspectable, meta_marshal type  not supported

// void g_closure_sink (GClosure* closure);
// void g_closure_sink (::GClosure* closure);
void base::ClosureBase::sink () noexcept
{
  typedef void (*call_wrap_t) (::GClosure* closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_closure_sink;
  call_wrap_v ((::GClosure*) (gobj_()));
}

// void g_closure_unref (GClosure* closure);
// void g_closure_unref (::GClosure* closure);
// IGNORE; marked ignore


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/closure_extra_def_impl.hpp>)
#include <gobject/closure_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/closure_extra_impl.hpp>)
#include <gobject/closure_extra_impl.hpp>
#endif
#endif

#endif
