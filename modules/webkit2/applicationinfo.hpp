// AUTO-GENERATED

#ifndef _GI_WEBKIT2_APPLICATIONINFO_HPP_
#define _GI_WEBKIT2_APPLICATIONINFO_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class ApplicationInfo;

namespace base {


#define GI_WEBKIT2_APPLICATIONINFO_BASE base::ApplicationInfoBase
class ApplicationInfoBase : public gi::detail::GBoxedWrapper<ApplicationInfoBase, ::WebKitApplicationInfo>
{
typedef gi::detail::GBoxedWrapper<ApplicationInfoBase, ::WebKitApplicationInfo> super_type;
public:

ApplicationInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_application_info_get_type(); } 

// WebKitApplicationInfo* webkit_application_info_new ();
// ::WebKitApplicationInfo* webkit_application_info_new ();
static GI_INLINE_DECL WebKit2::ApplicationInfo new_ () noexcept;

// const gchar* webkit_application_info_get_name (WebKitApplicationInfo* info);
// const char* webkit_application_info_get_name (::WebKitApplicationInfo* info);
GI_INLINE_DECL std::string get_name () noexcept;

// void webkit_application_info_get_version (WebKitApplicationInfo* info, guint64* major, guint64* minor, guint64* micro);
// void webkit_application_info_get_version (::WebKitApplicationInfo* info, guint64* major, guint64* minor, guint64* micro);
GI_INLINE_DECL void get_version (guint64 & major, guint64 * minor = nullptr, guint64 * micro = nullptr) noexcept;
GI_INLINE_DECL std::tuple<guint64, guint64, guint64> get_version () noexcept;

// WebKitApplicationInfo* webkit_application_info_ref (WebKitApplicationInfo* info);
// ::WebKitApplicationInfo* webkit_application_info_ref (::WebKitApplicationInfo* info);
// IGNORE; marked ignore

// void webkit_application_info_set_name (WebKitApplicationInfo* info, const gchar* name);
// void webkit_application_info_set_name (::WebKitApplicationInfo* info, const char* name);
GI_INLINE_DECL void set_name (const std::string & name) noexcept;

// void webkit_application_info_set_version (WebKitApplicationInfo* info, guint64 major, guint64 minor, guint64 micro);
// void webkit_application_info_set_version (::WebKitApplicationInfo* info, guint64 major, guint64 minor, guint64 micro);
GI_INLINE_DECL void set_version (guint64 major, guint64 minor, guint64 micro) noexcept;

// void webkit_application_info_unref (WebKitApplicationInfo* info);
// void webkit_application_info_unref (::WebKitApplicationInfo* info);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/applicationinfo_extra_def.hpp>)
#include <webkit2/applicationinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/applicationinfo_extra.hpp>)
#include <webkit2/applicationinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class ApplicationInfo : public GI_WEBKIT2_APPLICATIONINFO_BASE
{ typedef GI_WEBKIT2_APPLICATIONINFO_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitApplicationInfo>
{ typedef WebKit2::ApplicationInfo type; }; 

} // namespace repository

} // namespace gi

#endif
