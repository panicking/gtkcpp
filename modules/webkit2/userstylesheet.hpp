// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERSTYLESHEET_HPP_
#define _GI_WEBKIT2_USERSTYLESHEET_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class UserStyleSheet;

namespace base {


#define GI_WEBKIT2_USERSTYLESHEET_BASE base::UserStyleSheetBase
class UserStyleSheetBase : public gi::detail::GBoxedWrapper<UserStyleSheetBase, ::WebKitUserStyleSheet>
{
typedef gi::detail::GBoxedWrapper<UserStyleSheetBase, ::WebKitUserStyleSheet> super_type;
public:

UserStyleSheetBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_user_style_sheet_get_type(); } 

// WebKitUserStyleSheet* webkit_user_style_sheet_new (const gchar* source, WebKitUserContentInjectedFrames injected_frames, WebKitUserStyleLevel level, const gchar* const* allow_list, const gchar* const* block_list);
// ::WebKitUserStyleSheet* webkit_user_style_sheet_new (const char* source, ::WebKitUserContentInjectedFrames injected_frames, ::WebKitUserStyleLevel level, const char** allow_list, const char** block_list);
static GI_INLINE_DECL WebKit2::UserStyleSheet new_ (const std::string & source, WebKit2::UserContentInjectedFrames injected_frames, WebKit2::UserStyleLevel level, const std::vector<std::string> & allow_list, const std::vector<std::string> & block_list) noexcept;

// WebKitUserStyleSheet* webkit_user_style_sheet_new_for_world (const gchar* source, WebKitUserContentInjectedFrames injected_frames, WebKitUserStyleLevel level, const gchar* world_name, const gchar* const* allow_list, const gchar* const* block_list);
// ::WebKitUserStyleSheet* webkit_user_style_sheet_new_for_world (const char* source, ::WebKitUserContentInjectedFrames injected_frames, ::WebKitUserStyleLevel level, const char* world_name, const char** allow_list, const char** block_list);
static GI_INLINE_DECL WebKit2::UserStyleSheet new_for_world (const std::string & source, WebKit2::UserContentInjectedFrames injected_frames, WebKit2::UserStyleLevel level, const std::string & world_name, const std::vector<std::string> & allow_list, const std::vector<std::string> & block_list) noexcept;

// WebKitUserStyleSheet* webkit_user_style_sheet_ref (WebKitUserStyleSheet* user_style_sheet);
// ::WebKitUserStyleSheet* webkit_user_style_sheet_ref (::WebKitUserStyleSheet* user_style_sheet);
// IGNORE; marked ignore

// void webkit_user_style_sheet_unref (WebKitUserStyleSheet* user_style_sheet);
// void webkit_user_style_sheet_unref (::WebKitUserStyleSheet* user_style_sheet);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/userstylesheet_extra_def.hpp>)
#include <webkit2/userstylesheet_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/userstylesheet_extra.hpp>)
#include <webkit2/userstylesheet_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class UserStyleSheet : public GI_WEBKIT2_USERSTYLESHEET_BASE
{ typedef GI_WEBKIT2_USERSTYLESHEET_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitUserStyleSheet>
{ typedef WebKit2::UserStyleSheet type; }; 

} // namespace repository

} // namespace gi

#endif
