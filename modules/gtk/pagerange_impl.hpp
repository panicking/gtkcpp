// AUTO-GENERATED

#ifndef _GI_GTK_PAGERANGE_IMPL_HPP_
#define _GI_GTK_PAGERANGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static gint _field_start_get (const ::GtkPageRange* obj) { return (gint) obj->start; }
// gint PageRange::start (const ::GtkPageRange* obj);
// gint PageRange::start (const ::GtkPageRange* obj);
gint base::PageRangeBase::start_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkPageRange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_get;
  auto _temp_ret = call_wrap_v ((const ::GtkPageRange*) (gobj_()));
  return _temp_ret;
}

static void _field_start_set (::GtkPageRange* obj, gint _value) { obj->start = (decltype(obj->start)) _value; }
//  PageRange::start (::GtkPageRange* obj, gint _value);
// void PageRange::start (::GtkPageRange* obj, gint _value);
void base::PageRangeBase::start_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageRange* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkPageRange*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_end_get (const ::GtkPageRange* obj) { return (gint) obj->end; }
// gint PageRange::end (const ::GtkPageRange* obj);
// gint PageRange::end (const ::GtkPageRange* obj);
gint base::PageRangeBase::end_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkPageRange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_get;
  auto _temp_ret = call_wrap_v ((const ::GtkPageRange*) (gobj_()));
  return _temp_ret;
}

static void _field_end_set (::GtkPageRange* obj, gint _value) { obj->end = (decltype(obj->end)) _value; }
//  PageRange::end (::GtkPageRange* obj, gint _value);
// void PageRange::end (::GtkPageRange* obj, gint _value);
void base::PageRangeBase::end_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPageRange* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkPageRange*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/pagerange_extra_def_impl.hpp>)
#include <gtk/pagerange_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/pagerange_extra_impl.hpp>)
#include <gtk/pagerange_extra_impl.hpp>
#endif
#endif

#endif
