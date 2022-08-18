// AUTO-GENERATED

#ifndef _GI_GST_PARAMSPECFRACTION_HPP_
#define _GI_GST_PARAMSPECFRACTION_HPP_


namespace gi {

namespace repository {

namespace Gst {


class ParamSpecFraction;

namespace base {


#define GI_GST_PARAMSPECFRACTION_BASE base::ParamSpecFractionBase
class ParamSpecFractionBase : public gi::detail::CBoxedWrapper<ParamSpecFractionBase, ::GstParamSpecFraction>
{
typedef gi::detail::CBoxedWrapper<ParamSpecFractionBase, ::GstParamSpecFraction> super_type;
public:

ParamSpecFractionBase (std::nullptr_t = nullptr) : super_type() {}

// gint ParamSpecFraction::min_num (const ::GstParamSpecFraction* obj);
// gint ParamSpecFraction::min_num (const ::GstParamSpecFraction* obj);
GI_INLINE_DECL gint min_num_ () const noexcept;

//  ParamSpecFraction::min_num (::GstParamSpecFraction* obj, gint _value);
// void ParamSpecFraction::min_num (::GstParamSpecFraction* obj, gint _value);
GI_INLINE_DECL void min_num_ (gint _value) noexcept;

// gint ParamSpecFraction::min_den (const ::GstParamSpecFraction* obj);
// gint ParamSpecFraction::min_den (const ::GstParamSpecFraction* obj);
GI_INLINE_DECL gint min_den_ () const noexcept;

//  ParamSpecFraction::min_den (::GstParamSpecFraction* obj, gint _value);
// void ParamSpecFraction::min_den (::GstParamSpecFraction* obj, gint _value);
GI_INLINE_DECL void min_den_ (gint _value) noexcept;

// gint ParamSpecFraction::max_num (const ::GstParamSpecFraction* obj);
// gint ParamSpecFraction::max_num (const ::GstParamSpecFraction* obj);
GI_INLINE_DECL gint max_num_ () const noexcept;

//  ParamSpecFraction::max_num (::GstParamSpecFraction* obj, gint _value);
// void ParamSpecFraction::max_num (::GstParamSpecFraction* obj, gint _value);
GI_INLINE_DECL void max_num_ (gint _value) noexcept;

// gint ParamSpecFraction::max_den (const ::GstParamSpecFraction* obj);
// gint ParamSpecFraction::max_den (const ::GstParamSpecFraction* obj);
GI_INLINE_DECL gint max_den_ () const noexcept;

//  ParamSpecFraction::max_den (::GstParamSpecFraction* obj, gint _value);
// void ParamSpecFraction::max_den (::GstParamSpecFraction* obj, gint _value);
GI_INLINE_DECL void max_den_ (gint _value) noexcept;

// gint ParamSpecFraction::def_num (const ::GstParamSpecFraction* obj);
// gint ParamSpecFraction::def_num (const ::GstParamSpecFraction* obj);
GI_INLINE_DECL gint def_num_ () const noexcept;

//  ParamSpecFraction::def_num (::GstParamSpecFraction* obj, gint _value);
// void ParamSpecFraction::def_num (::GstParamSpecFraction* obj, gint _value);
GI_INLINE_DECL void def_num_ (gint _value) noexcept;

// gint ParamSpecFraction::def_den (const ::GstParamSpecFraction* obj);
// gint ParamSpecFraction::def_den (const ::GstParamSpecFraction* obj);
GI_INLINE_DECL gint def_den_ () const noexcept;

//  ParamSpecFraction::def_den (::GstParamSpecFraction* obj, gint _value);
// void ParamSpecFraction::def_den (::GstParamSpecFraction* obj, gint _value);
GI_INLINE_DECL void def_den_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/paramspecfraction_extra_def.hpp>)
#include <gst/paramspecfraction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/paramspecfraction_extra.hpp>)
#include <gst/paramspecfraction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ParamSpecFraction : public GI_GST_PARAMSPECFRACTION_BASE
{ typedef GI_GST_PARAMSPECFRACTION_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstParamSpecFraction>
{ typedef Gst::ParamSpecFraction type; }; 

} // namespace repository

} // namespace gi

#endif
