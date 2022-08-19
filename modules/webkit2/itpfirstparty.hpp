// AUTO-GENERATED

#ifndef _GI_WEBKIT2_ITPFIRSTPARTY_HPP_
#define _GI_WEBKIT2_ITPFIRSTPARTY_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class ITPFirstParty;

namespace base {


#define GI_WEBKIT2_ITPFIRSTPARTY_BASE base::ITPFirstPartyBase
class ITPFirstPartyBase : public gi::detail::GBoxedWrapper<ITPFirstPartyBase, ::WebKitITPFirstParty>
{
typedef gi::detail::GBoxedWrapper<ITPFirstPartyBase, ::WebKitITPFirstParty> super_type;
public:

ITPFirstPartyBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_itp_first_party_get_type(); } 

// const char* webkit_itp_first_party_get_domain (WebKitITPFirstParty* itp_first_party);
// const char* webkit_itp_first_party_get_domain (::WebKitITPFirstParty* itp_first_party);
GI_INLINE_DECL std::string get_domain () noexcept;

// GDateTime* webkit_itp_first_party_get_last_update_time (WebKitITPFirstParty* itp_first_party);
// ::GDateTime* webkit_itp_first_party_get_last_update_time (::WebKitITPFirstParty* itp_first_party);
GI_INLINE_DECL GLib::DateTime get_last_update_time () noexcept;

// gboolean webkit_itp_first_party_get_website_data_access_allowed (WebKitITPFirstParty* itp_first_party);
// gboolean webkit_itp_first_party_get_website_data_access_allowed (::WebKitITPFirstParty* itp_first_party);
GI_INLINE_DECL bool get_website_data_access_allowed () noexcept;

// WebKitITPFirstParty* webkit_itp_first_party_ref (WebKitITPFirstParty* itp_first_party);
// ::WebKitITPFirstParty* webkit_itp_first_party_ref (::WebKitITPFirstParty* itp_first_party);
// IGNORE; marked ignore

// void webkit_itp_first_party_unref (WebKitITPFirstParty* itp_first_party);
// void webkit_itp_first_party_unref (::WebKitITPFirstParty* itp_first_party);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/itpfirstparty_extra_def.hpp>)
#include <webkit2/itpfirstparty_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/itpfirstparty_extra.hpp>)
#include <webkit2/itpfirstparty_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class ITPFirstParty : public GI_WEBKIT2_ITPFIRSTPARTY_BASE
{ typedef GI_WEBKIT2_ITPFIRSTPARTY_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitITPFirstParty>
{ typedef WebKit2::ITPFirstParty type; }; 

} // namespace repository

} // namespace gi

#endif
