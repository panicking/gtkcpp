// AUTO-GENERATED

#ifndef _GI_GOBJECT_SIGNALQUERY_IMPL_HPP_
#define _GI_GOBJECT_SIGNALQUERY_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static guint _field_signal_id_get (const ::GSignalQuery* obj) { return (guint) obj->signal_id; }
// guint SignalQuery::signal_id (const ::GSignalQuery* obj);
// guint SignalQuery::signal_id (const ::GSignalQuery* obj);
guint base::SignalQueryBase::signal_id_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GSignalQuery* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signal_id_get;
  auto _temp_ret = call_wrap_v ((const ::GSignalQuery*) (gobj_()));
  return _temp_ret;
}

static void _field_signal_id_set (::GSignalQuery* obj, guint _value) { obj->signal_id = (decltype(obj->signal_id)) _value; }
//  SignalQuery::signal_id (::GSignalQuery* obj, guint _value);
// void SignalQuery::signal_id (::GSignalQuery* obj, guint _value);
void base::SignalQueryBase::signal_id_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GSignalQuery* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signal_id_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GSignalQuery*) (gobj_()), (guint) (_value_to_c));
}

static const char* _field_signal_name_get (const ::GSignalQuery* obj) { return (const char*) obj->signal_name; }
// const char* SignalQuery::signal_name (const ::GSignalQuery* obj);
// const char* SignalQuery::signal_name (const ::GSignalQuery* obj);
std::string base::SignalQueryBase::signal_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GSignalQuery* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signal_name_get;
  auto _temp_ret = call_wrap_v ((const ::GSignalQuery*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static GType _field_itype_get (const ::GSignalQuery* obj) { return (GType) obj->itype; }
// GType SignalQuery::itype (const ::GSignalQuery* obj);
// GType SignalQuery::itype (const ::GSignalQuery* obj);
GType base::SignalQueryBase::itype_ () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GSignalQuery* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_itype_get;
  auto _temp_ret = call_wrap_v ((const ::GSignalQuery*) (gobj_()));
  return _temp_ret;
}

static void _field_itype_set (::GSignalQuery* obj, GType _value) { obj->itype = (decltype(obj->itype)) _value; }
//  SignalQuery::itype (::GSignalQuery* obj, GType _value);
// void SignalQuery::itype (::GSignalQuery* obj, GType _value);
void base::SignalQueryBase::itype_ (GType _value) noexcept
{
  typedef void (*call_wrap_t) (::GSignalQuery* obj, GType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_itype_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GSignalQuery*) (gobj_()), (GType) (_value_to_c));
}

static ::GSignalFlags _field_signal_flags_get (const ::GSignalQuery* obj) { return (::GSignalFlags) obj->signal_flags; }
// ::GSignalFlags SignalQuery::signal_flags (const ::GSignalQuery* obj);
// ::GSignalFlags SignalQuery::signal_flags (const ::GSignalQuery* obj);
GObject::SignalFlags base::SignalQueryBase::signal_flags_ () const noexcept
{
  typedef ::GSignalFlags (*call_wrap_t) (const ::GSignalQuery* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signal_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GSignalQuery*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_signal_flags_set (::GSignalQuery* obj, ::GSignalFlags _value) { obj->signal_flags = (decltype(obj->signal_flags)) _value; }
//  SignalQuery::signal_flags (::GSignalQuery* obj, ::GSignalFlags _value);
// void SignalQuery::signal_flags (::GSignalQuery* obj, ::GSignalFlags _value);
void base::SignalQueryBase::signal_flags_ (GObject::SignalFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GSignalQuery* obj, ::GSignalFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signal_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GSignalQuery*) (gobj_()), (::GSignalFlags) (_value_to_c));
}

static GType _field_return_type_get (const ::GSignalQuery* obj) { return (GType) obj->return_type; }
// GType SignalQuery::return_type (const ::GSignalQuery* obj);
// GType SignalQuery::return_type (const ::GSignalQuery* obj);
GType base::SignalQueryBase::return_type_ () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GSignalQuery* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_return_type_get;
  auto _temp_ret = call_wrap_v ((const ::GSignalQuery*) (gobj_()));
  return _temp_ret;
}

static void _field_return_type_set (::GSignalQuery* obj, GType _value) { obj->return_type = (decltype(obj->return_type)) _value; }
//  SignalQuery::return_type (::GSignalQuery* obj, GType _value);
// void SignalQuery::return_type (::GSignalQuery* obj, GType _value);
void base::SignalQueryBase::return_type_ (GType _value) noexcept
{
  typedef void (*call_wrap_t) (::GSignalQuery* obj, GType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_return_type_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GSignalQuery*) (gobj_()), (GType) (_value_to_c));
}

static guint _field_n_params_get (const ::GSignalQuery* obj) { return (guint) obj->n_params; }
// guint SignalQuery::n_params (const ::GSignalQuery* obj);
// guint SignalQuery::n_params (const ::GSignalQuery* obj);
guint base::SignalQueryBase::n_params_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GSignalQuery* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_params_get;
  auto _temp_ret = call_wrap_v ((const ::GSignalQuery*) (gobj_()));
  return _temp_ret;
}

static void _field_n_params_set (::GSignalQuery* obj, guint _value) { obj->n_params = (decltype(obj->n_params)) _value; }
//  SignalQuery::n_params (::GSignalQuery* obj, guint _value);
// void SignalQuery::n_params (::GSignalQuery* obj, guint _value);
void base::SignalQueryBase::n_params_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GSignalQuery* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_params_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GSignalQuery*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/signalquery_extra_def_impl.hpp>)
#include <gobject/signalquery_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/signalquery_extra_impl.hpp>)
#include <gobject/signalquery_extra_impl.hpp>
#endif
#endif

#endif
