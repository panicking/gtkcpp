// AUTO-GENERATED

#ifndef _GI_GTK_BINDINGARG_IMPL_HPP_
#define _GI_GTK_BINDINGARG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static GType _field_arg_type_get (const ::GtkBindingArg* obj) { return (GType) obj->arg_type; }
// GType BindingArg::arg_type (const ::GtkBindingArg* obj);
// GType BindingArg::arg_type (const ::GtkBindingArg* obj);
GType base::BindingArgBase::arg_type_ () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GtkBindingArg* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_arg_type_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingArg*) (gobj_()));
  return _temp_ret;
}

static void _field_arg_type_set (::GtkBindingArg* obj, GType _value) { obj->arg_type = (decltype(obj->arg_type)) _value; }
//  BindingArg::arg_type (::GtkBindingArg* obj, GType _value);
// void BindingArg::arg_type (::GtkBindingArg* obj, GType _value);
void base::BindingArgBase::arg_type_ (GType _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingArg* obj, GType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_arg_type_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBindingArg*) (gobj_()), (GType) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bindingarg_extra_def_impl.hpp>)
#include <gtk/bindingarg_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bindingarg_extra_impl.hpp>)
#include <gtk/bindingarg_extra_impl.hpp>
#endif
#endif

#endif
