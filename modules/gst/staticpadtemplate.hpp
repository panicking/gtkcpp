// AUTO-GENERATED

#ifndef _GI_GST_STATICPADTEMPLATE_HPP_
#define _GI_GST_STATICPADTEMPLATE_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Caps;
class PadTemplate;

class StaticPadTemplate;

namespace base {


#define GI_GST_STATICPADTEMPLATE_BASE base::StaticPadTemplateBase
class StaticPadTemplateBase : public gi::detail::CBoxedWrapper<StaticPadTemplateBase, ::GstStaticPadTemplate>
{
typedef gi::detail::CBoxedWrapper<StaticPadTemplateBase, ::GstStaticPadTemplate> super_type;
public:

StaticPadTemplateBase (std::nullptr_t = nullptr) : super_type() {}

// const char* StaticPadTemplate::name_template (const ::GstStaticPadTemplate* obj);
// const char* StaticPadTemplate::name_template (const ::GstStaticPadTemplate* obj);
GI_INLINE_DECL std::string name_template_ () const noexcept;

// ::GstPadDirection StaticPadTemplate::direction (const ::GstStaticPadTemplate* obj);
// ::GstPadDirection StaticPadTemplate::direction (const ::GstStaticPadTemplate* obj);
GI_INLINE_DECL Gst::PadDirection direction_ () const noexcept;

//  StaticPadTemplate::direction (::GstStaticPadTemplate* obj, ::GstPadDirection _value);
// void StaticPadTemplate::direction (::GstStaticPadTemplate* obj, ::GstPadDirection _value);
GI_INLINE_DECL void direction_ (Gst::PadDirection _value) noexcept;

// ::GstPadPresence StaticPadTemplate::presence (const ::GstStaticPadTemplate* obj);
// ::GstPadPresence StaticPadTemplate::presence (const ::GstStaticPadTemplate* obj);
GI_INLINE_DECL Gst::PadPresence presence_ () const noexcept;

//  StaticPadTemplate::presence (::GstStaticPadTemplate* obj, ::GstPadPresence _value);
// void StaticPadTemplate::presence (::GstStaticPadTemplate* obj, ::GstPadPresence _value);
GI_INLINE_DECL void presence_ (Gst::PadPresence _value) noexcept;

// GstPadTemplate* gst_static_pad_template_get (GstStaticPadTemplate* pad_template);
// ::GstPadTemplate* gst_static_pad_template_get (::GstStaticPadTemplate* pad_template);
GI_INLINE_DECL Gst::PadTemplate get () noexcept;

// GstCaps* gst_static_pad_template_get_caps (GstStaticPadTemplate* templ);
// ::GstCaps* gst_static_pad_template_get_caps (::GstStaticPadTemplate* templ);
GI_INLINE_DECL Gst::Caps get_caps () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/staticpadtemplate_extra_def.hpp>)
#include <gst/staticpadtemplate_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/staticpadtemplate_extra.hpp>)
#include <gst/staticpadtemplate_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class StaticPadTemplate : public GI_GST_STATICPADTEMPLATE_BASE
{ typedef GI_GST_STATICPADTEMPLATE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstStaticPadTemplate>
{ typedef Gst::StaticPadTemplate type; }; 

} // namespace repository

} // namespace gi

#endif
