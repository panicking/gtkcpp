// AUTO-GENERATED

#ifndef _GI_GST_METAINFO_IMPL_HPP_
#define _GI_GST_METAINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static GType _field_api_get (const ::GstMetaInfo* obj) { return (GType) obj->api; }
// GType MetaInfo::api (const ::GstMetaInfo* obj);
// GType MetaInfo::api (const ::GstMetaInfo* obj);
GType base::MetaInfoBase::api_ () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GstMetaInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_api_get;
  auto _temp_ret = call_wrap_v ((const ::GstMetaInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_api_set (::GstMetaInfo* obj, GType _value) { obj->api = (decltype(obj->api)) _value; }
//  MetaInfo::api (::GstMetaInfo* obj, GType _value);
// void MetaInfo::api (::GstMetaInfo* obj, GType _value);
void base::MetaInfoBase::api_ (GType _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMetaInfo* obj, GType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_api_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMetaInfo*) (gobj_()), (GType) (_value_to_c));
}

static GType _field_type_get (const ::GstMetaInfo* obj) { return (GType) obj->type; }
// GType MetaInfo::type (const ::GstMetaInfo* obj);
// GType MetaInfo::type (const ::GstMetaInfo* obj);
GType base::MetaInfoBase::type_ () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GstMetaInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GstMetaInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_type_set (::GstMetaInfo* obj, GType _value) { obj->type = (decltype(obj->type)) _value; }
//  MetaInfo::type (::GstMetaInfo* obj, GType _value);
// void MetaInfo::type (::GstMetaInfo* obj, GType _value);
void base::MetaInfoBase::type_ (GType _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMetaInfo* obj, GType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMetaInfo*) (gobj_()), (GType) (_value_to_c));
}

static gsize _field_size_get (const ::GstMetaInfo* obj) { return (gsize) obj->size; }
// gsize MetaInfo::size (const ::GstMetaInfo* obj);
// gsize MetaInfo::size (const ::GstMetaInfo* obj);
gsize base::MetaInfoBase::size_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstMetaInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_get;
  auto _temp_ret = call_wrap_v ((const ::GstMetaInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_size_set (::GstMetaInfo* obj, gsize _value) { obj->size = (decltype(obj->size)) _value; }
//  MetaInfo::size (::GstMetaInfo* obj, gsize _value);
// void MetaInfo::size (::GstMetaInfo* obj, gsize _value);
void base::MetaInfoBase::size_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMetaInfo* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMetaInfo*) (gobj_()), (gsize) (_value_to_c));
}

// gboolean gst_meta_info_is_custom (const GstMetaInfo* info);
// gboolean gst_meta_info_is_custom (const ::GstMetaInfo* info);
bool base::MetaInfoBase::is_custom () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstMetaInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_meta_info_is_custom;
  auto _temp_ret = call_wrap_v ((const ::GstMetaInfo*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/metainfo_extra_def_impl.hpp>)
#include <gst/metainfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/metainfo_extra_impl.hpp>)
#include <gst/metainfo_extra_impl.hpp>
#endif
#endif

#endif
