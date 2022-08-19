// AUTO-GENERATED

#ifndef _GI_WEBKIT2_MIMEINFO_HPP_
#define _GI_WEBKIT2_MIMEINFO_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class MimeInfo;

namespace base {


#define GI_WEBKIT2_MIMEINFO_BASE base::MimeInfoBase
class MimeInfoBase : public gi::detail::GBoxedWrapper<MimeInfoBase, ::WebKitMimeInfo>
{
typedef gi::detail::GBoxedWrapper<MimeInfoBase, ::WebKitMimeInfo> super_type;
public:

MimeInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_mime_info_get_type(); } 

// const gchar* webkit_mime_info_get_description (WebKitMimeInfo* info);
// const char* webkit_mime_info_get_description (::WebKitMimeInfo* info);
// IGNORE; deprecated

// const gchar* const* webkit_mime_info_get_extensions (WebKitMimeInfo* info);
// const char** webkit_mime_info_get_extensions (::WebKitMimeInfo* info);
// IGNORE; deprecated

// const gchar* webkit_mime_info_get_mime_type (WebKitMimeInfo* info);
// const char* webkit_mime_info_get_mime_type (::WebKitMimeInfo* info);
// IGNORE; deprecated

// WebKitMimeInfo* webkit_mime_info_ref (WebKitMimeInfo* info);
// ::WebKitMimeInfo* webkit_mime_info_ref (::WebKitMimeInfo* info);
// IGNORE; marked ignore

// void webkit_mime_info_unref (WebKitMimeInfo* info);
// void webkit_mime_info_unref (::WebKitMimeInfo* info);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/mimeinfo_extra_def.hpp>)
#include <webkit2/mimeinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/mimeinfo_extra.hpp>)
#include <webkit2/mimeinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class MimeInfo : public GI_WEBKIT2_MIMEINFO_BASE
{ typedef GI_WEBKIT2_MIMEINFO_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitMimeInfo>
{ typedef WebKit2::MimeInfo type; }; 

} // namespace repository

} // namespace gi

#endif
