// AUTO-GENERATED

#ifndef _GI_GOBJECT_SIGNALINVOCATIONHINT_IMPL_HPP_
#define _GI_GOBJECT_SIGNALINVOCATIONHINT_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static guint _field_signal_id_get (const ::GSignalInvocationHint* obj) { return (guint) obj->signal_id; }
// guint SignalInvocationHint::signal_id (const ::GSignalInvocationHint* obj);
// guint SignalInvocationHint::signal_id (const ::GSignalInvocationHint* obj);
guint base::SignalInvocationHintBase::signal_id_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GSignalInvocationHint* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signal_id_get;
  auto _temp_ret = call_wrap_v ((const ::GSignalInvocationHint*) (gobj_()));
  return _temp_ret;
}

static void _field_signal_id_set (::GSignalInvocationHint* obj, guint _value) { obj->signal_id = (decltype(obj->signal_id)) _value; }
//  SignalInvocationHint::signal_id (::GSignalInvocationHint* obj, guint _value);
// void SignalInvocationHint::signal_id (::GSignalInvocationHint* obj, guint _value);
void base::SignalInvocationHintBase::signal_id_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GSignalInvocationHint* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signal_id_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GSignalInvocationHint*) (gobj_()), (guint) (_value_to_c));
}

static ::GQuark _field_detail_get (const ::GSignalInvocationHint* obj) { return (::GQuark) obj->detail; }
// ::GQuark SignalInvocationHint::detail (const ::GSignalInvocationHint* obj);
// ::GQuark SignalInvocationHint::detail (const ::GSignalInvocationHint* obj);
GLib::Quark base::SignalInvocationHintBase::detail_ () const noexcept
{
  typedef ::GQuark (*call_wrap_t) (const ::GSignalInvocationHint* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_detail_get;
  auto _temp_ret = call_wrap_v ((const ::GSignalInvocationHint*) (gobj_()));
  return _temp_ret;
}

static void _field_detail_set (::GSignalInvocationHint* obj, ::GQuark _value) { obj->detail = (decltype(obj->detail)) _value; }
//  SignalInvocationHint::detail (::GSignalInvocationHint* obj, ::GQuark _value);
// void SignalInvocationHint::detail (::GSignalInvocationHint* obj, ::GQuark _value);
void base::SignalInvocationHintBase::detail_ (::GQuark _value) noexcept
{
  typedef void (*call_wrap_t) (::GSignalInvocationHint* obj, ::GQuark _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_detail_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GSignalInvocationHint*) (gobj_()), (::GQuark) (_value_to_c));
}

static ::GSignalFlags _field_run_type_get (const ::GSignalInvocationHint* obj) { return (::GSignalFlags) obj->run_type; }
// ::GSignalFlags SignalInvocationHint::run_type (const ::GSignalInvocationHint* obj);
// ::GSignalFlags SignalInvocationHint::run_type (const ::GSignalInvocationHint* obj);
GObject::SignalFlags base::SignalInvocationHintBase::run_type_ () const noexcept
{
  typedef ::GSignalFlags (*call_wrap_t) (const ::GSignalInvocationHint* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_run_type_get;
  auto _temp_ret = call_wrap_v ((const ::GSignalInvocationHint*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_run_type_set (::GSignalInvocationHint* obj, ::GSignalFlags _value) { obj->run_type = (decltype(obj->run_type)) _value; }
//  SignalInvocationHint::run_type (::GSignalInvocationHint* obj, ::GSignalFlags _value);
// void SignalInvocationHint::run_type (::GSignalInvocationHint* obj, ::GSignalFlags _value);
void base::SignalInvocationHintBase::run_type_ (GObject::SignalFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GSignalInvocationHint* obj, ::GSignalFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_run_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GSignalInvocationHint*) (gobj_()), (::GSignalFlags) (_value_to_c));
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/signalinvocationhint_extra_def_impl.hpp>)
#include <gobject/signalinvocationhint_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/signalinvocationhint_extra_impl.hpp>)
#include <gobject/signalinvocationhint_extra_impl.hpp>
#endif
#endif

#endif
