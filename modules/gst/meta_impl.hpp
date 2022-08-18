// AUTO-GENERATED

#ifndef _GI_GST_META_IMPL_HPP_
#define _GI_GST_META_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstMetaFlags _field_flags_get (const ::GstMeta* obj) { return (::GstMetaFlags) obj->flags; }
// ::GstMetaFlags Meta::flags (const ::GstMeta* obj);
// ::GstMetaFlags Meta::flags (const ::GstMeta* obj);
Gst::MetaFlags base::MetaBase::flags_ () const noexcept
{
  typedef ::GstMetaFlags (*call_wrap_t) (const ::GstMeta* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GstMeta*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_flags_set (::GstMeta* obj, ::GstMetaFlags _value) { obj->flags = (decltype(obj->flags)) _value; }
//  Meta::flags (::GstMeta* obj, ::GstMetaFlags _value);
// void Meta::flags (::GstMeta* obj, ::GstMetaFlags _value);
void base::MetaBase::flags_ (Gst::MetaFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMeta* obj, ::GstMetaFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstMeta*) (gobj_()), (::GstMetaFlags) (_value_to_c));
}

static const ::GstMetaInfo* _field_info_get (const ::GstMeta* obj) { return (const ::GstMetaInfo*) obj->info; }
// const ::GstMetaInfo* Meta::info (const ::GstMeta* obj);
// const ::GstMetaInfo* Meta::info (const ::GstMeta* obj);
Gst::MetaInfo base::MetaBase::info_ () const noexcept
{
  typedef const ::GstMetaInfo* (*call_wrap_t) (const ::GstMeta* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_info_get;
  auto _temp_ret = call_wrap_v ((const ::GstMeta*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gst_meta_compare_seqnum (const GstMeta* meta1, const GstMeta* meta2);
// gint gst_meta_compare_seqnum (const ::GstMeta* meta1, const ::GstMeta* meta2);
gint base::MetaBase::compare_seqnum (const Gst::Meta & meta2) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstMeta* meta1, const ::GstMeta* meta2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_meta_compare_seqnum;
  auto meta2_to_c = gi::unwrap (meta2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstMeta*) (gobj_()), (const ::GstMeta*) (meta2_to_c));
  return _temp_ret;
}

// guint64 gst_meta_get_seqnum (const GstMeta* meta);
// guint64 gst_meta_get_seqnum (const ::GstMeta* meta);
guint64 base::MetaBase::get_seqnum () const noexcept
{
  typedef guint64 (*call_wrap_t) (const ::GstMeta* meta);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_meta_get_seqnum;
  auto _temp_ret = call_wrap_v ((const ::GstMeta*) (gobj_()));
  return _temp_ret;
}

// const gchar* const* gst_meta_api_type_get_tags (GType api);
// const char** gst_meta_api_type_get_tags (GType api);
std::vector<std::string> base::MetaBase::api_type_get_tags (GType api) noexcept
{
  typedef const char** (*call_wrap_t) (GType api);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_meta_api_type_get_tags;
  auto api_to_c = api;
  auto _temp_ret = call_wrap_v ((GType) (api_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// gboolean gst_meta_api_type_has_tag (GType api, GQuark tag);
// gboolean gst_meta_api_type_has_tag (GType api, ::GQuark tag);
bool base::MetaBase::api_type_has_tag (GType api, ::GQuark tag) noexcept
{
  typedef gboolean (*call_wrap_t) (GType api, ::GQuark tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_meta_api_type_has_tag;
  auto tag_to_c = tag;
  auto api_to_c = api;
  auto _temp_ret = call_wrap_v ((GType) (api_to_c), (::GQuark) (tag_to_c));
  return _temp_ret;
}

// GType gst_meta_api_type_register (const gchar* api, const gchar** tags);
// GType gst_meta_api_type_register (const char* api, const char** tags);
GType base::MetaBase::api_type_register (const std::string & api, const std::vector<std::string> & tags) noexcept
{
  typedef GType (*call_wrap_t) (const char* api, const char** tags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_meta_api_type_register;
  auto tags_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (tags);
  auto tags_w = unwrap (tags_i, gi::transfer_none, direction_in);
  auto tags_to_c = tags_w.gobj_(false);
  auto api_to_c = gi::unwrap (api, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (api_to_c), (const char**) (tags_to_c));
  return _temp_ret;
}

// const GstMetaInfo* gst_meta_get_info (const gchar* impl);
// const ::GstMetaInfo* gst_meta_get_info (const char* impl);
Gst::MetaInfo base::MetaBase::get_info (const std::string & impl) noexcept
{
  typedef const ::GstMetaInfo* (*call_wrap_t) (const char* impl);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_meta_get_info;
  auto impl_to_c = gi::unwrap (impl, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (impl_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GstMetaInfo* gst_meta_register (GType api, const gchar* impl, gsize size, GstMetaInitFunction init_func, GstMetaFreeFunction free_func, GstMetaTransformFunction transform_func);
// const ::GstMetaInfo* gst_meta_register (GType api, const char* impl, gsize size,  init_func,  free_func,  transform_func);
// SKIP; transform_func type  not supported, free_func type  not supported, init_func type  not supported

// const GstMetaInfo* gst_meta_register_custom (const gchar* name, const gchar** tags, GstCustomMetaTransformFunction transform_func, gpointer user_data, GDestroyNotify destroy_data);
// const ::GstMetaInfo* gst_meta_register_custom (const char* name, const char** tags, Gst::CustomMetaTransformFunction::cfunction_type transform_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy_data);
Gst::MetaInfo base::MetaBase::register_custom (const std::string & name, const std::vector<std::string> & tags, Gst::CustomMetaTransformFunction transform_func) noexcept
{
  typedef const ::GstMetaInfo* (*call_wrap_t) (const char* name, const char** tags, Gst::CustomMetaTransformFunction::cfunction_type transform_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_meta_register_custom;
  auto transform_func_wrap_ = transform_func ? unwrap (std::move (transform_func), gi::scope_notified) : nullptr;
  auto tags_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (tags);
  auto tags_w = unwrap (tags_i, gi::transfer_none, direction_in);
  auto tags_to_c = tags_w.gobj_(false);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char**) (tags_to_c), (Gst::CustomMetaTransformFunction::cfunction_type) (transform_func_wrap_ ? &transform_func_wrap_->wrapper : nullptr), (void*) (transform_func_wrap_), (GLib::DestroyNotify::cfunction_type) (transform_func_wrap_ ? &transform_func_wrap_->destroy : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/meta_extra_def_impl.hpp>)
#include <gst/meta_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/meta_extra_impl.hpp>)
#include <gst/meta_extra_impl.hpp>
#endif
#endif

#endif
