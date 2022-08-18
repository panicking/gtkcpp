// AUTO-GENERATED

#ifndef _GI_GTK_BINDINGSIGNAL_IMPL_HPP_
#define _GI_GTK_BINDINGSIGNAL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static ::GtkBindingSignal* _field_next_get (const ::GtkBindingSignal* obj) { return (::GtkBindingSignal*) obj->next; }
// ::GtkBindingSignal* BindingSignal::next (const ::GtkBindingSignal* obj);
// ::GtkBindingSignal* BindingSignal::next (const ::GtkBindingSignal* obj);
Gtk::BindingSignal base::BindingSignalBase::next_ () const noexcept
{
  typedef ::GtkBindingSignal* (*call_wrap_t) (const ::GtkBindingSignal* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_next_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingSignal*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_signal_name_get (const ::GtkBindingSignal* obj) { return (char*) obj->signal_name; }
// char* BindingSignal::signal_name (const ::GtkBindingSignal* obj);
// char* BindingSignal::signal_name (const ::GtkBindingSignal* obj);
std::string base::BindingSignalBase::signal_name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkBindingSignal* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signal_name_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingSignal*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint _field_n_args_get (const ::GtkBindingSignal* obj) { return (guint) obj->n_args; }
// guint BindingSignal::n_args (const ::GtkBindingSignal* obj);
// guint BindingSignal::n_args (const ::GtkBindingSignal* obj);
guint base::BindingSignalBase::n_args_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkBindingSignal* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_args_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingSignal*) (gobj_()));
  return _temp_ret;
}

static void _field_n_args_set (::GtkBindingSignal* obj, guint _value) { obj->n_args = (decltype(obj->n_args)) _value; }
//  BindingSignal::n_args (::GtkBindingSignal* obj, guint _value);
// void BindingSignal::n_args (::GtkBindingSignal* obj, guint _value);
void base::BindingSignalBase::n_args_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingSignal* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_args_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBindingSignal*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bindingsignal_extra_def_impl.hpp>)
#include <gtk/bindingsignal_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bindingsignal_extra_impl.hpp>)
#include <gtk/bindingsignal_extra_impl.hpp>
#endif
#endif

#endif
