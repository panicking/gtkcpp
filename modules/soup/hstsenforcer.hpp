// AUTO-GENERATED

#ifndef _GI_SOUP_HSTSENFORCER_HPP_
#define _GI_SOUP_HSTSENFORCER_HPP_


namespace gi {

namespace repository {

namespace Soup {

class HSTSPolicy;
class Message;
class SessionFeature;

class HSTSEnforcer;

namespace base {


#define GI_SOUP_HSTSENFORCER_BASE base::HSTSEnforcerBase
class HSTSEnforcerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupHSTSEnforcer BaseObjectType;

HSTSEnforcerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_hsts_enforcer_get_type(); } 

GI_INLINE_DECL Soup::SessionFeature interface_ (gi::interface_tag<Soup::SessionFeature>);

GI_INLINE_DECL operator Soup::SessionFeature ();

// SoupHSTSEnforcer* soup_hsts_enforcer_new ();
// ::SoupHSTSEnforcer* soup_hsts_enforcer_new ();
static GI_INLINE_DECL Soup::HSTSEnforcer new_ () noexcept;

// GList* soup_hsts_enforcer_get_domains (SoupHSTSEnforcer* hsts_enforcer, gboolean session_policies);
// ::GList* soup_hsts_enforcer_get_domains (::SoupHSTSEnforcer* hsts_enforcer, gboolean session_policies);
GI_INLINE_DECL std::vector<std::string> get_domains (gboolean session_policies) noexcept;

// GList* soup_hsts_enforcer_get_policies (SoupHSTSEnforcer* hsts_enforcer, gboolean session_policies);
// ::GList* soup_hsts_enforcer_get_policies (::SoupHSTSEnforcer* hsts_enforcer, gboolean session_policies);
GI_INLINE_DECL std::vector<Soup::HSTSPolicy> get_policies (gboolean session_policies) noexcept;

// gboolean soup_hsts_enforcer_has_valid_policy (SoupHSTSEnforcer* hsts_enforcer, const char* domain);
// gboolean soup_hsts_enforcer_has_valid_policy (::SoupHSTSEnforcer* hsts_enforcer, const char* domain);
GI_INLINE_DECL bool has_valid_policy (const std::string & domain) noexcept;

// gboolean soup_hsts_enforcer_is_persistent (SoupHSTSEnforcer* hsts_enforcer);
// gboolean soup_hsts_enforcer_is_persistent (::SoupHSTSEnforcer* hsts_enforcer);
GI_INLINE_DECL bool is_persistent () noexcept;

// void soup_hsts_enforcer_set_policy (SoupHSTSEnforcer* hsts_enforcer, SoupHSTSPolicy* policy);
// void soup_hsts_enforcer_set_policy (::SoupHSTSEnforcer* hsts_enforcer, ::SoupHSTSPolicy* policy);
GI_INLINE_DECL void set_policy (Soup::HSTSPolicy policy) noexcept;

// void soup_hsts_enforcer_set_session_policy (SoupHSTSEnforcer* hsts_enforcer, const char* domain, gboolean include_subdomains);
// void soup_hsts_enforcer_set_session_policy (::SoupHSTSEnforcer* hsts_enforcer, const char* domain, gboolean include_subdomains);
GI_INLINE_DECL void set_session_policy (const std::string & domain, gboolean include_subdomains) noexcept;

// signal changed
gi::signal_proxy<void(Soup::HSTSEnforcer, Soup::HSTSPolicy old_policy, Soup::HSTSPolicy new_policy)> signal_changed()
{ return gi::signal_proxy<void(Soup::HSTSEnforcer, Soup::HSTSPolicy old_policy, Soup::HSTSPolicy new_policy)> (*this, "changed"); }

// signal hsts-enforced
gi::signal_proxy<void(Soup::HSTSEnforcer, Soup::Message message)> signal_hsts_enforced()
{ return gi::signal_proxy<void(Soup::HSTSEnforcer, Soup::Message message)> (*this, "hsts-enforced"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/hstsenforcer_extra_def.hpp>)
#include <soup/hstsenforcer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/hstsenforcer_extra.hpp>)
#include <soup/hstsenforcer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class HSTSEnforcer : public GI_SOUP_HSTSENFORCER_BASE
{ typedef GI_SOUP_HSTSENFORCER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupHSTSEnforcer>
{ typedef Soup::HSTSEnforcer type; }; 

} // namespace repository

} // namespace gi

#include "sessionfeature.hpp"

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class HSTSEnforcerClassDef
{
typedef HSTSEnforcerClassDef self;
public:
typedef Soup::HSTSEnforcer instance_type;
typedef ::SoupHSTSEnforcerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void HSTSEnforcer::changed (SoupHSTSEnforcer* enforcer, SoupHSTSPolicy* old_policy, SoupHSTSPolicy* new_policy);
// void HSTSEnforcer::changed (::SoupHSTSEnforcer* enforcer, ::SoupHSTSPolicy* old_policy, ::SoupHSTSPolicy* new_policy);
virtual void changed_ (Soup::HSTSPolicy old_policy, Soup::HSTSPolicy new_policy) noexcept = 0;

// gboolean HSTSEnforcer::has_valid_policy (SoupHSTSEnforcer* hsts_enforcer, const char* domain);
// gboolean HSTSEnforcer::has_valid_policy (::SoupHSTSEnforcer* hsts_enforcer, const char* domain);
virtual bool has_valid_policy_ (const std::string & domain) noexcept = 0;

// void HSTSEnforcer::hsts_enforced (SoupHSTSEnforcer* enforcer, SoupMessage* message);
// void HSTSEnforcer::hsts_enforced (::SoupHSTSEnforcer* enforcer, ::SoupMessage* message);
virtual void hsts_enforced_ (Soup::Message message) noexcept = 0;

// gboolean HSTSEnforcer::is_persistent (SoupHSTSEnforcer* hsts_enforcer);
// gboolean HSTSEnforcer::is_persistent (::SoupHSTSEnforcer* hsts_enforcer);
virtual bool is_persistent_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class HSTSEnforcerClass: public detail::ClassTemplate<Soup::impl::internal::HSTSEnforcerClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl>
{
typedef HSTSEnforcerClass self;
typedef detail::ClassTemplate<Soup::impl::internal::HSTSEnforcerClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Soup::impl::internal::SessionFeatureInterfaceClassImpl SoupSessionFeatureInterface_type;


// void HSTSEnforcer::changed (SoupHSTSEnforcer* enforcer, SoupHSTSPolicy* old_policy, SoupHSTSPolicy* new_policy);
// void HSTSEnforcer::changed (::SoupHSTSEnforcer* enforcer, ::SoupHSTSPolicy* old_policy, ::SoupHSTSPolicy* new_policy);
GI_INLINE_DECL void changed_ (Soup::HSTSPolicy old_policy, Soup::HSTSPolicy new_policy) noexcept override;

// gboolean HSTSEnforcer::has_valid_policy (SoupHSTSEnforcer* hsts_enforcer, const char* domain);
// gboolean HSTSEnforcer::has_valid_policy (::SoupHSTSEnforcer* hsts_enforcer, const char* domain);
GI_INLINE_DECL bool has_valid_policy_ (const std::string & domain) noexcept override;

// void HSTSEnforcer::hsts_enforced (SoupHSTSEnforcer* enforcer, SoupMessage* message);
// void HSTSEnforcer::hsts_enforced (::SoupHSTSEnforcer* enforcer, ::SoupMessage* message);
GI_INLINE_DECL void hsts_enforced_ (Soup::Message message) noexcept override;

// gboolean HSTSEnforcer::is_persistent (SoupHSTSEnforcer* hsts_enforcer);
// gboolean HSTSEnforcer::is_persistent (::SoupHSTSEnforcer* hsts_enforcer);
GI_INLINE_DECL bool is_persistent_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using HSTSEnforcerImpl = detail::ObjectImpl<HSTSEnforcer, internal::HSTSEnforcerClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
