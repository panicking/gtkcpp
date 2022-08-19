// AUTO-GENERATED

#ifndef _GI_WEBKIT2_POLICYDECISION_HPP_
#define _GI_WEBKIT2_POLICYDECISION_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class WebsitePolicies;

class PolicyDecision;

namespace base {


#define GI_WEBKIT2_POLICYDECISION_BASE base::PolicyDecisionBase
class PolicyDecisionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitPolicyDecision BaseObjectType;

PolicyDecisionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_policy_decision_get_type(); } 

// void webkit_policy_decision_download (WebKitPolicyDecision* decision);
// void webkit_policy_decision_download (::WebKitPolicyDecision* decision);
GI_INLINE_DECL void download () noexcept;

// void webkit_policy_decision_ignore (WebKitPolicyDecision* decision);
// void webkit_policy_decision_ignore (::WebKitPolicyDecision* decision);
GI_INLINE_DECL void ignore () noexcept;

// void webkit_policy_decision_use (WebKitPolicyDecision* decision);
// void webkit_policy_decision_use (::WebKitPolicyDecision* decision);
GI_INLINE_DECL void use () noexcept;

// void webkit_policy_decision_use_with_policies (WebKitPolicyDecision* decision, WebKitWebsitePolicies* policies);
// void webkit_policy_decision_use_with_policies (::WebKitPolicyDecision* decision, ::WebKitWebsitePolicies* policies);
GI_INLINE_DECL void use_with_policies (WebKit2::WebsitePolicies policies) noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/policydecision_extra_def.hpp>)
#include <webkit2/policydecision_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/policydecision_extra.hpp>)
#include <webkit2/policydecision_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class PolicyDecision : public GI_WEBKIT2_POLICYDECISION_BASE
{ typedef GI_WEBKIT2_POLICYDECISION_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitPolicyDecision>
{ typedef WebKit2::PolicyDecision type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class PolicyDecisionClassDef
{
typedef PolicyDecisionClassDef self;
public:
typedef WebKit2::PolicyDecision instance_type;
typedef ::WebKitPolicyDecisionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PolicyDecisionClass: public detail::ClassTemplate<WebKit2::impl::internal::PolicyDecisionClassDef, GObject::impl::internal::ObjectClass>
{
typedef PolicyDecisionClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::PolicyDecisionClassDef, GObject::impl::internal::ObjectClass> super;

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

using PolicyDecisionImpl = detail::ObjectImpl<PolicyDecision, internal::PolicyDecisionClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
