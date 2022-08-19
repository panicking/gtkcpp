// AUTO-GENERATED

#ifndef _GI_WEBKIT2_ITPTHIRDPARTY_IMPL_HPP_
#define _GI_WEBKIT2_ITPTHIRDPARTY_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// const char* webkit_itp_third_party_get_domain (WebKitITPThirdParty* itp_third_party);
// const char* webkit_itp_third_party_get_domain (::WebKitITPThirdParty* itp_third_party);
std::string base::ITPThirdPartyBase::get_domain () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitITPThirdParty* itp_third_party);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_itp_third_party_get_domain;
  auto _temp_ret = call_wrap_v ((::WebKitITPThirdParty*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* webkit_itp_third_party_get_first_parties (WebKitITPThirdParty* itp_third_party);
// ::GList* webkit_itp_third_party_get_first_parties (::WebKitITPThirdParty* itp_third_party);
std::vector<WebKit2::ITPFirstParty> base::ITPThirdPartyBase::get_first_parties () noexcept
{
  typedef ::GList* (*call_wrap_t) (::WebKitITPThirdParty* itp_third_party);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_itp_third_party_get_first_parties;
  auto _temp_ret = call_wrap_v ((::WebKitITPThirdParty*) (gobj_()));
  return gi::detail::wrap_list<WebKit2::ITPFirstParty> (_temp_ret, gi::transfer_none);
}

// WebKitITPThirdParty* webkit_itp_third_party_ref (WebKitITPThirdParty* itp_third_party);
// ::WebKitITPThirdParty* webkit_itp_third_party_ref (::WebKitITPThirdParty* itp_third_party);
// IGNORE; marked ignore

// void webkit_itp_third_party_unref (WebKitITPThirdParty* itp_third_party);
// void webkit_itp_third_party_unref (::WebKitITPThirdParty* itp_third_party);
// IGNORE; marked ignore


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/itpthirdparty_extra_def_impl.hpp>)
#include <webkit2/itpthirdparty_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/itpthirdparty_extra_impl.hpp>)
#include <webkit2/itpthirdparty_extra_impl.hpp>
#endif
#endif

#endif
