// AUTO-GENERATED

#ifndef _GI_WEBKIT2_ITPFIRSTPARTY_IMPL_HPP_
#define _GI_WEBKIT2_ITPFIRSTPARTY_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// const char* webkit_itp_first_party_get_domain (WebKitITPFirstParty* itp_first_party);
// const char* webkit_itp_first_party_get_domain (::WebKitITPFirstParty* itp_first_party);
std::string base::ITPFirstPartyBase::get_domain () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitITPFirstParty* itp_first_party);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_itp_first_party_get_domain;
  auto _temp_ret = call_wrap_v ((::WebKitITPFirstParty*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDateTime* webkit_itp_first_party_get_last_update_time (WebKitITPFirstParty* itp_first_party);
// ::GDateTime* webkit_itp_first_party_get_last_update_time (::WebKitITPFirstParty* itp_first_party);
GLib::DateTime base::ITPFirstPartyBase::get_last_update_time () noexcept
{
  typedef ::GDateTime* (*call_wrap_t) (::WebKitITPFirstParty* itp_first_party);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_itp_first_party_get_last_update_time;
  auto _temp_ret = call_wrap_v ((::WebKitITPFirstParty*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_itp_first_party_get_website_data_access_allowed (WebKitITPFirstParty* itp_first_party);
// gboolean webkit_itp_first_party_get_website_data_access_allowed (::WebKitITPFirstParty* itp_first_party);
bool base::ITPFirstPartyBase::get_website_data_access_allowed () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitITPFirstParty* itp_first_party);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_itp_first_party_get_website_data_access_allowed;
  auto _temp_ret = call_wrap_v ((::WebKitITPFirstParty*) (gobj_()));
  return _temp_ret;
}

// WebKitITPFirstParty* webkit_itp_first_party_ref (WebKitITPFirstParty* itp_first_party);
// ::WebKitITPFirstParty* webkit_itp_first_party_ref (::WebKitITPFirstParty* itp_first_party);
// IGNORE; marked ignore

// void webkit_itp_first_party_unref (WebKitITPFirstParty* itp_first_party);
// void webkit_itp_first_party_unref (::WebKitITPFirstParty* itp_first_party);
// IGNORE; marked ignore


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/itpfirstparty_extra_def_impl.hpp>)
#include <webkit2/itpfirstparty_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/itpfirstparty_extra_impl.hpp>)
#include <webkit2/itpfirstparty_extra_impl.hpp>
#endif
#endif

#endif
