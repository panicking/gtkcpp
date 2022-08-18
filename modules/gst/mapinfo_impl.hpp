// AUTO-GENERATED

#ifndef _GI_GST_MAPINFO_IMPL_HPP_
#define _GI_GST_MAPINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstMemory* _field_memory_get (const ::GstMapInfo* obj) { return (::GstMemory*) obj->memory; }
// ::GstMemory* MapInfo::memory (const ::GstMapInfo* obj);
// ::GstMemory* MapInfo::memory (const ::GstMapInfo* obj);
Gst::Memory base::MapInfoBase::memory_ () const noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (const ::GstMapInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_memory_get;
  auto _temp_ret = call_wrap_v ((const ::GstMapInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstMapFlags _field_flags_get (const ::GstMapInfo* obj) { return (::GstMapFlags) obj->flags; }
// ::GstMapFlags MapInfo::flags (const ::GstMapInfo* obj);
// ::GstMapFlags MapInfo::flags (const ::GstMapInfo* obj);
Gst::MapFlags base::MapInfoBase::flags_ () const noexcept
{
  typedef ::GstMapFlags (*call_wrap_t) (const ::GstMapInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GstMapInfo*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_flags_set (::GstMapInfo* obj, ::GstMapFlags _value) { obj->flags = (decltype(obj->flags)) _value; }
//  MapInfo::flags (::GstMapInfo* obj, ::GstMapFlags _value);
// void MapInfo::flags (::GstMapInfo* obj, ::GstMapFlags _value);
void base::MapInfoBase::flags_ (Gst::MapFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMapInfo* obj, ::GstMapFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstMapInfo*) (gobj_()), (::GstMapFlags) (_value_to_c));
}

static gsize _field_size_get (const ::GstMapInfo* obj) { return (gsize) obj->size; }
// gsize MapInfo::size (const ::GstMapInfo* obj);
// gsize MapInfo::size (const ::GstMapInfo* obj);
gsize base::MapInfoBase::size_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstMapInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_get;
  auto _temp_ret = call_wrap_v ((const ::GstMapInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_size_set (::GstMapInfo* obj, gsize _value) { obj->size = (decltype(obj->size)) _value; }
//  MapInfo::size (::GstMapInfo* obj, gsize _value);
// void MapInfo::size (::GstMapInfo* obj, gsize _value);
void base::MapInfoBase::size_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMapInfo* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMapInfo*) (gobj_()), (gsize) (_value_to_c));
}

static gsize _field_maxsize_get (const ::GstMapInfo* obj) { return (gsize) obj->maxsize; }
// gsize MapInfo::maxsize (const ::GstMapInfo* obj);
// gsize MapInfo::maxsize (const ::GstMapInfo* obj);
gsize base::MapInfoBase::maxsize_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstMapInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_maxsize_get;
  auto _temp_ret = call_wrap_v ((const ::GstMapInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_maxsize_set (::GstMapInfo* obj, gsize _value) { obj->maxsize = (decltype(obj->maxsize)) _value; }
//  MapInfo::maxsize (::GstMapInfo* obj, gsize _value);
// void MapInfo::maxsize (::GstMapInfo* obj, gsize _value);
void base::MapInfoBase::maxsize_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMapInfo* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_maxsize_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMapInfo*) (gobj_()), (gsize) (_value_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/mapinfo_extra_def_impl.hpp>)
#include <gst/mapinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/mapinfo_extra_impl.hpp>)
#include <gst/mapinfo_extra_impl.hpp>
#endif
#endif

#endif
