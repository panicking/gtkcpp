// AUTO-GENERATED

#ifndef _GI_GST_META_HPP_
#define _GI_GST_META_HPP_


namespace gi {

namespace repository {

namespace Gst {

class MetaInfo;

class Meta;

namespace base {


#define GI_GST_META_BASE base::MetaBase
class MetaBase : public gi::detail::CBoxedWrapper<MetaBase, ::GstMeta>
{
typedef gi::detail::CBoxedWrapper<MetaBase, ::GstMeta> super_type;
public:

MetaBase (std::nullptr_t = nullptr) : super_type() {}

// ::GstMetaFlags Meta::flags (const ::GstMeta* obj);
// ::GstMetaFlags Meta::flags (const ::GstMeta* obj);
GI_INLINE_DECL Gst::MetaFlags flags_ () const noexcept;

//  Meta::flags (::GstMeta* obj, ::GstMetaFlags _value);
// void Meta::flags (::GstMeta* obj, ::GstMetaFlags _value);
GI_INLINE_DECL void flags_ (Gst::MetaFlags _value) noexcept;

// const ::GstMetaInfo* Meta::info (const ::GstMeta* obj);
// const ::GstMetaInfo* Meta::info (const ::GstMeta* obj);
GI_INLINE_DECL Gst::MetaInfo info_ () const noexcept;

// gint gst_meta_compare_seqnum (const GstMeta* meta1, const GstMeta* meta2);
// gint gst_meta_compare_seqnum (const ::GstMeta* meta1, const ::GstMeta* meta2);
GI_INLINE_DECL gint compare_seqnum (const Gst::Meta & meta2) const noexcept;

// guint64 gst_meta_get_seqnum (const GstMeta* meta);
// guint64 gst_meta_get_seqnum (const ::GstMeta* meta);
GI_INLINE_DECL guint64 get_seqnum () const noexcept;

// const gchar* const* gst_meta_api_type_get_tags (GType api);
// const char** gst_meta_api_type_get_tags (GType api);
static GI_INLINE_DECL std::vector<std::string> api_type_get_tags (GType api) noexcept;

// gboolean gst_meta_api_type_has_tag (GType api, GQuark tag);
// gboolean gst_meta_api_type_has_tag (GType api, ::GQuark tag);
static GI_INLINE_DECL bool api_type_has_tag (GType api, ::GQuark tag) noexcept;

// GType gst_meta_api_type_register (const gchar* api, const gchar** tags);
// GType gst_meta_api_type_register (const char* api, const char** tags);
static GI_INLINE_DECL GType api_type_register (const std::string & api, const std::vector<std::string> & tags) noexcept;

// const GstMetaInfo* gst_meta_get_info (const gchar* impl);
// const ::GstMetaInfo* gst_meta_get_info (const char* impl);
static GI_INLINE_DECL Gst::MetaInfo get_info (const std::string & impl) noexcept;

// const GstMetaInfo* gst_meta_register (GType api, const gchar* impl, gsize size, GstMetaInitFunction init_func, GstMetaFreeFunction free_func, GstMetaTransformFunction transform_func);
// const ::GstMetaInfo* gst_meta_register (GType api, const char* impl, gsize size,  init_func,  free_func,  transform_func);
// SKIP; transform_func type  not supported, free_func type  not supported, init_func type  not supported

// const GstMetaInfo* gst_meta_register_custom (const gchar* name, const gchar** tags, GstCustomMetaTransformFunction transform_func, gpointer user_data, GDestroyNotify destroy_data);
// const ::GstMetaInfo* gst_meta_register_custom (const char* name, const char** tags, Gst::CustomMetaTransformFunction::cfunction_type transform_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy_data);
static GI_INLINE_DECL Gst::MetaInfo register_custom (const std::string & name, const std::vector<std::string> & tags, Gst::CustomMetaTransformFunction transform_func) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/meta_extra_def.hpp>)
#include <gst/meta_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/meta_extra.hpp>)
#include <gst/meta_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Meta : public GI_GST_META_BASE
{ typedef GI_GST_META_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstMeta>
{ typedef Gst::Meta type; }; 

} // namespace repository

} // namespace gi

#endif
