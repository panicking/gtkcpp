// AUTO-GENERATED

#ifndef _GI_GTK_FIXEDCHILD_IMPL_HPP_
#define _GI_GTK_FIXEDCHILD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static ::GtkWidget* _field_widget_get (const ::GtkFixedChild* obj) { return (::GtkWidget*) obj->widget; }
// ::GtkWidget* FixedChild::widget (const ::GtkFixedChild* obj);
// ::GtkWidget* FixedChild::widget (const ::GtkFixedChild* obj);
Gtk::Widget base::FixedChildBase::widget_ () const noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (const ::GtkFixedChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_widget_get;
  auto _temp_ret = call_wrap_v ((const ::GtkFixedChild*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint _field_x_get (const ::GtkFixedChild* obj) { return (gint) obj->x; }
// gint FixedChild::x (const ::GtkFixedChild* obj);
// gint FixedChild::x (const ::GtkFixedChild* obj);
gint base::FixedChildBase::x_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkFixedChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GtkFixedChild*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GtkFixedChild* obj, gint _value) { obj->x = (decltype(obj->x)) _value; }
//  FixedChild::x (::GtkFixedChild* obj, gint _value);
// void FixedChild::x (::GtkFixedChild* obj, gint _value);
void base::FixedChildBase::x_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixedChild* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkFixedChild*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_y_get (const ::GtkFixedChild* obj) { return (gint) obj->y; }
// gint FixedChild::y (const ::GtkFixedChild* obj);
// gint FixedChild::y (const ::GtkFixedChild* obj);
gint base::FixedChildBase::y_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkFixedChild* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GtkFixedChild*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GtkFixedChild* obj, gint _value) { obj->y = (decltype(obj->y)) _value; }
//  FixedChild::y (::GtkFixedChild* obj, gint _value);
// void FixedChild::y (::GtkFixedChild* obj, gint _value);
void base::FixedChildBase::y_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkFixedChild* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkFixedChild*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fixedchild_extra_def_impl.hpp>)
#include <gtk/fixedchild_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fixedchild_extra_impl.hpp>)
#include <gtk/fixedchild_extra_impl.hpp>
#endif
#endif

#endif
