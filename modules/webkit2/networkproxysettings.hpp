// AUTO-GENERATED

#ifndef _GI_WEBKIT2_NETWORKPROXYSETTINGS_HPP_
#define _GI_WEBKIT2_NETWORKPROXYSETTINGS_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class NetworkProxySettings;

namespace base {


#define GI_WEBKIT2_NETWORKPROXYSETTINGS_BASE base::NetworkProxySettingsBase
class NetworkProxySettingsBase : public gi::detail::GBoxedWrapper<NetworkProxySettingsBase, ::WebKitNetworkProxySettings>
{
typedef gi::detail::GBoxedWrapper<NetworkProxySettingsBase, ::WebKitNetworkProxySettings> super_type;
public:

NetworkProxySettingsBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_network_proxy_settings_get_type(); } 

// WebKitNetworkProxySettings* webkit_network_proxy_settings_new (const gchar* default_proxy_uri, const gchar* const* ignore_hosts);
// ::WebKitNetworkProxySettings* webkit_network_proxy_settings_new (const char* default_proxy_uri, const char** ignore_hosts);
static GI_INLINE_DECL WebKit2::NetworkProxySettings new_ (const std::string & default_proxy_uri, const std::vector<std::string> & ignore_hosts) noexcept;
static GI_INLINE_DECL WebKit2::NetworkProxySettings new_ (const std::vector<std::string> & ignore_hosts) noexcept;

// void webkit_network_proxy_settings_add_proxy_for_scheme (WebKitNetworkProxySettings* proxy_settings, const gchar* scheme, const gchar* proxy_uri);
// void webkit_network_proxy_settings_add_proxy_for_scheme (::WebKitNetworkProxySettings* proxy_settings, const char* scheme, const char* proxy_uri);
GI_INLINE_DECL void add_proxy_for_scheme (const std::string & scheme, const std::string & proxy_uri) noexcept;

// WebKitNetworkProxySettings* webkit_network_proxy_settings_copy (WebKitNetworkProxySettings* proxy_settings);
// ::WebKitNetworkProxySettings* webkit_network_proxy_settings_copy (::WebKitNetworkProxySettings* proxy_settings);
GI_INLINE_DECL WebKit2::NetworkProxySettings copy () noexcept;

// void webkit_network_proxy_settings_free (WebKitNetworkProxySettings* proxy_settings);
// void webkit_network_proxy_settings_free (::WebKitNetworkProxySettings* proxy_settings);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/networkproxysettings_extra_def.hpp>)
#include <webkit2/networkproxysettings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/networkproxysettings_extra.hpp>)
#include <webkit2/networkproxysettings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class NetworkProxySettings : public GI_WEBKIT2_NETWORKPROXYSETTINGS_BASE
{ typedef GI_WEBKIT2_NETWORKPROXYSETTINGS_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitNetworkProxySettings>
{ typedef WebKit2::NetworkProxySettings type; }; 

} // namespace repository

} // namespace gi

#endif
