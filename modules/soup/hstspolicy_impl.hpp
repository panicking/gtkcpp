// AUTO-GENERATED

#ifndef _GI_SOUP_HSTSPOLICY_IMPL_HPP_
#define _GI_SOUP_HSTSPOLICY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

static char* _field_domain_get (const ::SoupHSTSPolicy* obj) { return (char*) obj->domain; }
// char* HSTSPolicy::domain (const ::SoupHSTSPolicy* obj);
// char* HSTSPolicy::domain (const ::SoupHSTSPolicy* obj);
std::string base::HSTSPolicyBase::domain_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupHSTSPolicy* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_domain_get;
  auto _temp_ret = call_wrap_v ((const ::SoupHSTSPolicy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gulong _field_max_age_get (const ::SoupHSTSPolicy* obj) { return (gulong) obj->max_age; }
// gulong HSTSPolicy::max_age (const ::SoupHSTSPolicy* obj);
// gulong HSTSPolicy::max_age (const ::SoupHSTSPolicy* obj);
gulong base::HSTSPolicyBase::max_age_ () const noexcept
{
  typedef gulong (*call_wrap_t) (const ::SoupHSTSPolicy* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_max_age_get;
  auto _temp_ret = call_wrap_v ((const ::SoupHSTSPolicy*) (gobj_()));
  return _temp_ret;
}

static void _field_max_age_set (::SoupHSTSPolicy* obj, gulong _value) { obj->max_age = (decltype(obj->max_age)) _value; }
//  HSTSPolicy::max_age (::SoupHSTSPolicy* obj, gulong _value);
// void HSTSPolicy::max_age (::SoupHSTSPolicy* obj, gulong _value);
void base::HSTSPolicyBase::max_age_ (gulong _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupHSTSPolicy* obj, gulong _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_max_age_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupHSTSPolicy*) (gobj_()), (gulong) (_value_to_c));
}

static ::SoupDate* _field_expires_get (const ::SoupHSTSPolicy* obj) { return (::SoupDate*) obj->expires; }
// ::SoupDate* HSTSPolicy::expires (const ::SoupHSTSPolicy* obj);
// ::SoupDate* HSTSPolicy::expires (const ::SoupHSTSPolicy* obj);
Soup::Date base::HSTSPolicyBase::expires_ () const noexcept
{
  typedef ::SoupDate* (*call_wrap_t) (const ::SoupHSTSPolicy* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_expires_get;
  auto _temp_ret = call_wrap_v ((const ::SoupHSTSPolicy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gboolean _field_include_subdomains_get (const ::SoupHSTSPolicy* obj) { return (gboolean) obj->include_subdomains; }
// gboolean HSTSPolicy::include_subdomains (const ::SoupHSTSPolicy* obj);
// gboolean HSTSPolicy::include_subdomains (const ::SoupHSTSPolicy* obj);
bool base::HSTSPolicyBase::include_subdomains_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::SoupHSTSPolicy* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_include_subdomains_get;
  auto _temp_ret = call_wrap_v ((const ::SoupHSTSPolicy*) (gobj_()));
  return _temp_ret;
}

static void _field_include_subdomains_set (::SoupHSTSPolicy* obj, gboolean _value) { obj->include_subdomains = (decltype(obj->include_subdomains)) _value; }
//  HSTSPolicy::include_subdomains (::SoupHSTSPolicy* obj, gboolean _value);
// void HSTSPolicy::include_subdomains (::SoupHSTSPolicy* obj, gboolean _value);
void base::HSTSPolicyBase::include_subdomains_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupHSTSPolicy* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_include_subdomains_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupHSTSPolicy*) (gobj_()), (gboolean) (_value_to_c));
}

// SoupHSTSPolicy* soup_hsts_policy_new (const char* domain, unsigned long max_age, gboolean include_subdomains);
// ::SoupHSTSPolicy* soup_hsts_policy_new (const char* domain, gulong max_age, gboolean include_subdomains);
Soup::HSTSPolicy base::HSTSPolicyBase::new_ (const std::string & domain, gulong max_age, gboolean include_subdomains) noexcept
{
  typedef ::SoupHSTSPolicy* (*call_wrap_t) (const char* domain, gulong max_age, gboolean include_subdomains);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_policy_new;
  auto include_subdomains_to_c = include_subdomains;
  auto max_age_to_c = max_age;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (gulong) (max_age_to_c), (gboolean) (include_subdomains_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupHSTSPolicy* soup_hsts_policy_new_from_response (SoupMessage* msg);
// ::SoupHSTSPolicy* soup_hsts_policy_new_from_response (::SoupMessage* msg);
Soup::HSTSPolicy base::HSTSPolicyBase::new_from_response (Soup::Message msg) noexcept
{
  typedef ::SoupHSTSPolicy* (*call_wrap_t) (::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_policy_new_from_response;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupMessage*) (msg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupHSTSPolicy* soup_hsts_policy_new_full (const char* domain, unsigned long max_age, SoupDate* expires, gboolean include_subdomains);
// ::SoupHSTSPolicy* soup_hsts_policy_new_full (const char* domain, gulong max_age, ::SoupDate* expires, gboolean include_subdomains);
Soup::HSTSPolicy base::HSTSPolicyBase::new_full (const std::string & domain, gulong max_age, Soup::Date expires, gboolean include_subdomains) noexcept
{
  typedef ::SoupHSTSPolicy* (*call_wrap_t) (const char* domain, gulong max_age, ::SoupDate* expires, gboolean include_subdomains);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_policy_new_full;
  auto include_subdomains_to_c = include_subdomains;
  auto expires_to_c = gi::unwrap (expires, gi::transfer_none, gi::direction_in);
  auto max_age_to_c = max_age;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (gulong) (max_age_to_c), (::SoupDate*) (expires_to_c), (gboolean) (include_subdomains_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupHSTSPolicy* soup_hsts_policy_new_session_policy (const char* domain, gboolean include_subdomains);
// ::SoupHSTSPolicy* soup_hsts_policy_new_session_policy (const char* domain, gboolean include_subdomains);
Soup::HSTSPolicy base::HSTSPolicyBase::new_session_policy (const std::string & domain, gboolean include_subdomains) noexcept
{
  typedef ::SoupHSTSPolicy* (*call_wrap_t) (const char* domain, gboolean include_subdomains);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_policy_new_session_policy;
  auto include_subdomains_to_c = include_subdomains;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (domain_to_c), (gboolean) (include_subdomains_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupHSTSPolicy* soup_hsts_policy_copy (SoupHSTSPolicy* policy);
// ::SoupHSTSPolicy* soup_hsts_policy_copy (::SoupHSTSPolicy* policy);
Soup::HSTSPolicy base::HSTSPolicyBase::copy () noexcept
{
  typedef ::SoupHSTSPolicy* (*call_wrap_t) (::SoupHSTSPolicy* policy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_policy_copy;
  auto _temp_ret = call_wrap_v ((::SoupHSTSPolicy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean soup_hsts_policy_equal (SoupHSTSPolicy* policy1, SoupHSTSPolicy* policy2);
// gboolean soup_hsts_policy_equal (::SoupHSTSPolicy* policy1, ::SoupHSTSPolicy* policy2);
bool base::HSTSPolicyBase::equal (Soup::HSTSPolicy policy2) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupHSTSPolicy* policy1, ::SoupHSTSPolicy* policy2);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_policy_equal;
  auto policy2_to_c = gi::unwrap (policy2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupHSTSPolicy*) (gobj_()), (::SoupHSTSPolicy*) (policy2_to_c));
  return _temp_ret;
}

// void soup_hsts_policy_free (SoupHSTSPolicy* policy);
// void soup_hsts_policy_free (::SoupHSTSPolicy* policy);
// IGNORE; marked ignore

// const char* soup_hsts_policy_get_domain (SoupHSTSPolicy* policy);
// const char* soup_hsts_policy_get_domain (::SoupHSTSPolicy* policy);
std::string base::HSTSPolicyBase::get_domain () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupHSTSPolicy* policy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_policy_get_domain;
  auto _temp_ret = call_wrap_v ((::SoupHSTSPolicy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean soup_hsts_policy_includes_subdomains (SoupHSTSPolicy* policy);
// gboolean soup_hsts_policy_includes_subdomains (::SoupHSTSPolicy* policy);
bool base::HSTSPolicyBase::includes_subdomains () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupHSTSPolicy* policy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_policy_includes_subdomains;
  auto _temp_ret = call_wrap_v ((::SoupHSTSPolicy*) (gobj_()));
  return _temp_ret;
}

// gboolean soup_hsts_policy_is_expired (SoupHSTSPolicy* policy);
// gboolean soup_hsts_policy_is_expired (::SoupHSTSPolicy* policy);
bool base::HSTSPolicyBase::is_expired () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupHSTSPolicy* policy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_policy_is_expired;
  auto _temp_ret = call_wrap_v ((::SoupHSTSPolicy*) (gobj_()));
  return _temp_ret;
}

// gboolean soup_hsts_policy_is_session_policy (SoupHSTSPolicy* policy);
// gboolean soup_hsts_policy_is_session_policy (::SoupHSTSPolicy* policy);
bool base::HSTSPolicyBase::is_session_policy () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupHSTSPolicy* policy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_policy_is_session_policy;
  auto _temp_ret = call_wrap_v ((::SoupHSTSPolicy*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/hstspolicy_extra_def_impl.hpp>)
#include <soup/hstspolicy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/hstspolicy_extra_impl.hpp>)
#include <soup/hstspolicy_extra_impl.hpp>
#endif
#endif

#endif
