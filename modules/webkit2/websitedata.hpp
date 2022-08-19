// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBSITEDATA_HPP_
#define _GI_WEBKIT2_WEBSITEDATA_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class WebsiteData;

namespace base {


#define GI_WEBKIT2_WEBSITEDATA_BASE base::WebsiteDataBase
class WebsiteDataBase : public gi::detail::GBoxedWrapper<WebsiteDataBase, ::WebKitWebsiteData>
{
typedef gi::detail::GBoxedWrapper<WebsiteDataBase, ::WebKitWebsiteData> super_type;
public:

WebsiteDataBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_website_data_get_type(); } 

// const char* webkit_website_data_get_name (WebKitWebsiteData* website_data);
// const char* webkit_website_data_get_name (::WebKitWebsiteData* website_data);
GI_INLINE_DECL std::string get_name () noexcept;

// guint64 webkit_website_data_get_size (WebKitWebsiteData* website_data, WebKitWebsiteDataTypes types);
// guint64 webkit_website_data_get_size (::WebKitWebsiteData* website_data, ::WebKitWebsiteDataTypes types);
GI_INLINE_DECL guint64 get_size (WebKit2::WebsiteDataTypes types) noexcept;

// WebKitWebsiteDataTypes webkit_website_data_get_types (WebKitWebsiteData* website_data);
// ::WebKitWebsiteDataTypes webkit_website_data_get_types (::WebKitWebsiteData* website_data);
GI_INLINE_DECL WebKit2::WebsiteDataTypes get_types () noexcept;

// WebKitWebsiteData* webkit_website_data_ref (WebKitWebsiteData* website_data);
// ::WebKitWebsiteData* webkit_website_data_ref (::WebKitWebsiteData* website_data);
// IGNORE; marked ignore

// void webkit_website_data_unref (WebKitWebsiteData* website_data);
// void webkit_website_data_unref (::WebKitWebsiteData* website_data);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/websitedata_extra_def.hpp>)
#include <webkit2/websitedata_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/websitedata_extra.hpp>)
#include <webkit2/websitedata_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class WebsiteData : public GI_WEBKIT2_WEBSITEDATA_BASE
{ typedef GI_WEBKIT2_WEBSITEDATA_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitWebsiteData>
{ typedef WebKit2::WebsiteData type; }; 

} // namespace repository

} // namespace gi

#endif
