// AUTO-GENERATED

#ifndef _GI_WEBKIT2_NETWORKPROXYSETTINGS_IMPL_HPP_
#define _GI_WEBKIT2_NETWORKPROXYSETTINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitNetworkProxySettings* webkit_network_proxy_settings_new (const gchar* default_proxy_uri, const gchar* const* ignore_hosts);
// ::WebKitNetworkProxySettings* webkit_network_proxy_settings_new (const char* default_proxy_uri, const char** ignore_hosts);
WebKit2::NetworkProxySettings base::NetworkProxySettingsBase::new_ (const std::string & default_proxy_uri, const std::vector<std::string> & ignore_hosts) noexcept
{
  typedef ::WebKitNetworkProxySettings* (*call_wrap_t) (const char* default_proxy_uri, const char** ignore_hosts);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_network_proxy_settings_new;
  auto ignore_hosts_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (ignore_hosts);
  auto ignore_hosts_w = unwrap (ignore_hosts_i, gi::transfer_none, direction_in);
  auto ignore_hosts_to_c = ignore_hosts_w.gobj_(false);
  auto default_proxy_uri_to_c = gi::unwrap (default_proxy_uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (default_proxy_uri_to_c), (const char**) (ignore_hosts_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
WebKit2::NetworkProxySettings base::NetworkProxySettingsBase::new_ (const std::vector<std::string> & ignore_hosts) noexcept
{
  typedef ::WebKitNetworkProxySettings* (*call_wrap_t) (const char* default_proxy_uri, const char** ignore_hosts);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_network_proxy_settings_new;
  auto ignore_hosts_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (ignore_hosts);
  auto ignore_hosts_w = unwrap (ignore_hosts_i, gi::transfer_none, direction_in);
  auto ignore_hosts_to_c = ignore_hosts_w.gobj_(false);
  auto default_proxy_uri_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (default_proxy_uri_to_c), (const char**) (ignore_hosts_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_network_proxy_settings_add_proxy_for_scheme (WebKitNetworkProxySettings* proxy_settings, const gchar* scheme, const gchar* proxy_uri);
// void webkit_network_proxy_settings_add_proxy_for_scheme (::WebKitNetworkProxySettings* proxy_settings, const char* scheme, const char* proxy_uri);
void base::NetworkProxySettingsBase::add_proxy_for_scheme (const std::string & scheme, const std::string & proxy_uri) noexcept
{
  typedef void (*call_wrap_t) (::WebKitNetworkProxySettings* proxy_settings, const char* scheme, const char* proxy_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_network_proxy_settings_add_proxy_for_scheme;
  auto proxy_uri_to_c = gi::unwrap (proxy_uri, gi::transfer_none, gi::direction_in);
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitNetworkProxySettings*) (gobj_()), (const char*) (scheme_to_c), (const char*) (proxy_uri_to_c));
}

// WebKitNetworkProxySettings* webkit_network_proxy_settings_copy (WebKitNetworkProxySettings* proxy_settings);
// ::WebKitNetworkProxySettings* webkit_network_proxy_settings_copy (::WebKitNetworkProxySettings* proxy_settings);
WebKit2::NetworkProxySettings base::NetworkProxySettingsBase::copy () noexcept
{
  typedef ::WebKitNetworkProxySettings* (*call_wrap_t) (::WebKitNetworkProxySettings* proxy_settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_network_proxy_settings_copy;
  auto _temp_ret = call_wrap_v ((::WebKitNetworkProxySettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_network_proxy_settings_free (WebKitNetworkProxySettings* proxy_settings);
// void webkit_network_proxy_settings_free (::WebKitNetworkProxySettings* proxy_settings);
// IGNORE; marked ignore


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/networkproxysettings_extra_def_impl.hpp>)
#include <webkit2/networkproxysettings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/networkproxysettings_extra_impl.hpp>)
#include <webkit2/networkproxysettings_extra_impl.hpp>
#endif
#endif

#endif
