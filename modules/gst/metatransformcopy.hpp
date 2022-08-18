// AUTO-GENERATED

#ifndef _GI_GST_METATRANSFORMCOPY_HPP_
#define _GI_GST_METATRANSFORMCOPY_HPP_


namespace gi {

namespace repository {

namespace Gst {


class MetaTransformCopy;

namespace base {


#define GI_GST_METATRANSFORMCOPY_BASE base::MetaTransformCopyBase
class MetaTransformCopyBase : public gi::detail::CBoxedWrapper<MetaTransformCopyBase, ::GstMetaTransformCopy>
{
typedef gi::detail::CBoxedWrapper<MetaTransformCopyBase, ::GstMetaTransformCopy> super_type;
public:

MetaTransformCopyBase (std::nullptr_t = nullptr) : super_type() {}

// gboolean MetaTransformCopy::region (const ::GstMetaTransformCopy* obj);
// gboolean MetaTransformCopy::region (const ::GstMetaTransformCopy* obj);
GI_INLINE_DECL bool region_ () const noexcept;

//  MetaTransformCopy::region (::GstMetaTransformCopy* obj, gboolean _value);
// void MetaTransformCopy::region (::GstMetaTransformCopy* obj, gboolean _value);
GI_INLINE_DECL void region_ (gboolean _value) noexcept;

// gsize MetaTransformCopy::offset (const ::GstMetaTransformCopy* obj);
// gsize MetaTransformCopy::offset (const ::GstMetaTransformCopy* obj);
GI_INLINE_DECL gsize offset_ () const noexcept;

//  MetaTransformCopy::offset (::GstMetaTransformCopy* obj, gsize _value);
// void MetaTransformCopy::offset (::GstMetaTransformCopy* obj, gsize _value);
GI_INLINE_DECL void offset_ (gsize _value) noexcept;

// gsize MetaTransformCopy::size (const ::GstMetaTransformCopy* obj);
// gsize MetaTransformCopy::size (const ::GstMetaTransformCopy* obj);
GI_INLINE_DECL gsize size_ () const noexcept;

//  MetaTransformCopy::size (::GstMetaTransformCopy* obj, gsize _value);
// void MetaTransformCopy::size (::GstMetaTransformCopy* obj, gsize _value);
GI_INLINE_DECL void size_ (gsize _value) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/metatransformcopy_extra_def.hpp>)
#include <gst/metatransformcopy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/metatransformcopy_extra.hpp>)
#include <gst/metatransformcopy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class MetaTransformCopy : public GI_GST_METATRANSFORMCOPY_BASE
{ typedef GI_GST_METATRANSFORMCOPY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstMetaTransformCopy>
{ typedef Gst::MetaTransformCopy type; }; 

} // namespace repository

} // namespace gi

#endif
