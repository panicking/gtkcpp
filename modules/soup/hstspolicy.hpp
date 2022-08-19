// AUTO-GENERATED

#ifndef _GI_SOUP_HSTSPOLICY_HPP_
#define _GI_SOUP_HSTSPOLICY_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Date;
class Message;

class HSTSPolicy;

namespace base {


#define GI_SOUP_HSTSPOLICY_BASE base::HSTSPolicyBase
class HSTSPolicyBase : public gi::detail::GBoxedWrapper<HSTSPolicyBase, ::SoupHSTSPolicy>
{
typedef gi::detail::GBoxedWrapper<HSTSPolicyBase, ::SoupHSTSPolicy> super_type;
public:

HSTSPolicyBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return soup_hsts_policy_get_type(); } 

// char* HSTSPolicy::domain (const ::SoupHSTSPolicy* obj);
// char* HSTSPolicy::domain (const ::SoupHSTSPolicy* obj);
GI_INLINE_DECL std::string domain_ () const noexcept;

// gulong HSTSPolicy::max_age (const ::SoupHSTSPolicy* obj);
// gulong HSTSPolicy::max_age (const ::SoupHSTSPolicy* obj);
GI_INLINE_DECL gulong max_age_ () const noexcept;

//  HSTSPolicy::max_age (::SoupHSTSPolicy* obj, gulong _value);
// void HSTSPolicy::max_age (::SoupHSTSPolicy* obj, gulong _value);
GI_INLINE_DECL void max_age_ (gulong _value) noexcept;

// ::SoupDate* HSTSPolicy::expires (const ::SoupHSTSPolicy* obj);
// ::SoupDate* HSTSPolicy::expires (const ::SoupHSTSPolicy* obj);
GI_INLINE_DECL Soup::Date expires_ () const noexcept;

// gboolean HSTSPolicy::include_subdomains (const ::SoupHSTSPolicy* obj);
// gboolean HSTSPolicy::include_subdomains (const ::SoupHSTSPolicy* obj);
GI_INLINE_DECL bool include_subdomains_ () const noexcept;

//  HSTSPolicy::include_subdomains (::SoupHSTSPolicy* obj, gboolean _value);
// void HSTSPolicy::include_subdomains (::SoupHSTSPolicy* obj, gboolean _value);
GI_INLINE_DECL void include_subdomains_ (gboolean _value) noexcept;

// SoupHSTSPolicy* soup_hsts_policy_new (const char* domain, unsigned long max_age, gboolean include_subdomains);
// ::SoupHSTSPolicy* soup_hsts_policy_new (const char* domain, gulong max_age, gboolean include_subdomains);
static GI_INLINE_DECL Soup::HSTSPolicy new_ (const std::string & domain, gulong max_age, gboolean include_subdomains) noexcept;

// SoupHSTSPolicy* soup_hsts_policy_new_from_response (SoupMessage* msg);
// ::SoupHSTSPolicy* soup_hsts_policy_new_from_response (::SoupMessage* msg);
static GI_INLINE_DECL Soup::HSTSPolicy new_from_response (Soup::Message msg) noexcept;

// SoupHSTSPolicy* soup_hsts_policy_new_full (const char* domain, unsigned long max_age, SoupDate* expires, gboolean include_subdomains);
// ::SoupHSTSPolicy* soup_hsts_policy_new_full (const char* domain, gulong max_age, ::SoupDate* expires, gboolean include_subdomains);
static GI_INLINE_DECL Soup::HSTSPolicy new_full (const std::string & domain, gulong max_age, Soup::Date expires, gboolean include_subdomains) noexcept;

// SoupHSTSPolicy* soup_hsts_policy_new_session_policy (const char* domain, gboolean include_subdomains);
// ::SoupHSTSPolicy* soup_hsts_policy_new_session_policy (const char* domain, gboolean include_subdomains);
static GI_INLINE_DECL Soup::HSTSPolicy new_session_policy (const std::string & domain, gboolean include_subdomains) noexcept;

// SoupHSTSPolicy* soup_hsts_policy_copy (SoupHSTSPolicy* policy);
// ::SoupHSTSPolicy* soup_hsts_policy_copy (::SoupHSTSPolicy* policy);
GI_INLINE_DECL Soup::HSTSPolicy copy () noexcept;

// gboolean soup_hsts_policy_equal (SoupHSTSPolicy* policy1, SoupHSTSPolicy* policy2);
// gboolean soup_hsts_policy_equal (::SoupHSTSPolicy* policy1, ::SoupHSTSPolicy* policy2);
GI_INLINE_DECL bool equal (Soup::HSTSPolicy policy2) noexcept;

// void soup_hsts_policy_free (SoupHSTSPolicy* policy);
// void soup_hsts_policy_free (::SoupHSTSPolicy* policy);
// IGNORE; marked ignore

// const char* soup_hsts_policy_get_domain (SoupHSTSPolicy* policy);
// const char* soup_hsts_policy_get_domain (::SoupHSTSPolicy* policy);
GI_INLINE_DECL std::string get_domain () noexcept;

// gboolean soup_hsts_policy_includes_subdomains (SoupHSTSPolicy* policy);
// gboolean soup_hsts_policy_includes_subdomains (::SoupHSTSPolicy* policy);
GI_INLINE_DECL bool includes_subdomains () noexcept;

// gboolean soup_hsts_policy_is_expired (SoupHSTSPolicy* policy);
// gboolean soup_hsts_policy_is_expired (::SoupHSTSPolicy* policy);
GI_INLINE_DECL bool is_expired () noexcept;

// gboolean soup_hsts_policy_is_session_policy (SoupHSTSPolicy* policy);
// gboolean soup_hsts_policy_is_session_policy (::SoupHSTSPolicy* policy);
GI_INLINE_DECL bool is_session_policy () noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/hstspolicy_extra_def.hpp>)
#include <soup/hstspolicy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/hstspolicy_extra.hpp>)
#include <soup/hstspolicy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class HSTSPolicy : public GI_SOUP_HSTSPOLICY_BASE
{ typedef GI_SOUP_HSTSPOLICY_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupHSTSPolicy>
{ typedef Soup::HSTSPolicy type; }; 

} // namespace repository

} // namespace gi

#endif
