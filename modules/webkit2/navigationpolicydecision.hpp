// AUTO-GENERATED

#ifndef _GI_WEBKIT2_NAVIGATIONPOLICYDECISION_HPP_
#define _GI_WEBKIT2_NAVIGATIONPOLICYDECISION_HPP_

#include "policydecision.hpp"

namespace gi {

namespace repository {

namespace WebKit2 {

class NavigationAction;
class URIRequest;

class NavigationPolicyDecision;

namespace base {


#define GI_WEBKIT2_NAVIGATIONPOLICYDECISION_BASE base::NavigationPolicyDecisionBase
class NavigationPolicyDecisionBase : public WebKit2::PolicyDecision
{
typedef WebKit2::PolicyDecision super_type;
public:
typedef ::WebKitNavigationPolicyDecision BaseObjectType;

NavigationPolicyDecisionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_navigation_policy_decision_get_type(); } 

// const gchar* webkit_navigation_policy_decision_get_frame_name (WebKitNavigationPolicyDecision* decision);
// const char* webkit_navigation_policy_decision_get_frame_name (::WebKitNavigationPolicyDecision* decision);
GI_INLINE_DECL std::string get_frame_name () noexcept;

// guint webkit_navigation_policy_decision_get_modifiers (WebKitNavigationPolicyDecision* decision);
// guint webkit_navigation_policy_decision_get_modifiers (::WebKitNavigationPolicyDecision* decision);
// IGNORE; deprecated

// guint webkit_navigation_policy_decision_get_mouse_button (WebKitNavigationPolicyDecision* decision);
// guint webkit_navigation_policy_decision_get_mouse_button (::WebKitNavigationPolicyDecision* decision);
// IGNORE; deprecated

// WebKitNavigationAction* webkit_navigation_policy_decision_get_navigation_action (WebKitNavigationPolicyDecision* decision);
// ::WebKitNavigationAction* webkit_navigation_policy_decision_get_navigation_action (::WebKitNavigationPolicyDecision* decision);
GI_INLINE_DECL WebKit2::NavigationAction get_navigation_action () noexcept;

// WebKitNavigationType webkit_navigation_policy_decision_get_navigation_type (WebKitNavigationPolicyDecision* decision);
// ::WebKitNavigationType webkit_navigation_policy_decision_get_navigation_type (::WebKitNavigationPolicyDecision* decision);
// IGNORE; deprecated

// WebKitURIRequest* webkit_navigation_policy_decision_get_request (WebKitNavigationPolicyDecision* decision);
// ::WebKitURIRequest* webkit_navigation_policy_decision_get_request (::WebKitNavigationPolicyDecision* decision);
// IGNORE; deprecated

gi::property_proxy<std::string, base::NavigationPolicyDecisionBase> property_frame_name()
{ return gi::property_proxy<std::string, base::NavigationPolicyDecisionBase> (*this, "frame-name"); }
const gi::property_proxy<std::string, base::NavigationPolicyDecisionBase> property_frame_name() const
{ return gi::property_proxy<std::string, base::NavigationPolicyDecisionBase> (*this, "frame-name"); }

gi::property_proxy<guint, base::NavigationPolicyDecisionBase> property_modifiers()
{ return gi::property_proxy<guint, base::NavigationPolicyDecisionBase> (*this, "modifiers"); }
const gi::property_proxy<guint, base::NavigationPolicyDecisionBase> property_modifiers() const
{ return gi::property_proxy<guint, base::NavigationPolicyDecisionBase> (*this, "modifiers"); }

gi::property_proxy<guint, base::NavigationPolicyDecisionBase> property_mouse_button()
{ return gi::property_proxy<guint, base::NavigationPolicyDecisionBase> (*this, "mouse-button"); }
const gi::property_proxy<guint, base::NavigationPolicyDecisionBase> property_mouse_button() const
{ return gi::property_proxy<guint, base::NavigationPolicyDecisionBase> (*this, "mouse-button"); }

gi::property_proxy<WebKit2::NavigationAction, base::NavigationPolicyDecisionBase> property_navigation_action()
{ return gi::property_proxy<WebKit2::NavigationAction, base::NavigationPolicyDecisionBase> (*this, "navigation-action"); }
const gi::property_proxy<WebKit2::NavigationAction, base::NavigationPolicyDecisionBase> property_navigation_action() const
{ return gi::property_proxy<WebKit2::NavigationAction, base::NavigationPolicyDecisionBase> (*this, "navigation-action"); }

gi::property_proxy<WebKit2::NavigationType, base::NavigationPolicyDecisionBase> property_navigation_type()
{ return gi::property_proxy<WebKit2::NavigationType, base::NavigationPolicyDecisionBase> (*this, "navigation-type"); }
const gi::property_proxy<WebKit2::NavigationType, base::NavigationPolicyDecisionBase> property_navigation_type() const
{ return gi::property_proxy<WebKit2::NavigationType, base::NavigationPolicyDecisionBase> (*this, "navigation-type"); }

gi::property_proxy<WebKit2::URIRequest, base::NavigationPolicyDecisionBase> property_request()
{ return gi::property_proxy<WebKit2::URIRequest, base::NavigationPolicyDecisionBase> (*this, "request"); }
const gi::property_proxy<WebKit2::URIRequest, base::NavigationPolicyDecisionBase> property_request() const
{ return gi::property_proxy<WebKit2::URIRequest, base::NavigationPolicyDecisionBase> (*this, "request"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/navigationpolicydecision_extra_def.hpp>)
#include <webkit2/navigationpolicydecision_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/navigationpolicydecision_extra.hpp>)
#include <webkit2/navigationpolicydecision_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class NavigationPolicyDecision : public GI_WEBKIT2_NAVIGATIONPOLICYDECISION_BASE
{ typedef GI_WEBKIT2_NAVIGATIONPOLICYDECISION_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitNavigationPolicyDecision>
{ typedef WebKit2::NavigationPolicyDecision type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class NavigationPolicyDecisionClassDef
{
typedef NavigationPolicyDecisionClassDef self;
public:
typedef WebKit2::NavigationPolicyDecision instance_type;
typedef ::WebKitNavigationPolicyDecisionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NavigationPolicyDecisionClass: public detail::ClassTemplate<WebKit2::impl::internal::NavigationPolicyDecisionClassDef, WebKit2::impl::internal::PolicyDecisionClass>
{
typedef NavigationPolicyDecisionClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::NavigationPolicyDecisionClassDef, WebKit2::impl::internal::PolicyDecisionClass> super;

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

using NavigationPolicyDecisionImpl = detail::ObjectImpl<NavigationPolicyDecision, internal::NavigationPolicyDecisionClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
