// AUTO-GENERATED

#ifndef _GI_GST_FORMATDEFINITION_HPP_
#define _GI_GST_FORMATDEFINITION_HPP_


namespace gi {

namespace repository {

namespace Gst {


class FormatDefinition;

namespace base {


#define GI_GST_FORMATDEFINITION_BASE base::FormatDefinitionBase
class FormatDefinitionBase : public gi::detail::CBoxedWrapper<FormatDefinitionBase, ::GstFormatDefinition>
{
typedef gi::detail::CBoxedWrapper<FormatDefinitionBase, ::GstFormatDefinition> super_type;
public:

FormatDefinitionBase (std::nullptr_t = nullptr) : super_type() {}

// ::GstFormat FormatDefinition::value (const ::GstFormatDefinition* obj);
// ::GstFormat FormatDefinition::value (const ::GstFormatDefinition* obj);
GI_INLINE_DECL Gst::Format value_ () const noexcept;

//  FormatDefinition::value (::GstFormatDefinition* obj, ::GstFormat _value);
// void FormatDefinition::value (::GstFormatDefinition* obj, ::GstFormat _value);
GI_INLINE_DECL void value_ (Gst::Format _value) noexcept;

// const char* FormatDefinition::nick (const ::GstFormatDefinition* obj);
// const char* FormatDefinition::nick (const ::GstFormatDefinition* obj);
GI_INLINE_DECL std::string nick_ () const noexcept;

// const char* FormatDefinition::description (const ::GstFormatDefinition* obj);
// const char* FormatDefinition::description (const ::GstFormatDefinition* obj);
GI_INLINE_DECL std::string description_ () const noexcept;

// ::GQuark FormatDefinition::quark (const ::GstFormatDefinition* obj);
// ::GQuark FormatDefinition::quark (const ::GstFormatDefinition* obj);
GI_INLINE_DECL GLib::Quark quark_ () const noexcept;

//  FormatDefinition::quark (::GstFormatDefinition* obj, ::GQuark _value);
// void FormatDefinition::quark (::GstFormatDefinition* obj, ::GQuark _value);
GI_INLINE_DECL void quark_ (::GQuark _value) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/formatdefinition_extra_def.hpp>)
#include <gst/formatdefinition_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/formatdefinition_extra.hpp>)
#include <gst/formatdefinition_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class FormatDefinition : public GI_GST_FORMATDEFINITION_BASE
{ typedef GI_GST_FORMATDEFINITION_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstFormatDefinition>
{ typedef Gst::FormatDefinition type; }; 

} // namespace repository

} // namespace gi

#endif
