// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERCONTENTFILTER_HPP_
#define _GI_WEBKIT2_USERCONTENTFILTER_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class UserContentFilter;

namespace base {


#define GI_WEBKIT2_USERCONTENTFILTER_BASE base::UserContentFilterBase
class UserContentFilterBase : public gi::detail::GBoxedWrapper<UserContentFilterBase, ::WebKitUserContentFilter>
{
typedef gi::detail::GBoxedWrapper<UserContentFilterBase, ::WebKitUserContentFilter> super_type;
public:

UserContentFilterBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_user_content_filter_get_type(); } 

// const char* webkit_user_content_filter_get_identifier (WebKitUserContentFilter* user_content_filter);
// const char* webkit_user_content_filter_get_identifier (::WebKitUserContentFilter* user_content_filter);
GI_INLINE_DECL std::string get_identifier () noexcept;

// WebKitUserContentFilter* webkit_user_content_filter_ref (WebKitUserContentFilter* user_content_filter);
// ::WebKitUserContentFilter* webkit_user_content_filter_ref (::WebKitUserContentFilter* user_content_filter);
// IGNORE; marked ignore

// void webkit_user_content_filter_unref (WebKitUserContentFilter* user_content_filter);
// void webkit_user_content_filter_unref (::WebKitUserContentFilter* user_content_filter);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/usercontentfilter_extra_def.hpp>)
#include <webkit2/usercontentfilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/usercontentfilter_extra.hpp>)
#include <webkit2/usercontentfilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class UserContentFilter : public GI_WEBKIT2_USERCONTENTFILTER_BASE
{ typedef GI_WEBKIT2_USERCONTENTFILTER_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitUserContentFilter>
{ typedef WebKit2::UserContentFilter type; }; 

} // namespace repository

} // namespace gi

#endif
