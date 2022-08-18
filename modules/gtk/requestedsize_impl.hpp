// AUTO-GENERATED

#ifndef _GI_GTK_REQUESTEDSIZE_IMPL_HPP_
#define _GI_GTK_REQUESTEDSIZE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static gint _field_minimum_size_get (const ::GtkRequestedSize* obj) { return (gint) obj->minimum_size; }
// gint RequestedSize::minimum_size (const ::GtkRequestedSize* obj);
// gint RequestedSize::minimum_size (const ::GtkRequestedSize* obj);
gint base::RequestedSizeBase::minimum_size_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkRequestedSize* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_minimum_size_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRequestedSize*) (gobj_()));
  return _temp_ret;
}

static void _field_minimum_size_set (::GtkRequestedSize* obj, gint _value) { obj->minimum_size = (decltype(obj->minimum_size)) _value; }
//  RequestedSize::minimum_size (::GtkRequestedSize* obj, gint _value);
// void RequestedSize::minimum_size (::GtkRequestedSize* obj, gint _value);
void base::RequestedSizeBase::minimum_size_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRequestedSize* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_minimum_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkRequestedSize*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_natural_size_get (const ::GtkRequestedSize* obj) { return (gint) obj->natural_size; }
// gint RequestedSize::natural_size (const ::GtkRequestedSize* obj);
// gint RequestedSize::natural_size (const ::GtkRequestedSize* obj);
gint base::RequestedSizeBase::natural_size_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkRequestedSize* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_natural_size_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRequestedSize*) (gobj_()));
  return _temp_ret;
}

static void _field_natural_size_set (::GtkRequestedSize* obj, gint _value) { obj->natural_size = (decltype(obj->natural_size)) _value; }
//  RequestedSize::natural_size (::GtkRequestedSize* obj, gint _value);
// void RequestedSize::natural_size (::GtkRequestedSize* obj, gint _value);
void base::RequestedSizeBase::natural_size_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRequestedSize* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_natural_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkRequestedSize*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/requestedsize_extra_def_impl.hpp>)
#include <gtk/requestedsize_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/requestedsize_extra_impl.hpp>)
#include <gtk/requestedsize_extra_impl.hpp>
#endif
#endif

#endif
