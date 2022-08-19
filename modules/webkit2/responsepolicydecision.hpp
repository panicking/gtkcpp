// AUTO-GENERATED

#ifndef _GI_WEBKIT2_RESPONSEPOLICYDECISION_HPP_
#define _GI_WEBKIT2_RESPONSEPOLICYDECISION_HPP_

#include "policydecision.hpp"

namespace gi {

namespace repository {

namespace WebKit2 {

class URIRequest;
class URIResponse;

class ResponsePolicyDecision;

namespace base {


#define GI_WEBKIT2_RESPONSEPOLICYDECISION_BASE base::ResponsePolicyDecisionBase
class ResponsePolicyDecisionBase : public WebKit2::PolicyDecision
{
typedef WebKit2::PolicyDecision super_type;
public:
typedef ::WebKitResponsePolicyDecision BaseObjectType;

ResponsePolicyDecisionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_response_policy_decision_get_type(); } 

// WebKitURIRequest* webkit_response_policy_decision_get_request (WebKitResponsePolicyDecision* decision);
// ::WebKitURIRequest* webkit_response_policy_decision_get_request (::WebKitResponsePolicyDecision* decision);
GI_INLINE_DECL WebKit2::URIRequest get_request () noexcept;

// WebKitURIResponse* webkit_response_policy_decision_get_response (WebKitResponsePolicyDecision* decision);
// ::WebKitURIResponse* webkit_response_policy_decision_get_response (::WebKitResponsePolicyDecision* decision);
GI_INLINE_DECL WebKit2::URIResponse get_response () noexcept;

// gboolean webkit_response_policy_decision_is_mime_type_supported (WebKitResponsePolicyDecision* decision);
// gboolean webkit_response_policy_decision_is_mime_type_supported (::WebKitResponsePolicyDecision* decision);
GI_INLINE_DECL bool is_mime_type_supported () noexcept;

gi::property_proxy<WebKit2::URIRequest, base::ResponsePolicyDecisionBase> property_request()
{ return gi::property_proxy<WebKit2::URIRequest, base::ResponsePolicyDecisionBase> (*this, "request"); }
const gi::property_proxy<WebKit2::URIRequest, base::ResponsePolicyDecisionBase> property_request() const
{ return gi::property_proxy<WebKit2::URIRequest, base::ResponsePolicyDecisionBase> (*this, "request"); }

gi::property_proxy<WebKit2::URIResponse, base::ResponsePolicyDecisionBase> property_response()
{ return gi::property_proxy<WebKit2::URIResponse, base::ResponsePolicyDecisionBase> (*this, "response"); }
const gi::property_proxy<WebKit2::URIResponse, base::ResponsePolicyDecisionBase> property_response() const
{ return gi::property_proxy<WebKit2::URIResponse, base::ResponsePolicyDecisionBase> (*this, "response"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/responsepolicydecision_extra_def.hpp>)
#include <webkit2/responsepolicydecision_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/responsepolicydecision_extra.hpp>)
#include <webkit2/responsepolicydecision_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class ResponsePolicyDecision : public GI_WEBKIT2_RESPONSEPOLICYDECISION_BASE
{ typedef GI_WEBKIT2_RESPONSEPOLICYDECISION_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitResponsePolicyDecision>
{ typedef WebKit2::ResponsePolicyDecision type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class ResponsePolicyDecisionClassDef
{
typedef ResponsePolicyDecisionClassDef self;
public:
typedef WebKit2::ResponsePolicyDecision instance_type;
typedef ::WebKitResponsePolicyDecisionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ResponsePolicyDecisionClass: public detail::ClassTemplate<WebKit2::impl::internal::ResponsePolicyDecisionClassDef, WebKit2::impl::internal::PolicyDecisionClass>
{
typedef ResponsePolicyDecisionClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::ResponsePolicyDecisionClassDef, WebKit2::impl::internal::PolicyDecisionClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using ResponsePolicyDecisionImpl = detail::ObjectImpl<ResponsePolicyDecision, internal::ResponsePolicyDecisionClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
