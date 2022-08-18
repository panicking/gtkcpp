// AUTO-GENERATED

#ifndef _GI_GST_METATRANSFORMCOPY_IMPL_HPP_
#define _GI_GST_METATRANSFORMCOPY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static gboolean _field_region_get (const ::GstMetaTransformCopy* obj) { return (gboolean) obj->region; }
// gboolean MetaTransformCopy::region (const ::GstMetaTransformCopy* obj);
// gboolean MetaTransformCopy::region (const ::GstMetaTransformCopy* obj);
bool base::MetaTransformCopyBase::region_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstMetaTransformCopy* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_region_get;
  auto _temp_ret = call_wrap_v ((const ::GstMetaTransformCopy*) (gobj_()));
  return _temp_ret;
}

static void _field_region_set (::GstMetaTransformCopy* obj, gboolean _value) { obj->region = (decltype(obj->region)) _value; }
//  MetaTransformCopy::region (::GstMetaTransformCopy* obj, gboolean _value);
// void MetaTransformCopy::region (::GstMetaTransformCopy* obj, gboolean _value);
void base::MetaTransformCopyBase::region_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMetaTransformCopy* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_region_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMetaTransformCopy*) (gobj_()), (gboolean) (_value_to_c));
}

static gsize _field_offset_get (const ::GstMetaTransformCopy* obj) { return (gsize) obj->offset; }
// gsize MetaTransformCopy::offset (const ::GstMetaTransformCopy* obj);
// gsize MetaTransformCopy::offset (const ::GstMetaTransformCopy* obj);
gsize base::MetaTransformCopyBase::offset_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstMetaTransformCopy* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_get;
  auto _temp_ret = call_wrap_v ((const ::GstMetaTransformCopy*) (gobj_()));
  return _temp_ret;
}

static void _field_offset_set (::GstMetaTransformCopy* obj, gsize _value) { obj->offset = (decltype(obj->offset)) _value; }
//  MetaTransformCopy::offset (::GstMetaTransformCopy* obj, gsize _value);
// void MetaTransformCopy::offset (::GstMetaTransformCopy* obj, gsize _value);
void base::MetaTransformCopyBase::offset_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMetaTransformCopy* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMetaTransformCopy*) (gobj_()), (gsize) (_value_to_c));
}

static gsize _field_size_get (const ::GstMetaTransformCopy* obj) { return (gsize) obj->size; }
// gsize MetaTransformCopy::size (const ::GstMetaTransformCopy* obj);
// gsize MetaTransformCopy::size (const ::GstMetaTransformCopy* obj);
gsize base::MetaTransformCopyBase::size_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstMetaTransformCopy* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_get;
  auto _temp_ret = call_wrap_v ((const ::GstMetaTransformCopy*) (gobj_()));
  return _temp_ret;
}

static void _field_size_set (::GstMetaTransformCopy* obj, gsize _value) { obj->size = (decltype(obj->size)) _value; }
//  MetaTransformCopy::size (::GstMetaTransformCopy* obj, gsize _value);
// void MetaTransformCopy::size (::GstMetaTransformCopy* obj, gsize _value);
void base::MetaTransformCopyBase::size_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMetaTransformCopy* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMetaTransformCopy*) (gobj_()), (gsize) (_value_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/metatransformcopy_extra_def_impl.hpp>)
#include <gst/metatransformcopy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/metatransformcopy_extra_impl.hpp>)
#include <gst/metatransformcopy_extra_impl.hpp>
#endif
#endif

#endif
