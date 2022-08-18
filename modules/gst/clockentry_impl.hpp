// AUTO-GENERATED

#ifndef _GI_GST_CLOCKENTRY_IMPL_HPP_
#define _GI_GST_CLOCKENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static gint _field_refcount_get (const ::GstClockEntry* obj) { return (gint) obj->refcount; }
// gint ClockEntry::refcount (const ::GstClockEntry* obj);
// gint ClockEntry::refcount (const ::GstClockEntry* obj);
gint base::ClockEntryBase::refcount_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstClockEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_refcount_get;
  auto _temp_ret = call_wrap_v ((const ::GstClockEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_refcount_set (::GstClockEntry* obj, gint _value) { obj->refcount = (decltype(obj->refcount)) _value; }
//  ClockEntry::refcount (::GstClockEntry* obj, gint _value);
// void ClockEntry::refcount (::GstClockEntry* obj, gint _value);
void base::ClockEntryBase::refcount_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GstClockEntry* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_refcount_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstClockEntry*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/clockentry_extra_def_impl.hpp>)
#include <gst/clockentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/clockentry_extra_impl.hpp>)
#include <gst/clockentry_extra_impl.hpp>
#endif
#endif

#endif
