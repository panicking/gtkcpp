// AUTO-GENERATED

#ifndef _GI_SOUP_HSTSENFORCER_IMPL_HPP_
#define _GI_SOUP_HSTSENFORCER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Soup::SessionFeature HSTSEnforcerBase::interface_ (gi::interface_tag<Soup::SessionFeature>)
{ return gi::wrap ((Soup::SessionFeature::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

HSTSEnforcerBase::operator Soup::SessionFeature ()
{ return interface_ (gi::interface_tag<Soup::SessionFeature>()); }

// SoupHSTSEnforcer* soup_hsts_enforcer_new ();
// ::SoupHSTSEnforcer* soup_hsts_enforcer_new ();
Soup::HSTSEnforcer base::HSTSEnforcerBase::new_ () noexcept
{
  typedef ::SoupHSTSEnforcer* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_enforcer_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* soup_hsts_enforcer_get_domains (SoupHSTSEnforcer* hsts_enforcer, gboolean session_policies);
// ::GList* soup_hsts_enforcer_get_domains (::SoupHSTSEnforcer* hsts_enforcer, gboolean session_policies);
std::vector<std::string> base::HSTSEnforcerBase::get_domains (gboolean session_policies) noexcept
{
  typedef ::GList* (*call_wrap_t) (::SoupHSTSEnforcer* hsts_enforcer, gboolean session_policies);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_enforcer_get_domains;
  auto session_policies_to_c = session_policies;
  auto _temp_ret = call_wrap_v ((::SoupHSTSEnforcer*) (gobj_()), (gboolean) (session_policies_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GList* soup_hsts_enforcer_get_policies (SoupHSTSEnforcer* hsts_enforcer, gboolean session_policies);
// ::GList* soup_hsts_enforcer_get_policies (::SoupHSTSEnforcer* hsts_enforcer, gboolean session_policies);
std::vector<Soup::HSTSPolicy> base::HSTSEnforcerBase::get_policies (gboolean session_policies) noexcept
{
  typedef ::GList* (*call_wrap_t) (::SoupHSTSEnforcer* hsts_enforcer, gboolean session_policies);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_enforcer_get_policies;
  auto session_policies_to_c = session_policies;
  auto _temp_ret = call_wrap_v ((::SoupHSTSEnforcer*) (gobj_()), (gboolean) (session_policies_to_c));
  return gi::detail::wrap_list<Soup::HSTSPolicy> (_temp_ret, gi::transfer_full);
}

// gboolean soup_hsts_enforcer_has_valid_policy (SoupHSTSEnforcer* hsts_enforcer, const char* domain);
// gboolean soup_hsts_enforcer_has_valid_policy (::SoupHSTSEnforcer* hsts_enforcer, const char* domain);
bool base::HSTSEnforcerBase::has_valid_policy (const std::string & domain) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupHSTSEnforcer* hsts_enforcer, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_enforcer_has_valid_policy;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupHSTSEnforcer*) (gobj_()), (const char*) (domain_to_c));
  return _temp_ret;
}

// gboolean soup_hsts_enforcer_is_persistent (SoupHSTSEnforcer* hsts_enforcer);
// gboolean soup_hsts_enforcer_is_persistent (::SoupHSTSEnforcer* hsts_enforcer);
bool base::HSTSEnforcerBase::is_persistent () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupHSTSEnforcer* hsts_enforcer);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_enforcer_is_persistent;
  auto _temp_ret = call_wrap_v ((::SoupHSTSEnforcer*) (gobj_()));
  return _temp_ret;
}

// void soup_hsts_enforcer_set_policy (SoupHSTSEnforcer* hsts_enforcer, SoupHSTSPolicy* policy);
// void soup_hsts_enforcer_set_policy (::SoupHSTSEnforcer* hsts_enforcer, ::SoupHSTSPolicy* policy);
void base::HSTSEnforcerBase::set_policy (Soup::HSTSPolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::SoupHSTSEnforcer* hsts_enforcer, ::SoupHSTSPolicy* policy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_enforcer_set_policy;
  auto policy_to_c = gi::unwrap (policy, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupHSTSEnforcer*) (gobj_()), (::SoupHSTSPolicy*) (policy_to_c));
}

// void soup_hsts_enforcer_set_session_policy (SoupHSTSEnforcer* hsts_enforcer, const char* domain, gboolean include_subdomains);
// void soup_hsts_enforcer_set_session_policy (::SoupHSTSEnforcer* hsts_enforcer, const char* domain, gboolean include_subdomains);
void base::HSTSEnforcerBase::set_session_policy (const std::string & domain, gboolean include_subdomains) noexcept
{
  typedef void (*call_wrap_t) (::SoupHSTSEnforcer* hsts_enforcer, const char* domain, gboolean include_subdomains);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_hsts_enforcer_set_session_policy;
  auto include_subdomains_to_c = include_subdomains;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupHSTSEnforcer*) (gobj_()), (const char*) (domain_to_c), (gboolean) (include_subdomains_to_c));
}




} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/hstsenforcer_extra_def_impl.hpp>)
#include <soup/hstsenforcer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/hstsenforcer_extra_impl.hpp>)
#include <soup/hstsenforcer_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void HSTSEnforcerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupHSTSEnforcerClass *methods = (::SoupHSTSEnforcerClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (Soup::HSTSPolicy old_policy, Soup::HSTSPolicy new_policy), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::changed_>;
  methods->has_valid_policy = (decltype (methods->has_valid_policy)) detail::method_wrapper<self, bool (*) (const std::string & domain), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::has_valid_policy_>;
  methods->hsts_enforced = (decltype (methods->hsts_enforced)) detail::method_wrapper<self, void (*) (Soup::Message message), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::hsts_enforced_>;
  methods->is_persistent = (decltype (methods->is_persistent)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_persistent_>;
}

// void HSTSEnforcer::changed (SoupHSTSEnforcer* enforcer, SoupHSTSPolicy* old_policy, SoupHSTSPolicy* new_policy);
// void HSTSEnforcer::changed (::SoupHSTSEnforcer* enforcer, ::SoupHSTSPolicy* old_policy, ::SoupHSTSPolicy* new_policy);
void HSTSEnforcerClass::changed_ (Soup::HSTSPolicy old_policy, Soup::HSTSPolicy new_policy) noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::SoupHSTSEnforcer* enforcer, ::SoupHSTSPolicy* old_policy, ::SoupHSTSPolicy* new_policy);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  auto new_policy_to_c = gi::unwrap (new_policy, gi::transfer_none, gi::direction_in);
  auto old_policy_to_c = gi::unwrap (old_policy, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupHSTSEnforcer*) (gobj_()), (::SoupHSTSPolicy*) (old_policy_to_c), (::SoupHSTSPolicy*) (new_policy_to_c));
}

// gboolean HSTSEnforcer::has_valid_policy (SoupHSTSEnforcer* hsts_enforcer, const char* domain);
// gboolean HSTSEnforcer::has_valid_policy (::SoupHSTSEnforcer* hsts_enforcer, const char* domain);
bool HSTSEnforcerClass::has_valid_policy_ (const std::string & domain) noexcept
{
  if (!get_struct_()->has_valid_policy) return bool{};
  typedef gboolean (*call_wrap_t) (::SoupHSTSEnforcer* hsts_enforcer, const char* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->has_valid_policy;
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupHSTSEnforcer*) (gobj_()), (const char*) (domain_to_c));
  return _temp_ret;
}

// void HSTSEnforcer::hsts_enforced (SoupHSTSEnforcer* enforcer, SoupMessage* message);
// void HSTSEnforcer::hsts_enforced (::SoupHSTSEnforcer* enforcer, ::SoupMessage* message);
void HSTSEnforcerClass::hsts_enforced_ (Soup::Message message) noexcept
{
  if (!get_struct_()->hsts_enforced) return ;
  typedef void (*call_wrap_t) (::SoupHSTSEnforcer* enforcer, ::SoupMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->hsts_enforced;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupHSTSEnforcer*) (gobj_()), (::SoupMessage*) (message_to_c));
}

// gboolean HSTSEnforcer::is_persistent (SoupHSTSEnforcer* hsts_enforcer);
// gboolean HSTSEnforcer::is_persistent (::SoupHSTSEnforcer* hsts_enforcer);
bool HSTSEnforcerClass::is_persistent_ () noexcept
{
  if (!get_struct_()->is_persistent) return bool{};
  typedef gboolean (*call_wrap_t) (::SoupHSTSEnforcer* hsts_enforcer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_persistent;
  auto _temp_ret = call_wrap_v ((::SoupHSTSEnforcer*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
