// AUTO-GENERATED

#ifndef _GI_SOUP_RANGE_IMPL_HPP_
#define _GI_SOUP_RANGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

static gint64 _field_start_get (const ::SoupRange* obj) { return (gint64) obj->start; }
// gint64 Range::start (const ::SoupRange* obj);
// gint64 Range::start (const ::SoupRange* obj);
gint64 base::RangeBase::start_ () const noexcept
{
  typedef gint64 (*call_wrap_t) (const ::SoupRange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_get;
  auto _temp_ret = call_wrap_v ((const ::SoupRange*) (gobj_()));
  return _temp_ret;
}

static void _field_start_set (::SoupRange* obj, gint64 _value) { obj->start = (decltype(obj->start)) _value; }
//  Range::start (::SoupRange* obj, gint64 _value);
// void Range::start (::SoupRange* obj, gint64 _value);
void base::RangeBase::start_ (gint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupRange* obj, gint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupRange*) (gobj_()), (gint64) (_value_to_c));
}

static gint64 _field_end_get (const ::SoupRange* obj) { return (gint64) obj->end; }
// gint64 Range::end (const ::SoupRange* obj);
// gint64 Range::end (const ::SoupRange* obj);
gint64 base::RangeBase::end_ () const noexcept
{
  typedef gint64 (*call_wrap_t) (const ::SoupRange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_get;
  auto _temp_ret = call_wrap_v ((const ::SoupRange*) (gobj_()));
  return _temp_ret;
}

static void _field_end_set (::SoupRange* obj, gint64 _value) { obj->end = (decltype(obj->end)) _value; }
//  Range::end (::SoupRange* obj, gint64 _value);
// void Range::end (::SoupRange* obj, gint64 _value);
void base::RangeBase::end_ (gint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupRange* obj, gint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupRange*) (gobj_()), (gint64) (_value_to_c));
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/range_extra_def_impl.hpp>)
#include <soup/range_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/range_extra_impl.hpp>)
#include <soup/range_extra_impl.hpp>
#endif
#endif

#endif
