// AUTO-GENERATED

#ifndef _GI_GST_PARAMSPECARRAY_HPP_
#define _GI_GST_PARAMSPECARRAY_HPP_


namespace gi {

namespace repository {

namespace Gst {


class ParamSpecArray;

namespace base {


#define GI_GST_PARAMSPECARRAY_BASE base::ParamSpecArrayBase
class ParamSpecArrayBase : public gi::detail::CBoxedWrapper<ParamSpecArrayBase, ::GstParamSpecArray>
{
typedef gi::detail::CBoxedWrapper<ParamSpecArrayBase, ::GstParamSpecArray> super_type;
public:

ParamSpecArrayBase (std::nullptr_t = nullptr) : super_type() {}

// ::GParamSpec* ParamSpecArray::element_spec (const ::GstParamSpecArray* obj);
// ::GParamSpec* ParamSpecArray::element_spec (const ::GstParamSpecArray* obj);
GI_INLINE_DECL GObject::ParamSpec element_spec_ () const noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/paramspecarray_extra_def.hpp>)
#include <gst/paramspecarray_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/paramspecarray_extra.hpp>)
#include <gst/paramspecarray_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ParamSpecArray : public GI_GST_PARAMSPECARRAY_BASE
{ typedef GI_GST_PARAMSPECARRAY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstParamSpecArray>
{ typedef Gst::ParamSpecArray type; }; 

} // namespace repository

} // namespace gi

#endif
