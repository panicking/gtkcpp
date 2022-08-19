// AUTO-GENERATED

#ifndef _GI_WEBKIT2_ITPTHIRDPARTY_HPP_
#define _GI_WEBKIT2_ITPTHIRDPARTY_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class ITPFirstParty;

class ITPThirdParty;

namespace base {


#define GI_WEBKIT2_ITPTHIRDPARTY_BASE base::ITPThirdPartyBase
class ITPThirdPartyBase : public gi::detail::GBoxedWrapper<ITPThirdPartyBase, ::WebKitITPThirdParty>
{
typedef gi::detail::GBoxedWrapper<ITPThirdPartyBase, ::WebKitITPThirdParty> super_type;
public:

ITPThirdPartyBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_itp_third_party_get_type(); } 

// const char* webkit_itp_third_party_get_domain (WebKitITPThirdParty* itp_third_party);
// const char* webkit_itp_third_party_get_domain (::WebKitITPThirdParty* itp_third_party);
GI_INLINE_DECL std::string get_domain () noexcept;

// GList* webkit_itp_third_party_get_first_parties (WebKitITPThirdParty* itp_third_party);
// ::GList* webkit_itp_third_party_get_first_parties (::WebKitITPThirdParty* itp_third_party);
GI_INLINE_DECL std::vector<WebKit2::ITPFirstParty> get_first_parties () noexcept;

// WebKitITPThirdParty* webkit_itp_third_party_ref (WebKitITPThirdParty* itp_third_party);
// ::WebKitITPThirdParty* webkit_itp_third_party_ref (::WebKitITPThirdParty* itp_third_party);
// IGNORE; marked ignore

// void webkit_itp_third_party_unref (WebKitITPThirdParty* itp_third_party);
// void webkit_itp_third_party_unref (::WebKitITPThirdParty* itp_third_party);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/itpthirdparty_extra_def.hpp>)
#include <webkit2/itpthirdparty_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/itpthirdparty_extra.hpp>)
#include <webkit2/itpthirdparty_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class ITPThirdParty : public GI_WEBKIT2_ITPTHIRDPARTY_BASE
{ typedef GI_WEBKIT2_ITPTHIRDPARTY_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitITPThirdParty>
{ typedef WebKit2::ITPThirdParty type; }; 

} // namespace repository

} // namespace gi

#endif
