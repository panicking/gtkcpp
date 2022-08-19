// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBSITEPOLICIES_HPP_
#define _GI_WEBKIT2_WEBSITEPOLICIES_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class WebsitePolicies;

namespace base {


#define GI_WEBKIT2_WEBSITEPOLICIES_BASE base::WebsitePoliciesBase
class WebsitePoliciesBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitWebsitePolicies BaseObjectType;

WebsitePoliciesBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_website_policies_get_type(); } 

// WebKitWebsitePolicies* webkit_website_policies_new ();
// ::WebKitWebsitePolicies* webkit_website_policies_new ();
static GI_INLINE_DECL WebKit2::WebsitePolicies new_ () noexcept;

// WebKitWebsitePolicies* webkit_website_policies_new_with_policies (const gchar* first_policy_name);
// ::WebKitWebsitePolicies* webkit_website_policies_new_with_policies (const char* first_policy_name);
// IGNORE; not introspectable, varargs not supported

// WebKitAutoplayPolicy webkit_website_policies_get_autoplay_policy (WebKitWebsitePolicies* policies);
// ::WebKitAutoplayPolicy webkit_website_policies_get_autoplay_policy (::WebKitWebsitePolicies* policies);
GI_INLINE_DECL WebKit2::AutoplayPolicy get_autoplay_policy () noexcept;

gi::property_proxy<WebKit2::AutoplayPolicy, base::WebsitePoliciesBase> property_autoplay()
{ return gi::property_proxy<WebKit2::AutoplayPolicy, base::WebsitePoliciesBase> (*this, "autoplay"); }
const gi::property_proxy<WebKit2::AutoplayPolicy, base::WebsitePoliciesBase> property_autoplay() const
{ return gi::property_proxy<WebKit2::AutoplayPolicy, base::WebsitePoliciesBase> (*this, "autoplay"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/websitepolicies_extra_def.hpp>)
#include <webkit2/websitepolicies_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/websitepolicies_extra.hpp>)
#include <webkit2/websitepolicies_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class WebsitePolicies : public GI_WEBKIT2_WEBSITEPOLICIES_BASE
{ typedef GI_WEBKIT2_WEBSITEPOLICIES_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitWebsitePolicies>
{ typedef WebKit2::WebsitePolicies type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class WebsitePoliciesClassDef
{
typedef WebsitePoliciesClassDef self;
public:
typedef WebKit2::WebsitePolicies instance_type;
typedef ::WebKitWebsitePoliciesClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WebsitePoliciesClass: public detail::ClassTemplate<WebKit2::impl::internal::WebsitePoliciesClassDef, GObject::impl::internal::ObjectClass>
{
typedef WebsitePoliciesClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::WebsitePoliciesClassDef, GObject::impl::internal::ObjectClass> super;

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

using WebsitePoliciesImpl = detail::ObjectImpl<WebsitePolicies, internal::WebsitePoliciesClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
