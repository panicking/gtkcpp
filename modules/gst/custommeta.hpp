// AUTO-GENERATED

#ifndef _GI_GST_CUSTOMMETA_HPP_
#define _GI_GST_CUSTOMMETA_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Structure;

class CustomMeta;

namespace base {


#define GI_GST_CUSTOMMETA_BASE base::CustomMetaBase
class CustomMetaBase : public gi::detail::CBoxedWrapper<CustomMetaBase, ::GstCustomMeta>
{
typedef gi::detail::CBoxedWrapper<CustomMetaBase, ::GstCustomMeta> super_type;
public:

CustomMetaBase (std::nullptr_t = nullptr) : super_type() {}

// GstStructure* gst_custom_meta_get_structure (GstCustomMeta* meta);
// ::GstStructure* gst_custom_meta_get_structure (::GstCustomMeta* meta);
GI_INLINE_DECL Gst::Structure get_structure () noexcept;

// gboolean gst_custom_meta_has_name (GstCustomMeta* meta, const gchar* name);
// gboolean gst_custom_meta_has_name (::GstCustomMeta* meta, const char* name);
GI_INLINE_DECL bool has_name (const std::string & name) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/custommeta_extra_def.hpp>)
#include <gst/custommeta_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/custommeta_extra.hpp>)
#include <gst/custommeta_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class CustomMeta : public GI_GST_CUSTOMMETA_BASE
{ typedef GI_GST_CUSTOMMETA_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstCustomMeta>
{ typedef Gst::CustomMeta type; }; 

} // namespace repository

} // namespace gi

#endif
